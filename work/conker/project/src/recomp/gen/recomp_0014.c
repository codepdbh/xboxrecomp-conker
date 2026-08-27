/**
 * Burnout 3 - Recompiled code chunk 14
 * Functions: 250 (0x00139550 - 0x0014D8A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00139550
 * Original: 0x00139550 - 0x001395CA (122 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00139550: ;
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi << 2;
    ecx = MEM32(esi + 0x774980);
    if (TEST_Z(ecx, ecx)) goto loc_0013956B; /* je: equal / zero */

loc_00139561: ;
    MEM32(esi + 0x774980) = 0;

loc_0013956B: ;
    if (CMP_NE(eax, 8)) goto loc_0013957B; /* jne: not equal / not zero */

loc_00139570: ;
    if (CMP_NE(MEM8(0x774965), 0xFE)) goto loc_001395C8; /* jne: not equal / not zero */

loc_00139579: ;
    goto loc_001395A9;

loc_0013957B: ;
    if (CMP_NE(eax, 9)) goto loc_001395A9; /* jne: not equal / not zero */

loc_00139580: ;
    if (CMP_NE(MEM8(0x774964), 0xFE)) goto loc_001395A9; /* jne: not equal / not zero */

loc_00139589: ;
    eax = MEM32(0x774A10);
    if (TEST_Z(eax, eax)) goto loc_001395A9; /* je: equal / zero */

loc_00139592: ;
    PUSH32(esp, 0x774A10);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013959C: ;
    esp = esp + 4;
    MEM32(0x774A10) = 0;

loc_001395A9: ;
    eax = MEM32(esi + 0x774970);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = esi + 0x774970;
    if (TEST_Z(eax, eax)) goto loc_001395C8; /* je: equal / zero */

loc_001395B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001395BF: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_001395C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001395D0
 * Original: 0x001395D0 - 0x001397A9 (473 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001395D0: ;
    esp = esp - 0xC;
    ecx = 0; /* xor self */
    eax = 0x774970;
    /* nop */

loc_001395E0: ;
    if (CMP_LE(MEM8(ecx + 0x77495C), 0xFE)) goto loc_001395F5; /* jle: less or equal (signed <=) */

loc_001395E9: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_001395F5; /* jne: not equal / not zero */

loc_001395EE: ;
    MEM8(ecx + 0x77495C) = 0xFE;

loc_001395F5: ;
    eax = eax + 0x14;
    ecx++;
    if (CMP_L(eax, 0x774A4C)) goto loc_001395E0; /* jl: less (signed <) */

loc_00139600: ;
    SET_LO8(eax, MEM8(0x774968));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(0x7FA20C);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0013961D; /* jbe: below or equal (unsigned <=) */

loc_0013960F: ;
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_00139618; /* jns: not sign (positive) */

loc_00139616: ;
    eax = 0; /* xor self */

loc_00139618: ;
    MEM8(0x774968) = LO8(eax);

loc_0013961D: ;
    SET_LO8(eax, MEM8(0x774969));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00139634; /* jbe: below or equal (unsigned <=) */

loc_00139626: ;
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_0013962F; /* jns: not sign (positive) */

loc_0013962D: ;
    eax = 0; /* xor self */

loc_0013962F: ;
    MEM8(0x774969) = LO8(eax);

loc_00139634: ;
    SET_LO8(eax, MEM8(0x77496A));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0013964B; /* jbe: below or equal (unsigned <=) */

loc_0013963D: ;
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_00139646; /* jns: not sign (positive) */

loc_00139644: ;
    eax = 0; /* xor self */

loc_00139646: ;
    MEM8(0x77496A) = LO8(eax);

loc_0013964B: ;
    SET_LO8(eax, MEM8(0x77496B));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00139662; /* jbe: below or equal (unsigned <=) */

loc_00139654: ;
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_0013965D; /* jns: not sign (positive) */

loc_0013965B: ;
    eax = 0; /* xor self */

loc_0013965D: ;
    MEM8(0x77496B) = LO8(eax);

loc_00139662: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = 0x774978;
    ebx = 0x6B6A40;

loc_00139675: ;
    if (CMP_NE(MEM8(ebp + 0x77495C), 1)) goto loc_001396AC; /* jne: not equal / not zero */

loc_0013967E: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    edi = MEM32(ebp * 4 + 0x596E60);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    edx = ebx + -4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x596E58));
    ecx = ebx + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00112750(); /* call 0x00112750 */

loc_001396A9: ;
    esp = esp + 0x14;

loc_001396AC: ;
    edx = MEM32(esp + 0x10);
    ebp++;
    edx = edx + 0x14;
    ebx = ebx + 0x38;
    (void)0; /* cmp ebp, 7 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(ebp, 7)) goto loc_00139675; /* jl: less (signed <) */

loc_001396C0: ;
    MEM32(esp + 0x14) = 0x77499C;
    MEM32(esp + 0x10) = 0x596E68;
    ebp = 0x6B6CA8;
    ebx = 0; /* xor self */
    MEM32(esp + 0x18) = 3;
    /* nop */

loc_001396E0: ;
    if (CMP_NE(MEM8(ebx + 0x77495E), 1)) goto loc_00139717; /* jne: not equal / not zero */

loc_001396E9: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebx + 0x596E5A));
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    esi = MEM32(ecx);
    PUSH32(esp, 0); sub_00112750(); /* call 0x00112750 */

loc_00139714: ;
    esp = esp + 0x14;

loc_00139717: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ebp = ebp + 0x38;
    edx = edx + 4;
    ecx = ecx + 0x14;
    ebx++;
    eax--;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_001396E0; /* jne: not equal / not zero */

loc_0013973C: ;
    if (CMP_NE(MEM8(0x774963), 1)) goto loc_0013974C; /* jne: not equal / not zero */

loc_00139745: ;
    SET_LO8(eax, 7);
    PUSH32(esp, 0); sub_000BBD40(); /* call 0x000BBD40 */

loc_0013974C: ;
    ebx = 0; /* xor self */
    edi = edi;

loc_00139750: ;
    if (CMP_NE(MEM8(ebx + 0x774964), 1)) goto loc_00139762; /* jne: not equal / not zero */

loc_00139759: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) + 8);
    PUSH32(esp, 0); sub_001031D0(); /* call 0x001031D0 */

loc_00139762: ;
    ebx++;
    if (CMP_L(ebx, 2)) goto loc_00139750; /* jl: less (signed <) */

loc_00139768: ;
    if (CMP_NE(MEM8(0x774963), 1)) goto loc_00139778; /* jne: not equal / not zero */

loc_00139771: ;
    MEM8(0x774966) = 1;

loc_00139778: ;
    edi = 0; /* xor self */
    esi = 0x774970;
    /* nop */

loc_00139780: ;
    if (CMP_NE(MEM8(edi + 0x77495C), 0xFE)) goto loc_00139795; /* jne: not equal / not zero */

loc_00139789: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00139795; /* je: equal / zero */

loc_0013978E: ;
    eax = edi;
    PUSH32(esp, 0); sub_00139550(); /* call 0x00139550 */

loc_00139795: ;
    esi = esi + 0x14;
    edi++;
    if (CMP_L(esi, 0x774A4C)) goto loc_00139780; /* jl: less (signed <) */

loc_001397A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = 0; /* xor self */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001397B0(); return; /* tail jmp 0x001397B0 */

}

/**
 * sub_001397E0
 * Original: 0x001397E0 - 0x00139833 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397E0(void)
{
    float xmm0;

loc_001397E0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(eax + 0x78); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    PUSH32(esp, 0x43AF0000);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    esi = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0013982B: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00139840
 * Original: 0x00139840 - 0x00139A2E (494 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139840(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00139840: ;
    esp = esp - 0x3C;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    eax = 0x5F42A0;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00139852: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_00139864: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001398D0; /* je: equal / zero */

loc_0013986B: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x32)) goto loc_00139A29; /* je: equal / zero */

loc_00139878: ;
    MEM8(esp + 4) = 3;
    MEM8(esp + 5) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00139887: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x4B189680);
    ecx = esi + 0x78;
    MEM8(esp + 0x26) = 0;
    edx = edx + 0x41;
    MEM16(esp + 0x22) = LO16(edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_001398C8: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_001398D0: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x32)) goto loc_00139A29; /* je: equal / zero */

loc_001398DE: ;
    if (CMP_EQ(eax, 0x14)) goto loc_00139A29; /* je: equal / zero */

loc_001398E7: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 0x14) = LO8(eax);
    (void)0; /* cmp MEM32(esi + 0x68), 0x7B - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    eax = esi;
    if (CMP_EQ(MEM32(esi + 0x68), 0x7B)) goto loc_00139904; /* je: equal / zero */

loc_001398FD: ;
    PUSH32(esp, 0x5F429C);
    goto loc_00139909;

loc_00139904: ;
    PUSH32(esp, 0x5D58D8);

loc_00139909: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0013990E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64AADC); /* movss */
    MEM8(esp + 0x19) = LO8(eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    SET_LO8(eax, 1);
    esp = esp + 4;
    MEM8(esp + 0x3B) = LO8(eax);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64AAD8); /* movss */
    MEM8(esp + 0x3A) = LO8(eax);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    MEM8(esp + 0x40) = 0xFF;
    MEM8(esp + 0x41) = 8;
    MEM8(esp + 0x42) = 0x1F;
    MEM16(esp + 0x2C) = 0xAA;
    MEM16(esp + 0x2E) = 0x28;
    MEM16(esp + 0x30) = 7;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x3C) = 2;
    MEM8(esp + 0x3D) = 4;
    PUSH32(esp, 0); sub_00139A30(); /* call 0x00139A30 */

loc_00139996: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0013A770(); /* call 0x0013A770 */

loc_0013999E: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0013AAF0(); /* call 0x0013AAF0 */

loc_001399A6: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    esp = esp + 0xC;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AA);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_001399C5: ;
    eax = MEM32(esi + 0x68);
    xmm0 = 0.0f; /* xorps self = zero */
    (void)0; /* cmp eax, 0x7B - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    eax = esi;
    if (CMP_EQ(eax, 0x7B)) goto loc_001399EB; /* je: equal / zero */

loc_001399E4: ;
    PUSH32(esp, 0x5F429C);
    goto loc_001399F0;

loc_001399EB: ;
    PUSH32(esp, 0x5D58D8);

loc_001399F0: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_001399F5: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x47C35000);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    edx = 0x12C;
    eax = esp + 0x2C;
    ecx = esi;
    PUSH32(esp, 0); sub_0011EE10(); /* call 0x0011EE10 */

loc_00139A26: ;
    esp = esp + 0x28;

loc_00139A29: ;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A30
 * Original: 0x00139A30 - 0x00139A42 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00139A30: ;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(esi), 0)) { sub_00139A42(); return; } /* jne: not equal / not zero */

loc_00139A3B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B00
 * Original: 0x00139B00 - 0x00139B21 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139B00: ;
    ecx = MEM32(esp + 4);
    (void)0; /* cmp MEM8(ecx + 0x4C), 2 - flags set for next jcc */
    edx = MEM32(ecx + 0x140);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x144);
    if (CMP_GE(MEM8(ecx + 0x4C), 2)) { sub_00139B21(); return; } /* jge: greater or equal (signed >=) */

loc_00139B17: ;
    if (TEST_Z(MEM8(ebp + 0x30), 1)) { sub_00139B21(); return; } /* je: equal / zero */

loc_00139B1D: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00139C30
 * Original: 0x00139C30 - 0x00139C65 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139C30: ;
    esp = esp - 0x54;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    eax = MEM32(ebp + 0x140);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x144);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00139C5D; /* je: equal / zero */

loc_00139C52: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(esi + 4))) { sub_00139C65(); return; } /* je: equal / zero */

loc_00139C5D: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F80
 * Original: 0x00139F80 - 0x0013A769 (2025 bytes, 562 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F80(void)
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

loc_00139F80: ;
    esp = esp - 0x48;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_0013A764; /* jle: less or equal (signed <=) */

loc_00139F92: ;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(edi + 0x41));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x5C);
    eax = MEM32(edi + esi * 4 + 0x130);
    ebx = ebx + 5;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_00139FD2; /* jne: not equal / not zero */

loc_00139FAE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = ebx + ebx;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00139FC0: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + esi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_0013A762; /* je: equal / zero */

loc_00139FD2: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(edi + esi * 4 + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx--;
    ecx = ecx & ebx;
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_0013A761; /* je: equal / zero */

loc_00139FF3: ;
    eax = MEM32(0x8470DC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    ebx = MEM32(edi + 0x144);
    edx = MEM32(edi + 0x140);
    ecx = esi + eax + 0x330;
    (void)0; /* test MEM8(ebx + 0x30), 2 - flags set for next jcc */
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x28) = ecx;
    if (TEST_Z(MEM8(ebx + 0x30), 2)) goto loc_0013A062; /* je: equal / zero */

loc_0013A023: ;
    SET_LO16(edx, ZX8(MEM8(ebx + 0x2B)));
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    SET_LO8(ecx, 0); /* xor self */
    MEM16(esp + 0x24) = LO16(edx);

loc_0013A033: ;
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 2;
    MEM8(esi + edx * 8 + 0x14) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx + 0x2C));
    edx = ZX8(MEM8(edi + 0x41));
    eax++;
    if (CMP_NE(eax, edx)) goto loc_0013A04C; /* jne: not equal / not zero */

loc_0013A04A: ;
    eax = 0; /* xor self */

loc_0013A04C: ;
    edx = MEM32(esp + 0x24);
    edx--;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0013A062; /* je: equal / zero */

loc_0013A05A: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    if (CMP_NE(eax, edx)) goto loc_0013A033; /* jne: not equal / not zero */

loc_0013A062: ;
    if (TEST_Z(MEM8(ebx + 0x30), 4)) goto loc_0013A0BE; /* je: equal / zero */

loc_0013A068: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x2D)));
    MEM16(esp + 0x24) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    SET_LO8(ecx, 0); /* xor self */
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0013A080; /* jns: not sign (positive) */

loc_0013A07B: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_0013A080: ;
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 2;
    esi = esi + edx * 8 + 0x14;
    edx = ZX8(MEM8(esi));
    ebx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ebx = MEM32(esp + 0x2C);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(esi) = LO8(edx);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx + 0x2E));
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0013A0A8; /* jns: not sign (positive) */

loc_0013A0A3: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_0013A0A8: ;
    edx = MEM32(esp + 0x24);
    edx--;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0013A0BE; /* je: equal / zero */

loc_0013A0B6: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    if (CMP_NE(eax, edx)) goto loc_0013A080; /* jne: not equal / not zero */

loc_0013A0BE: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_0013A0C5: ;
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(0x75BA4C));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0013A172; /* jbe: below or equal (unsigned <=) */

loc_0013A0D6: ;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_0013A10B; /* jne: not equal / not zero */

loc_0013A0E3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0013A0F4: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0013A0FC: ;
    ecx = MEM32(0x75BA48);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75BA48);

loc_0013A10B: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0013A137; /* jne: not equal / not zero */

loc_0013A112: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0013A11A: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0013A137; /* jne: not equal / not zero */

loc_0013A12A: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BA48);

loc_0013A137: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0013A164; /* jne: not equal / not zero */

loc_0013A13F: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0013A15B; /* jne: not equal / not zero */

loc_0013A149: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0013A152: ;
    esi = MEM32(0x75BA48);
    esp = esp + 8;

loc_0013A15B: ;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x14) = eax;
    goto loc_0013A17A;

loc_0013A164: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0013A169: ;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0013A17A;

loc_0013A172: ;
    MEM32(esp + 0x14) = 0;

loc_0013A17A: ;
    esi = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(esi + 0x3838), edx)) goto loc_0013A19B; /* je: equal / zero */

loc_0013A18A: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013A18F: ;
    eax = MEM32(esp + 0x14);
    ecx = esi;
    MEM32(ecx + 0x3838) = eax;

loc_0013A19B: ;
    if (TEST_Z(MEM8(edi + 0x3A), 2)) goto loc_0013A1DA; /* je: equal / zero */

loc_0013A1A1: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    esi--;
    MEM32(esp + 0x14) = esi;
    if (((int32_t)esi >= 0)) goto loc_0013A1B7; /* jns: not sign (positive) */

loc_0013A1AC: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;
    esi = eax;

loc_0013A1B7: ;
    edi = edi + 0x2C;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x18);
    edx = esi + esi * 2;
    MEM32(esp + 0x54) = ecx;
    edx = eax + edx * 8;
    goto loc_0013A21E;

loc_0013A1DA: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0013A1E6; /* jns: not sign (positive) */

loc_0013A1E1: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_0013A1E6: ;
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0013A1FA; /* jge: greater or equal (signed >=) */

loc_0013A1F1: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x14) = ecx;

loc_0013A1FA: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    eax = eax + eax * 2;
    edx = ecx + eax * 8;
    eax = edx;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = eax;

loc_0013A21E: ;
    SET_LO8(ecx, MEM8(edx + 0x15));
    SET_LO8(eax, MEM8(ebx + 0x4C));
    edi = MEM32(esp + 0x18);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(esp + 0x12) = LO8(ecx);
    ecx = ZX8(MEM8(edx + 0x14));
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm4 = MEMF(esp + 0x4C); /* movss */
    edx = esi + esi * 2;
    edi = edi + edx * 8;
    edx = edi;
    ebx = MEM32(edx);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x48) = edx;
    SET_LO8(edx, MEM8(edi + 0x15));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x10));
    MEM32(esp + 0x44) = ebx;
    ebx = ZX8(MEM8(edi + 0x14));
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(esp + 0x48); /* subss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - MEMF(esp + 0x44); /* subss */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = MEM32(esp + 0x28);
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    xmm3 = xmm3 - MEMF(eax + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(eax); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x40); /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    ecx = (uint32_t)((int32_t)ecx >> 8);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0013A32C; /* jp: parity */

loc_0013A31E: ;
    xmm3 = xmm1; /* movaps */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm2 = xmm1; /* movaps */
    goto loc_0013A35D;

loc_0013A32C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [edi + 0xc] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm3 = MEMF(esp + 0x34); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */

loc_0013A35D: ;
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm6 = MEMF(esp + 0x50); /* movss */
    xmm7 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm4 = MEMF(0x649204); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(ebp + 0x14) = xmm4; /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x12));
    MEMF(ebp + 8) = xmm0; /* movss */
    eax = eax << 6;
    MEM8(ebp + 0xF) = LO8(ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    ebp = ebp + 0x1C;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    edi = 0; /* xor self */
    MEM16(ebp + -4) = LO16(edi);
    eax = (int32_t)xmm4; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm3; /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x38); /* subss */
    eax = (int32_t)xmm3; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    eax = (int32_t)xmm3; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(ebp + 8) = xmm2; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM16(ebp + 0x18) = LO16(edi);
    ebp = ebp + 0x1C;
    ecx = ebp + -56;
    goto loc_0013A475;

loc_0013A459: ;
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm7 = MEMF(esp + 0x54); /* movss */
    xmm6 = MEMF(esp + 0x50); /* movss */
    SET_LO8(edx, MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x1C);
    edi = 0; /* xor self */

loc_0013A475: ;
    eax = MEM32(esp + 0x28);
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
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
    MEMF(esp + 0x3C) = xmm0; /* movss */
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
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0013A51B; /* jp: parity */

loc_0013A510: ;
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    goto loc_0013A55C;

loc_0013A51B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edi = MEM32(esp + 0x18);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    eax = esi + esi * 2;
    /* FPU: fdivr dword ptr [edi + eax*8 + 0xc] */
    edi = 0; /* xor self */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm4 = MEMF(esp + 0x34); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */

loc_0013A55C: ;
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    xmm7 = MEMF(0x649204); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    edx = ZX8(LO8(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    edx = edx << 6;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm4; /* subss */
    eax = (int32_t)xmm7; /* cvttss2si */
    edx = SX16(LO16(eax));
    MEM16(ebp + 0x18) = LO16(edi);
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm3; /* subss */
    eax = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(eax));
    ebp = ebp + 0x1C;
    xmm5 = xmm5 - xmm2; /* subss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(eax));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(ebp + 0x18) = LO16(edi);
    edi = MEM32(esp + 0x24);
    ecx = ecx + 0x1C;
    MEMF(ebp) = xmm4; /* movss */
    MEMF(ebp + 4) = xmm3; /* movss */
    MEMF(ebp + 8) = xmm2; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    ebp = ebp + 0x1C;
    ecx = ecx + 0x1C;
    PUSH32(esp, 0xFF);
    eax = ebp + -112;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    eax = 4;
    ecx = edi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_0013A666: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0013A673: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0013A680: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    if (CMP_BE(LO8(edx), MEM8(esp + 0x12))) goto loc_0013A6D3; /* jbe: below or equal (unsigned <=) */

loc_0013A68A: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    esi = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x649130); /* movss */
    eax = MEM32(esp + 0x1C);
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
    MEM32(esp + 0x1C) = eax;

loc_0013A6D3: ;
    edi = esi;
    esi--;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x14) = esi;
    if (((int32_t)esi >= 0)) goto loc_0013A6EF; /* jns: not sign (positive) */

loc_0013A6E0: ;
    ecx = MEM32(esp + 0x5C);
    eax = ZX8(MEM8(ecx + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;
    esi = eax;

loc_0013A6EF: ;
    eax = MEM32(esp + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_EQ(edi, ecx)) goto loc_0013A761; /* je: equal / zero */

loc_0013A6FB: ;
    eax = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x54) = eax;
    eax = esi + esi * 2;
    eax = edi + eax * 8;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = edi;
    edi = MEM32(esp + 0x2C);
    SET_LO8(ebx, MEM8(edi + 0x4C));
    edi = MEM32(esp + 0x30);
    MEM8(esp + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x15));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    ebx = ZX8(MEM8(eax + 0x14));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_NE(edi, ecx)) goto loc_0013A459; /* jne: not equal / not zero */

loc_0013A761: ;
    POP32(esp, ebp);

loc_0013A762: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0013A764: ;
    POP32(esp, edi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0013A770
 * Original: 0x0013A770 - 0x0013A818 (168 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013A770: ;
    esp = esp - 0x30;
    if (TEST_Z(eax, eax)) goto loc_0013A814; /* je: equal / zero */

loc_0013A77B: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    MEM8(esp + 8) = LO8(ecx);
    (void)0; /* cmp MEM32(eax + 0x68), 0x7B - flags set for next jcc */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(MEM32(eax + 0x68), 0x7B)) goto loc_0013A7A5; /* je: equal / zero */

loc_0013A79E: ;
    PUSH32(esp, 0x5F429C);
    goto loc_0013A7AA;

loc_0013A7A5: ;
    PUSH32(esp, 0x5D58D8);

loc_0013A7AA: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0013A7AF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649B68); /* movss */
    edx = esp;
    MEM8(esp + 0x10) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x34));
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x30) = 0x64;
    MEM8(esp + 0x32) = 0xA;
    MEM8(esp + 0x33) = 1;
    MEM8(esp + 0x34) = 0xFF;
    MEM8(esp + 0x35) = 0;
    PUSH32(esp, 0); sub_000B0070(); /* call 0x000B0070 */

loc_0013A811: ;
    esp = esp + 8;

loc_0013A814: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A820
 * Original: 0x0013A820 - 0x0013AA14 (500 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A820(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_0013A820: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = 0x303;
    MEM32(esp + 0x40) = 0x27;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013A83C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    ebx = 0; /* xor self */
    eax = 1;
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    MEM16(esp + 0x44) = LO16(eax);
    MEM16(esp + 0x46) = 0xFF;
    MEM16(esp + 0x48) = LO16(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    edx = edx + 0xF;
    MEM16(esp + 0x14) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0013A892: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA248); /* movss */
    xmm0 = xmm0 * MEMF(0x64A488); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xA0); /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xA4); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xA8); /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEM32(esp + 0x80) = 0xD;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013A949: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013A958; /* je: equal / zero */

loc_0013A94D: ;
    MEM32(esp + 0x80) = 0x4D;

loc_0013A958: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013A95D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013A96C; /* je: equal / zero */

loc_0013A961: ;
    MEM32(esp + 0x80) = MEM32(esp + 0x80) | 0x80;

loc_0013A96C: ;
    edx = MEM32(esp + 0xAC);
    eax = 2;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(edx + 4));
    ecx = 4;
    MEM8(esp + 0x10) = LO8(eax);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM8(esp + 0x37) = 0xFF;
    MEM8(esp + 0x9C) = LO8(ebx);
    MEM8(esp + 0x9D) = 0xFF;
    MEM16(esp + 0x18) = 0x10;
    MEM16(esp + 0x1A) = 0xF;
    MEM16(esp + 0x1C) = 0xD;
    MEM16(esp + 0x1E) = 0x13;
    MEM16(esp + 0x20) = 0x11;
    MEM16(esp + 0x22) = 0xFFE8;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0013A9ED: ;
    esp = esp + 0x14;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0013AA0D; /* je: equal / zero */

loc_0013A9F5: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0013AA0D: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA20
 * Original: 0x0013AA20 - 0x0013AA85 (101 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0013AA20: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x2C));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x174))) goto loc_0013AA3C; /* jge: greater or equal (signed >=) */

loc_0013AA31: ;
    SET_LO8(eax, MEM8(ecx + 0x176));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x3B) = LO8(eax);

loc_0013AA3C: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x178))) goto loc_0013AA73; /* jge: greater or equal (signed >=) */

loc_0013AA45: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x17A);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    xmm1 = MEMF(ecx + 0x68); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ecx + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x6C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ecx + 0x6C) = xmm1; /* movss */

loc_0013AA73: ;
    (void)0; /* cmp LO16(edx), MEM16(ecx + 0x170) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x170))) goto loc_0013AA84; /* jge: greater or equal (signed >=) */

loc_0013AA7E: ;
    MEM8(ecx + 0xA0) = LO8(eax);

loc_0013AA84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA90
 * Original: 0x0013AA90 - 0x0013AAE6 (86 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0013AA90: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x2C));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x174))) goto loc_0013AAAC; /* jge: greater or equal (signed >=) */

loc_0013AAA1: ;
    SET_LO8(eax, MEM8(ecx + 0x176));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x3B) = LO8(eax);

loc_0013AAAC: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x178))) goto loc_0013AAE3; /* jge: greater or equal (signed >=) */

loc_0013AAB5: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x17A);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    xmm1 = MEMF(ecx + 0x68); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ecx + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x6C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ecx + 0x6C) = xmm1; /* movss */

loc_0013AAE3: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAF0
 * Original: 0x0013AAF0 - 0x0013AB70 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013AAF0: ;
    esp = esp - 0x24;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    xmm0 = MEMF(0x64A484); /* movss */
    MEM8(esp + 8) = LO8(ecx);
    (void)0; /* cmp MEM32(eax + 0x68), 0x7B - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_EQ(MEM32(eax + 0x68), 0x7B)) goto loc_0013AB55; /* je: equal / zero */

loc_0013AB1F: ;
    edx = MEM32(eax + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    ebx = 0x5F429C;

loc_0013AB38: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0013AB41: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0013AB70(); return; } /* je: equal / zero */

loc_0013AB48: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_0013AB70(); return; } /* je: equal / zero */

loc_0013AB50: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0013AB72(); return; /* tail jmp 0x0013AB72 */

loc_0013AB55: ;
    eax = MEM32(eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ebx = 0x5D58D8;
    goto loc_0013AB38;

}

/**
 * sub_0013AC00
 * Original: 0x0013AC00 - 0x0013AE49 (585 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_0013AC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(eax + 0x64);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, ebx)) goto loc_0013AE2D; /* je: equal / zero */

loc_0013AC22: ;
    if (CMP_EQ(ecx, 8)) goto loc_0013AE2D; /* je: equal / zero */

loc_0013AC2B: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x50))) goto loc_0013AE2D; /* jne: not equal / not zero */

loc_0013AC3A: ;
    if (CMP_EQ(MEM32(eax + 0x3C8), ebx)) goto loc_0013AE42; /* je: equal / zero */

loc_0013AC46: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_0013AE42; /* je: equal / zero */

loc_0013AC58: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x58); /* addss */
    xmm5 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esi + 0x58) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0013AE42; /* jbe: below or equal (unsigned <=) */

loc_0013AC80: ;
    SET_LO16(edi, ZX8(MEM8(eax + 0x171)));
    edx = ZX8(MEM8(esi + 0x5C));
    PUSH32(esp, eax);
    eax = esp + 0x94;
    edi = edi - 0x40;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0013AC9C: ;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0013ACAE: ;
    eax = (int32_t)MEMF(esi + 0x58); /* cvttss2si */
    xmm1 = MEMF(esi + 0x58); /* movss */
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x98);
    MEM16(esp + 0x20) = LO16(eax);
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x9C);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC0); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x64) = eax;
    eax = 1;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEM16(esp + 0x4A) = LO16(eax);
    MEM16(esp + 0x4E) = LO16(eax);
    eax = 0x32;
    edi = edi + 0xFFFFFFE7u;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648E1C); /* movss */
    esp = esp + 0x10;
    MEM16(esp + 0x12) = LO16(ebx);
    MEMF(esi + 0x58) = xmm1; /* movss */
    MEM32(esp + 0x14) = 0x28;
    MEM32(esp + 0x1C) = 0x205;
    MEM32(esp + 0x20) = ebx;
    MEM16(esp + 0x24) = 0x17;
    MEM16(esp + 0x26) = 0xD;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x30) = LO8(ebx);
    MEM8(esp + 0x31) = LO8(ebx);
    MEM8(esp + 0x32) = LO8(ebx);
    MEM8(esp + 0x33) = 0xFF;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM8(esp + 0x35) = LO8(ebx);
    MEM8(esp + 0x36) = LO8(ebx);
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    MEM16(esp + 0x3C) = LO16(ebx);
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEM8(esp + 0x78) = LO8(ebx);
    MEM16(esp + 0x58) = LO16(edi);
    MEM16(esp + 0x5A) = 0xFFD4;
    MEM16(esp + 0x5C) = LO16(eax);
    MEM16(esp + 0x5E) = LO16(eax);
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x70) = 7;
    MEM8(esp + 0x76) = 1;
    MEM8(esp + 0x77) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013ADD6: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013ADE2; /* je: equal / zero */

loc_0013ADDA: ;
    MEM32(esp + 0x70) = 0x47;

loc_0013ADE2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013ADE7: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013ADF3; /* je: equal / zero */

loc_0013ADEB: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;

loc_0013ADF3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) | 0xFF);
    edx = esp + 0x10;
    MEM8(esp + 0x37) = 0xFF;
    MEM8(esp + 0x38) = LO8(ebx);
    MEM8(esp + 0x39) = 0xFF;
    MEM8(esp + 0x74) = LO8(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    MEM8(esp + 0x81) = LO8(eax);
    PUSH32(esp, 0); sub_000F5420(); /* call 0x000F5420 */

loc_0013AE23: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013AE2D: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);

loc_0013AE42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE50
 * Original: 0x0013AE50 - 0x0013AEB5 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013AE50: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) goto loc_0013AE88; /* jne: not equal / not zero */

loc_0013AE63: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_0013AE75; /* je: equal / zero */

loc_0013AE6D: ;
    SET_LO8(edx, MEM8(esi + 4));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_0013AEB3; /* jne: not equal / not zero */

loc_0013AE75: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    MEM8(ecx + 0x50) = 0;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) | 5);
    MEM8(eax + 0x30) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013AE88: ;
    if (CMP_NE(edx, 0x2D)) goto loc_0013AEB3; /* jne: not equal / not zero */

loc_0013AE8D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_0013AEA6; /* jne: not equal / not zero */

loc_0013AE99: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013AEA6: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_0013AEB3; /* jne: not equal / not zero */

loc_0013AEAB: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_0013AEB3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AEC0
 * Original: 0x0013AEC0 - 0x0013AEED (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0013AEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0013AEE6; /* je: equal / zero */

loc_0013AED8: ;
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_NE(LO8(ecx), 0xF)) { sub_0013AEED(); return; } /* jne: not equal / not zero */

loc_0013AEE6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF20
 * Original: 0x0013AF20 - 0x0013AF84 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013AF20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    ebx = MEM32(ecx + 0x64);
    eax = esi + 0x4C;
    SET_LO8(edx, 0); /* xor self */
    if (TEST_NZ(ebx, ebx)) goto loc_0013AF37; /* jne: not equal / not zero */

loc_0013AF35: ;
    SET_LO8(edx, 1);

loc_0013AF37: ;
    SET_LO8(ebx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(ebx), MEM8(eax + 4))) goto loc_0013AF6C; /* jne: not equal / not zero */

loc_0013AF42: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0013AF6C; /* jne: not equal / not zero */

loc_0013AF46: ;
    edx = MEM32(ecx + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_0013AF81; /* je: equal / zero */

loc_0013AF50: ;
    SET_LO8(ecx, MEM8(ecx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_0013AF81; /* je: equal / zero */

loc_0013AF5E: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00139A30(); /* call 0x00139A30 */

loc_0013AF69: ;
    esp = esp + 4;

loc_0013AF6C: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);

loc_0013AF81: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF90
 * Original: 0x0013AF90 - 0x0013AFDC (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013AF90: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0013AFDA; /* jne: not equal / not zero */

loc_0013AF9D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x4C))) goto loc_0013AFB0; /* je: equal / zero */

loc_0013AFA8: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_0013AFDA; /* jne: not equal / not zero */

loc_0013AFB0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013AFDA; /* jne: not equal / not zero */

loc_0013AFB9: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0013AFC0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0013AFDA; /* jl: less (signed <) */

loc_0013AFC7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0013AFDC(); return; } /* je: equal / zero */

loc_0013AFD4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013AFD7: ;
    esp = esp + 4;

loc_0013AFDA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AFF0
 * Original: 0x0013AFF0 - 0x0013B026 (54 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013AFF0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x31;
    eax = eax + 0x3E;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    eax = eax + 0xF0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0013B015: ;
    ebp = eax;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(ebp, edx)) { sub_0013B026(); return; } /* jne: not equal / not zero */

loc_0013B020: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B1D0
 * Original: 0x0013B1D0 - 0x0013B2F8 (296 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1D0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_0013B1D0: ;
    xmm0 = MEMF(0x648E18); /* movss */
    edx = MEM32(esp + 4);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm1 = MEMF(esi + 0xF8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xF4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xF0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0013B237: ;
    eax = MEM32(esi + 0x44);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm3 = MEMF(edx); /* movss */
    MEMF(edx + 0x34) = xmm1; /* movss */
    MEM32(edx + 0x30) = eax;
    MEMF(edx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xFC); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(edx) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(edx + 4); /* mulss */
    xmm1 = xmm0; /* movaps */
    MEMF(edx + 4) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0xC); /* mulss */
    xmm3 = xmm3 * MEMF(edx + 8); /* mulss */
    MEMF(edx + 0xC) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x10); /* mulss */
    MEMF(edx + 0x10) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x14); /* mulss */
    MEMF(edx + 0x14) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x1C); /* mulss */
    xmm2 = xmm2 * MEMF(edx + 0x18); /* mulss */
    MEMF(edx + 0x1C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x20); /* mulss */
    MEMF(edx + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x24); /* mulss */
    MEMF(edx + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x28); /* mulss */
    xmm0 = xmm0 * MEMF(edx + 0x2C); /* mulss */
    esp = esp + 0x24;
    MEMF(edx + 8) = xmm3; /* movss */
    MEMF(edx + 0x18) = xmm2; /* movss */
    MEMF(edx + 0x28) = xmm1; /* movss */
    MEMF(edx + 0x2C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B300
 * Original: 0x0013B300 - 0x0013B47B (379 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B300(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0013B300: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = eax + 0x100;
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x7FA20C);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_0013B366; /* je: equal / zero */

loc_0013B32F: ;
    xmm2 = MEMF(eax + 0x11C); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = MEMF(eax + 0x108); /* movss */

loc_0013B343: ;
    edx--;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = xmm3; /* movaps */
    if ((edx != 0)) goto loc_0013B343; /* jne: not equal / not zero */

loc_0013B35A: ;
    MEMF(ecx) = xmm0; /* movss */
    MEMF(eax + 0x108) = xmm1; /* movss */

loc_0013B366: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm2 = MEMF(eax + 0x108); /* movss */
    xmm3 = MEMF(esp); /* movss */
    xmm4 = MEMF(0x7FA248); /* movss */
    xmm6 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(eax + 0x118); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x118); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x104); /* addss */
    MEMF(eax + 0x104) = xmm1; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 4); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm3; /* movss */
    xmm1 = MEMF(eax + 0x10C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xF0); /* addss */
    MEMF(eax + 0xF0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x110); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xF4); /* addss */
    MEMF(eax + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x114); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xF8); /* addss */
    MEMF(eax + 0xF8) = xmm1; /* movss */
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B480
 * Original: 0x0013B480 - 0x0013B544 (196 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B480(void)
{
    float xmm0, xmm1;

loc_0013B480: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0x48);
    xmm0 = MEMF(eax + 0xF0); /* movss */
    eax = MEM32(eax + 0x44);
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0013B4A9: ;
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 8); /* mulss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x10); /* mulss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x14); /* mulss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x18); /* mulss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x1C); /* mulss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x20); /* mulss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x24); /* mulss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x28); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0x2C); /* mulss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B550
 * Original: 0x0013B550 - 0x0013B5FD (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013B550: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_0013B5AF; /* jl: less (signed <) */

loc_0013B55D: ;
    esi = ebx + 0xD8;

loc_0013B563: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0013B5A2; /* je: equal / zero */

loc_0013B569: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013B56F: ;
    if (TEST_NZ(eax, eax)) goto loc_0013B5A2; /* jne: not equal / not zero */

loc_0013B573: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0013B5A2; /* je: equal / zero */

loc_0013B579: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013B599: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0013B5A2: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_0013B563; /* jle: less or equal (signed <=) */

loc_0013B5AF: ;
    eax = MEM32(ebx + 0xE8);
    if (TEST_Z(eax, eax)) goto loc_0013B5FA; /* je: equal / zero */

loc_0013B5B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013B5BF: ;
    if (TEST_NZ(eax, eax)) goto loc_0013B5FA; /* jne: not equal / not zero */

loc_0013B5C3: ;
    eax = MEM32(ebx + 0xE8);
    if (TEST_Z(eax, eax)) goto loc_0013B5FA; /* je: equal / zero */

loc_0013B5CD: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013B5ED: ;
    esp = esp + 4;
    MEM32(ebx + 0xE8) = 0;

loc_0013B5FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B600
 * Original: 0x0013B600 - 0x0013B620 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0013B550(); /* call 0x0013B550 */

loc_0013B60A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0013B620(); return; } /* jne: not equal / not zero */

loc_0013B613: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0013B630
 * Original: 0x0013B630 - 0x0013B645 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B630(void)
{

loc_0013B630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0013B550(); /* call 0x0013B550 */

loc_0013B63A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0013B640: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B650
 * Original: 0x0013B650 - 0x0013B679 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013B650: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x30));
    if (CMP_LE(MEM16(ecx + 0xF0), LO16(eax))) goto loc_0013B676; /* jle: less or equal (signed <=) */

loc_0013B661: ;
    edx = ZX8(MEM8(ecx + 0x36));
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xF4));
    if (CMP_GE(eax, edx)) goto loc_0013B676; /* jge: greater or equal (signed >=) */

loc_0013B673: ;
    MEM8(ecx + 0x36) = LO8(eax);

loc_0013B676: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B680
 * Original: 0x0013B680 - 0x0013B6DE (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B680(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013B680: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, 0x2D)) goto loc_0013B6B9; /* jne: not equal / not zero */

loc_0013B68A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x3C);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_0013B6A9; /* jne: not equal / not zero */

loc_0013B69B: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x3C) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x40) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013B6A9: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_0013B6DC; /* jne: not equal / not zero */

loc_0013B6AE: ;
    MEM32(eax + 0x3C) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0x40) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013B6B9: ;
    edx = 0; /* xor self */
    if (CMP_NE(eax, edx)) goto loc_0013B6DC; /* jne: not equal / not zero */

loc_0013B6BF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    esi = MEM32(ecx);
    if (CMP_EQ(esi, MEM32(eax + 0x3C))) goto loc_0013B6D6; /* je: equal / zero */

loc_0013B6CE: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x40))) goto loc_0013B6DC; /* jne: not equal / not zero */

loc_0013B6D6: ;
    MEM32(eax + 0x3C) = edx;
    MEM8(eax + 0x40) = LO8(edx);

loc_0013B6DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6E0
 * Original: 0x0013B6E0 - 0x0013B72E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6E0(void)
{

loc_0013B6E0: ;
    PUSH32(esp, esi);
    MEM8(eax + 0x3844) = 1;
    PUSH32(esp, 0); sub_0013CCE0(); /* call 0x0013CCE0 */

loc_0013B6ED: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 8);
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edx = esi + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0013B711: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = esi + edx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0013B72A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B730
 * Original: 0x0013B730 - 0x0013B7F6 (198 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B730: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = SX16(LO16(edx));
    MEM32(eax + 0x3840) = edx;
    edx = eax + 0x38;
    MEM32(eax + 0x28) = edx;
    ecx = 0; /* xor self */
    edx = eax + 0x838;
    MEM32(eax + 0x2C) = edx;
    SET_LO8(edx, MEM8(eax + 0x3845));
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649200); /* movss */
    SET_LO8(edx, LO8(edx) & 0xF0);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x3844) = LO8(ecx);
    MEM32(eax + 0x3848) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    SET_LO8(edx, LO8(edx) | 0x10);
    MEM8(eax + 0x3845) = LO8(edx);
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    MEM32(eax + 0x383C) = ecx;
    MEM32(eax + 0x3838) = ecx;
    ecx = ZX8(MEM8(esp + 4));
    ecx = ecx + 0xFFFFFFFEu;
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    if (CMP_A(ecx, 3)) goto loc_0013B7F3; /* ja: above (unsigned >) */

loc_0013B7C7: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x13B7F8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0013B7CEu) goto loc_0013B7CE;
    if (_jt == 0x0013B7D8u) goto loc_0013B7D8;
    if (_jt == 0x0013B7E2u) goto loc_0013B7E2;
    if (_jt == 0x0013B7ECu) goto loc_0013B7EC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013B7CE: ;
    MEM8(eax + 0x3845) = MEM8(eax + 0x3845) | 2;
    esp += 8; return; /* ret 4 */

loc_0013B7D8: ;
    MEM8(eax + 0x3845) = MEM8(eax + 0x3845) | 4;
    esp += 8; return; /* ret 4 */

loc_0013B7E2: ;
    MEM8(eax + 0x3845) = MEM8(eax + 0x3845) | 3;
    esp += 8; return; /* ret 4 */

loc_0013B7EC: ;
    MEM8(eax + 0x3845) = MEM8(eax + 0x3845) & 0xEF;

loc_0013B7F3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B810
 * Original: 0x0013B810 - 0x0013B9BD (429 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    eax = MEM32(esi + 0x24);
    eax = eax + edi;
    if (CMP_GE(eax, 0x3FF)) goto loc_0013B839; /* jge: greater or equal (signed >=) */

loc_0013B82C: ;
    ecx = MEM32(esi + 0x20);
    ecx = ecx + ebp;
    if (CMP_L(ecx, 0x1FF)) goto loc_0013B83E; /* jl: less (signed <) */

loc_0013B839: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013B83E: ;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0013B867; /* jle: less or equal (signed <=) */

loc_0013B844: ;
    SET_LO16(edx, MEM16(ebx + eax * 2));
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x28);
    MEM16(ebp + ecx * 2) = LO16(edx);
    ebp = MEM32(esi + 0x24);
    ebp++;
    eax++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x24) = ebp;
    if (CMP_L(eax, edi)) goto loc_0013B844; /* jl: less (signed <) */

loc_0013B863: ;
    ebp = MEM32(esp + 0x18);

loc_0013B867: ;
    if (CMP_LE(ebp & ebp, 0)) { sub_0013B9BD(); return; } /* jle: less or equal (signed <=) */

loc_0013B86F: ;
    edi = MEM32(esp + 0x20);
    ebx = ZX8(MEM8(esp + 0x14));
    edi = edi + 0xD;
    goto loc_0013B880;

    /* nop */

loc_0013B880: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    eax = edi + -13;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    ecx = eax + eax * 2;
    eax = edx + ecx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0013B89B: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = eax + eax * 2;
    SET_LO8(eax, MEM8(edi + -1));
    MEM8(edx + ecx * 8 + 0xE) = LO8(eax);
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = eax + eax * 2;
    SET_LO8(eax, MEM8(edi));
    MEM8(edx + ecx * 8 + 0xD) = LO8(eax);
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = eax + eax * 2;
    SET_LO8(eax, MEM8(edi + 1));
    MEM8(edx + ecx * 8 + 0xC) = LO8(eax);
    ecx = ZX8(MEM8(edi + 2));
    eax = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(eax + edx * 8 + 0xF) = LO8(ecx);
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = eax + eax * 2;
    eax = MEM32(edi + 3);
    MEM32(edx + ecx * 8 + 0x10) = eax;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = eax + eax * 2;
    eax = MEM32(edi + 7);
    MEM32(edx + ecx * 8 + 0x14) = eax;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    xmm0 = MEMF(esi + 0x10); /* movss */
    ecx = eax + eax * 2;
    /* comiss xmm0, MEMF(edx + ecx * 8) - sets EFLAGS */
    eax = edx + ecx * 8;
    if ((xmm0 <= MEMF(edx + ecx * 8))) goto loc_0013B91A; /* jbe: below or equal (unsigned <=) */

loc_0013B918: ;
    goto loc_0013B91E;

loc_0013B91A: ;
    xmm0 = MEMF(eax); /* movss */

loc_0013B91E: ;
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) goto loc_0013B930; /* jbe: below or equal (unsigned <=) */

loc_0013B92E: ;
    goto loc_0013B935;

loc_0013B930: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_0013B935: ;
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_0013B947; /* jbe: below or equal (unsigned <=) */

loc_0013B945: ;
    goto loc_0013B94C;

loc_0013B947: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_0013B94C: ;
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_0013B960; /* jbe: below or equal (unsigned <=) */

loc_0013B95A: ;
    xmm0 = MEMF(esi); /* movss */
    goto loc_0013B964;

loc_0013B960: ;
    xmm0 = MEMF(eax); /* movss */

loc_0013B964: ;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_0013B97A; /* jbe: below or equal (unsigned <=) */

loc_0013B973: ;
    xmm0 = MEMF(esi + 4); /* movss */
    goto loc_0013B97F;

loc_0013B97A: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_0013B97F: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_0013B996; /* jbe: below or equal (unsigned <=) */

loc_0013B98F: ;
    xmm0 = MEMF(esi + 8); /* movss */
    goto loc_0013B99B;

loc_0013B996: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_0013B99B: ;
    edx = MEM32(esi + 0x20);
    edx++;
    edi = edi + 0x18;
    ebp--;
    MEMF(esi + 8) = xmm0; /* movss */
    MEM32(esi + 0x20) = edx;
    if ((ebp != 0)) goto loc_0013B880; /* jne: not equal / not zero */

loc_0013B9B1: ;
    POP32(esp, edi);
    eax = edx;
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013B9D0
 * Original: 0x0013B9D0 - 0x0013BB4C (380 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B9D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    if (CMP_GE(MEM32(esi + 0x24), 0x3FF)) goto loc_0013B9EB; /* jge: greater or equal (signed >=) */

loc_0013B9DF: ;
    eax = MEM32(esi + 0x20);
    eax = eax + edi;
    if (CMP_L(eax, 0x1FF)) goto loc_0013B9F0; /* jl: less (signed <) */

loc_0013B9EB: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013B9F0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(edi & edi, 0)) goto loc_0013BB47; /* jle: less or equal (signed <=) */

loc_0013B9FE: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0x18));
    eax = eax + 0xD;
    /* nop */

loc_0013BA10: ;
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    ecx = ebx + ecx * 8;
    edx = eax + -13;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x20);
    SET_LO8(ebx, MEM8(eax + -1));
    edx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xE) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    SET_LO8(ebx, MEM8(eax));
    edx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xD) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    SET_LO8(ebx, MEM8(eax + 1));
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xC) = LO8(ebx);
    edx = ZX8(MEM8(eax + 2));
    ecx = MEM32(esi + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    ebx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ebx + ecx * 8 + 0xF) = LO8(edx);
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(eax + 3);
    edx = ecx + ecx * 2;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + edx * 8 + 0x10) = ebx;
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(eax + 7);
    edx = ecx + ecx * 2;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + edx * 8 + 0x14) = ebx;
    ecx = MEM32(esi + 0x20);
    xmm0 = MEMF(esi + 0x10); /* movss */
    edx = ecx + ecx * 2;
    ecx = MEM32(esi + 0x2C);
    /* comiss xmm0, MEMF(ecx + edx * 8) - sets EFLAGS */
    ecx = ecx + edx * 8;
    if ((xmm0 <= MEMF(ecx + edx * 8))) goto loc_0013BAAE; /* jbe: below or equal (unsigned <=) */

loc_0013BAAC: ;
    goto loc_0013BAB2;

loc_0013BAAE: ;
    xmm0 = MEMF(ecx); /* movss */

loc_0013BAB2: ;
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 4))) goto loc_0013BAC4; /* jbe: below or equal (unsigned <=) */

loc_0013BAC2: ;
    goto loc_0013BAC9;

loc_0013BAC4: ;
    xmm0 = MEMF(ecx + 4); /* movss */

loc_0013BAC9: ;
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 8))) goto loc_0013BADB; /* jbe: below or equal (unsigned <=) */

loc_0013BAD9: ;
    goto loc_0013BAE0;

loc_0013BADB: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_0013BAE0: ;
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_0013BAF4; /* jbe: below or equal (unsigned <=) */

loc_0013BAEE: ;
    xmm0 = MEMF(esi); /* movss */
    goto loc_0013BAF8;

loc_0013BAF4: ;
    xmm0 = MEMF(ecx); /* movss */

loc_0013BAF8: ;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_0013BB0E; /* jbe: below or equal (unsigned <=) */

loc_0013BB07: ;
    xmm0 = MEMF(esi + 4); /* movss */
    goto loc_0013BB13;

loc_0013BB0E: ;
    xmm0 = MEMF(ecx + 4); /* movss */

loc_0013BB13: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_0013BB2A; /* jbe: below or equal (unsigned <=) */

loc_0013BB23: ;
    xmm0 = MEMF(esi + 8); /* movss */
    goto loc_0013BB2F;

loc_0013BB2A: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_0013BB2F: ;
    ebx = MEM32(esi + 0x20);
    ebx++;
    eax = eax + 0x1C;
    edi--;
    MEMF(esi + 8) = xmm0; /* movss */
    MEM32(esi + 0x20) = ebx;
    if ((edi != 0)) goto loc_0013BA10; /* jne: not equal / not zero */

loc_0013BB45: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0013BB47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013BB50
 * Original: 0x0013BB50 - 0x0013BD1F (463 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BB50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    if (CMP_GE(MEM32(esi + 0x24), 0x3FF)) goto loc_0013BB6B; /* jge: greater or equal (signed >=) */

loc_0013BB5F: ;
    eax = MEM32(esi + 0x20);
    eax = eax + edi;
    if (CMP_L(eax, 0x1FF)) goto loc_0013BB70; /* jl: less (signed <) */

loc_0013BB6B: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013BB70: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(edi & edi, 0)) goto loc_0013BD1A; /* jle: less or equal (signed <=) */

loc_0013BB7E: ;
    eax = MEM32(esp + 0xC);
    xmm1 = MEMF(0x649244); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0x18));
    eax = eax + 0xD;

loc_0013BB97: ;
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    ecx = ebx + ecx * 8;
    edx = eax + -13;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x20);
    SET_LO8(ebx, MEM8(eax + -1));
    edx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xE) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    SET_LO8(ebx, MEM8(eax));
    edx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xD) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    SET_LO8(ebx, MEM8(eax + 1));
    ecx = ecx + ecx * 2;
    MEM8(edx + ecx * 8 + 0xC) = LO8(ebx);
    edx = ZX8(MEM8(eax + 2));
    ecx = MEM32(esi + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    ebx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ebx + ecx * 8 + 0xF) = LO8(edx);
    ecx = MEM32(esi + 0x20);
    xmm0 = MEMF(esi + 0x10); /* movss */
    edx = ecx + ecx * 2;
    ecx = MEM32(esi + 0x2C);
    /* comiss xmm0, MEMF(ecx + edx * 8) - sets EFLAGS */
    ecx = ecx + edx * 8;
    if ((xmm0 <= MEMF(ecx + edx * 8))) goto loc_0013BC15; /* jbe: below or equal (unsigned <=) */

loc_0013BC13: ;
    goto loc_0013BC19;

loc_0013BC15: ;
    xmm0 = MEMF(ecx); /* movss */

loc_0013BC19: ;
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 4))) goto loc_0013BC2B; /* jbe: below or equal (unsigned <=) */

loc_0013BC29: ;
    goto loc_0013BC30;

loc_0013BC2B: ;
    xmm0 = MEMF(ecx + 4); /* movss */

loc_0013BC30: ;
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 8))) goto loc_0013BC42; /* jbe: below or equal (unsigned <=) */

loc_0013BC40: ;
    goto loc_0013BC47;

loc_0013BC42: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_0013BC47: ;
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_0013BC5B; /* jbe: below or equal (unsigned <=) */

loc_0013BC55: ;
    xmm0 = MEMF(esi); /* movss */
    goto loc_0013BC5F;

loc_0013BC5B: ;
    xmm0 = MEMF(ecx); /* movss */

loc_0013BC5F: ;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_0013BC75; /* jbe: below or equal (unsigned <=) */

loc_0013BC6E: ;
    xmm0 = MEMF(esi + 4); /* movss */
    goto loc_0013BC7A;

loc_0013BC75: ;
    xmm0 = MEMF(ecx + 4); /* movss */

loc_0013BC7A: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_0013BC91; /* jbe: below or equal (unsigned <=) */

loc_0013BC8A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    goto loc_0013BC96;

loc_0013BC91: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_0013BC96: ;
    ecx = MEM32(esi + 0x3838);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esi + 8) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0013BD07; /* je: equal / zero */

loc_0013BCA5: ;
    SET_LO16(edx, MEM16(ecx + 0xE));
    SET_LO16(ecx, MEM16(ecx + 0xC));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0013BCC8; /* je: equal / zero */

loc_0013BCB2: ;
    xmm0 = MEMF(eax + 3); /* movss */
    ecx = ZX16(LO16(ecx));
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 / xmm3; /* divss */
    goto loc_0013BCCB;

loc_0013BCC8: ;
    xmm0 = xmm2; /* movaps */

loc_0013BCCB: ;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEMF(ebx + ecx * 8 + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0013BCF5; /* je: equal / zero */

loc_0013BCDF: ;
    xmm0 = MEMF(eax + 7); /* movss */
    edx = ZX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 / xmm3; /* divss */
    goto loc_0013BCF8;

loc_0013BCF5: ;
    xmm0 = xmm2; /* movaps */

loc_0013BCF8: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    ecx = ecx + ecx * 2;
    MEMF(edx + ecx * 8 + 0x14) = xmm0; /* movss */

loc_0013BD07: ;
    ebx = MEM32(esi + 0x20);
    ebx++;
    eax = eax + 0x1C;
    edi--;
    MEM32(esi + 0x20) = ebx;
    if ((edi != 0)) goto loc_0013BB97; /* jne: not equal / not zero */

loc_0013BD18: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0013BD1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013BD20
 * Original: 0x0013BD20 - 0x0013BEF2 (466 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD20(void)
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

loc_0013BD20: ;
    edx = MEM32(esp + 8);
    esp = esp - 0x1F0;
    if (CMP_LE(edx & edx, 0)) goto loc_0013BECE; /* jle: less or equal (signed <=) */

loc_0013BD32: ;
    ecx = esp + 0x3C;
    MEM32(esp) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    ecx = ecx - eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x204);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x39;
    PUSH32(esp, esi);
    ecx = ecx - eax;
    PUSH32(esp, edi);
    ebx = eax + 0xD;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x1C) = edx;
    /* nop */

loc_0013BD60: ;
    edi = MEM32(esp + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    esi = ebx + -13;
    edi = edi + 0xFFFFFFF4u;
    ecx = 7;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(esp + 0x30) = ebp;
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x38) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0013BEA3; /* jbe: below or equal (unsigned <=) */

loc_0013BDCF: ;
    PUSH32(esp, ebp);
    edx = esp + 0x28;
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_0013BDD9: ;
    edx = ZX8(MEM8(ebx + -1));
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(0x648D18); /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0013BE0F; /* ja: above (unsigned >) */

loc_0013BE09: ;
    MEMF(esp + 0x20) = xmm1; /* movss */

loc_0013BE0F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0013BE18: ;
    edx = ZX8(MEM8(ebx));
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    ecx = MEM32(esp + 0x10);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(ecx) = LO8(eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0013BE50; /* ja: above (unsigned >) */

loc_0013BE4A: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0013BE50: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0013BE59: ;
    edx = ZX8(MEM8(ebx + 1));
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(0x648D18); /* mulss */
    ecx = MEM32(esp + 0x3C);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(ecx + ebx) = LO8(eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0013BE93; /* ja: above (unsigned >) */

loc_0013BE8D: ;
    MEMF(esp + 0x18) = xmm1; /* movss */

loc_0013BE93: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0013BE9C: ;
    ecx = MEM32(esp + 0x34);
    MEM8(ecx + ebx) = LO8(eax);

loc_0013BEA3: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edx = edx + 0x1C;
    ebp = ebp + 0xC;
    ebx = ebx + 0x1C;
    eax--;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_0013BD60; /* jne: not equal / not zero */

loc_0013BEC3: ;
    edx = MEM32(esp + 0x208);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0013BECE: ;
    eax = MEM32(esp + 0x200);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1FC);
    eax = edx;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_0013BEE9: ;
    esp = esp + 0x1F0;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0013BF00
 * Original: 0x0013BF00 - 0x0013BF66 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013BF00: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + 3;
    if (CMP_GE(eax, 0x3FF)) goto loc_0013BF19; /* jge: greater or equal (signed >=) */

loc_0013BF10: ;
    if (CMP_L(MEM32(esi + 0x20), 0x1FF)) goto loc_0013BF1E; /* jl: less (signed <) */

loc_0013BF19: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013BF1E: ;
    SET_LO16(ecx, MEM16(esi + 0x30));
    SET_LO16(ecx, LO16(ecx) + MEM16(esp + 8));
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    MEM16(eax + edx * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    SET_LO16(ecx, LO16(ecx) + MEM16(esp + 0xC));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    SET_LO16(ecx, LO16(ecx) + MEM16(esp + 0x10));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013BF70
 * Original: 0x0013BF70 - 0x0013C153 (483 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BF70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = eax;
    esi = edx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = ecx;
    eax = eax + edi;
    if (CMP_GE(eax, 0x3FF)) goto loc_0013BF97; /* jge: greater or equal (signed >=) */

loc_0013BF8A: ;
    ecx = MEM32(esi + 0x20);
    ecx = ecx + ebp;
    if (CMP_L(ecx, 0x1FF)) goto loc_0013BF9C; /* jl: less (signed <) */

loc_0013BF97: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013BF9C: ;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0013BFC5; /* jle: less or equal (signed <=) */

loc_0013BFA2: ;
    SET_LO16(edx, MEM16(ebx + eax * 2));
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x28);
    MEM16(ebp + ecx * 2) = LO16(edx);
    ebp = MEM32(esi + 0x24);
    ebp++;
    eax++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x24) = ebp;
    if (CMP_L(eax, edi)) goto loc_0013BFA2; /* jl: less (signed <) */

loc_0013BFC1: ;
    ebp = MEM32(esp + 0x14);

loc_0013BFC5: ;
    if (CMP_LE(ebp & ebp, 0)) { sub_0013C153(); return; } /* jle: less or equal (signed <=) */

loc_0013BFCD: ;
    edi = MEM32(esp + 0x18);
    ebx = ZX8(MEM8(esp + 0x20));
    xmm4 = MEMF(0x649244); /* movss */
    edi = edi + 0xD;

loc_0013BFE1: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    eax = edi + -13;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    ecx = eax + eax * 2;
    eax = edx + ecx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0013BFFC: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x2C);
    xmm0 = MEMF(esi + 0x10); /* movss */
    ecx = eax + eax * 2;
    /* comiss xmm0, MEMF(edx + ecx * 8) - sets EFLAGS */
    eax = edx + ecx * 8;
    if ((xmm0 <= MEMF(edx + ecx * 8))) goto loc_0013C015; /* jbe: below or equal (unsigned <=) */

loc_0013C013: ;
    goto loc_0013C019;

loc_0013C015: ;
    xmm0 = MEMF(eax); /* movss */

loc_0013C019: ;
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) goto loc_0013C02B; /* jbe: below or equal (unsigned <=) */

loc_0013C029: ;
    goto loc_0013C030;

loc_0013C02B: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_0013C030: ;
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_0013C042; /* jbe: below or equal (unsigned <=) */

loc_0013C040: ;
    goto loc_0013C047;

loc_0013C042: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_0013C047: ;
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_0013C05B; /* jbe: below or equal (unsigned <=) */

loc_0013C055: ;
    xmm0 = MEMF(esi); /* movss */
    goto loc_0013C05F;

loc_0013C05B: ;
    xmm0 = MEMF(eax); /* movss */

loc_0013C05F: ;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_0013C075; /* jbe: below or equal (unsigned <=) */

loc_0013C06E: ;
    xmm0 = MEMF(esi + 4); /* movss */
    goto loc_0013C07A;

loc_0013C075: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_0013C07A: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_0013C091; /* jbe: below or equal (unsigned <=) */

loc_0013C08A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    goto loc_0013C096;

loc_0013C091: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_0013C096: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x2C);
    eax = eax + eax * 2;
    MEMF(esi + 8) = xmm0; /* movss */
    SET_LO8(edx, MEM8(edi + -1));
    MEM8(ecx + eax * 8 + 0xE) = LO8(edx);
    eax = MEM32(esi + 0x20);
    SET_LO8(edx, MEM8(edi));
    ecx = MEM32(esi + 0x2C);
    eax = eax + eax * 2;
    MEM8(ecx + eax * 8 + 0xD) = LO8(edx);
    eax = MEM32(esi + 0x20);
    SET_LO8(edx, MEM8(edi + 1));
    ecx = MEM32(esi + 0x2C);
    eax = eax + eax * 2;
    MEM8(ecx + eax * 8 + 0xC) = LO8(edx);
    ecx = ZX8(MEM8(edi + 2));
    eax = MEM32(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(eax + edx * 8 + 0xF) = LO8(ecx);
    eax = MEM32(esi + 0x20);
    eax++;
    MEM32(esi + 0x20) = eax;
    ecx = eax;
    eax = MEM32(esi + 0x3838);
    if (TEST_Z(eax, eax)) goto loc_0013C13C; /* je: equal / zero */

loc_0013C0F4: ;
    SET_LO16(edx, MEM16(eax + 0xE));
    eax = ZX16(MEM16(eax + 0xC));
    xmm1 = MEMF(edi + 3); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + 0x2C);
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 / xmm0; /* divss */
    ecx = ecx + ecx * 2;
    MEMF(eax + ecx * 8 + -8) = xmm1; /* movss */
    eax = MEM32(esi + 0x20);
    xmm1 = MEMF(edi + 7); /* movss */
    ecx = ZX16(LO16(edx));
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x2C);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(eax + edx * 8 + -4) = xmm1; /* movss */

loc_0013C13C: ;
    edi = edi + 0x1C;
    ebp--;
    if ((ebp != 0)) goto loc_0013BFE1; /* jne: not equal / not zero */

loc_0013C146: ;
    ecx = MEM32(esi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013C160
 * Original: 0x0013C160 - 0x0013C329 (457 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013C160: ;
    eax = MEM32(esi + 0x20);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0013C324; /* je: equal / zero */

loc_0013C171: ;
    if (CMP_NE(MEM8(esi + 0x3844), LO8(ebx))) goto loc_0013C18A; /* jne: not equal / not zero */

loc_0013C179: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x3840));
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0013B6E0(); /* call 0x0013B6E0 */

loc_0013C18A: ;
    ecx = MEM32(esi + 0x3840);
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    PUSH32(esp, ebp);
    eax = ecx + edx + 0x148;
    PUSH32(esp, edi);
    ebp = esi + 0x10;
    PUSH32(esp, eax);
    edi = esp + 0x13;
    ecx = ebp;
    edx = esi;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0); sub_003E0DD0(); /* call 0x003E0DD0 */

loc_0013C1BA: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0013C1C9; /* jne: not equal / not zero */

loc_0013C1C1: ;
    MEM32(esi + 0x20) = ebx;
    goto loc_0013C2EC;

loc_0013C1C9: ;
    edi = MEM32(esi + 0x3848);
    if (CMP_EQ(edi, MEM32(0x771828))) goto loc_0013C1E3; /* je: equal / zero */

loc_0013C1D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0013C1DD: ;
    MEM32(0x771828) = edi;

loc_0013C1E3: ;
    PUSH32(esp, 0); sub_0013CCE0(); /* call 0x0013CCE0 */

loc_0013C1E8: ;
    eax = MEM32(esi + 0x3838);
    if (CMP_EQ(eax, ebx)) goto loc_0013C205; /* je: equal / zero */

loc_0013C1F2: ;
    PUSH32(esp, 0); sub_0013C390(); /* call 0x0013C390 */

loc_0013C1F7: ;
    if (TEST_Z(MEM8(esi + 0x3845), 1)) goto loc_0013C205; /* je: equal / zero */

loc_0013C200: ;
    PUSH32(esp, 0); sub_0013C8F0(); /* call 0x0013C8F0 */

loc_0013C205: ;
    if (TEST_Z(MEM8(esi + 0x3845), 4)) goto loc_0013C21C; /* je: equal / zero */

loc_0013C20E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0013C219: ;
    esp = esp + 8;

loc_0013C21C: ;
    if (TEST_NZ(MEM8(esi + 0x3845), 0x10)) goto loc_0013C282; /* jne: not equal / not zero */

loc_0013C225: ;
    xmm0 = MEMF(0x649368); /* movss */
    edx = 1;
    ecx = 0x40338;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C242: ;
    edi = MEM32(esp + 0x10);
    edx = edi;
    ecx = 0x40388;
    MEM32(0x549B3C) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C25C: ;
    (void)0; /* cmp MEM32(0x771814), ebx - flags set for next jcc */
    MEM32(0x549B30) = edi;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_0013C282; /* je: equal / zero */

loc_0013C26A: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C276: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_0013C282: ;
    edi = esi + 0x20;
    eax = edi;
    PUSH32(esp, 0); sub_0013C330(); /* call 0x0013C330 */

loc_0013C28C: ;
    if (TEST_Z(MEM8(esi + 0x3845), 1)) goto loc_0013C29A; /* je: equal / zero */

loc_0013C295: ;
    PUSH32(esp, 0); sub_0013C7E0(); /* call 0x0013C7E0 */

loc_0013C29A: ;
    if (TEST_Z(MEM8(esi + 0x3845), 4)) goto loc_0013C2A8; /* je: equal / zero */

loc_0013C2A3: ;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_0013C2A8: ;
    if (TEST_NZ(MEM8(esi + 0x3845), 0x10)) goto loc_0013C2EA; /* jne: not equal / not zero */

loc_0013C2B1: ;
    edx = 0; /* xor self */
    ecx = 0x40338;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C2BD: ;
    eax = MEM32(0x771814);
    edx = 1;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(0x549B3C) = ebx;
    if (CMP_EQ(eax, edx)) goto loc_0013C2EA; /* je: equal / zero */

loc_0013C2D1: ;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C2DB: ;
    eax = 1;
    MEM32(0x549AF8) = eax;
    MEM32(0x771814) = eax;

loc_0013C2EA: ;
    MEM32(edi) = ebx;

loc_0013C2EC: ;
    xmm0 = MEMF(0x649200); /* movss */
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEMF(ebp + 8) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    POP32(esp, edi);
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, ebp);

loc_0013C324: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C330
 * Original: 0x0013C330 - 0x0013C360 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013C330: ;
    if (TEST_Z(eax, eax)) goto loc_0013C35F; /* je: equal / zero */

loc_0013C334: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0013C35F; /* je: equal / zero */

loc_0013C339: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = eax + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0053A7B0(); /* call 0x0053A7B0 */

loc_0013C35F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C360
 * Original: 0x0013C360 - 0x0013C38C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C360(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013C360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0013C36D: ;
    edi = eax;
    eax = MEM32(esi + 0x3838);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_0013C387; /* je: equal / zero */

loc_0013C37C: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0013C381: ;
    MEM32(esi + 0x3838) = edi;

loc_0013C387: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C390
 * Original: 0x0013C390 - 0x0013C7D6 (1094 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013C390: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(0x8493BC);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_0013C670; /* je: equal / zero */

loc_0013C3A8: ;
    SET_LO8(edx, MEM8(eax + 0x84));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013C670; /* je: equal / zero */

loc_0013C3BB: ;
    eax = MEM32(0x7FA1F8);
    edi = 7;
    if (CMP_NE(eax, edi)) goto loc_0013C3E7; /* jne: not equal / not zero */

loc_0013C3C9: ;
    xmm0 = MEMF(0x64909C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    goto loc_0013C40B;

loc_0013C3E7: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */

loc_0013C40B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001306C0(); /* call 0x001306C0 */

loc_0013C41B: ;
    esp = esp + 4;
    PUSH32(esp, 0xFF808080u);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_0013C428: ;
    eax = MEM32(0x6B896C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0013C443; /* je: equal / zero */

loc_0013C437: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0013C43D: ;
    MEM32(0x771760) = esi;

loc_0013C443: ;
    (void)0; /* cmp MEM32(0x7717E4), edi - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x7717E4), edi)) goto loc_0013C455; /* je: equal / zero */

loc_0013C450: ;
    eax = eax | 0x800;

loc_0013C455: ;
    ecx = 0x17;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;
    ecx = MEM32(0x7717C4);
    eax = eax | 0x800;
    if (CMP_EQ(ecx, ebp)) goto loc_0013C486; /* je: equal / zero */

loc_0013C475: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebp;
    MEM32(0x7717C4) = ebp;

loc_0013C486: ;
    edx = MEM32(0x7717B4);
    ebp = 2;
    eax = eax | 0x800;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    ecx = 3;
    MEM32(0x547364) = ecx;
    if (CMP_EQ(edx, ebp)) goto loc_0013C4B6; /* je: equal / zero */

loc_0013C4A5: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ebp;
    MEM32(0x7717B4) = ebp;

loc_0013C4B6: ;
    if (CMP_EQ(MEM32(0x7717A4), ebp)) goto loc_0013C4CF; /* je: equal / zero */

loc_0013C4BE: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ebp;
    MEM32(0x7717A4) = ebp;

loc_0013C4CF: ;
    edx = MEM32(0x771784);
    edi = 0; /* xor self */
    if (CMP_EQ(edx, edi)) goto loc_0013C4EC; /* je: equal / zero */

loc_0013C4DB: ;
    eax = eax | 0x800;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_0013C4EC: ;
    if (CMP_EQ(MEM32(0x771774), ebp)) goto loc_0013C505; /* je: equal / zero */

loc_0013C4F4: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ebp;
    MEM32(0x771774) = ebp;

loc_0013C505: ;
    esi = 1;
    eax = eax | esi;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(0x547358) = edi;
    MEM32(0x547330) = ecx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547334) = ecx;
    if (CMP_NE(ebx, edi)) goto loc_0013C53A; /* jne: not equal / not zero */

loc_0013C527: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0013C52F: ;
    eax = MEM32(0x5499F0);
    MEM32(0x771768) = edi;

loc_0013C53A: ;
    if (CMP_EQ(MEM32(0x771768), ebx)) goto loc_0013C556; /* je: equal / zero */

loc_0013C542: ;
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0013C54B: ;
    eax = MEM32(0x5499F0);
    MEM32(0x771768) = ebx;

loc_0013C556: ;
    ecx = MEM32(0x7717E8);
    edi = 4;
    if (CMP_EQ(ecx, edi)) goto loc_0013C576; /* je: equal / zero */

loc_0013C565: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_0013C576: ;
    if (CMP_EQ(MEM32(0x7717C8), esi)) goto loc_0013C58F; /* je: equal / zero */

loc_0013C57E: ;
    eax = eax | 0x800;
    MEM32(0x5473E8) = esi;
    MEM32(0x7717C8) = esi;

loc_0013C58F: ;
    if (CMP_EQ(MEM32(0x7717B8), ebp)) goto loc_0013C5A8; /* je: equal / zero */

loc_0013C597: ;
    eax = eax | 0x800;
    MEM32(0x5473EC) = ebp;
    MEM32(0x7717B8) = ebp;

loc_0013C5A8: ;
    ecx = 0; /* xor self */
    MEM32(0x5473D8) = ecx;
    MEM32(0x547404) = ecx;
    ecx = MEM32(0x7717A8);
    eax = eax | 0x402;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x5473B0) = esi;
    MEM32(0x5473B4) = esi;
    MEM32(0x5499F0) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_0013C5EC; /* je: equal / zero */

loc_0013C5D6: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0013C5EC: ;
    if (CMP_EQ(MEM32(0x771788), esi)) goto loc_0013C60A; /* je: equal / zero */

loc_0013C5F4: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F8) = esi;
    MEM32(0x771788) = esi;

loc_0013C60A: ;
    if (CMP_EQ(MEM32(0x771778), ebp)) goto loc_0013C628; /* je: equal / zero */

loc_0013C612: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473FC) = ebp;
    MEM32(0x771778) = ebp;

loc_0013C628: ;
    if (CMP_EQ(MEM32(0x7717EC), esi)) goto loc_0013C646; /* je: equal / zero */

loc_0013C630: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x547460) = esi;
    MEM32(0x7717EC) = esi;

loc_0013C646: ;
    if (CMP_EQ(MEM32(0x7717AC), esi)) goto loc_0013C7CE; /* je: equal / zero */

loc_0013C652: ;
    POP32(esp, edi);
    MEM32(0x547470) = esi;
    MEM32(0x7717AC) = esi;
    POP32(esp, esi);
    eax = eax | 0x800;
    POP32(esp, ebp);
    MEM32(0x5499F0) = eax;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0013C670: ;
    if (CMP_NE(ebx, ebp)) goto loc_0013C682; /* jne: not equal / not zero */

loc_0013C674: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0013C67C: ;
    MEM32(0x771764) = ebp;

loc_0013C682: ;
    if (CMP_EQ(MEM32(0x771764), ebx)) goto loc_0013C699; /* je: equal / zero */

loc_0013C68A: ;
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0013C693: ;
    MEM32(0x771764) = ebx;

loc_0013C699: ;
    eax = MEM32(0x7717E4);
    edi = 4;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ebx = 0x800;
    if (CMP_EQ(eax, edi)) goto loc_0013C6BE; /* je: equal / zero */

loc_0013C6AC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x547360) = edi;
    MEM32(0x7717E4) = edi;

loc_0013C6BE: ;
    if (CMP_EQ(MEM32(0x7717C4), ebp)) goto loc_0013C6D8; /* je: equal / zero */

loc_0013C6C6: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x547368) = ebp;
    MEM32(0x7717C4) = ebp;

loc_0013C6D8: ;
    eax = MEM32(0x7717B4);
    ebp = 2;
    if (CMP_EQ(eax, ebp)) goto loc_0013C6F8; /* je: equal / zero */

loc_0013C6E6: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x54736C) = ebp;
    MEM32(0x7717B4) = ebp;

loc_0013C6F8: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0013C713; /* je: equal / zero */

loc_0013C707: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0013C70D: ;
    MEM32(0x771760) = esi;

loc_0013C713: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x7717A4);
    eax = 0; /* xor self */
    esi = 1;
    edx = edx | 0x401;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x547358) = eax;
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x547384) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_0013C762; /* je: equal / zero */

loc_0013C74C: ;
    ecx = edx;
    ecx = ecx | ebx;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547370) = edi;
    MEM32(0x7717A4) = edi;

loc_0013C762: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_0013C77A; /* je: equal / zero */

loc_0013C76A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_0013C77A: ;
    if (CMP_EQ(MEM32(0x771774), ebp)) goto loc_0013C794; /* je: equal / zero */

loc_0013C782: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x54737C) = ebp;
    MEM32(0x771774) = ebp;

loc_0013C794: ;
    if (CMP_EQ(MEM32(0x7717E8), esi)) goto loc_0013C7AE; /* je: equal / zero */

loc_0013C79C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473E0) = esi;
    MEM32(0x7717E8) = esi;

loc_0013C7AE: ;
    if (CMP_EQ(MEM32(0x7717A8), esi)) goto loc_0013C7CE; /* je: equal / zero */

loc_0013C7B6: ;
    eax = MEM32(0x5499F0);
    eax = eax | ebx;
    MEM32(0x5473F0) = esi;
    MEM32(0x7717A8) = esi;
    MEM32(0x5499F0) = eax;

loc_0013C7CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C7E0
 * Original: 0x0013C7E0 - 0x0013C8E8 (264 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C7E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013C7E0: ;
    ecx = MEM32(0x7717E8);
    PUSH32(esp, esi);
    esi = 1;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = 0x800;
    if (CMP_EQ(ecx, esi)) goto loc_0013C807; /* je: equal / zero */

loc_0013C7F5: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473E0) = esi;
    MEM32(0x7717E8) = esi;

loc_0013C807: ;
    if (CMP_EQ(MEM32(0x7717A8), esi)) goto loc_0013C821; /* je: equal / zero */

loc_0013C80F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473F0) = esi;
    MEM32(0x7717A8) = esi;

loc_0013C821: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0013C83D; /* je: equal / zero */

loc_0013C831: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0013C837: ;
    MEM32(0x771760) = edi;

loc_0013C83D: ;
    (void)0; /* cmp MEM32(0x771814), esi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(0x771814), esi)) goto loc_0013C85E; /* je: equal / zero */

loc_0013C846: ;
    edx = esi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C852: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_0013C85E: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0013C881; /* je: equal / zero */

loc_0013C869: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C875: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_0013C881: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C890: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(eax, esi)) goto loc_0013C8C0; /* je: equal / zero */

loc_0013C8A8: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C8B4: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0013C8C0: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0013C8E6; /* je: equal / zero */

loc_0013C8CE: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C8DA: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0013C8E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8F0
 * Original: 0x0013C8F0 - 0x0013CCD9 (1001 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8F0(void)
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

loc_0013C8F0: ;
    eax = MEM32(0x771814);
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0013C919; /* je: equal / zero */

loc_0013C901: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013C90D: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0013C919: ;
    eax = MEM32(0x6B8854);
    xmm0 = MEMF(0x7FA21C); /* movss */
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    xmm0 = xmm0 + MEMF(0x87563C); /* addss */
    MEMF(0x87563C) = xmm0; /* movss */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0013C954; /* je: equal / zero */

loc_0013C948: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0013C94E: ;
    MEM32(0x771760) = esi;

loc_0013C954: ;
    PUSH32(esp, 0x60606060);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_0013C95E: ;
    ecx = MEM32(0x7717E8);
    eax = 0xD;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    ebx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_0013C982; /* je: equal / zero */

loc_0013C972: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473E0) = eax;
    MEM32(0x7717E8) = eax;

loc_0013C982: ;
    eax = MEM32(0x7717C8);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_0013C9A2; /* je: equal / zero */

loc_0013C990: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473E8) = esi;
    MEM32(0x7717C8) = esi;

loc_0013C9A2: ;
    ecx = MEM32(0x7717B8);
    eax = 2;
    if (CMP_EQ(ecx, eax)) goto loc_0013C9C1; /* je: equal / zero */

loc_0013C9B1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473EC) = eax;
    MEM32(0x7717B8) = eax;

loc_0013C9C1: ;
    if (CMP_EQ(MEM32(0x7717A8), eax)) goto loc_0013C9D9; /* je: equal / zero */

loc_0013C9C9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473F0) = eax;
    MEM32(0x7717A8) = eax;

loc_0013C9D9: ;
    if (CMP_EQ(MEM32(0x771788), esi)) goto loc_0013C9F3; /* je: equal / zero */

loc_0013C9E1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473F8) = esi;
    MEM32(0x771788) = esi;

loc_0013C9F3: ;
    if (CMP_EQ(MEM32(0x771778), eax)) goto loc_0013CA0B; /* je: equal / zero */

loc_0013C9FB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x5473FC) = eax;
    MEM32(0x771778) = eax;

loc_0013CA0B: ;
    edx = esi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CA17: ;
    (void)0; /* cmp MEM32(0x771820), esi - flags set for next jcc */
    MEM32(0x549AEC) = esi;
    if (CMP_EQ(MEM32(0x771820), esi)) goto loc_0013CA3D; /* je: equal / zero */

loc_0013CA25: ;
    edx = esi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CA31: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_0013CA3D: ;
    edx = 0x206;
    ecx = 0x4033C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CA4C: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CA65: ;
    (void)0; /* cmp MEM32(0x77180C), esi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(MEM32(0x77180C), esi)) goto loc_0013CA8F; /* je: equal / zero */

loc_0013CA77: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CA83: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0013CA8F: ;
    if (CMP_EQ(MEM32(0x771808), edi)) goto loc_0013CAAF; /* je: equal / zero */

loc_0013CA97: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CAA3: ;
    MEM32(0x549AF4) = edi;
    MEM32(0x771808) = edi;

loc_0013CAAF: ;
    edi = MEM32(0x847194);
    if (CMP_EQ(MEM32(0x771768), edi)) goto loc_0013CACB; /* je: equal / zero */

loc_0013CABD: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0013CAC5: ;
    MEM32(0x771768) = edi;

loc_0013CACB: ;
    if (CMP_EQ(MEM32(0x7717EC), esi)) goto loc_0013CAE5; /* je: equal / zero */

loc_0013CAD3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x547460) = esi;
    MEM32(0x7717EC) = esi;

loc_0013CAE5: ;
    if (CMP_EQ(MEM32(0x7717AC), esi)) goto loc_0013CAFF; /* je: equal / zero */

loc_0013CAED: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebx;
    MEM32(0x547470) = esi;
    MEM32(0x7717AC) = esi;

loc_0013CAFF: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5B4); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649484); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5B0); /* movss */
    edx = esp + 0x18;
    ecx = 0x6A;
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0013CB80: ;
    xmm1 = MEMF(0x648E1C); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5AC); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5A8); /* movss */
    edx = esp + 0x28;
    ecx = 0x6B;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0013CBBE: ;
    xmm1 = MEMF(0x649508); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x64A878); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x87563C); /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    edx = esp + 0x38;
    ecx = 0x61;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0013CC10: ;
    edx = esp + 0x10;
    ecx = 0x62;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0013CC1E: ;
    eax = MEM32(0x5499E8);
    eax = eax + 0xEE0;
    edi = eax;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    edi = MEM32(edi + 0x14);
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = edi;
    if (CMP_GE(edx & edx, 0)) goto loc_0013CC55; /* jge: greater or equal (signed >=) */

loc_0013CC4F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0013CC55: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = esi;
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_0013CC71; /* jge: greater or equal (signed >=) */

loc_0013CC6B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0013CC71: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0013CC8D; /* jge: greater or equal (signed >=) */

loc_0013CC87: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0013CC8D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0013CCAF; /* jge: greater or equal (signed >=) */

loc_0013CCA9: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0013CCAF: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 8);
    edx = esp + 0x64;
    ecx = 0x64;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x80) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0013CCD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0013CCE0
 * Original: 0x0013CCE0 - 0x0013CF34 (596 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CCE0: ;
    eax = MEM32(0x6B8234);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0013CCFE; /* je: equal / zero */

loc_0013CCF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0013CCF8: ;
    MEM32(0x771760) = esi;

loc_0013CCFE: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0013CD18; /* je: equal / zero */

loc_0013CD0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0013CD12: ;
    MEM32(0x77182C) = esi;

loc_0013CD18: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_0013CD3E; /* je: equal / zero */

loc_0013CD26: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CD32: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_0013CD3E: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_0013CD5E; /* je: equal / zero */

loc_0013CD46: ;
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CD52: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0013CD5E: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_0013CD72; /* je: equal / zero */

loc_0013CD66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0013CD6C: ;
    MEM32(0x77181C) = edi;

loc_0013CD72: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0013CD98; /* je: equal / zero */

loc_0013CD80: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CD8C: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0013CD98: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_0013CDB8; /* je: equal / zero */

loc_0013CDA0: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CDAC: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0013CDB8: ;
    eax = MEM32(0x771810);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0013CDD9; /* je: equal / zero */

loc_0013CDC3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_0013CDD9: ;
    ecx = MEM32(0x7717E4);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_0013CDFE; /* je: equal / zero */

loc_0013CDEE: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_0013CDFE: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_0013CE18; /* je: equal / zero */

loc_0013CE06: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_0013CE18: ;
    if (CMP_EQ(MEM32(0x7717A4), edi)) goto loc_0013CE32; /* je: equal / zero */

loc_0013CE20: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x547370) = edi;
    MEM32(0x7717A4) = edi;

loc_0013CE32: ;
    if (CMP_EQ(MEM32(0x771784), ebx)) goto loc_0013CE4C; /* je: equal / zero */

loc_0013CE3A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x547378) = ebx;
    MEM32(0x771784) = ebx;

loc_0013CE4C: ;
    if (CMP_EQ(MEM32(0x771774), eax)) goto loc_0013CE64; /* je: equal / zero */

loc_0013CE54: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x54737C) = eax;
    MEM32(0x771774) = eax;

loc_0013CE64: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0013CE6C: ;
    if (CMP_EQ(MEM32(0x771764), ebx)) goto loc_0013CE82; /* je: equal / zero */

loc_0013CE74: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0013CE7C: ;
    MEM32(0x771764) = ebx;

loc_0013CE82: ;
    if (CMP_EQ(MEM32(0x7717E8), edi)) goto loc_0013CE9C; /* je: equal / zero */

loc_0013CE8A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_0013CE9C: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_0013CEB6; /* je: equal / zero */

loc_0013CEA4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ebp;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0013CEB6: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(0x77180C);
    ecx = ecx | 0x400;
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    MEM32(0x547384) = ebx;
    POP32(esp, ebp);
    if (CMP_EQ(eax, esi)) goto loc_0013CEF5; /* je: equal / zero */

loc_0013CEDD: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CEE9: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0013CEF5: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0013CF1B; /* je: equal / zero */

loc_0013CF03: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013CF0F: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0013CF1B: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_0013CF30; /* je: equal / zero */

loc_0013CF23: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0013CF2A: ;
    MEM32(0x77175C) = ebx;

loc_0013CF30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF40
 * Original: 0x0013CF40 - 0x0013CF8B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013CF40: ;
    ecx = MEM32(eax + 0x100);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0013CF8A; /* je: equal / zero */

loc_0013CF56: ;
    MEM8(eax + 0x19C) = 1;
    edx = MEM32(0x774A50);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 0x1A0;
    eax = 0x774A50;
    if (TEST_Z(edx, edx)) goto loc_0013CF79; /* je: equal / zero */

loc_0013CF72: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0013CF72; /* jne: not equal / not zero */

loc_0013CF79: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_0013CF8A; /* je: equal / zero */

loc_0013CF88: ;
    MEM32(edx) = ecx;

loc_0013CF8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF90
 * Original: 0x0013CF90 - 0x0013CFBC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013CF90: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(eax + 0x19C) = LO8(ebx);
    ecx = MEM32(eax + 0x1A4);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edx = MEM32(eax + 0x1A0);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_0013CFAE; /* je: equal / zero */

loc_0013CFAC: ;
    MEM32(ecx) = edx;

loc_0013CFAE: ;
    MEM32(eax + 0x1A0) = ebx;
    MEM32(eax + 0x1A4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CFC0
 * Original: 0x0013CFC0 - 0x0013D02A (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CFC0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0xFFDFFFFFu;
    eax = MEM32(edi + 0x60);
    esi = edi + 0x60;
    MEM32(edi + 0x6C) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0x70) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 0x74) = edx;
    eax = MEM32(edi + 0x100);
    ebx = MEM32(eax + 0x18);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (TEST_Z(ebx, ebx)) goto loc_0013D00A; /* je: equal / zero */

loc_0013CFFB: ;
    ecx = MEM32(0x7FA21C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9680(); /* call 0x003F9680 */

loc_0013D007: ;
    esp = esp + 4;

loc_0013D00A: ;
    (void)0; /* test MEM8(edi + 0x94), 0x10 - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(MEM8(edi + 0x94), 0x10)) { sub_0013D02A(); return; } /* je: equal / zero */

loc_0013D018: ;
    if (TEST_Z(MEM8(edi + 0x268), 0x18)) { sub_0013D02A(); return; } /* je: equal / zero */

loc_0013D021: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0xC4), _icall_esp); /* indirect call */
    }

loc_0013D028: ;
    g_seh_ebp = ebp; sub_0013D037(); return; /* tail jmp 0x0013D037 */

}

/**
 * sub_0013D1C0
 * Original: 0x0013D1C0 - 0x0013D1E6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0013D1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x94);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(HI8(eax), 1)) { sub_0013D1E6(); return; } /* je: equal / zero */

loc_0013D1DD: ;
    ebx = ZX8(MEM8(esi + 0xA0));
    g_seh_ebp = ebp; sub_0013D1E8(); return; /* tail jmp 0x0013D1E8 */

}

/**
 * sub_0013D260
 * Original: 0x0013D260 - 0x0013D286 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0013D260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x94);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(HI8(eax), 1)) { sub_0013D286(); return; } /* je: equal / zero */

loc_0013D27D: ;
    ebx = ZX8(MEM8(esi + 0xA0));
    g_seh_ebp = ebp; sub_0013D288(); return; /* tail jmp 0x0013D288 */

}

/**
 * sub_0013D300
 * Original: 0x0013D300 - 0x0013D4CB (459 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D300: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x774A58);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(edi + 0x19C));
    ecx--;
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x774A58) = ecx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0013D349; /* je: equal / zero */

loc_0013D322: ;
    MEM8(edi + 0x19C) = LO8(ebx);
    eax = MEM32(edi + 0x1A4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(edi + 0x1A0);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0013D33D; /* je: equal / zero */

loc_0013D33B: ;
    MEM32(eax) = ecx;

loc_0013D33D: ;
    MEM32(edi + 0x1A0) = ebx;
    MEM32(edi + 0x1A4) = ebx;

loc_0013D349: ;
    eax = MEM32(edi + 0x1A8);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = edi + 0x1A8;
    if (CMP_EQ(eax, ebx)) goto loc_0013D364; /* je: equal / zero */

loc_0013D359: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013D35F: ;
    esp = esp + 4;
    MEM32(esi) = ebx;

loc_0013D364: ;
    eax = MEM32(edi + 0x100);
    eax = MEM32(eax + 0x18);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ebp = edi + 0x100;
    if (CMP_EQ(eax, ebx)) goto loc_0013D380; /* je: equal / zero */

loc_0013D377: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_0013D37E: ;
    ebx = 0; /* xor self */

loc_0013D380: ;
    eax = MEM32(ebp);
    if (CMP_NE(MEM8(eax + 0xE), LO8(ebx))) goto loc_0013D4A4; /* jne: not equal / not zero */

loc_0013D38C: ;
    ecx = MEM32(eax + 8);
    if (CMP_NE(ecx, ebx)) goto loc_0013D3AC; /* jne: not equal / not zero */

loc_0013D393: ;
    eax = MEM32(eax + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x8493D4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0013D3A4; /* je: equal / zero */

loc_0013D39F: ;
    MEM32(eax + 8) = ebx;
    goto loc_0013D3CD;

loc_0013D3A4: ;
    MEM32(0x8493D8) = ebx;
    goto loc_0013D3CD;

loc_0013D3AC: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_0013D3C4; /* je: equal / zero */

loc_0013D3BC: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    goto loc_0013D3CD;

loc_0013D3C4: ;
    ecx = MEM32(eax + 8);
    MEM32(0x8493D8) = ecx;

loc_0013D3CD: ;
    eax = MEM32(ebp);
    edx = eax + 0x14;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_0013D3E3: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(esi + 0xC));
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) goto loc_0013D402; /* jbe: below or equal (unsigned <=) */

loc_0013D3F9: ;
    eax--;
    MEM32(esi + 8) = eax;
    goto loc_0013D49B;

loc_0013D402: ;
    if (CMP_NE(MEM8(0x770FA8), LO8(ebx))) goto loc_0013D49B; /* jne: not equal / not zero */

loc_0013D40E: ;
    edi = MEM32(esi + 0x24);
    if (CMP_EQ(edi, ebx)) goto loc_0013D41D; /* je: equal / zero */

loc_0013D415: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_0013D41A: ;
    MEM32(esi + 0x24) = ebx;

loc_0013D41D: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013D426: ;
    if (TEST_NZ(eax, eax)) goto loc_0013D457; /* jne: not equal / not zero */

loc_0013D42A: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_0013D457; /* je: equal / zero */

loc_0013D431: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013D451: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = ebx;

loc_0013D457: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0013D465; /* je: equal / zero */

loc_0013D463: ;
    MEM32(eax) = ecx;

loc_0013D465: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013D470: ;
    if (TEST_NZ(eax, eax)) goto loc_0013D497; /* jne: not equal / not zero */

loc_0013D474: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013D494: ;
    esp = esp + 4;

loc_0013D497: ;
    edi = MEM32(esp + 0x18);

loc_0013D49B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013D4A1: ;
    esp = esp + 4;

loc_0013D4A4: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0013D520(); /* call 0x0013D520 */

loc_0013D4AB: ;
    PUSH32(esp, 0x5C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0013D4C2: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D4D0
 * Original: 0x0013D4D0 - 0x0013D4F4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D4D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0013D300(); /* call 0x0013D300 */

loc_0013D4DB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0013D4F4(); return; } /* jne: not equal / not zero */

loc_0013D4E7: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0013D500
 * Original: 0x0013D500 - 0x0013D516 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D500(void)
{

loc_0013D500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0013D300(); /* call 0x0013D300 */

loc_0013D50B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0013D511: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D520
 * Original: 0x0013D520 - 0x0013D5CD (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013D520: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_0013D57F; /* jl: less (signed <) */

loc_0013D52D: ;
    esi = ebx + 0x274;

loc_0013D533: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0013D572; /* je: equal / zero */

loc_0013D539: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013D53F: ;
    if (TEST_NZ(eax, eax)) goto loc_0013D572; /* jne: not equal / not zero */

loc_0013D543: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0013D572; /* je: equal / zero */

loc_0013D549: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013D569: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0013D572: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_0013D533; /* jle: less or equal (signed <=) */

loc_0013D57F: ;
    eax = MEM32(ebx + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0013D5CA; /* je: equal / zero */

loc_0013D589: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0013D58F: ;
    if (TEST_NZ(eax, eax)) goto loc_0013D5CA; /* jne: not equal / not zero */

loc_0013D593: ;
    eax = MEM32(ebx + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0013D5CA; /* je: equal / zero */

loc_0013D59D: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0013D5BD: ;
    esp = esp + 4;
    MEM32(ebx + 0x284) = 0;

loc_0013D5CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D5D0
 * Original: 0x0013D5D0 - 0x0013DAD2 (1282 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0013D5D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    (void)0; /* cmp MEM32(0x774A58), 0x12C - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_G(MEM32(0x774A58), 0x12C)) goto loc_0013DAC9; /* jg: greater (signed >) */

loc_0013D5EF: ;
    eax = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    ecx = ecx & 0x4000;
    eax = eax + 0x290;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x3F;
    ecx = ecx + 0x21;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0013D617: ;
    ebx = eax;
    esp = esp + 8;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0013DAC9; /* je: equal / zero */

loc_0013D628: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2F2);
    PUSH32(esp, 0x5F42BC);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0013D63B: ;
    edi = eax;
    esp = esp + 0x10;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (TEST_NZ(edi, edi)) goto loc_0013D665; /* jne: not equal / not zero */

loc_0013D648: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5B0(); /* call 0x000DA5B0 */

loc_0013D64F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013D659: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013D665: ;
    eax = MEM32(ebp + 0x24);
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0013D678; /* je: equal / zero */

loc_0013D66F: ;
    edx = edi;
    PUSH32(esp, 0); sub_0013EB50(); /* call 0x0013EB50 */

loc_0013D676: ;
    goto loc_0013D681;

loc_0013D678: ;
    SET_LO16(eax, MEM16(esi + 0x70));
    PUSH32(esp, 0); sub_0013EA20(); /* call 0x0013EA20 */

loc_0013D681: ;
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) goto loc_0013DAAB; /* jne: not equal / not zero */

loc_0013D68C: ;
    eax = MEM32(0x8493D4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0013D69D; /* je: equal / zero */

loc_0013D698: ;
    MEM32(eax + 8) = edi;
    goto loc_0013D6A3;

loc_0013D69D: ;
    MEM32(0x8493D8) = edi;

loc_0013D6A3: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    xmm3 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 8);
    MEM32(edi + 8) = 0;
    SET_LO16(ecx, MEM16(esi + 0x70));
    MEM16(edi + 0xC) = LO16(ecx);
    MEM8(edi + 0xE) = 0;
    MEM32(ebx + 0x100) = edi;
    MEM32(0x8493D4) = edi;
    edi = ebx + 0x2C;
    ecx = 0x35;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(ebx + 0x104) = LO8(edx);
    MEM8(ebx + 0x269) = 0;
    MEMF(ebx + 0x190) = xmm3; /* movss */
    eax = eax + 0x4C;
    MEMF(ebx + 0x194) = xmm3; /* movss */
    PUSH32(esp, eax);
    MEMF(ebx + 0x198) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_0013D703: ;
    esi = MEM32(ebp + 0x18);
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0x260) = xmm0; /* movss */
    edx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEMF(ebx + 0x264) = xmm4; /* movss */
    MEM8(ebx + 0x268) = 0;
    if (CMP_EQ(esi, edx)) goto loc_0013D73D; /* je: equal / zero */

loc_0013D72E: ;
    edi = ebx + 0x1B0;
    ecx = 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_0013D776;

loc_0013D73D: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(ebx + 0x1B0) = xmm0; /* movss */
    MEM32(ebx + 0x250) = edx;
    MEM8(ebx + 0x254) = 0;
    MEM8(ebx + 0x255) = 0;
    ecx = 0x24;
    eax = 0; /* xor self */
    edi = ebx + 0x1C0;
    MEM32(ebx + 0x258) = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0013D776: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013D797; /* je: equal / zero */

loc_0013D77D: ;
    eax = MEM32(0x774A4C);
    eax++;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    MEM32(0x774A4C) = eax;
    if (CMP_LE(eax, 0xA)) goto loc_0013D797; /* jle: less or equal (signed <=) */

loc_0013D78D: ;
    MEM32(0x774A4C) = 0xA;

loc_0013D797: ;
    ecx = MEM32(ebx + 0x100);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(MEM32(eax + 0x14), edx)) goto loc_0013D7BE; /* je: equal / zero */

loc_0013D7AB: ;
    if (CMP_EQ(MEM32(ebx + 0x1A8), edx)) goto loc_0013D7BE; /* je: equal / zero */

loc_0013D7B3: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0013CF40(); /* call 0x0013CF40 */

loc_0013D7BA: ;
    edx = 0; /* xor self */
    goto loc_0013D7C5;

loc_0013D7BE: ;
    MEM8(ebx + 0x19C) = 0;

loc_0013D7C5: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    edi = MEM32(0x774A58);
    MEM32(ebx + 0x26C) = ecx;
    MEM8(ebx + 0x270) = 0;
    MEM32(ebx + 0x288) = eax;
    MEM32(ebx + 0x274) = edx;
    eax = ebx + 0x274;
    MEM32(ebx + 0x278) = edx;
    edi++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebx + 0x27C) = edx;
    MEM32(ebx + 0x280) = edx;
    MEM32(0x774A58) = edi;
    MEM32(ebx + 0x284) = edx;
    if (CMP_EQ(ecx, edx)) goto loc_0013D897; /* je: equal / zero */

loc_0013D817: ;
    (void)0; /* cmp MEM32(0x84A144), edx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(MEM32(0x84A144), edx)) goto loc_0013D881; /* jl: less (signed <) */

loc_0013D823: ;
    esi = ecx * 4;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = eax;

loc_0013D832: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BD);
    PUSH32(esp, 0x5F3FA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0013D844: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_0013D863; /* je: equal / zero */

loc_0013D84D: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    esi = MEM32(esp + 0x18);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0013D863: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    ecx = ecx + 4;
    eax++;
    MEM32(esp + 0x14) = ecx;
    (void)0; /* cmp eax, MEM32(0x84A144) - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax, MEM32(0x84A144))) goto loc_0013D832; /* jle: less or equal (signed <=) */

loc_0013D881: ;
    PUSH32(esp, 0); sub_00123FA0(); /* call 0x00123FA0 */

loc_0013D886: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEM32(ebx + 0x284) = eax;

loc_0013D897: ;
    MEM32(ebx + 0x94) = MEM32(ebx + 0x94) & 0xFFDFFFFFu;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x58))) goto loc_0013D8AE; /* jbe: below or equal (unsigned <=) */

loc_0013D8AC: ;
    goto loc_0013D8B3;

loc_0013D8AE: ;
    xmm0 = MEMF(ebx + 0x58); /* movss */

loc_0013D8B3: ;
    /* comiss xmm0, MEMF(ebx + 0x5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x5C))) goto loc_0013D8D0; /* jbe: below or equal (unsigned <=) */

loc_0013D8B9: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x58))) goto loc_0013D8C9; /* jbe: below or equal (unsigned <=) */

loc_0013D8C4: ;
    xmm5 = xmm0; /* movaps */
    goto loc_0013D8D5;

loc_0013D8C9: ;
    xmm5 = MEMF(ebx + 0x58); /* movss */
    goto loc_0013D8D5;

loc_0013D8D0: ;
    xmm5 = MEMF(ebx + 0x5C); /* movss */

loc_0013D8D5: ;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    ecx = eax + 0x20;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(esp + 0x18);
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    MEM8(ebx + 0x14) = 1;
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(ebx + 0x24) = xmm0; /* movss */
    MEM8(ebx + 0x14) = 1;
    edx = MEM32(ebx + 0x60);
    MEM32(ebx + 0x18) = edx;
    eax = MEM32(ebx + 0x64);
    MEM32(ebx + 0x1C) = eax;
    ecx = MEM32(ebx + 0x68);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(ebx + 0x60);
    MEM32(ebx + 0x6C) = edx;
    eax = MEM32(ebx + 0x64);
    MEM32(ebx + 0x70) = eax;
    ecx = MEM32(ebx + 0x68);
    MEM32(ebx + 0x74) = ecx;
    MEMF(ebx + 0x148) = xmm3; /* movss */
    MEMF(ebx + 0x144) = xmm3; /* movss */
    MEMF(ebx + 0x140) = xmm3; /* movss */
    MEMF(ebx + 0x13C) = xmm3; /* movss */
    MEMF(ebx + 0x134) = xmm3; /* movss */
    MEMF(ebx + 0x130) = xmm3; /* movss */
    MEMF(ebx + 0x12C) = xmm3; /* movss */
    MEMF(ebx + 0x128) = xmm3; /* movss */
    MEMF(ebx + 0x120) = xmm3; /* movss */
    MEMF(ebx + 0x11C) = xmm3; /* movss */
    MEMF(ebx + 0x118) = xmm3; /* movss */
    MEMF(ebx + 0x114) = xmm3; /* movss */
    MEMF(ebx + 0x14C) = xmm4; /* movss */
    MEMF(ebx + 0x138) = xmm4; /* movss */
    MEMF(ebx + 0x124) = xmm4; /* movss */
    MEMF(ebx + 0x110) = xmm4; /* movss */
    edx = ebx;
    eax = esp + 0x20;
    MEMF(ebx + 0x188) = xmm3; /* movss */
    MEMF(ebx + 0x184) = xmm3; /* movss */
    MEMF(ebx + 0x180) = xmm3; /* movss */
    MEMF(ebx + 0x17C) = xmm3; /* movss */
    MEMF(ebx + 0x174) = xmm3; /* movss */
    MEMF(ebx + 0x170) = xmm3; /* movss */
    MEMF(ebx + 0x16C) = xmm3; /* movss */
    MEMF(ebx + 0x168) = xmm3; /* movss */
    MEMF(ebx + 0x160) = xmm3; /* movss */
    MEMF(ebx + 0x15C) = xmm3; /* movss */
    MEMF(ebx + 0x158) = xmm3; /* movss */
    MEMF(ebx + 0x154) = xmm3; /* movss */
    MEMF(ebx + 0x18C) = xmm4; /* movss */
    MEMF(ebx + 0x178) = xmm4; /* movss */
    MEMF(ebx + 0x164) = xmm4; /* movss */
    MEMF(ebx + 0x150) = xmm4; /* movss */
    PUSH32(esp, 0); sub_00355150(); /* call 0x00355150 */

loc_0013DA63: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0013DA99; /* je: equal / zero */

loc_0013DA6B: ;
    eax = 0x5D5174;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0013DA75: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(0x8496B8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_0013DA99: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_0013DAA2: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013DAAB: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5B0(); /* call 0x000DA5B0 */

loc_0013DAB2: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013DABC: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0013DAC6: ;
    esp = esp + 8;

loc_0013DAC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013DAE0
 * Original: 0x0013DAE0 - 0x0013DB66 (134 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013DAE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x94);
    edx = edx & 0xFFDFFFFFu;
    eax = edx;
    (void)0; /* test eax, 0x20000 - flags set for next jcc */
    MEM32(esi + 0x94) = edx;
    if (TEST_NZ(eax, 0x20000)) goto loc_0013DB64; /* jne: not equal / not zero */

loc_0013DB00: ;
    if (TEST_Z(eax, 0x80000)) goto loc_0013DB14; /* je: equal / zero */

loc_0013DB07: ;
    eax = eax | 0x200000;
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013DB14: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = eax << 6;
    ecx = eax + esi + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0xC8), _icall_esp); /* indirect call */
    }

loc_0013DB2D: ;
    esp = esp + 8;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0013DB42; /* jne: not equal / not zero */

loc_0013DB34: ;
    edx = esi;
    PUSH32(esp, 0); sub_001DD450(); /* call 0x001DD450 */

loc_0013DB3B: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0013DB40: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013DB42: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 0x94);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013DB59; /* jne: not equal / not zero */

loc_0013DB4C: ;
    eax = eax & 0xFFFBFFFFu;
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013DB59: ;
    eax = eax | 0x240000;
    MEM32(esi + 0x94) = eax;

loc_0013DB64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013DB70
 * Original: 0x0013DB70 - 0x0013E137 (1479 bytes, 389 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm3, xmm5;

loc_0013DB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x94);
    (void)0; /* test eax, 0x200000 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, 0x200000)) goto loc_0013E130; /* je: equal / zero */

loc_0013DB90: ;
    if (TEST_NZ(eax, 0x20000)) goto loc_0013E130; /* jne: not equal / not zero */

loc_0013DB9B: ;
    if (TEST_Z(eax, 0x40000)) goto loc_0013E130; /* je: equal / zero */

loc_0013DBA6: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_0013DBAB: ;
    eax = MEM32(ebx + 0x94);
    esi = 0; /* xor self */
    if (TEST_Z(eax, 0x10000)) goto loc_0013DBCE; /* je: equal / zero */

loc_0013DBBA: ;
    eax = MEM32(ebx + 0xCC);
    if (CMP_EQ(eax, esi)) goto loc_0013DBCE; /* je: equal / zero */

loc_0013DBC4: ;
    ecx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013DBCB: ;
    esp = esp + 8;

loc_0013DBCE: ;
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = edx << 6;
    eax = edx + ebx + 0x110;
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_0013DBE4: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = edi;
    MEM32(esp + 0x20) = edi;
    xmm5 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_00128930(); /* call 0x00128930 */

loc_0013DC04: ;
    edx = MEM32(0x81B7C0);
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    eax = MEM32(ebx + 0xAC);
    edx = edx & 0x80000000u;
    (void)0; /* cmp eax, 0xBF9E0 - flags set for next jcc */
    MEM32(0x81B7C0) = edx;
    if (CMP_EQ(eax, 0xBF9E0)) goto loc_0013DC97; /* je: equal / zero */

loc_0013DC2F: ;
    if (CMP_EQ(eax, 0xBFD80)) goto loc_0013DC97; /* je: equal / zero */

loc_0013DC36: ;
    if (CMP_EQ(eax, 0xC0170)) goto loc_0013DC97; /* je: equal / zero */

loc_0013DC3D: ;
    eax = MEM32(ebx + 0x68);
    xmm0 = MEMF(ebx + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x64); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x60); /* movss */
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_0013DC66: ;
    ecx = MEM32(ebx + 0x60);
    edx = MEM32(ebx + 0x64);
    eax = MEM32(ebx + 0x68);
    xmm0 = MEMF(ebx + 0x2C); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x48;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_0013DC94: ;
    esp = esp + 0x20;

loc_0013DC97: ;
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_0013DCA6: ;
    eax = MEM32(0x81B7C0);
    edi = MEM32(0x5499F0);
    edx = MEM32(0x847194);
    eax = eax & 0x80000000u;
    edi = edi | 0x2000;
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    MEM32(0x81B7C0) = eax;
    MEM32(0x84B7D0) = edx;
    MEM32(0x5499F0) = edi;
    MEM32(0x549B68) = esi;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_0013DCEA: ;
    eax = MEM32(ebx + 0x100);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + 0x24);
    esi = MEM32(eax + 0x14);
    edx = MEM32(edi + 0x18);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    eax = ebx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0); sub_0013F960(); /* call 0x0013F960 */

loc_0013DD21: ;
    SET_LO8(ecx, MEM8(esp + 0x23));
    esp = esp + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, 0);
    MEM8(esp + 0x1A) = (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0; /* setne */
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0013DD36: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549B68) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013DD56: ;
    eax = MEM32(esp + 0x20);
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_0012E2C0(); /* call 0x0012E2C0 */

loc_0013DD69: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013DDF1; /* je: equal / zero */

loc_0013DD71: ;
    MEM32(0x7FA020) = MEM32(0x7FA020) + 1;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013DD86: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    ecx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0013DDB4; /* je: equal / zero */

loc_0013DDAF: ;
    MEM32(0x84B854) = eax;

loc_0013DDB4: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + -16);
    PUSH32(esp, 4);
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_0013DDD1: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_0013DDE3: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_0013DDF1: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x24);
    eax = ZX16(MEM16(ecx + 0xC));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x19) = 0;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013DE19; /* je: equal / zero */

loc_0013DE14: ;
    MEM8(esp + 0x18) = 1;

loc_0013DE19: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0013DE22; /* je: equal / zero */

loc_0013DE1D: ;
    MEM8(esp + 0x19) = 1;

loc_0013DE22: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0013DE2B; /* je: equal / zero */

loc_0013DE26: ;
    MEM8(esp + 0x1A) = 1;

loc_0013DE2B: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_0013DE34; /* je: equal / zero */

loc_0013DE2F: ;
    MEM8(esp + 0x1B) = 1;

loc_0013DE34: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0013DE47: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013DF05; /* je: equal / zero */

loc_0013DE56: ;
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0013F960(); /* call 0x0013F960 */

loc_0013DE68: ;
    SET_LO8(eax, MEM8(esp + 0x22));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013DE80; /* jne: not equal / not zero */

loc_0013DE73: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013DE85; /* je: equal / zero */

loc_0013DE80: ;
    MEM8(esp + 0x16) = 1;

loc_0013DE85: ;
    MEM32(0x7FA020) = MEM32(0x7FA020) + 1;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013DE9A: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0013DEC7; /* je: equal / zero */

loc_0013DEC2: ;
    MEM32(0x84B854) = eax;

loc_0013DEC7: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + -16);
    PUSH32(esp, 1);
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_0013DEE5: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_0013DEF7: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_0013DF05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0013DF0E: ;
    SET_LO8(eax, MEM8(esp + 0x21));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013DFE5; /* je: equal / zero */

loc_0013DF1D: ;
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0013F960(); /* call 0x0013F960 */

loc_0013DF2F: ;
    SET_LO8(eax, MEM8(esp + 0x22));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013DF47; /* jne: not equal / not zero */

loc_0013DF3A: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013DF4C; /* je: equal / zero */

loc_0013DF47: ;
    MEM8(esp + 0x16) = 1;

loc_0013DF4C: ;
    MEM32(0x7FA020) = MEM32(0x7FA020) + 1;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013DF61: ;
    MEM32(0x549B04) = 0x1010101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0013DF8E; /* je: equal / zero */

loc_0013DF89: ;
    MEM32(0x84B854) = eax;

loc_0013DF8E: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + -16);
    PUSH32(esp, 2);
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_0013DFAC: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_0013DFBE: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_0013DFCC: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0013DFDB: ;
    MEM32(0x549B04) = 0x10101;

loc_0013DFE5: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E032; /* je: equal / zero */

loc_0013DFED: ;
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0013F960(); /* call 0x0013F960 */

loc_0013DFFF: ;
    SET_LO8(eax, MEM8(esp + 0x22));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013E017; /* jne: not equal / not zero */

loc_0013E00A: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E01C; /* je: equal / zero */

loc_0013E017: ;
    MEM8(esp + 0x16) = 1;

loc_0013E01C: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0013E02B: ;
    edi = MEM32(esp + 0x34);
    esp = esp + 0xC;

loc_0013E032: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E099; /* je: equal / zero */

loc_0013E03A: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0013F960(); /* call 0x0013F960 */

loc_0013E04C: ;
    SET_LO8(eax, MEM8(esp + 0x22));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013E064; /* jne: not equal / not zero */

loc_0013E057: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E069; /* je: equal / zero */

loc_0013E064: ;
    MEM8(esp + 0x16) = 1;

loc_0013E069: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    MEM8(0x750340) = 0x10;
    MEM8(0x750354) = 1;
    MEMF(0x750358) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0013E096: ;
    esp = esp + 0xC;

loc_0013E099: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E0AF; /* je: equal / zero */

loc_0013E0A3: ;
    MEM32(0x84B824) = esi;
    MEM32(0x84B828) = esi;

loc_0013E0AF: ;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_0013E0B4: ;
    MEM32(0x81BE44) = esi;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_0013E0BF: ;
    if (CMP_EQ(MEM32(0x76FFF4), esi)) goto loc_0013E130; /* je: equal / zero */

loc_0013E0C7: ;
    SET_LO8(eax, MEM8(ebx + 0x19C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E130; /* je: equal / zero */

loc_0013E0D1: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x40;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, edx);
    eax = eax << 6;
    ecx = eax + ebx + 0x110;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0013E102: ;
    eax = MEM32(ebx + 0x1A8);
    MEM32(0x812A18) = eax;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, 0x5A0350);
    edx = esp + 0x44;
    PUSH32(esp, 0); sub_003D67F0(); /* call 0x003D67F0 */

loc_0013E12D: ;
    esp = esp + 4;

loc_0013E130: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E140
 * Original: 0x0013E140 - 0x0013E145 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E140(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E140: ;
    g_seh_ebp = ebp; sub_0010A2B0(); return; /* tail jmp 0x0010A2B0 */

}

/**
 * sub_0013E180
 * Original: 0x0013E180 - 0x0013E6DD (1373 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E180(void)
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

loc_0013E180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6F4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x94);
    ecx = eax;
    ecx = ecx & 7;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((ecx == 0)) goto loc_0013E1B6; /* je: equal / zero */

loc_0013E19F: ;
    edx = ebx + 0x60;
    esi = MEM32(edx);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edx;

loc_0013E1B6: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    xmm0 = MEMF(0x7FA24C); /* movss */
    if (TEST_Z(LO8(eax), 8)) goto loc_0013E1D8; /* je: equal / zero */

loc_0013E1C2: ;
    xmm1 = MEMF(ebx + 0x90); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x7C); /* addss */
    MEMF(ebx + 0x7C) = xmm1; /* movss */

loc_0013E1D8: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0013E218; /* je: equal / zero */

loc_0013E1DC: ;
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x60); /* addss */
    MEMF(ebx + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x7C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x64); /* addss */
    MEMF(ebx + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x68); /* addss */
    MEMF(ebx + 0x68) = xmm1; /* movss */

loc_0013E218: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0013E25E; /* je: equal / zero */

loc_0013E21C: ;
    xmm1 = MEMF(ebx + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x3C); /* addss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x88); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x40); /* addss */
    MEMF(ebx + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x8C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x44); /* addss */
    MEMF(ebx + 0x44) = xmm1; /* movss */

loc_0013E25E: ;
    if (TEST_Z(ecx, ecx)) goto loc_0013E6D1; /* je: equal / zero */

loc_0013E266: ;
    xmm0 = MEMF(ebx + 0x60); /* movss */
    eax = ebx + 0x60;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x68); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x2C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    esi = ebx + 0x1B0;
    PUSH32(esp, 0);
    edi = esp + 0x30;
    MEM32(esp + 0x2C) = eax;
    MEM32(0x780AB0) = 0x5F42BC;
    MEM32(0x6C0210) = 0x4C2;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_0013E2D7: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013E41D; /* je: equal / zero */

loc_0013E2E2: ;
    SET_LO8(eax, MEM8(ebx + 0x255));
    if (CMP_EQ(LO8(eax), 1)) goto loc_0013E301; /* je: equal / zero */

loc_0013E2EC: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0013E3D7; /* jne: not equal / not zero */

loc_0013E2F4: ;
    if (TEST_Z(MEM8(ebx + 0x254), 1)) goto loc_0013E3D7; /* je: equal / zero */

loc_0013E301: ;
    SET_LO8(edx, MEM8(ebx + 0x268));
    SET_LO8(ecx, MEM8(ebx + 0x94));
    SET_LO8(edx, LO8(edx) | 1);
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(ebx + 0x268) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0013E37F; /* je: equal / zero */

loc_0013E31D: ;
    fp_push(MEMF(ebx + 0x80)); /* fld float */
    fp_push(MEMF(ebx + 0x7C)); /* fld float */
    fp_push(MEMF(ebx + 0x78)); /* fld float */
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
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0013E37F; /* jbe: below or equal (unsigned <=) */

loc_0013E355: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, LO8(eax) | 8);
    xmm1 = xmm1 / xmm0; /* divss */
    MEM8(ebx + 0x268) = LO8(eax);
    MEMF(ebx + 0x264) = xmm1; /* movss */
    MEMF(ebx + 0x260) = xmm0; /* movss */

loc_0013E37F: ;
    eax = MEM32(ebx + 0xB4);
    if (TEST_Z(eax, eax)) goto loc_0013E3B4; /* je: equal / zero */

loc_0013E389: ;
    edx = MEM32(ebx + 0x1B0);
    ecx = ebx + 0x1C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013E3A9: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0013E68E; /* je: equal / zero */

loc_0013E3B4: ;
    if (TEST_Z(MEM8(ebx + 0x94), 0x10)) goto loc_0013E3D7; /* je: equal / zero */

loc_0013E3BD: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    edx = ebx + 0x190;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;

loc_0013E3D7: ;
    if (CMP_NE(MEM8(ebx + 0x255), 3)) goto loc_0013E41D; /* jne: not equal / not zero */

loc_0013E3E0: ;
    SET_LO8(edx, MEM8(ebx + 0x268));
    eax = MEM32(ebx + 0xB8);
    SET_LO8(edx, LO8(edx) | 2);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ebx + 0x268) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_0013E41D; /* je: equal / zero */

loc_0013E3F9: ;
    ecx = MEM32(ebx + 0x1B0);
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013E412: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0013E68E; /* je: equal / zero */

loc_0013E41D: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    (void)0; /* test MEM8(ebx + 0x94), 4 - flags set for next jcc */
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(MEM8(ebx + 0x94), 4)) goto loc_0013E6D1; /* je: equal / zero */

loc_0013E445: ;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_0013E44E: ;
    SET_LO16(edx, MEM16(0x5F42B8));
    eax = 0; /* xor self */
    ecx = 0x1B4;
    edi = esp + 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x5F42B0);
    ecx = MEM32(0x5F42B4);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(eax); /* movss */
    eax = (int32_t)MEMF(ebx + 0x2C); /* cvttss2si */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x64); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x68); /* movss */
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esi = ebx + 0x1C0;
    ecx = 0x24;
    edi = esp + 0x2D0;
    MEM16(esp + 0x78) = LO16(edx);
    MEM32(esp + 0x94) = 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(esp + 0x21C) = LO16(eax);
    MEM16(esp + 0x21E) = LO16(eax);
    (void)0; /* test MEM8(ebx + 0x254), 2 - flags set for next jcc */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    MEMF(esp + 0x290) = xmm0; /* movss */
    MEMF(esp + 0x294) = xmm0; /* movss */
    if (TEST_Z(MEM8(ebx + 0x254), 2)) goto loc_0013E511; /* je: equal / zero */

loc_0013E507: ;
    xmm0 = MEMF(ebx + 0x1B0); /* movss */
    goto loc_0013E519;

loc_0013E511: ;
    xmm0 = MEMF(0x648E60); /* movss */

loc_0013E519: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    eax = esp + 0x4C;
    MEMF(esp + 0x2E0) = xmm0; /* movss */
    MEM32(esp + 0x24C) = 0;
    MEM32(0x780AB0) = 0x5F42BC;
    MEM32(0x6C0210) = 0x529;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A3110(); /* call 0x002A3110 */

loc_0013E577: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0013E6B6; /* je: equal / zero */

loc_0013E582: ;
    SET_LO8(edx, MEM8(ebx + 0x268));
    SET_LO8(ecx, MEM8(ebx + 0x94));
    SET_LO8(edx, LO8(edx) | 4);
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(ebx + 0x268) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0013E64D; /* je: equal / zero */

loc_0013E5A2: ;
    fp_push(MEMF(ebx + 0x80)); /* fld float */
    fp_push(MEMF(ebx + 0x7C)); /* fld float */
    fp_push(MEMF(ebx + 0x78)); /* fld float */
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
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0013E64D; /* jbe: below or equal (unsigned <=) */

loc_0013E5DA: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esi = MEM32(esp + 0x20);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ebx + 0x264) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x68); /* subss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(ebx + 0x268) = LO8(eax);
    MEMF(ebx + 0x260) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0013E636: ;
    xmm0 = xmm0 * MEMF(0x649730); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    esp = esp + 8;
    MEM8(ebx + 0x26A) = LO8(eax);
    goto loc_0013E651;

loc_0013E64D: ;
    esi = MEM32(esp + 0x20);

loc_0013E651: ;
    eax = MEM32(ebx + 0xBC);
    if (TEST_Z(eax, eax)) goto loc_0013E697; /* je: equal / zero */

loc_0013E65B: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013E66E: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_0013E697; /* jne: not equal / not zero */

loc_0013E675: ;
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_0013E68E: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013E697: ;
    if (TEST_Z(MEM8(ebx + 0x94), 0x10)) goto loc_0013E6B6; /* je: equal / zero */

loc_0013E6A0: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    ebx = ebx + 0x190;
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;

loc_0013E6B6: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_0013E6D1: ;
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
 * sub_0013E6E0
 * Original: 0x0013E6E0 - 0x0013E8E6 (518 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E6E0(void)
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

loc_0013E6E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test MEM8(esi + 0x94), 0x40 - flags set for next jcc */
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEMF(esi + 0x58) = xmm0; /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x94), 0x40)) goto loc_0013E74F; /* je: equal / zero */

loc_0013E705: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x88); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x40); /* addss */
    MEMF(esi + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x8C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm1; /* movss */

loc_0013E74F: ;
    fp_push(MEMF(esi + 0x264)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0013E760: ;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(0x7FA20C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, MEM8(esi + 0x269));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    (void)0; /* cmp LO8(eax), 0x80 - flags set for next jcc */
    MEM8(esi + 0x269) = LO8(edx);
    if (CMP_AE(LO8(eax), 0x80)) goto loc_0013E8B1; /* jae: above or equal (unsigned >=) */

loc_0013E780: ;
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0013E797; /* je: equal / zero */

loc_0013E78B: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_0013E79C;

loc_0013E797: ;
    eax = eax & 0x3F;
    edx = eax;

loc_0013E79C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013E7B3; /* je: equal / zero */

loc_0013E7A0: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0013E7B3; /* je: equal / zero */

loc_0013E7A5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_0013E7BC;

loc_0013E7B3: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0013E7BC: ;
    xmm3 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(esi + 0x268));
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x30); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 0x264); /* subss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    if (TEST_Z(LO8(eax), 8)) goto loc_0013E820; /* je: equal / zero */

loc_0013E7E9: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    MEMF(esi + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x194); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esi + 0x64) = xmm2; /* movss */

loc_0013E820: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0013E8DF; /* je: equal / zero */

loc_0013E828: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x26A));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_0013E838: ;
    SET_LO8(eax, LO8(ebx));
    xmm4 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_0013E842: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(esi + 0x5C); /* mulss */
    xmm5 = xmm5 * MEMF(esi + 0x54); /* mulss */
    MEMF(esi + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x2C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x190); /* movss */
    MEMF(esi + 0x54) = xmm5; /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esi + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * MEMF(esi + 0x58); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x198); /* addss */
    POP32(esp, ebx);
    MEMF(esi + 0x58) = xmm5; /* movss */
    MEMF(esi + 0x68) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013E8B1: ;
    eax = esi + 0x190;
    edx = MEM32(eax);
    ecx = esi + 0x60;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x268));
    SET_LO8(eax, LO8(eax) & 0xE7);
    MEM8(esi + 0x269) = 0;
    MEM8(esi + 0x268) = LO8(eax);

loc_0013E8DF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0013E8F0
 * Original: 0x0013E8F0 - 0x0013E930 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8F0(void)
{
    float xmm0;

loc_0013E8F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x68);
    edx = MEM32(eax + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x60);
    xmm0 = MEMF(eax + 0x34); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_0010FC50(); /* call 0x0010FC50 */

loc_0013E92A: ;
    esp = esp + 0x28;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EA20
 * Original: 0x0013EA20 - 0x0013EAB9 (153 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EA20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = SX16(LO16(eax));
    ebx = ecx;
    ecx = MEM32(eax * 4 + 0x596F50);
    esi = MEM32(ecx * 4 + 0x6A6108);
    PUSH32(esp, 3);
    PUSH32(esp, 0x5E9964);
    PUSH32(esp, esi);
    ebp = 0x5F3E7C;
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_0013EA48: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0013EA57; /* jne: not equal / not zero */

loc_0013EA4F: ;
    ebp = 0x587BE4;
    esi = esi + 3;

loc_0013EA57: ;
    PUSH32(esp, ebx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_0013EA61: ;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(eax + 0x24);
    esp = esp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0013EA77; /* jne: not equal / not zero */

loc_0013EA6E: ;
    SET_LO8(ecx, LO8(ebx));
    esi = eax;
    PUSH32(esp, 0); sub_0009A100(); /* call 0x0009A100 */

loc_0013EA77: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0013EAB3; /* je: equal / zero */

loc_0013EA7E: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0013EAB3; /* je: equal / zero */

loc_0013EA85: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x64E);
    PUSH32(esp, 0x5F42BC);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_0013EA99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0013EA9F: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) { sub_0013EAB9(); return; } /* jne: not equal / not zero */

loc_0013EAA9: ;
    esi = MEM32(edi + 0x10);
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0); sub_0009A100(); /* call 0x0009A100 */

loc_0013EAB3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EB50
 * Original: 0x0013EB50 - 0x0013EBAB (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EB50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = 0x587BE4;
    esi = edx;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_0013EB66: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0013EBA5; /* je: equal / zero */

loc_0013EB70: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0013EBA5; /* je: equal / zero */

loc_0013EB77: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x684);
    PUSH32(esp, 0x5F42BC);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_0013EB8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0013EB91: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) { sub_0013EBAB(); return; } /* jne: not equal / not zero */

loc_0013EB9B: ;
    esi = MEM32(esi + 0x10);
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0); sub_0009A100(); /* call 0x0009A100 */

loc_0013EBA5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC40
 * Original: 0x0013EC40 - 0x0013EC76 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC40(void)
{
    float xmm1;

loc_0013EC40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x68);
    edx = MEM32(eax + 0x64);
    xmm1 = MEMF(eax + 0x44); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_0013EC6F: ;
    esp = esp + 0x1C;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC80
 * Original: 0x0013EC80 - 0x0013EDAF (303 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC80(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_0013EC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(edi + 0x48);
    xmm1 = MEMF(edi + 0x50); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    esi = esp + 0x6C;
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_0013ECB8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi + 0xF0); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi + 0xEC); /* subss */
    xmm0 = xmm0 - MEMF(edi + 0xE8); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0013ECF6: ;
    ebx = MEM32(ebp + 8);
    edx = eax;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0013ED05: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(edi + 0x3C);
    eax = MEM32(edi + 0x38);
    xmm1 = MEMF(edi + 0x44); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_0013ED25: ;
    esp = esp + 0x1C;
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0013ED36: ;
    xmm0 = MEMF(edi + 0xF0); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x34); /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0xEC); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xE8); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x34); /* mulss */
    eax = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0013ED7A: ;
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0013ED84: ;
    edx = MEM32(edi + 0x68);
    eax = MEM32(edi + 0x64);
    ecx = MEM32(edi + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0013ED9C: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0013EDA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EDB0
 * Original: 0x0013EDB0 - 0x0013EF78 (456 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EDB0: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    xmm1 = MEMF(ebp + 0x90); /* movss */
    xmm2 = MEMF(ebp + 0x78); /* movss */
    SET_LO8(ecx, MEM8(ebp + 0x94));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm1 + MEMF(ebp + 0x7C); /* addss */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm3 = xmm3 + MEMF(ebp + 0x7C); /* addss */
    MEMF(ebp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x3C); /* addss */
    MEMF(ebp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x88); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(ebp + 0x64); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x40); /* addss */
    MEMF(ebp + 0x64) = xmm3; /* movss */
    xmm3 = MEMF(ebp + 0x80); /* movss */
    MEMF(ebp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x8C); /* movss */
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x60); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(ebp + 0x68); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x44); /* addss */
    MEMF(ebp + 0x60) = xmm2; /* movss */
    MEMF(ebp + 0x68) = xmm3; /* movss */
    MEMF(ebp + 0x44) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(ecx))) goto loc_0013EF73; /* je: equal / zero */

loc_0013EE72: ;
    ecx = MEM32(ebp + 0xB4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_0013EF72; /* je: equal / zero */

loc_0013EE83: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x64) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x64))) goto loc_0013EF72; /* jbe: below or equal (unsigned <=) */

loc_0013EE92: ;
    xmm0 = xmm0 + MEMF(ebp + 0x2C); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x2C); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    esi = ebp + 0x1B0;
    PUSH32(esp, ebx);
    edi = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEM32(0x780AB0) = 0x5F42BC;
    MEM32(0x6C0210) = 0x717;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_0013EEEF: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x74FA2C) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM32(0x780AB0) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013EF6B; /* je: equal / zero */

loc_0013EF12: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0013EF2D; /* jp: parity */

loc_0013EF23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0013EF2D: ;
    eax = MEM32(ebp + 0x258);
    if (CMP_EQ(eax, ebx)) goto loc_0013EF43; /* je: equal / zero */

loc_0013EF37: ;
    SET_LO8(eax, MEM8(eax + 0x9F));
    SET_LO8(eax, LO8(eax) & 0x60);
    if (CMP_EQ(LO8(eax), 0x40)) goto loc_0013EF6B; /* je: equal / zero */

loc_0013EF43: ;
    edx = MEM32(esi);
    eax = MEM32(ebp + 0x74);
    ecx = ebp + 0x1C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xB4), _icall_esp); /* indirect call */
    }

loc_0013EF60: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0013EF6B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);

loc_0013EF72: ;
    POP32(esp, ebx);

loc_0013EF73: ;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013EF80
 * Original: 0x0013EF80 - 0x0013F473 (1267 bytes, 315 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0013EF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_0013EF9B: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0013F467; /* jne: not equal / not zero */

loc_0013EFA6: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    eax = esp + 0x2C;
    ebx = esp + 0x3C;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0013EFD3: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    eax = esp + 0x2C;
    ecx = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x38) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x18);
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
    MEMF(esp + 0x38) = xmm1; /* movss */
    SET_LO8(eax, MEM8(edi + 0xE4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F19E; /* je: equal / zero */

loc_0013F058: ;
    eax = MEM32(edi + 0x48);
    ecx = eax;
    ecx = ecx & 0x7F800000;
    if (CMP_NE(ecx, 0x7F800000)) goto loc_0013F077; /* jne: not equal / not zero */

loc_0013F06B: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F077; /* je: equal / zero */

loc_0013F072: ;
    MEMF(edi + 0x48) = xmm0; /* movss */

loc_0013F077: ;
    eax = MEM32(edi + 0x4C);
    edx = eax;
    edx = edx & 0x7F800000;
    if (CMP_NE(edx, 0x7F800000)) goto loc_0013F096; /* jne: not equal / not zero */

loc_0013F08A: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F096; /* je: equal / zero */

loc_0013F091: ;
    MEMF(edi + 0x4C) = xmm0; /* movss */

loc_0013F096: ;
    eax = MEM32(edi + 0x50);
    ecx = eax;
    ecx = ecx & 0x7F800000;
    if (CMP_NE(ecx, 0x7F800000)) goto loc_0013F0B5; /* jne: not equal / not zero */

loc_0013F0A9: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F0B5; /* je: equal / zero */

loc_0013F0B0: ;
    MEMF(edi + 0x50) = xmm0; /* movss */

loc_0013F0B5: ;
    eax = MEM32(edi + 0xE8);
    ebx = edi + 0xE8;
    edx = eax;
    edx = edx & 0x7F800000;
    if (CMP_NE(edx, 0x7F800000)) goto loc_0013F0DC; /* jne: not equal / not zero */

loc_0013F0D1: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F0DC; /* je: equal / zero */

loc_0013F0D8: ;
    MEMF(ebx) = xmm0; /* movss */

loc_0013F0DC: ;
    eax = MEM32(edi + 0xEC);
    ecx = eax;
    ecx = ecx & 0x7F800000;
    if (CMP_NE(ecx, 0x7F800000)) goto loc_0013F101; /* jne: not equal / not zero */

loc_0013F0F2: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F101; /* je: equal / zero */

loc_0013F0F9: ;
    MEMF(edi + 0xEC) = xmm0; /* movss */

loc_0013F101: ;
    eax = MEM32(edi + 0xF0);
    edx = eax;
    edx = edx & 0x7F800000;
    if (CMP_NE(edx, 0x7F800000)) goto loc_0013F126; /* jne: not equal / not zero */

loc_0013F117: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_0013F126; /* je: equal / zero */

loc_0013F11E: ;
    MEMF(edi + 0xF0) = xmm0; /* movss */

loc_0013F126: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(edi + 0x48);
    xmm1 = MEMF(edi + 0x50); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    esi = esp + 0x10C;
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_0013F14F: ;
    esp = esp + 0x1C;
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0013F160: ;
    ecx = esp + 0x20;
    eax = edi + 0x60;
    edx = ecx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_0013F1E2;

loc_0013F19E: ;
    xmm0 = xmm0 - MEMF(edi + 0x2C); /* subss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x60); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x64); /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x68); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */

loc_0013F1E2: ;
    eax = MEM32(esp + 0x38);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    MEM32(0x780AB0) = 0x5F42BC;
    MEM32(0x6C0210) = 0x787;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_0013F23E: ;
    esp = esp + 0x30;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x780AB0) = esi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = esi;
    if (CMP_EQ(eax, esi)) goto loc_0013F3C1; /* je: equal / zero */

loc_0013F266: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    ecx = esp + 0xD0;
    ebx = edi + 0x78;
    PUSH32(esp, ecx);
    esi = edi + 0x78;
    eax = ebx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_0013F28D: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x60); /* addss */
    edx = esp + 0x24;
    eax = esp + 0x4C;
    ecx = esp + 0x40;
    esp = esp + 4;
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi + 0x60;
    edx = esp + 0x3C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(edi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(edi + 0xB4);
    if (TEST_Z(eax, eax)) goto loc_0013F467; /* je: equal / zero */

loc_0013F399: ;
    edx = MEM32(esp + 0x5C);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0013F3B2: ;
    esp = esp + 0x18;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013F3C1: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edi + 0x78); /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x60); /* addss */
    MEMF(edi + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x90); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 + MEMF(edi + 0x7C); /* addss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0x7C); /* addss */
    MEMF(edi + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x3C); /* addss */
    MEMF(edi + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x88); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0x64); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x40); /* addss */
    MEMF(edi + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x80); /* movss */
    MEMF(edi + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x8C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0x68); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x44); /* addss */
    MEMF(edi + 0x68) = xmm2; /* movss */
    MEMF(edi + 0x44) = xmm1; /* movss */

loc_0013F467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F480
 * Original: 0x0013F480 - 0x0013F4C7 (71 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F480(void)
{
    float xmm0;

loc_0013F480: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F4D0
 * Original: 0x0013F4D0 - 0x0013F582 (178 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F4D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013F4D0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xD4);
    if (TEST_Z(eax, eax)) { sub_0013F582(); return; } /* je: equal / zero */

loc_0013F4E6: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_0013F582(); return; } /* je: equal / zero */

loc_0013F4F1: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) { sub_0013F582(); return; } /* je: equal / zero */

loc_0013F4FE: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(ebx + 0xD8))) { sub_0013F582(); return; } /* jne: not equal / not zero */

loc_0013F50C: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0013F524; /* je: equal / zero */

loc_0013F516: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_NE(LO8(edx), 0xF)) goto loc_0013F52B; /* jne: not equal / not zero */

loc_0013F524: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0013F52B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebx + 0x294));
    PUSH32(esp, edi);
    esi = esi << 6;
    esi = esi + ecx;
    PUSH32(esp, eax);
    edi = eax;
    ecx = 0x10;
    eax = ebx + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0013F555: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    SET_LO8(eax, 1);
    MEM8(ebx + 0x14) = LO8(eax);
    MEMF(ebx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    POP32(esp, edi);
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    POP32(esp, esi);
    MEMF(ebx + 0x20) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F590
 * Original: 0x0013F590 - 0x0013F5AC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F590(void)
{

loc_0013F590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi + 0x110;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F5B0
 * Original: 0x0013F5B0 - 0x0013F69F (239 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5B0(void)
{
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

loc_0013F5B0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x7C); /* mulss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x78); /* mulss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm1 = xmm1 * MEMF(eax + 0x80); /* mulss */
    fp_push(MEMF(0x648D18)); /* fld float */
    MEMF(eax + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x84); /* mulss */
    MEMF(eax + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x88); /* mulss */
    MEMF(eax + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x8C); /* mulss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(eax + 0x8C) = xmm1; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0013F699; /* jbe: below or equal (unsigned <=) */

loc_0013F658: ;
    ecx = MEM32(eax + 0x94);
    ecx = ecx & 0xFFFFFF96u;
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEM32(eax + 0x94) = ecx;

loc_0013F699: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0013F6A0
 * Original: 0x0013F6A0 - 0x0013F745 (165 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F6A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013F6A0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esp = esp - 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013F5B0(); /* call 0x0013F5B0 */

loc_0013F6C6: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013F6CE: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013F73C; /* je: equal / zero */

loc_0013F6D2: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = MEM32(0x847024);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013F703: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    ecx = ecx + 0x2DE;
    if ((ecx == 0)) goto loc_0013F73B; /* je: equal / zero */

loc_0013F715: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0013F73B: ;
    POP32(esp, esi);

loc_0013F73C: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F750
 * Original: 0x0013F750 - 0x0013F82C (220 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F750(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013F750: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esp = esp - 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013F5B0(); /* call 0x0013F5B0 */

loc_0013F776: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013F77E: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0013F823; /* je: equal / zero */

loc_0013F786: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = MEM32(0x847024);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x369C);
    if (TEST_Z(eax, eax)) goto loc_0013F7FD; /* je: equal / zero */

loc_0013F7C2: ;
    edx = MEM32(eax + 0xC);
    if (CMP_EQ(edx, eax)) goto loc_0013F7FD; /* je: equal / zero */

loc_0013F7C9: ;
    eax = MEM32(edx);
    if (TEST_S(eax, eax)) goto loc_0013F7FD; /* jl: less (signed <) */

loc_0013F7CF: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0013F7FD; /* je: equal / zero */

loc_0013F7D8: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0013F822; /* je: equal / zero */

loc_0013F7DF: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_0013F7F4; /* jne: not equal / not zero */

loc_0013F7E6: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0013F7F4; /* jne: not equal / not zero */

loc_0013F7ED: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013F7FD; /* je: equal / zero */

loc_0013F7F4: ;
    if (CMP_NE(MEM32(eax + 0xE4), 1)) goto loc_0013F822; /* jne: not equal / not zero */

loc_0013F7FD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xDA7;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0013F822: ;
    POP32(esp, esi);

loc_0013F823: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F830
 * Original: 0x0013F830 - 0x0013F85E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013F830: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_0013F85E(); return; } /* je: equal / zero */

loc_0013F839: ;
    if (CMP_NE(eax, 0x67)) goto loc_0013F85C; /* jne: not equal / not zero */

loc_0013F83E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(esi + 0x290))) goto loc_0013F85C; /* jne: not equal / not zero */

loc_0013F850: ;
    edx = esi;
    PUSH32(esp, 0); sub_001DD450(); /* call 0x001DD450 */

loc_0013F857: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0013F85C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F8C0
 * Original: 0x0013F8C0 - 0x0013F955 (149 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F8C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_003EDAC0(); /* call 0x003EDAC0 */

loc_0013F8DB: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0013F950; /* je: equal / zero */

loc_0013F8E7: ;
    edx = eax + eax * 4;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edx * 4 + 8);
    esi = MEM32(edi + 0xC);
    eax = eax + edx * 4;
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + esi));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0013F911; /* je: equal / zero */

loc_0013F90D: ;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    goto loc_0013F915;

loc_0013F911: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));

loc_0013F915: ;
    MEM8(eax + esi) = LO8(ecx);
    SET_LO8(eax, MEM8(ebp + 0x19C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F950; /* je: equal / zero */

loc_0013F922: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0013F950; /* je: equal / zero */

loc_0013F92A: ;
    edx = MEM32(ebp + 0x100);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx + 0x14);
    ebx = eax;
    eax = MEM32(ebp + 0x1A8);
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_0013F94D: ;
    esp = esp + 4;

loc_0013F950: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F960
 * Original: 0x0013F960 - 0x0013F983 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0xA8));
    edi = edi << 0x18;
    ebp = 0; /* xor self */
    edi = edi | 0xFFFFFF;
    if (CMP_NE(ebx, 2)) { sub_0013F983(); return; } /* jne: not equal / not zero */

loc_0013F97E: ;
    edi = edi | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0013F9C9(); return; /* tail jmp 0x0013F9C9 */

}

/**
 * sub_0013FA10
 * Original: 0x0013FA10 - 0x0013FA63 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FA10(void)
{
    float xmm0, xmm1, xmm2;

loc_0013FA10: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x100);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    ecx = eax + 0x20;
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
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0013FA70
 * Original: 0x0013FA70 - 0x0013FAA5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FA70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0013FA70: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648CE4); /* movss */
    if (TEST_Z(eax, eax)) goto loc_0013FA89; /* je: equal / zero */

loc_0013FA81: ;
    xmm1 = MEMF(0x648D1C); /* movss */

loc_0013FA89: ;
    xmm0 = (float)(int32_t)MEM32(0x774A4C); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) { sub_0013FAA5(); return; } /* jb: below (unsigned <) */

loc_0013FAA2: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0013FAC0
 * Original: 0x0013FAC0 - 0x0013FAEF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013FAC0: ;
    ecx = MEM32(0x5499F0);
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    SET_LO8(eax, MEM8(0x75CBAC));
    ecx = ecx | 1;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(0x5499F0) = ecx;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_0013FAEF(); return; } /* ja: above (unsigned >) */

loc_0013FAE8: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0013FB81(); return; /* tail jmp 0x0013FB81 */

}

/**
 * sub_0013FBF0
 * Original: 0x0013FBF0 - 0x0013FCE1 (241 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FBF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0013FBF0: ;
    esp = esp - 0x18;
    if (TEST_Z(eax, eax)) goto loc_0013FCDD; /* je: equal / zero */

loc_0013FBFB: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    SET_LO8(ecx, MEM8(0x76F0E0));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0013FCDC; /* je: equal / zero */

loc_0013FC25: ;
    xmm0 = MEMF(eax + 0x294); /* movss */
    eax = MEM32(eax + 0x298);
    eax = eax & 0x1F;
    eax = eax - 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((eax == 0)) goto loc_0013FC59; /* je: equal / zero */

loc_0013FC4A: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_0013FC52; /* je: equal / zero */

loc_0013FC4F: ;
    eax--;
    if ((eax == 0)) goto loc_0013FC59; /* je: equal / zero */

loc_0013FC52: ;
    MEM8(esp + 0x14) = 0;
    goto loc_0013FC5D;

loc_0013FC59: ;
    MEM8(esp + 0x14) = LO8(ebx);

loc_0013FC5D: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x60;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0013FC7D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0013FCDC; /* je: equal / zero */

loc_0013FC84: ;
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = 0;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;

loc_0013FCDC: ;
    POP32(esp, ebx);

loc_0013FCDD: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0013FCF0
 * Original: 0x0013FCF0 - 0x0013FD86 (150 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FCF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0013FCF0: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x649920); /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0013FD84; /* jbe: below or equal (unsigned <=) */

loc_0013FD18: ;
    goto loc_0013FD20;

    /* nop */

loc_0013FD20: ;
    ecx = ZX8(MEM8(esi + 0x58));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0013FD3A: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0013FD66: ;
    xmm1 = MEMF(esi + 0x5C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x2C;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x5C) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_0013FD20; /* ja: above (unsigned >) */

loc_0013FD84: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013FD90
 * Original: 0x0013FD90 - 0x0013FDBE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013FD90: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013FD9A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    edx = edx - 0x3F;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) { sub_0013FDBE(); return; } /* je: equal / zero */

loc_0013FDB5: ;
    esi = 0x40;
    esi = esi - ecx;
    g_seh_ebp = ebp; sub_0013FDC0(); return; /* tail jmp 0x0013FDC0 */

}

/**
 * sub_00140020
 * Original: 0x00140020 - 0x001402AA (650 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00140020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, eax)) goto loc_001402A4; /* je: equal / zero */

loc_0014003B: ;
    xmm0 = MEMF(0x648D20); /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    edi = esi + 0x78;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    ecx = edi;
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649BCC); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x38;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x649368); /* movss */
    PUSH32(esp, edx);
    MEM16(esp + 0x40) = 0xF;
    MEM32(esp + 0x3C) = 4;
    MEM16(esp + 0x50) = 0xC8;
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEM16(esp + 0x58) = LO16(eax);
    MEM16(esp + 0x5A) = 0x168;
    MEM16(esp + 0x5C) = LO16(eax);
    MEM16(esp + 0x5E) = LO16(eax);
    MEM32(esp + 0x4C) = ecx;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEM8(esp + 0x9C) = LO8(eax);
    MEM8(esp + 0x94) = LO8(eax);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_00140158: ;
    esp = esp + 0xC;
    edx = esi;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00140166: ;
    MEM32(esp + 8) = 0x32;
    edi = edi;

loc_00140170: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00140175: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00140196: ;
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + MEMF(0x648D14); /* addss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001401C1: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    xmm2 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + MEMF(edi); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x80); /* addss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00140222: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00140239: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F38); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x78);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00140259: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x40;
    ecx = esp + 0x4C;
    edx = edx + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00140279: ;
    esp = esp + 0x34;
    if (TEST_Z(eax, eax)) goto loc_0014029A; /* je: equal / zero */

loc_00140280: ;
    MEM32(eax + 0x58) = 0x13E;
    MEM32(eax + 0x3C) = 4;
    MEM8(eax + 0x38) = 0x78;
    MEM8(eax + 0x39) = 0x78;
    MEM8(eax + 0x3A) = 0x78;

loc_0014029A: ;
    MEM32(esp + 8) = MEM32(esp + 8) - 1;
    if ((MEM32(esp + 8) != 0)) goto loc_00140170; /* jne: not equal / not zero */

loc_001402A4: ;
    POP32(esp, edi);
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
 * sub_001402B0
 * Original: 0x001402B0 - 0x00140445 (405 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001402B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001402B0: ;
    esp = esp - 0x78;
    if (TEST_Z(edi, edi)) goto loc_00140441; /* je: equal / zero */

loc_001402BB: ;
    eax = MEM32(edi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00140441; /* je: equal / zero */

loc_001402C6: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00140441; /* je: equal / zero */

loc_001402D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5F2480);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_001402E2: ;
    esi = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_001402ED: ;
    xmm0 = MEMF(0x64B1E4); /* movss */
    xmm1 = MEMF(0x64B1E0); /* movss */
    SET_LO8(ebx, MEM8(esp + 0x88));
    eax = 0xFF;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64B1DC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B1D8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64B1D4); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x64AB24); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64B1D0); /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x64B1CC); /* movss */
    MEM16(esp + 0x22) = LO16(eax);
    MEM8(esp + 0x76) = LO8(eax);
    MEM8(esp + 0x75) = LO8(eax);
    MEM8(esp + 0x74) = LO8(eax);
    MEM8(esp + 0x77) = LO8(eax);
    MEM8(esp + 0x7A) = LO8(eax);
    MEM8(esp + 0x79) = LO8(eax);
    MEM8(esp + 0x78) = LO8(eax);
    MEM8(esp + 0x7B) = LO8(eax);
    eax = esp + 0xC;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x64B1C8); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x10;
    MEM32(esp + 0x14) = 0x32;
    MEM16(esp + 0x24) = 0;
    MEM16(esp + 0x28) = 0xFFDF;
    MEM16(esp + 0x2A) = 0x18;
    MEM16(esp + 0x40) = 0x28;
    MEM16(esp + 0x42) = 0x23;
    MEM32(esp + 0x44) = 0xA0;
    MEM32(esp + 0x48) = 0x13;
    MEM32(esp + 0x4C) = 0x5F42F4;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM8(esp + 0x80) = 0x21;
    MEM8(esp + 0x81) = 0xF;
    MEM16(esp + 0x82) = 0x19;
    MEM16(esp + 0x84) = 0xA;
    PUSH32(esp, 0); sub_000F4860(); /* call 0x000F4860 */

loc_0014043C: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00140441: ;
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_00140450
 * Original: 0x00140450 - 0x00140536 (230 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140450(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00140450: ;
    esp = esp - 0x40;
    if (TEST_Z(eax, eax)) goto loc_00140532; /* je: equal / zero */

loc_0014045B: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00140532; /* je: equal / zero */

loc_00140466: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D5828);
    MEM8(esp + 8) = LO8(ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0014047F: ;
    xmm0 = MEMF(0x649B64); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6498EC); /* movss */
    MEM8(esp + 0x10) = LO8(eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64927C); /* movss */
    SET_LO8(eax, 3);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649B60); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649B5C); /* movss */
    MEM8(esp + 0x3E) = LO8(eax);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM8(esp + 0x45) = LO8(eax);
    esp = esp + 4;
    eax = 0; /* xor self */
    ebx = esp + 4;
    MEM8(esp + 0x28) = 2;
    MEM16(esp + 0x2A) = 0x3C;
    MEM16(esp + 0x2C) = 0xF;
    MEM16(esp + 0x2E) = 0x2EE;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x40) = 4;
    PUSH32(esp, 0); sub_000B0B50(); /* call 0x000B0B50 */

loc_00140531: ;
    POP32(esp, ebx);

loc_00140532: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00140540
 * Original: 0x00140540 - 0x00140557 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140540(void)
{
    float xmm0;

loc_00140540: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x649158); /* movss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00140560
 * Original: 0x00140560 - 0x0014082F (719 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140560(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00140560: ;
    esp = esp - 0x74;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x38);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = edi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_00140583: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00140829; /* je: equal / zero */

loc_0014058E: ;
    SET_LO8(eax, MEM8(edi + 0x1B5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00140829; /* jne: not equal / not zero */

loc_0014059C: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
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
    fp_push(MEMF(0x64B0E0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00140829; /* ja: above (unsigned >) */

loc_001405D0: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0x44) = 0x27;
    MEM8(esp + 0x45) = 0;
    MEM8(esp + 0x46) = 1;
    MEM8(esp + 0x47) = LO8(eax);
    MEM8(esp + 0x48) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001405F3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm3 = MEMF(esp + 0x90); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x59) = LO8(eax);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x5B) = LO8(eax);
    eax = MEM32(esi + 0x38);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x4C) = 0xA0;
    MEM32(esp + 0x50) = 0x13;
    MEM8(esp + 0x65) = 1;
    edx = edx + 0x5A;
    MEM16(esp + 0x4A) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x10B));
    eax = MEM32(esp + 0x80);
    MEM8(esp + 0x64) = LO8(edx);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(esp + 0x84);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x94); /* mulss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm1 = xmm1 * MEMF(esi + 0x94); /* mulss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm2 = xmm2 * MEMF(esi + 0x94); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEM32(esp + 0x6C) = edx;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x6C); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x70); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001406F3: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014070A: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00140719: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00140728: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x649140); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014074E: ;
    xmm7 = MEMF(0x59D944); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014077B: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014079A: ;
    xmm0 = xmm0 * MEMF(0x648FE8); /* mulss */
    xmm0 = xmm0 - MEMF(0x6496C8); /* subss */
    SET_LO8(edx, MEM8(esi + 4));
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64B168); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM16(esp + 0x78) = 0x19;
    MEM16(esp + 0x7A) = 0xA;
    MEM8(esp + 0x40) = 0xF;
    MEM8(esp + 8) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001407E1: ;
    eax = MEM32(esp + 8);
    xmm0 = xmm0 * MEMF(0x64B164); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x34);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F42F4);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_000A65B0(); /* call 0x000A65B0 */

loc_00140811: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_00140829; /* je: equal / zero */

loc_00140818: ;
    edi = eax + 0xE0;
    ecx = 0xD;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00140829: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00140830
 * Original: 0x00140830 - 0x00140834 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140830(void)
{

loc_00140830: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00140840
 * Original: 0x00140840 - 0x0014084B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00140840: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(edx & edx, 0)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_00140850
 * Original: 0x00140850 - 0x001408E5 (149 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00140850: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0014085E; /* jne: not equal / not zero */

loc_00140859: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0014085E: ;
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
    if (TEST_Z(esi, esi)) goto loc_001408AA; /* je: equal / zero */

loc_00140886: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_001408AA; /* jb: below (unsigned <) */

loc_0014088F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00140899: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001408A1: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001408CD; /* jne: not equal / not zero */

loc_001408AA: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001408BC: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001408C4: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_001408E5(); return; } /* je: equal / zero */

loc_001408CD: ;
    PUSH32(esp, 0); sub_00397C70(); /* call 0x00397C70 */

loc_001408D2: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    MEM32(0x774A5C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140900
 * Original: 0x00140900 - 0x0014095A (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140900(void)
{

loc_00140900: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x774A5C);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_00140DE0(); /* call 0x00140DE0 */

loc_0014093D: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00140E80(); /* call 0x00140E80 */

loc_0014094B: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00140960
 * Original: 0x00140960 - 0x001409BA (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140960(void)
{

loc_00140960: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x774A5C);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_00140DE0(); /* call 0x00140DE0 */

loc_0014099D: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00140E80(); /* call 0x00140E80 */

loc_001409AB: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001409C0
 * Original: 0x001409C0 - 0x001409E8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409C0(void)
{

loc_001409C0: ;
    esp = esp - 0x10;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(ecx, LO8(ecx) | 1);
    PUSH32(esp, ebx);
    ebx = MEM32(0x774A5C);
    MEM8(esp + 8) = LO8(ecx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00140D60(); /* call 0x00140D60 */

loc_001409E3: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001409F0
 * Original: 0x001409F0 - 0x00140A18 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001409F0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x774A60);
    if (TEST_Z(esi, esi)) goto loc_00140A16; /* je: equal / zero */

loc_001409FC: ;
    /* nop */

loc_00140A00: ;
    ecx = ZX8(MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B70E4), _icall_esp); /* indirect call */
    }

loc_00140A0C: ;
    esi = MEM32(esi + 0xC);
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00140A00; /* jne: not equal / not zero */

loc_00140A16: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140A20
 * Original: 0x00140A20 - 0x00140B0E (238 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140A20: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    ebp = ZX8(MEM8(edi + 1));
    esi = MEM32(edx + 8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00140A53: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_00140A5F: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esi = MEM32(eax + 0x30);
    edx = ecx;
    ecx = ecx ^ 1;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    eax = 0; /* xor self */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    esp = esp + 0x10;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00140AF9; /* jle: less or equal (signed <=) */

loc_00140A87: ;
    edx = edx << 6;
    MEM32(esp + 0x10) = edx;
    ebx = esi;
    edx = ecx + esi;
    ebx = ebx << 6;
    edx = edx << 6;
    /* nop */

loc_00140AA0: ;
    ecx = ebp + -1;
    if (CMP_NE(eax, ecx)) goto loc_00140AC0; /* jne: not equal / not zero */

loc_00140AA7: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x3C8);
    if (TEST_NZ(esi, esi)) goto loc_00140AC5; /* jne: not equal / not zero */

loc_00140AB4: ;
    MEM8(edi + 2) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00140AC0: ;
    esi = MEM32(edi + 8);
    esi = esi + edx;

loc_00140AC5: ;
    edi = MEM32(edi + 8);
    edi = edi + MEM32(esp + 0x10);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x14);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);
    eax++;
    esi = esi + ebx;
    edx = edx + ebx;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(eax, ebp)) goto loc_00140AA0; /* jl: less (signed <) */

loc_00140AF9: ;
    SET_LO8(eax, MEM8(edi + 2));
    if (CMP_EQ(LO8(eax), MEM8(edi + 1))) goto loc_00140B06; /* je: equal / zero */

loc_00140B01: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 2) = LO8(eax);

loc_00140B06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00140B10
 * Original: 0x00140B10 - 0x00140B54 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00140B10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E7230(); /* call 0x003E7230 */

loc_00140B20: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00140B29: ;
    if (TEST_NZ(eax, eax)) goto loc_00140B52; /* jne: not equal / not zero */

loc_00140B2D: ;
    if (TEST_Z(esi, esi)) goto loc_00140B52; /* je: equal / zero */

loc_00140B31: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00140B4F: ;
    esp = esp + 4;

loc_00140B52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140B60
 * Original: 0x00140B60 - 0x00140CC0 (352 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140B60: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00140CBB; /* je: equal / zero */

loc_00140B73: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    SET_LO8(eax, MEM8(ebx + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00140B87; /* je: equal / zero */

loc_00140B81: ;
    eax = ZX8(LO8(eax));
    eax--;
    goto loc_00140B99;

loc_00140B87: ;
    SET_LO8(eax, MEM8(ebx + 0x510));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00140B97; /* je: equal / zero */

loc_00140B91: ;
    eax = ZX8(LO8(eax));
    eax--;
    goto loc_00140B99;

loc_00140B97: ;
    eax = 0; /* xor self */

loc_00140B99: ;
    ecx = MEM32(ebx + 0x50C);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebx + 0x4B0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_00140BBD; /* jne: not equal / not zero */

loc_00140BAD: ;
    edi = 0xFFFF;
    PUSH32(esp, 0); sub_00086440(); /* call 0x00086440 */

loc_00140BB7: ;
    MEM32(ebx + 0x4B0) = eax;

loc_00140BBD: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    ebx = ZX8(MEM8(esi + 1));
    edi = ZX8(MEM8(esi + 3));
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00140BEA: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_00140BF6: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = MEM32(eax + 0x30);
    edx = ZX8(MEM8(esi + 2));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = MEM32(esi + 0x10);
    edx = ZX16(MEM16(edx + 0x60));
    esp = esp + 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_S(edx, edx)) goto loc_00140CB8; /* jl: less (signed <) */

loc_00140C24: ;
    if (CMP_GE(edx, 0x80)) goto loc_00140CB8; /* jge: greater or equal (signed >=) */

loc_00140C30: ;
    ebx = MEM32(esi + 0x10);
    ebp = MEM32(ebx + 0x19C);
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(esi + 0x14);
    MEM32(ebx + 0x19C) = ebp;
    ebx = MEM32(esp + 0x20);
    if (CMP_LE(ebx & ebx, 0)) goto loc_00140CAB; /* jle: less or equal (signed <=) */

loc_00140C4E: ;
    ebx = edi;
    eax = eax << 6;
    edi = edi + edi * 2;
    ebx = ebx << 5;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x20);
    edi = edi << 5;
    ecx = ecx << 6;
    ebp = ecx;
    MEM32(esp + 0x20) = eax;
    goto loc_00140C73;

loc_00140C6F: ;
    edx = MEM32(esp + 0x10);

loc_00140C73: ;
    ecx = MEM32(esi + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(0x774A68) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    ecx = ecx + ebp;
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    MEM32(0x8493DC) = ecx;
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_00140C95: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    edi = edi + ebx;
    ebp = ebp + ecx;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00140C6F; /* jne: not equal / not zero */

loc_00140CAB: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x19C) = edx;

loc_00140CB8: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00140CBB: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00140D60
 * Original: 0x00140D60 - 0x00140DD8 (120 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140D60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    if (CMP_EQ(esi, ebp)) goto loc_00140DD3; /* je: equal / zero */

loc_00140D6C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00140D70: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esi + 0xC));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00140DCC; /* jne: not equal / not zero */

loc_00140D7F: ;
    edx = MEM32(esi + 8);
    if (CMP_NE(edx, MEM32(eax))) goto loc_00140DCC; /* jne: not equal / not zero */

loc_00140D86: ;
    (void)0; /* cmp esi, MEM32(ebx + 4) - flags set for next jcc */
    edi = MEM32(esi);
    if (CMP_EQ(esi, MEM32(ebx + 4))) goto loc_00140DC8; /* je: equal / zero */

loc_00140D8D: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00140DA0: ;
    if (TEST_NZ(eax, eax)) goto loc_00140DC5; /* jne: not equal / not zero */

loc_00140DA4: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00140DC2: ;
    esp = esp + 4;

loc_00140DC5: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;

loc_00140DC8: ;
    esi = edi;
    goto loc_00140DCE;

loc_00140DCC: ;
    esi = MEM32(esi);

loc_00140DCE: ;
    if (CMP_NE(esi, ebp)) goto loc_00140D70; /* jne: not equal / not zero */

loc_00140DD2: ;
    POP32(esp, edi);

loc_00140DD3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140DE0
 * Original: 0x00140DE0 - 0x00140E57 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00140DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F660);
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

loc_00140E14: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00140E3B; /* je: equal / zero */

loc_00140E2A: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00140F10(); /* call 0x00140F10 */

loc_00140E3B: ;
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
 * sub_00140E80
 * Original: 0x00140E80 - 0x00140F06 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00140E80: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0xFFFFFFF;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_00140EFC; /* jae: above or equal (unsigned >=) */

loc_00140E92: ;
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

loc_00140EB6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00140EBF: ;
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

loc_00140EE4: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00140EFB: ;
    POP32(esp, ebx);

loc_00140EFC: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00140F10
 * Original: 0x00140F10 - 0x00140F37 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F10(void)
{

loc_00140F10: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 8;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140F40
 * Original: 0x00140F40 - 0x00140F57 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00140F40: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    if (CMP_EQ(ecx, edx)) eax = edx; /* cmove */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x774A6A) = LO8(eax);
    if (CMP_EQ(eax, edx)) { sub_00140F57(); return; } /* je: equal / zero */

loc_00140F50: ;
    MEM8(0x774A69) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00140F70
 * Original: 0x00140F70 - 0x00140FB3 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00140F70: ;
    SET_LO8(eax, MEM8(0x774A6A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00140F89; /* jne: not equal / not zero */

loc_00140F79: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_EQ(ecx, 0x32)) goto loc_00140F89; /* je: equal / zero */

loc_00140F84: ;
    if (CMP_NE(ecx, 0x33)) goto loc_00140FB2; /* jne: not equal / not zero */

loc_00140F89: ;
    SET_LO8(ecx, MEM8(0x7FA275));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00140FB2; /* jne: not equal / not zero */

loc_00140F93: ;
    eax = ZX8(LO8(eax));
    if (TEST_Z(eax, eax)) goto loc_00140FB2; /* je: equal / zero */

loc_00140F9A: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00402F10(); /* call 0x00402F10 */

loc_00140FB1: ;
    POP32(esp, ecx);

loc_00140FB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140FC0
 * Original: 0x00140FC0 - 0x001410F3 (307 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140FC0(void)
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

loc_00140FC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x4C);
    xmm1 = MEMF(0x7FA24C); /* movss */
    eax = ecx + eax + 0x100;
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x649664); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xC); /* addss */
    xmm0 = xmm0 * MEMF(0x649660); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 8); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00141023; /* jbe: below or equal (unsigned <=) */

loc_00141014: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00141014; /* ja: above (unsigned >) */

loc_0014101D: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_00141023: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0014103F; /* jbe: below or equal (unsigned <=) */

loc_0014102B: ;
    goto loc_00141030;

    /* nop */

loc_00141030: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00141030; /* ja: above (unsigned >) */

loc_00141039: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0014103F: ;
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0014105F; /* jbe: below or equal (unsigned <=) */

loc_00141051: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00141051; /* ja: above (unsigned >) */

loc_0014105A: ;
    MEMF(esp) = xmm0; /* movss */

loc_0014105F: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00141072; /* jbe: below or equal (unsigned <=) */

loc_00141064: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00141064; /* ja: above (unsigned >) */

loc_0014106D: ;
    MEMF(esp) = xmm0; /* movss */

loc_00141072: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(eax + 0xC) = xmm0; /* movss */
    /* FPU: fsin  */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx + 0x4C);
    esi = MEM32(ecx + edx + 0x114);
    eax = ecx + edx + 0x100;
    edx = 0x3E7;
    if (CMP_EQ(esi, edx)) goto loc_001410BD; /* je: equal / zero */

loc_001410AF: ;
    esi = MEM32(0x7FA20C);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - esi;
    if (((int32_t)MEM32(eax + 0x1C) >= 0)) goto loc_001410BD; /* jns: not sign (positive) */

loc_001410BA: ;
    MEM32(eax + 0x14) = edx;

loc_001410BD: ;
    eax = MEM32(ecx + 0x4C);
    ecx = ecx + eax + 0x100;
    eax = MEM32(ecx + 0x14);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, edx)) goto loc_001410E2; /* je: equal / zero */

loc_001410CF: ;
    SET_LO8(edx, MEM8(0x76EC82));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001410F3(); return; } /* jne: not equal / not zero */

loc_001410D9: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_001410F3(); return; } /* je: equal / zero */

loc_001410E2: ;
    xmm0 = MEMF(0x649658); /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00141110
 * Original: 0x00141110 - 0x00141247 (311 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141110: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x4C);
    xmm1 = MEMF(0x7FA24C); /* movss */
    ecx = eax + ecx + 0x100;
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x649664); /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0xC); /* addss */
    xmm0 = xmm0 * MEMF(0x649660); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ecx + 8) = xmm0; /* movss */
    MEMF(ecx + 0xC) = xmm3; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00141173; /* jbe: below or equal (unsigned <=) */

loc_00141164: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00141164; /* ja: above (unsigned >) */

loc_0014116D: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_00141173: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0014118F; /* jbe: below or equal (unsigned <=) */

loc_0014117B: ;
    goto loc_00141180;

    /* nop */

loc_00141180: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00141180; /* ja: above (unsigned >) */

loc_00141189: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0014118F: ;
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001411AF; /* jbe: below or equal (unsigned <=) */

loc_001411A1: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001411A1; /* ja: above (unsigned >) */

loc_001411AA: ;
    MEMF(esp) = xmm0; /* movss */

loc_001411AF: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001411C2; /* jbe: below or equal (unsigned <=) */

loc_001411B4: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001411B4; /* ja: above (unsigned >) */

loc_001411BD: ;
    MEMF(esp) = xmm0; /* movss */

loc_001411C2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ebx);
    /* FPU: fsin  */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x3E7;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(eax + 0x4C);
    esi = MEM32(eax + edx + 0x114);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    edx = eax + edx + 0x100;
    if (CMP_EQ(esi, edi)) goto loc_00141214; /* je: equal / zero */

loc_00141201: ;
    ebx = MEM32(edx + 0x1C);
    esi = MEM32(0x7FA20C);
    ebx = ebx - esi;
    MEM32(edx + 0x1C) = ebx;
    if (((int32_t)ebx >= 0)) goto loc_00141214; /* jns: not sign (positive) */

loc_00141211: ;
    MEM32(edx + 0x14) = edi;

loc_00141214: ;
    edx = MEM32(eax + 0x4C);
    esi = eax + edx + 0x100;
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(edx, edi)) goto loc_00141238; /* je: equal / zero */

loc_00141225: ;
    SET_LO8(ebx, MEM8(0x76EC82));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_00141247(); return; } /* jne: not equal / not zero */

loc_0014122F: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_00141247(); return; } /* je: equal / zero */

loc_00141238: ;
    xmm0 = MEMF(0x649658); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00141257(); return; /* tail jmp 0x00141257 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00141270
 * Original: 0x00141270 - 0x001413BF (335 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_00141270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(ecx + eax + 0x104); /* movss */
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = ecx + eax + 0x100;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edx + 2;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    edx = edx << 6;
    edx = edx + eax;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001412D7: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(edx + 0x30) = xmm1; /* movss */
    MEMF(edx + 0x38) = xmm1; /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm0 = MEMF(0x649154); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x2C); /* movss */
    esp = esp + 0x24;
    (void)0; /* cmp edx, edx - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x2C) = xmm1; /* movss */
    POP32(esp, esi);
    if (CMP_EQ(edx, edx)) goto loc_001413BC; /* je: equal / zero */

loc_001413A4: ;
    eax = MEM32(edx + 0x30);
    MEM32(edx + 0x30) = eax;
    ecx = MEM32(edx + 0x34);
    MEM32(edx + 0x34) = ecx;
    eax = MEM32(edx + 0x38);
    MEM32(edx + 0x38) = eax;
    ecx = MEM32(edx + 0x3C);
    MEM32(edx + 0x3C) = ecx;

loc_001413BC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001413C0
 * Original: 0x001413C0 - 0x00141632 (626 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001413C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm5;

loc_001413C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    xmm0 = MEMF(0x648E18); /* movss */
    PUSH32(esp, esi);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x38);
    ecx = MEM32(eax + 0x4C);
    xmm1 = MEMF(ecx + eax + 0x104); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = ecx + eax + 0x100;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00141428: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649154); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x88); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x8C); /* movss */
    esp = esp + 0x24;
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    ecx = esp + 0x20;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x649B58); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x7C) = xmm4; /* movss */
    MEMF(esp + 0x84) = xmm4; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00141554: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x10); /* subss */
    eax = esp + 0x50;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_001415D3: ;
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) goto loc_001415F2; /* jne: not equal / not zero */

loc_001415DA: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;

loc_001415F2: ;
    ecx = MEM32(edi + 0x34);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edx = MEM32(edi + 0x34);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    eax = MEM32(edi + 0x34);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00141632(); return; } /* je: equal / zero */

loc_00141625: ;
    ecx = MEM32(edi + 0x34);
    MEM8(ecx + 0x5A) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00141640
 * Original: 0x00141640 - 0x0014167A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141640(void)
{

loc_00141640: ;
    esp = esp - 0x14;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x1D);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 8;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0x3F;
    MEM32(esp + 0x14) = 0x6E;
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00141676: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00141680
 * Original: 0x00141680 - 0x001416A7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141680(void)
{

loc_00141680: ;
    esp = esp - 8;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x3F;
    MEM32(esp + 0x14) = 0x6E;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001416A3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001416B0
 * Original: 0x001416B0 - 0x00141850 (416 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001416B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001416B0: ;
    xmm0 = MEMF(0x648E18); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi + 0x4C);
    xmm1 = MEMF(eax + edi + 0x104); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = eax + edi + 0x100;
    ecx = ebx + 2;
    ecx = ecx << 6;
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    esi = ecx + edi;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0014171E: ;
    xmm0 = MEMF(edx + 0x10); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649154); /* movss */
    MEMF(esi + 0x30) = xmm6; /* movss */
    MEMF(esi + 0x38) = xmm6; /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    esp = esp + 0x24;
    (void)0; /* cmp esi, esi - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2C) = xmm1; /* movss */
    if (CMP_EQ(esi, esi)) goto loc_00141802; /* je: equal / zero */

loc_001417EA: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(esi + 0x34);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(esi + 0x3C);
    MEM32(esi + 0x3C) = edx;

loc_00141802: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    edx = MEM32(0x8470DC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    fp_push(MEMF(ecx + edx + 0x330)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    ecx = ecx + edx + 0x330;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_00141850(); return; } /* ja: above (unsigned >) */

loc_00141833: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_00141850(); return; } /* ja: above (unsigned >) */

loc_00141846: ;
    xmm5 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_00141888(); return; /* tail jmp 0x00141888 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00141960
 * Original: 0x00141960 - 0x00141E4D (1261 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141960(void)
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

loc_00141960: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00141D9E; /* jne: not equal / not zero */

loc_00141970: ;
    if (CMP_B(MEM32(0x802324), 0x1C)) goto loc_00141E44; /* jb: below (unsigned <) */

loc_0014197D: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_00141982: ;
    SET_LO8(ecx, MEM8(eax + 0x28C));
    SET_LO8(edx, 1);
    if (TEST_Z(LO8(edx), LO8(ecx))) goto loc_001419AB; /* je: equal / zero */

loc_0014198E: ;
    eax = MEM32(0x802080);
    eax = eax & 0x10000000;
    ecx = 0; /* xor self */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_00141D98; /* jne: not equal / not zero */

loc_001419A2: ;
    SET_LO8(eax, MEM8(0x774A70));
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_001419AB: ;
    eax = MEM32(0x84B4A0);
    ecx = MEM32(0x84A5F8);
    eax = eax + 0xD20;
    if (TEST_Z(ecx, ecx)) goto loc_00141E44; /* je: equal / zero */

loc_001419C3: ;
    if (TEST_Z(eax, eax)) goto loc_00141E44; /* je: equal / zero */

loc_001419CB: ;
    if (CMP_EQ(MEM8(eax + 0x14), LO8(edx))) goto loc_00141E44; /* je: equal / zero */

loc_001419D4: ;
    xmm1 = MEMF(ecx + 0x7C); /* movss */
    (void)0; /* test MEM8(eax + 0x16), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax);
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm7 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x1EC);
    xmm5 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x1EE);
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    POP32(esp, esi);
    if (TEST_Z(MEM8(eax + 0x16), LO8(edx))) goto loc_00141A56; /* je: equal / zero */

loc_00141A38: ;
    xmm3 = MEMF(ecx + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(ecx + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_00141E44; /* jb: below (unsigned <) */

loc_00141A56: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x15));
    edx = edx & 3;
    if (CMP_A(edx, 3)) goto loc_00141E44; /* ja: above (unsigned >) */

loc_00141A67: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x141E50); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00141A6Eu) goto loc_00141A6E;
    if (_jt == 0x00141B4Au) goto loc_00141B4A;
    if (_jt == 0x00141B87u) goto loc_00141B87;
    if (_jt == 0x00141C4Eu) goto loc_00141C4E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00141A6E: ;
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_00141A8A; /* ja: above (unsigned >) */

loc_00141A80: ;
    xmm4 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_00141AE3; /* jbe: below or equal (unsigned <=) */

loc_00141A8A: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm6 = MEMF(eax + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm1 = xmm3; /* movaps */

loc_00141AE3: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 8) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 4))) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141B1E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141B30: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00141D98; /* ja: above (unsigned >) */

loc_00141B41: ;
    SET_LO8(eax, MEM8(0x774A70));
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00141B4A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00141B66: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 4;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00141D98; /* ja: above (unsigned >) */

loc_00141B7E: ;
    SET_LO8(eax, MEM8(0x774A70));
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00141B87: ;
    xmm6 = MEMF(eax + 0x2C); /* movss */
    xmm3 = MEMF(eax + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141BB8: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141BCB: ;
    xmm4 = MEMF(eax + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141C08: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141C1B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141C38: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_00141D98; /* ja: above (unsigned >) */

loc_00141C45: ;
    SET_LO8(eax, MEM8(0x774A70));
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00141C4E: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 0x8C); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 8) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 4); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 4) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141D13: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_00141E44; /* jb: below (unsigned <) */

loc_00141D1C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * MEMF(esp); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    /* FPU: fdivr dword ptr [esp + 4] */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141D70: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 4); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_00141E44; /* jb: below (unsigned <) */

loc_00141D87: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141D98: ;
    SET_LO8(eax, 0xA);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00141D9E: ;
    if (CMP_NE(eax, 6)) goto loc_00141E44; /* jne: not equal / not zero */

loc_00141DA7: ;
    eax = MEM32(0x84A5F8);
    if (TEST_Z(eax, eax)) goto loc_00141E44; /* je: equal / zero */

loc_00141DB4: ;
    xmm0 = MEMF(0x64991C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649918); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649914); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, MEMF(0x649910) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649910))) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141DEC: ;
    xmm0 = MEMF(0x64990C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x7C))) goto loc_00141E44; /* jbe: below or equal (unsigned <=) */

loc_00141DFA: ;
    edx = eax + 0x78;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_00141E0B: ;
    ecx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_00141E32: ;
    xmm1 = MEMF(0x6493B4); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    SET_LO8(eax, 2);
    if ((xmm1 > xmm0)) goto loc_00141E49; /* ja: above (unsigned >) */

loc_00141E44: ;
    SET_LO8(eax, MEM8(0x774A70));

loc_00141E49: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00141E90
 * Original: 0x00141E90 - 0x00141E96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141E90(void)
{

loc_00141E90: ;
    eax = 0xDF;
    esp += 4; return; /* ret */

}

/**
 * sub_00141EA0
 * Original: 0x00141EA0 - 0x00141EA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141EA0(void)
{

loc_00141EA0: ;
    eax = 0x1D;
    esp += 4; return; /* ret */

}

/**
 * sub_00141EB0
 * Original: 0x00141EB0 - 0x00141EC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00141EB0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00141EB5: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFF7Eu;
    eax = eax + 0x93;
    esp += 4; return; /* ret */

}

/**
 * sub_00141ED0
 * Original: 0x00141ED0 - 0x00141ED6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141ED0(void)
{

loc_00141ED0: ;
    eax = 0x25C;
    esp += 4; return; /* ret */

}

/**
 * sub_00141EE0
 * Original: 0x00141EE0 - 0x00141F1E (62 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141EE0(void)
{

loc_00141EE0: ;
    esp = esp - 0x14;
    MEM32(esp) = 0x2E;
    MEM32(esp + 4) = 0x30;
    MEM32(esp + 8) = 0x2D;
    MEM32(esp + 0xC) = 0x33;
    MEM32(esp + 0x10) = 0x34;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00141F0F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00141F20
 * Original: 0x00141F20 - 0x00141F2E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141F20(void)
{

loc_00141F20: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00141F25: ;
    eax = ~eax;
    eax = eax & 1;
    eax = eax | 0x66;
    esp += 4; return; /* ret */

}

/**
 * sub_00141F30
 * Original: 0x00141F30 - 0x00141F36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141F30(void)
{

loc_00141F30: ;
    eax = 0x95;
    esp += 4; return; /* ret */

}

/**
 * sub_00141F40
 * Original: 0x00141F40 - 0x00141F46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141F40(void)
{

loc_00141F40: ;
    eax = 0x9F;
    esp += 4; return; /* ret */

}

/**
 * sub_00141F50
 * Original: 0x00141F50 - 0x00141F56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141F50(void)
{

loc_00141F50: ;
    eax = 0x75;
    esp += 4; return; /* ret */

}

/**
 * sub_00141F60
 * Original: 0x00141F60 - 0x00141F9A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00141F60: ;
    esp = esp - 0x10;
    MEM32(esp) = 0x60;
    MEM32(esp + 4) = 0x61;
    MEM32(esp + 8) = 0x62;
    MEM32(esp + 0xC) = 0x63;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00141F87: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00141F93; /* jns: not sign (positive) */

loc_00141F8E: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00141F93: ;
    eax = MEM32(esp + eax * 4);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00141FA0
 * Original: 0x00141FA0 - 0x00141FA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141FA0(void)
{

loc_00141FA0: ;
    eax = 0x262;
    esp += 4; return; /* ret */

}

/**
 * sub_00141FB0
 * Original: 0x00141FB0 - 0x00141FB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141FB0(void)
{

loc_00141FB0: ;
    eax = 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00141FC0
 * Original: 0x00141FC0 - 0x0014212D (365 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141FC0: ;
    esp = esp - 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC0));
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0xA4));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    MEM32(esp + 0x54) = 0x303;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_00141FEC: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x58) = eax;
    SET_LO8(eax, MEM8(esp + 0xB8));
    MEM8(esp + 0x3B) = LO8(eax);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(0x595D1C);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(0x595D14);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(0x595D18);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esi + 8);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esi);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x90) = eax;
    esi = 2;
    eax = 0; /* xor self */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x38) = 0;
    MEM8(esp + 0x39) = 0;
    MEM8(esp + 0x3A) = 0;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = edx;
    MEM16(esp + 0x60) = 1;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = 4;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001420BC: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001420C8: ;
    SET_LO8(ecx, MEM8(ebp + 0x5975B4));
    eax = eax & 1;
    edi = edi | eax;
    eax = MEM32(esp + 0xB4);
    edi = edi << 6;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x800000;
    edi = edi | ecx;
    edx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0xFF9D - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO16(eax), 0xFF9D)) ? 1 : 0); /* setne */
    ecx = 0xFF;
    edi = edi | edx;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x10000;
    edi = edi | ebx;
    edi = edi | 0xC206;
    (void)0; /* cmp LO16(eax), 0xFF9D - flags set for next jcc */
    MEM32(esp + 0x98) = edi;
    if (CMP_NE(LO16(eax), 0xFF9D)) { sub_0014212D(); return; } /* jne: not equal / not zero */

loc_00142118: ;
    MEM16(esp + 0x2C) = 0x12C;
    MEM16(esp + 0x5C) = 1;
    MEM16(esp + 0x5E) = LO16(ecx);
    g_seh_ebp = ebp; sub_00142143(); return; /* tail jmp 0x00142143 */

}

/**
 * sub_001422E0
 * Original: 0x001422E0 - 0x0014230A (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001422E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001422E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00142310(); /* call 0x00142310 */

loc_001422F1: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0014230A(); return; } /* je: equal / zero */

loc_001422F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00142410(); /* call 0x00142410 */

loc_001422FF: ;
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00142310
 * Original: 0x00142310 - 0x00142410 (256 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142310(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00142310: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x189));
    SET_LO8(eax, 1);
    if (TEST_NZ(LO8(eax), LO8(edx))) goto loc_0014240F; /* jne: not equal / not zero */

loc_00142324: ;
    SET_LO8(eax, MEM8(ecx + 0x176));
    SET_LO8(edx, MEM8(ecx + 0x174));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA20C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x177));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x175));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x174) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ecx + 0x175) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00142372; /* je: equal / zero */

loc_00142366: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_00142377;

loc_00142372: ;
    eax = eax & 0x3F;
    esi = eax;

loc_00142377: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00142391; /* je: equal / zero */

loc_0014237E: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00142391; /* je: equal / zero */

loc_00142383: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_0014239A;

loc_00142391: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_0014239A: ;
    xmm2 = MEMF(ecx + 0x178); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x170); /* addss */
    eax = 0; /* xor self */
    MEMF(ecx + 0x68) = xmm2; /* movss */
    SET_LO8(eax, MEM8(ecx + 0x175));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001423D2; /* je: equal / zero */

loc_001423C6: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_001423D7;

loc_001423D2: ;
    eax = eax & 0x3F;
    esi = eax;

loc_001423D7: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001423E9; /* je: equal / zero */

loc_001423DB: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm1 = xmm1 - MEMF(esi * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_001423F2; /* jne: not equal / not zero */

loc_001423E9: ;
    xmm1 = MEMF(esi * 4 + 0x743090); /* movss */

loc_001423F2: ;
    xmm0 = MEMF(ecx + 0x17C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x170); /* addss */
    POP32(esp, esi);
    MEMF(ecx + 0x6C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);

loc_0014240F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00142410
 * Original: 0x00142410 - 0x0014264D (573 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142410(void)
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

loc_00142410: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* comiss xmm0, MEMF(ebp + 0x74) - sets EFLAGS */
    PUSH32(esp, esi);
    MEM8(esp + 0xB) = 1;
    if ((xmm0 <= MEMF(ebp + 0x74))) goto loc_00142643; /* jbe: below or equal (unsigned <=) */

loc_00142431: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    esi = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_0014245B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00142465; /* jne: not equal / not zero */

loc_0014245F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00142465: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = ebp + 0xB0;
    PUSH32(esp, ebx);
    edi = esp + 0x20;
    MEM32(0x780AB0) = 0x5F4308;
    MEM32(0x6C0210) = 0x207;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_001424A3: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x74FA2C) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM32(0x780AB0) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00142641; /* je: equal / zero */

loc_001424CA: ;
    (void)0; /* test MEM8(ebp + 0x189), 2 - flags set for next jcc */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(MEM8(ebp + 0x189), 2)) goto loc_001425A2; /* je: equal / zero */

loc_001424E9: ;
    xmm1 = MEMF(ebp + 0x6C); /* movss */
    xmm1 = xmm1 * MEMF(0x6496A8); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(ebp + 0x88); /* movss */
    MEMF(ebp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(0x64A9A8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(ebp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x8C); /* movss */
    xmm0 = xmm0 * MEMF(0x64A9A4); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x90); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64A9A0)); /* fld float */
    xmm0 = xmm0 * xmm1; /* mulss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(ebp + 0x90) = xmm0; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00142591; /* jbe: below or equal (unsigned <=) */

loc_0014255F: ;
    eax = MEM32(ebp + 0x98);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax & 0xFFFFFFF9u;
    MEMF(ebp + 0x88) = xmm0; /* movss */
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    MEMF(ebp + 0x90) = xmm0; /* movss */
    MEMF(ebp + 0x94) = xmm0; /* movss */
    MEM32(ebp + 0x98) = eax;

loc_00142591: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esp + 0xB) = 1;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001425A2: ;
    SET_LO8(eax, MEM8(ebp + 0x155));
    xmm0 = MEMF(ebp + 0x6C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x68); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    SET_LO8(edx, MEM8(ebp + 0x3B));
    MEM8(esp + 0x13) = LO8(ebx);
    ecx = ebp + 0xC0;
    if (CMP_NE(LO8(eax), 3)) goto loc_00142602; /* jne: not equal / not zero */

loc_001425CD: ;
    xmm1 = MEMF(ebp + 0x184); /* movss */
    SET_LO8(eax, MEM8(ebp + 4));
    SET_LO8(ebx, MEM8(ebp + 0x188));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = esp + 0x20;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00142ED0(); /* call 0x00142ED0 */

loc_001425F3: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00142602: ;
    xmm1 = MEMF(ebp + 0x180); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 4));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x649578); /* mulss */
    edi = 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x188));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_0014263E: ;
    esp = esp + 0x1C;

loc_00142641: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00142643: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00142650
 * Original: 0x00142650 - 0x0014271C (204 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142650(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00142650: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x40;
    if (CMP_EQ(eax, 0xA)) goto loc_00142666; /* je: equal / zero */

loc_0014265D: ;
    if (CMP_NE(eax, 0x31)) goto loc_00142718; /* jne: not equal / not zero */

loc_00142666: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648CF4); /* movss */
    ecx = 1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x774A6C);
    PUSH32(esp, 0x6B70EC);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x22;
    PUSH32(esp, edx);
    edx = MEM32(0x771B78);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEM8(esp + 0x60) = LO8(eax);
    PUSH32(esp, edx);
    ecx = 0x180;
    SET_LO8(eax, 0x40);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0x1B;
    MEM32(esp + 0x50) = 0x1C;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000EC4B0(); /* call 0x000EC4B0 */

loc_00142718: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00142720
 * Original: 0x00142720 - 0x00142777 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142720: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0xA)) goto loc_0014272F; /* je: equal / zero */

loc_0014272A: ;
    if (CMP_NE(eax, 0x31)) goto loc_00142776; /* jne: not equal / not zero */

loc_0014272F: ;
    SET_LO16(eax, MEM16(0x6B70EC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0014276B; /* je: equal / zero */

loc_00142745: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_0014275C: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_0014276B: ;
    POP32(esp, edi);
    MEM16(0x6B70EC) = 0xFFFF;
    POP32(esp, ebp);

loc_00142776: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00142780
 * Original: 0x00142780 - 0x00142877 (247 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142780(void)
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

loc_00142780: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142789: ;
    esi = eax;
    esi = ~esi;
    esi = esi & 1;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00142795: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001427A8: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_001427BD: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO16(eax, MEM16(0x6B70EC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO16(esi, MEM16(esi * 2 + 0x774A6C));
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00142872; /* je: equal / zero */

loc_00142820: ;
    edx = MEM32(0x771B78);
    eax = ZX16(LO16(eax));
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx << 5;
    eax = eax & 0xFFF;
    ecx = ecx + eax;
    ecx = MEM32(edx + ecx * 4 + 0x31C);
    edx = MEM32(esp + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = edx + 0x70;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00142872: ;
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
 * sub_00142880
 * Original: 0x00142880 - 0x001428AE (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142880(void)
{

loc_00142880: ;
    esp = esp - 0xC;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 2;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014289F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001428B0
 * Original: 0x001428B0 - 0x001428DE (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001428B0(void)
{

loc_001428B0: ;
    esp = esp - 0xC;
    MEM32(esp) = 0xF;
    MEM32(esp + 4) = 0x10;
    MEM32(esp + 8) = 0x11;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001428CF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001428E0
 * Original: 0x001428E0 - 0x0014290E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001428E0(void)
{

loc_001428E0: ;
    esp = esp - 0xC;
    MEM32(esp) = 0x8F;
    MEM32(esp + 4) = 0x90;
    MEM32(esp + 8) = 0x91;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001428FF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142910
 * Original: 0x00142910 - 0x00142928 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00142910: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x35 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ecx, 0x35)) ? 1 : 0); /* setne */
    eax--;
    eax = eax & 0x2B1;
    eax = eax + 0x1D;
    esp += 4; return; /* ret */

}

/**
 * sub_00142930
 * Original: 0x00142930 - 0x0014295E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142930(void)
{

loc_00142930: ;
    esp = esp - 0xC;
    MEM32(esp) = 0x25E;
    MEM32(esp + 4) = 0x25F;
    MEM32(esp + 8) = 0x260;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014294F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142960
 * Original: 0x00142960 - 0x00142966 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142960(void)
{

loc_00142960: ;
    eax = 0x25B;
    esp += 4; return; /* ret */

}

/**
 * sub_00142970
 * Original: 0x00142970 - 0x001429AE (62 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142970(void)
{

loc_00142970: ;
    esp = esp - 0x14;
    MEM32(esp) = 0x31;
    MEM32(esp + 4) = 0x32;
    MEM32(esp + 8) = 0x33;
    MEM32(esp + 0xC) = 0xD;
    MEM32(esp + 0x10) = 0xE;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014299F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001429B0
 * Original: 0x001429B0 - 0x001429B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001429B0(void)
{

loc_001429B0: ;
    eax = 0x96;
    esp += 4; return; /* ret */

}

/**
 * sub_001429C0
 * Original: 0x001429C0 - 0x001429EA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001429C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001429C0: ;
    esp = esp - 8;
    MEM32(esp) = 0x1B;
    MEM32(esp + 4) = 0x1C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001429D7: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_001429E3; /* jns: not sign (positive) */

loc_001429DE: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001429E3: ;
    eax = MEM32(esp + eax * 4);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001429F0
 * Original: 0x001429F0 - 0x00142A1E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001429F0(void)
{

loc_001429F0: ;
    esp = esp - 0xC;
    MEM32(esp) = 0xA0;
    MEM32(esp + 4) = 0xA1;
    MEM32(esp + 8) = 0xA2;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142A0F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142A20
 * Original: 0x00142A20 - 0x00142A26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142A20(void)
{

loc_00142A20: ;
    eax = 0xB3;
    esp += 4; return; /* ret */

}

/**
 * sub_00142A30
 * Original: 0x00142A30 - 0x00142A5E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142A30(void)
{

loc_00142A30: ;
    esp = esp - 0xC;
    MEM32(esp) = 0xB9;
    MEM32(esp + 4) = 0xBA;
    MEM32(esp + 8) = 0xBB;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142A4F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142A60
 * Original: 0x00142A60 - 0x00142A9D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00142A60: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x74));
    (void)0; /* cmp LO8(ebx), 7 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(LO8(ebx), 7)) { sub_00142A9D(); return; } /* jne: not equal / not zero */

loc_00142A70: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0xA)) goto loc_00142A7F; /* je: equal / zero */

loc_00142A7A: ;
    if (CMP_NE(eax, 0x31)) { sub_00142A9D(); return; } /* jne: not equal / not zero */

loc_00142A7F: ;
    eax = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00142780(); /* call 0x00142780 */

loc_00142A92: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00142E30
 * Original: 0x00142E30 - 0x00142EC5 (149 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142E30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00142E30: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0x4C) = MEM16(esi + 0x4C) - LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x4C));
    if (((int32_t)MEM16(esi + 0x4C) >= 0)) goto loc_00142EC3; /* jns: not sign (positive) */

loc_00142E45: ;
    eax = MEM32(esi + 0x50);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x61));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40400000);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x60));
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142E72: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x46;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00142E83: ;
    xmm0 = xmm0 * MEMF(0x649154); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A2AC); /* subss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x62));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    ecx = esi + 0x54;
    eax = 0x595D14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00142EAC: ;
    esp = esp + 0x34;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142EB4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    MEM16(esi + 0x4C) = LO16(edx);

loc_00142EC3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00142ED0
 * Original: 0x00142ED0 - 0x00142F39 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142ED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00142ED0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(ecx, ZX8(MEM8(esp + 0xC)));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00144690(); /* call 0x00144690 */

loc_00142EFA: ;
    esp = esp + 0x10;
    if (CMP_EQ(LO8(ebx), 5)) goto loc_00142F36; /* je: equal / zero */

loc_00142F02: ;
    if (CMP_EQ(LO8(ebx), 2)) goto loc_00142F36; /* je: equal / zero */

loc_00142F07: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64A480); /* mulss */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F8147AE);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    eax = esi;
    ecx = 0x64;
    PUSH32(esp, 0); sub_00142F40(); /* call 0x00142F40 */

loc_00142F33: ;
    esp = esp + 0x14;

loc_00142F36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00142F40
 * Original: 0x00142F40 - 0x001430DD (413 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142F40: ;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    SET_LO16(edi, LO16(ecx));
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00142F57: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(esp + 0x148); /* movss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x78) = xmm6; /* movss */
    MEM32(esp + 0x74) = 0x303;
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142F86: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 2);
    MEM8(esp + 0x12) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00142F9A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 2);
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00142FAE: ;
    xmm7 = MEMF(0x648E64); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00142FD1: ;
    SET_LO8(eax, MEM8(esp + 0x144));
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    edx = ZX8(LO8(eax));
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEM8(esp + 0x28) = LO8(eax);
    MEM8(esp + 0x7C) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x597610), _icall_esp); /* indirect call */
    }

loc_00143007: ;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x148); /* movss */
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x80) = eax;
    eax = 2;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xA8) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = 4;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0xCC00008;
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) { sub_001430DD(); return; } /* jne: not equal / not zero */

loc_001430C0: ;
    MEM16(esp + 0x2E) = 0x12C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM16(esp + 0x6C) = 1;
    MEM16(esp + 0x6E) = 0xFF;
    g_seh_ebp = ebp; sub_0014311C(); return; /* tail jmp 0x0014311C */

}

/**
 * sub_001434F0
 * Original: 0x001434F0 - 0x00143529 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001434F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001434F0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x64), 1)) goto loc_00143523; /* je: equal / zero */

loc_001434FA: ;
    ecx = MEM32(0x7FA20C);
    if (TEST_Z(ecx, ecx)) goto loc_00143523; /* je: equal / zero */

loc_00143504: ;
    xmm1 = MEMF(eax + 0x33C); /* movss */
    xmm0 = MEMF(eax + 0x338); /* movss */

loc_00143514: ;
    ecx--;
    xmm0 = xmm0 * xmm1; /* mulss */
    if ((ecx != 0)) goto loc_00143514; /* jne: not equal / not zero */

loc_0014351B: ;
    MEMF(eax + 0x338) = xmm0; /* movss */

loc_00143523: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00143530
 * Original: 0x00143530 - 0x001437B0 (640 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143530: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 0x8C));
    MEM8(esp + 0x41) = LO8(ecx);
    edx = esi;
    ecx = MEM32(edx);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x80);
    ecx = ecx + 0x10;
    MEM16(esp + 0x38) = LO16(ecx);
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    SET_LO8(edx, MEM8(esp + 0xA0));
    MEM32(esp + 0x58) = eax;
    eax = ZX8(LO8(edx));
    SET_LO8(ecx, MEM8(eax + 0x5975B4));
    SET_LO8(ebx, MEM8(eax + 0x597668));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    xmm0 = MEMF(esp + 0xBC); /* movss */
    SET_LO8(eax, MEM8(eax + 0x597654));
    ebp = MEM32(esp + 0x90);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC4);
    MEM8(esp + 0x6C) = LO8(eax);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x80;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    SET_LO8(eax, 0xFF);
    MEM16(esp + 0x3E) = 0x35;
    MEM32(esp + 0x40) = 1;
    MEM8(esp + 0x44) = 0xFF;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x20;
    ecx = ecx | ebx;
    ecx = ecx | 0x48;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x68) = ecx;
    SET_LO16(ecx, MEM16(esp + 0xAC));
    MEM16(esp + 0x72) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xB0));
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM8(esp + 0x6D) = LO8(eax);
    MEM16(esp + 0x74) = LO16(ecx);
    if (TEST_Z(edi, edi)) goto loc_00143674; /* je: equal / zero */

loc_00143635: ;
    if (CMP_NE(MEM32(edi + 0x68), 0x194)) goto loc_00143674; /* jne: not equal / not zero */

loc_0014363E: ;
    SET_LO8(eax, 0x32);

loc_00143640: ;
    MEM8(esp + 0x6F) = LO8(eax);
    MEM8(esp + 0x6E) = LO8(eax);

loc_00143648: ;
    MEM8(esp + 0x70) = LO8(eax);

loc_0014364C: ;
    (void)0; /* cmp ebp, 1 - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x88));
    MEM8(esp + 0x71) = LO8(ecx);
    if (CMP_NE(ebp, 1)) { sub_001437B0(); return; } /* jne: not equal / not zero */

loc_00143660: ;
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 3;
    eax = 7;
    ecx = 4;
    g_seh_ebp = ebp; sub_001437CD(); return; /* tail jmp 0x001437CD */

loc_00143674: ;
    SET_LO8(ecx, MEM8(esp + 0xA0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00143793; /* je: equal / zero */

loc_00143683: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    xmm0 = MEMF(esi); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_00143698: ;
    eax = MEM32(0x5A02F8);
    ecx = MEM32(0x5A02F0);
    edx = MEM32(0x5A02F4);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x20;
    esp = esp + 0x10;
    ebx = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001436C3: ;
    ecx = MEM32(0x85D5B4);
    edx = esp + 0x1C;
    eax = ebx;
    PUSH32(esp, 0); sub_0012CDB0(); /* call 0x0012CDB0 */

loc_001436D4: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00143701; /* ja: above (unsigned >) */

loc_001436F8: ;
    MEMF(esp + 0xAC) = xmm1; /* movss */

loc_00143701: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014370D: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x6E) = LO8(eax);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0014373E; /* ja: above (unsigned >) */

loc_00143735: ;
    MEMF(esp + 0xAC) = xmm1; /* movss */

loc_0014373E: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014374A: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x6F) = LO8(eax);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0014377B; /* ja: above (unsigned >) */

loc_00143772: ;
    MEMF(esp + 0xAC) = xmm1; /* movss */

loc_0014377B: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00143787: ;
    SET_LO8(edx, MEM8(esp + 0xA4));
    goto loc_00143648;

loc_00143793: ;
    if (CMP_NE(LO8(edx), 4)) goto loc_00143640; /* jne: not equal / not zero */

loc_0014379C: ;
    SET_LO8(eax, 0xC8);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x6F) = LO8(eax);
    MEM8(esp + 0x70) = 0xB4;
    goto loc_0014364C;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00143880
 * Original: 0x00143880 - 0x00143955 (213 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143880(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00143880: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    edx = MEM32(eax + 0x140);
    ecx = ecx + ecx * 4;
    xmm0 = MEMF(edx + ecx * 4); /* movss */
    ecx = edx + ecx * 4;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esi + 0x40);
    if (TEST_Z(ecx, ecx)) goto loc_001438D7; /* je: equal / zero */

loc_001438CE: ;
    if (CMP_EQ(MEM32(ecx + 0x68), 0x194)) goto loc_00143947; /* je: equal / zero */

loc_001438D7: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00143908; /* jne: not equal / not zero */

loc_001438DF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001438E4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000BA020(); /* call 0x000BA020 */

loc_001438F6: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = 4;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00143908: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x34); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 4));
    eax = MEM32(esp + 0x2C);
    edi = 0x12C;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x21));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_00143943: ;
    esp = esp + 0x1C;
    POP32(esp, edi);

loc_00143947: ;
    MEM8(esi + 0x2C) = 4;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143960
 * Original: 0x00143960 - 0x001439E3 (131 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143960(void)
{
    float xmm0;

loc_00143960: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    edx = MEM32(eax + 0x140);
    ecx = ecx + ecx * 4;
    xmm0 = MEMF(edx + ecx * 4); /* movss */
    ecx = edx + ecx * 4;
    edx = MEM32(esp + 0x24);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    SET_LO8(eax, MEM8(eax + 4));
    SET_LO8(ebx, MEM8(esi + 0x3C));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x21));
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    xmm0 = xmm0 * MEMF(0x64912C); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00142ED0(); /* call 0x00142ED0 */

loc_001439D1: ;
    esp = esp + 0xC;
    MEM8(esi + 0x2C) = 4;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001439F0
 * Original: 0x001439F0 - 0x00143BE0 (496 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001439F0: ;
    esp = esp - 0x120;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x134));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00143A09: ;
    edi = ZX8(MEM8(esp + 0x130));
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x60) = 0x303;
    MEM8(esp + 0x68) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_00143A2E: ;
    ecx = MEM32(esi);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi + 4);
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x24) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x5975B4));
    ebp = 0; /* xor self */
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    MEM32(esp + 0x6C) = eax;
    eax = 2;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x94) = eax;
    SET_LO8(eax, MEM8(esp + 0x138));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x40000000;
    MEM8(esp + 0x5F) = LO8(eax);
    eax = MEM32(esi + 8);
    ecx = ecx | 0xCC00009;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x134); /* movss */
    MEM32(esp + 0x84) = ebp;
    MEM32(esp + 0x88) = 4;
    MEM32(esp + 0x90) = ebp;
    MEM16(esp + 0x1A) = 0x64;
    MEM8(esp + 0x5C) = 0xFF;
    MEM8(esp + 0x5D) = 0xFF;
    MEM8(esp + 0x5E) = 0xFF;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEM32(esp + 0x98) = ebp;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143B14: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 6);
    MEM8(esp + 0xD) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00143B28: ;
    xmm5 = MEMF(0x648E64); /* movss */
    xmm6 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00143B4B: ;
    edx = MEM32(esp + 0x140);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(ebx));
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x1C) = 0;
    MEM32(esp + 0x50) = ebp;
    MEM8(esp + 0x54) = 0xFF;
    MEM32(esp + 0x58) = ebp;
    MEM16(esp + 0x5C) = 0x20;
    MEM16(esp + 0x5E) = 7;
    PUSH32(esp, 0xC);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7F;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, eax);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 3;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143B9A: ;
    eax = eax & 0xFFFFFF01u;
    eax = eax | 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x597978);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00143BB7: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebp)) goto loc_00143BD9; /* je: equal / zero */

loc_00143BC1: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x310;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00143BD9: ;
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_00143C80
 * Original: 0x00143C80 - 0x00143D78 (248 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143C80(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_00143C80: ;
    ecx = MEM32(esp + 4);
    xmm1 = MEMF(ecx + 0x58); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x3C); /* mulss */
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    eax = ecx + 0x294;
    edx = edx << 2;
    xmm2 = MEMF(edx + 0x77149C); /* movss */
    xmm3 = MEMF(edx + 0x77148C); /* movss */
    edx = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x50) = LO16(edx);
    MEM16(eax + 0x6C) = LO16(edx);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0x40); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm1; /* movss */
    MEMF(eax) = xmm1; /* movss */
    edx = (int32_t)MEMF(ecx + 0x44); /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x48); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x40); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x44); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x48); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00143D80
 * Original: 0x00143D80 - 0x00143DA0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143D80(void)
{

loc_00143D80: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143D85: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 4);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(ecx);
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(eax + 0xC) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143DC0
 * Original: 0x00143DC0 - 0x00143DFF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143DC0(void)
{

loc_00143DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143DC6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esi + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143DDC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x60);
    MEM8(esi + 0xD) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143DEF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x1E);
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143E00
 * Original: 0x00143E00 - 0x00143E31 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E00(void)
{

loc_00143E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143E06: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143E1D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 0xE) = 0;
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xD) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143E40
 * Original: 0x00143E40 - 0x00143E51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E40(void)
{

loc_00143E40: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, 0xC8);
    MEM8(eax + 0xC) = 0xB4;
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143E60
 * Original: 0x00143E60 - 0x00143E71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E60(void)
{

loc_00143E60: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0xC8;
    MEM8(eax + 0xE) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143E80
 * Original: 0x00143E80 - 0x00143EA2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E80(void)
{

loc_00143E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143E8E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 0xE) = 0;
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xD) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143EB0
 * Original: 0x00143EB0 - 0x00143EF6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00143EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143EB6: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00143EC2; /* jns: not sign (positive) */

loc_00143EBD: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00143EC2: ;
    esi = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) + 0x3A);
    MEM8(esi + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143ED0: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00143EDC; /* jns: not sign (positive) */

loc_00143ED7: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00143EDC: ;
    SET_LO8(eax, LO8(eax) + 0x3C);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143EE6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x19);
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143F00
 * Original: 0x00143F00 - 0x00143F21 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F00(void)
{

loc_00143F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F0E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xE) = LO8(edx);
    MEM8(esi + 0xD) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143F30
 * Original: 0x00143F30 - 0x00143F61 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F30(void)
{

loc_00143F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F36: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 8);
    MEM8(esi + 0xD) = 0;
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F51: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x4C);
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143F70
 * Original: 0x00143F70 - 0x00143FAD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F70(void)
{

loc_00143F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F76: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esi + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F8C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esi + 0xD) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143F9E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143FB0
 * Original: 0x00143FB0 - 0x00143FF0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FB0(void)
{

loc_00143FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143FB6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - 0x2E);
    MEM8(esi + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143FCD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x38);
    MEM8(esi + 0xD) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00143FE0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x7E);
    MEM8(esi + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143FF0
 * Original: 0x00143FF0 - 0x0014410D (285 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143FF0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC0));
    edx = 0; /* xor self */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0xB4));
    PUSH32(esp, esi);
    esi = eax;
    eax = 4;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x44) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 2;
    eax = edx;
    /* TODO: cmovp eax, ecx */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x50) = ecx;
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x54) = 0x303;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x4C) = edx;
    MEM8(esp + 0x10) = LO8(ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x18) = LO8(edx);
    MEM8(esp + 0x19) = LO8(edx);
    MEM8(esp + 0x1A) = LO8(edx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0014410D(); return; } /* je: equal / zero */

loc_0014406E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144073: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 3);
    MEM8(esp + 0x1B) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144087: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 3);
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014409B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 3);
    MEM8(esp + 0x1D) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001440AF: ;
    xmm5 = MEMF(0x64909C); /* movss */
    xmm6 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001440D7: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6496F0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * xmm6; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001440F9: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00144139(); return; /* tail jmp 0x00144139 */

}

/**
 * sub_00144310
 * Original: 0x00144310 - 0x0014450D (509 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144310(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00144310: ;
    ecx = MEM32(esp + 4);
    (void)0; /* test MEM8(ecx + 0x170), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(ecx + 0x170), 2)) goto loc_001443BB; /* je: equal / zero */

loc_00144329: ;
    xmm0 = MEMF(ecx + 0x174); /* movss */
    eax = ebx;
    if (CMP_L(eax, 4)) goto loc_00144389; /* jl: less (signed <) */

loc_00144338: ;
    xmm1 = MEMF(ecx + 0x88); /* movss */
    xmm2 = MEMF(ecx + 0x90); /* movss */
    edx = eax + -4;
    edx = edx >> 2;
    edx++;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    eax = eax + esi * 4;

loc_00144356: ;
    edx--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    if ((edx != 0)) goto loc_00144356; /* jne: not equal / not zero */

loc_00144379: ;
    MEMF(ecx + 0x88) = xmm1; /* movss */
    MEMF(ecx + 0x90) = xmm2; /* movss */

loc_00144389: ;
    if (CMP_LE(eax & eax, 0)) goto loc_001443BB; /* jle: less or equal (signed <=) */

loc_0014438D: ;
    xmm1 = MEMF(ecx + 0x88); /* movss */
    xmm2 = MEMF(ecx + 0x90); /* movss */
    /* nop */

loc_001443A0: ;
    eax--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    if ((eax != 0)) goto loc_001443A0; /* jne: not equal / not zero */

loc_001443AB: ;
    MEMF(ecx + 0x88) = xmm1; /* movss */
    MEMF(ecx + 0x90) = xmm2; /* movss */

loc_001443BB: ;
    SET_LO8(edx, MEM8(ecx + 0x170));
    SET_LO8(eax, 1);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0014450A; /* je: equal / zero */

loc_001443CB: ;
    SET_LO8(eax, MEM8(ecx + 0x17B));
    SET_LO8(edx, MEM8(ecx + 0x178));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x17C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x179) = MEM8(ecx + 0x179) + LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x179));
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x17D));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x17A));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x178) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(ecx + 0x17A) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00144429; /* je: equal / zero */

loc_0014441D: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_0014442E;

loc_00144429: ;
    eax = eax & 0x3F;
    esi = eax;

loc_0014442E: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00144448; /* je: equal / zero */

loc_00144435: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00144448; /* je: equal / zero */

loc_0014443A: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00144451;

loc_00144448: ;
    xmm2 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00144451: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0014446E; /* je: equal / zero */

loc_00144462: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_00144473;

loc_0014446E: ;
    eax = eax & 0x3F;
    esi = eax;

loc_00144473: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0014448A; /* je: equal / zero */

loc_00144477: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_0014448A; /* je: equal / zero */

loc_0014447C: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00144493;

loc_0014448A: ;
    xmm1 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00144493: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001444AF; /* je: equal / zero */

loc_001444A3: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_001444B4;

loc_001444AF: ;
    eax = eax & 0x3F;
    esi = eax;

loc_001444B4: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001444C6; /* je: equal / zero */

loc_001444B8: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_001444CF; /* jne: not equal / not zero */

loc_001444C6: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_001444CF: ;
    xmm3 = MEMF(ecx + 0x180); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(ecx + 0x7C) = xmm3; /* movss */
    xmm2 = MEMF(ecx + 0x184); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x80) = xmm2; /* movss */
    xmm1 = MEMF(ecx + 0x188); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x84) = xmm1; /* movss */
    SET_LO8(eax, 1);

loc_0014450A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00144510
 * Original: 0x00144510 - 0x001445ED (221 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144510(void)
{
    float xmm0;

loc_00144510: ;
    esp = esp - 0x44;
    xmm0 = MEMF(0x64A2C0); /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64A874); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64A870); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A86C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEM32(esp) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x48));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A868); /* movss */
    MEM32(esp + 4) = edx;
    SET_LO8(edx, MEM8(esp + 0x4C));
    MEM32(esp + 8) = eax;
    MEM16(esp + 0x24) = LO16(ecx);
    ecx = 0; /* xor self */
    eax = 0x1E;
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edi = esp + 4;
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM16(esp + 0x2C) = 3;
    MEM16(esp + 0x2E) = 2;
    MEM16(esp + 0x30) = LO16(eax);
    MEM16(esp + 0x32) = LO16(eax);
    MEM16(esp + 0x34) = 0x9B;
    MEM16(esp + 0x36) = 0x64;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM16(esp + 0x40) = 0x10;
    MEM16(esp + 0x42) = 0xF;
    MEM32(esp + 0x44) = ecx;
    MEM8(esp + 0x38) = LO8(edx);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_001445E8: ;
    POP32(esp, edi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_001445F0
 * Original: 0x001445F0 - 0x00144690 (160 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001445F0(void)
{
    float xmm0;

loc_001445F0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(eax); /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144637: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x97;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edx = MEM32(esp + 0x24);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    edi = edi + 0x96;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144654: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00144664: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_00144688: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00144690
 * Original: 0x00144690 - 0x0014477D (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144690: ;
    esp = esp - 0x34;
    SET_LO8(eax, MEM8(esp + 0x40));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x18) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x38));
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x5976C4));
    MEM8(esp + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x5976C5));
    SET_LO8(eax, MEM8(eax + eax * 2 + 0x5976C6));
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64930C); /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(esp + 0x1C) = LO8(eax);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    MEM32(esp + 0x34) = 0x303;
    MEM32(esp + 0xC) = 0x38;
    MEM32(esp + 4) = 0x67B02;
    MEM16(esp + 8) = 0x12C;
    MEM8(esp + 0x1D) = LO8(ecx);
    MEM8(esp + 0x1F) = LO8(edx);
    MEM8(esp + 0x21) = LO8(ecx);
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x22) = LO8(eax);
    MEM8(esp + 0x23) = 6;
    MEM16(esp + 0x2A) = 1;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x28) = LO8(ecx);
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(edi, eax)) { sub_0014477D(); return; } /* je: equal / zero */

loc_00144736: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014473E: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014474A: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144754: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_0014FA50(); /* call 0x0014FA50 */

loc_00144774: ;
    esp = esp + 0x30;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001447B0
 * Original: 0x001447B0 - 0x0014492C (380 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447B0(void)
{
    float xmm0, xmm1;

loc_001447B0: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001447C3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi);
    xmm1 = MEMF(0x64908C); /* movss */
    ecx = 2;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x88) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x12C));
    eax = 0; /* xor self */
    MEM16(esp + 0xE) = LO16(ecx);
    ecx = MEM32(esi + 4);
    ebx = 0xFF;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x134));
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x128); /* movss */
    MEM32(esp + 0x54) = 0x303;
    MEM32(esp + 0x60) = 0x38;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = 4;
    MEM32(esp + 0x84) = eax;
    MEM8(esp + 0x5C) = 1;
    MEM32(esp + 0x8C) = eax;
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEM32(esp + 0x3C) = 0x46600001;
    MEM8(esp + 0x50) = LO8(ebx);
    MEM8(esp + 0x51) = LO8(ebx);
    MEM8(esp + 0x52) = LO8(ebx);
    MEM8(esp + 0x53) = LO8(ecx);
    MEM8(esp + 0xC) = LO8(eax);
    MEM32(esp + 0x40) = eax;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(esp + 0x48) = eax;
    MEM16(esp + 0x4C) = 1;
    MEM16(esp + 0x4E) = LO16(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001448CC: ;
    esi = eax;
    esi = esi & ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001448D5: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001448DF: ;
    edx = MEM32(esp + 0x138);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    eax = MEM32(esp + 0x144);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x13C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM8(esp + 0x2C) = LO8(ebx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xB);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00150820(); /* call 0x00150820 */

loc_00144920: ;
    esp = esp + 0x38;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_00144930
 * Original: 0x00144930 - 0x00144A96 (358 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144930(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144930: ;
    esp = esp - 0x7C;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x90));
    ecx = MEM32(esi * 4 + 0x597570);
    MEM32(esp + 0x38) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x8C));
    MEM16(esp + 0xC) = LO16(edx);
    edx = MEM32(eax);
    MEM8(esp + 0x1B) = LO8(ecx);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(0x595D14);
    SET_LO8(ebx, 0xFF);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(0x595D18);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(0x595D1C);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x34) = 0x303;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = edx;
    MEM16(esp + 0x3C) = 4;
    MEM16(esp + 0x3E) = 0x3F;
    MEM16(esp + 0x40) = 1;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001449F5: ;
    ebp = eax;
    ebp = ebp & 1;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00144A01: ;
    eax = eax & 1;
    ebp = ebp | eax;
    SET_LO8(eax, MEM8(esi + 0x5975B4));
    ebp = ebp << 6;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    ecx = 2;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x800000;
    ebp = ebp | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x84) = LO8(eax);
    MEM8(esp + 0x85) = LO8(eax);
    MEM8(esp + 0x86) = LO8(eax);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 1);
    ebp = ebp | 0x1C201;
    PUSH32(esp, edx);
    MEM32(esp + 0x8C) = ebp;
    MEM8(esp + 0x97) = LO8(eax);
    MEM32(esp + 0x90) = eax;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00144A8C: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00144AA0
 * Original: 0x00144AA0 - 0x00144C70 (464 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144AA0(void)
{
    float xmm0;

loc_00144AA0: ;
    esp = esp - 0x4C;
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x58));
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64A864); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A860); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = 0xA;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64912C); /* movss */
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    eax = 0x64;
    PUSH32(esp, edi);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edi = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM16(esp + 0x3C) = 3;
    MEM16(esp + 0x3E) = 1;
    MEM16(esp + 0x40) = 0x3C;
    MEM16(esp + 0x42) = 0x28;
    MEM16(esp + 0x44) = LO16(eax);
    MEM16(esp + 0x46) = LO16(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM16(esp + 0x50) = 0x10;
    MEM16(esp + 0x52) = 0xF;
    MEM32(esp + 0x54) = 0;
    MEM8(esp + 0x48) = LO8(ebx);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_00144B7F: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A85C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A858); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A854); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A170); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x64);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x5C);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    MEM16(esp + 0x24) = 0xC;
    MEM16(esp + 0x26) = 6;
    MEM16(esp + 0x10) = 0;
    MEM16(esp + 0x12) = 0xFF;
    MEM16(esp + 0x14) = 0xFFC0;
    MEM16(esp + 0x16) = 0x24;
    MEM16(esp + 0x30) = 0x23;
    MEM16(esp + 0x32) = 0xF;
    MEM8(esp + 0x3C) = 0x9B;
    MEM8(esp + 0x3D) = 0x64;
    MEM8(esp + 0x48) = 1;
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x50) = 1;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_000F3000(); /* call 0x000F3000 */

loc_00144C66: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00144C70
 * Original: 0x00144C70 - 0x00144E37 (455 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144C70(void)
{
    float xmm0;

loc_00144C70: ;
    esp = esp - 0x4C;
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x58));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A850); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A84C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = 0x64;
    PUSH32(esp, edi);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edi = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM16(esp + 0x38) = 8;
    MEM16(esp + 0x3A) = 6;
    MEM16(esp + 0x3C) = 3;
    MEM16(esp + 0x3E) = 0;
    MEM16(esp + 0x40) = 0x3C;
    MEM16(esp + 0x42) = 0x28;
    MEM16(esp + 0x44) = LO16(eax);
    MEM16(esp + 0x46) = LO16(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM16(esp + 0x50) = 0x10;
    MEM16(esp + 0x52) = 0xF;
    MEM32(esp + 0x54) = 0;
    MEM8(esp + 0x48) = LO8(ebx);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_00144D4E: ;
    xmm0 = MEMF(0x648F98); /* movss */
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A848); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A844); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2FC); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, 1);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x5C);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    PUSH32(esp, ecx);
    MEM8(esp + 0x48) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM16(esp + 0x28) = 0xC;
    MEM16(esp + 0x2A) = 6;
    MEM16(esp + 0x14) = 0;
    MEM16(esp + 0x16) = 0xFF;
    MEM16(esp + 0x18) = 0xFFC0;
    MEM16(esp + 0x1A) = 0x1A;
    MEM16(esp + 0x34) = 0x23;
    MEM16(esp + 0x36) = 0xF;
    MEM8(esp + 0x40) = 0x9B;
    MEM8(esp + 0x41) = 0x64;
    MEM8(esp + 0x4D) = LO8(ebx);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, eax);
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_000F3000(); /* call 0x000F3000 */

loc_00144E2D: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00144E40
 * Original: 0x00144E40 - 0x00144E64 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144E40: ;
    ecx = MEM32(0x7FA1F8);
    (void)0; /* cmp ecx, 0x41 - flags set for next jcc */
    SET_LO8(eax, 5);
    if (CMP_A(ecx, 0x41)) goto loc_00144E63; /* ja: above (unsigned >) */

loc_00144E4D: ;
    ecx = ZX8(MEM8(ecx + 0x144E74));
    { uint32_t _jt = MEM32(ecx * 4 + 0x144E64); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00144E5Bu) goto loc_00144E5B;
    if (_jt == 0x00144E5Eu) goto loc_00144E5E;
    if (_jt == 0x00144E61u) goto loc_00144E61;
    if (_jt == 0x00144E63u) goto loc_00144E63;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00144E5B: ;
    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

loc_00144E5E: ;
    SET_LO8(eax, 6);
    esp += 4; return; /* ret */

loc_00144E61: ;
    SET_LO8(eax, 0); /* xor self */

loc_00144E63: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00144EC0
 * Original: 0x00144EC0 - 0x00144EE8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144EC0(void)
{

loc_00144EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x12B);
    eax = edi;
    PUSH32(esp, 0); sub_00136790(); /* call 0x00136790 */

loc_00144ECD: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    esi = 0x5F3ED4;
    edx = edi;
    PUSH32(esp, 0); sub_001DE9C0(); /* call 0x001DE9C0 */

loc_00144EE3: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144EF0
 * Original: 0x00144EF0 - 0x00145060 (368 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00144EF0: ;
    esp = esp - 0x50;
    ecx = MEM32(0x595D14);
    edx = MEM32(0x595D18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM8(esp + 0x29) = LO8(eax);
    MEM8(esp + 0x2C) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ebx = 0xFF;
    PUSH32(esp, 0);
    MEM8(esp + 0x4C) = LO8(eax);
    eax = MEM32(0x595D1C);
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x3F800000);
    edi = 0x1F;
    PUSH32(esp, 0x5F4354);
    eax = esp + 0x38;
    MEM8(esp + 0x50) = 0;
    MEM8(esp + 0x38) = 0x27;
    MEM8(esp + 0x3A) = 3;
    MEM8(esp + 0x3B) = 1;
    MEM16(esp + 0x3E) = 0xC8;
    MEM32(esp + 0x40) = 0xA5;
    MEM32(esp + 0x44) = 0x17;
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x48) = LO8(ebx);
    MEM8(esp + 0x4B) = LO8(ebx);
    MEM8(esp + 0x4E) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4F) = LO8(ebx);
    MEM32(esp + 0x54) = esi;
    MEM8(esp + 0x59) = 1;
    MEM32(esp + 0x60) = edx;
    MEM16(esp + 0x6C) = 8;
    MEM16(esp + 0x6E) = LO16(edi);
    PUSH32(esp, 0); sub_000A65B0(); /* call 0x000A65B0 */

loc_00144FAE: ;
    eax = MEM32(0x5F4350);
    edx = MEM32(0x5F434C);
    SET_LO8(ecx, MEM8(esi + 0x10B));
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    MEM8(esp + 0x30) = LO8(ecx);
    MEM16(esp + 0x38) = 8;
    MEM16(esp + 0x3A) = LO16(edi);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00144FE0: ;
    PUSH32(esp, 0x83);
    edi = eax;
    PUSH32(esp, 0); sub_0035CFC0(); /* call 0x0035CFC0 */

loc_00144FEC: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00145020; /* je: equal / zero */

loc_00144FF3: ;
    eax = MEM32(eax + 0x64);
    eax++;
    if (CMP_NE(eax, ebx)) goto loc_00145000; /* jne: not equal / not zero */

loc_00144FFB: ;
    edi = edi + 0x64;
    goto loc_00145022;

loc_00145000: ;
    if (TEST_Z(eax, eax)) goto loc_00145020; /* je: equal / zero */

loc_00145004: ;
    if (CMP_GE(eax, 3)) goto loc_00145022; /* jge: greater or equal (signed >=) */

loc_00145009: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edi = eax;
    goto loc_00145022;

loc_00145020: ;
    edi = 0; /* xor self */

loc_00145022: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x63);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_001823F0(); /* call 0x001823F0 */

loc_0014503D: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0014505A; /* je: equal / zero */

loc_00145044: ;
    edx = MEM32(eax + 0x60);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(edx) = esi;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = ecx;

loc_0014505A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_001451E0
 * Original: 0x001451E0 - 0x00145290 (176 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001451E0(void)
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

loc_001451E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x60);
    eax = MEM32(esi);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) { sub_00145290(); return; } /* je: equal / zero */

loc_001451F5: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 4))) { sub_00145290(); return; } /* jne: not equal / not zero */

loc_00145204: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ecx + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x30))) goto loc_00145235; /* jbe: below or equal (unsigned <=) */

loc_00145212: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ecx + 0x30); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00145243; /* jbe: below or equal (unsigned <=) */

loc_0014522D: ;
    MEMF(esp + 8) = xmm1; /* movss */
    goto loc_00145243;

loc_00145235: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_00145243: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM16(0x776160) = 0x109;
    MEM32(0x84979C) = eax;
    MEM8(0x776171) = 0x32;
    MEM8(0x776170) = 0x7D;
    MEM8(0x77616F) = 0x1C;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014526F: ;
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F4340);
    MEM8(0x776162) = 0x81;
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_00145289: ;
    esp = esp + 8;
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
 * sub_001452A0
 * Original: 0x001452A0 - 0x001452BE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452A0(void)
{

loc_001452A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x60);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_001452B9: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001452C0
 * Original: 0x001452C0 - 0x0014533F (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001452C0: ;
    ecx = MEM32(0x875640);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x7FA244);
    if (TEST_Z(ecx, ecx)) goto loc_001452D6; /* je: equal / zero */

loc_001452CF: ;
    ecx = ecx + 0xA;
    if (CMP_GE(ecx, eax)) goto loc_0014533E; /* jge: greater or equal (signed >=) */

loc_001452D6: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    esi = esi << 4;
    esi = esi + 0x597734;
    PUSH32(esp, esi);
    MEM32(0x875640) = eax;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xE7;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00145313: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x22;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0014533D: ;
    POP32(esp, esi);

loc_0014533E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145340
 * Original: 0x00145340 - 0x00145694 (852 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145340: ;
    edx = MEM32(0x7FA200);
    esp = esp - 0x98;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8470DC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB0);
    PUSH32(esp, 1);
    edx = edx + esi;
    ecx = 7;
    PUSH32(esp, 0); sub_00047FA0(); /* call 0x00047FA0 */

loc_00145371: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00145376: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00145382; /* jns: not sign (positive) */

loc_0014537D: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00145382: ;
    esi = ZX8(MEM8(esp + 0xB0));
    xmm0 = MEMF(0x58BD44); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0DC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0D8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0D4); /* movss */
    eax = eax + 3;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0D0); /* movss */
    MEM16(esp + 0x1C) = LO16(eax);
    MEM32(esp + 0x80) = esi;
    esi = esi << 4;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = esi + 0x597734;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0CC); /* movss */
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x597740)));
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649E9C); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0C8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x1C;
    ecx = ecx - 0x20;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0x1B;
    MEM32(esp + 0x34) = eax;
    MEM16(esp + 0x38) = 0x12C;
    MEM16(esp + 0x40) = LO16(ecx);
    MEM16(esp + 0x42) = 0x41;
    MEM16(esp + 0x44) = 0xFFD8;
    MEM16(esp + 0x46) = 0x50;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEM8(esp + 0x84) = 0;
    MEM8(esp + 0x7C) = 1;
    MEM8(esp + 0x7D) = 1;
    MEM8(esp + 0x7E) = 0;
    MEM16(esp + 0x80) = 0x32;
    MEM16(esp + 0x82) = 0x19;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_001454D3: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001454DB: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_001454E7; /* jns: not sign (positive) */

loc_001454E2: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001454E7: ;
    eax++;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ebx = 0xFF;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0014557B; /* je: equal / zero */

loc_001454F6: ;
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x78) = eax;
    /* nop */

loc_00145500: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00145505: ;
    xmm0 = xmm0 * MEMF(0x64A610); /* mulss */
    xmm0 = xmm0 + MEMF(0x649698); /* addss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C1D89D9);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014552F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x94);
    ecx = MEM32(esi + 0x59773C);
    edx = edx + 4;
    PUSH32(esp, edx);
    SET_LO16(edx, ZX8(MEM8(esi + 0x597740)));
    edx = edx + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x597738);
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00112DC0(); /* call 0x00112DC0 */

loc_0014556A: ;
    eax = MEM32(esp + 0xA4);
    esp = esp + 0x2C;
    eax--;
    MEM32(esp + 0x78) = eax;
    if ((eax != 0)) goto loc_00145500; /* jne: not equal / not zero */

loc_0014557B: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    SET_LO16(edx, ZX8(MEM8(esi + 0x597740)));
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649784); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A024); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0C4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0C0); /* movss */
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, 0x7F);
    edx = edx - 0x40;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0BC); /* movss */
    PUSH32(esp, edi);
    edi = esp + 0x18;
    MEM16(esp + 0x18) = 0x1E;
    MEM16(esp + 0x1A) = 0xF;
    MEM32(esp + 0x24) = ecx;
    MEM16(esp + 0x28) = LO16(edx);
    MEM16(esp + 0x2C) = 0x80;
    MEM16(esp + 0x2A) = 0xFFD3;
    MEM16(esp + 0x2E) = 0x5A;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = LO8(ebx);
    MEM8(esp + 0x42) = LO8(ebx);
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM8(esp + 0x46) = LO8(ebx);
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x48) = 9;
    MEM16(esp + 0x4A) = 0x10;
    MEM16(esp + 0x4C) = 0x16;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x59) = LO8(eax);
    MEM16(esp + 0x5A) = 0xA;
    MEM16(esp + 0x5C) = 0x19;
    MEM8(esp + 0x5E) = 0;
    PUSH32(esp, 0); sub_000F57B0(); /* call 0x000F57B0 */

loc_00145672: ;
    SET_LO8(eax, MEM8(esi + 0x597740));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(eax));
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    edx = edx & 0x3F;
    if (TEST_Z(LO8(eax), 0x40)) { sub_00145694(); return; } /* je: equal / zero */

loc_0014568B: ;
    edi = 0x40;
    edi = edi - edx;
    g_seh_ebp = ebp; sub_00145696(); return; /* tail jmp 0x00145696 */

}

/**
 * sub_001458D0
 * Original: 0x001458D0 - 0x001458F6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001458D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001458D0: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    esp = esp - 0xD4;
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001458F6(); return; } /* je: equal / zero */

loc_001458EA: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_001458FB(); return; /* tail jmp 0x001458FB */

}

/**
 * sub_00145CA0
 * Original: 0x00145CA0 - 0x00145CC9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145CA0: ;
    ecx = MEM32(esp + 0x24);
    esp = esp - 0xFC;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    PUSH32(esp, ebp);
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, esi);
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00145CC9(); return; } /* je: equal / zero */

loc_00145CBD: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_00145CCE(); return; /* tail jmp 0x00145CCE */

}

/**
 * sub_00146350
 * Original: 0x00146350 - 0x00146434 (228 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146350(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00146350: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x290) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x290))) goto loc_001463B5; /* jbe: below or equal (unsigned <=) */

loc_00146372: ;
    ecx = MEM32(eax + 0x94);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(eax + 0x98);
    ecx = ecx & 0xFFFFFF90u;
    MEM32(eax + 0x94) = ecx;
    ecx = 0x20;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    if (CMP_LE(edx, ecx)) goto loc_0014642E; /* jle: less or equal (signed <=) */

loc_001463A9: ;
    MEM32(eax + 0x98) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

loc_001463B5: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x84); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8C); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */

loc_0014642E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00146440
 * Original: 0x00146440 - 0x00146685 (581 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146440(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146440: ;
    esp = esp - 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x78);
    esi = MEM32(edi + 0x144);
    ebp = MEM32(edi + 0x140);
    MEM32(esp + 0x70) = 0x303;
    MEM32(esp + 0x14) = 0xF;
    MEM32(esp + 0x18) = 0x10;
    MEM32(esp + 0x1C) = 0x11;
    MEM8(esi + 0x2C) = 4;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014647F: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014649D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esi + 0x21));
    SET_LO8(ecx, MEM8(esi + 0x1D));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x58) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    MEM8(esp + 0x59) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x40) = 0x11;
    MEM16(esp + 0x44) = 0x96;
    MEM8(esp + 0x5A) = LO8(ecx);
    MEM8(esp + 0x5B) = LO8(ecx);
    MEM8(esp + 0x5C) = LO8(ecx);
    MEM8(esp + 0x5D) = 0xFF;
    edx = MEM32(esp + edx * 4 + 0x14);
    MEM32(esp + 0x48) = edx;
    edx = eax + eax * 4;
    eax = ebp + edx * 4;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00146507: ;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0x80) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00146515: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x80));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00146528: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_0014FA50(); /* call 0x0014FA50 */

loc_00146557: ;
    SET_LO8(edx, MEM8(esi + 0x1C));
    SET_LO8(eax, MEM8(esi + 0x1D));
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0x60) = 1;
    MEM16(esp + 0x5E) = 1;
    MEM8(esp + 0x8C) = LO8(edx);
    MEM8(esp + 0x8D) = LO8(eax);
    MEM32(esp + 0x88) = 8;
    SET_LO8(ecx, MEM8(esi + 0x21));
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x8E) = LO8(eax);
    MEM8(esp + 0x8F) = LO8(eax);
    MEM8(esp + 0x90) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    edx = eax + eax * 4;
    xmm0 = MEMF(ebp + edx * 4); /* movss */
    SET_LO8(eax, MEM8(edi + 0x41));
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    ebp = ebp + edx * 4;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEM8(esp + 0x91) = LO8(ecx);
    MEM8(esp + 0x65) = LO8(eax);
    MEM16(esp + 0x5C) = 0x3C;
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00146621: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    edx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_00146676: ;
    esp = esp + 0x60;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00146690
 * Original: 0x00146690 - 0x00146738 (168 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146690(void)
{

loc_00146690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001466A1: ;
    PUSH32(esp, 0x18);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001466B9: ;
    PUSH32(esp, 0x18);
    ecx = esp + 0x27;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x33) = 2;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001466D1: ;
    PUSH32(esp, 0x18);
    edx = esp + 0x37;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x43) = 4;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001466E9: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x18);
    eax = esp + 7;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00146704: ;
    PUSH32(esp, 0x18);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x23) = 3;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0014671C: ;
    PUSH32(esp, 0x18);
    edx = esp + 0x27;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x33) = 5;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00146734: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00146740
 * Original: 0x00146740 - 0x00146785 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146740: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x221);
    ebx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025610(); /* call 0x00025610 */

loc_0014675C: ;
    eax = esi + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00146767: ;
    ebx = esi;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0014676E: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00146785(); return; } /* jne: not equal / not zero */

loc_00146777: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00146790
 * Original: 0x00146790 - 0x001467CA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146790(void)
{

loc_00146790: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x221);
    ebx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025610(); /* call 0x00025610 */

loc_001467AC: ;
    eax = esi + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001467B7: ;
    ebx = esi;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_001467BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001467C4: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001467D0
 * Original: 0x001467D0 - 0x001468B9 (233 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001467D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001467D0: ;
    esp = esp - 0x8C;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x98);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0xAC));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x11;
    edi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 7);
    ecx = ebp;
    edx = MEM32(ecx);
    MEM8(esp + 0x39) = LO8(eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 7);
    edx = esp + 0x28;
    PUSH32(esp, 0x24);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    eax = 0x6C;
    MEM16(esp + 0x3E) = 2;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x40) = 9;
    MEM8(esp + 0x90) = 0x7F;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_0014686B: ;
    ebx = eax;
    esp = esp + 0x20;
    if (TEST_Z(ebx, ebx)) goto loc_001468AC; /* je: equal / zero */

loc_00146874: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x221;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0014689B: ;
    edi = MEM32(ebx + 0x144);
    ecx = 0x1B;
    esi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001468AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_001468C0
 * Original: 0x001468C0 - 0x00146A31 (369 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001468C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001468C0: ;
    esp = esp - 0x8C;
    xmm1 = MEMF(0x648D3C); /* movss */
    SET_LO8(ecx, MEM8(0x75DE45));
    SET_LO8(edx, MEM8(0x75DE44));
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x64942C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649004); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x6496F0); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x649248); /* movss */
    PUSH32(esp, ebx);
    MEM8(esp + 0x39) = LO8(edx);
    edx = MEM32(eax);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEM8(esp + 0x38) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x75DE43));
    PUSH32(esp, 7);
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEM32(esp + 0x84) = edx;
    edx = MEM32(eax + 8);
    MEM8(esp + 0x3E) = LO8(ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 7);
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x649414); /* movss */
    eax = esp + 0x88;
    PUSH32(esp, 0x24);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x649B54); /* movss */
    MEM32(esp + 0x94) = edx;
    SET_LO8(edx, MEM8(esp + 0xB0));
    PUSH32(esp, eax);
    eax = 0x6C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEM8(esp + 0x40) = 1;
    MEM8(esp + 0x65) = LO8(ebx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0x64) = 0x50;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM8(esp + 0xA5) = 0x28;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0xA0) = 9;
    MEM16(esp + 0x9E) = LO16(ebx);
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00146A0D: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00146A2A; /* je: equal / zero */

loc_00146A15: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 0x1B;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00146A2A: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00146A40
 * Original: 0x00146A40 - 0x00146BA6 (358 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146A40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00146A40: ;
    esp = esp - 0x8C;
    xmm1 = MEMF(0x648D3C); /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA8); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649004); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x6496F0); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x649248); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648E40); /* movss */
    PUSH32(esp, 7);
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, 7);
    MEM32(esp + 0x88) = ecx;
    ecx = esp + 0x88;
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x649B54); /* movss */
    MEM32(esp + 0x8C) = edx;
    SET_LO8(edx, MEM8(esp + 0xAC));
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    eax = 0x6C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEM8(esp + 0x40) = 1;
    MEM8(esp + 0x48) = 0xC8;
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4A) = 0xFF;
    MEM8(esp + 0x65) = LO8(ebx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0x64) = 0x7F;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM8(esp + 0xA5) = 0x28;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0xA0) = 9;
    MEM16(esp + 0x9E) = LO16(ebx);
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00146B82: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00146B9F; /* je: equal / zero */

loc_00146B8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 0x1B;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00146B9F: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00146BB0
 * Original: 0x00146BB0 - 0x00146C10 (96 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146BB0: ;
    SET_LO8(ecx, MEM8(0x76F0DC));
    esp = esp - 0x8C;
    if (CMP_NE(LO8(ecx), 0xA)) { sub_00146C10(); return; } /* jne: not equal / not zero */

loc_00146BC1: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649B50); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649128); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    g_seh_ebp = ebp; sub_00146C55(); return; /* tail jmp 0x00146C55 */

}

/**
 * sub_00146D70
 * Original: 0x00146D70 - 0x00146ECA (346 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146D70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00146D70: ;
    esp = esp - 0x8C;
    xmm2 = MEMF(0x648D74); /* movss */
    ecx = MEM32(eax);
    xmm1 = MEMF(0x649578); /* movss */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(0x648D18); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(0x6496F0); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(0x648F38); /* movss */
    PUSH32(esp, 7);
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, 7);
    MEM32(esp + 0x88) = ecx;
    ecx = esp + 0x88;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(0x648E40); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648F5C); /* movss */
    MEM32(esp + 0x8C) = edx;
    SET_LO8(edx, MEM8(esp + 0xAC));
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    eax = 0x6C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x40) = 1;
    MEM8(esp + 0x48) = 0x8E;
    MEM8(esp + 0x49) = 0x5B;
    MEM8(esp + 0x4A) = 0x39;
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEM8(esp + 0x65) = LO8(ebx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0x64) = 0x7F;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM8(esp + 0xA5) = 0x28;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0xA0) = 9;
    MEM16(esp + 0x9E) = LO16(ebx);
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00146EA6: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00146EC3; /* je: equal / zero */

loc_00146EAE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 0x1B;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00146EC3: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00146ED0
 * Original: 0x00146ED0 - 0x00147084 (436 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146ED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00146ED0: ;
    esp = esp - 0x8C;
    xmm1 = MEMF(0x649418); /* movss */
    edx = MEM32(esp + 0x90);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D74); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648F38); /* movss */
    PUSH32(esp, esi);
    (void)0; /* cmp MEM32(edx + 0x68), 0xB5 - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEM8(esp + 0x20) = 1;
    MEM8(esp + 0x28) = 0xC8;
    MEM8(esp + 0x29) = 0x8A;
    MEM8(esp + 0x2A) = 0x58;
    if (CMP_EQ(MEM32(edx + 0x68), 0xB5)) goto loc_00146F8A; /* je: equal / zero */

loc_00146F82: ;
    xmm1 = MEMF(0x648EA8); /* movss */

loc_00146F8A: ;
    esi = MEM32(esp + 0x98);
    MEM32(esp + 0x54) = esi;
    esi = MEM32(ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0);
    edx = edx + 0x78;
    PUSH32(esp, 0);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(edx);
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, 7);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(edx + 8);
    PUSH32(esp, 7);
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    edx = esp + 0x88;
    PUSH32(esp, 0x24);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648F5C); /* movss */
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0xC0));
    eax = 0x6C;
    MEM8(esp + 0x65) = 0;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0x64) = 0x7F;
    MEM8(esp + 0x34) = 0;
    MEM32(esp + 0x7C) = esi;
    MEM8(esp + 0xA5) = 0x28;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0xA0) = 9;
    MEM16(esp + 0x9E) = 0;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00147062: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0014707C; /* je: equal / zero */

loc_00147069: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 0x1B;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0014707C: ;
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00147090
 * Original: 0x00147090 - 0x001470AD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00147090: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x144);
    (void)0; /* cmp MEM8(ecx + 0x4C), 2 - flags set for next jcc */
    eax = 1;
    if (CMP_GE(MEM8(ecx + 0x4C), 2)) { sub_001470AD(); return; } /* jge: greater or equal (signed >=) */

loc_001470A5: ;
    if (TEST_Z(MEM8(edx + 0x10), LO8(eax))) { sub_001470AD(); return; } /* je: equal / zero */

loc_001470AA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001470E0
 * Original: 0x001470E0 - 0x00147254 (372 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001470E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001470E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x144);
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x44); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00147248; /* jbe: below or equal (unsigned <=) */

loc_0014711D: ;
    eax = MEM32(esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_00147210; /* je: equal / zero */

loc_00147128: ;
    edx = MEM32(eax + 0x3C4);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x34);
    edi = eax + eax * 8;
    xmm1 = MEMF(ecx + edi * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edi * 4 + 0x10); /* movss */
    ecx = ecx + edi * 4;
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0xC);
    eax = eax << 6;
    eax = eax + edi;
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_0014715D: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    edi = esi + 0x54;
    PUSH32(esp, edi);
    ebx = ebx + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00147170: ;
    eax = esp + 0x20;
    ecx = esi + 0x60;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00043DE0(); /* call 0x00043DE0 */

loc_0014717F: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    esp = esp + 4;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001471A8: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_001471B8: ;
    ecx = MEM32(eax);
    edx = esi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(eax, 0x1D)) goto loc_001471FE; /* jne: not equal / not zero */

loc_001471D7: ;
    if (CMP_LE(MEM32(0x76F0F8), 0x546)) goto loc_001471FE; /* jle: less or equal (signed <=) */

loc_001471E3: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(0x649B48); /* movss */
    /* comiss xmm0, MEMF(eax + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x30))) goto loc_001471F9; /* jbe: below or equal (unsigned <=) */

loc_001471F4: ;
    xmm0 = MEMF(eax + 0x30); /* movss */

loc_001471F9: ;
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_001471FE: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ebx = MEM32(ebp + 8);
    /* nop */

loc_00147210: ;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x20); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x48) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00147235; /* jbe: below or equal (unsigned <=) */

loc_00147224: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00147260(); /* call 0x00147260 */

loc_0014722A: ;
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 4;

loc_00147235: ;
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00147210; /* ja: above (unsigned >) */

loc_00147248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00147260
 * Original: 0x00147260 - 0x0014729D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147260: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x144);
    PUSH32(esp, edi);
    ebp = ebp + 0x2C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00147279: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00147280: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) { sub_0014729D(); return; } /* je: equal / zero */

loc_00147291: ;
    ecx = ecx & 0x3F;
    edi = 0x40;
    edi = edi - ecx;
    g_seh_ebp = ebp; sub_001472A2(); return; /* tail jmp 0x001472A2 */

}

/**
 * sub_00147710
 * Original: 0x00147710 - 0x0014772E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00147710: ;
    if (CMP_NE(MEM32(esp + 0xC), 5)) goto loc_0014772D; /* jne: not equal / not zero */

loc_00147717: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xFD;
    MEM8(eax + 0x50) = 0;
    MEM8(ecx + 0x10) = MEM8(ecx + 0x10) | 1;

loc_0014772D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00147730
 * Original: 0x00147730 - 0x00147771 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147730(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00147730: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x649908); /* movss */
    esp = esp - 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014774C; /* jne: not equal / not zero */

loc_00147744: ;
    xmm0 = MEMF(0x649904); /* movss */

loc_0014774C: ;
    MEMF(esp) = xmm0; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_00147769: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00147780
 * Original: 0x00147780 - 0x00147952 (466 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147780(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00147780: ;
    esp = esp - 0x90;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0014794A; /* je: equal / zero */

loc_00147797: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xA)) goto loc_001477B7; /* jne: not equal / not zero */

loc_001477A0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x37);
    PUSH32(esp, ecx);
    eax = 0x112;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_001477B7: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    SET_LO8(edx, MEM8(esi + 0x10B));
    MEMF(esp + 8) = xmm0; /* movss */
    eax = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649908); /* movss */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x3C) = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x2C) = LO8(edx);
    edx = MEM32(esp + 0x10);
    MEM8(esp + 0x79) = 0;
    MEM8(esp + 0x78) = 1;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00147838; /* jne: not equal / not zero */

loc_00147830: ;
    xmm0 = MEMF(0x649904); /* movss */

loc_00147838: ;
    MEMF(esp + 4) = xmm0; /* movss */
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    edi = esp + 0x8C;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_0014785F: ;
    xmm0 = MEMF(0x6499DC); /* movss */
    esp = esp + 0xC;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00147875: ;
    ecx = eax;
    ecx = ecx & 0x80000001u;
    if (((int32_t)ecx >= 0)) goto loc_00147884; /* jns: not sign (positive) */

loc_0014787F: ;
    ecx--;
    ecx = ecx | 0xFFFFFFFEu;
    ecx++;

loc_00147884: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    ecx = ecx + 0x1B6;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(esp + 0x64) = ecx;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_0014789E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(esi + 0x568);
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm1 = MEMF(0x6498E0); /* movss */
    MEM32(esp + 0x5C) = eax;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001478E9; /* je: equal / zero */

loc_001478DB: ;
    if (CMP_NE(MEM32(esi + 0xBC), 1)) goto loc_001478E9; /* jne: not equal / not zero */

loc_001478E4: ;
    MEM8(esp + 0x7C) = MEM8(esp + 0x7C) & 0xFE;

loc_001478E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    ecx = esp + 0x24;
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    eax = 0x54;
    MEM8(esp + 0x41) = 0x32;
    MEM16(esp + 0x38) = 0x12C;
    MEM16(esp + 0x3A) = 0x36;
    MEM32(esp + 0x3C) = 2;
    MEM8(esp + 0x40) = 5;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00147931: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00147949; /* je: equal / zero */

loc_00147938: ;
    edi = MEM32(eax + 0x144);
    ecx = 0x15;
    esi = esp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00147949: ;
    POP32(esp, edi);

loc_0014794A: ;
    POP32(esp, esi);
    esp = esp + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_00147960
 * Original: 0x00147960 - 0x00147A53 (243 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147960: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    edx = MEM32(esi + 0x144);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    MEM32(esp + 0x1C) = edx;
    if (CMP_EQ(ecx, eax)) goto loc_00147A2D; /* je: equal / zero */

loc_0014798A: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x649150); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x64914C); /* mulss */
    PUSH32(esp, ebp);
    /* nop */

loc_001479B0: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_001479B8; /* jns: not sign (positive) */

loc_001479B3: ;
    ecx = ZX8(MEM8(esi + 0x41));
    ecx--;

loc_001479B8: ;
    edx = ecx + ecx * 8;
    eax = edi + edx * 4;
    xmm3 = MEMF(eax + 0x10); /* movss */
    edx = eax + 0xC;
    xmm3 = xmm3 - xmm2; /* subss */
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEMF(edx + 4) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x10); /* mulss */
    xmm3 = xmm3 + MEMF(eax); /* addss */
    MEMF(eax) = xmm3; /* movss */
    MEM32(esp + 0x14) = ebp;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 + MEMF(eax + 4); /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 4) = xmm3; /* movss */
    MEM32(esp + 0x18) = ebx;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_001479B0; /* jne: not equal / not zero */

loc_00147A28: ;
    edx = MEM32(esp + 0x20);
    POP32(esp, ebp);

loc_00147A2D: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) { sub_00147A53(); return; } /* jle: less or equal (signed <=) */

loc_00147A34: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ecx = eax + eax * 8;
    eax = edi + ecx * 4;
    ecx = MEM32(eax);
    esi = esi + 0x74;
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_00147A65(); return; /* tail jmp 0x00147A65 */

}

/**
 * sub_00147AB0
 * Original: 0x00147AB0 - 0x00147EBA (1034 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147AB0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    eax = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    ebp = MEM32(edi);
    ecx = MEM32(ebp + 0x568);
    MEM32(esp + 0x54) = eax;
    (void)0; /* cmp MEM32(ecx + 0xA0), 3 - flags set for next jcc */
    ebx = 1;
    if (CMP_NE(MEM32(ecx + 0xA0), 3)) goto loc_00147AEA; /* jne: not equal / not zero */

loc_00147AE1: ;
    if (CMP_AE(MEM16(ebp + 0x3AE), LO16(ebx))) goto loc_00147B07; /* jae: above or equal (unsigned >=) */

loc_00147AEA: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x3A));
    MEM8(esi + 0x50) = 0;
    MEM16(esi + 0x38) = 0x28;
    edx = edx & 0xFFFD;
    edx = edx | 9;
    MEM16(esi + 0x3A) = LO16(edx);

loc_00147B07: ;
    eax = MEM32(ebp + 0x64);
    if (TEST_Z(eax, eax)) { sub_00147EBA(); return; } /* je: equal / zero */

loc_00147B12: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 4))) { sub_00147EBA(); return; } /* jne: not equal / not zero */

loc_00147B21: ;
    xmm6 = MEMF(ebp + 0x7C); /* movss */
    xmm5 = MEMF(ebp + 0x78); /* movss */
    xmm6 = xmm6 + MEMF(0x64908C); /* addss */
    xmm7 = MEMF(ebp + 0x80); /* movss */
    PUSH32(esp, ebp);
    ecx = esp + 0x48;
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    PUSH32(esp, 0); sub_00147730(); /* call 0x00147730 */

loc_00147B57: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    xmm2 = MEMF(0x7FA24C); /* movss */
    ecx = esi + 0x2C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(edi + 0x50));
    esp = esp + 4;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00147BEC; /* je: equal / zero */

loc_00147B80: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_00147B94; /* jl: less (signed <) */

loc_00147B8F: ;
    eax = 0x14;

loc_00147B94: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    ecx = MEM32(eax + 0x763288);
    if (TEST_Z(ecx, ecx)) goto loc_00147BC1; /* je: equal / zero */

loc_00147BA4: ;
    xmm1 = MEMF(0x6499E4); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x6499E0); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x40); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_00147BE0;

loc_00147BC1: ;
    xmm0 = MEMF(edi + 0x40); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x6499E0); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x6499DC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_00147BE0: ;
    MEMF(edi + 0x40) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00147BEC; /* jbe: below or equal (unsigned <=) */

loc_00147BE7: ;
    MEMF(edi + 0x40) = xmm1; /* movss */

loc_00147BEC: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x6499D8); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x38); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x38) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00147EAD; /* jbe: below or equal (unsigned <=) */

loc_00147C12: ;
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(esp + 0x4C); /* movss */
    xmm5 = xmm5 - MEMF(edi + 0x14); /* subss */
    xmm7 = xmm7 - MEMF(edi + 0x1C); /* subss */
    xmm3 = xmm3 - MEMF(edi + 0x24); /* subss */
    xmm4 = xmm4 - MEMF(edi + 0x28); /* subss */
    xmm6 = xmm6 - MEMF(edi + 0x18); /* subss */
    ebp = edi + 0x14;
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(edi + 0x2C); /* movss */
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = xmm0 + xmm2; /* addss */
    eax = edi + 0x20;
    MEM32(esp + 0x1C) = edx;
    ecx = eax;
    edx = MEM32(ecx);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm5 = MEMF(0x64914C); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x3C) = xmm6; /* movss */

loc_00147CE9: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm1 = 0.0f; /* xorps self = zero */
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x54);
    eax = eax + edx * 4;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    xmm6 = MEMF(edi + 0x40); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    xmm6 = MEMF(edi + 0x40); /* movss */
    ecx = eax + 0xC;
    xmm6 = xmm6 * xmm3; /* mulss */
    MEMF(eax + 0x10) = xmm6; /* movss */
    xmm6 = MEMF(edi + 0x40); /* movss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEM8(eax + 0x1C) = 0xFF;
    xmm6 = xmm6 * xmm4; /* mulss */
    MEMF(eax + 0x14) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 4); /* movss */
    edx = ecx;
    ebx = MEM32(edx);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x649150); /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    MEMF(ecx + 4) = xmm6; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    MEM32(esp + 0x30) = ebx;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEM32(esp + 0x34) = edx;
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    SET_LO8(ebx, MEM8(esi + 0x4E));
    eax = ZX8(MEM8(esi + 0x41));
    SET_LO8(ebx, LO8(ebx) + 1);
    SET_LO8(ecx, LO8(ebx));
    ecx = SX8(LO8(ecx));
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(esi + 0x4E) = LO8(ebx);
    if (CMP_NE(ecx, eax)) goto loc_00147DDC; /* jne: not equal / not zero */

loc_00147DD8: ;
    MEM8(esi + 0x4E) = 0;

loc_00147DDC: ;
    SET_LO8(ecx, MEM8(esi + 0x4C));
    SET_LO8(ebx, MEM8(esi + 0x4E));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x4C) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x4D));
    if (CMP_NE(LO8(ebx), LO8(ecx))) goto loc_00147E05; /* jne: not equal / not zero */

loc_00147DF0: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_00147E00; /* jne: not equal / not zero */

loc_00147DFC: ;
    MEM8(esi + 0x4D) = 0;

loc_00147E00: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x4C) = LO8(edx);

loc_00147E05: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x3C); /* addss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm7 = xmm7 + MEMF(esp + 0x38); /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x44); /* addss */
    xmm3 = xmm3 + MEMF(esp + 0x48); /* addss */
    xmm4 = xmm4 + MEMF(esp + 0x4C); /* addss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x38); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm7; /* movss */
    MEMF(edi + 0x38) = xmm1; /* movss */
    if ((xmm1 > xmm6)) goto loc_00147CE9; /* ja: above (unsigned >) */

loc_00147E6C: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp) = edx;
    MEMF(esp + 0x20) = xmm2; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(ebp + 4) = eax;
    MEMF(esp + 0x24) = xmm3; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edi + 0x20) = edx;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = ecx;
    MEMF(edi + 0x2C) = xmm0; /* movss */

loc_00147EAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00147ED0
 * Original: 0x00147ED0 - 0x001485EA (1818 bytes, 450 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147ED0(void)
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

loc_00147ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = MEM32(edi + 0x144);
    eax = MEM32(edx);
    esi = MEM32(edi + 0x140);
    MEM32(esp + 0x2C) = eax;
    (void)0; /* cmp MEM8(edi + 0x4C), 1 - flags set for next jcc */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x50) = esi;
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_00148472; /* jle: less or equal (signed <=) */

loc_00147F09: ;
    (void)0; /* test MEM8(edi + 0x3A), 2 - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    xmm4 = xmm6; /* movaps */
    if (TEST_Z(MEM8(edi + 0x3A), 2)) goto loc_00147F27; /* je: equal / zero */

loc_00147F16: ;
    eax = edi + 0x2C;
    edx = esp + 0x30;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x54) = edx;
    goto loc_00147F53;

loc_00147F27: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00147F35; /* jns: not sign (positive) */

loc_00147F2A: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;
    MEM32(esp + 0x1C) = eax;
    ecx = eax;

loc_00147F35: ;
    edx = ecx + ecx * 8;
    eax = esi + edx * 4;
    edx = esp + 0x30;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x54) = edx;
    goto loc_00147F53;

loc_00147F49: ;
    xmm4 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x18);

loc_00147F53: ;
    xmm5 = MEMF(0x648F88); /* movss */
    ecx--;
    xmm3 = xmm5; /* movaps */
    MEM32(esp + 0x1C) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_00147F6E; /* jns: not sign (positive) */

loc_00147F65: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x1C) = ecx;

loc_00147F6E: ;
    edx = ecx + ecx * 8;
    xmm0 = MEMF(esi + edx * 4); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ebx = esi + edx * 4;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
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
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(0x64A100); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(ebx + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_001480D4; /* jbe: below or equal (unsigned <=) */

loc_00147FF9: ;
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014809F; /* jnp: not parity */

loc_00148006: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = MEMF(ebx + 4); /* movss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    MEMF(ebx + 4) = xmm7; /* movss */
    xmm7 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x38); /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm4 = xmm4 * MEMF(ebx + 0x18); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    MEMF(ebx + 8) = xmm7; /* movss */
    MEMF(ebx + 0x18) = xmm4; /* movss */

loc_0014809F: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_EQ(ecx, eax)) goto loc_001480CE; /* je: equal / zero */

loc_001480A7: ;
    eax = ZX8(MEM8(edi + 0x41));
    goto loc_001480B0;

    /* nop */

loc_001480B0: ;
    SET_LO8(edx, MEM8(edi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(edi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_001480C3; /* jne: not equal / not zero */

loc_001480BF: ;
    MEM8(edi + 0x4D) = 0;

loc_001480C3: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ecx, edx)) goto loc_001480B0; /* jne: not equal / not zero */

loc_001480CE: ;
    MEMF(esp + 0x20) = xmm2; /* movss */

loc_001480D4: ;
    xmm0 = MEMF(ebx + 0x18); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014845E; /* jnp: not parity */

loc_001480E6: ;
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0014812C; /* jp: parity */

loc_001480EF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(ebx + 0x18); /* divss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */

loc_0014812C: ;
    eax = MEM32(ebx + 0x18);
    esi = MEM32(esp + 0x2C);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x4100000);
    ecx = 0x68;
    eax = 0x637EEC;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_0014814B: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x94;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_00148179: ;
    ecx = MEM32(esp + 0x178);
    eax = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00148453; /* je: equal / zero */

loc_001481A6: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00148EA0(); /* call 0x00148EA0 */

loc_001481B4: ;
    eax = MEM32(esp + 0x150);
    esp = esp + 0xC;
    if (CMP_L(eax, 2)) goto loc_001483EF; /* jl: less (signed <) */

loc_001481C7: ;
    esi = MEM32(esp + 0x60);
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0x3A - flags set for next jcc */
    MEM32(esi + 0x534) = 1;
    if (CMP_NE(eax, 0x3A)) goto loc_001481F3; /* jne: not equal / not zero */

loc_001481DD: ;
    MEM8(esi + 0x43D) = 0xA;
    MEM32(esi + 0x420) = 0;
    goto loc_001483EF;

loc_001481F3: ;
    if (CMP_NE(eax, 0x10)) goto loc_0014834D; /* jne: not equal / not zero */

loc_001481FC: ;
    if (CMP_NE(MEM8(esi + 0x45C), 1)) goto loc_0014828B; /* jne: not equal / not zero */

loc_00148209: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    xmm0 = xmm0 * MEMF(0x64B368); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esi + 0x78); /* movss */
    xmm4 = MEMF(esi + 0x80); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x68); /* subss */
    xmm4 = xmm4 - MEMF(esp + 0x70); /* subss */
    ecx = esi + 0x278;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x64B364); /* mulss */
    xmm1 = xmm1 + MEMF(0x64A694); /* addss */
    PUSH32(esp, ecx);
    edx = esi + 0x27C;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002EB760(); /* call 0x002EB760 */

loc_0014826B: ;
    SET_LO8(eax, MEM8(esi + 0x43D));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 0xF)) goto loc_001483EF; /* jne: not equal / not zero */

loc_0014827C: ;
    MEM32(esi + 0x420) = 0;
    goto loc_001483EF;

loc_0014828B: ;
    if (CMP_NE(eax, 0x10)) goto loc_0014834D; /* jne: not equal / not zero */

loc_00148294: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    (void)0; /* cmp MEM8(esi + 0x43D), 0x10 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (CMP_NE(MEM8(esi + 0x43D), 0x10)) goto loc_00148329; /* jne: not equal / not zero */

loc_001482C3: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm2 = MEMF(esi + 0x110); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 * MEMF(0x6492DC); /* mulss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(esi + 0x110) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esi + 0x27C;
    ecx = esi + 0x278;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0x3F333333);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    PUSH32(esp, 0); sub_002EB760(); /* call 0x002EB760 */

loc_00148326: ;
    esp = esp + 4;

loc_00148329: ;
    SET_LO8(eax, MEM8(esi + 0x234));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001483EF; /* jne: not equal / not zero */

loc_00148337: ;
    MEM8(esi + 0x43D) = 0xF;
    MEM32(esi + 0x420) = 0;
    goto loc_001483EF;

loc_0014834D: ;
    if (CMP_NE(eax, 0x91)) goto loc_0014836A; /* jne: not equal / not zero */

loc_00148354: ;
    MEM8(esi + 0x43D) = 3;
    MEM32(esi + 0x420) = 0;
    goto loc_001483EF;

loc_0014836A: ;
    if (CMP_NE(eax, 0x90)) goto loc_00148384; /* jne: not equal / not zero */

loc_00148371: ;
    MEM8(esi + 0x43D) = 0x2C;
    MEM32(esi + 0x420) = 0;
    goto loc_001483EF;

loc_00148384: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(esp + 0x2C);
    ecx = ecx - edx;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x44);
    edx = edx + ecx;
    PUSH32(esp, 0x3F800000);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    PUSH32(esp, 0);
    ecx = edx;
    ecx = ecx >> 0x1F;
    PUSH32(esp, 0);
    ecx = ecx + edx;
    edx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001483BC: ;
    MEMF(esp + 0x54) = xmm0; /* movss */
    esp = esp + 8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001483D4: ;
    ecx = 0xC000;
    ecx = ecx - eax;
    ecx = ecx | 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE0036);
    PUSH32(esp, esi);
    eax = esi;
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001483EC: ;
    esp = esp + 0x1C;

loc_001483EF: ;
    eax = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x6C);
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x18); /* subss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x70);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(ebx + 0x18) = xmm1; /* movss */
    MEM32(edx + 8) = eax;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (CMP_EQ(ecx, edx)) goto loc_00148453; /* je: equal / zero */

loc_00148431: ;
    eax = ZX8(MEM8(edi + 0x41));

loc_00148435: ;
    SET_LO8(edx, MEM8(edi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(edi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_00148448; /* jne: not equal / not zero */

loc_00148444: ;
    MEM8(edi + 0x4D) = 0;

loc_00148448: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ecx, edx)) goto loc_00148435; /* jne: not equal / not zero */

loc_00148453: ;
    xmm6 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x50);

loc_0014845E: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(ecx, eax)) goto loc_00147F49; /* jne: not equal / not zero */

loc_0014846E: ;
    edx = MEM32(esp + 0x40);

loc_00148472: ;
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_001485DE; /* jle: less or equal (signed <=) */

loc_0014847C: ;
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm1 * MEMF(0x58E77C); /* mulss */
    xmm0 = MEMF(edx + 0x3C); /* movss */
    xmm2 = MEMF(0x6498E4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm1 = MEMF(0x649724); /* movss */
    MEMF(edx + 0x3C) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_001484B9; /* jbe: below or equal (unsigned <=) */

loc_001484AF: ;
    /* nop */

loc_001484B0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_001484B0; /* ja: above (unsigned >) */

loc_001484B9: ;
    xmm4 = MEMF(0x6498E0); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_001484CF; /* jbe: below or equal (unsigned <=) */

loc_001484C6: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_001484C6; /* ja: above (unsigned >) */

loc_001484CF: ;
    xmm5 = MEMF(0x64A7BC); /* movss */
    MEMF(edx + 0x3C) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    xmm3 = xmm6; /* movaps */

loc_001484E3: ;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_001484EB; /* jns: not sign (positive) */

loc_001484E6: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_001484EB: ;
    ecx = eax + eax * 8;
    xmm0 = MEMF(esi + ecx * 4 + 0x18); /* movss */
    ecx = esi + ecx * 4;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(edx + 0x3C); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00148519; /* jbe: below or equal (unsigned <=) */

loc_0014850C: ;
    /* nop */

loc_00148510: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00148510; /* ja: above (unsigned >) */

loc_00148519: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00148529; /* jbe: below or equal (unsigned <=) */

loc_0014851E: ;
    edi = edi;

loc_00148520: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00148520; /* ja: above (unsigned >) */

loc_00148529: ;
    MEMF(ecx + 0x20) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(eax, ecx)) goto loc_001484E3; /* jne: not equal / not zero */

loc_00148536: ;
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_001485DE; /* jle: less or equal (signed <=) */

loc_00148540: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A0FC); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm1 = xmm6; /* movaps */
    goto loc_00148586;

loc_0014857C: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    esi = MEM32(esp + 0x50);

loc_00148586: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_0014858E; /* jns: not sign (positive) */

loc_00148589: ;
    ebx = ZX8(MEM8(edi + 0x41));
    ebx--;

loc_0014858E: ;
    edx = ebx + ebx * 8;
    xmm2 = MEMF(esi + edx * 4 + 0x18); /* movss */
    esi = esi + edx * 4;
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = xmm2; /* movaps */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001485D2; /* jbe: below or equal (unsigned <=) */

loc_001485AC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x40] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001485C7: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM8(esi + 0x1C) = LO8(eax);
    goto loc_001485D6;

loc_001485D2: ;
    MEM8(esi + 0x1C) = 0x9B;

loc_001485D6: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ebx, eax)) goto loc_0014857C; /* jne: not equal / not zero */

loc_001485DE: ;
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
 * sub_001485F0
 * Original: 0x001485F0 - 0x00148D6C (1916 bytes, 502 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001485F0(void)
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

loc_001485F0: ;
    esp = esp - 0x5C;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    if (CMP_L(MEM8(edi + 0x4C), 2)) goto loc_00148D67; /* jl: less (signed <) */

loc_00148602: ;
    eax = MEM32(edi + 0x144);
    ecx = MEM32(edi + 0x140);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(edi + 0x41));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x70);
    ebx = ebx + 5;
    MEM32(esp + 0x24) = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    eax = MEM32(edi + esi * 4 + 0x130);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00148656; /* jne: not equal / not zero */

loc_00148632: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    edx = ebx + ebx;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00148644: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + esi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_00148D65; /* je: equal / zero */

loc_00148656: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(edi + esi * 4 + 0x130);
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    eax--;
    eax = eax & ebx;
    eax = eax + ecx;
    ebp = eax;
    if ((eax == 0)) goto loc_00148D64; /* je: equal / zero */

loc_00148678: ;
    ecx = MEM32(0x8470DC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    edx = esi + ecx + 0x330;
    SET_LO8(eax, 2);
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_00148696: ;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(0x75BDE4));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0014873B; /* jbe: below or equal (unsigned <=) */

loc_001486A7: ;
    esi = MEM32(0x75BDE0);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001486DC; /* jne: not equal / not zero */

loc_001486B4: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001486C5: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001486CD: ;
    ecx = MEM32(0x75BDE0);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75BDE0);

loc_001486DC: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00148708; /* jne: not equal / not zero */

loc_001486E3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001486EB: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BDE0);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00148708; /* jne: not equal / not zero */

loc_001486FB: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BDE0);

loc_00148708: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00148731; /* jne: not equal / not zero */

loc_00148710: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0014872C; /* jne: not equal / not zero */

loc_0014871A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00148723: ;
    esi = MEM32(0x75BDE0);
    esp = esp + 8;

loc_0014872C: ;
    ebx = MEM32(esi + 4);
    goto loc_0014873D;

loc_00148731: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00148736: ;
    ebx = MEM32(eax + 4);
    goto loc_0014873D;

loc_0014873B: ;
    ebx = 0; /* xor self */

loc_0014873D: ;
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(esi + 0x3838), ebx)) goto loc_00148756; /* je: equal / zero */

loc_00148749: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0014874E: ;
    eax = esi;
    MEM32(eax + 0x3838) = ebx;

loc_00148756: ;
    if (TEST_Z(MEM8(edi + 0x3A), 2)) goto loc_0014879C; /* je: equal / zero */

loc_0014875C: ;
    edi = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    edi--;
    MEM32(esp + 0x10) = edi;
    if (((int32_t)edi >= 0)) goto loc_00148776; /* jns: not sign (positive) */

loc_00148767: ;
    ecx = MEM32(esp + 0x70);
    eax = ZX8(MEM8(ecx + 0x41));
    eax--;
    MEM32(esp + 0x10) = eax;
    edi = eax;

loc_00148776: ;
    edx = MEM32(esp + 0x70);
    edx = edx + 0x2C;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(eax + 0x3C); /* movss */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    goto loc_001487E6;

loc_0014879C: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_001487A8; /* jns: not sign (positive) */

loc_001487A3: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_001487A8: ;
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_001487BC; /* jge: greater or equal (signed >=) */

loc_001487B3: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x10) = ecx;

loc_001487BC: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    ecx = eax + eax * 8;
    xmm0 = MEMF(edx + ecx * 4 + 0x20); /* movss */
    eax = edx + ecx * 4;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = ecx;

loc_001487E6: ;
    eax = MEM32(esp + 0x18);
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    edx = edi + edi * 8;
    eax = eax + edx * 4;
    ecx = eax;
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEM32(esp + 0x50) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    eax = MEM32(esp + 0x2C);
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(eax); /* subss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEM32(esp + 0x4C) = edx;
    xmm6 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x68) = xmm7; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm7 = xmm7 * xmm1; /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 4); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x54); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x54); /* mulss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x58); /* mulss */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    xmm4 = xmm7; /* movaps */
    MEMF(esp + 0x34) = xmm7; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 + xmm7; /* addss */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00148954; /* jnp: not parity */

loc_00148924: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d18] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm1 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00148963;

loc_00148954: ;
    xmm1 = xmm4; /* movaps */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */

loc_00148963: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 + xmm3; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 + xmm2; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 + xmm0; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm7; /* movss */
    eax = SX16(LO16(edx));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x10) = xmm7; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    xmm7 = MEMF(0x6490AC); /* movss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    MEM8(ebp + 0xF) = LO8(ecx);
    ebp = ebp + 0x1C;
    ebx = 0xFF;
    MEM8(ebp + -16) = LO8(ebx);
    MEM8(ebp + -15) = LO8(ebx);
    MEM8(ebp + -14) = LO8(ebx);
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    edx = 0; /* xor self */
    MEM16(ebp + -4) = LO16(edx);
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x38); /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(ebp + 0x10) = xmm1; /* movss */
    MEMF(ebp + 0x14) = xmm4; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    MEM8(ebp + 0xF) = LO8(ecx);
    MEM16(ebp + 0x18) = LO16(edx);
    ebp = ebp + 0x1C;
    esi = ebp + -56;
    goto loc_00148A82;

loc_00148A5E: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */

loc_00148A82: ;
    eax = MEM32(esp + 0x2C);
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
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
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
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
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00148B67; /* jnp: not parity */

loc_00148B31: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d18] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm3 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x34); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00148B73;

loc_00148B67: ;
    xmm3 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    MEMF(esp + 0x38) = xmm1; /* movss */

loc_00148B73: ;
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    xmm7 = MEMF(0x6490AC); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm5 - MEMF(esp + 0x38); /* subss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    MEMF(ebp + 8) = xmm0; /* movss */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    MEM16(ebp + 0x18) = LO16(edx);
    xmm2 = xmm2 - xmm3; /* subss */
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(eax));
    ebp = ebp + 0x1C;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 - xmm4; /* subss */
    eax = (int32_t)xmm6; /* cvttss2si */
    eax = SX16(LO16(eax));
    MEMF(ebp) = xmm2; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)xmm5; /* cvttss2si */
    eax = SX16(LO16(eax));
    MEMF(ebp + 4) = xmm2; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(ebp + 8) = xmm2; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    MEM16(ebp + 0x18) = LO16(edx);
    ebp = ebp + 0x1C;
    PUSH32(esp, ebx);
    ecx = ebp + -112;
    esi = esi + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    esi = esi + 0x1C;
    eax = 4;
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_00148C6B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00148C7A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00148C89: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x28))) goto loc_00148CDD; /* jbe: below or equal (unsigned <=) */

loc_00148C96: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    xmm0 = MEMF(0x64930C); /* movss */
    eax = MEM32(esp + 0x24);
    edi = ebp;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x10);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + -40) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -12); /* movss */
    ebp = ebp + 0x1C;
    xmm1 = xmm1 - xmm0; /* subss */
    eax = eax + 0x1C;
    MEMF(ebp + -40) = xmm1; /* movss */
    ebp = ebp + 0x1C;
    eax = eax + 0x1C;
    MEM32(esp + 0x24) = eax;
    esi = eax;

loc_00148CDD: ;
    edx = edi;
    edi--;
    MEM32(esp + 0x10) = edi;
    if (((int32_t)edi >= 0)) goto loc_00148CF5; /* jns: not sign (positive) */

loc_00148CE6: ;
    eax = MEM32(esp + 0x70);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x10) = eax;
    edi = eax;

loc_00148CF5: ;
    eax = MEM32(esp + 0x18);
    ecx = edx + edx * 8;
    eax = eax + ecx * 4;
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x18);
    ecx = edi + edi * 8;
    eax = eax + ecx * 4;
    ecx = eax;
    edi = MEM32(ecx);
    MEM32(esp + 0x48) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x4C) = edi;
    edi = MEM32(esp + 0x24);
    xmm0 = MEMF(edi + 0x20); /* movss */
    MEM32(esp + 0x50) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    eax = MEM32(esp + 0x70);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_NE(edx, eax)) goto loc_00148A5E; /* jne: not equal / not zero */

loc_00148D64: ;
    POP32(esp, ebp);

loc_00148D65: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00148D67: ;
    POP32(esp, edi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00148D70
 * Original: 0x00148D70 - 0x00148DC0 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148D70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    ecx = MEM32(eax + 0x30);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x30;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00148D99; /* je: equal / zero */

loc_00148D87: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00148D99: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00148DA4: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_00148DA9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00148DC0(); return; } /* jne: not equal / not zero */

loc_00148DB3: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00148DD0
 * Original: 0x00148DD0 - 0x00148E15 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00148DD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    ecx = MEM32(eax + 0x30);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x30;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00148DF9; /* je: equal / zero */

loc_00148DE7: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00148DF9: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00148E04: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_00148E09: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00148E0F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00148E20
 * Original: 0x00148E20 - 0x00148E98 (120 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00148E20: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x144);
    if (CMP_NE(ecx, 0x44)) goto loc_00148E4E; /* jne: not equal / not zero */

loc_00148E34: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_00148E46; /* je: equal / zero */

loc_00148E3E: ;
    SET_LO8(edx, MEM8(ecx + 4));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_00148E96; /* jne: not equal / not zero */

loc_00148E46: ;
    ecx = MEM32(ecx + 8);
    POP32(esp, esi);
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

loc_00148E4E: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00148E6B; /* jne: not equal / not zero */

loc_00148E52: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00148E64; /* je: equal / zero */

loc_00148E5C: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_00148E96; /* jne: not equal / not zero */

loc_00148E64: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00148E69: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00148E6B: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_00148E96; /* jne: not equal / not zero */

loc_00148E70: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_00148E89; /* jne: not equal / not zero */

loc_00148E7C: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    POP32(esp, esi);
    MEM8(eax + 4) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00148E89: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_00148E96; /* jne: not equal / not zero */

loc_00148E8E: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_00148E96: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00148EA0
 * Original: 0x00148EA0 - 0x00149672 (2002 bytes, 421 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00148EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x184;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    eax = MEM32(ebx + 0xE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(eax, eax)) goto loc_0014966B; /* je: equal / zero */

loc_00148ECF: ;
    edi = 2;
    if (CMP_L(eax, edi)) goto loc_0014917E; /* jl: less (signed <) */

loc_00148EDC: ;
    ecx = MEM32(ecx + 0x68);
    if (CMP_EQ(ecx, 0x33)) goto loc_00148EED; /* je: equal / zero */

loc_00148EE4: ;
    if (CMP_NE(ecx, 0x3A)) goto loc_0014917E; /* jne: not equal / not zero */

loc_00148EED: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00148EF2: ;
    xmm0 = xmm0 * MEMF(0x64A6F0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A6EC); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x4C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0014955E; /* jbe: below or equal (unsigned <=) */

loc_00148F21: ;
    xmm0 = MEMF(0x64A6E8); /* movss */
    xmm1 = MEMF(0x64A6E4); /* movss */
    ecx = 0x2E;
    MEM16(esp + 0x60) = LO16(ecx);
    MEM16(esp + 0x64) = LO16(ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = ebx + 8;
    edx = MEM32(ecx);
    MEM8(esp + 0xA5) = LO8(eax);
    MEM8(esp + 0xA6) = LO8(eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(0x595D14);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(0x595D18);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(0x595D1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x58) = 0x303;
    MEM32(esp + 0x5C) = 0x6C;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM16(esp + 0x62) = 5;
    esi = 0x90DE07;
    MEM8(esp + 0xA4) = 0x24;
    MEM8(esp + 0xA7) = 0;
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEM8(esp + 0x3C) = 0x57;
    MEM8(esp + 0x3D) = 0x55;
    MEM8(esp + 0x3E) = 0x5A;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    edi = edi;

loc_00149000: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00149005: ;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014900E: ;
    MEM8(esp + 0x15) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00149017: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x16) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014902B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014903F: ;
    xmm5 = MEMF(0x648CE4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149056: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149065: ;
    xmm0 = xmm0 * MEMF(0x64A6E0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A6DC); /* addss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00149083: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014908F: ;
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    esi = esi & 0xFFFFFF3Fu;
    esi = esi | edi;
    MEM32(esp + 0x9C) = esi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001490AB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3F) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001490BF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x46;
    MEM16(esp + 0x30) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001490D4: ;
    edx = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(0x64A6D8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A6D4); /* addss */
    eax = 2;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x50) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 4));
    edi = 0; /* xor self */
    ecx = 4;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = esp + 0x30;
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x68) = edi;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0014912F: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, edi)) goto loc_00149156; /* je: equal / zero */

loc_00149136: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x170;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_00149156: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + 0x4C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00149000; /* ja: above (unsigned >) */

loc_00149179: ;
    goto loc_0014955A;

loc_0014917E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149183: ;
    xmm1 = MEMF(0x6496A8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x48); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x48) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0014955E; /* jbe: below or equal (unsigned <=) */

loc_001491B2: ;
    xmm0 = MEMF(0x64A6D0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0C0); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6CC); /* movss */
    edx = ebx + 8;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6C8); /* movss */
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x649350); /* movss */
    eax = 1;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A150); /* movss */
    MEM16(esp + 0x54) = LO16(eax);
    MEM16(esp + 0x5A) = LO16(eax);
    (void)0; /* cmp MEM32(ebx + 0xE4), edi - flags set for next jcc */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM16(esp + 0x56) = LO16(edi);
    MEM16(esp + 0x58) = 3;
    MEM16(esp + 0x5C) = 0x14;
    MEM16(esp + 0x5E) = 0xA;
    MEM16(esp + 0x60) = 0xC8;
    MEM16(esp + 0x62) = 0x37;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM16(esp + 0x6C) = 0x10;
    MEM16(esp + 0x6E) = 0xF;
    MEM32(esp + 0x70) = 0;
    MEM8(esp + 0x64) = 3;
    if (CMP_GE(MEM32(ebx + 0xE4), edi)) goto loc_0014955E; /* jge: greater or equal (signed >=) */

loc_00149289: ;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 0x10);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    esi = ebx + 0x50;
    ecx = 0x24;
    edi = esp + 0xF0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x180) = xmm0; /* movss */
    goto loc_001492F0;

loc_001492E5: ;
    xmm4 = 0.0f; /* xorps self = zero */
    goto loc_001492F0;

    /* nop */

loc_001492F0: ;
    xmm0 = MEMF(esp + 0x180); /* movss */
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    edx = esp + 0xF8;
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    MEM8(esp + 0xC0) = 2;
    MEMF(esp + 0xE8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_0014932E: ;
    xmm6 = MEMF(esp + 0xC4); /* movss */
    xmm7 = MEMF(esp + 0xC8); /* movss */
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001493B4; /* je: equal / zero */

loc_00149347: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xE8); /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xE4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xE0); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_001493B4; /* jbe: below or equal (unsigned <=) */

loc_00149381: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm0; /* subss */
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEMF(esp + 0xBC) = xmm7; /* movss */
    MEMF(esp + 0xC0) = xmm4; /* movss */

loc_001493B4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001493B9: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x6493B8); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A6C4); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001493DB: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xE4); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001493EC: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001493F7: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm3 = MEMF(esp + 0xDC); /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, 0xFF);
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xEC); /* movss */
    PUSH32(esp, 0xC8);
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xEC); /* movss */
    PUSH32(esp, 0x86);
    PUSH32(esp, 0x299);
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x100); /* movss */
    PUSH32(esp, 0x29A);
    PUSH32(esp, 0x3DCCCCCD);
    xmm0 = xmm0 + xmm7; /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(esp + 0xF0); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    PUSH32(esp, 0x3E99999A);
    xmm3 = xmm3 * xmm5; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001494D0: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edi = esp + 0x5C;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001494FB: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00149537; /* je: equal / zero */

loc_00149502: ;
    xmm0 = MEMF(0x649ED4); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    MEM8(eax + 0x100) = 0xFF;
    MEM8(eax + 0x101) = 0xFF;
    MEM8(eax + 0x102) = 0xB4;

loc_00149537: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(0x648E64); /* subss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(eax + 0x48) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648D14))) goto loc_001492E5; /* ja: above (unsigned >) */

loc_0014955A: ;
    esi = MEM32(esp + 0x10);

loc_0014955E: ;
    eax = MEM32(ebx + 0xE4);
    if (CMP_EQ(eax, 1)) goto loc_00149572; /* je: equal / zero */

loc_00149569: ;
    if (CMP_NE(eax, 4)) goto loc_0014966B; /* jne: not equal / not zero */

loc_00149572: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149577: ;
    xmm0 = xmm0 * MEMF(0x649A94); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E64); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x44); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0014966B; /* jbe: below or equal (unsigned <=) */

loc_001495A6: ;
    goto loc_001495B0;

    /* nop */
    /* nop */

loc_001495B0: ;
    xmm0 = MEMF(ebx + 0xC4); /* movss */
    /* comiss xmm0, MEMF(0x648E40) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E40))) goto loc_0014964C; /* jbe: below or equal (unsigned <=) */

loc_001495C5: ;
    eax = ebx + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001495F5: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 4));
    eax = ebx + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014960B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x46);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014961C: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 3);
    edi = 0xC8;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_00149645: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 0x1C;

loc_0014964C: ;
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001495B0; /* ja: above (unsigned >) */

loc_0014966B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00149680
 * Original: 0x00149680 - 0x001496FE (126 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00149680: ;
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx | 0x40400000;
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x597978);
    MEM8(eax) = 3;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_001496BA: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) { sub_001496FE(); return; } /* je: equal / zero */

loc_001496C1: ;
    ecx = esi;
    esi = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    edx = eax + 0x310;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_LO8(ecx, MEM8(esp + 0x24));
    MEM8(edx + 0x59) = LO8(ecx);
    ecx = MEM32(0x774A90);
    POP32(esp, edi);
    ecx++;
    POP32(esp, ebx);
    MEM32(edx + 0x44) = 0;
    MEM32(0x774A90) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149710
 * Original: 0x00149710 - 0x00149747 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149710: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    SET_LO8(eax, MEM8(esi + 0x369));
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00149747(); return; } /* je: equal / zero */

loc_0014972B: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B70F0), _icall_esp); /* indirect call */
    }

loc_00149737: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00149747(); return; } /* jne: not equal / not zero */

loc_0014973E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00149D40
 * Original: 0x00149D40 - 0x00149D55 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149D40(void)
{

loc_00149D40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_00149D4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00149D50: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00149D60
 * Original: 0x00149D60 - 0x00149D97 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00149D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x354);
    if (TEST_Z(esi, esi)) goto loc_00149D75; /* je: equal / zero */

loc_00149D70: ;
    PUSH32(esp, 0); sub_0011C3D0(); /* call 0x0011C3D0 */

loc_00149D75: ;
    edx = MEM32(0x774A90);
    eax = ZX8(MEM8(edi + 0x368));
    edx--;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(0x774A90) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5977A8), _icall_esp); /* indirect call */
    }

loc_00149D91: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149DA0
 * Original: 0x00149DA0 - 0x00149DD7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00149DA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x354);
    if (TEST_Z(esi, esi)) goto loc_00149DB5; /* je: equal / zero */

loc_00149DB0: ;
    PUSH32(esp, 0); sub_0011C3D0(); /* call 0x0011C3D0 */

loc_00149DB5: ;
    edx = MEM32(0x774A90);
    eax = ZX8(MEM8(edi + 0x368));
    edx--;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(0x774A90) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5977F0), _icall_esp); /* indirect call */
    }

loc_00149DD1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149DE0
 * Original: 0x00149DE0 - 0x00149DF8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149DE0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149DE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 8) = 0x6B710C;
    MEM32(esp + 0xC) = 4;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_00149E00(); return; /* tail jmp 0x00149E00 */

}

/**
 * sub_00149EC0
 * Original: 0x00149EC0 - 0x00149EF1 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00149EC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x354);
    if (TEST_Z(ecx, ecx)) goto loc_00149EEB; /* je: equal / zero */

loc_00149ECE: ;
    edx = MEM32(eax + 0x40);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x354);
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x354);
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 8) = edx;

loc_00149EEB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00149F00
 * Original: 0x00149F00 - 0x00149FC8 (200 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149F00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00149F00: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x37C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x37C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00149F99; /* jbe: below or equal (unsigned <=) */

loc_00149F25: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149F2A: ;
    xmm0 = xmm0 * MEMF(esi + 0x380); /* mulss */
    MEMF(esi + 0x37C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00149F3F: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00149F4B; /* jns: not sign (positive) */

loc_00149F46: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00149F4B: ;
    if ((eax == 0)) goto loc_00149F70; /* je: equal / zero */

loc_00149F4D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149F52: ;
    xmm1 = MEMF(esi + 0x36C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x370); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x370); /* addss */
    goto loc_00149F91;

loc_00149F70: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00149F75: ;
    xmm1 = MEMF(esi + 0x374); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x36C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x36C); /* addss */

loc_00149F91: ;
    MEMF(esi + 0x378) = xmm0; /* movss */

loc_00149F99: ;
    xmm0 = MEMF(esi + 0x378); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x358); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x384); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x358); /* addss */
    MEMF(esi + 0x358) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149FD0
 * Original: 0x00149FD0 - 0x0014A048 (120 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149FD0(void)
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

loc_00149FD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x374)); /* fld float */
    xmm1 = MEMF(0x648D30); /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x358) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(eax + 0x378); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x374); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x374) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0014A029; /* jbe: below or equal (unsigned <=) */

loc_0014A01B: ;
    goto loc_0014A020;

    /* nop */

loc_0014A020: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0014A020; /* ja: above (unsigned >) */

loc_0014A029: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0014A03A; /* jbe: below or equal (unsigned <=) */

loc_0014A031: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_0014A031; /* ja: above (unsigned >) */

loc_0014A03A: ;
    MEMF(eax + 0x374) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014A050
 * Original: 0x0014A050 - 0x0014A076 (38 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A050: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x37C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x378) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x378))) { sub_0014A076(); return; } /* jbe: below or equal (unsigned <=) */

loc_0014A065: ;
    ecx = MEM32(eax + 0x370);
    MEM32(eax + 0x358) = ecx;
    g_seh_ebp = ebp; sub_0014A114(); return; /* tail jmp 0x0014A114 */

}

/**
 * sub_0014A170
 * Original: 0x0014A170 - 0x0014A1E0 (112 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A170(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A170: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 0x368));
    eax = MEM32(eax * 4 + 0x597838);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0014A199; /* je: equal / zero */

loc_0014A191: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0014A196: ;
    esp = esp + 0xC;

loc_0014A199: ;
    if (CMP_EQ(edi, 0x22)) goto loc_0014A1A8; /* je: equal / zero */

loc_0014A19E: ;
    if (CMP_EQ(edi, 0x24)) goto loc_0014A1A8; /* je: equal / zero */

loc_0014A1A3: ;
    if (CMP_NE(edi, 0x25)) goto loc_0014A1DC; /* jne: not equal / not zero */

loc_0014A1A8: ;
    SET_LO8(ecx, MEM8(esi + 0x368));
    if (CMP_NE(LO8(ecx), MEM8(ebx))) goto loc_0014A1DC; /* jne: not equal / not zero */

loc_0014A1B2: ;
    eax = edi;
    eax = eax - 0x22;
    if ((eax == 0)) goto loc_0014A1D7; /* je: equal / zero */

loc_0014A1B9: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_0014A1CC; /* je: equal / zero */

loc_0014A1BE: ;
    eax--;
    if ((eax != 0)) goto loc_0014A1DC; /* jne: not equal / not zero */

loc_0014A1C1: ;
    POP32(esp, edi);
    MEM8(esi + 0x369) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014A1CC: ;
    POP32(esp, edi);
    MEM8(esi + 0x369) = 0xFF;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014A1D7: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0014A1DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A1E0
 * Original: 0x0014A1E0 - 0x0014A2FB (283 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1E0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0014A1E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x10); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0014A22E: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = MEMF(ebp + 8); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0014A27F: ;
    xmm3 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm6 = MEMF(ebp + 0xC); /* movss */
    MEMF(edi + 0x40) = xmm3; /* movss */
    MEMF(edi + 0x44) = xmm4; /* movss */
    MEMF(edi + 0x48) = xmm5; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = MEMF(0x5A0060); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    MEMF(edi + 0x50) = xmm1; /* movss */
    MEMF(edi + 0x54) = xmm2; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A300
 * Original: 0x0014A300 - 0x0014A339 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A300(void)
{
    float xmm1;

loc_0014A300: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x374);
    ecx = MEM32(eax + 4);
    edx = MEM32(edi + 0x370);
    xmm1 = MEMF(eax + 0xC); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x36C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = edi + 0x378;
    PUSH32(esp, 0); sub_0014A1E0(); /* call 0x0014A1E0 */

loc_0014A32E: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A340
 * Original: 0x0014A340 - 0x0014A370 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A340(void)
{

loc_0014A340: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x43);
    eax = 0x38;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014A351: ;
    ecx = 0; /* xor self */
    MEM16(eax + 0x32) = LO16(ecx);
    MEM16(eax + 0x30) = LO16(ecx);
    MEM16(eax + 0x2C) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    esp = esp + 8;
    MEM8(eax + 0x34) = 1;
    MEM16(eax + 0x2E) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A370
 * Original: 0x0014A370 - 0x0014A391 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A370(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A370: ;
    eax = MEM32(0x7715EC);
    if (TEST_Z(eax, eax)) goto loc_0014A390; /* je: equal / zero */

loc_0014A379: ;
    SET_LO8(edx, 0xFE);
    goto loc_0014A380;

    /* nop */

loc_0014A380: ;
    if (CMP_NE(MEM16(eax + 0x2E), LO16(ecx))) goto loc_0014A389; /* jne: not equal / not zero */

loc_0014A386: ;
    MEM8(eax + 0x34) = LO8(edx);

loc_0014A389: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0014A380; /* jne: not equal / not zero */

loc_0014A390: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014A3A0
 * Original: 0x0014A3A0 - 0x0014A448 (168 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A3A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A3A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x34));
    SET_LO16(ecx, SX8(LO8(eax)));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    MEM16(esi + 0x2C) = MEM16(esi + 0x2C) + LO16(ecx);
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO16(ecx, MEM16(esi + 0x2C));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0014A3E3; /* jle: less or equal (signed <=) */

loc_0014A3C1: ;
    if (CMP_LE(LO16(ecx), 0xEC)) goto loc_0014A3E3; /* jle: less or equal (signed <=) */

loc_0014A3C8: ;
    eax = 0x128;
    eax = eax - ecx;
    eax = eax << 2;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(esi + 0x32) = LO16(eax);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_0014A3EA; /* jge: greater or equal (signed >=) */

loc_0014A3DB: ;
    MEM16(esi + 0x32) = 0;
    goto loc_0014A3EA;

loc_0014A3E3: ;
    edx = ecx + ecx;
    MEM16(esi + 0x32) = LO16(edx);

loc_0014A3EA: ;
    if (CMP_LE(MEM16(esi + 0x32), 0x7F)) goto loc_0014A3F7; /* jle: less or equal (signed <=) */

loc_0014A3F1: ;
    MEM16(esi + 0x32) = 0x80;

loc_0014A3F7: ;
    MEM16(esi + 0x30) = MEM16(esi + 0x30) + 1;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x30));
    if (CMP_LE(LO16(eax), 0xFF)) goto loc_0014A410; /* jle: less or equal (signed <=) */

loc_0014A407: ;
    eax = eax + 0xFFFFFF00u;
    MEM16(esi + 0x30) = LO16(eax);

loc_0014A410: ;
    if (CMP_G(LO16(ecx), 0x12C)) goto loc_0014A41C; /* jg: greater (signed >) */

loc_0014A417: ;
    if (CMP_GE(LO16(ecx) & LO16(ecx), 0)) goto loc_0014A446; /* jge: greater or equal (signed >=) */

loc_0014A41C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014A446; /* jne: not equal / not zero */

loc_0014A425: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0014A42C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0014A446; /* jl: less (signed <) */

loc_0014A433: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0014A448(); return; } /* je: equal / zero */

loc_0014A440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0014A443: ;
    esp = esp + 4;

loc_0014A446: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A460
 * Original: 0x0014A460 - 0x0014A483 (35 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014A478: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0014A483(); return; } /* jne: not equal / not zero */

loc_0014A47F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A4D0
 * Original: 0x0014A4D0 - 0x0014A4F5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A4D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A4D0: ;
    PUSH32(esp, ecx);
    if (TEST_S(eax, eax)) goto loc_0014A4F3; /* jl: less (signed <) */

loc_0014A4D5: ;
    if (CMP_GE(eax, 4)) goto loc_0014A4F3; /* jge: greater or equal (signed >=) */

loc_0014A4DA: ;
    MEM32(esp) = eax;
    PUSH32(esp, 0x17);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0014A4F0: ;
    esp = esp + 0x10;

loc_0014A4F3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A500
 * Original: 0x0014A500 - 0x0014A525 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A500: ;
    PUSH32(esp, ecx);
    if (TEST_S(eax, eax)) goto loc_0014A523; /* jl: less (signed <) */

loc_0014A505: ;
    if (CMP_GE(eax, 4)) goto loc_0014A523; /* jge: greater or equal (signed >=) */

loc_0014A50A: ;
    MEM32(esp) = eax;
    PUSH32(esp, 0x18);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0014A520: ;
    esp = esp + 0x10;

loc_0014A523: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A530
 * Original: 0x0014A530 - 0x0014A66B (315 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A530(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0014A530: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0xC;
    (void)0; /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(eax, 0x17)) goto loc_0014A615; /* jne: not equal / not zero */

loc_0014A545: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x50))) goto loc_0014A666; /* jne: not equal / not zero */

loc_0014A554: ;
    eax = MEM32(esi + 0x54);
    if (TEST_NZ(eax, eax)) goto loc_0014A666; /* jne: not equal / not zero */

loc_0014A55F: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0014A574; /* jne: not equal / not zero */

loc_0014A568: ;
    SET_LO8(edx, MEM8(0x76F0DC));
    MEM8(esp + 0x14) = LO8(edx);
    goto loc_0014A579;

loc_0014A574: ;
    MEM8(esp + 0x14) = 0xFF;

loc_0014A579: ;
    eax = MEM32(0x7FA1F8);
    if (TEST_NZ(eax, eax)) goto loc_0014A5C9; /* jne: not equal / not zero */

loc_0014A582: ;
    xmm0 = MEMF(0x64A014); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A010); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A00C); /* movss */
    PUSH32(esp, eax);
    eax = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00146A40(); /* call 0x00146A40 */

loc_0014A5BA: ;
    edx = MEM32(esi + 0x4C);
    esp = esp + 4;
    MEM8(edx + 0x14) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0014A5C9: ;
    if (CMP_NE(eax, 0x3C)) goto loc_0014A609; /* jne: not equal / not zero */

loc_0014A5CE: ;
    xmm0 = MEMF(0x649368); /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A008); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649C28); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00146BB0(); /* call 0x00146BB0 */

loc_0014A606: ;
    esp = esp + 4;

loc_0014A609: ;
    edx = MEM32(esi + 0x4C);
    MEM8(edx + 0x14) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0014A615: ;
    if (CMP_NE(eax, 0x18)) goto loc_0014A648; /* jne: not equal / not zero */

loc_0014A61A: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x50))) goto loc_0014A666; /* jne: not equal / not zero */

loc_0014A625: ;
    eax = MEM32(esi + 0x54);
    if (TEST_Z(eax, eax)) goto loc_0014A666; /* je: equal / zero */

loc_0014A62C: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x3A));
    MEM8(eax + 0x50) = 0;
    POP32(esp, esi);
    edx = edx & 0xFFFD;
    edx = edx | 8;
    MEM16(eax + 0x3A) = LO16(edx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0014A648: ;
    if (CMP_NE(eax, 0x23)) goto loc_0014A666; /* jne: not equal / not zero */

loc_0014A64D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x50))) goto loc_0014A666; /* jne: not equal / not zero */

loc_0014A658: ;
    edx = MEM32(esi + 0x4C);
    MEM32(esi + 0x54) = 0;
    MEM8(edx + 0x14) = 1;

loc_0014A666: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0014A670
 * Original: 0x0014A670 - 0x0014A693 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A670(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A670: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x140);
    if (CMP_GE(MEM8(eax + 0x4C), 2)) { sub_0014A693(); return; } /* jge: greater or equal (signed >=) */

loc_0014A688: ;
    if (TEST_Z(MEM8(eax + 0x3A), 8)) { sub_0014A693(); return; } /* je: equal / zero */

loc_0014A68E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A770
 * Original: 0x0014A770 - 0x0014AACD (861 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A770(void)
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

loc_0014A770: ;
    xmm7 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(0x648D30); /* movss */
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ebp = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    xmm1 = MEMF(edi + 0x10); /* movss */
    xmm2 = MEMF(edi + 0x14); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0xC); /* addss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEMF(edi + 0xC) = xmm2; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0014A7CA; /* jbe: below or equal (unsigned <=) */

loc_0014A7C1: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0014A7C1; /* ja: above (unsigned >) */

loc_0014A7CA: ;
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_0014A7DB; /* jbe: below or equal (unsigned <=) */

loc_0014A7D2: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_0014A7D2; /* ja: above (unsigned >) */

loc_0014A7DB: ;
    MEMF(edi + 8) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0014A7F9; /* jbe: below or equal (unsigned <=) */

loc_0014A7E8: ;
    goto loc_0014A7F0;

    /* nop */

loc_0014A7F0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0014A7F0; /* ja: above (unsigned >) */

loc_0014A7F9: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_0014A809; /* jbe: below or equal (unsigned <=) */

loc_0014A7FE: ;
    edi = edi;

loc_0014A800: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_0014A800; /* ja: above (unsigned >) */

loc_0014A809: ;
    MEMF(edi + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x30); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x2C); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0x2C) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0014A82F; /* jbe: below or equal (unsigned <=) */

loc_0014A826: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0014A826; /* ja: above (unsigned >) */

loc_0014A82F: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_0014A83D; /* jbe: below or equal (unsigned <=) */

loc_0014A834: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_0014A834; /* ja: above (unsigned >) */

loc_0014A83D: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * MEMF(0x64963C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x40); /* addss */
    MEMF(edi + 0x2C) = xmm1; /* movss */
    MEMF(edi + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014A85C: ;
    xmm0 = xmm0 * MEMF(0x649638); /* mulss */
    xmm0 = xmm0 + MEMF(0x649634); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = MEMF(0x649130); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x3C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_0014A8A6; /* jb: below (unsigned <) */

loc_0014A88F: ;
    xmm2 = xmm0; /* movaps */

loc_0014A892: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 >= xmm1)) goto loc_0014A892; /* jae: above or equal (unsigned >=) */

loc_0014A8A1: ;
    MEMF(edi + 0x3C) = xmm2; /* movss */

loc_0014A8A6: ;
    xmm0 = MEMF(edi + 0x40); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_0014AAC1; /* jbe: below or equal (unsigned <=) */

loc_0014A8BC: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    xmm4 = MEMF(edi + 0x3C); /* movss */
    /* FPU: fsin  */
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x1C);
    xmm3 = MEMF(edi + 0x34); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(edi + 0x20); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm2; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    xmm2 = MEMF(esp + 0x10); /* movss */
    /* FPU: fsin  */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    xmm2 = MEMF(esp + 0x14); /* movss */
    /* FPU: fsin  */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 0x38); /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edi + 0x40); /* movss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 <= xmm5)) goto loc_0014AAA4; /* jbe: below or equal (unsigned <=) */

loc_0014A96E: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 * MEMF(0x649630); /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * MEMF(0x64962C); /* mulss */
    xmm7 = xmm7 * MEMF(0x649628); /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(0x64962C); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    goto loc_0014A9D0;

    /* nop */
    /* nop */

loc_0014A9D0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm7 = MEMF(esp + 0x30); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ebp;
    MEMF(eax) = xmm1; /* movss */
    edx = MEM32(esi + 0x30);
    MEM32(eax + 4) = edx;
    xmm7 = xmm7 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm6; /* movss */
    MEMF(eax + 0x10) = xmm3; /* movss */
    MEM16(eax + 0x14) = 0xFF;
    MEMF(eax + 0x18) = xmm4; /* movss */
    MEMF(eax + 0xC) = xmm7; /* movss */
    SET_LO8(eax, MEM8(esi + 0x4E));
    ecx = ZX8(MEM8(esi + 0x41));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4E) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, ecx)) goto loc_0014AA2A; /* jne: not equal / not zero */

loc_0014AA26: ;
    MEM8(esi + 0x4E) = 0;

loc_0014AA2A: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4C) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x4D));
    if (CMP_NE(MEM8(esi + 0x4E), LO8(eax))) goto loc_0014AA51; /* jne: not equal / not zero */

loc_0014AA3C: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4D) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, ecx)) goto loc_0014AA4C; /* jne: not equal / not zero */

loc_0014AA48: ;
    MEM8(esi + 0x4D) = 0;

loc_0014AA4C: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x4C) = LO8(edx);

loc_0014AA51: ;
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x28); /* addss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm3 = xmm7; /* movaps */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm4 = xmm7; /* movaps */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm7 = MEMF(edi + 0x40); /* movss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm7, xmm5 - sets EFLAGS */
    MEMF(edi + 0x40) = xmm7; /* movss */
    if ((xmm7 > xmm5)) goto loc_0014A9D0; /* ja: above (unsigned >) */

loc_0014AA98: ;
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */

loc_0014AAA4: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = edx;
    MEMF(edi + 0x34) = xmm3; /* movss */
    MEMF(edi + 0x38) = xmm4; /* movss */
    MEMF(edi + 0x20) = xmm0; /* movss */

loc_0014AAC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014AAD0
 * Original: 0x0014AAD0 - 0x0014AC20 (336 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAD0(void)
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

loc_0014AAD0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    (void)0; /* cmp MEM8(ebp + 0x4C), 1 - flags set for next jcc */
    ecx = MEM32(ebp + 0x140);
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(MEM8(ebp + 0x4C), 1)) goto loc_0014AC16; /* jl: less (signed <) */

loc_0014AAEC: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0014AAF8; /* jns: not sign (positive) */

loc_0014AAF3: ;
    eax = ZX8(MEM8(ebp + 0x41));
    eax--;

loc_0014AAF8: ;
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ebx = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    fp_push(MEMF(eax + ecx + 4)); /* fld float */
    PUSH32(esp, edi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = edi + ecx;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014AC14; /* jnp: not parity */

loc_0014AB2E: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x649624); /* mulss */
    xmm2 = xmm2 * MEMF(0x648CE4); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x649620); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    goto loc_0014AB92;

loc_0014AB88: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x18);

loc_0014AB92: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    xmm0 = MEMF(esi + ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    esi = esi + ecx;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM16(esi + 0x14) = 0xFF;
    if ((xmm1 <= xmm0)) goto loc_0014ABD8; /* jbe: below or equal (unsigned <=) */

loc_0014ABBB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014ABCE: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(esi + 0x14) = LO16(eax);
    goto loc_0014ABFC;

loc_0014ABD8: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0014ABFC; /* jbe: below or equal (unsigned <=) */

loc_0014ABDD: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014ABF4: ;
    SET_LO16(ecx, ZX8(LO8(eax)));
    MEM16(esi + 0x14) = LO16(ecx);

loc_0014ABFC: ;
    edx = ZX8(MEM8(ebp + 0x41));
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_0014AC07; /* jl: less (signed <) */

loc_0014AC05: ;
    ebx = 0; /* xor self */

loc_0014AC07: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    if (CMP_NE(ebx, eax)) goto loc_0014AB88; /* jne: not equal / not zero */

loc_0014AC13: ;
    POP32(esp, esi);

loc_0014AC14: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0014AC16: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014B0A0
 * Original: 0x0014B0A0 - 0x0014B0EE (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B0A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0x23);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0014B0C5: ;
    esp = esp + 0x10;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0014B0D3: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0014B0D8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0014B0EE(); return; } /* jne: not equal / not zero */

loc_0014B0E1: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0014B130
 * Original: 0x0014B130 - 0x0014B1E2 (178 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B130: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    PUSH32(esp, 0); sub_0014B1F0(); /* call 0x0014B1F0 */

loc_0014B142: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0014B1DB; /* je: equal / zero */

loc_0014B14C: ;
    PUSH32(esp, edi);
    esi = esp + 0x10;
    edi = esp + 0x14;
    ecx = esp + 0x18;
    eax = ebp;
    PUSH32(esp, 0); sub_001C29E0(); /* call 0x001C29E0 */

loc_0014B160: ;
    (void)0; /* test MEM8(ebx + 0x3A), 8 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x4C));
    POP32(esp, edi);
    if (TEST_Z(MEM8(ebx + 0x3A), 8)) goto loc_0014B19A; /* je: equal / zero */

loc_0014B16A: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0014B1DB; /* jle: less or equal (signed <=) */

loc_0014B17A: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0014B186; /* jns: not sign (positive) */

loc_0014B181: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_0014B186: ;
    ecx = MEM32(ebx + 0x140);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm1 = MEMF(ecx + eax + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_0014B1BC;

loc_0014B19A: ;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0014B1DB; /* jle: less or equal (signed <=) */

loc_0014B19E: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    xmm0 = MEMF(esp + 0x18); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(ebx + 0x140);
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    /* comiss xmm0, MEMF(edx + eax + 4) - sets EFLAGS */

loc_0014B1BC: ;
    if ((xmm0 < MEMF(edx + eax + 4))) goto loc_0014B1DB; /* jb: below (unsigned <) */

loc_0014B1BE: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60019);
    eax = ebp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_0014B1D8: ;
    esp = esp + 0x1C;

loc_0014B1DB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B1F0
 * Original: 0x0014B1F0 - 0x0014B24A (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B1F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = 0xB;
    /* nop */

loc_0014B200: ;
    eax = ZX8(LO8(ebx));
    edx = MEM32(eax * 4 + 0x6B7728);
    edx = MEM32(edx * 4 + 0x7714E0);
    ecx = 0; /* xor self */

loc_0014B213: ;
    eax = edx;
    if (TEST_Z(eax, eax)) goto loc_0014B237; /* je: equal / zero */

loc_0014B219: ;
    /* nop */

loc_0014B220: ;
    if (CMP_NE(MEM32(eax + 0x3C), edi)) goto loc_0014B230; /* jne: not equal / not zero */

loc_0014B225: ;
    ebp = MEM32(eax + 0x144);
    if (CMP_EQ(MEM32(ebp + 0x48), esi)) goto loc_0014B246; /* je: equal / zero */

loc_0014B230: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0014B220; /* jne: not equal / not zero */

loc_0014B237: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_0014B213; /* jl: less (signed <) */

loc_0014B23D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), 2)) goto loc_0014B200; /* jb: below (unsigned <) */

loc_0014B244: ;
    eax = 0; /* xor self */

loc_0014B246: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B250
 * Original: 0x0014B250 - 0x0014B4CC (636 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B250: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014B263: ;
    xmm0 = xmm0 * MEMF(0x64A840); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A83C); /* addss */
    xmm0 = xmm0 * MEMF(0x64A838); /* mulss */
    xmm0 = xmm0 * MEMF(ebp + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0014B4C4; /* jbe: below or equal (unsigned <=) */

loc_0014B29F: ;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0014B2A8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = 2;
    MEM8(esp + 0x10) = LO8(eax);
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x90) = eax;
    eax = MEM32(ebp + 0x58);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x5C) = 0x303;
    MEM8(esp + 0x64) = 1;
    MEM32(esp + 0x68) = 0x6A;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x84) = 4;
    MEM32(esp + 0x90) = ecx;
    MEM16(esp + 0x16) = 0x64;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x44) = 0x1C00061;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edi);

loc_0014B342: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014B347: ;
    xmm0 = xmm0 * MEMF(0x64A834); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A830); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014B36E: ;
    xmm0 = xmm0 * MEMF(0x648FE8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6498FC); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014B38D: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014B3A8: ;
    esi = MEM32(ebp + 0x4C);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E38); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, edx);
    edi = esp + 0x30;
    ebx = esp + 0x34;
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001102D0(); /* call 0x001102D0 */

loc_0014B3DB: ;
    SET_LO8(eax, MEM8(ebp + 0x100));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), 4)) goto loc_0014B43B; /* je: equal / zero */

loc_0014B3E8: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_0014B401: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0014B43B; /* je: equal / zero */

loc_0014B408: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0014B437; /* jb: below (unsigned <) */

loc_0014B419: ;
    /* comiss xmm0, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x28))) goto loc_0014B437; /* jb: below (unsigned <) */

loc_0014B420: ;
    SET_LO8(ecx, MEM8(ebp + 0x100));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    MEM8(ebp + 0x100) = LO8(ecx);
    goto loc_0014B43D;

loc_0014B437: ;
    SET_LO8(eax, 1);
    goto loc_0014B43D;

loc_0014B43B: ;
    SET_LO8(eax, 0); /* xor self */

loc_0014B43D: ;
    eax = ZX8(LO8(eax));
    eax = eax - 0;
    if ((eax == 0)) { sub_0014B4CC(); return; } /* je: equal / zero */

loc_0014B449: ;
    eax--;
    if ((eax == 0)) goto loc_0014B4A2; /* je: equal / zero */

loc_0014B44C: ;
    eax--;
    if ((eax != 0)) goto loc_0014B4A2; /* jne: not equal / not zero */

loc_0014B44F: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    SET_LO8(eax, 0xFF);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014B46D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x5F) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x597978);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_0014B49F: ;
    esp = esp + 0x28;

loc_0014B4A2: ;
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0014B342; /* ja: above (unsigned >) */

loc_0014B4C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0014B4C4: ;
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B580
 * Original: 0x0014B580 - 0x0014B5BF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B580: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    MEM8(esp + 0x1D) = 0x19;
    MEM16(esp + 0x14) = 0x12C;
    MEM16(esp + 0x16) = 0x10;
    MEM32(esp + 0x18) = 0x11;
    MEM8(esp + 0x1C) = 3;
    MEM32(esp + 0x28) = esi;
    if (TEST_Z(esi, esi)) { sub_0014B5BF(); return; } /* je: equal / zero */

loc_0014B5B3: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 0x2C) = LO8(eax);
    g_seh_ebp = ebp; sub_0014B5C4(); return; /* tail jmp 0x0014B5C4 */

}

/**
 * sub_0014B6B0
 * Original: 0x0014B6B0 - 0x0014B6EE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014B6B0: ;
    esp = esp - 0x24;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx + 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x144);
    esi = MEM32(edi + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) { sub_0014B6EE(); return; } /* je: equal / zero */

loc_0014B6D3: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0014B6E5; /* je: equal / zero */

loc_0014B6DA: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(edx), MEM8(edi + 4))) { sub_0014B6EE(); return; } /* je: equal / zero */

loc_0014B6E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0014BAA0
 * Original: 0x0014BAA0 - 0x0014BC78 (472 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BAA0(void)
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

loc_0014BAA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    (void)0; /* cmp MEM8(ecx + 0x4C), 1 - flags set for next jcc */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x144);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x140);
    if (CMP_LE(MEM8(ecx + 0x4C), 1)) goto loc_0014BC51; /* jle: less or equal (signed <=) */

loc_0014BAC0: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    edi--;
    xmm0 = xmm5; /* movaps */
    if (((int32_t)edi >= 0)) goto loc_0014BAD0; /* jns: not sign (positive) */

loc_0014BACB: ;
    edi = ZX8(MEM8(ecx + 0x41));
    edi--;

loc_0014BAD0: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    if (CMP_EQ(edi, eax)) goto loc_0014BBD0; /* je: equal / zero */

loc_0014BADC: ;
    xmm4 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);

loc_0014BAE5: ;
    eax = edi;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_0014BAEF; /* jns: not sign (positive) */

loc_0014BAEA: ;
    edi = ZX8(MEM8(ecx + 0x41));
    edi--;

loc_0014BAEF: ;
    eax = eax + eax * 4;
    xmm1 = MEMF(ebp + eax * 8 + 0xC); /* movss */
    esi = ebp + eax * 8;
    xmm1 = xmm1 + xmm0; /* addss */
    edx = edi + edi * 4;
    xmm0 = xmm1; /* movaps */
    /* comiss xmm0, MEMF(ebx + 0x20) - sets EFLAGS */
    edx = ebp + edx * 8;
    if ((xmm0 <= MEMF(ebx + 0x20))) goto loc_0014BBC3; /* jbe: below or equal (unsigned <=) */

loc_0014BB14: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014BB8F; /* jnp: not parity */

loc_0014BB22: ;
    xmm0 = xmm0 - MEMF(ebx + 0x20); /* subss */
    xmm6 = MEMF(edx); /* movss */
    xmm2 = MEMF(edx + 8); /* movss */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edx + 4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(edx + 8) = xmm0; /* movss */
    MEMF(edx) = xmm6; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    MEMF(esi + 0xC) = xmm0; /* movss */

loc_0014BB8F: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    if (CMP_EQ(edi, edx)) goto loc_0014BBBE; /* je: equal / zero */

loc_0014BB97: ;
    eax = ZX8(MEM8(ecx + 0x41));
    goto loc_0014BBA0;

    /* nop */

loc_0014BBA0: ;
    SET_LO8(edx, MEM8(ecx + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ecx + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_0014BBB3; /* jne: not equal / not zero */

loc_0014BBAF: ;
    MEM8(ecx + 0x4D) = 0;

loc_0014BBB3: ;
    MEM8(ecx + 0x4C) = MEM8(ecx + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    if (CMP_NE(edi, edx)) goto loc_0014BBA0; /* jne: not equal / not zero */

loc_0014BBBE: ;
    xmm0 = MEMF(ebx + 0x20); /* movss */

loc_0014BBC3: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    if (CMP_NE(edi, eax)) goto loc_0014BAE5; /* jne: not equal / not zero */

loc_0014BBCF: ;
    POP32(esp, esi);

loc_0014BBD0: ;
    (void)0; /* cmp MEM8(ecx + 0x4C), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_LE(MEM8(ecx + 0x4C), 1)) goto loc_0014BC51; /* jle: less or equal (signed <=) */

loc_0014BBD7: ;
    xmm1 = MEMF(ebx + 0x24); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    xmm2 = MEMF(0x64961C); /* movss */
    xmm3 = MEMF(0x649618); /* movss */
    xmm0 = xmm5; /* movaps */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    /* nop */

loc_0014BC00: ;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0014BC08; /* jns: not sign (positive) */

loc_0014BC03: ;
    eax = ZX8(MEM8(ecx + 0x41));
    eax--;

loc_0014BC08: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = eax + eax * 4;
    /* FPU: fsin  */
    xmm4 = MEMF(ebp + edx * 8 + 0xC); /* movss */
    edx = ebp + edx * 8;
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm4 = MEMF(edx + 0xC); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = xmm4; /* movaps */
    MEMF(esp + 8) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(edx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    if (CMP_NE(eax, edx)) goto loc_0014BC00; /* jne: not equal / not zero */

loc_0014BC51: ;
    xmm1 = MEMF(ebx + 0x24); /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x649614); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    POP32(esp, ebp);
    MEMF(ebx + 0x24) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014BC80
 * Original: 0x0014BC80 - 0x0014C861 (3041 bytes, 661 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014BC80: ;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14C);
    SET_LO8(eax, MEM8(ebx + 0x4C));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_L(LO8(eax), 2)) goto loc_0014C858; /* jl: less (signed <) */

loc_0014BCA0: ;
    eax = MEM32(ebx + 0x140);
    ecx = MEM32(ebx + 0x144);
    MEM32(esp + 0xD0) = eax;
    if (CMP_EQ(MEM32(ecx), ebp)) goto loc_0014C858; /* je: equal / zero */

loc_0014BCBB: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax = eax + 5;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x168);
    ecx = ebx + 0x130;
    PUSH32(esp, 0); sub_00112680(); /* call 0x00112680 */

loc_0014BCE0: ;
    SET_LO8(eax, MEM8(0x75CF84));
    esp = esp + 0xC;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0014BD80; /* jbe: below or equal (unsigned <=) */

loc_0014BCF0: ;
    edi = MEM32(0x75CF80);
    if (CMP_NE(MEM32(edi + 8), ebp)) goto loc_0014BD23; /* jne: not equal / not zero */

loc_0014BCFB: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0014BD0C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0014BD14: ;
    edx = MEM32(0x75CF80);
    MEM32(edx + 8) = eax;
    edi = MEM32(0x75CF80);

loc_0014BD23: ;
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_0014BD4B; /* jne: not equal / not zero */

loc_0014BD28: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0014BD30: ;
    MEM32(edi + 0x10) = eax;
    edi = MEM32(0x75CF80);
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_0014BD4B; /* jne: not equal / not zero */

loc_0014BD3E: ;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    edi = MEM32(0x75CF80);

loc_0014BD4B: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0014BD74; /* jne: not equal / not zero */

loc_0014BD53: ;
    ecx = MEM32(edi + 4);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    eax = edi + 4;
    if (CMP_NE(ecx, ebp)) goto loc_0014BD6F; /* jne: not equal / not zero */

loc_0014BD5D: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0014BD66: ;
    edi = MEM32(0x75CF80);
    esp = esp + 8;

loc_0014BD6F: ;
    esi = MEM32(edi + 4);
    goto loc_0014BD7C;

loc_0014BD74: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0014BD79: ;
    esi = MEM32(eax + 4);

loc_0014BD7C: ;
    if (CMP_NE(esi, ebp)) goto loc_0014BD90; /* jne: not equal / not zero */

loc_0014BD80: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0014BD88: ;
    MEM32(0x771764) = ebp;
    goto loc_0014BDA7;

loc_0014BD90: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_0014BDAD; /* je: equal / zero */

loc_0014BD98: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0014BDA1: ;
    MEM32(0x771764) = esi;

loc_0014BDA7: ;
    edi = MEM32(0x75CF80);

loc_0014BDAD: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_0014BDB4: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x75CF84));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0014BE4B; /* jbe: below or equal (unsigned <=) */

loc_0014BDC3: ;
    if (CMP_NE(MEM32(edi + 8), ebp)) goto loc_0014BDF0; /* jne: not equal / not zero */

loc_0014BDC8: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0014BDD9: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0014BDE1: ;
    edx = MEM32(0x75CF80);
    MEM32(edx + 8) = eax;
    edi = MEM32(0x75CF80);

loc_0014BDF0: ;
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_0014BE18; /* jne: not equal / not zero */

loc_0014BDF5: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0014BDFD: ;
    MEM32(edi + 0x10) = eax;
    edi = MEM32(0x75CF80);
    if (CMP_NE(MEM32(edi + 0x10), ebp)) goto loc_0014BE18; /* jne: not equal / not zero */

loc_0014BE0B: ;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    edi = MEM32(0x75CF80);

loc_0014BE18: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0014BE41; /* jne: not equal / not zero */

loc_0014BE20: ;
    ecx = MEM32(edi + 4);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    eax = edi + 4;
    if (CMP_NE(ecx, ebp)) goto loc_0014BE3C; /* jne: not equal / not zero */

loc_0014BE2A: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0014BE33: ;
    edi = MEM32(0x75CF80);
    esp = esp + 8;

loc_0014BE3C: ;
    edi = MEM32(edi + 4);
    goto loc_0014BE4D;

loc_0014BE41: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0014BE46: ;
    edi = MEM32(eax + 4);
    goto loc_0014BE4D;

loc_0014BE4B: ;
    edi = 0; /* xor self */

loc_0014BE4D: ;
    if (CMP_EQ(MEM32(esi + 0x3838), edi)) goto loc_0014BE60; /* je: equal / zero */

loc_0014BE55: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0014BE5A: ;
    MEM32(esi + 0x3838) = edi;

loc_0014BE60: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0014BE6C; /* jns: not sign (positive) */

loc_0014BE67: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_0014BE6C: ;
    ebp = eax + -1;
    if (CMP_GE(ebp & ebp, 0)) goto loc_0014BE78; /* jge: greater or equal (signed >=) */

loc_0014BE73: ;
    ebp = ZX8(MEM8(ebx + 0x41));
    ebp--;

loc_0014BE78: ;
    ecx = MEM32(esp + 0xD8);
    xmm2 = MEMF(0x648D10); /* movss */
    edx = eax + eax * 4;
    xmm0 = MEMF(ecx + edx * 8 + 0x14); /* movss */
    xmm1 = MEMF(ecx + edx * 8 + 0x20); /* movss */
    xmm5 = MEMF(ecx + edx * 8 + 0x24); /* movss */
    eax = ecx + edx * 8;
    edx = eax;
    edi = MEM32(edx);
    MEM32(esp + 0xB0) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm6 = MEMF(esp + 0xB0); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    MEM32(esp + 0xB8) = edx;
    eax = ebp + ebp * 4;
    xmm3 = MEMF(ecx + eax * 8 + 0x20); /* movss */
    xmm4 = MEMF(ecx + eax * 8 + 0x24); /* movss */
    eax = ecx + eax * 8;
    xmm7 = MEMF(esp + 0xB8); /* movss */
    ecx = eax;
    edx = MEM32(ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEM32(esp + 0xC4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEM32(esp + 0xBC) = edx;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEM32(esp + 0xCC) = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm6; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0xC0) = eax;
    edx = SX16(LO16(ecx));
    MEM32(esp + 0xB4) = edi;
    edi = MEM32(esp + 0x14);
    eax = (int32_t)MEMF(esp + 0xB4); /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC0); /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 + xmm7; /* addss */
    edx = (int32_t)xmm5; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 8) = xmm5; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm5 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(edi); /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    xmm5 = MEMF(0x649610); /* movss */
    SET_LO8(ebx, 0xFF);
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(ebx);
    MEMF(edi + 0x10) = xmm5; /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x14) = xmm5; /* movss */
    MEMF(esp + 0xD0) = xmm3; /* movss */
    MEMF(esp + 0xD4) = xmm4; /* movss */
    MEM16(edi + 0x18) = 0;
    xmm6 = xmm6 - xmm0; /* subss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    edi = edi + 0x1C;
    xmm7 = xmm7 - xmm1; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    eax = (int32_t)xmm7; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm6 = MEMF(edi); /* movss */
    edx = esp + 0x38;
    eax = esp + 0x20;
    ecx = esp + 0x68;
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm6 = MEMF(0x649610); /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    edx = esp + 0x44;
    eax = esp + 0x2C;
    MEM8(edi + 0xF) = LO8(ebx);
    MEM32(esp + 0xE4) = edx;
    edx = eax;
    MEMF(edi + 0x10) = xmm5; /* movss */
    ecx = esp + 0x5C;
    MEMF(edi + 0x14) = xmm5; /* movss */
    MEM32(esp + 0x11C) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xE0) = edx;
    eax = esp + 0x20;
    ecx = esp + 0x50;
    edx = esp + 0x44;
    MEM16(edi + 0x18) = 0;
    edi = edi + 0x1C;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x120) = edx;
    eax = esp + 0x38;
    ecx = esp + 0x74;
    edx = edi + -112;
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_0014C154;

loc_0014C12F: ;
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 0xD4); /* movss */
    xmm3 = MEMF(esp + 0xD0); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D10); /* movss */
    SET_LO8(ebx, 0xFF);

loc_0014C154: ;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    xmm1 = MEMF(esp + 0xC4); /* movss */
    edx = (int32_t)MEMF(esp + 0xC8); /* cvttss2si */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC0); /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0xCC); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x18);
    MEMF(edi + 4) = xmm3; /* movss */
    edx = SX16(LO16(ecx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm2; /* movss */
    xmm4 = MEMF(edi + 4); /* movss */
    xmm7 = MEMF(edi); /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(0x649610); /* movss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(ebx);
    MEMF(edi + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC4); /* movss */
    MEMF(edi + 0x14) = xmm6; /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEM16(edi + 0x18) = 0;
    eax = eax + 0x1C;
    MEM32(esp + 0x18) = eax;
    eax = (int32_t)xmm2; /* cvttss2si */
    edi = edi + 0x1C;
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEMF(edi + 4) = xmm3; /* movss */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm2 = MEMF(edi); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x11C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xE4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x108);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xE0);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x118);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0xF8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x120);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xE8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(ebx);
    MEMF(edi + 0x10) = xmm5; /* movss */
    MEMF(edi + 0x14) = xmm6; /* movss */
    MEM16(edi + 0x18) = 0;
    ecx = ecx + 0x1C;
    edi = edi + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014C468; /* je: equal / zero */

loc_0014C32D: ;
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0xB0) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x68); /* movss */
    ecx = MEM32(esp + 0xB0);
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x78); /* movss */
    eax = MEM32(esp + 0xB8);
    MEMF(esp + 0xB4) = xmm6; /* movss */
    edx = MEM32(esp + 0xB4);
    xmm6 = xmm2; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    MEMF(esp + 0xEC) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x74); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEM32(esp + 0x88) = eax;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0xF4) = xmm2; /* movss */
    eax = MEM32(esp + 0xF4);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(esp + 0xEC);
    MEM32(esp + 0x84) = edx;
    MEMF(esp + 0xF0) = xmm0; /* movss */
    edx = MEM32(esp + 0xF0);
    eax = esp + 0x80;
    ebx = eax;
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x90) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0014C455: ;
    eax = esp + 0x8C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0014C463: ;
    MEM8(esp + 0x13) = 0;

loc_0014C468: ;
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0xFC) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x5C); /* movss */
    ecx = MEM32(esp + 0xFC);
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x104) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x78); /* movss */
    eax = MEM32(esp + 0x104);
    MEMF(esp + 0x100) = xmm6; /* movss */
    edx = MEM32(esp + 0x100);
    xmm6 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    MEMF(esp + 0x10C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x74); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEM32(esp + 0xA0) = eax;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x114) = xmm2; /* movss */
    eax = MEM32(esp + 0x114);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0x98) = ecx;
    ecx = MEM32(esp + 0x10C);
    MEM32(esp + 0x9C) = edx;
    MEMF(esp + 0x110) = xmm0; /* movss */
    edx = MEM32(esp + 0x110);
    eax = esp + 0x98;
    ebx = eax;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0014C590: ;
    eax = esp + 0xA4;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0014C59E: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_0013BD20(); /* call 0x0013BD20 */

loc_0014C5B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014C5C6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014C5D3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x80); /* subss */
    MEMF(esp + 0x124) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x84); /* subss */
    MEMF(esp + 0x128) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x88); /* subss */
    MEMF(esp + 0x12C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x8C); /* subss */
    MEMF(esp + 0x130) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x90); /* subss */
    MEMF(esp + 0x134) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x94); /* subss */
    MEMF(esp + 0x138) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x98); /* subss */
    MEMF(esp + 0x13C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x9C); /* subss */
    MEMF(esp + 0x140) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0xA0); /* subss */
    MEMF(esp + 0x144) = xmm1; /* movss */
    PUSH32(esp, 0xFF);
    edx = esp + 0x128;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0xA8); /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x150) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0xB0); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0xB4); /* subss */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = ebx;
    MEMF(esp + 0x15C) = xmm1; /* movss */
    MEMF(esp + 0x160) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013BD20(); /* call 0x0013BD20 */

loc_0014C6E6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014C6F3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014C700: ;
    ecx = ebp;
    ebp--;
    if (((int32_t)ebp >= 0)) goto loc_0014C711; /* jns: not sign (positive) */

loc_0014C705: ;
    eax = MEM32(esp + 0x158);
    ebp = ZX8(MEM8(eax + 0x41));
    ebp--;

loc_0014C711: ;
    edx = MEM32(esp + 0x158);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x4D);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0xDC) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_0014C83A; /* je: equal / zero */

loc_0014C72B: ;
    eax = MEM32(esp + 0x98);
    edx = MEM32(esp + 0x9C);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0xA0);
    MEM32(esp + 0x88) = eax;
    eax = MEM32(esp + 0xA8);
    MEM32(esp + 0x84) = edx;
    edx = MEM32(esp + 0xA4);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x8C) = edx;
    edx = MEM32(esp + 0xAC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0xD8);
    MEM32(esp + 0x6C) = edx;
    edx = ebp + ebp * 4;
    xmm0 = MEMF(eax + edx * 8 + 0x14); /* movss */
    xmm1 = MEMF(eax + edx * 8 + 0x20); /* movss */
    eax = eax + edx * 8;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0xC4) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    MEM32(esp + 0xCC) = edx;
    edx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0xC0) = eax;
    eax = MEM32(esp + 0xDC);
    MEM32(esp + 0xC8) = ebx;
    MEMF(esp + 0xD4) = xmm1; /* movss */
    MEM32(esp + 0xBC) = edx;

loc_0014C83A: ;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x649610); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0014C12F; /* jne: not equal / not zero */

loc_0014C856: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0014C858: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_0014C870
 * Original: 0x0014C870 - 0x0014C896 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014C870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0014C895; /* je: equal / zero */

loc_0014C87F: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0014C891: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0014C895: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014C8A0
 * Original: 0x0014C8A0 - 0x0014CA44 (420 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C8A0(void)
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

loc_0014C8A0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x564);
    if (TEST_Z(esi, esi)) goto loc_0014CA3F; /* je: equal / zero */

loc_0014C8B2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014C8B7: ;
    xmm1 = MEMF(0x64A99C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0014CA3F; /* jbe: below or equal (unsigned <=) */

loc_0014C8C8: ;
    ecx = ZX8(MEM8(esi + 0x2A8));
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    xmm5 = MEMF(ecx + edx + 0x3BC); /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    esi = ecx + edx;
    if ((xmm5 <= xmm0)) goto loc_0014C8FD; /* jbe: below or equal (unsigned <=) */

loc_0014C8F4: ;
    xmm5 = xmm5 - xmm0; /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_0014C8F4; /* ja: above (unsigned >) */

loc_0014C8FD: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_0014C90E; /* jbe: below or equal (unsigned <=) */

loc_0014C905: ;
    xmm5 = xmm5 + xmm0; /* addss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 > xmm5)) goto loc_0014C905; /* ja: above (unsigned >) */

loc_0014C90E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014C914: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm5 = xmm5 - MEMF(0x6490B8); /* subss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014C93B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsin  */
    xmm0 = xmm0 * MEMF(0x6493C0); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = esp + 0x1C;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esi + 0x330] */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esi + 0x338] */
    esi = 0x774B60;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0014C994: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014CA3E; /* je: equal / zero */

loc_0014C99F: ;
    xmm0 = MEMF(0x774B60); /* movss */
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014C9C8: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014C9EF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0014CA3D; /* je: equal / zero */

loc_0014C9F6: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x20;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ecx;

loc_0014CA3D: ;
    POP32(esp, ebx);

loc_0014CA3E: ;
    POP32(esp, edi);

loc_0014CA3F: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014CA50
 * Original: 0x0014CA50 - 0x0014CD6E (798 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CA50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_0014CA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0014CD67; /* je: equal / zero */

loc_0014CA71: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_0014CD67; /* je: equal / zero */

loc_0014CA81: ;
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D5828);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0014CA93: ;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    edx = esp + 0x70;
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_0014CACB: ;
    xmm0 = MEMF(0x64ADF4); /* movss */
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM32(esp + 0x94) = edx;
    edx = esp + 0x198;
    MEM32(esp + 0x90) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, edx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x5D5828);
    MEM32(esp + 0x54) = 0x6F;
    MEM32(esp + 0x58) = 0x70;
    MEM32(esp + 0x5C) = 0x71;
    MEM32(esp + 0x60) = 0x72;
    MEM32(esp + 0x64) = 0x73;
    MEM32(esp + 0x68) = 0x74;
    MEM32(esp + 0x6C) = 0x75;
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEM32(esp + 0xA0) = eax;
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEM8(esp + 0xFC) = 0;
    MEM32(esp + 0x100) = edi;
    MEM8(esp + 0x104) = 0xFF;
    MEM32(esp + 0x10C) = edi;
    MEM32(esp + 0x114) = edi;
    MEM32(esp + 0x118) = edi;
    MEM32(esp + 0x11C) = edi;
    MEM32(esp + 0x120) = 0x13E6E0;
    MEM8(esp + 0x12C) = 1;
    MEM32(esp + 0x130) = esi;
    MEM8(esp + 0x134) = LO8(ecx);
    MEM16(esp + 0x136) = 0xC;
    MEM16(esp + 0x138) = 0x15;
    MEM32(esp + 0xF0) = 0x39E9;
    MEM32(esp + 0x108) = 0x13EDB0;
    MEM32(esp + 0x124) = 0x13EC40;
    MEM32(esp + 0x110) = 0x13F480;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0014CC43: ;
    esp = esp + 0x30;
    ebx = 0x5978A8;
    esi = esp + 0x24;
    MEM32(esp + 0x14) = 7;
    goto loc_0014CC60;

    /* nop */

loc_0014CC60: ;
    eax = MEM32(esi);
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0xD4) = eax;
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0014CC7F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014CC84: ;
    xmm0 = xmm0 * MEMF(0x64B0A4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64B0A0); /* addss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014CCA1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014CCB2: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0xB0;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0014CCC4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014CCC9: ;
    xmm5 = MEMF(0x64B09C); /* movss */
    xmm6 = MEMF(0x64B098); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014CCEF: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014CD05: ;
    xmm0 = xmm0 * MEMF(0x64B094); /* mulss */
    xmm0 = xmm0 - MEMF(0x64B090); /* subss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014CD23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    eax = esp + 0x68;
    edx = edx + 0x64;
    MEM32(esp + 0xD4) = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0014CD4F: ;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x2C;
    esi = esi + 4;
    ebx = ebx + 0xC;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0014CC60; /* jne: not equal / not zero */

loc_0014CD67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014CD70
 * Original: 0x0014CD70 - 0x0014CE2A (186 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CD70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0014CD70: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esi + 0x264); /* movss */
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = xmm0 + MEMF(esi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM8(esp + 4) = LO8(eax);
    MEMF(esp + 8) = xmm0; /* movss */
    MEM8(esp + 0xD) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014CDA4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x14) = LO8(edx);
    SET_LO16(edx, MEM16(esi + 0xA4));
    MEM16(esp + 0xE) = LO16(edx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014CDCF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0014CE26; /* je: equal / zero */

loc_0014CDD6: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x61;
    MEM8(eax + 0x3A) = 4;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x31;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_0014CE26: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014CE30
 * Original: 0x0014CE30 - 0x0014CE51 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CE30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0014CE30: ;
    eax = MEM32(esp + 4);
    ecx = ZX16(MEM16(eax + 0x52));
    edx = MEM32(eax + 0x4C);
    if (CMP_EQ(ecx, MEM32(edx + 0xA4))) goto loc_0014CE50; /* je: equal / zero */

loc_0014CE43: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_0014CE50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014CE60
 * Original: 0x0014CE60 - 0x0014D436 (1494 bytes, 366 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CE60(void)
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

loc_0014CE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(eax, eax)) goto loc_0014D422; /* je: equal / zero */

loc_0014CE88: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) goto loc_0014D422; /* jne: not equal / not zero */

loc_0014CE97: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0014D42F; /* je: equal / zero */

loc_0014CEA5: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x310);
    ecx = ebx + 0x3C;
    PUSH32(esp, 0); sub_00112680(); /* call 0x00112680 */

loc_0014CEBC: ;
    edi = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    if (TEST_Z(edi, edi)) goto loc_0014D42F; /* je: equal / zero */

loc_0014CECB: ;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F0C84);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0014CEDD: ;
    eax = esp + 0x88;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebx + 0x59));
    ecx = esp + 0x3C;
    edx = eax + eax * 2;
    PUSH32(esp, ecx);
    eax = edx * 4 + 0x5978FC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0014CEFE: ;
    edx = ZX8(MEM8(ebx + 0x59));
    eax = MEM32(edx * 4 + 0x6B70FC);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0014CF17: ;
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x597914);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0014CF31: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    ebx = eax + ecx + 0x330;
    esp = esp + 0x28;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_0014CF52: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    eax = 0x7F;
    PUSH32(esp, 0); sub_0013C360(); /* call 0x0013C360 */

loc_0014CF61: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_0014CFA1: ;
    xmm4 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(esp + 0x54); /* movss */
    xmm7 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    xmm1 = xmm1 - MEMF(ebx + 4); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    xmm3 = xmm3 - MEMF(ebx + 8); /* subss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x34); /* addss */
    xmm2 = xmm2 - MEMF(ebx); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0014D078; /* jp: parity */

loc_0014D064: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    goto loc_0014D0AC;

loc_0014D078: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0014D0AC: ;
    xmm1 = MEMF(0x6491FC); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0014D0ED; /* jbe: below or equal (unsigned <=) */

loc_0014D0E5: ;
    MEMF(esp + 0x24) = xmm2; /* movss */
    goto loc_0014D11E;

loc_0014D0ED: ;
    xmm3 = MEMF(0x6490B4); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0014D110; /* jbe: below or equal (unsigned <=) */

loc_0014D0FA: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649418); /* mulss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    goto loc_0014D118;

loc_0014D110: ;
    xmm0 = MEMF(0x649228); /* movss */

loc_0014D118: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0014D11E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x60) = ecx;
    xmm3 = MEMF(esp + 0x60); /* movss */
    MEM32(esp + 0x64) = edx;
    xmm4 = MEMF(esp + 0x64); /* movss */
    MEM32(esp + 0x68) = eax;
    xmm5 = MEMF(esp + 0x68); /* movss */
    xmm6 = xmm2; /* movaps */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEM32(esp + 0x28) = 6;
    ebx = 0xFF;

loc_0014D164: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = edi + 0x1C;
    /* FPU: fsin  */
    edi = edi + 0x1C;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    xmm2 = xmm2 + xmm3; /* addss */
    /* FPU: fsin  */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -56) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    eax = (int32_t)xmm7; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + -52) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 + xmm5; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + -48) = xmm7; /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEM8(edi + -44) = LO8(ebx);
    MEM8(edi + -43) = LO8(ebx);
    MEM8(edi + -42) = LO8(ebx);
    MEM8(edi + -41) = LO8(ebx);
    MEMF(edi + -40) = xmm7; /* movss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -36) = xmm6; /* movss */
    eax = (int32_t)xmm7; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + -28) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + -24) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -20) = xmm0; /* movss */
    xmm0 = MEMF(0x64B2D4); /* movss */
    MEM8(edi + -16) = LO8(ebx);
    MEM8(edi + -15) = LO8(ebx);
    MEM8(edi + -14) = LO8(ebx);
    MEM8(edi + -13) = LO8(ebx);
    MEMF(edi + -12) = xmm0; /* movss */
    MEMF(edi + -8) = xmm6; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x40); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm7 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x5C) = xmm6; /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    edx = (int32_t)xmm6; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    xmm6 = xmm6 - xmm2; /* subss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm6; /* movss */
    xmm6 = MEMF(0x64B2D4); /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(ebx);
    MEMF(edi + 0x10) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    xmm6 = xmm6 + MEMF(0x64B2D0); /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = (int32_t)xmm6; /* cvttss2si */
    ecx = SX16(LO16(eax));
    edi = edi + 0x1C;
    eax = SX16(LO16(edx));
    MEMF(esp + 0x6C) = xmm6; /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + -8) = xmm6; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x44); /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 + xmm7; /* addss */
    eax = (int32_t)xmm2; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(ebx);
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm6; /* movss */
    edi = edi + 0x1C;
    PUSH32(esp, ebx);
    edx = edi + -112;
    PUSH32(esp, edx);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_0014D3C8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014D3D5: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014D3E2: ;
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm6 = MEMF(esp + 0x6C); /* movss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm4 = MEMF(esp + 0x5C); /* movss */
    xmm5 = MEMF(esp + 0x58); /* movss */
    eax--;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEM32(esp + 0x28) = eax;
    if ((eax != 0)) goto loc_0014D164; /* jne: not equal / not zero */

loc_0014D41B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0014D422: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */

loc_0014D42F: ;
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
 * sub_0014D440
 * Original: 0x0014D440 - 0x0014D482 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D440(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014D440: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_0014D482(); return; } /* je: equal / zero */

loc_0014D44D: ;
    if (CMP_EQ(eax, 0x18)) { sub_0014D482(); return; } /* je: equal / zero */

loc_0014D452: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0014D470; /* jne: not equal / not zero */

loc_0014D457: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0014D472; /* jne: not equal / not zero */

loc_0014D464: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);

loc_0014D470: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014D472: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0014D470; /* jne: not equal / not zero */

loc_0014D477: ;
    MEM32(esi + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4D0
 * Original: 0x0014D4D0 - 0x0014D507 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D4D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014D4D0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x170);
    if (TEST_Z(esi, esi)) goto loc_0014D505; /* je: equal / zero */

loc_0014D4DB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D505; /* jne: not equal / not zero */

loc_0014D4E4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0014D4EB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0014D505; /* jl: less (signed <) */

loc_0014D4F2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0014D507(); return; } /* je: equal / zero */

loc_0014D4FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0014D502: ;
    esp = esp + 4;

loc_0014D505: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D550
 * Original: 0x0014D550 - 0x0014D567 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D550(void)
{

loc_0014D550: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0014D4D0(); /* call 0x0014D4D0 */

loc_0014D55C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0014D562: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D570
 * Original: 0x0014D570 - 0x0014D653 (227 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0014D570: ;
    esp = esp - 0x38;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    MEM8(esp + 4) = LO8(ecx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x597938), _icall_esp); /* indirect call */
    }

loc_0014D599: ;
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D14);
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x595D1C);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D5BD; /* jne: not equal / not zero */

loc_0014D5B1: ;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;

loc_0014D5BD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x2A);
    eax = 0x84;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014D600: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0014D64E; /* je: equal / zero */

loc_0014D607: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x5F;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x48;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xE;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0014D64E: ;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D660
 * Original: 0x0014D660 - 0x0014D68E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D660(void)
{
    float xmm0;

loc_0014D660: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x78);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    xmm0 = MEMF(eax + 0x294); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D690
 * Original: 0x0014D690 - 0x0014D6A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D690(void)
{

loc_0014D690: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0014D6D0(); /* call 0x0014D6D0 */

loc_0014D6A0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D6B0
 * Original: 0x0014D6B0 - 0x0014D6C4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D6B0(void)
{

loc_0014D6B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0014D6D0(); /* call 0x0014D6D0 */

loc_0014D6C0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D6D0
 * Original: 0x0014D6D0 - 0x0014D6ED (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0014D6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    if (TEST_NZ(eax, eax)) { sub_0014D6ED(); return; } /* jne: not equal / not zero */

loc_0014D6E6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D730
 * Original: 0x0014D730 - 0x0014D88A (346 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D730: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebp = MEM32(esi + 0x4C);
    eax = MEM32(ebp + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(eax, eax)) { sub_0014D88A(); return; } /* je: equal / zero */

loc_0014D74C: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x50))) { sub_0014D88A(); return; } /* jne: not equal / not zero */

loc_0014D75B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x64;
    ebx = esi + 0x58;
    ecx = edi;
    eax = MEM32(ecx);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = ZX8(MEM8(esi + 0x80));
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x597938), _icall_esp); /* indirect call */
    }

loc_0014D787: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D7A7; /* jne: not equal / not zero */

loc_0014D78E: ;
    eax = ebx;
    edx = MEM32(eax);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    MEM8(esp + 0x1C) = 1;

loc_0014D7A7: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    eax = esi + 0x70;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x5C); /* subss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x60); /* subss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    edx = MEM32(esp + 0x10);
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x298);
    ecx = ecx & 0x1F;
    /* comiss xmm0, MEMF(0x64925C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x64925C))) goto loc_0014D866; /* ja: above (unsigned >) */

loc_0014D822: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0014D866; /* jae: above or equal (unsigned >=) */

loc_0014D82A: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0014D866; /* jp: parity */

loc_0014D83B: ;
    SET_LO8(eax, MEM8(ebp + 0x1B5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014D866; /* jne: not equal / not zero */

loc_0014D845: ;
    if (CMP_EQ(ecx, 0xD)) goto loc_0014D866; /* je: equal / zero */

loc_0014D84A: ;
    if (CMP_EQ(ecx, 2)) goto loc_0014D866; /* je: equal / zero */

loc_0014D84F: ;
    if (CMP_EQ(ecx, 9)) goto loc_0014D866; /* je: equal / zero */

loc_0014D854: ;
    if (CMP_EQ(ecx, 1)) goto loc_0014D866; /* je: equal / zero */

loc_0014D859: ;
    if (CMP_EQ(ecx, 8)) goto loc_0014D866; /* je: equal / zero */

loc_0014D85E: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D874; /* je: equal / zero */

loc_0014D866: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_0014D960(); return; /* tail jmp 0x0014D960 */

loc_0014D874: ;
    eax = MEM32(esi + 0x54);
    if (TEST_NZ(eax, eax)) goto loc_0014D882; /* jne: not equal / not zero */

loc_0014D87B: ;
    ebx = esi;
    PUSH32(esp, 0); sub_0014D9A0(); /* call 0x0014D9A0 */

loc_0014D882: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D8A0
 * Original: 0x0014D8A0 - 0x0014D8FF (95 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    if (TEST_Z(eax, eax)) goto loc_0014D8E1; /* je: equal / zero */

loc_0014D8AC: ;
    ecx = MEM32(eax + 0x144);
    MEM8(eax + 0x50) = 0;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xFD;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 8;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 1;
    eax = MEM32(esi + 0x54);
    MEM16(eax + 0x38) = 0x28;
    MEM32(ecx) = 0;
    MEM32(esi + 0x54) = 0;

loc_0014D8E1: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0014D8E9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0014D8FF(); return; } /* jne: not equal / not zero */

loc_0014D8F2: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}
