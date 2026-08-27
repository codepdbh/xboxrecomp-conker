/**
 * Burnout 3 - Recompiled code chunk 6
 * Functions: 250 (0x0007E430 - 0x000964D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0007E430
 * Original: 0x0007E430 - 0x0007E484 (84 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E430(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_0007E43A: ;
    esi = 0; /* xor self */
    edi = eax;
    esp = esp - 0x30;
    eax = esp;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = esi;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00082D00(); /* call 0x00082D00 */

loc_0007E467: ;
    if (CMP_LE(ebx, esi)) goto loc_0007E480; /* jle: less or equal (signed <=) */

loc_0007E46B: ;
    goto loc_0007E470;

    /* nop */

loc_0007E470: ;
    ecx = MEM32(edi + 4);
    ecx = ecx + esi;
    PUSH32(esp, 0); sub_000843B0(); /* call 0x000843B0 */

loc_0007E47A: ;
    esi = esi + 0x30;
    ebx--;
    if ((ebx != 0)) goto loc_0007E470; /* jne: not equal / not zero */

loc_0007E480: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E490
 * Original: 0x0007E490 - 0x0007E4B3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E490(void)
{

loc_0007E490: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_0007E498: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    esi = esi + esi * 2;
    esi = esi << 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = esi + edx;
    PUSH32(esp, 0); sub_00084430(); /* call 0x00084430 */

loc_0007E4B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E4C0
 * Original: 0x0007E4C0 - 0x0007E4DA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E4C0(void)
{

loc_0007E4C0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_0007E4C8: ;
    ecx = MEM32(eax + 4);
    esi = esi + esi * 2;
    esi = esi << 4;
    esi = esi + ecx;
    PUSH32(esp, 0); sub_00084590(); /* call 0x00084590 */

loc_0007E4D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E4E0
 * Original: 0x0007E4E0 - 0x0007E4FC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E4E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E4E0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 0x24));
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_0007E501(); return; /* tail jmp 0x0007E501 */

}

/**
 * sub_0007E970
 * Original: 0x0007E970 - 0x0007EB4A (474 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E970(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E970: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_GE(MEM32(esi + 0x64), 0x46)) goto loc_0007EB45; /* jge: greater or equal (signed >=) */

loc_0007E980: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    if (CMP_NE(LO8(eax), 5)) goto loc_0007E9C0; /* jne: not equal / not zero */

loc_0007E98A: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000808F0(); /* call 0x000808F0 */

loc_0007E992: ;
    SET_LO8(eax, MEM8(esi + 0x543));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007E9AD; /* jne: not equal / not zero */

loc_0007E99F: ;
    SET_LO8(ecx, MEM8(esi + 0x544));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EB45; /* je: equal / zero */

loc_0007E9AD: ;
    SET_LO8(ecx, MEM8(esi + 0x544));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esi + 0x16E) = MEM8(esi + 0x16E) | LO8(ecx);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0007E9C0: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_0007E9D4; /* je: equal / zero */

loc_0007E9C9: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0007E9DE; /* jne: not equal / not zero */

loc_0007E9CD: ;
    MEM8(esi + 0x16E) = MEM8(esi + 0x16E) | 0xF;

loc_0007E9D4: ;
    PUSH32(esp, 0); sub_00081660(); /* call 0x00081660 */

loc_0007E9D9: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0007E9DE: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0007E9F3; /* jne: not equal / not zero */

loc_0007E9E2: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0007F160(); /* call 0x0007F160 */

loc_0007E9E9: ;
    PUSH32(esp, 0); sub_00081660(); /* call 0x00081660 */

loc_0007E9EE: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0007E9F3: ;
    SET_LO8(eax, MEM8(esi + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007EA04; /* je: equal / zero */

loc_0007E9FD: ;
    eax = esi;
    PUSH32(esp, 0); sub_00081D20(); /* call 0x00081D20 */

loc_0007EA04: ;
    SET_LO8(eax, MEM8(esi + 0x64C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007EA60; /* je: equal / zero */

loc_0007EA0E: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x64C) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007EA60; /* je: equal / zero */

loc_0007EA1F: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = eax + ecx + -1744;
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_002E62B0(); /* call 0x002E62B0 */

loc_0007EA42: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007EA60; /* je: equal / zero */

loc_0007EA49: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = esi + 0x78;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0007EA60: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000808F0(); /* call 0x000808F0 */

loc_0007EA68: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007EA7B; /* jne: not equal / not zero */

loc_0007EA74: ;
    eax = ebx;
    PUSH32(esp, 0); sub_002C5B50(); /* call 0x002C5B50 */

loc_0007EA7B: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0007EB45; /* je: equal / zero */

loc_0007EA86: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0008C960(); /* call 0x0008C960 */

loc_0007EA8E: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_0007EAA1; /* jne: not equal / not zero */

loc_0007EA98: ;
    MEM8(esi + 0x3FC) = 2;
    goto loc_0007EAC4;

loc_0007EAA1: ;
    SET_LO8(edx, MEM8(esi + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_0007EABD; /* je: equal / zero */

loc_0007EAAF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00087BC0(); /* call 0x00087BC0 */

loc_0007EAB6: ;
    eax = esi;
    PUSH32(esp, 0); sub_0008CDF0(); /* call 0x0008CDF0 */

loc_0007EABD: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C5C60(); /* call 0x002C5C60 */

loc_0007EAC4: ;
    if (CMP_GE(ebx, 0x14)) goto loc_0007EAE1; /* jge: greater or equal (signed >=) */

loc_0007EAC9: ;
    eax = ebx;
    eax = eax << 4;
    SET_LO8(ecx, MEM8(eax + 0x7707B7));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EAE1; /* je: equal / zero */

loc_0007EAD8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000883A0(); /* call 0x000883A0 */

loc_0007EADE: ;
    esp = esp + 4;

loc_0007EAE1: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0007EB44; /* je: equal / zero */

loc_0007EAE8: ;
    eax = esi;
    PUSH32(esp, 0); sub_000817D0(); /* call 0x000817D0 */

loc_0007EAEF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00081A30(); /* call 0x00081A30 */

loc_0007EAF6: ;
    SET_LO8(eax, MEM8(esi + 0x1AC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007EB07; /* je: equal / zero */

loc_0007EB00: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00081310(); /* call 0x00081310 */

loc_0007EB07: ;
    eax = MEM32(esi + 0x46C);
    if (TEST_Z(eax, eax)) goto loc_0007EB2A; /* je: equal / zero */

loc_0007EB11: ;
    ecx = ZX8(MEM8(esi + 0x249));
    edx = ZX8(MEM8(esi + 0x248));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FEA00(); /* call 0x000FEA00 */

loc_0007EB27: ;
    esp = esp + 0xC;

loc_0007EB2A: ;
    eax = MEM32(0x76FFDC);
    if (TEST_Z(eax, eax)) goto loc_0007EB44; /* je: equal / zero */

loc_0007EB33: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0007EB44; /* je: equal / zero */

loc_0007EB3D: ;
    edi = esi;
    PUSH32(esp, 0); sub_002D1580(); /* call 0x002D1580 */

loc_0007EB44: ;
    POP32(esp, edi);

loc_0007EB45: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007EB50
 * Original: 0x0007EB50 - 0x0007EC25 (213 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0007EB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x110;
    edx = MEM32(0x84A5FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM8(0x76FFE4) = 0;
    MEM32(esp + 0x10) = esi;
    MEM32(0x76FFF8) = esi;
    edx++;
    eax = ebp + 0xB40;
    edi = 0x20;

loc_0007EB93: ;
    SET_LO8(ecx, MEM8(edx + -1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EBB0; /* je: equal / zero */

loc_0007EB9A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + -1744));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EBB0; /* je: equal / zero */

loc_0007EBA6: ;
    ecx--;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    esi = esi | ebx;

loc_0007EBB0: ;
    if (CMP_EQ(MEM8(edx), 0)) goto loc_0007EBC7; /* je: equal / zero */

loc_0007EBB5: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EBC7; /* je: equal / zero */

loc_0007EBBD: ;
    ecx--;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    esi = esi | ebx;

loc_0007EBC7: ;
    SET_LO8(ecx, MEM8(edx + 1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EBE4; /* je: equal / zero */

loc_0007EBCE: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x6D0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EBE4; /* je: equal / zero */

loc_0007EBDA: ;
    ecx--;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    esi = esi | ebx;

loc_0007EBE4: ;
    SET_LO8(ecx, MEM8(edx + 2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EC01; /* je: equal / zero */

loc_0007EBEB: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0xDA0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007EC01; /* je: equal / zero */

loc_0007EBF7: ;
    ecx--;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    esi = esi | ebx;

loc_0007EC01: ;
    edx = edx + 4;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_0007EB93; /* jne: not equal / not zero */

loc_0007EC0C: ;
    eax = 0; /* xor self */
    ecx = 0x20;
    edi = esp + 0x20;
    MEM32(0x76FFF8) = esi;
    ebx = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0007EC30(); return; /* tail jmp 0x0007EC30 */

}

/**
 * sub_0007F000
 * Original: 0x0007F000 - 0x0007F03B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F000(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007F000: ;
    ecx = 0; /* xor self */
    MEM32(0x76FFD4) = ecx;
    eax = 0x76FF3C;
    /* nop */

loc_0007F010: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    eax = eax + 0xC;
    if (CMP_L(eax, 0x76FFD8)) goto loc_0007F010; /* jl: less (signed <) */

loc_0007F022: ;
    MEM32(0x76FCE8) = ecx;
    MEM32(0x76FCE4) = ecx;
    MEM32(0x76FCE0) = ecx;
    MEM32(0x76FCDC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F040
 * Original: 0x0007F040 - 0x0007F05D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F040(void)
{

loc_0007F040: ;
    MEM32(0x76FFD4) = MEM32(0x76FFD4) + 1;
    edx = ecx + eax * 2;
    edx = edx + eax;
    ecx = MEM32(edx * 4 + 0x76FF38);
    eax = edx * 4 + 0x76FF38;
    ecx++;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F060
 * Original: 0x0007F060 - 0x0007F156 (246 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F060: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp - 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F152; /* jne: not equal / not zero */

loc_0007F070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    eax = ZX8(MEM8(edi + ecx + 0xB4));
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, MEM8(edi + ecx + 0x232));
    SET_LO16(esi, MEM16(edi + ecx + 0x130));
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0007F14F; /* je: equal / zero */

loc_0007F0A4: ;
    edx = ZX8(LO8(ebx));
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x13);
    PUSH32(esp, ebp);
    ebp = eax;
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(MEM32(edi + ecx + 0x64), 3)) goto loc_0007F0C5; /* jne: not equal / not zero */

loc_0007F0BA: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    ebp = eax;
    MEM32(esp + 0x10) = eax;

loc_0007F0C5: ;
    edx = ZX8(MEM8(edi + ecx + 0x24A));
    if (CMP_L(edx, 0x47)) goto loc_0007F0D7; /* jl: less (signed <) */

loc_0007F0D2: ;
    edx = 0xB;

loc_0007F0D7: ;
    eax = SX16(LO16(esi));
    esi = MEM32(edx * 4 + 0x594960);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_0007F0EA: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_0007F0F4: ;
    eax = MEM32(0x84A5F8);
    ecx = (int32_t)MEMF(edi + eax + 0x78); /* cvttss2si */
    edx = (int32_t)MEMF(edi + eax + 0x7C); /* cvttss2si */
    MEM16(esp + 0x18) = LO16(ecx);
    SET_LO8(ebx, LO8(ebx) >> 1);
    SET_LO16(ecx, ZX8(LO8(ebx)));
    MEM16(esp + 0x1E) = LO16(ebp);
    MEM8(esp + 0x25) = 0;
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM16(esp + 0x1A) = LO16(edx);
    edx = (int32_t)MEMF(edi + eax + 0x80); /* cvttss2si */
    SET_LO16(eax, MEM16(esp + 0x10));
    MEM16(esp + 0x1C) = LO16(edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM16(esp + 0x24) = LO16(eax);
    MEM8(esp + 0x26) = LO8(ecx);
    PUSH32(esp, 0); sub_003566B0(); /* call 0x003566B0 */

loc_0007F14B: ;
    esp = esp + 4;
    POP32(esp, ebp);

loc_0007F14F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0007F152: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F160
 * Original: 0x0007F160 - 0x0007F1D5 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F160(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007F160: ;
    SET_LO8(ecx, MEM8(0x7FA275));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007F1D4; /* jne: not equal / not zero */

loc_0007F16A: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + 0xB4));
    eax = eax + ecx;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax + 0x130));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x132));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0007F1D3; /* je: equal / zero */

loc_0007F192: ;
    edx = ZX8(MEM8(eax + 0x24A));
    if (CMP_L(edx, 0x47)) goto loc_0007F1A3; /* jl: less (signed <) */

loc_0007F19E: ;
    edx = 0xB;

loc_0007F1A3: ;
    edx = MEM32(edx * 4 + 0x594960);
    edx = ZX8(MEM8(edx + 4));
    ecx = ecx + esi;
    esi = SX16(LO16(ecx));
    edx = edx << 8;
    if (CMP_L(esi, edx)) goto loc_0007F1C5; /* jl: less (signed <) */

loc_0007F1BA: ;
    ecx = ecx - edx;
    MEM16(eax + 0x130) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007F1C5: ;
    if (CMP_GE(LO16(ecx) & LO16(ecx), 0)) goto loc_0007F1CC; /* jge: greater or equal (signed >=) */

loc_0007F1CA: ;
    ecx = ecx + edx;

loc_0007F1CC: ;
    MEM16(eax + 0x130) = LO16(ecx);

loc_0007F1D3: ;
    POP32(esp, esi);

loc_0007F1D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F1E0
 * Original: 0x0007F1E0 - 0x0007F4C1 (737 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F1E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F1E0: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(0x8470DC);
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(edi + ecx + 0x3A9));
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    edi = edi + ecx;
    esi = esi + edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F4BA; /* jne: not equal / not zero */

loc_0007F21C: ;
    SET_LO8(eax, MEM8(edi + 0xA1));
    if (CMP_EQ(LO8(eax), 7)) goto loc_0007F4BA; /* je: equal / zero */

loc_0007F22A: ;
    if (CMP_EQ(LO8(eax), 9)) goto loc_0007F4BA; /* je: equal / zero */

loc_0007F232: ;
    eax = MEM32(edi + 0x514);
    if (TEST_Z(eax, eax)) goto loc_0007F247; /* je: equal / zero */

loc_0007F23C: ;
    xmm0 = MEMF(eax); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    goto loc_0007F27B;

loc_0007F247: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F259; /* jne: not equal / not zero */

loc_0007F250: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0007F26B; /* jne: not equal / not zero */

loc_0007F259: ;
    xmm0 = MEMF(0x59D944); /* movss */
    xmm3 = MEMF(0x649D84); /* movss */
    goto loc_0007F27B;

loc_0007F26B: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    xmm3 = MEMF(0x649D80); /* movss */

loc_0007F27B: ;
    eax = ZX8(MEM8(edi + 0x510));
    eax--;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0007F4BA; /* je: equal / zero */

loc_0007F296: ;
    ecx = edi;
    PUSH32(esp, 0); sub_002B4480(); /* call 0x002B4480 */

loc_0007F29D: ;
    MEM32(esp + 0x10) = eax;
    eax = edi + 0x78;
    PUSH32(esp, eax);
    esi = esi + 0x330;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0007F2B1: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    MEMF(edi + ebp * 4 + 0x65C) = xmm0; /* movss */
    ecx = MEM32(0x84A13C);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + ecx + 0x260); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0007F2F5; /* ja: above (unsigned >) */

loc_0007F2E8: ;
    xmm1 = MEMF(0x64935C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0007F2FB; /* jbe: below or equal (unsigned <=) */

loc_0007F2F5: ;
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_0007F2FB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fptan  */
    /* fstp st(0) */
    fp_push(MEMF(eax + ecx + 0x258)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edi + ebp * 4 + 0x65C);
    PUSH32(esp, ecx);
    /* FPU: fptan  */
    /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(edi + ebp * 4 + 0x66C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(edi + 0x74);
    ecx = ZX16(MEM16(edx + 0xE));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edi + 0x260); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0007F356: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm0 = xmm0 * MEMF(0x64987C); /* mulss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 / MEMF(eax + edx + 0x264); /* divss */
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    esp = esp + 8;
    MEMF(edi + ebp * 4 + 0x67C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0007F399; /* jbe: below or equal (unsigned <=) */

loc_0007F395: ;
    ebx = 0; /* xor self */
    goto loc_0007F3A8;

loc_0007F399: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    ebx = 1;
    if ((xmm3 > xmm0)) goto loc_0007F3A8; /* ja: above (unsigned >) */

loc_0007F3A3: ;
    ebx = 2;

loc_0007F3A8: ;
    eax = MEM32(0x863D04);
    edx = MEM32(0x84A144);
    esi = 1;
    if (CMP_NE(eax, esi)) goto loc_0007F3CC; /* jne: not equal / not zero */

loc_0007F3BC: ;
    if (TEST_Z(edx, edx)) goto loc_0007F3CC; /* je: equal / zero */

loc_0007F3C0: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0007F3CC; /* jne: not equal / not zero */

loc_0007F3C4: ;
    if (CMP_LE(MEM32(esp + 0x30), esi)) goto loc_0007F3CC; /* jle: less or equal (signed <=) */

loc_0007F3CA: ;
    ebx = esi;

loc_0007F3CC: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F3DE; /* jne: not equal / not zero */

loc_0007F3D5: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0007F41C; /* jne: not equal / not zero */

loc_0007F3DE: ;
    ecx = MEM32(edi + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0007F412; /* je: equal / zero */

loc_0007F3E8: ;
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0007F412; /* je: equal / zero */

loc_0007F3F2: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) goto loc_0007F412; /* je: equal / zero */

loc_0007F3FC: ;
    if (CMP_EQ(MEM8(eax + 6), 0)) goto loc_0007F412; /* je: equal / zero */

loc_0007F402: ;
    eax = MEM32(ecx + 0xBC);
    if (TEST_Z(eax, eax)) goto loc_0007F412; /* je: equal / zero */

loc_0007F40C: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0007F412; /* jne: not equal / not zero */

loc_0007F410: ;
    ebx = esi;

loc_0007F412: ;
    if (CMP_LE(edx, esi)) goto loc_0007F41C; /* jle: less or equal (signed <=) */

loc_0007F416: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0007F41C; /* jne: not equal / not zero */

loc_0007F41A: ;
    ebx = esi;

loc_0007F41C: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_NZ(eax, eax)) goto loc_0007F441; /* jne: not equal / not zero */

loc_0007F429: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0007F445; /* je: equal / zero */

loc_0007F42D: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ebx = esi;
    if ((xmm1 > xmm0)) goto loc_0007F441; /* ja: above (unsigned >) */

loc_0007F43C: ;
    ebx = 2;

loc_0007F441: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0007F447; /* jne: not equal / not zero */

loc_0007F445: ;
    ebx = 0; /* xor self */

loc_0007F447: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F452; /* je: equal / zero */

loc_0007F450: ;
    ebx = 0; /* xor self */

loc_0007F452: ;
    eax = MEM32(esp + 0x18);
    if (CMP_LE(ebx, eax)) goto loc_0007F464; /* jle: less or equal (signed <=) */

loc_0007F45A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0007F464; /* jge: greater or equal (signed >=) */

loc_0007F460: ;
    ebx = 0; /* xor self */
    goto loc_0007F469;

loc_0007F464: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0007F4A3; /* je: equal / zero */

loc_0007F469: ;
    eax = ZX8(MEM8(edi + 0x3A8));
    if (CMP_EQ(eax, ebx)) goto loc_0007F4A3; /* je: equal / zero */

loc_0007F474: ;
    ecx = MEM32(edi + 0x50C);
    eax = MEM32(ecx + ebx * 4);
    PUSH32(esp, 0); sub_002B3990(); /* call 0x002B3990 */

loc_0007F482: ;
    edx = MEM32(edi + 0x50C);
    MEM8(edi + 0x3A8) = LO8(ebx);
    esi = MEM32(edx);
    eax = edi;
    PUSH32(esp, 0); sub_002E5830(); /* call 0x002E5830 */

loc_0007F497: ;
    eax = MEM32(edi + 0x50C);
    ecx = MEM32(eax + ebx * 4);
    MEM32(edi + 0x6C) = ecx;

loc_0007F4A3: ;
    eax = MEM32(esp + 0x30);
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(eax, 0x10)) goto loc_0007F4BA; /* jge: greater or equal (signed >=) */

loc_0007F4AD: ;
    SET_LO8(edx, MEM8(edi + 0x3A8));
    MEM8(ebp + eax * 2 + 0x76FF0C) = LO8(edx);

loc_0007F4BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0007F4D0
 * Original: 0x0007F4D0 - 0x0007F79F (719 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F4D0: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = eax + ecx;
    SET_LO8(eax, MEM8(0x76EDF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F514; /* je: equal / zero */

loc_0007F4F3: ;
    SET_LO8(eax, MEM8(0x76F0D0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F514; /* jne: not equal / not zero */

loc_0007F4FC: ;
    eax = edi;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_0007F503: ;
    if (TEST_NZ(eax, eax)) goto loc_0007F514; /* jne: not equal / not zero */

loc_0007F507: ;
    if (CMP_NE(MEM32(edi + 0x68), 0x19F)) goto loc_0007F79B; /* jne: not equal / not zero */

loc_0007F514: ;
    SET_LO8(eax, MEM8(edi + esi + 0xC7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F79B; /* je: equal / zero */

loc_0007F523: ;
    SET_LO8(eax, MEM8(edi + 0xCE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F79B; /* je: equal / zero */

loc_0007F531: ;
    eax = MEM32(edi + 0x568);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0007F54C; /* je: equal / zero */

loc_0007F53E: ;
    SET_LO8(ecx, MEM8(eax + 0x38D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007F79A; /* jne: not equal / not zero */

loc_0007F54C: ;
    if (CMP_NE(MEM32(edi + 0x3C8), ebx)) goto loc_0007F560; /* jne: not equal / not zero */

loc_0007F554: ;
    if (CMP_NE(MEM32(edi + 0x3C4), ebx)) goto loc_0007F79A; /* jne: not equal / not zero */

loc_0007F560: ;
    edx = MEM32(esp + 0x18);
    if (CMP_EQ(edx, 5)) goto loc_0007F581; /* je: equal / zero */

loc_0007F569: ;
    if (CMP_EQ(edx, 6)) goto loc_0007F581; /* je: equal / zero */

loc_0007F56E: ;
    if (CMP_EQ(edx, 3)) goto loc_0007F581; /* je: equal / zero */

loc_0007F573: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0007F1E0(); /* call 0x0007F1E0 */

loc_0007F57A: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 8;

loc_0007F581: ;
    if (CMP_NE(edx, 8)) goto loc_0007F758; /* jne: not equal / not zero */

loc_0007F58A: ;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0007F850(); /* call 0x0007F850 */

loc_0007F592: ;
    esp = esp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_0012E360(); /* call 0x0012E360 */

loc_0007F59C: ;
    eax = esi;
    PUSH32(esp, 0); sub_0012E2C0(); /* call 0x0012E2C0 */

loc_0007F5A3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F79A; /* je: equal / zero */

loc_0007F5AB: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_0007F5B0: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1B4);
    edx = ZX8(MEM8(edi + 0x3A8));
    eax = MEM32(0x84A5F8);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    ebp = ebp + edx;
    ebp = MEM32(eax + ebp * 4 + 0x4B0);
    edx = MEM32(0x84A13C);
    eax = ecx + edx + 0x40;
    PUSH32(esp, eax);
    MEM32(0x81BD70) = 0x3EE100;
    MEM8(0x819FE8) = 1;
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_0007F5F4: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_0007F5FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0007F602: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007F61E: ;
    MEM32(0x549AE8) = ebx;
    if (CMP_EQ(MEM32(ebp + 0x24), ebx)) goto loc_0007F709; /* je: equal / zero */

loc_0007F62D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_0007F633: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007F709; /* jne: not equal / not zero */

loc_0007F63E: ;
    eax = MEM32(ebp + 0x24);
    ecx = ZX8(MEM8(edi + 0x3A8));
    ebx = MEM32(eax + 8);
    ebp = MEM32(edi + ecx * 4 + 0x4C4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    eax = 8;
    ecx = edi;
    MEM8(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_00082730(); /* call 0x00082730 */

loc_0007F66E: ;
    edx = MEM32(0x7FA020);
    esp = esp + 0x14;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007F68D: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = ebp;
    eax = MEM32(ebp + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0007F6BA; /* je: equal / zero */

loc_0007F6B5: ;
    MEM32(0x84B854) = eax;

loc_0007F6BA: ;
    edx = MEM32(ebx + -16);
    PUSH32(esp, 4);
    ecx = ebx;
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_0007F6D6: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_0007F6E5: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_0007F6F3: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F707; /* je: equal / zero */

loc_0007F6FB: ;
    eax = 0; /* xor self */
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_0007F707: ;
    ebx = 0; /* xor self */

loc_0007F709: ;
    edx = MEM32(0x81B7C0);
    ecx = MEM32(0x76FFD4);
    eax = MEM32(0x76FFA0);
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    MEM32(0x81BE44) = ebx;
    POP32(esp, ebx);
    edx = edx & 0x80000000u;
    POP32(esp, edi);
    ecx++;
    eax++;
    POP32(esp, esi);
    MEM32(0x81B7C0) = edx;
    MEM32(0x76FFD4) = ecx;
    MEM32(0x76FFA0) = eax;
    MEM32(0x81BD70) = 0x3F0270;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0012E3D0(); return; /* tail jmp 0x0012E3D0 */

loc_0007F758: ;
    eax = ZX8(MEM8(edi + esi + 0xC7));
    if (CMP_GE(eax, 0xFF)) goto loc_0007F78D; /* jge: greater or equal (signed >=) */

loc_0007F767: ;
    ecx = MEM32(edi + 0x564);
    if (CMP_EQ(ecx, ebx)) goto loc_0007F78D; /* je: equal / zero */

loc_0007F771: ;
    if (CMP_NE(MEM32(ecx + 0xC0), 0x100)) goto loc_0007F78D; /* jne: not equal / not zero */

loc_0007F77D: ;
    ecx = ZX8(MEM8(edi + 0x236));
    if (CMP_EQ(esi, ecx)) goto loc_0007F78D; /* je: equal / zero */

loc_0007F788: ;
    eax = 0xFF;

loc_0007F78D: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_0007FAB0(); /* call 0x0007FAB0 */

loc_0007F797: ;
    esp = esp + 0xC;

loc_0007F79A: ;
    POP32(esp, ebx);

loc_0007F79B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007F7A0
 * Original: 0x0007F7A0 - 0x0007F850 (176 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F7A0: ;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + eax * 2 + 0x76F9D8));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(ebp) = ebx;
    ebx = ZX8(MEM8(eax + eax * 2 + 0x76F9D9));
    ebp = MEM32(esp + 0x18);
    MEM32(ebp) = ebx;
    ebx = ZX8(MEM8(eax + eax * 2 + 0x76F9DA));
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    MEM32(ebp) = ebx;
    ebx = ZX8(MEM8(eax + eax * 2 + 0x76F9CC));
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = ebx;
    ebx = ZX8(MEM8(eax + eax * 2 + 0x76F9CD));
    ebp = MEM32(esp + 0x24);
    MEM32(ebp) = ebx;
    eax = ZX8(MEM8(eax + eax * 2 + 0x76F9CE));
    ebx = MEM32(esp + 0x28);
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    MEM32(edx) = 0;
    MEM32(ecx) = 0;
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x648EEC); /* mulss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(eax + 0x1AC));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0007F84C; /* je: equal / zero */

loc_0007F83F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00081430(); /* call 0x00081430 */

loc_0007F849: ;
    esp = esp + 8;

loc_0007F84C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007F850
 * Original: 0x0007F850 - 0x0007FAA6 (598 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F850: ;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test MEM8(ebx + 0x136), 8 - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_Z(MEM8(ebx + 0x136), 8)) goto loc_0007F86A; /* je: equal / zero */

loc_0007F85E: ;
    ecx = MEM32(0x773C68);
    if (TEST_NZ(ecx, ecx)) goto loc_0007F86A; /* jne: not equal / not zero */

loc_0007F868: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007F86A: ;
    if (CMP_EQ(MEM32(esp + 8), 3)) { sub_0007FAA6(); return; } /* je: equal / zero */

loc_0007F875: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0007FAA6(); return; } /* je: equal / zero */

loc_0007F87D: ;
    SET_LO8(eax, MEM8(ebx + 0x547));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 8) = 2;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F898; /* je: equal / zero */

loc_0007F88F: ;
    SET_LO8(eax, MEM8(0x77379C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F8A0; /* je: equal / zero */

loc_0007F898: ;
    MEM32(esp + 8) = 0xA;

loc_0007F8A0: ;
    SET_LO8(eax, MEM8(ebx + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F8C5; /* je: equal / zero */

loc_0007F8AD: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebp = eax + ecx + -1744;
    goto loc_0007F8E4;

loc_0007F8C5: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007F8E4; /* je: equal / zero */

loc_0007F8CF: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ebp = edx + eax + -1744;

loc_0007F8E4: ;
    ecx = ZX8(MEM8(ebx + 0x3A8));
    edx = MEM32(ebx + ecx * 4 + 0x4B0);
    eax = MEM32(edx + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007F967; /* je: equal / zero */

loc_0007F8FC: ;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_0007F901: ;
    PUSH32(esp, 0); sub_00124840(); /* call 0x00124840 */

loc_0007F906: ;
    edx = MEM32(0x8470DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x76F618);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    PUSH32(esp, 5);
    eax = ecx + edx;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x76F614);
    ecx = esi + esi * 2;
    edx = ecx * 4 + 0x76F6F8;
    ecx = ZX8(MEM8(0x76F615));
    PUSH32(esp, edx);
    edx = MEM32(esi * 4 + 0x76F728);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x338);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x334);
    eax = MEM32(eax + 0x330);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00127B60(); /* call 0x00127B60 */

loc_0007F961: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0007F967: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0); sub_0012E2F0(); /* call 0x0012E2F0 */

loc_0007F970: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FA9A; /* je: equal / zero */

loc_0007F978: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00130A60(); /* call 0x00130A60 */

loc_0007F97F: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0007F987; /* jne: not equal / not zero */

loc_0007F983: ;
    edx = 0; /* xor self */
    goto loc_0007F98D;

loc_0007F987: ;
    edx = ebx + 0x334;

loc_0007F98D: ;
    eax = MEM32(ebx + 0x74);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_0007F9A9; /* je: equal / zero */

loc_0007F997: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebx + 0x264); /* mulss */
    goto loc_0007F9AC;

loc_0007F9A9: ;
    xmm0 = xmm1; /* movaps */

loc_0007F9AC: ;
    if (TEST_Z(eax, eax)) goto loc_0007F9B8; /* je: equal / zero */

loc_0007F9B0: ;
    eax = ZX16(MEM16(eax + 0xE));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */

loc_0007F9B8: ;
    xmm2 = MEMF(ebx + 0x228); /* movss */
    xmm2 = xmm2 - MEMF(0x6493A8); /* subss */
    /* comiss xmm2, MEMF(ebx + 0x7C) - sets EFLAGS */
    if ((xmm2 <= MEMF(ebx + 0x7C))) goto loc_0007F9D2; /* jbe: below or equal (unsigned <=) */

loc_0007F9CE: ;
    SET_LO8(ecx, 1);
    goto loc_0007F9D4;

loc_0007F9D2: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0007F9D4: ;
    SET_LO8(eax, MEM8(ebx + 0x54A));
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    if (CMP_A(LO8(eax), 2)) goto loc_0007F9E6; /* ja: above (unsigned >) */

loc_0007F9E1: ;
    eax = 2;

loc_0007F9E6: ;
    xmm2 = MEMF(ebx + 0x260); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    xmm1 = MEMF(ebx + 0x7C); /* movss */
    ebp = ebp + 0x330;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x76F618);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x560);
    edx = ebx + 0x3E0;
    PUSH32(esp, edx);
    edx = MEM32(ebx + esi * 4 + 0x550);
    PUSH32(esp, 2);
    edi = ebx + esi + 0x54B;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x80);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x298);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001254A0(); /* call 0x001254A0 */

loc_0007FA5C: ;
    esp = esp + 0x44;
    PUSH32(esp, 0); sub_001277A0(); /* call 0x001277A0 */

loc_0007FA64: ;
    if (CMP_NE(MEM32(ebx + 0x64), 0x35)) goto loc_0007FA77; /* jne: not equal / not zero */

loc_0007FA6A: ;
    xmm0 = MEMF(0x75DB44); /* movss */
    PUSH32(esp, 0); sub_0012F210(); /* call 0x0012F210 */

loc_0007FA77: ;
    eax = ZX8(MEM8(ebx + 0x54A));
    ecx = ZX8(MEM8(edi));
    ebx = MEM32(ebx + esi * 4 + 0x550);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129050(); /* call 0x00129050 */

loc_0007FA8F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0012E3D0(); return; /* tail jmp 0x0012E3D0 */

loc_0007FA9A: ;
    PUSH32(esp, 0); sub_00124F90(); /* call 0x00124F90 */

loc_0007FA9F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0012E3D0(); return; /* tail jmp 0x0012E3D0 */

}

/**
 * sub_0007FAB0
 * Original: 0x0007FAB0 - 0x0007FAF6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FAB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007FAB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_0007FAB6: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007FAF5; /* jne: not equal / not zero */

loc_0007FABD: ;
    SET_LO8(eax, MEM8(esi + 0x3C1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007FAD6; /* jne: not equal / not zero */

loc_0007FAC7: ;
    eax = MEM32(esi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 0x5A0350;
    if (TEST_NZ(eax, eax)) goto loc_0007FAD8; /* jne: not equal / not zero */

loc_0007FAD6: ;
    eax = esi;

loc_0007FAD8: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0007FB00(); /* call 0x0007FB00 */

loc_0007FAF2: ;
    esp = esp + 0x14;

loc_0007FAF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007FB00
 * Original: 0x0007FB00 - 0x000805AD (2733 bytes, 700 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FB00(void)
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

loc_0007FB00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    eax = ZX8(MEM8(ebx + edx + 0x3A8));
    ecx = MEM32(ebx + edx + 0x50C);
    ebx = ebx + edx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    eax = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_0012FB60(); /* call 0x0012FB60 */

loc_0007FB3B: ;
    edx = ZX8(MEM8(ebx + 0x3A8));
    eax = MEM32(ebx + edx * 4 + 0x4B0);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_000805A6; /* je: equal / zero */

loc_0007FB54: ;
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(esi, 3)) goto loc_0007FB7C; /* je: equal / zero */

loc_0007FB5C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0007FB63: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FB72: ;
    MEM32(0x549AF8) = 1;

loc_0007FB7C: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0007FB85: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0007FB91: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0007FB9D: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0007FBA9: ;
    if (CMP_EQ(esi, 3)) goto loc_0007FBC1; /* je: equal / zero */

loc_0007FBAE: ;
    if (CMP_EQ(esi, 5)) goto loc_0007FBC1; /* je: equal / zero */

loc_0007FBB3: ;
    if (CMP_EQ(esi, 6)) goto loc_0007FBC1; /* je: equal / zero */

loc_0007FBB8: ;
    eax = ZX8(MEM8(ebx + 0x3A8));
    goto loc_0007FBEC;

loc_0007FBC1: ;
    SET_LO8(eax, MEM8(ebx + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FBD1; /* je: equal / zero */

loc_0007FBCB: ;
    eax = ZX8(LO8(eax));
    eax--;
    goto loc_0007FBE3;

loc_0007FBD1: ;
    SET_LO8(eax, MEM8(ebx + 0x510));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FBE1; /* je: equal / zero */

loc_0007FBDB: ;
    eax = ZX8(LO8(eax));
    eax--;
    goto loc_0007FBE3;

loc_0007FBE1: ;
    eax = 0; /* xor self */

loc_0007FBE3: ;
    ecx = MEM32(ebx + 0x50C);
    edi = MEM32(ecx + eax * 4);

loc_0007FBEC: ;
    edx = MEM32(ebx + 0x50C);
    eax = MEM32(edx + eax * 4);
    if (CMP_EQ(edi, eax)) goto loc_0007FC05; /* je: equal / zero */

loc_0007FBF9: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_0007FBFE: ;
    eax = edi;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_0007FC05: ;
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp esi, 0xC - flags set for next jcc */
    MEM8(esp + 0xE) = 0;
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x10) = LO8(eax);
    MEM32(esp + 0x1C) = 0;
    edx = 0xFF;
    if (CMP_A(esi, 0xC)) goto loc_0007FC6E; /* ja: above (unsigned >) */

loc_0007FC2A: ;
    ecx = ZX8(MEM8(esi + 0x805C8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x805B0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0007FC38u) goto loc_0007FC38;
    if (_jt == 0x0007FC69u) goto loc_0007FC69;
    if (_jt == 0x0007FC6Eu) goto loc_0007FC6E;
    if (_jt == 0x0007FCD8u) goto loc_0007FCD8;
    if (_jt == 0x0007FCE6u) goto loc_0007FCE6;
    if (_jt == 0x0007FCF6u) goto loc_0007FCF6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007FC38: ;
    SET_LO8(ecx, MEM8(ebx + 0xA1));
    if (CMP_NE(LO8(ecx), 8)) goto loc_0007FC4A; /* jne: not equal / not zero */

loc_0007FC43: ;
    MEM8(esp + 0xE) = 0;
    goto loc_0007FC54;

loc_0007FC4A: ;
    if (CMP_NE(MEM32(ebp + 0x14), edx)) goto loc_0007FC54; /* jne: not equal / not zero */

loc_0007FC4F: ;
    MEM8(esp + 0xE) = 1;

loc_0007FC54: ;
    if (CMP_EQ(LO8(ecx), 7)) goto loc_0007FC63; /* je: equal / zero */

loc_0007FC59: ;
    if (CMP_EQ(LO8(ecx), 9)) goto loc_0007FC63; /* je: equal / zero */

loc_0007FC5E: ;
    if (CMP_NE(LO8(ecx), 0xA)) goto loc_0007FC6E; /* jne: not equal / not zero */

loc_0007FC63: ;
    SET_LO8(eax, 1);
    MEM8(esp + 0xF) = LO8(eax);

loc_0007FC69: ;
    MEM8(esp + 0x10) = 1;

loc_0007FC6E: ;
    edx = ZX8(MEM8(ebx + 0x3A8));
    esi = MEM32(ebx + edx * 4 + 0x4B0);
    (void)0; /* cmp MEM8(esp + 0xE), 1 - flags set for next jcc */
    ecx = MEM32(esi + 0x24);
    ecx = ZX16(MEM16(ecx + 0xC));
    MEM32(esp + 0x24) = esi;
    if (CMP_NE(MEM8(esp + 0xE), 1)) goto loc_0007FC98; /* jne: not equal / not zero */

loc_0007FC8E: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_0007FC98; /* jne: not equal / not zero */

loc_0007FC93: ;
    MEM8(esp + 0xE) = 0;

loc_0007FC98: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0007FCA6; /* jne: not equal / not zero */

loc_0007FC9C: ;
    if (TEST_NZ(LO8(ecx), 2)) goto loc_0007FCA6; /* jne: not equal / not zero */

loc_0007FCA1: ;
    MEM8(esp + 0xF) = 0;

loc_0007FCA6: ;
    if (CMP_NE(MEM8(esp + 0x11), 1)) goto loc_0007FCB7; /* jne: not equal / not zero */

loc_0007FCAD: ;
    if (TEST_NZ(LO8(ecx), 0x20)) goto loc_0007FCB7; /* jne: not equal / not zero */

loc_0007FCB2: ;
    MEM8(esp + 0x11) = 0;

loc_0007FCB7: ;
    (void)0; /* cmp MEM8(esp + 0x10), 1 - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_NE(MEM8(esp + 0x10), 1)) goto loc_0007FD43; /* jne: not equal / not zero */

loc_0007FCCC: ;
    if (TEST_NZ(LO8(ecx), 8)) goto loc_0007FD0A; /* jne: not equal / not zero */

loc_0007FCD1: ;
    MEM8(esp + 0x10) = 0;
    goto loc_0007FD43;

loc_0007FCD8: ;
    if (CMP_L(MEM32(ebp + 0x14), edx)) goto loc_0007FCE6; /* jl: less (signed <) */

loc_0007FCDD: ;
    if (CMP_NE(MEM8(ebx + 0xA1), 1)) goto loc_0007FCEB; /* jne: not equal / not zero */

loc_0007FCE6: ;
    MEM8(esp + 0xE) = 1;

loc_0007FCEB: ;
    SET_LO8(eax, 1);
    MEM8(esp + 0xF) = LO8(eax);
    goto loc_0007FC6E;

loc_0007FCF6: ;
    SET_LO8(eax, 1);
    MEM8(esp + 0xE) = 1;
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    goto loc_0007FC6E;

loc_0007FD0A: ;
    SET_LO8(eax, MEM8(ebx + 0xA1));
    if (CMP_NE(LO8(eax), 7)) goto loc_0007FD1E; /* jne: not equal / not zero */

loc_0007FD14: ;
    MEM32(esp + 0x1C) = 0x10;
    goto loc_0007FD43;

loc_0007FD1E: ;
    if (CMP_NE(LO8(eax), 9)) goto loc_0007FD2C; /* jne: not equal / not zero */

loc_0007FD22: ;
    MEM32(esp + 0x1C) = 0x10;
    goto loc_0007FD43;

loc_0007FD2C: ;
    eax = MEM32(ebp + 0xC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_00081FC0(); /* call 0x00081FC0 */

loc_0007FD3C: ;
    esp = esp + 8;
    MEM32(esp + 0x1C) = eax;

loc_0007FD43: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000805E0(); /* call 0x000805E0 */

loc_0007FD4A: ;
    (void)0; /* cmp MEM32(ebp + 0x18), 9 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_NE(MEM32(ebp + 0x18), 9)) goto loc_0007FD71; /* jne: not equal / not zero */

loc_0007FD54: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FD71; /* je: equal / zero */

loc_0007FD58: ;
    SET_LO8(eax, MEM8(0x847207));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007FD71; /* jne: not equal / not zero */

loc_0007FD61: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edi = ebx;
    PUSH32(esp, 0); sub_00077F10(); /* call 0x00077F10 */

loc_0007FD6E: ;
    esp = esp + 8;

loc_0007FD71: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000817D0(); /* call 0x000817D0 */

loc_0007FD78: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_0007FD7D: ;
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_0007FD82: ;
    edx = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(edx + 0x28));
    edx = MEM32(0x8493BC);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x84B868);
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(edx, edx)) goto loc_0007FDA4; /* je: equal / zero */

loc_0007FD9B: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x12) = 1;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007FDA9; /* je: equal / zero */

loc_0007FDA4: ;
    MEM8(esp + 0x12) = 0;

loc_0007FDA9: ;
    esi = eax + 0x90;
    eax = MEM32(ebp + 0x18);
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0007F850(); /* call 0x0007F850 */

loc_0007FDC9: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007FDF4; /* jne: not equal / not zero */

loc_0007FDD4: ;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_0007FDD9: ;
    edx = MEM32(0x84A13C);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = ecx + edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_0007FDF1: ;
    esp = esp + 4;

loc_0007FDF4: ;
    if (CMP_NE(MEM32(ebp + 0x18), 3)) goto loc_0007FE32; /* jne: not equal / not zero */

loc_0007FDFA: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x20);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0007FE76; /* je: equal / zero */

loc_0007FE0A: ;
    esi = MEM32(esp + 0x20);
    MEM32(0x81BE48) = eax;
    esi = esi + 0x10;
    ecx = 0x10;
    edi = esp + 0x30;
    eax = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    esi = ebx;
    PUSH32(esp, 0); sub_0012FBB0(); /* call 0x0012FBB0 */

loc_0007FE2D: ;
    esp = esp + 4;
    goto loc_0007FE76;

loc_0007FE32: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FE6C; /* je: equal / zero */

loc_0007FE3A: ;
    SET_LO8(eax, MEM8(0x847207));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FE54; /* je: equal / zero */

loc_0007FE43: ;
    eax = MEM32(0x85D5B4);
    edx = 0x6A58CC;
    PUSH32(esp, 0); sub_0012D1A0(); /* call 0x0012D1A0 */

loc_0007FE52: ;
    goto loc_0007FE5D;

loc_0007FE54: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0); sub_0012E360(); /* call 0x0012E360 */

loc_0007FE5D: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0012FE60(); /* call 0x0012FE60 */

loc_0007FE69: ;
    esp = esp + 8;

loc_0007FE6C: ;
    MEM32(0x81BE48) = 0;

loc_0007FE76: ;
    SET_LO8(eax, MEM8(ebx + 0x545));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007FE8A; /* je: equal / zero */

loc_0007FE80: ;
    eax = 0x800320;
    PUSH32(esp, 0); sub_00202AC0(); /* call 0x00202AC0 */

loc_0007FE8A: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_0007FE92: ;
    (void)0; /* cmp MEM32(ebp + 0x18), 0xB - flags set for next jcc */
    edx = MEM32(0x847194);
    MEM32(0x84B7D0) = edx;
    if (CMP_NE(MEM32(ebp + 0x18), 0xB)) goto loc_0007FEAE; /* jne: not equal / not zero */

loc_0007FEA4: ;
    MEM32(0x84B828) = 0x822F0;

loc_0007FEAE: ;
    eax = MEM32(esp + 0x24);
    MEM32(0x81BD70) = 0x3F0270;
    fp_push(MEMF(ebx + 0x5F8)); /* fld float */
    edi = MEM32(eax + 0x24);
    eax = ZX8(MEM8(ebx + 0x3A8));
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x18);
    esi = MEM32(ebx + eax * 4 + 0x4C4);
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0007FEEA: ;
    eax = ZX8(LO8(eax));
    fp_push(MEMF(ebx + 0x608)); /* fld float */
    SET_HI8(eax, MEM8(ebp + 0x14));
    eax = eax << 8;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0007FF02: ;
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(edx + 0x618)); /* fld float */
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x20);
    eax = eax | ecx;
    eax = eax << 8;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0007FF21: ;
    ecx = MEM32(esp + 0x20);
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    SET_LO8(eax, MEM8(esp + 0xE));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080099; /* je: equal / zero */

loc_0007FF3A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0007FF41: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FF50: ;
    PUSH32(esp, 1);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0007FF61: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FF70: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FF89: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FFA2: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(esp + 0x18);
    ecx = esp + 0x12;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(0x549B1C) = 0xFF;
    MEM8(0x770005) = 1;
    MEM8(esp + 0x26) = 0;
    PUSH32(esp, 0); sub_00082730(); /* call 0x00082730 */

loc_0007FFD7: ;
    edx = MEM32(0x7FA020);
    esp = esp + 0x14;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007FFF6: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    ecx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00080024; /* je: equal / zero */

loc_0008001F: ;
    MEM32(0x84B854) = eax;

loc_00080024: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + -16);
    PUSH32(esp, 1);
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_00080041: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00080053: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00080061: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080075; /* je: equal / zero */

loc_00080069: ;
    eax = 0; /* xor self */
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_00080075: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(0x76FFD4);
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x76FF38);
    edx++;
    ecx++;
    MEM32(0x76FFD4) = edx;
    MEM32(eax * 4 + 0x76FF38) = ecx;
    goto loc_0008009D;

loc_00080099: ;
    ebx = MEM32(esp + 0x18);

loc_0008009D: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080211; /* je: equal / zero */

loc_000800A9: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000800B5: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000800C6: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000800D5: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000800EE: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080107: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x12;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(0x549B1C) = 0xF;
    MEM8(0x770005) = 0;
    MEM8(esp + 0x26) = 0;
    PUSH32(esp, 0); sub_00082730(); /* call 0x00082730 */

loc_00080138: ;
    edx = MEM32(0x7FA020);
    esp = esp + 0x14;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080157: ;
    MEM32(0x549B04) = 0x1010101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00080184; /* je: equal / zero */

loc_0008017F: ;
    MEM32(0x84B854) = eax;

loc_00080184: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + -16);
    PUSH32(esp, 2);
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_000801A2: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_000801B4: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_000801C2: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000801D1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x549B04) = 0x10101;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000801EF; /* je: equal / zero */

loc_000801E3: ;
    eax = 0; /* xor self */
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_000801EF: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(0x76FFD4);
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x76FF3C);
    edx++;
    ecx++;
    MEM32(0x76FFD4) = edx;
    MEM32(eax * 4 + 0x76FF3C) = ecx;

loc_00080211: ;
    if (TEST_NZ(MEM8(edi + 0xC), 0x20)) goto loc_00080223; /* jne: not equal / not zero */

loc_00080217: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080316; /* je: equal / zero */

loc_00080223: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0008022A: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080239: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080252: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0008026B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x12;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(0x549B1C) = 0xF;
    MEM8(0x770005) = 0;
    MEM8(esp + 0x26) = 0;
    PUSH32(esp, 0); sub_00082730(); /* call 0x00082730 */

loc_0008029C: ;
    ebx = MEM32(0x7FA020);
    esp = esp + 0x14;
    ebx++;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x7FA020) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000802BB: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    ebx = 0x20;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_003ED380(); /* call 0x003ED380 */

loc_000802D5: ;
    SET_LO8(ecx, MEM8(esp + 0x16));
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_000802EC; /* je: equal / zero */

loc_000802E2: ;
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_000802EC: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(0x76FFD4);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x76FF40);
    edx++;
    ecx++;
    MEM32(0x76FFD4) = edx;
    MEM32(eax * 4 + 0x76FF40) = ecx;

loc_00080316: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008043B; /* je: equal / zero */

loc_00080322: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_LE(eax, 1)) goto loc_0008043B; /* jle: less or equal (signed <=) */

loc_0008032F: ;
    xmm0 = MEMF(ebx + 0x260); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    PUSH32(esp, 1);
    MEM8(0x750340) = LO8(eax);
    MEM8(0x750354) = 1;
    MEMF(0x750358) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00080358: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080367: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080380: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080399: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x12;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(0x549B1C) = 0xF;
    MEM8(0x770005) = 0;
    MEM8(esp + 0x26) = 0;
    PUSH32(esp, 0); sub_00082730(); /* call 0x00082730 */

loc_000803CA: ;
    esp = esp + 0x14;
    edx = 1;
    ecx = 0x40300;
    MEM8(0x84B7CD) = 0xA;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000803E3: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    MEM32(0x549AE8) = 1;
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_000803FC: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    esp = esp + 0xC;
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080415; /* je: equal / zero */

loc_00080409: ;
    MEM32(0x84B824) = esi;
    MEM32(0x84B828) = esi;

loc_00080415: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM8(0x84B7CD) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00080428: ;
    eax = MEM32(ebp + 0x18);
    ecx = 2;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_0007F040(); /* call 0x0007F040 */

loc_0008043B: ;
    edx = MEM32(0x5499F0);
    edi = MEM32(0x81B7C0);
    ecx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    edx = edx | 0x2000;
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    MEM32(0x7502EC) = esi;
    MEM32(0x549B68) = esi;
    MEM8(ebx + 0x547) = 1;
    edi = edi & 0x80000000u;
    MEM32(0x5499F0) = edx;
    edx = ebx;
    MEM32(0x81B7C0) = edi;
    MEM32(0x84B7D0) = esi;
    MEM32(0x81BE44) = esi;
    MEM32(0x81BE48) = esi;
    PUSH32(esp, 0); sub_000822B0(); /* call 0x000822B0 */

loc_0008049C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080506; /* je: equal / zero */

loc_000804A3: ;
    if (CMP_NE(eax, esi)) goto loc_000804AB; /* jne: not equal / not zero */

loc_000804A7: ;
    PUSH32(esp, 2);
    goto loc_000804F4;

loc_000804AB: ;
    if (CMP_NE(eax, 3)) goto loc_000804C3; /* jne: not equal / not zero */

loc_000804B0: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_00077F10(); /* call 0x00077F10 */

loc_000804BC: ;
    esp = esp + 8;
    esi = 0; /* xor self */
    goto loc_00080511;

loc_000804C3: ;
    if (CMP_NE(eax, 2)) goto loc_000804DC; /* jne: not equal / not zero */

loc_000804C8: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edi = ebx;
    PUSH32(esp, 0); sub_00077F10(); /* call 0x00077F10 */

loc_000804D5: ;
    esp = esp + 8;
    esi = 0; /* xor self */
    goto loc_00080511;

loc_000804DC: ;
    if (CMP_NE(eax, 9)) goto loc_00080506; /* jne: not equal / not zero */

loc_000804E1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00080511; /* jne: not equal / not zero */

loc_000804E9: ;
    SET_LO8(eax, MEM8(0x847207));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00080511; /* jne: not equal / not zero */

loc_000804F2: ;
    PUSH32(esp, 4);

loc_000804F4: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edi = ebx;
    PUSH32(esp, 0); sub_00077F10(); /* call 0x00077F10 */

loc_000804FF: ;
    esp = esp + 8;
    esi = 0; /* xor self */
    goto loc_00080511;

loc_00080506: ;
    if (CMP_NE(eax, 0xB)) goto loc_00080511; /* jne: not equal / not zero */

loc_0008050B: ;
    MEM32(0x84B828) = esi;

loc_00080511: ;
    if (CMP_EQ(MEM32(0x76FFF4), esi)) goto loc_0008056C; /* je: equal / zero */

loc_00080519: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax + 0x24);
    ecx = MEM32(edx + 0x18);
    if (CMP_EQ(MEM32(ecx + 0x14), esi)) goto loc_0008056C; /* je: equal / zero */

loc_00080528: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008056C; /* je: equal / zero */

loc_00080530: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x10;
    eax = MEM32(ebx + 0x5D4);
    ecx = 0x10;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(edx + 0x18);
    esi = MEM32(edx + 0x14);
    MEM32(0x812A18) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_002F8310(); /* call 0x002F8310 */

loc_0008055B: ;
    PUSH32(esp, eax);
    edx = esp + 0x34;
    eax = esi;
    PUSH32(esp, 0); sub_003D67F0(); /* call 0x003D67F0 */

loc_00080567: ;
    esp = esp + 4;
    esi = 0; /* xor self */

loc_0008056C: ;
    SET_LO8(eax, MEM8(ebx + 0x545));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00080582; /* je: equal / zero */

loc_00080576: ;
    ecx = MEM32(0x8003F0);
    MEM32(0x84B868) = ecx;

loc_00080582: ;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_00080587: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0008058D: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0008059C: ;
    MEM32(0x549ADC) = 0x203;

loc_000805A6: ;
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
 * sub_000805E0
 * Original: 0x000805E0 - 0x0008067B (155 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000805E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_000805E0: ;
    esp = esp - 0x24;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM16(edi + 0x60), 0)) { sub_0008067B(); return; } /* jne: not equal / not zero */

loc_000805F1: ;
    eax = MEM32(0x8470DC);
    eax = eax + 0x330;
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_00080625; /* jne: not equal / not zero */

loc_00080619: ;
    ecx = MEM32(edi + 0x3CC);
    MEM32(edi + 0x3C8) = ecx;

loc_00080625: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5D4CB4);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_00080634: ;
    PUSH32(esp, 0x5EA29C);
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_00080642: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00080651: ;
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00080661: ;
    esp = esp + 0x18;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 <= xmm3)) goto loc_00080674; /* jbe: below or equal (unsigned <=) */

loc_0008066A: ;
    eax = 1;
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00080674: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00080690
 * Original: 0x00080690 - 0x000806BD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080690: ;
    xmm1 = MEMF(0x76F7B0); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D2C); /* movss */
    esp = esp - 0x10;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_000806BD(); return; } /* jnp: not parity */

loc_000806AF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    g_seh_ebp = ebp; sub_000806C0(); return; /* tail jmp 0x000806C0 */

}

/**
 * sub_000807C0
 * Original: 0x000807C0 - 0x000807F8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000807C0(void)
{

loc_000807C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000807E3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000807EF: ;
    eax = MEM32(eax + 0x30);
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080800
 * Original: 0x00080800 - 0x000808E6 (230 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080800(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00080800: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax + ecx;
    eax = MEM32(esi + 0x468);
    if (TEST_NZ(HI8(eax), 2)) goto loc_000808E1; /* jne: not equal / not zero */

loc_00080822: ;
    SET_LO8(eax, MEM8(0x76EDF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008084C; /* je: equal / zero */

loc_0008082B: ;
    SET_LO8(eax, MEM8(0x76F0D4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008084C; /* jne: not equal / not zero */

loc_00080834: ;
    eax = esi;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_0008083B: ;
    if (TEST_NZ(eax, eax)) goto loc_0008084C; /* jne: not equal / not zero */

loc_0008083F: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x19F)) goto loc_000808E1; /* jne: not equal / not zero */

loc_0008084C: ;
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_000808E1; /* je: equal / zero */

loc_0008085A: ;
    SET_LO8(ecx, MEM8(0x76F0E0));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00080880; /* jne: not equal / not zero */

loc_00080872: ;
    xmm1 = MEMF(esi + 0x11C); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */

loc_00080880: ;
    SET_LO8(ecx, MEM8(0x76EC82));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00080890; /* je: equal / zero */

loc_0008088A: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_00080890: ;
    SET_LO8(ecx, MEM8(0x7FA204));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000808A3; /* je: equal / zero */

loc_0008089A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 4) = xmm0; /* movss */

loc_000808A3: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, edi);
    edi = eax + 4;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_000808BC: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00035FD0(); /* call 0x00035FD0 */

loc_000808D4: ;
    esp = esp + 8;
    MEM16(esi + 0x3DE) = 0;
    POP32(esp, edi);

loc_000808E1: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000808F0
 * Original: 0x000808F0 - 0x00080B2E (574 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000808F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;

loc_000808F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    xmm0 = MEMF(ebx + edi + 0x260); /* movss */
    ebx = ebx + edi;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    xmm0 = MEMF(0x648D54); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008093A; /* jp: parity */

loc_0008092A: ;
    MEMF(ebx + 0x260) = xmm0; /* movss */
    MEMF(ebx + 0x268) = xmm0; /* movss */

loc_0008093A: ;
    xmm1 = MEMF(ebx + 0x264); /* movss */
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008095B; /* jp: parity */

loc_0008094B: ;
    MEMF(ebx + 0x264) = xmm0; /* movss */
    MEMF(ebx + 0x26C) = xmm0; /* movss */

loc_0008095B: ;
    SET_LO8(eax, MEM8(ebx + 0x545));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008097A; /* je: equal / zero */

loc_00080965: ;
    SET_LO8(eax, 0xFF);
    MEM8(ebx + 0x16E) = 0;
    MEM8(ebx + 0xB8) = LO8(eax);
    MEM8(ebx + 0xB9) = LO8(eax);

loc_0008097A: ;
    eax = ZX8(MEM8(ebx + 0x3A8));
    eax = MEM32(ebx + eax * 4 + 0x4B0);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000809C2; /* je: equal / zero */

loc_0008099A: ;
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000809C2; /* je: equal / zero */

loc_000809A4: ;
    SET_LO16(eax, MEM16(eax + 2));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000809C2; /* je: equal / zero */

loc_000809AD: ;
    edx = ZX16(LO16(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_000809C2: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00080B2E(); return; } /* je: equal / zero */

loc_000809D0: ;
    SET_LO8(edx, MEM8(ebx + 0x209));
    if (TEST_NZ(LO8(edx), 0x10)) { sub_00080B2E(); return; } /* jne: not equal / not zero */

loc_000809DF: ;
    eax = ZX8(LO8(eax));
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(edi + eax + 0x3C8);
    edi = edi + eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00080A06; /* jne: not equal / not zero */

loc_000809F6: ;
    esi = edi;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    g_seh_ebp = ebp; sub_00080C74(); return; /* tail jmp 0x00080C74 */

loc_00080A06: ;
    eax = MEM32(ebx + 0x12C);
    eax = eax << 6;
    eax = eax + ecx;
    esi = 0; /* xor self */
    if (TEST_NZ(LO8(edx), 4)) goto loc_00080A80; /* jne: not equal / not zero */

loc_00080A18: ;
    if (CMP_NE(esi, 1)) goto loc_00080A2A; /* jne: not equal / not zero */

loc_00080A1D: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ebx + 0x264); /* mulss */
    goto loc_00080A36;

loc_00080A2A: ;
    xmm0 = MEMF(ebx + 0x260); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */

loc_00080A36: ;
    ecx = esi * 4;
    xmm2 = MEMF(eax + ecx * 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4) = xmm2; /* movss */
    xmm2 = MEMF(eax + ecx * 4 + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4 + 4) = xmm2; /* movss */
    xmm2 = MEMF(eax + ecx * 4 + 8); /* movss */
    esi++;
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4 + 8) = xmm2; /* movss */
    if (CMP_L(esi, 3)) goto loc_00080A18; /* jl: less (signed <) */

loc_00080A71: ;
    edx = edi;
    g_seh_ebp = ebp; sub_00080C19(); return; /* tail jmp 0x00080C19 */

    goto loc_00080A80;

    /* nop */

loc_00080A80: ;
    ecx = esi;
    ecx = ecx << 4;
    xmm3 = MEMF(ecx + eax + 8); /* movss */
    xmm2 = MEMF(ecx + eax + 4); /* movss */
    xmm0 = MEMF(ecx + eax); /* movss */
    ecx = ecx + eax;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(esi, 1)) goto loc_00080AD6; /* jne: not equal / not zero */

loc_00080ACC: ;
    xmm0 = MEMF(ebx + 0x264); /* movss */
    goto loc_00080ADE;

loc_00080AD6: ;
    xmm0 = MEMF(ebx + 0x260); /* movss */

loc_00080ADE: ;
    xmm0 = xmm0 / MEMF(esp + 0xC); /* divss */
    ecx = esi * 4;
    xmm2 = MEMF(eax + ecx * 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4) = xmm2; /* movss */
    xmm2 = MEMF(eax + ecx * 4 + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4 + 4) = xmm2; /* movss */
    xmm2 = MEMF(eax + ecx * 4 + 8); /* movss */
    esi++;
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + ecx * 4 + 8) = xmm2; /* movss */
    if (CMP_L(esi, 3)) goto loc_00080A80; /* jl: less (signed <) */

loc_00080B27: ;
    edx = edi;
    g_seh_ebp = ebp; sub_00080C19(); return; /* tail jmp 0x00080C19 */

}

/**
 * sub_00080CC0
 * Original: 0x00080CC0 - 0x00080CD4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00080CC0: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    if (CMP_NE(LO8(eax), 3)) { sub_00080CD4(); return; } /* jne: not equal / not zero */

loc_00080CCA: ;
    MEM8(esi + 0x16E) = MEM8(esi + 0x16E) | 0xF;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00080DA0
 * Original: 0x00080DA0 - 0x00080EA2 (258 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080DA0: ;
    esp = esp - 0x28;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    xmm6 = MEMF(ebp + 0x9C); /* movss */
    eax = ebp + 0x90;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ZX16(MEM16(ebp + 0xCA));
    MEM32(esp + 8) = eax;
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x76F0BC));
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0xC) = xmm6; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00080E00; /* jne: not equal / not zero */

loc_00080DF9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00080E00; /* jne: not equal / not zero */

loc_00080DFD: ;
    xmm0 = xmm4; /* movaps */

loc_00080E00: ;
    SET_LO8(ecx, MEM8(0x76EC82));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00080E11; /* je: equal / zero */

loc_00080E0A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00080E11; /* jne: not equal / not zero */

loc_00080E0E: ;
    xmm0 = xmm4; /* movaps */

loc_00080E11: ;
    eax = MEM32(0x8470DC);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    eax = MEM32(edx + eax + 0x3E4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = 0;
    if (TEST_Z(eax, eax)) goto loc_00080E43; /* je: equal / zero */

loc_00080E31: ;
    ecx = MEM32(eax + 0x2B0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm5 = MEMF(0x648E94); /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_00080E46; /* jne: not equal / not zero */

loc_00080E43: ;
    xmm5 = xmm0; /* movaps */

loc_00080E46: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = MEM32(0x84A13C);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, ecx);
    edi = edx + eax + 0x148;
    esi = esp + 0x2C;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x3C) = 0;
    xmm2 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_00080E96: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_00080EA2(); return; } /* jne: not equal / not zero */

loc_00080E9D: ;
    xmm0 = xmm4; /* movaps */
    g_seh_ebp = ebp; sub_00080EB6(); return; /* tail jmp 0x00080EB6 */

}

/**
 * sub_00081120
 * Original: 0x00081120 - 0x0008118A (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00081120: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_00081160; /* je: equal / zero */

loc_0008112A: ;
    if (CMP_EQ(MEM8(ecx + 0x6DE), 0xFF)) goto loc_00081189; /* je: equal / zero */

loc_00081133: ;
    if (TEST_Z(ecx, ecx)) goto loc_00081160; /* je: equal / zero */

loc_00081137: ;
    if (CMP_EQ(MEM32(ecx + 0xC0), 0x10000)) goto loc_00081153; /* je: equal / zero */

loc_00081143: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2B0);
    if (TEST_Z(edx, edx)) goto loc_00081160; /* je: equal / zero */

loc_00081153: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) | LO8(edx);

loc_00081160: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_00081189; /* je: equal / zero */

loc_00081169: ;
    SET_LO8(ecx, MEM8(eax + 0x543));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00081179; /* je: equal / zero */

loc_00081173: ;
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) | LO8(ecx);

loc_00081179: ;
    SET_LO8(ecx, MEM8(eax + 0x544));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00081189; /* je: equal / zero */

loc_00081183: ;
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) | LO8(ecx);

loc_00081189: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00081190
 * Original: 0x00081190 - 0x000812C9 (313 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081190: ;
    eax = MEM32(0x84A144);
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(eax, eax)) goto loc_0008121A; /* jl: less (signed <) */

loc_000811A5: ;
    edi = 0; /* xor self */
    MEM8(esp + 0x13) = 0;
    ebp = 0; /* xor self */
    edi = edi;

loc_000811B0: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + edi), 0)) goto loc_00081201; /* je: equal / zero */

loc_000811BB: ;
    ecx = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(ecx + ebp + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ecx + ebp;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00081201; /* jne: not equal / not zero */

loc_000811CF: ;
    if (TEST_NZ(ebx, ebx)) goto loc_000811DC; /* jne: not equal / not zero */

loc_000811D3: ;
    PUSH32(esp, 0); sub_00080CC0(); /* call 0x00080CC0 */

loc_000811D8: ;
    MEM8(esp + edi + 0x14) = LO8(eax);

loc_000811DC: ;
    SET_LO8(eax, MEM8(esp + edi + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000811F2; /* jne: not equal / not zero */

loc_000811E4: ;
    edx = esp + 0x13;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00080DA0(); /* call 0x00080DA0 */

loc_000811EF: ;
    esp = esp + 8;

loc_000811F2: ;
    if (CMP_NE(ebx, MEM32(0x84A144))) goto loc_00081201; /* jne: not equal / not zero */

loc_000811FA: ;
    eax = esi;
    PUSH32(esp, 0); sub_00081120(); /* call 0x00081120 */

loc_00081201: ;
    ebp = ebp + 0x6D0;
    edi++;
    if (CMP_L(ebp, 0x36800)) goto loc_000811B0; /* jl: less (signed <) */

loc_00081210: ;
    eax = MEM32(0x84A144);
    ebx++;
    if (CMP_LE(ebx, eax)) goto loc_000811A5; /* jle: less or equal (signed <=) */

loc_0008121A: ;
    ebp = MEM32(0x84A5F8);
    ebx = 0; /* xor self */
    esi = ebp;

loc_00081224: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebx), 0)) goto loc_000812AB; /* je: equal / zero */

loc_0008122F: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000812AB; /* je: equal / zero */

loc_00081239: ;
    PUSH32(esp, 0); sub_00080CC0(); /* call 0x00080CC0 */

loc_0008123E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000812AB; /* jne: not equal / not zero */

loc_00081242: ;
    SET_LO8(ecx, MEM8(esi + 0x135));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008126A; /* je: equal / zero */

loc_0008124E: ;
    edi = edi;

loc_00081250: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + ebp + -1744;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00081250; /* jne: not equal / not zero */

loc_0008126A: ;
    SET_LO8(ecx, MEM8(esi + 0x543));
    SET_LO8(edx, MEM8(esi + 0x544));
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x16E) = LO8(edx);
    if (TEST_S(ecx, ecx)) goto loc_000812AB; /* jl: less (signed <) */

loc_00081293: ;
    edi = MEM32(0x84A144);
    eax = eax - esi;
    ecx = esi + 0xB8;
    edi++;

loc_000812A2: ;
    SET_LO8(edx, MEM8(eax + ecx));
    MEM8(ecx) = LO8(edx);
    ecx++;
    edi--;
    if ((edi != 0)) goto loc_000812A2; /* jne: not equal / not zero */

loc_000812AB: ;
    ebx++;
    esi = esi + 0x6D0;
    if (CMP_L(ebx, 0x80)) goto loc_00081224; /* jl: less (signed <) */

loc_000812BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_000812D0
 * Original: 0x000812D0 - 0x0008130F (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000812D0(void)
{

loc_000812D0: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    eax = eax << 8;
    MEM8(ecx + 0x1AE) = LO8(edx);
    eax = eax | MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 8;
    eax = eax | edx;
    edx = MEM32(esp + 0xC);
    eax = eax << 8;
    eax = eax | edx;
    MEM8(ecx + 0x1AC) = 4;
    MEM8(ecx + 0x1AD) = 0;
    MEM32(ecx + 0x1A8) = eax;
    MEM8(ecx + 0x1AF) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00081310
 * Original: 0x00081310 - 0x0008140E (254 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081310: ;
    eax = ZX8(MEM8(ecx + 0x1AC));
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 5)) goto loc_0008140D; /* ja: above (unsigned >) */

loc_00081323: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x81410); /* switch: 6 entries, 5 targets */
    if (_jt == 0x00081332u) goto loc_00081332;
    if (_jt == 0x0008135Bu) goto loc_0008135B;
    if (_jt == 0x0008137Eu) goto loc_0008137E;
    if (_jt == 0x00081397u) goto loc_00081397;
    if (_jt == 0x000813DEu) goto loc_000813DE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00081332: ;
    eax = ZX8(MEM8(ecx + 0x1AE));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    SET_LO8(edx, MEM8(ecx + 0x1AD));
    esi = ZX8(LO8(edx));
    if (CMP_G(esi, eax)) goto loc_000813F9; /* jg: greater (signed >) */

loc_00081351: ;
    POP32(esp, esi);
    MEM8(ecx + 0x1AD) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008135B: ;
    SET_LO8(edx, MEM8(ecx + 0x1AF));
    eax = ebx + ebx * 4;
    esi = ZX8(LO8(edx));
    eax = eax << 1;
    if (CMP_LE(esi, eax)) goto loc_00081377; /* jle: less or equal (signed <=) */

loc_0008136D: ;
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEM8(ecx + 0x1AF) = LO8(edx);
    goto loc_0008137E;

loc_00081377: ;
    MEM8(ecx + 0x1AC) = 0;

loc_0008137E: ;
    SET_LO8(eax, MEM8(ecx + 0x1AE));
    SET_LO8(edx, MEM8(ecx + 0x1AD));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    POP32(esp, esi);
    MEM8(ecx + 0x1AD) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00081397: ;
    eax = ZX8(MEM8(ecx + 0x1AE));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    SET_LO8(edx, MEM8(ecx + 0x1AD));
    PUSH32(esp, edi);
    edi = ZX8(LO8(edx));
    esi = 0xFF;
    esi = esi - eax;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_GE(edi, esi)) goto loc_000813CD; /* jge: greater or equal (signed >=) */

loc_000813BB: ;
    SET_LO8(edx, LO8(edx) + LO8(eax));
    POP32(esp, esi);
    MEM8(ecx + 0x1AD) = LO8(edx);
    MEM8(ecx + 0x1AC) = 7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000813CD: ;
    POP32(esp, esi);
    MEM8(ecx + 0x1AD) = 0xFF;
    MEM8(ecx + 0x1AC) = 7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000813DE: ;
    eax = ZX8(MEM8(ecx + 0x1AE));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    SET_LO8(edx, MEM8(ecx + 0x1AD));
    esi = ZX8(LO8(edx));
    if (CMP_LE(esi, eax)) goto loc_00081404; /* jle: less or equal (signed <=) */

loc_000813F9: ;
    SET_LO8(edx, LO8(edx) - LO8(eax));
    POP32(esp, esi);
    MEM8(ecx + 0x1AD) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00081404: ;
    MEM8(ecx + 0x1AC) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008140D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00081430
 * Original: 0x00081430 - 0x0008163E (526 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081430(void)
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

loc_00081430: ;
    esp = esp - 8;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (CMP_L(eax, 0xFFFFFFFFu)) goto loc_00081480; /* jl: less (signed <) */

loc_00081443: ;
    if (CMP_GE(eax, 4)) goto loc_00081480; /* jge: greater or equal (signed >=) */

loc_00081448: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00081480; /* je: equal / zero */

loc_0008144D: ;
    eax = eax + eax * 4;
    eax = eax << 2;
    ebp = MEM32(eax + 0x775D74);
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 0x775D78);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 0x775D7C);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x775D80);
    MEM32(edi) = ebp;
    if (CMP_EQ(MEM8(eax + 0x775D70), 1)) goto loc_00081637; /* je: equal / zero */

loc_00081480: ;
    eax = ZX8(MEM8(esi + 0x1AC));
    eax--;
    if (CMP_A(eax, 6)) goto loc_0008162C; /* ja: above (unsigned >) */

loc_00081491: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x81640); /* switch: 7 entries, 4 targets */
    if (_jt == 0x00081498u) goto loc_00081498;
    if (_jt == 0x00081511u) goto loc_00081511;
    if (_jt == 0x00081552u) goto loc_00081552;
    if (_jt == 0x000815EBu) goto loc_000815EB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00081498: ;
    eax = ZX8(MEM8(esi + 0x1AD));
    MEM32(ebx) = eax;
    eax = ZX8(MEM8(esi + 0x1AE));
    MEM32(edx) = eax;
    edx = ZX8(MEM8(esi + 0x1AF));
    MEM32(ecx) = edx;
    esi = MEM32(esi + 0x1A8);
    if (CMP_BE(esi, 0xFF)) goto loc_000814FD; /* jbe: below or equal (unsigned <=) */

loc_000814C1: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000814DA; /* ja: above (unsigned >) */

loc_000814CD: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000814DD; /* jbe: below or equal (unsigned <=) */

loc_000814DA: ;
    xmm0 = xmm1; /* movaps */

loc_000814DD: ;
    xmm0 = xmm0 * MEMF(0x649784); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(edi) = eax;
    ecx = MEM32(edi);
    POP32(esp, esi);
    eax = 0xFF;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000814FD: ;
    MEM32(edi) = esi;
    ecx = esi;
    POP32(esp, esi);
    eax = 0xFF;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00081511: ;
    MEM32(ebx) = 0;
    MEM32(edx) = 0;
    MEM32(ecx) = 0;
    eax = ZX8(MEM8(esi + 0x1AD));
    MEM32(edi) = eax;
    if (CMP_NE(MEM8(esi + 0x1AC), 3)) goto loc_0008162C; /* jne: not equal / not zero */

loc_00081539: ;
    ecx = 0xFF;
    ecx = ecx - eax;
    POP32(esp, esi);
    eax = 0xFF;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(edi) = ecx;
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00081552: ;
    eax = MEM32(esi + 0x1A8);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x18;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0xC);
    eax = eax >> 0x10;
    eax = ZX8(LO8(eax));
    MEM32(ebx) = eax;
    eax = ZX8(MEM8(esi + 0x1A9));
    MEM32(edx) = eax;
    edx = MEM32(esi + 0x1A8);
    edx = edx & 0xFF;
    MEM32(ecx) = edx;
    eax = ZX8(MEM8(esi + 0x1AD));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000815B8: ;
    MEM32(edi) = eax;
    ecx = ZX8(MEM8(esi + 0x1AF));
    edx = 0xFF;
    edx = edx - ecx;
    ecx = 0xFF;
    ecx = ecx - eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx >> 8);
    edx = edx + eax;
    POP32(esp, esi);
    eax = 0xFF;
    ecx = edx;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(edi) = edx;
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000815EB: ;
    eax = MEM32(esi + 0x1A8);
    MEM32(esp + 0xC) = eax;
    ebp = ZX8(MEM8(esp + 0xE));
    MEM32(ebx) = ebp;
    ebx = ZX8(MEM8(esi + 0x1A9));
    MEM32(edx) = ebx;
    edx = MEM32(esi + 0x1A8);
    edx = edx & 0xFF;
    MEM32(ecx) = edx;
    ecx = ZX8(MEM8(esi + 0x1AD));
    eax = eax >> 0x18;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = 0xFF;
    edx = edx - ecx;
    MEM32(edi) = edx;

loc_0008162C: ;
    ecx = MEM32(edi);
    eax = 0xFF;
    eax = eax - ecx;
    MEM32(edi) = eax;

loc_00081637: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00081660
 * Original: 0x00081660 - 0x0008179F (319 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081660(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00081660: ;
    eax = MEM32(esi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_00081772; /* je: equal / zero */

loc_0008166B: ;
    SET_LO8(ecx, MEM8(eax + 0x63));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000816F9; /* je: equal / zero */

loc_00081676: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_000816F9; /* je: equal / zero */

loc_00081680: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_000816F9; /* je: equal / zero */

loc_00081687: ;
    ecx = MEM32(ecx + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000816F9; /* je: equal / zero */

loc_0008168E: ;
    eax = ZX8(MEM8(esi + 0x3A8));
    edx = MEM32(esi + eax * 4 + 0x4B0);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 0x18);
    SET_LO16(eax, MEM16(edx + 2));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000816C2; /* je: equal / zero */

loc_000816B3: ;
    eax = ZX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */

loc_000816C2: ;
    PUSH32(esp, esi);
    ecx = ecx + 0x20;
    PUSH32(esp, ecx);
    ecx = esi + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000816D3: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x264); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x9C) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_000816F9: ;
    if (TEST_Z(eax, eax)) goto loc_00081772; /* je: equal / zero */

loc_000816FD: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1D4);
    edx = edx + ecx;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0x264); /* mulss */
    PUSH32(esp, edi);
    edx = esi + 0x78;
    edi = MEM32(edx);
    ecx = esi + 0x90;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = edx;
    xmm1 = MEMF(esi + 0x94); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x94) = xmm1; /* movss */
    eax = ZX16(MEM16(eax + 0xE));
    xmm1 = MEMF(esi + 0x260); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x264); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm0 > xmm1)) goto loc_00081796; /* ja: above (unsigned >) */

loc_00081766: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00081772: ;
    ecx = esi + 0x78;
    eax = MEM32(ecx);
    edx = esi + 0x90;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */

loc_00081796: ;
    MEMF(esi + 0x9C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000817A0
 * Original: 0x000817A0 - 0x000817CB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000817A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000817A0: ;
    if (TEST_Z(eax, eax)) goto loc_000817BE; /* je: equal / zero */

loc_000817A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 0x90;
    edi = MEM32(esi);
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    MEM32(eax + 4) = edi;
    esi = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = esi;
    POP32(esp, esi);

loc_000817BE: ;
    if (TEST_Z(ecx, ecx)) goto loc_000817CA; /* je: equal / zero */

loc_000817C2: ;
    eax = MEM32(edx + 0x9C);
    MEM32(ecx) = eax;

loc_000817CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000817D0
 * Original: 0x000817D0 - 0x00081802 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000817D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000817D0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 0x13D;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = 2;
    /* nop */
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_B(LO8(eax), 0xA)) { sub_00081802(); return; } /* jb: below (unsigned <) */

loc_000817FA: ;
    edx = ZX8(LO8(eax));
    edx = edx - 0xA;
    g_seh_ebp = ebp; sub_00081851(); return; /* tail jmp 0x00081851 */

}

/**
 * sub_00081A30
 * Original: 0x00081A30 - 0x00081D15 (741 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081A30: ;
    ecx = MEM32(0x84A5F8);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(edi + ecx + 0x135));
    edi = edi + ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00081C0F; /* je: equal / zero */

loc_00081A54: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebx = eax + ecx + -1744;
    if (TEST_NZ(MEM8(edi + 0x209), 2)) goto loc_00081D0F; /* jne: not equal / not zero */

loc_00081A71: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x78;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00081AB0; /* jne: not equal / not zero */

loc_00081A96: ;
    edx = MEM32(ebx + 0x78);
    MEM32(ebp) = edx;
    eax = MEM32(ebx + 0x7C);
    MEM32(edi + 0x7C) = eax;
    ecx = MEM32(ebx + 0x80);
    MEM32(edi + 0x80) = ecx;
    goto loc_00081AE5;

loc_00081AB0: ;
    eax = MEM32(edi + 0x12C);
    esi = esp + 0x1C;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00081AC1: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(edi + 0x80) = xmm0; /* movss */

loc_00081AE5: ;
    xmm0 = MEMF(ebp); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00081B18; /* jp: parity */

loc_00081AF5: ;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00081B18; /* jp: parity */

loc_00081B05: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00081B24; /* jnp: not parity */

loc_00081B18: ;
    PUSH32(esp, 0x870ED4);
    ecx = edi;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_00081B24: ;
    edx = MEM32(ebx + 0x294);
    SET_LO8(eax, MEM8(edi + 0x209));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x294) = edx;
    MEMF(edi + 0xD0) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_00081B95; /* jne: not equal / not zero */

loc_00081B45: ;
    SET_LO16(ecx, MEM16(ebx + 0x170));
    MEM16(edi + 0x170) = LO16(ecx);
    edx = MEM32(ebx + 0x110);
    MEM32(edi + 0x110) = edx;
    ecx = MEM32(ebx + 0x114);
    MEM32(edi + 0x114) = ecx;
    SET_LO16(edx, MEM16(ebx + 0x170));
    MEM16(edi + 0x170) = LO16(edx);
    SET_LO16(ecx, MEM16(ebx + 0x174));
    MEM16(edi + 0x174) = LO16(ecx);
    SET_LO16(edx, MEM16(ebx + 0x172));
    MEM16(edi + 0x172) = LO16(edx);

loc_00081B95: ;
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_00081C0D; /* jne: not equal / not zero */

loc_00081B99: ;
    SET_LO8(eax, MEM8(ebx + 0xB4));
    MEM8(edi + 0xB4) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0xB5));
    MEM8(edi + 0xB5) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0xB6));
    MEM8(edi + 0xB6) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0xB7));
    edx = MEM32(0x84A144);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM8(edi + 0xB7) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0xBA));
    MEM8(edi + 0xBA) = LO8(ecx);
    if (TEST_S(edx, edx)) goto loc_00081C0D; /* jl: less (signed <) */

loc_00081BDF: ;
    esi = ebx;
    ecx = ebx + 0xBF;
    eax = edi + 0xB8;
    esi = esi - edi;
    ebp = edx + 1;

loc_00081BF2: ;
    SET_LO8(edx, MEM8(esi + eax));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -4));
    MEM8(eax + 3) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -2));
    MEM8(eax + 5) = LO8(edx);
    eax++;
    ecx++;
    ebp--;
    if ((ebp != 0)) goto loc_00081BF2; /* jne: not equal / not zero */

loc_00081C0D: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00081C0F: ;
    if (CMP_NE(MEM32(edi + 0x68), 0x41)) goto loc_00081D0F; /* jne: not equal / not zero */

loc_00081C19: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00081D0F; /* je: equal / zero */

loc_00081C27: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + -1580);
    if (CMP_EQ(eax, 0x48)) goto loc_00081CBF; /* je: equal / zero */

loc_00081C42: ;
    if (CMP_NE(eax, 0x4B)) goto loc_00081D0F; /* jne: not equal / not zero */

loc_00081C4B: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_00081D0F; /* je: equal / zero */

loc_00081C56: ;
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00081D0F; /* je: equal / zero */

loc_00081C61: ;
    ecx = MEM32(ecx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00081D0F; /* je: equal / zero */

loc_00081C6C: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_00081C84; /* jne: not equal / not zero */

loc_00081C74: ;
    eax = 0x41;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00081C7E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00081C84: ;
    if (CMP_BE(MEM16(0x770412), 1)) goto loc_00081C74; /* jbe: below or equal (unsigned <=) */

loc_00081C8E: ;
    eax = MEM32(eax + 0x50);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = edi;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00081CB6: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00081CBF: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_00081D0F; /* je: equal / zero */

loc_00081CC6: ;
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00081D0F; /* je: equal / zero */

loc_00081CCD: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_00081D0F; /* je: equal / zero */

loc_00081CD3: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00081C74; /* je: equal / zero */

loc_00081CDB: ;
    if (CMP_BE(MEM16(0x770412), 0)) goto loc_00081C74; /* jbe: below or equal (unsigned <=) */

loc_00081CE5: ;
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00081D0C: ;
    esp = esp + 0x20;

loc_00081D0F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00081D20
 * Original: 0x00081D20 - 0x00081E5D (317 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081D20: ;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00081E5B; /* je: equal / zero */

loc_00081D31: ;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    ecx = MEM32(edi + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x50);
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_00081D48; /* jne: not equal / not zero */

loc_00081D3D: ;
    MEM8(edi + 0x3A9) = 0;
    ebx = 0; /* xor self */
    goto loc_00081D6A;

loc_00081D48: ;
    edx = ZX8(MEM8(edi + 0x511));
    ebx = ZX8(LO8(eax));
    ebx--;
    if (CMP_GE(ebx, edx)) goto loc_00081E59; /* jge: greater or equal (signed >=) */

loc_00081D5B: ;
    eax = ZX8(MEM8(edi + 0x3A8));
    if (CMP_EQ(eax, ebx)) goto loc_00081E59; /* je: equal / zero */

loc_00081D6A: ;
    ecx = MEM32(edi + 0x50C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + ebx * 4);
    eax = esi;
    PUSH32(esp, 0); sub_002B3990(); /* call 0x002B3990 */

loc_00081D7B: ;
    MEM8(edi + 0x3A8) = LO8(ebx);
    SET_LO8(eax, MEM8(0x76F0E0));
    SET_LO8(ebx, 1);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00081D93; /* jne: not equal / not zero */

loc_00081D8C: ;
    MEM8(0x76EDF8) = 0;

loc_00081D93: ;
    ecx = MEM32(edi + 0x74);
    if (CMP_EQ(ebp, MEM32(ecx + 0x50))) goto loc_00081E40; /* je: equal / zero */

loc_00081D9F: ;
    eax = ZX16(MEM16(esi * 2 + 0x770390));
    edx = MEM32(edi + 0xA4);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(edi + 0xA4) = 0xFFFFFFFFu;
    if (CMP_B(edx, eax)) goto loc_00081E2A; /* jb: below (unsigned <) */

loc_00081DBB: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00081E40; /* je: equal / zero */

loc_00081DC5: ;
    if (CMP_GE(eax, 0x205)) goto loc_00081E40; /* jge: greater or equal (signed >=) */

loc_00081DCC: ;
    if (TEST_Z(ecx, ecx)) goto loc_00081E40; /* je: equal / zero */

loc_00081DD0: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00081E40; /* je: equal / zero */

loc_00081DD7: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_00081E40; /* je: equal / zero */

loc_00081DDD: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_00081DEC; /* jne: not equal / not zero */

loc_00081DE5: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00081DEA: ;
    goto loc_00081E40;

loc_00081DEC: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_00081DFE; /* ja: above (unsigned >) */

loc_00081DF7: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00081DFC: ;
    goto loc_00081E40;

loc_00081DFE: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(ebx));
    eax = edi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00081E25: ;
    esp = esp + 0x20;
    goto loc_00081E40;

loc_00081E2A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00081E3D: ;
    esp = esp + 0x18;

loc_00081E40: ;
    (void)0; /* cmp MEM8(0x76F0E0), LO8(ebx) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM8(0x76F0E0), LO8(ebx))) goto loc_00081E4F; /* jne: not equal / not zero */

loc_00081E49: ;
    MEM8(0x76EDF8) = LO8(ebx);

loc_00081E4F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002CF1C0(); return; /* tail jmp 0x002CF1C0 */

loc_00081E59: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00081E5B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00081E60
 * Original: 0x00081E60 - 0x00081E73 (19 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00081E60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(edi, edi)) { sub_00081E73(); return; } /* jne: not equal / not zero */

loc_00081E6C: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00081EE0
 * Original: 0x00081EE0 - 0x00081F06 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081EE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    ebx = 0; /* xor self */
    if (CMP_NE(edi, ebx)) { sub_00081F06(); return; } /* jne: not equal / not zero */

loc_00081EF3: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00081EFD; /* je: equal / zero */

loc_00081EF8: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00081EFD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00081FC0
 * Original: 0x00081FC0 - 0x00081FF2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00081FC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x74);
    edx = MEM32(edi + 0x68);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(eax + 0x60));
    ebp++;
    (void)0; /* cmp edx, 0x45 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = 0x10;
    if (CMP_EQ(edx, 0x45)) goto loc_00081FE9; /* je: equal / zero */

loc_00081FD8: ;
    if (CMP_NE(edx, 0xA2)) { sub_00081FF2(); return; } /* jne: not equal / not zero */

loc_00081FE0: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00081FF2(); return; } /* je: equal / zero */

loc_00081FE9: ;
    POP32(esp, esi);
    eax = 0x10;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00082260
 * Original: 0x00082260 - 0x000822A4 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00082260: ;
    esp = esp - 0x10;
    xmm0 = MEMF(eax + 0x9C); /* movss */
    ecx = eax + 0x90;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = edx;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x228); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + 8) = ecx;
    if ((xmm0 <= xmm1)) { sub_000822A4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0008229B: ;
    eax = 1;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000822B0
 * Original: 0x000822B0 - 0x000822E8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000822B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000822B0: ;
    if (CMP_NE(MEM32(edx + 0x64), 1)) goto loc_000822CA; /* jne: not equal / not zero */

loc_000822B6: ;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ZX8(MEM8(edx + 0x16E));
    ecx = ecx & eax;
    if (CMP_EQ(ecx, eax)) goto loc_000822E5; /* je: equal / zero */

loc_000822CA: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000822DC; /* jne: not equal / not zero */

loc_000822D3: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) { sub_000822E8(); return; } /* jne: not equal / not zero */

loc_000822DC: ;
    if (CMP_B(MEM8(edx + 0x3A8), 2)) { sub_000822E8(); return; } /* jb: below (unsigned <) */

loc_000822E5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000822F0
 * Original: 0x000822F0 - 0x00082351 (97 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000822F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000822F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x8C);
    if (TEST_Z(edi, edi)) goto loc_0008234F; /* je: equal / zero */

loc_000822FF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    if (CMP_BE(esi & esi, 0)) goto loc_00082319; /* jbe: below or equal (unsigned <=) */

loc_0008230B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x47);
    eax = ebx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_00082319: ;
    eax = MEM32(edi + 8);
    if (CMP_BE(eax & eax, 0)) goto loc_0008234D; /* jbe: below or equal (unsigned <=) */

loc_00082320: ;
    eax = MEM32(edi + 0xC);
    if (CMP_L(eax, 0xA)) goto loc_0008234D; /* jl: less (signed <) */

loc_00082328: ;
    if (CMP_G(eax, 0x19)) goto loc_0008234D; /* jg: greater (signed >) */

loc_0008232D: ;
    ecx = MEM32(edi + 0x14);
    esi = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    eax = ebx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_0008233D: ;
    edx = MEM32(edi + 0x1C);
    esi = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3B);
    eax = ebx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_0008234D: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008234F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00082360
 * Original: 0x00082360 - 0x00082681 (801 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00082360: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    eax = MEM32(0x76FF2C);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(eax + ecx + 0x1F4); /* movss */
    xmm5 = MEMF(eax + ecx + 0x1F8); /* movss */
    xmm3 = MEMF(eax + ecx + 0x21C); /* movss */
    xmm4 = MEMF(eax + ecx + 0x214); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + ecx;
    eax = MEM32(esp + 0x54);
    eax = eax - 0;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(0x648D20); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm5; /* divss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 * MEMF(0x648EF4); /* mulss */
    xmm1 = xmm1 + MEMF(0x875610); /* addss */
    MEM32(esp + 4) = 0;
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(0x875610) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if ((eax == 0)) goto loc_00082567; /* je: equal / zero */

loc_00082472: ;
    eax--;
    if ((eax != 0)) goto loc_0008267C; /* jne: not equal / not zero */

loc_00082479: ;
    ecx = MEM32(0x847194);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0008253A; /* jne: not equal / not zero */

loc_0008248B: ;
    SET_LO8(eax, MEM8(0x75C2CC));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_0008249B; /* ja: above (unsigned >) */

loc_00082494: ;
    eax = 0; /* xor self */
    goto loc_0008252D;

loc_0008249B: ;
    esi = MEM32(0x75C2C8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_000824D0; /* jne: not equal / not zero */

loc_000824A8: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000824B9: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000824C1: ;
    ecx = MEM32(0x75C2C8);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C2C8);

loc_000824D0: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000824FC; /* jne: not equal / not zero */

loc_000824D7: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_000824DF: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C2C8);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000824FC; /* jne: not equal / not zero */

loc_000824EF: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C2C8);

loc_000824FC: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00082525; /* jne: not equal / not zero */

loc_00082504: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00082520; /* jne: not equal / not zero */

loc_0008250E: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00082517: ;
    esi = MEM32(0x75C2C8);
    esp = esp + 8;

loc_00082520: ;
    eax = MEM32(esi + 4);
    goto loc_0008252D;

loc_00082525: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0008252A: ;
    eax = MEM32(eax + 4);

loc_0008252D: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00082536: ;
    ecx = MEM32(esp + 4);

loc_0008253A: ;
    eax = MEM32(esp + 0x58);
    if (TEST_Z(eax, eax)) goto loc_0008255C; /* je: equal / zero */

loc_00082542: ;
    edx = MEM32(esp + 0x4C);
    edx = MEM32(edx + 8);
    edx = MEM32(edx + 0x50);
    PUSH32(esp, edx);
    edx = 1;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_00082557: ;
    goto loc_00082644;

loc_0008255C: ;
    PUSH32(esp, ecx);
    eax = 1;
    goto loc_0008263F;

loc_00082567: ;
    SET_LO8(eax, MEM8(0x75C2CC));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00082577; /* ja: above (unsigned >) */

loc_00082570: ;
    eax = 0; /* xor self */
    goto loc_00082609;

loc_00082577: ;
    esi = MEM32(0x75C2C8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_000825AC; /* jne: not equal / not zero */

loc_00082584: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00082595: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0008259D: ;
    ecx = MEM32(0x75C2C8);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C2C8);

loc_000825AC: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000825D8; /* jne: not equal / not zero */

loc_000825B3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_000825BB: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C2C8);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000825D8; /* jne: not equal / not zero */

loc_000825CB: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C2C8);

loc_000825D8: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00082601; /* jne: not equal / not zero */

loc_000825E0: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000825FC; /* jne: not equal / not zero */

loc_000825EA: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000825F3: ;
    esi = MEM32(0x75C2C8);
    esp = esp + 8;

loc_000825FC: ;
    eax = MEM32(esi + 4);
    goto loc_00082609;

loc_00082601: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00082606: ;
    eax = MEM32(eax + 4);

loc_00082609: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00082612: ;
    eax = MEM32(esp + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_00082634; /* je: equal / zero */

loc_0008261E: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_00082632: ;
    goto loc_0008263C;

loc_00082634: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0008263C: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */

loc_0008263F: ;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00082644: ;
    ecx = 0x97;
    edx = esp + 8;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00082652: ;
    ecx = 0x98;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00082660: ;
    ecx = 0x99;
    edx = esp + 0x28;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0008266E: ;
    ecx = 0x9A;
    edx = esp + 0x38;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0008267C: ;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00082690
 * Original: 0x00082690 - 0x000826DA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082690: ;
    ecx = MEM32(0x5499F0);
    eax = 3;
    ecx = ecx | 1;
    MEM32(0x547330) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547334) = eax;
    eax = MEM32(0x76FF30);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000826BC: ;
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_000826DA(); return; } /* ja: above (unsigned >) */

loc_000826C7: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x82710)); return; /* indirect tail jmp */

    ecx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_000826DC(); return; /* tail jmp 0x000826DC */

    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_000826DC(); return; /* tail jmp 0x000826DC */

}

/**
 * sub_00082730
 * Original: 0x00082730 - 0x00082BA7 (1143 bytes, 265 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082730: ;
    esp = esp - 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(eax, 3)) goto loc_00082BA2; /* je: equal / zero */

loc_0008273F: ;
    if (CMP_EQ(eax, 4)) goto loc_00082BA2; /* je: equal / zero */

loc_00082748: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_0008276B; /* je: equal / zero */

loc_00082752: ;
    if (CMP_EQ(eax, 8)) goto loc_0008276B; /* je: equal / zero */

loc_00082757: ;
    if (CMP_EQ(eax, 0xB)) goto loc_0008276B; /* je: equal / zero */

loc_0008275C: ;
    if (CMP_EQ(eax, 5)) goto loc_0008276B; /* je: equal / zero */

loc_00082761: ;
    if (CMP_EQ(eax, 6)) goto loc_0008276B; /* je: equal / zero */

loc_00082766: ;
    if (CMP_NE(eax, 7)) goto loc_00082778; /* jne: not equal / not zero */

loc_0008276B: ;
    edx = MEM32(esp + 0x20);
    MEM32(0x81BE48) = ecx;
    MEM8(edx) = 0;

loc_00082778: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(eax, ecx)) goto loc_00082797; /* jne: not equal / not zero */

loc_0008277D: ;
    eax = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00082B7B; /* je: equal / zero */

loc_0008278E: ;
    MEM32(esp + 8) = eax;
    goto loc_00082B7B;

loc_00082797: ;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = MEM32(0x8470DC);
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x770);
    PUSH32(esp, esi);
    esi = MEM32(ecx + ebp + 0x3E0);
    PUSH32(esp, 0); sub_002C38C0(); /* call 0x002C38C0 */

loc_000827B8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00082843; /* je: equal / zero */

loc_000827C0: ;
    edx = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00082834; /* je: equal / zero */

loc_000827CD: ;
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(MEM32(edi + 0x64), 1)) goto loc_0008281B; /* jne: not equal / not zero */

loc_000827D7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D80); /* movss */
    MEM32(0x76FF30) = 0x24B;
    MEMF(edi + 0x624) = xmm0; /* movss */
    MEMF(edi + 0x628) = xmm1; /* movss */
    MEMF(edi + 0x62C) = xmm0; /* movss */
    MEMF(edi + 0x630) = xmm0; /* movss */
    MEM32(0x84B824) = 0x82690;
    goto loc_00082B79;

loc_0008281B: ;
    MEM32(0x76FF30) = 0x24C;
    MEM32(0x84B824) = 0x82690;
    goto loc_00082B79;

loc_00082834: ;
    MEM32(0x84B824) = 0;
    goto loc_00082B79;

loc_00082843: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C3910(); /* call 0x002C3910 */

loc_0008284A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008287E; /* je: equal / zero */

loc_0008284E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x624) = xmm0; /* movss */
    MEMF(edi + 0x628) = xmm1; /* movss */
    MEMF(edi + 0x62C) = xmm0; /* movss */
    MEMF(edi + 0x630) = xmm0; /* movss */
    goto loc_00082B79;

loc_0008287E: ;
    eax = edi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_00082885: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00082A84; /* je: equal / zero */

loc_0008288D: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00082B79; /* je: equal / zero */

loc_0008289E: ;
    ecx = MEM32(0x87B568);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x7F9F60);
    if (CMP_EQ(ecx, eax)) goto loc_00082A14; /* je: equal / zero */

loc_000828B5: ;
    ecx = MEM32(0x87B564);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    ecx = 0x87B560;
    edx = 0x87B55C;
    MEM32(0x87B568) = eax;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000828E2: ;
    fp_push(MEMF(0x87B55C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm7 = MEMF(0x64909C); /* movss */
    esp = esp + 0xC;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00082920; /* jbe: below or equal (unsigned <=) */

loc_00082907: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0008290C: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648EF4); /* subss */
    MEMF(0x87B564) = xmm0; /* movss */

loc_00082920: ;
    edx = MEM32(0x87B558);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edx);
    ecx = 0x87B554;
    edx = 0x87B550;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00082948: ;
    fp_push(MEMF(0x87B550)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 0xC;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0008297E; /* jbe: below or equal (unsigned <=) */

loc_00082965: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0008296A: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648EF4); /* subss */
    MEMF(0x87B558) = xmm0; /* movss */

loc_0008297E: ;
    eax = edi + 0x78;
    PUSH32(esp, eax);
    ecx = edi + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0008298E: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x7FA21C); /* movss */
    esp = esp + 8;
    /* ucomiss xmm3, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000829AA; /* jp: parity */

loc_000829A5: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000829B6;

loc_000829AA: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / xmm3; /* divss */

loc_000829B6: ;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x649640); /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(0x87B54C) = xmm1; /* movss */
    if ((xmm2 <= xmm1)) goto loc_000829D9; /* jbe: below or equal (unsigned <=) */

loc_000829CF: ;
    MEMF(0x87B54C) = xmm2; /* movss */
    goto loc_000829EE;

loc_000829D9: ;
    xmm0 = MEMF(0x648E64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000829EE; /* jbe: below or equal (unsigned <=) */

loc_000829E6: ;
    MEMF(0x87B54C) = xmm0; /* movss */

loc_000829EE: ;
    edx = MEM32(0x87B54C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = 0x87B548;
    edx = 0x87B544;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00082A11: ;
    esp = esp + 0xC;

loc_00082A14: ;
    xmm0 = MEMF(0x87B544); /* movss */
    xmm0 = xmm0 + MEMF(0x87B55C); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082A3B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082A55: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082A6F: ;
    xmm0 = MEMF(0x87B544); /* movss */
    xmm0 = xmm0 + MEMF(0x87B550); /* addss */
    goto loc_00082B52;

loc_00082A84: ;
    eax = MEM32(edi + 0x64);
    if (CMP_EQ(eax, 0x3D)) goto loc_00082A95; /* je: equal / zero */

loc_00082A8C: ;
    if (CMP_NE(eax, 0x3F)) goto loc_00082B79; /* jne: not equal / not zero */

loc_00082A95: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00082AA0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = edi; /* cmove */
    eax = MEM32(eax + 0x238);
    PUSH32(esp, 0); sub_00332B70(); /* call 0x00332B70 */

loc_00082AB0: ;
    ecx = MEM32(0x8470DC);
    edx = MEM32(ecx + ebp + 0x3E0);
    ecx = MEM32(edx + 0x238);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_00082B79; /* jne: not equal / not zero */

loc_00082ACB: ;
    eax = MEM32(edi + 0x570);
    eax = MEM32(eax + 0x30);
    if (CMP_EQ(eax, 2)) goto loc_00082AE2; /* je: equal / zero */

loc_00082AD9: ;
    if (CMP_NE(eax, 3)) goto loc_00082B79; /* jne: not equal / not zero */

loc_00082AE2: ;
    edx = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x26);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00082B79; /* je: equal / zero */

loc_00082AF3: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082B16: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082B30: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082B4A: ;
    xmm0 = MEMF(0x648D3C); /* movss */

loc_00082B52: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00082B69: ;
    MEM32(0x76FF2C) = ebx;
    MEM32(0x84B824) = 0x82360;

loc_00082B79: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00082B7B: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x81BE48) = ecx;
    eax = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_00082BB0(); /* call 0x00082BB0 */

loc_00082B9E: ;
    esp = esp + 8;
    POP32(esp, ebx);

loc_00082BA2: ;
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
 * sub_00082BB0
 * Original: 0x00082BB0 - 0x00082C18 (104 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082BB0: ;
    xmm0 = MEMF(edi + 0x628); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 2;
    edx = edx + esi;
    if ((edx == 0)) { sub_00082C18(); return; } /* je: equal / zero */

loc_00082BCB: ;
    SET_LO8(eax, MEM8(edx + ecx + 0x1E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00082BDD; /* jne: not equal / not zero */

loc_00082BD3: ;
    /* ucomiss xmm0, MEMF(edx + ecx * 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00082C18(); return; } /* jnp: not parity */

loc_00082BDD: ;
    SET_LO16(eax, MEM16(0x7F9F60));
    MEMF(edx + ecx * 4) = xmm0; /* movss */
    MEM16(edx + ecx * 2 + 0x14) = LO16(eax);
    MEM8(edx + ecx + 0x1E) = 0;
    MEM8(ebx) = 1;
    xmm0 = MEMF(edi + 0x628); /* movss */
    MEM32(0x84B828) = 0x84110;
    MEM8(0x770004) = 1;
    MEMF(0x770008) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00082C1F(); return; /* tail jmp 0x00082C1F */

}

/**
 * sub_00082C60
 * Original: 0x00082C60 - 0x00082C72 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00082C60: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_00082C72(); return; } /* jne: not equal / not zero */

loc_00082C6F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00082CB0
 * Original: 0x00082CB0 - 0x00082CF7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00082CB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00082CE0; /* je: equal / zero */

loc_00082CB8: ;
    ecx = MEM32(esp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000836B0(); /* call 0x000836B0 */

loc_00082CC5: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00082CE0; /* je: equal / zero */

loc_00082CD4: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00082CDD: ;
    esp = esp + 4;

loc_00082CE0: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00082D00
 * Original: 0x00082D00 - 0x00082D12 (18 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082D00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(ecx, ecx)) { sub_00082D12(); return; } /* jne: not equal / not zero */

loc_00082D0E: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00082D28(); return; /* tail jmp 0x00082D28 */

}

/**
 * sub_00082DC0
 * Original: 0x00082DC0 - 0x00082E06 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00082DC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00082DEF; /* je: equal / zero */

loc_00082DC8: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00083730(); /* call 0x00083730 */

loc_00082DD6: ;
    eax = MEM32(esi + 4);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_00082DEF; /* je: equal / zero */

loc_00082DE3: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00082DEC: ;
    esp = esp + 4;

loc_00082DEF: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00082E10
 * Original: 0x00082E10 - 0x00082E57 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00082E10: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00082E40; /* je: equal / zero */

loc_00082E18: ;
    ecx = MEM32(esp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_00082E25: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00082E40; /* je: equal / zero */

loc_00082E34: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00082E3D: ;
    esp = esp + 4;

loc_00082E40: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00082E60
 * Original: 0x00082E60 - 0x00082E68 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00082E60: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_00082E68(); return; } /* jne: not equal / not zero */

loc_00082E67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00082E80
 * Original: 0x00082E80 - 0x00082EC1 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082E80: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(ebp, ecx)) goto loc_00082EBB; /* je: equal / zero */

loc_00082E91: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_000836F0(); /* call 0x000836F0 */

loc_00082E9E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00083730(); /* call 0x00083730 */

loc_00082EAF: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x10;
    MEM32(edi + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00082EBB: ;
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00082ED0
 * Original: 0x00082ED0 - 0x00082F22 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00082ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE80);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = MEM32(ebp + 8);
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00083210(); /* call 0x00083210 */

loc_00082EFF: ;
    ecx = esi + 0x10;
    edx = ebp + -96;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000832B0(); /* call 0x000832B0 */

loc_00082F0B: ;
    ecx = esi + 0x20;
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000832B0(); /* call 0x000832B0 */

loc_00082F17: ;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_00082F22(); return; } /* jne: not equal / not zero */

loc_00082F1E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00082F38(); return; /* tail jmp 0x00082F38 */

}

/**
 * sub_00083210
 * Original: 0x00083210 - 0x00083241 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FC10);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = MEM32(ebp + 8);
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_00083241(); return; } /* jne: not equal / not zero */

loc_0008323D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00083249(); return; /* tail jmp 0x00083249 */

}

/**
 * sub_000832B0
 * Original: 0x000832B0 - 0x000832E1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000832B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000832B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FC00);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = MEM32(ebp + 8);
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_000832E1(); return; } /* jne: not equal / not zero */

loc_000832DD: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000832E9(); return; /* tail jmp 0x000832E9 */

}

/**
 * sub_00083350
 * Original: 0x00083350 - 0x0008336F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083350(void)
{

loc_00083350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000838E0(); /* call 0x000838E0 */

loc_00083361: ;
    eax = esi + esi * 2;
    eax = eax << 4;
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083370
 * Original: 0x00083370 - 0x0008338B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083370(void)
{

loc_00083370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00083A30(); /* call 0x00083A30 */

loc_00083385: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083390
 * Original: 0x00083390 - 0x000833CA (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083390: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, MEM32(esp + 8))) goto loc_000833C8; /* je: equal / zero */

loc_00083399: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x10;
    ebp = edi + 0x20;

loc_000833A1: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00083410(); /* call 0x00083410 */

loc_000833A9: ;
    PUSH32(esp, ebx);
    eax = esi + 0x10;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_000833B2: ;
    PUSH32(esp, ebp);
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_000833BB: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0x30;
    if (CMP_NE(esi, eax)) goto loc_000833A1; /* jne: not equal / not zero */

loc_000833C6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000833C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000833D0
 * Original: 0x000833D0 - 0x000833EC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000833D0(void)
{

loc_000833D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00083AC0(); /* call 0x00083AC0 */

loc_000833E6: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000833F0
 * Original: 0x000833F0 - 0x0008340C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000833F0(void)
{

loc_000833F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00083B50(); /* call 0x00083B50 */

loc_00083406: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083410
 * Original: 0x00083410 - 0x00083556 (326 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083410: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0008354F; /* je: equal / zero */

loc_00083420: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00083436; /* je: equal / zero */

loc_00083428: ;
    ebx = MEM32(ebp + 8);
    edx = ebx;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (TEST_NZ(edx, edx)) goto loc_00083443; /* jne: not equal / not zero */

loc_00083436: ;
    PUSH32(esp, 0); sub_00082CB0(); /* call 0x00082CB0 */

loc_0008343B: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083443: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0008344F; /* jne: not equal / not zero */

loc_0008344B: ;
    edi = 0; /* xor self */
    goto loc_00083457;

loc_0008344F: ;
    edi = MEM32(esi + 8);
    edi = edi - eax;
    edi = (uint32_t)((int32_t)edi >> 3);

loc_00083457: ;
    if (CMP_A(edx, edi)) goto loc_000834AA; /* ja: above (unsigned >) */

loc_0008345B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083BF0(); /* call 0x00083BF0 */

loc_00083465: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000836B0(); /* call 0x000836B0 */

loc_00083472: ;
    eax = MEM32(ebp + 4);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00083490; /* jne: not equal / not zero */

loc_0008347C: ;
    edx = MEM32(esi + 4);
    ebp = 0; /* xor self */
    eax = edx + ebp * 8;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083490: ;
    ebp = MEM32(ebp + 8);
    edx = MEM32(esi + 4);
    ebp = ebp - eax;
    ebp = (uint32_t)((int32_t)ebp >> 3);
    eax = edx + ebp * 8;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000834AA: ;
    if (TEST_NZ(eax, eax)) goto loc_000834B2; /* jne: not equal / not zero */

loc_000834AE: ;
    ecx = 0; /* xor self */
    goto loc_000834BA;

loc_000834B2: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 3);

loc_000834BA: ;
    if (CMP_A(edx, ecx)) goto loc_00083500; /* ja: above (unsigned >) */

loc_000834BE: ;
    if (TEST_NZ(eax, eax)) goto loc_000834C6; /* jne: not equal / not zero */

loc_000834C2: ;
    edx = 0; /* xor self */
    goto loc_000834CE;

loc_000834C6: ;
    edx = MEM32(esi + 8);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 3);

loc_000834CE: ;
    ecx = MEM32(ebp + 4);
    ebx = ecx + edx * 8;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083BF0(); /* call 0x00083BF0 */

loc_000834DE: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00083CB0(); /* call 0x00083CB0 */

loc_000834F1: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083500: ;
    if (TEST_Z(eax, eax)) goto loc_0008351C; /* je: equal / zero */

loc_00083504: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000836B0(); /* call 0x000836B0 */

loc_00083511: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0008351C: ;
    ecx = MEM32(ebp + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00083527; /* jne: not equal / not zero */

loc_00083523: ;
    eax = 0; /* xor self */
    goto loc_0008352F;

loc_00083527: ;
    eax = MEM32(ebp + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);

loc_0008352F: ;
    PUSH32(esp, 0); sub_00082C60(); /* call 0x00082C60 */

loc_00083534: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008354D; /* je: equal / zero */

loc_00083538: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00083970(); /* call 0x00083970 */

loc_0008354A: ;
    MEM32(esi + 8) = eax;

loc_0008354D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0008354F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083560
 * Original: 0x00083560 - 0x000836A6 (326 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083560: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0008369F; /* je: equal / zero */

loc_00083570: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00083586; /* je: equal / zero */

loc_00083578: ;
    ebx = MEM32(ebp + 8);
    edx = ebx;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 2);
    if (TEST_NZ(edx, edx)) goto loc_00083593; /* jne: not equal / not zero */

loc_00083586: ;
    PUSH32(esp, 0); sub_00082E10(); /* call 0x00082E10 */

loc_0008358B: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083593: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0008359F; /* jne: not equal / not zero */

loc_0008359B: ;
    edi = 0; /* xor self */
    goto loc_000835A7;

loc_0008359F: ;
    edi = MEM32(esi + 8);
    edi = edi - eax;
    edi = (uint32_t)((int32_t)edi >> 2);

loc_000835A7: ;
    if (CMP_A(edx, edi)) goto loc_000835FA; /* ja: above (unsigned >) */

loc_000835AB: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083C40(); /* call 0x00083C40 */

loc_000835B5: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_000835C2: ;
    eax = MEM32(ebp + 4);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000835E0; /* jne: not equal / not zero */

loc_000835CC: ;
    edx = MEM32(esi + 4);
    ebp = 0; /* xor self */
    eax = edx + ebp * 4;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000835E0: ;
    ebp = MEM32(ebp + 8);
    edx = MEM32(esi + 4);
    ebp = ebp - eax;
    ebp = (uint32_t)((int32_t)ebp >> 2);
    eax = edx + ebp * 4;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000835FA: ;
    if (TEST_NZ(eax, eax)) goto loc_00083602; /* jne: not equal / not zero */

loc_000835FE: ;
    ecx = 0; /* xor self */
    goto loc_0008360A;

loc_00083602: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_0008360A: ;
    if (CMP_A(edx, ecx)) goto loc_00083650; /* ja: above (unsigned >) */

loc_0008360E: ;
    if (TEST_NZ(eax, eax)) goto loc_00083616; /* jne: not equal / not zero */

loc_00083612: ;
    edx = 0; /* xor self */
    goto loc_0008361E;

loc_00083616: ;
    edx = MEM32(esi + 8);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 2);

loc_0008361E: ;
    ecx = MEM32(ebp + 4);
    ebx = ecx + edx * 4;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083C40(); /* call 0x00083C40 */

loc_0008362E: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00083D40(); /* call 0x00083D40 */

loc_00083641: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083650: ;
    if (TEST_Z(eax, eax)) goto loc_0008366C; /* je: equal / zero */

loc_00083654: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_00083661: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0008366C: ;
    ecx = MEM32(ebp + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00083677; /* jne: not equal / not zero */

loc_00083673: ;
    eax = 0; /* xor self */
    goto loc_0008367F;

loc_00083677: ;
    eax = MEM32(ebp + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_0008367F: ;
    PUSH32(esp, 0); sub_0037C2A0(); /* call 0x0037C2A0 */

loc_00083684: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008369D; /* je: equal / zero */

loc_00083688: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00083990(); /* call 0x00083990 */

loc_0008369A: ;
    MEM32(esi + 8) = eax;

loc_0008369D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0008369F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000836B0
 * Original: 0x000836B0 - 0x000836E3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000836B0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_000836E1; /* je: equal / zero */

loc_000836B7: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000836D4; /* je: equal / zero */

loc_000836BD: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_000836D4; /* jne: not equal / not zero */

loc_000836C9: ;
    if (TEST_Z(ecx, ecx)) goto loc_000836D4; /* je: equal / zero */

loc_000836CD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000836D4: ;
    MEM32(esi) = 0;
    esi = esi + 8;
    if (CMP_NE(esi, edi)) goto loc_000836B7; /* jne: not equal / not zero */

loc_000836E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000836F0
 * Original: 0x000836F0 - 0x0008372F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000836F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0008372A; /* je: equal / zero */

loc_000836FA: ;
    /* nop */

loc_00083700: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00083410(); /* call 0x00083410 */

loc_00083708: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = edi + 0x10;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_00083714: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    eax = edi + 0x20;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_00083720: ;
    esi = esi + 0x30;
    edi = edi + 0x30;
    if (CMP_NE(esi, ebx)) goto loc_00083700; /* jne: not equal / not zero */

loc_0008372A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083730
 * Original: 0x00083730 - 0x0008385A (298 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083730: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(ebp, eax)) goto loc_00083858; /* je: equal / zero */

loc_00083741: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x24;
    ebx = 0; /* xor self */
    /* nop */

loc_00083750: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_00083797; /* je: equal / zero */

loc_00083756: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_00083763: ;
    edi = MEM32(esi);
    esp = esp + 4;
    if (CMP_EQ(edi, ebx)) goto loc_00083797; /* je: equal / zero */

loc_0008376C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00083772: ;
    if (TEST_NZ(eax, eax)) goto loc_00083797; /* jne: not equal / not zero */

loc_00083776: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00083794: ;
    esp = esp + 4;

loc_00083797: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(esi + -16);
    if (CMP_EQ(eax, ebx)) goto loc_000837E8; /* je: equal / zero */

loc_000837A6: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esi + -12);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_000837B3: ;
    edi = MEM32(esi + -16);
    esp = esp + 4;
    if (CMP_EQ(edi, ebx)) goto loc_000837E8; /* je: equal / zero */

loc_000837BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000837C3: ;
    if (TEST_NZ(eax, eax)) goto loc_000837E8; /* jne: not equal / not zero */

loc_000837C7: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000837E5: ;
    esp = esp + 4;

loc_000837E8: ;
    MEM32(esi + -16) = ebx;
    MEM32(esi + -12) = ebx;
    MEM32(esi + -8) = ebx;
    eax = MEM32(esi + -32);
    if (CMP_EQ(eax, ebx)) goto loc_0008383A; /* je: equal / zero */

loc_000837F8: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esi + -28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000836B0(); /* call 0x000836B0 */

loc_00083805: ;
    edi = MEM32(esi + -32);
    esp = esp + 4;
    if (CMP_EQ(edi, ebx)) goto loc_0008383A; /* je: equal / zero */

loc_0008380F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00083815: ;
    if (TEST_NZ(eax, eax)) goto loc_0008383A; /* jne: not equal / not zero */

loc_00083819: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00083837: ;
    esp = esp + 4;

loc_0008383A: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + -32) = ebx;
    MEM32(esi + -28) = ebx;
    MEM32(esi + -24) = ebx;
    ebp = ebp + 0x30;
    esi = esi + 0x30;
    if (CMP_NE(ebp, eax)) goto loc_00083750; /* jne: not equal / not zero */

loc_00083855: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00083858: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00083860
 * Original: 0x00083860 - 0x0008389F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00083860: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ebx, esi)) goto loc_0008389A; /* je: equal / zero */

loc_0008386A: ;
    /* nop */

loc_00083870: ;
    esi = esi - 0x30;
    edi = edi - 0x30;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00083410(); /* call 0x00083410 */

loc_0008387E: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = edi + 0x10;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_0008388A: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    eax = edi + 0x20;
    PUSH32(esp, 0); sub_00083560(); /* call 0x00083560 */

loc_00083896: ;
    if (CMP_NE(esi, ebx)) goto loc_00083870; /* jne: not equal / not zero */

loc_0008389A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000838A0
 * Original: 0x000838A0 - 0x000838D3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000838A0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_000838D1; /* je: equal / zero */

loc_000838A7: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000838C4; /* je: equal / zero */

loc_000838AD: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_000838C4; /* jne: not equal / not zero */

loc_000838B9: ;
    if (TEST_Z(ecx, ecx)) goto loc_000838C4; /* je: equal / zero */

loc_000838BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000838C4: ;
    MEM32(esi) = 0;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_000838A7; /* jne: not equal / not zero */

loc_000838D1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000838E0
 * Original: 0x000838E0 - 0x0008392A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000838E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FD70);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00083913: ;
    if (CMP_BE(ebx & ebx, 0)) { sub_0008392A(); return; } /* jbe: below or equal (unsigned <=) */

loc_00083917: ;
    eax = esi;
    PUSH32(esp, 0); sub_000839E0(); /* call 0x000839E0 */

loc_0008391E: ;
    ebx--;
    MEM32(ebp + 0xC) = ebx;
    esi = esi + 0x30;
    MEM32(ebp + 8) = esi;
    goto loc_00083913;

}

/**
 * sub_00083970
 * Original: 0x00083970 - 0x0008398B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083970(void)
{

loc_00083970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00083CB0(); /* call 0x00083CB0 */

loc_00083985: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083990
 * Original: 0x00083990 - 0x000839AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083990(void)
{

loc_00083990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00083D40(); /* call 0x00083D40 */

loc_000839A5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000839B0
 * Original: 0x000839B0 - 0x000839D4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000839B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000839B0: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000839CD; /* je: equal / zero */

loc_000839B6: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_000839CD; /* jne: not equal / not zero */

loc_000839C2: ;
    if (TEST_Z(ecx, ecx)) goto loc_000839CD; /* je: equal / zero */

loc_000839C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000839CD: ;
    MEM32(esi) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000839E0
 * Original: 0x000839E0 - 0x00083A09 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000839E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000839E0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00083A07; /* je: equal / zero */

loc_000839E7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00083210(); /* call 0x00083210 */

loc_000839EF: ;
    eax = esi + 0x10;
    ecx = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000832B0(); /* call 0x000832B0 */

loc_000839FB: ;
    esi = esi + 0x20;
    ecx = edi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000832B0(); /* call 0x000832B0 */

loc_00083A07: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083A10
 * Original: 0x00083A10 - 0x00083A2A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A10(void)
{

loc_00083A10: ;
    PUSH32(esp, esi);
    esi = edi + 0x20;
    PUSH32(esp, 0); sub_00082E10(); /* call 0x00082E10 */

loc_00083A19: ;
    esi = edi + 0x10;
    PUSH32(esp, 0); sub_00082E10(); /* call 0x00082E10 */

loc_00083A21: ;
    esi = edi;
    PUSH32(esp, 0); sub_00082CB0(); /* call 0x00082CB0 */

loc_00083A28: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083A30
 * Original: 0x00083A30 - 0x00083A7C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE70);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0xC);
    ebx = ecx;
    edi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00083A63: ;
    if (CMP_EQ(edi, ebx)) { sub_00083A7C(); return; } /* je: equal / zero */

loc_00083A67: ;
    eax = esi;
    PUSH32(esp, 0); sub_000839E0(); /* call 0x000839E0 */

loc_00083A6E: ;
    esi = esi + 0x30;
    MEM32(ebp + 0xC) = esi;
    edi = edi + 0x30;
    MEM32(ebp + 8) = edi;
    goto loc_00083A63;

}

/**
 * sub_00083AC0
 * Original: 0x00083AC0 - 0x00083B0F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);

loc_00083AF4: ;
    if (CMP_EQ(esi, ebx)) { sub_00083B0F(); return; } /* je: equal / zero */

loc_00083AF8: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00083C90(); /* call 0x00083C90 */

loc_00083B01: ;
    edi = edi + 8;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00083AF4;

}

/**
 * sub_00083B50
 * Original: 0x00083B50 - 0x00083BB0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4B0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);

loc_00083B84: ;
    if (CMP_EQ(edx, esi)) { sub_00083BB0(); return; } /* je: equal / zero */

loc_00083B88: ;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00083BA2; /* je: equal / zero */

loc_00083B92: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00083BA2; /* je: equal / zero */

loc_00083B9A: ;
    ecx = ecx + 4;
    MEM32(ebp + -32) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00083BA2: ;
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00083B84;

}

/**
 * sub_00083BF0
 * Original: 0x00083BF0 - 0x00083C3E (78 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00083BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00083C39; /* je: equal / zero */

loc_00083BFA: ;
    /* nop */

loc_00083C00: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_00083C29; /* je: equal / zero */

loc_00083C06: ;
    if (TEST_Z(eax, eax)) goto loc_00083C0D; /* je: equal / zero */

loc_00083C0A: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00083C0D: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00083C29; /* je: equal / zero */

loc_00083C15: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00083C29; /* jne: not equal / not zero */

loc_00083C22: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00083C29: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    edi = edi + 8;
    esi = esi + 8;
    if (CMP_NE(edi, ebx)) goto loc_00083C00; /* jne: not equal / not zero */

loc_00083C39: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083C40
 * Original: 0x00083C40 - 0x00083C88 (72 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00083C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00083C83; /* je: equal / zero */

loc_00083C4A: ;
    /* nop */

loc_00083C50: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_00083C79; /* je: equal / zero */

loc_00083C56: ;
    if (TEST_Z(eax, eax)) goto loc_00083C5D; /* je: equal / zero */

loc_00083C5A: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00083C5D: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00083C79; /* je: equal / zero */

loc_00083C65: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00083C79; /* jne: not equal / not zero */

loc_00083C72: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00083C79: ;
    edi = edi + 4;
    esi = esi + 4;
    if (CMP_NE(edi, ebx)) goto loc_00083C50; /* jne: not equal / not zero */

loc_00083C83: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083C90
 * Original: 0x00083C90 - 0x00083CA6 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00083C90: ;
    if (TEST_Z(ecx, ecx)) goto loc_00083CA5; /* je: equal / zero */

loc_00083C94: ;
    eax = MEM32(edx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_00083C9F; /* je: equal / zero */

loc_00083C9C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00083C9F: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_00083CA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083CB0
 * Original: 0x00083CB0 - 0x00083CFE (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4A0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_00083CE3: ;
    if (CMP_EQ(esi, ebx)) { sub_00083CFE(); return; } /* je: equal / zero */

loc_00083CE7: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00083C90(); /* call 0x00083C90 */

loc_00083CF0: ;
    edi = edi + 8;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00083CE3;

}

/**
 * sub_00083D40
 * Original: 0x00083D40 - 0x00083D9C (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00083D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F490);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;

loc_00083D73: ;
    if (CMP_EQ(edx, esi)) { sub_00083D9C(); return; } /* je: equal / zero */

loc_00083D77: ;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_00083D8E; /* je: equal / zero */

loc_00083D7E: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00083D8E; /* je: equal / zero */

loc_00083D86: ;
    ecx = ecx + 4;
    MEM32(ebp + -28) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00083D8E: ;
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00083D73;

}

/**
 * sub_00083DE0
 * Original: 0x00083DE0 - 0x00083E6F (143 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083DE0: ;
    edx = MEM32(0x5499F0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx | 0x3000;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x10;
    esi = ebp;
    edi = 0x770020;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM32(0x5499F0) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(0x84720C) = eax;
    MEM8(0x770010) = LO8(ecx);
    MEM32(0x549B94) = 0;
    MEM8(0x770011) = LO8(edx);
    if (TEST_NZ(eax, eax)) goto loc_00083E54; /* jne: not equal / not zero */

loc_00083E2E: ;
    eax = MEM32(0x6A58DC);
    if (TEST_NZ(eax, eax)) goto loc_00083E4A; /* jne: not equal / not zero */

loc_00083E37: ;
    eax = MEM32(0x6A58D8);
    PUSH32(esp, 0x6A58DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00083E47: ;
    esp = esp + 8;

loc_00083E4A: ;
    eax = MEM32(0x6A58DC);
    MEM32(0x84720C) = eax;

loc_00083E54: ;
    ecx = MEM32(eax + 4);
    if (CMP_A(ecx, 4)) { sub_00083E6F(); return; } /* ja: above (unsigned >) */

loc_00083E5C: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x83F10)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_00083E71(); return; /* tail jmp 0x00083E71 */

    ecx = MEM32(eax + 0x1C);
    esi = MEM32(ecx);
    g_seh_ebp = ebp; sub_00083E71(); return; /* tail jmp 0x00083E71 */

}

/**
 * sub_00083F30
 * Original: 0x00083F30 - 0x0008402D (253 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083F30(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00083F30: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    fp_push(MEMF(eax * 4 + 0x7701AC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00083F49: ;
    ecx = eax;
    eax = eax | 0xFFFFFF00u;
    ecx = ecx & 0xFF;
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | ecx;
    esi = eax;
    edx = esi;
    ecx = 0x40A60;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083F6E: ;
    MEM32(0x549A20) = esi;
    esi = MEM32(0x549ACC);
    esi = esi & 0xFFFFFF02u;
    esi = esi | 2;
    edx = esi;
    ecx = 0x41E60;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083F8F: ;
    edx = 0x8010000;
    ecx = 0x40AC0;
    MEM32(0x549ACC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083FA4: ;
    edx = 0x100C0;
    ecx = 0x41E40;
    MEM32(0x549A80) = 0x8010000;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083FBD: ;
    edx = 0x18301010;
    ecx = 0x40260;
    MEM32(0x549AAC) = 0x100C0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083FD6: ;
    edx = 0xC0;
    ecx = 0x40AA0;
    MEM32(0x5499F8) = 0x18301010;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00083FEF: ;
    edx = 0x8040C20;
    ecx = 0x40AC4;
    MEM32(0x549A60) = 0xC0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00084008: ;
    edx = 0xC00;
    ecx = 0x41E44;
    MEM32(0x549A84) = 0x8040C20;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00084021: ;
    MEM32(0x549AB0) = 0xC00;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00084030
 * Original: 0x00084030 - 0x00084104 (212 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084030(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00084030: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_00084102; /* jle: less or equal (signed <=) */

loc_0008403B: ;
    xmm6 = MEMF(0x7FA21C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D2C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, esi);
    edx = edx + 4;
    esi = eax;
    goto loc_00084070;

    /* nop */
    /* nop */

loc_00084070: ;
    xmm0 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000840A2; /* jnp: not parity */

loc_00084082: ;
    xmm0 = MEMF(edx + 8); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000840F7; /* jnp: not parity */

loc_00084090: ;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    /* comiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    MEMF(edx) = xmm0; /* movss */
    if ((xmm0 < MEMF(edx + 4))) goto loc_000840BF; /* jb: below (unsigned <) */

loc_000840A2: ;
    (void)0; /* cmp MEM8(edx + -3), LO8(ebx) - flags set for next jcc */
    MEMF(edx) = xmm3; /* movss */
    MEMF(edx + 4) = xmm3; /* movss */
    MEMF(edx + 8) = xmm3; /* movss */
    MEMF(edx + 0xC) = xmm3; /* movss */
    if (CMP_EQ(MEM8(edx + -3), LO8(ebx))) goto loc_000840F7; /* je: equal / zero */

loc_000840BA: ;
    MEM8(edx + -4) = LO8(ebx);
    goto loc_000840F7;

loc_000840BF: ;
    xmm0 = xmm0 / MEMF(edx + 4); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_000840D9; /* jbe: below or equal (unsigned <=) */

loc_000840D4: ;
    xmm1 = xmm4; /* movaps */
    goto loc_000840E1;

loc_000840D9: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_000840E1; /* jbe: below or equal (unsigned <=) */

loc_000840DE: ;
    xmm1 = xmm5; /* movaps */

loc_000840E1: ;
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 * MEMF(0x649290); /* mulss */
    PUSH32(esp, 0); sub_003E5B60(); /* call 0x003E5B60 */

loc_000840F2: ;
    MEMF(edx + 8) = xmm0; /* movss */

loc_000840F7: ;
    edx = edx + 0x14;
    esi--;
    if ((esi != 0)) goto loc_00084070; /* jne: not equal / not zero */

loc_00084101: ;
    POP32(esp, esi);

loc_00084102: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084110
 * Original: 0x00084110 - 0x00084204 (244 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00084110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x8C);
    if (TEST_Z(edi, edi)) goto loc_00084202; /* je: equal / zero */

loc_00084123: ;
    SET_LO8(eax, MEM8(0x770004));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00084172; /* je: equal / zero */

loc_00084132: ;
    esi = MEM32(edi);
    if (CMP_BE(esi & esi, 0)) goto loc_00084172; /* jbe: below or equal (unsigned <=) */

loc_00084138: ;
    xmm0 = MEMF(0x770008); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00084154; /* jp: parity */

loc_0008414D: ;
    ecx = ZX8(MEM8(edi + 4));
    PUSH32(esp, ecx);
    goto loc_00084169;

loc_00084154: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x770005));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DAFB0(); /* call 0x001DAFB0 */

loc_00084162: ;
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    PUSH32(esp, eax);

loc_00084169: ;
    eax = ebx;
    PUSH32(esp, 0x47);
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_00084172: ;
    SET_LO8(eax, MEM8(0x76FFFE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00084200; /* je: equal / zero */

loc_0008417F: ;
    esi = MEM32(edi + 8);
    if (CMP_BE(esi & esi, 0)) goto loc_000841A2; /* jbe: below or equal (unsigned <=) */

loc_00084186: ;
    eax = MEM32(edi + 0xC);
    if (CMP_L(eax, 0xA)) goto loc_000841A2; /* jl: less (signed <) */

loc_0008418E: ;
    if (CMP_G(eax, 0x19)) goto loc_000841A2; /* jg: greater (signed >) */

loc_00084193: ;
    ecx = MEM32(0x770000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_000841A2: ;
    esi = MEM32(edi + 0x10);
    if (CMP_BE(esi & esi, 0)) goto loc_00084200; /* jbe: below or equal (unsigned <=) */

loc_000841A9: ;
    eax = MEM32(edi + 0x18);
    if (CMP_BE(eax & eax, 0)) goto loc_00084200; /* jbe: below or equal (unsigned <=) */

loc_000841B0: ;
    if (CMP_NE(MEM8(0x770003), 0xFF)) goto loc_000841DA; /* jne: not equal / not zero */

loc_000841B9: ;
    edx = MEM32(edi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    eax = ebx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_000841C6: ;
    eax = MEM32(edi + 0x1C);
    esi = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_000841D6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000841DA: ;
    SET_LO8(eax, MEM8(0x76FFFD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000841E9; /* je: equal / zero */

loc_000841E5: ;
    PUSH32(esp, 0);
    goto loc_000841EB;

loc_000841E9: ;
    PUSH32(esp, 1);

loc_000841EB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_000841F2: ;
    esi = MEM32(edi + 0x18);
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_00084200: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00084202: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084210
 * Original: 0x00084210 - 0x00084217 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00084210: ;
    if (TEST_NZ(ecx, ecx)) { sub_00084217(); return; } /* jne: not equal / not zero */

loc_00084214: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00084260
 * Original: 0x00084260 - 0x00084267 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00084260: ;
    if (TEST_NZ(eax, eax)) { sub_00084267(); return; } /* jne: not equal / not zero */

loc_00084264: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00084300
 * Original: 0x00084300 - 0x00084354 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084300: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ebx + 0xE));
    PUSH32(esp, edi);
    ecx = ebx + 0x10;
    ebp = 2;
    SET_LO8(edx, 1);

loc_00084311: ;
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0008434A; /* jle: less or equal (signed <=) */

loc_00084317: ;
    eax = 0; /* xor self */
    /* nop */

loc_00084320: ;
    esi = MEM32(ecx);
    MEM8(esi + eax + 0x1E) = LO8(edx);
    esi = MEM32(ecx);
    MEM8(esi + eax + 0x1F) = LO8(edx);
    esi = MEM32(ecx);
    MEM8(esi + eax + 0x20) = LO8(edx);
    esi = MEM32(ecx);
    MEM8(esi + eax + 0x21) = LO8(edx);
    esi = MEM32(ecx);
    MEM8(esi + eax + 0x22) = LO8(edx);
    esi = ZX16(MEM16(ebx + 0xE));
    edi++;
    eax = eax + 0x24;
    if (CMP_L(edi, esi)) goto loc_00084320; /* jl: less (signed <) */

loc_0008434A: ;
    ecx = ecx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00084311; /* jne: not equal / not zero */

loc_00084350: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00084360
 * Original: 0x00084360 - 0x000843A1 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00084360: ;
    SET_LO8(ecx, MEM8(0x87A1D8));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0008439B; /* jne: not equal / not zero */

loc_0008436F: ;
    edx = MEM32(0x87A1D8);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x48C510);
    MEM32(0x87A1D8) = edx;
    MEM32(0x87A1CC) = eax;
    MEM32(0x87A1D0) = eax;
    MEM32(0x87A1D4) = eax;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00084398: ;
    esp = esp + 4;

loc_0008439B: ;
    eax = 0x87A1C8;
    esp += 4; return; /* ret */

}

/**
 * sub_000843B0
 * Original: 0x000843B0 - 0x0008442D (125 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000843B0(void)
{
    float xmm0;

loc_000843B0: ;
    eax = MEM32(0x84B868);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    esi = eax + 0x10;
    esp = esp - 8;
    eax = esp;
    ecx = 0x10;
    edi = 0x8755B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = 0; /* xor self */
    edx = ebx;
    PUSH32(esp, 0); sub_00084820(); /* call 0x00084820 */

loc_000843E5: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    edx = ebx + 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000848D0(); /* call 0x000848D0 */

loc_000843F8: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    edx = ebx + 0x20;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000848D0(); /* call 0x000848D0 */

loc_0008440B: ;
    PUSH32(esp, 0); sub_00084360(); /* call 0x00084360 */

loc_00084410: ;
    esp = esp - 8;
    ecx = esp;
    MEM32(ecx) = 0;
    edx = 0; /* xor self */
    MEM32(ecx + 4) = 0;
    PUSH32(esp, 0); sub_00085010(); /* call 0x00085010 */

loc_00084429: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084430
 * Original: 0x00084430 - 0x0008447D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084430(void)
{
    int _flags = 0; /* fallback flag var */

loc_00084430: ;
    edx = MEM32(eax);
    esp = esp - 8;
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x18);
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_00084700(); /* call 0x00084700 */

loc_00084455: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00084640(); /* call 0x00084640 */

loc_0008445C: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_00084477; /* je: equal / zero */

loc_00084463: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esp);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00084477; /* jne: not equal / not zero */

loc_00084470: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00084477: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084480
 * Original: 0x00084480 - 0x0008450C (140 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084480(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00084480: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_00084495; /* je: equal / zero */

loc_00084492: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_00084495: ;
    edx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    esp = esp - 0x10;
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    esi = esp + 0x1C;
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0); sub_00084770(); /* call 0x00084770 */

loc_000844C2: ;
    esi = MEM32(esp + 0x14);
    ecx = eax;
    PUSH32(esp, 0); sub_00084640(); /* call 0x00084640 */

loc_000844CD: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_000844EA; /* je: equal / zero */

loc_000844D5: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_000844EA; /* jne: not equal / not zero */

loc_000844E3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000844EA: ;
    if (TEST_Z(edi, edi)) goto loc_00084504; /* je: equal / zero */

loc_000844EE: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00084504; /* jne: not equal / not zero */

loc_000844FB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00084504: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00084510
 * Original: 0x00084510 - 0x00084542 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084510: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi + 0x10;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_000846A0(); /* call 0x000846A0 */

loc_0008451F: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00084542(); return; } /* je: equal / zero */

loc_00084528: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) { sub_00084542(); return; } /* jne: not equal / not zero */

loc_00084535: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00084550
 * Original: 0x00084550 - 0x00084582 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084550: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi + 0x20;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_000846A0(); /* call 0x000846A0 */

loc_0008455F: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00084582(); return; } /* je: equal / zero */

loc_00084568: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) { sub_00084582(); return; } /* jne: not equal / not zero */

loc_00084575: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00084590
 * Original: 0x00084590 - 0x00084637 (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084590(void)
{
    float xmm0;

loc_00084590: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    MEM8(esp) = 0;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000853D0(); /* call 0x000853D0 */

loc_000845A6: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    MEM8(esp + 0xC) = 0;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = eax;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00085550(); /* call 0x00085550 */

loc_000845C5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x84810);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00085420(); /* call 0x00085420 */

loc_000845DC: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    MEM8(esp + 0x2C) = 0;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000853D0(); /* call 0x000853D0 */

loc_000845F3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x30;
    eax = esp;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0); sub_00084820(); /* call 0x00084820 */

loc_0008460F: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    edx = esi + 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000848D0(); /* call 0x000848D0 */

loc_00084622: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    edx = esi + 0x20;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000848D0(); /* call 0x000848D0 */

loc_00084635: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084640
 * Original: 0x00084640 - 0x0008464D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084640: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_0008464D(); return; } /* jne: not equal / not zero */

loc_00084649: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00084655(); return; /* tail jmp 0x00084655 */

}

/**
 * sub_000846A0
 * Original: 0x000846A0 - 0x000846AD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000846A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000846A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_000846AD(); return; } /* jne: not equal / not zero */

loc_000846A9: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000846B5(); return; /* tail jmp 0x000846B5 */

}

/**
 * sub_00084700
 * Original: 0x00084700 - 0x00084770 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00084700: ;
    esp = esp - 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx) = eax;
    if (TEST_Z(eax, eax)) goto loc_0008470C; /* je: equal / zero */

loc_00084709: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008470C: ;
    eax = esp + 0x18;
    ecx = esp + 8;
    MEM32(esp + 4) = eax;
    MEM32(esp) = ecx;
    eax = MEM32(esp + 4);
    xmm2 = MEMF(eax); /* movss */
    ecx = 0x8755B0;
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(edx + 4) = xmm0; /* movss */
    eax = edx;
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00084770
 * Original: 0x00084770 - 0x00084804 (148 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00084770: ;
    edx = MEM32(esp + 0x14);
    esp = esp - 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esi) = edx;
    if (TEST_Z(edx, edx)) goto loc_00084780; /* je: equal / zero */

loc_0008477D: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;

loc_00084780: ;
    eax = esp + 0x14;
    ecx = esp + 4;
    MEM32(esp) = eax;
    MEM32(esp + 0x24) = ecx;
    eax = MEM32(esp);
    xmm2 = MEMF(eax); /* movss */
    ecx = 0x8755B0;
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esi + 4) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_000847FC; /* je: equal / zero */

loc_000847E6: ;
    ecx = MEM32(edx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_000847FC; /* jne: not equal / not zero */

loc_000847F3: ;
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000847FC: ;
    eax = esi;
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00084810
 * Original: 0x00084810 - 0x00084816 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084810(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084810: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_00084820
 * Original: 0x00084820 - 0x00084830 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084820: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_00084830(); return; } /* jne: not equal / not zero */

loc_0008482C: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00084838(); return; /* tail jmp 0x00084838 */

}

/**
 * sub_000848B0
 * Original: 0x000848B0 - 0x000848CA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848B0(void)
{

loc_000848B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00085640(); /* call 0x00085640 */

loc_000848C1: ;
    esp = esp + 0x10;
    eax = edi + esi * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000848D0
 * Original: 0x000848D0 - 0x000848E0 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000848D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_000848E0(); return; } /* jne: not equal / not zero */

loc_000848DC: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000848E8(); return; /* tail jmp 0x000848E8 */

}

/**
 * sub_00084960
 * Original: 0x00084960 - 0x0008497A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084960(void)
{

loc_00084960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000856D0(); /* call 0x000856D0 */

loc_00084971: ;
    esp = esp + 0x10;
    eax = edi + esi * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084980
 * Original: 0x00084980 - 0x000849C7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00084980: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000849B0; /* je: equal / zero */

loc_00084988: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00085820(); /* call 0x00085820 */

loc_00084995: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000849B0; /* je: equal / zero */

loc_000849A4: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000849AD: ;
    esp = esp + 4;

loc_000849B0: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000849D0
 * Original: 0x000849D0 - 0x00084A19 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000849D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000849D0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(eax, ecx)) { sub_00084A19(); return; } /* je: equal / zero */

loc_000849E1: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083BF0(); /* call 0x00083BF0 */

loc_000849F1: ;
    edi = MEM32(ebp + 8);
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_000836B0(); /* call 0x000836B0 */

loc_00084A02: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00084A30
 * Original: 0x00084A30 - 0x00084A78 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00084A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBF0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 8);
    esi = MEM32(eax);
    MEM32(ebp + -72) = esi;
    if (TEST_Z(esi, esi)) goto loc_00084A63; /* je: equal / zero */

loc_00084A60: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00084A63: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(ebp + -68) = xmm0; /* movss */
    edx = MEM32(ebx + 4);
    if (TEST_NZ(edx, edx)) { sub_00084A78(); return; } /* jne: not equal / not zero */

loc_00084A74: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00084A80(); return; /* tail jmp 0x00084A80 */

}

/**
 * sub_00084CF0
 * Original: 0x00084CF0 - 0x00084D39 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084CF0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(eax, ecx)) { sub_00084D39(); return; } /* je: equal / zero */

loc_00084D01: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00083C40(); /* call 0x00083C40 */

loc_00084D11: ;
    edi = MEM32(ebp + 8);
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_000838A0(); /* call 0x000838A0 */

loc_00084D22: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00084D50
 * Original: 0x00084D50 - 0x00084D8E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00084D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBE0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00084D83; /* je: equal / zero */

loc_00084D80: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_00084D83: ;
    esi = MEM32(ebx + 4);
    if (TEST_NZ(esi, esi)) { sub_00084D8E(); return; } /* jne: not equal / not zero */

loc_00084D8A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00084D96(); return; /* tail jmp 0x00084D96 */

}

/**
 * sub_00085010
 * Original: 0x00085010 - 0x00085020 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) { sub_00085020(); return; } /* jne: not equal / not zero */

loc_0008501C: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00085028(); return; /* tail jmp 0x00085028 */

}

/**
 * sub_000850A0
 * Original: 0x000850A0 - 0x000850BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850A0(void)
{

loc_000850A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00085860(); /* call 0x00085860 */

loc_000850B1: ;
    esp = esp + 0x10;
    eax = edi + esi * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000850C0
 * Original: 0x000850C0 - 0x000850FF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000850C0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(ebp, ecx)) goto loc_000850F9; /* je: equal / zero */

loc_000850D1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_000858F0(); /* call 0x000858F0 */

loc_000850DE: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0); sub_00085820(); /* call 0x00085820 */

loc_000850ED: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    MEM32(edi + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000850F9: ;
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00085100
 * Original: 0x00085100 - 0x00085144 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00085100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBD0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -68) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00085136; /* je: equal / zero */

loc_00085133: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_00085136: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebx + 4);
    if (TEST_NZ(esi, esi)) { sub_00085144(); return; } /* jne: not equal / not zero */

loc_00085140: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0008514C(); return; /* tail jmp 0x0008514C */

}

/**
 * sub_000853D0
 * Original: 0x000853D0 - 0x00085414 (68 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000853D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000853D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_0008540D; /* je: equal / zero */

loc_000853DE: ;
    PUSH32(esp, esi);
    /* nop */

loc_000853E0: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_000853E9; /* je: equal / zero */

loc_000853E6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_000853E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000853EF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00085405; /* jne: not equal / not zero */

loc_000853FC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00085405: ;
    edi = edi + 4;
    if (CMP_NE(edi, ebx)) goto loc_000853E0; /* jne: not equal / not zero */

loc_0008540C: ;
    POP32(esp, esi);

loc_0008540D: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085420
 * Original: 0x00085420 - 0x0008544D (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(esi, ebx)) { sub_0008544D(); return; } /* je: equal / zero */

loc_00085433: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_00085438: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0008543C: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_00085438; /* jne: not equal / not zero */

loc_00085443: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085460
 * Original: 0x00085460 - 0x0008549F (63 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00085460: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0008549D; /* je: equal / zero */

loc_00085467: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_00085490; /* je: equal / zero */

loc_0008546D: ;
    if (TEST_Z(eax, eax)) goto loc_00085474; /* je: equal / zero */

loc_00085471: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085474: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085490; /* je: equal / zero */

loc_0008547C: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085490; /* jne: not equal / not zero */

loc_00085489: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00085490: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_00085467; /* jne: not equal / not zero */

loc_0008549D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000854A0
 * Original: 0x000854A0 - 0x000854D9 (57 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000854A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000854A0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_000854D7; /* je: equal / zero */

loc_000854A7: ;
    eax = MEM32(ebx);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_000854D0; /* je: equal / zero */

loc_000854AD: ;
    if (TEST_Z(eax, eax)) goto loc_000854B4; /* je: equal / zero */

loc_000854B1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_000854B4: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_000854D0; /* je: equal / zero */

loc_000854BC: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_000854D0; /* jne: not equal / not zero */

loc_000854C9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000854D0: ;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_000854A7; /* jne: not equal / not zero */

loc_000854D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000854E0
 * Original: 0x000854E0 - 0x000854FB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000854E0(void)
{

loc_000854E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00085CB0(); /* call 0x00085CB0 */

loc_000854F5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00085500
 * Original: 0x00085500 - 0x00085541 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00085500: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0008553F; /* je: equal / zero */

loc_00085507: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_00085538; /* je: equal / zero */

loc_00085513: ;
    if (TEST_Z(eax, eax)) goto loc_0008551A; /* je: equal / zero */

loc_00085517: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008551A: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085538; /* je: equal / zero */

loc_00085524: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085538; /* jne: not equal / not zero */

loc_00085531: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00085538: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_00085507; /* jne: not equal / not zero */

loc_0008553F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085550
 * Original: 0x00085550 - 0x00085603 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085550: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x20)) goto loc_000855E7; /* jle: less or equal (signed <=) */

loc_0008556B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_00085570: ;
    if (CMP_LE(esi & esi, 0)) { sub_00085603(); return; } /* jle: less or equal (signed <=) */

loc_00085578: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000859F0(); /* call 0x000859F0 */

loc_00085589: ;
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
    edx = edx & 0xFFFFFFF8u;
    ecx = ecx & 0xFFFFFFF8u;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_000855C7; /* jge: greater or equal (signed >=) */

loc_000855B6: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00085550(); /* call 0x00085550 */

loc_000855C3: ;
    ebx = ebp;
    goto loc_000855D8;

loc_000855C7: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00085550(); /* call 0x00085550 */

loc_000855D4: ;
    edi = MEM32(esp + 0x20);

loc_000855D8: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_00085570; /* jg: greater (signed >) */

loc_000855E7: ;
    if (CMP_LE(eax, 1)) goto loc_000855FB; /* jle: less or equal (signed <=) */

loc_000855EC: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00085C30(); /* call 0x00085C30 */

loc_000855F8: ;
    esp = esp + 0xC;

loc_000855FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00085640
 * Original: 0x00085640 - 0x0008568C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00085640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F480);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00085673: ;
    if (CMP_BE(edi & edi, 0)) { sub_0008568C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00085677: ;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_00083C90(); /* call 0x00083C90 */

loc_00085680: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00085673;

}

/**
 * sub_000856D0
 * Original: 0x000856D0 - 0x0008572A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000856D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000856D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F470);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -4) = 0;

loc_00085703: ;
    if (CMP_BE(edx & edx, 0)) { sub_0008572A(); return; } /* jbe: below or equal (unsigned <=) */

loc_00085707: ;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0008571E; /* je: equal / zero */

loc_0008570E: ;
    eax = MEM32(esi);
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_0008571E; /* je: equal / zero */

loc_00085716: ;
    eax = eax + 4;
    MEM32(ebp + -28) = eax;
    MEM32(eax) = MEM32(eax) + 1;

loc_0008571E: ;
    edx--;
    MEM32(ebp + 0xC) = edx;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_00085703;

}

/**
 * sub_00085770
 * Original: 0x00085770 - 0x000857C2 (82 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00085770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebx, edi)) goto loc_000857BD; /* je: equal / zero */

loc_0008577A: ;
    /* nop */

loc_00085780: ;
    eax = MEM32(edi + -8);
    ecx = MEM32(esi + -8);
    edi = edi - 8;
    esi = esi - 8;
    if (CMP_EQ(eax, ecx)) goto loc_000857B3; /* je: equal / zero */

loc_00085790: ;
    if (TEST_Z(eax, eax)) goto loc_00085797; /* je: equal / zero */

loc_00085794: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085797: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_000857B3; /* je: equal / zero */

loc_0008579F: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_000857B3; /* jne: not equal / not zero */

loc_000857AC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000857B3: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    if (CMP_NE(edi, ebx)) goto loc_00085780; /* jne: not equal / not zero */

loc_000857BD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000857D0
 * Original: 0x000857D0 - 0x0008581C (76 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000857D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000857D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebx, edi)) goto loc_00085817; /* je: equal / zero */

loc_000857DA: ;
    /* nop */

loc_000857E0: ;
    eax = MEM32(edi + -4);
    ecx = MEM32(esi + -4);
    edi = edi - 4;
    esi = esi - 4;
    if (CMP_EQ(eax, ecx)) goto loc_00085813; /* je: equal / zero */

loc_000857F0: ;
    if (TEST_Z(eax, eax)) goto loc_000857F7; /* je: equal / zero */

loc_000857F4: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_000857F7: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085813; /* je: equal / zero */

loc_000857FF: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085813; /* jne: not equal / not zero */

loc_0008580C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00085813: ;
    if (CMP_NE(edi, ebx)) goto loc_000857E0; /* jne: not equal / not zero */

loc_00085817: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085820
 * Original: 0x00085820 - 0x00085856 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00085820: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00085854; /* je: equal / zero */

loc_00085827: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00085846; /* je: equal / zero */

loc_0008582E: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00085846; /* jne: not equal / not zero */

loc_0008583B: ;
    if (TEST_Z(ecx, ecx)) goto loc_00085846; /* je: equal / zero */

loc_0008583F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00085846: ;
    MEM32(esi + 4) = 0;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_00085827; /* jne: not equal / not zero */

loc_00085854: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085860
 * Original: 0x00085860 - 0x000858AC (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00085860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F390);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00085893: ;
    if (CMP_BE(edi & edi, 0)) { sub_000858AC(); return; } /* jbe: below or equal (unsigned <=) */

loc_00085897: ;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_000859A0(); /* call 0x000859A0 */

loc_000858A0: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00085893;

}

/**
 * sub_000858F0
 * Original: 0x000858F0 - 0x00085940 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000858F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000858F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0008593B; /* je: equal / zero */

loc_000858FA: ;
    /* nop */

loc_00085900: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_00085931; /* je: equal / zero */

loc_0008590C: ;
    if (TEST_Z(eax, eax)) goto loc_00085913; /* je: equal / zero */

loc_00085910: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085913: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085931; /* je: equal / zero */

loc_0008591D: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085931; /* jne: not equal / not zero */

loc_0008592A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00085931: ;
    edi = edi + 8;
    esi = esi + 8;
    if (CMP_NE(edi, ebx)) goto loc_00085900; /* jne: not equal / not zero */

loc_0008593B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085940
 * Original: 0x00085940 - 0x00085991 (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00085940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebx, edi)) goto loc_0008598C; /* je: equal / zero */

loc_0008594A: ;
    /* nop */

loc_00085950: ;
    eax = MEM32(edi + -8);
    edi = edi - 8;
    esi = esi - 8;
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_00085988; /* je: equal / zero */

loc_00085963: ;
    if (TEST_Z(eax, eax)) goto loc_0008596A; /* je: equal / zero */

loc_00085967: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008596A: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085988; /* je: equal / zero */

loc_00085974: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085988; /* jne: not equal / not zero */

loc_00085981: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00085988: ;
    if (CMP_NE(edi, ebx)) goto loc_00085950; /* jne: not equal / not zero */

loc_0008598C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000859A0
 * Original: 0x000859A0 - 0x000859B6 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000859A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000859A0: ;
    if (TEST_Z(ecx, ecx)) goto loc_000859B5; /* je: equal / zero */

loc_000859A4: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_000859B5; /* je: equal / zero */

loc_000859B2: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_000859B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000859C0
 * Original: 0x000859C0 - 0x000859E5 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000859C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000859C0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_000859E0; /* je: equal / zero */

loc_000859CA: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 4);
    if (CMP_NE(MEM32(ecx + 4), edi)) goto loc_000859E0; /* jne: not equal / not zero */

loc_000859D5: ;
    if (CMP_EQ(ecx, edi)) goto loc_000859E0; /* je: equal / zero */

loc_000859D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000859E0: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000859F0
 * Original: 0x000859F0 - 0x00085BB6 (454 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000859F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000859F0: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = ebp;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = edi + eax * 8;
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00085D40(); /* call 0x00085D40 */

loc_00085A1E: ;
    esp = esp + 0x10;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebx = esi + 8;
    MEM32(esp + 0x10) = ebx;
    if (CMP_AE(edi, esi)) goto loc_00085A4D; /* jae: above or equal (unsigned >=) */

loc_00085A2C: ;
    /* nop */

loc_00085A30: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(esi + -4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + -4))) goto loc_00085A4D; /* ja: above (unsigned >) */

loc_00085A3B: ;
    xmm0 = MEMF(esi + -4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_00085A4D; /* ja: above (unsigned >) */

loc_00085A46: ;
    esi = esi - 8;
    if (CMP_B(edi, esi)) goto loc_00085A30; /* jb: below (unsigned <) */

loc_00085A4D: ;
    if (CMP_AE(ebx, ebp)) goto loc_00085A72; /* jae: above or equal (unsigned >=) */

loc_00085A51: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebx + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 4))) goto loc_00085A6E; /* ja: above (unsigned >) */

loc_00085A5C: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_00085A6E; /* ja: above (unsigned >) */

loc_00085A67: ;
    ebx = ebx + 8;
    if (CMP_B(ebx, ebp)) goto loc_00085A51; /* jb: below (unsigned <) */

loc_00085A6E: ;
    MEM32(esp + 0x10) = ebx;

loc_00085A72: ;
    eax = esi;
    ebp = ebx;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00085A80: ;
    if (CMP_AE(ebp, MEM32(esp + 0x28))) goto loc_00085AC9; /* jae: above or equal (unsigned >=) */

loc_00085A86: ;
    goto loc_00085A90;

    /* nop */
    /* nop */

loc_00085A90: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_00085ABE; /* ja: above (unsigned >) */

loc_00085A9B: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ebp + 4))) goto loc_00085AC9; /* ja: above (unsigned >) */

loc_00085AA6: ;
    edi = ebx;
    ebx = ebx + 8;
    MEM32(esp + 0x10) = ebx;
    ebx = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085AB6: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);

loc_00085ABE: ;
    ecx = MEM32(esp + 0x28);
    ebp = ebp + 8;
    if (CMP_B(ebp, ecx)) goto loc_00085A90; /* jb: below (unsigned <) */

loc_00085AC9: ;
    edx = MEM32(esp + 0x24);
    if (CMP_BE(eax, edx)) goto loc_00085B25; /* jbe: below or equal (unsigned <=) */

loc_00085AD1: ;
    ecx = eax + -4;
    MEM32(esp + 0x18) = ecx;
    goto loc_00085AE0;

    /* nop */

loc_00085AE0: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx))) goto loc_00085B0D; /* ja: above (unsigned >) */

loc_00085AEA: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_00085B23; /* ja: above (unsigned >) */

loc_00085AF4: ;
    esi = esi - 8;
    ebx = ecx + -4;
    edi = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085B01: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);

loc_00085B0D: ;
    edx = MEM32(esp + 0x24);
    eax = eax - 8;
    ecx = ecx - 8;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_B(edx, eax)) goto loc_00085AE0; /* jb: below (unsigned <) */

loc_00085B23: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */

loc_00085B25: ;
    if (CMP_NE(eax, edx)) goto loc_00085B63; /* jne: not equal / not zero */

loc_00085B27: ;
    if (CMP_EQ(ebp, MEM32(esp + 0x28))) { sub_00085BB6(); return; } /* je: equal / zero */

loc_00085B31: ;
    if (CMP_EQ(ebx, ebp)) goto loc_00085B40; /* je: equal / zero */

loc_00085B35: ;
    edi = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085B3C: ;
    ebx = MEM32(esp + 0x10);

loc_00085B40: ;
    ebx = ebx + 8;
    MEM32(esp + 0x10) = ebx;
    ebx = ebp;
    edi = esi;
    ebp = ebp + 8;
    esi = esi + 8;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085B56: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    goto loc_00085A80;

loc_00085B63: ;
    ecx = MEM32(esp + 0x28);
    eax = eax - 8;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(ebp, ecx)) goto loc_00085B9D; /* jne: not equal / not zero */

loc_00085B72: ;
    esi = esi - 8;
    if (CMP_EQ(eax, esi)) goto loc_00085B86; /* je: equal / zero */

loc_00085B79: ;
    ebx = esi;
    edi = eax;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085B82: ;
    ebx = MEM32(esp + 0x10);

loc_00085B86: ;
    ebx = ebx - 8;
    edi = esi;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085B94: ;
    eax = MEM32(esp + 0x14);
    goto loc_00085A80;

loc_00085B9D: ;
    edi = ebp;
    ebx = eax;
    ebp = ebp + 8;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085BA9: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    goto loc_00085A80;

}

/**
 * sub_00085BD0
 * Original: 0x00085BD0 - 0x00085C30 (96 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085BD0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ecx;
    eax = eax - ebx;
    PUSH32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 3);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(eax, 1)) goto loc_00085C2B; /* jle: less or equal (signed <=) */

loc_00085BE8: ;
    ebp = MEM32(esp + 0x1C);
    edi = 8;
    edi = edi - ebx;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    esi = ecx + -8;
    if (CMP_LE(eax, 1)) goto loc_00085C1D; /* jle: less or equal (signed <=) */

loc_00085BFB: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_00085C0C; /* je: equal / zero */

loc_00085C09: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085C0C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0); sub_000861D0(); /* call 0x000861D0 */

loc_00085C1A: ;
    esp = esp + 0x18;

loc_00085C1D: ;
    esi = esi - 8;
    eax = edi + esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_G(eax, 1)) goto loc_00085BFB; /* jg: greater (signed >) */

loc_00085C2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085C30
 * Original: 0x00085C30 - 0x00085CA3 (115 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00085C30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_00085CA0; /* je: equal / zero */

loc_00085C3E: ;
    PUSH32(esp, esi);
    esi = edi + 8;
    if (CMP_EQ(esi, ebx)) goto loc_00085C9F; /* je: equal / zero */

loc_00085C46: ;
    goto loc_00085C50;

    /* nop */
    /* nop */

loc_00085C50: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_00085C6B; /* jbe: below or equal (unsigned <=) */

loc_00085C5B: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = esi + 8;
    if (CMP_EQ(edi, esi)) goto loc_00085C98; /* je: equal / zero */

loc_00085C62: ;
    if (CMP_EQ(esi, eax)) goto loc_00085C98; /* je: equal / zero */

loc_00085C66: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00085C90;

loc_00085C6B: ;
    ecx = esi;
    eax = esi;
    /* nop */

loc_00085C70: ;
    xmm0 = MEMF(eax + -4); /* movss */
    eax = eax - 8;
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_00085C82; /* jbe: below or equal (unsigned <=) */

loc_00085C7E: ;
    ecx = eax;
    goto loc_00085C70;

loc_00085C82: ;
    if (CMP_EQ(ecx, esi)) goto loc_00085C98; /* je: equal / zero */

loc_00085C86: ;
    eax = esi + 8;
    if (CMP_EQ(esi, eax)) goto loc_00085C98; /* je: equal / zero */

loc_00085C8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);

loc_00085C90: ;
    PUSH32(esp, 0); sub_00086260(); /* call 0x00086260 */

loc_00085C95: ;
    esp = esp + 0xC;

loc_00085C98: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_00085C50; /* jne: not equal / not zero */

loc_00085C9F: ;
    POP32(esp, esi);

loc_00085CA0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085CB0
 * Original: 0x00085CB0 - 0x00085CFE (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00085CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F460);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_00085CE3: ;
    if (CMP_EQ(esi, ebx)) { sub_00085CFE(); return; } /* je: equal / zero */

loc_00085CE7: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_000859A0(); /* call 0x000859A0 */

loc_00085CF0: ;
    edi = edi + 8;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00085CE3;

}

/**
 * sub_00085D40
 * Original: 0x00085D40 - 0x00085EFA (442 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085D40: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x28)) goto loc_00085EB5; /* jle: less or equal (signed <=) */

loc_00085D64: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    ecx = eax;
    ecx = ecx << 4;
    eax = eax << 3;
    ebp = eax + esi;
    MEM32(esp + 0x18) = ecx;
    ecx = ecx + esi;
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = ebp;
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085D9E; /* jbe: below or equal (unsigned <=) */

loc_00085D91: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085D9A: ;
    ecx = MEM32(esp + 0x14);

loc_00085D9E: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 4))) goto loc_00085DB2; /* jbe: below or equal (unsigned <=) */

loc_00085DA9: ;
    ebx = ebp;
    edi = ecx;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085DB2: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085DC6; /* jbe: below or equal (unsigned <=) */

loc_00085DBD: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085DC6: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x10);
    esi = ebp;
    esi = esi - eax;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    edi = eax + ebp;
    MEM32(esp + 0x14) = edi;
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085DF1; /* jbe: below or equal (unsigned <=) */

loc_00085DE4: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085DED: ;
    edi = MEM32(esp + 0x14);

loc_00085DF1: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 4))) goto loc_00085E03; /* jbe: below or equal (unsigned <=) */

loc_00085DFC: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E03: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085E17; /* jbe: below or equal (unsigned <=) */

loc_00085E0E: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E17: ;
    edi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ebx = edi;
    ebx = ebx - eax;
    xmm0 = MEMF(ebx + 4); /* movss */
    esi = edi;
    esi = esi - ecx;
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    MEM32(esp + 0x10) = ebx;
    if ((xmm0 <= MEMF(esi + 4))) goto loc_00085E45; /* jbe: below or equal (unsigned <=) */

loc_00085E3A: ;
    edi = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E41: ;
    edi = MEM32(esp + 0x28);

loc_00085E45: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 4))) goto loc_00085E5B; /* jbe: below or equal (unsigned <=) */

loc_00085E50: ;
    ebx = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E57: ;
    ebx = MEM32(esp + 0x10);

loc_00085E5B: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_00085E6D; /* jbe: below or equal (unsigned <=) */

loc_00085E66: ;
    edi = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E6D: ;
    ebx = MEM32(esp + 0x20);
    xmm0 = MEMF(ebx + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085E83; /* jbe: below or equal (unsigned <=) */

loc_00085E7C: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E83: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 4))) goto loc_00085E9B; /* jbe: below or equal (unsigned <=) */

loc_00085E8E: ;
    ebx = ebp;
    edi = esi;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085E97: ;
    ebx = MEM32(esp + 0x20);

loc_00085E9B: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085EF2; /* jbe: below or equal (unsigned <=) */

loc_00085EA6: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085EAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00085EB5: ;
    ebp = MEM32(esp + 0x24);
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085ECC; /* jbe: below or equal (unsigned <=) */

loc_00085EBF: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085EC8: ;
    edi = MEM32(esp + 0x28);

loc_00085ECC: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 4))) goto loc_00085EDE; /* jbe: below or equal (unsigned <=) */

loc_00085ED7: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085EDE: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 4))) goto loc_00085EF2; /* jbe: below or equal (unsigned <=) */

loc_00085EE9: ;
    ebx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00085F60(); /* call 0x00085F60 */

loc_00085EF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00085F00
 * Original: 0x00085F00 - 0x00085F52 (82 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085F00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ebx - edi;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_00085F4D; /* jle: less or equal (signed <=) */

loc_00085F1E: ;
    ebp = MEM32(esp + 0x1C);

loc_00085F22: ;
    eax = MEM32(edi + esi * 8 + -8);
    esi--;
    PUSH32(esp, ebp);
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_00085F36; /* je: equal / zero */

loc_00085F33: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085F36: ;
    eax = MEM32(edi + esi * 8 + 4);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00086000(); /* call 0x00086000 */

loc_00085F46: ;
    esp = esp + 0x14;
    if (CMP_G(esi & esi, 0)) goto loc_00085F22; /* jg: greater (signed >) */

loc_00085F4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00085F60
 * Original: 0x00085F60 - 0x00085FF8 (152 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00085F60: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_00085F6D; /* je: equal / zero */

loc_00085F6A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00085F6D: ;
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(edi) - flags set for next jcc */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_EQ(eax, MEM32(edi))) goto loc_00085FA1; /* je: equal / zero */

loc_00085F7E: ;
    if (TEST_Z(eax, eax)) goto loc_00085F85; /* je: equal / zero */

loc_00085F82: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00085F85: ;
    ecx = MEM32(edi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00085FA1; /* je: equal / zero */

loc_00085F8D: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085FA1; /* jne: not equal / not zero */

loc_00085F9A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00085FA1: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    if (CMP_EQ(esi, MEM32(ebx))) goto loc_00085FCE; /* je: equal / zero */

loc_00085FAB: ;
    if (TEST_Z(esi, esi)) goto loc_00085FB2; /* je: equal / zero */

loc_00085FAF: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00085FB2: ;
    ecx = MEM32(ebx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_00085FCE; /* je: equal / zero */

loc_00085FBA: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00085FCE; /* jne: not equal / not zero */

loc_00085FC7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00085FCE: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00085FF3; /* je: equal / zero */

loc_00085FDD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00085FF3; /* jne: not equal / not zero */

loc_00085FEA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00085FF3: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00086000
 * Original: 0x00086000 - 0x000860F9 (249 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    ebx = edi + edi + 2;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(ebx, ebp)) goto loc_0008606D; /* jge: greater or equal (signed >=) */

loc_0008601A: ;
    /* nop */

loc_00086020: ;
    xmm0 = MEMF(esi + ebx * 8 + -4); /* movss */
    /* comiss xmm0, MEMF(esi + ebx * 8 + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + ebx * 8 + 4))) goto loc_0008602E; /* jbe: below or equal (unsigned <=) */

loc_0008602D: ;
    ebx--;

loc_0008602E: ;
    eax = MEM32(esi + ebx * 8);
    if (CMP_EQ(eax, MEM32(esi + edi * 8))) goto loc_0008605B; /* je: equal / zero */

loc_00086036: ;
    if (TEST_Z(eax, eax)) goto loc_0008603D; /* je: equal / zero */

loc_0008603A: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008603D: ;
    ecx = MEM32(esi + edi * 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + edi * 8) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0008605B; /* je: equal / zero */

loc_00086047: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0008605B; /* jne: not equal / not zero */

loc_00086054: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0008605B: ;
    ecx = MEM32(esi + ebx * 8 + 4);
    MEM32(esi + edi * 8 + 4) = ecx;
    edi = ebx;
    ebx = ebx + ebx + 2;
    if (CMP_L(ebx, ebp)) goto loc_00086020; /* jl: less (signed <) */

loc_0008606D: ;
    if (CMP_NE(ebx, ebp)) goto loc_000860A8; /* jne: not equal / not zero */

loc_0008606F: ;
    eax = MEM32(esi + ebp * 8 + -8);
    if (CMP_EQ(eax, MEM32(esi + edi * 8))) goto loc_0008609D; /* je: equal / zero */

loc_00086078: ;
    if (TEST_Z(eax, eax)) goto loc_0008607F; /* je: equal / zero */

loc_0008607C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008607F: ;
    ecx = MEM32(esi + edi * 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + edi * 8) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0008609D; /* je: equal / zero */

loc_00086089: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0008609D; /* jne: not equal / not zero */

loc_00086096: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0008609D: ;
    eax = MEM32(esi + ebp * 8 + -4);
    MEM32(esi + edi * 8 + 4) = eax;
    edi = ebp + -1;

loc_000860A8: ;
    ecx = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    esp = esp - 8;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_000860BF; /* je: equal / zero */

loc_000860BC: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_000860BF: ;
    edx = MEM32(esp + 0x24);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, edx);
    MEMF(eax + 4) = xmm0; /* movss */
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00086100(); /* call 0x00086100 */

loc_000860D7: ;
    esp = esp + 0x14;
    if (TEST_Z(ebx, ebx)) goto loc_000860F4; /* je: equal / zero */

loc_000860DE: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_000860F4; /* jne: not equal / not zero */

loc_000860EB: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000860F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086100
 * Original: 0x00086100 - 0x000861CB (203 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086100: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(ebp, esi)) goto loc_00086172; /* jge: greater or equal (signed >=) */

loc_0008611C: ;
    /* nop */

loc_00086120: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0, MEMF(edi + ebx * 8 + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + ebx * 8 + 4))) goto loc_00086172; /* jbe: below or equal (unsigned <=) */

loc_0008612D: ;
    eax = MEM32(edi + ebx * 8);
    if (CMP_EQ(eax, MEM32(edi + esi * 8))) goto loc_0008615A; /* je: equal / zero */

loc_00086135: ;
    if (TEST_Z(eax, eax)) goto loc_0008613C; /* je: equal / zero */

loc_00086139: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0008613C: ;
    ecx = MEM32(edi + esi * 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + esi * 8) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0008615A; /* je: equal / zero */

loc_00086146: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0008615A; /* jne: not equal / not zero */

loc_00086153: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0008615A: ;
    ecx = MEM32(edi + ebx * 8 + 4);
    eax = ebx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    MEM32(edi + esi * 8 + 4) = ecx;
    esi = ebx;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    ebx = eax;
    if (CMP_L(ebp, esi)) goto loc_00086120; /* jl: less (signed <) */

loc_00086172: ;
    ebx = MEM32(esp + 0x1C);
    if (CMP_EQ(ebx, MEM32(edi + esi * 8))) goto loc_000861A0; /* je: equal / zero */

loc_0008617B: ;
    if (TEST_Z(ebx, ebx)) goto loc_00086182; /* je: equal / zero */

loc_0008617F: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_00086182: ;
    ecx = MEM32(edi + esi * 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + esi * 8) = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_000861A0; /* je: equal / zero */

loc_0008618C: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_000861A0; /* jne: not equal / not zero */

loc_00086199: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000861A0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(edi + esi * 8 + 4) = xmm0; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_000861C6; /* je: equal / zero */

loc_000861B0: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_000861C6; /* jne: not equal / not zero */

loc_000861BD: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000861C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000861D0
 * Original: 0x000861D0 - 0x0008625F (143 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000861D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000861D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    if (CMP_EQ(eax, ecx)) goto loc_00086205; /* je: equal / zero */

loc_000861E2: ;
    if (TEST_Z(eax, eax)) goto loc_000861E9; /* je: equal / zero */

loc_000861E6: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_000861E9: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00086205; /* je: equal / zero */

loc_000861F1: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00086205; /* jne: not equal / not zero */

loc_000861FE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00086205: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    esi = MEM32(esp + 0x1C);
    esp = esp - 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_00086222; /* je: equal / zero */

loc_0008621F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00086222: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = MEM32(esp + 0x1C);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00086000(); /* call 0x00086000 */

loc_0008623F: ;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_0008625C; /* je: equal / zero */

loc_00086246: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0008625C; /* jne: not equal / not zero */

loc_00086253: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0008625C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086260
 * Original: 0x00086260 - 0x000863D5 (373 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086260: ;
    ecx = MEM32(esp + 0xC);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    ebx = ebx - edi;
    ecx = ecx - edi;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = ecx;
    esi = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0008628F; /* je: equal / zero */

loc_00086284: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = edx;
    if (TEST_NZ(edx, edx)) goto loc_00086284; /* jne: not equal / not zero */

loc_0008628F: ;
    if (CMP_GE(eax, ecx)) goto loc_000863CE; /* jge: greater or equal (signed >=) */

loc_00086297: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000863CE; /* jle: less or equal (signed <=) */

loc_0008629F: ;
    ecx = ebx * 8;
    esi = 4;
    edx = edi + eax * 8;
    esi = esi - ecx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_000862C3;

loc_000862BF: ;
    esi = MEM32(esp + 0x14);

loc_000862C3: ;
    ebp = MEM32(edx);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    edi = edx;
    if (TEST_Z(ebp, ebp)) goto loc_000862CE; /* je: equal / zero */

loc_000862CB: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_000862CE: ;
    ecx = MEM32(esp + 0x38);
    eax = edx + ebx * 8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    xmm0 = MEMF(esi + eax); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_NE(eax, ecx)) goto loc_000862EA; /* jne: not equal / not zero */

loc_000862E4: ;
    eax = esp + 0x30;
    goto loc_000862F2;

loc_000862EA: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;

loc_000862F2: ;
    esi = MEM32(eax);
    if (CMP_EQ(esi, edx)) goto loc_00086362; /* je: equal / zero */

loc_000862F8: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, MEM32(edi))) goto loc_00086323; /* je: equal / zero */

loc_000862FE: ;
    if (TEST_Z(eax, eax)) goto loc_00086305; /* je: equal / zero */

loc_00086302: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00086305: ;
    ecx = MEM32(edi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00086323; /* je: equal / zero */

loc_0008630D: ;
    eax = MEM32(ecx + 4);
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00086323; /* jne: not equal / not zero */

loc_00086318: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0008631F: ;
    edx = MEM32(esp + 0x34);

loc_00086323: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esi + 4);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    edi = esi;
    if (CMP_GE(ebx, eax)) goto loc_00086345; /* jge: greater or equal (signed >=) */

loc_00086338: ;
    eax = esi + ebx * 8;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x1C;
    goto loc_0008635C;

loc_00086345: ;
    ecx = MEM32(esp + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1FFFFFFF);
    eax = eax + ebx;
    eax = ecx + eax * 8;
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;

loc_0008635C: ;
    esi = MEM32(eax);
    if (CMP_NE(esi, edx)) goto loc_000862F8; /* jne: not equal / not zero */

loc_00086362: ;
    if (CMP_EQ(ebp, MEM32(edi))) goto loc_0008638D; /* je: equal / zero */

loc_00086366: ;
    if (TEST_Z(ebp, ebp)) goto loc_0008636D; /* je: equal / zero */

loc_0008636A: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0008636D: ;
    ecx = MEM32(edi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = ebp;
    if (TEST_Z(ecx, ecx)) goto loc_0008638D; /* je: equal / zero */

loc_00086375: ;
    esi = MEM32(ecx + 4);
    esi--;
    eax = esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = esi;
    if (TEST_NZ(eax, eax)) goto loc_0008638D; /* jne: not equal / not zero */

loc_00086382: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00086389: ;
    edx = MEM32(esp + 0x34);

loc_0008638D: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    if (TEST_Z(ebp, ebp)) goto loc_000863B7; /* je: equal / zero */

loc_0008639C: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_000863B7; /* jne: not equal / not zero */

loc_000863A9: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000863B3: ;
    edx = MEM32(esp + 0x34);

loc_000863B7: ;
    eax = MEM32(esp + 0x10);
    edx = edx - 8;
    eax--;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000862BF; /* jne: not equal / not zero */

loc_000863CD: ;
    POP32(esp, ebp);

loc_000863CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000863E0
 * Original: 0x000863E0 - 0x00086440 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000863E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EB9D0(); /* call 0x003EB9D0 */

loc_000863E7: ;
    PUSH32(esp, 0); sub_00099FA0(); /* call 0x00099FA0 */

loc_000863EC: ;
    esi = MEM32(0x84722C);
    if (TEST_Z(esi, esi)) goto loc_0008640F; /* je: equal / zero */

loc_000863F6: ;
    PUSH32(esp, ebx);
    goto loc_00086400;

    /* nop */

loc_00086400: ;
    ebx = esi;
    esi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00099C30(); /* call 0x00099C30 */

loc_0008640A: ;
    if (TEST_NZ(esi, esi)) goto loc_00086400; /* jne: not equal / not zero */

loc_0008640E: ;
    POP32(esp, ebx);

loc_0008640F: ;
    esi = MEM32(0x847224);
    if (TEST_Z(esi, esi)) goto loc_0008643D; /* je: equal / zero */

loc_00086419: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0005F150(); /* call 0x0005F150 */

loc_00086421: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0008642F: ;
    esp = esp + 4;
    MEM32(0x847224) = 0;
    POP32(esp, edi);

loc_0008643D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086440
 * Original: 0x00086440 - 0x00086488 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00086440: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00099EF0(); /* call 0x00099EF0 */

loc_00086446: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00086484; /* je: equal / zero */

loc_0008644C: ;
    PUSH32(esp, 0); sub_001F1360(); /* call 0x001F1360 */

loc_00086451: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_00086456: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_0008645B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00086484; /* jne: not equal / not zero */

loc_00086464: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_00086484; /* je: equal / zero */

loc_0008646D: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_00086472: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00086484; /* jne: not equal / not zero */

loc_00086476: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0008647B: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_00086480: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00086476; /* je: equal / zero */

loc_00086484: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086490
 * Original: 0x00086490 - 0x000864F2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00086490: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0008649C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0); sub_0009A210(); /* call 0x0009A210 */

loc_000864B0: ;
    esp = esp + 0x18;
    esi = eax;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_000864BA: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_000864BF: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000864EE; /* jne: not equal / not zero */

loc_000864C8: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_000864EE; /* je: equal / zero */

loc_000864D1: ;
    if (TEST_Z(esi, esi)) goto loc_000864EE; /* je: equal / zero */

loc_000864D5: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_000864DA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000864EE; /* jne: not equal / not zero */

loc_000864DE: ;
    edi = edi;

loc_000864E0: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_000864E5: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_000864EA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000864E0; /* je: equal / zero */

loc_000864EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086500
 * Original: 0x00086500 - 0x000865A4 (164 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00086500: ;
    esp = esp - 0x114;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5F04E0);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00086518: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_00086525: ;
    if (TEST_Z(eax, eax)) goto loc_0008659A; /* je: equal / zero */

loc_00086529: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5F04E0);
    PUSH32(esp, 0x14);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0008653A: ;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x14;
    MEM32(esp + 4) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0008655D: ;
    /* nop */

loc_00086560: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0008657C; /* jl: less (signed <) */

loc_0008656E: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0008657C; /* jg: greater (signed >) */

loc_00086575: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0008657A: ;
    goto loc_00086560;

loc_0008657C: ;
    if (CMP_NE(MEM32(ecx + 4), edi)) { sub_000865A4(); return; } /* jne: not equal / not zero */

loc_00086581: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_0008658F; /* je: equal / zero */

loc_0008658B: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_0008658F: ;
    edi = MEM32(eax);
    ecx = esp + 4;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0008659A: ;
    eax = edi;
    POP32(esp, edi);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_000865C0
 * Original: 0x000865C0 - 0x0008660A (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000865C0: ;
    esp = esp - 0x988;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x994);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x998);
    PUSH32(esp, 0); sub_003ED0A0(); /* call 0x003ED0A0 */

loc_000865DC: ;
    eax = MEM32(esi + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5DF8C0;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000865F2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0008660A(); return; } /* je: equal / zero */

loc_000865F9: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0008660A(); return; } /* je: equal / zero */

loc_00086601: ;
    edx = MEM32(eax + 8);
    MEM32(esp + 0xC) = edx;
    g_seh_ebp = ebp; sub_00086612(); return; /* tail jmp 0x00086612 */

}

/**
 * sub_00086790
 * Original: 0x00086790 - 0x0008679C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086790(void)
{

loc_00086790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_003FA320(); /* call 0x003FA320 */

loc_0008679A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000867A0
 * Original: 0x000867A0 - 0x000867E9 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000867A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000867A0: ;
    if (CMP_G(eax, 0xA7)) goto loc_000867C4; /* jg: greater (signed >) */

loc_000867A7: ;
    if (CMP_EQ(eax, 0xA7)) goto loc_000867E0; /* je: equal / zero */

loc_000867A9: ;
    if (CMP_A(eax, 0x9A)) { sub_000867E9(); return; } /* ja: above (unsigned >) */

loc_000867B0: ;
    ecx = ZX8(MEM8(eax + 0x8682C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x86814)); return; /* indirect tail jmp */

    eax = 0x58;
    esp += 4; return; /* ret */

loc_000867C4: ;
    ecx = eax + -187;
    if (CMP_A(ecx, 0xD4)) { sub_000867E9(); return; } /* ja: above (unsigned >) */

loc_000867D2: ;
    edx = ZX8(MEM8(ecx + 0x868DC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x868C8)); return; /* indirect tail jmp */

loc_000867E0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000869C0
 * Original: 0x000869C0 - 0x00086A01 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000869C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    if (TEST_Z(ebx, ebx)) goto loc_000869FE; /* je: equal / zero */

loc_000869C8: ;
    eax = MEM32(ebx);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_000869FD; /* jle: less or equal (signed <=) */

loc_000869DF: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_000869E5: ;
    ecx = MEM32(ebx + 4);
    esi = MEM32(ecx + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003F9540(); /* call 0x003F9540 */

loc_000869F1: ;
    eax = MEM32(ebx);
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, eax)) goto loc_000869E5; /* jl: less (signed <) */

loc_000869FB: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000869FD: ;
    POP32(esp, edi);

loc_000869FE: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086A10
 * Original: 0x00086A10 - 0x00086B30 (288 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086A10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00086A10: ;
    esp = esp - 0x30;
    xmm0 = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = eax + 0x698;
    MEM32(esp + 4) = eax;
    eax = esp + 0x18;
    ecx = esp + 0x24;
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(ebx);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 0x10), LO16(edi))) goto loc_00086B2B; /* jbe: below or equal (unsigned <=) */

loc_00086A83: ;
    edx = esp + 0x28;
    ecx = esp + 0x10;
    MEM32(esp + 8) = edx;
    edx = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = edx;
    esi = 0; /* xor self */
    /* nop */

loc_00086AA0: ;
    eax = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + esi + 0x38); /* movss */
    xmm1 = MEMF(eax + esi + 0x34); /* movss */
    xmm2 = MEMF(eax + esi + 0x30); /* movss */
    eax = eax + esi;
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(ebx);
    eax = MEM32(eax + 0xC);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    eax = eax + esi;
    MEMF(eax + 0x30) = xmm2; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(ebx);
    ecx = ZX16(MEM16(eax + 0x10));
    edi++;
    esi = esi + 0x40;
    if (CMP_L(edi, ecx)) goto loc_00086AA0; /* jl: less (signed <) */

loc_00086B2A: ;
    POP32(esp, esi);

loc_00086B2B: ;
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00086B30
 * Original: 0x00086B30 - 0x00086C52 (290 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086B30: ;
    eax = MEM32(esi + 4);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00086C05; /* je: equal / zero */

loc_00086B41: ;
    if (CMP_EQ(MEM32(esi), ebp)) { sub_00086C52(); return; } /* je: equal / zero */

loc_00086B49: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = ebp;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00086B87; /* jne: not equal / not zero */

loc_00086B5F: ;
    ecx = MEM32(esp + 0x24);
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edi = esp + 0x14;
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_00089C70(); /* call 0x00089C70 */

loc_00086B80: ;
    ebx = MEM32(esp + 0x28);
    esp = esp + 8;

loc_00086B87: ;
    eax = MEM32(esi);
    edx = MEM32(0x7FA21C);
    edi = eax + 4;
    eax = edi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_00086B9D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00035FD0(); /* call 0x00035FD0 */

loc_00086BA8: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00086C33; /* jne: not equal / not zero */

loc_00086BB3: ;
    edi = MEM32(esp + 0x30);
    if (TEST_Z(edi, edi)) goto loc_00086C0A; /* je: equal / zero */

loc_00086BBB: ;
    eax = edi;
    PUSH32(esp, 0); sub_002C5260(); /* call 0x002C5260 */

loc_00086BC2: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00086C0A; /* jne: not equal / not zero */

loc_00086BC6: ;
    if (CMP_NE(MEM8(esi + 8), 1)) goto loc_00086C0A; /* jne: not equal / not zero */

loc_00086BCC: ;
    ebx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00086A10(); /* call 0x00086A10 */

loc_00086BD5: ;
    edi = MEM32(esi);
    eax = edi + 4;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_00086BDF: ;
    MEM8(edi + 0x12) = 0;
    ecx = 0; /* xor self */
    edi = edi + 0x14;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = ecx;
    POP32(esp, edi);
    MEM8(esi + 8) = 1;
    POP32(esp, ebx);

loc_00086C05: ;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00086C0A: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_00086C25: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi + 8) = 1;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00086C33: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_00086C44: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi + 8) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00086C60
 * Original: 0x00086C60 - 0x0008737D (1821 bytes, 431 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C60(void)
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

loc_00086C60: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0; /* xor self */
    if (TEST_Z(edi, edi)) goto loc_00086D14; /* je: equal / zero */

loc_00086C76: ;
    ebx = MEM32(esp + 0x12C);
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00086CC6; /* je: equal / zero */

loc_00086C84: ;
    if (CMP_NE(eax, MEM32(esp + 0x130))) goto loc_00086CC6; /* jne: not equal / not zero */

loc_00086C8D: ;
    esi = MEM32(ebx + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00086CC6; /* je: equal / zero */

loc_00086C94: ;
    SET_LO8(edx, MEM8(ebx + 9));
    ecx = MEM32(esp + 0x13C);
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (CMP_NE(eax, ecx)) goto loc_00086D3B; /* jne: not equal / not zero */

loc_00086CAD: ;
    xmm0 = MEMF(ebx + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x134) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00087372; /* jnp: not parity */

loc_00086CC4: ;
    goto loc_00086D3B;

loc_00086CC6: ;
    eax = MEM32(ebx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = ebx + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00086CE0; /* je: equal / zero */

loc_00086CD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00086CD6: ;
    esp = esp + 4;
    MEM32(ebp) = 0;

loc_00086CE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00086CEF: ;
    esi = eax;
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x5F0500);
    edi = esi;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_00086D02: ;
    ecx = MEM32(esp + 0x144);
    esp = esp + 0x14;
    MEM32(ebp) = eax;
    MEM32(ebx + 0x10) = ecx;
    goto loc_00086D3B;

loc_00086D14: ;
    edi = MEM32(esp + 0x12C);
    eax = MEM32(edi + 0x14);
    edi = edi + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00086D34; /* je: equal / zero */

loc_00086D25: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00086D2B: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00086D34: ;
    ebx = MEM32(esp + 0x12C);

loc_00086D3B: ;
    eax = MEM32(esp + 0x13C);
    if (TEST_Z(eax, eax)) goto loc_00087004; /* je: equal / zero */

loc_00086D4A: ;
    edi = MEM32(ebx);
    if (TEST_Z(edi, edi)) goto loc_00087308; /* je: equal / zero */

loc_00086D54: ;
    edi = edi + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(esi, esi)) goto loc_00087308; /* je: equal / zero */

loc_00086D63: ;
    edx = MEM32(esp + 0x134);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_000367A0(); /* call 0x000367A0 */

loc_00086D77: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00086D9B; /* je: equal / zero */

loc_00086D7E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm0; /* movss */
    goto loc_00087308;

loc_00086D9B: ;
    ebx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00035F90(); /* call 0x00035F90 */

loc_00086DA4: ;
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00086DAD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB1);
    PUSH32(esp, 0x5D4B84);
    PUSH32(esp, 0x200);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00086DC5: ;
    ebp = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_00087301; /* je: equal / zero */

loc_00086DD2: ;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x5D4B84);
    edi = esi;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_00086DEE: ;
    xmm0 = MEMF(esp + 0x140); /* movss */
    edi = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEMF(ebp + 0x1B0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0xC) = eax;
    MEMF(ebp + 0x1B4) = xmm0; /* movss */
    MEMF(ebp + 0x1B8) = xmm0; /* movss */
    MEM32(ebp + 8) = edi;
    MEM16(ebp + 0x1D8) = LO16(edi);
    MEM16(ebp + 0x1DA) = LO16(edi);
    MEM32(ebp + 0x1DC) = edi;
    MEM8(ebp + 0x1F0) = 0;
    MEM8(ebp + 0x1F1) = 0;
    if (CMP_EQ(ebx, edi)) goto loc_00086EA7; /* je: equal / zero */

loc_00086E43: ;
    eax = MEM32(ebx + 0x1BC);
    MEM32(ebp + 0x1BC) = eax;
    ecx = MEM32(ebx + 0x1C0);
    MEM32(ebp + 0x1C0) = ecx;
    edx = MEM32(ebx + 0x1C8);
    MEM32(ebp + 0x1C8) = edx;
    xmm1 = MEMF(ebx + 0x1C8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ebx + 0x1BC) = xmm0; /* movss */
    MEMF(ebx + 0x1C0) = xmm0; /* movss */
    MEMF(ebx + 0x1C4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00086EC7; /* jp: parity */

loc_00086E90: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00086E9B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x84A5BD) = 1;
    goto loc_00086EC7;

loc_00086EA7: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x1BC) = xmm1; /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x1C8) = xmm1; /* movss */

loc_00086EC7: ;
    xmm1 = MEMF(esp + 0x138); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00086EED; /* jp: parity */

loc_00086ED9: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00086EE4: ;
    MEM8(0x84A5BD) = 1;
    edi = 0; /* xor self */

loc_00086EED: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x104);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(ebp + 0x1C4) = xmm0; /* movss */
    MEM8(ebp + 0x1D4) = 0;
    MEM8(ebp + 0x1D6) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00086F1B: ;
    eax = esp + 0x14;
    MEM32(esp + 0x124) = 0x1D;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00086F3B: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_00086F44: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 4), edi)) goto loc_0008725F; /* jne: not equal / not zero */

loc_00086F51: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_00086F5F; /* je: equal / zero */

loc_00086F5B: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_00086F5F: ;
    ebx = MEM32(ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00086F6A: ;
    esi = ebp + 0x10;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_003CBF10(); /* call 0x003CBF10 */

loc_00086F76: ;
    ecx = MEM32(esp + 0x134);
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM16(ebp + 0xF8) = LO16(edi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003CC2A0(); /* call 0x003CC2A0 */

loc_00086F97: ;
    xmm0 = MEMF(esp + 0x138); /* movss */
    esp = esp + 4;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEM32(ebp + 0xF4) = 1;
    MEM32(ebp + 0xF0) = 2;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    if ((xmm0 < xmm2)) goto loc_00086FC6; /* jb: below (unsigned <) */

loc_00086FC2: ;
    fp_top() = fabs(fp_top()); /* fabs */
    goto loc_00086FCA;

loc_00086FC6: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = -fp_top(); /* fchs */

loc_00086FCA: ;
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    xmm0 = MEMF(edx); /* movss */

loc_00086FDE: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ebp + 0x1CC) = xmm0; /* movss */
    /* comiss xmm2, MEMF(ebp + 0xE8) - sets EFLAGS */
    if ((xmm2 > MEMF(ebp + 0xE8))) goto loc_0008728F; /* ja: above (unsigned >) */

loc_00086FF7: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    goto loc_00087297;

loc_00087004: ;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_00087308; /* je: equal / zero */

loc_0008700E: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax + 4;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(esi, esi)) goto loc_00087308; /* je: equal / zero */

loc_0008701D: ;
    eax = MEM32(esp + 0x134);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_000367A0(); /* call 0x000367A0 */

loc_00087031: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00086D7E; /* jne: not equal / not zero */

loc_0008703C: ;
    ebx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00035F90(); /* call 0x00035F90 */

loc_00087045: ;
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0008704E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB1);
    PUSH32(esp, 0x5D4B84);
    PUSH32(esp, 0x200);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00087066: ;
    ebp = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_00087301; /* je: equal / zero */

loc_00087073: ;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x5D4B84);
    edi = esi;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0008708F: ;
    xmm0 = MEMF(esp + 0x140); /* movss */
    edi = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEMF(ebp + 0x1B0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0xC) = eax;
    MEMF(ebp + 0x1B4) = xmm0; /* movss */
    MEMF(ebp + 0x1B8) = xmm0; /* movss */
    MEM32(ebp + 8) = edi;
    MEM16(ebp + 0x1D8) = LO16(edi);
    MEM16(ebp + 0x1DA) = LO16(edi);
    MEM32(ebp + 0x1DC) = edi;
    MEM8(ebp + 0x1F0) = 0;
    MEM8(ebp + 0x1F1) = 0;
    if (CMP_EQ(ebx, edi)) goto loc_00087148; /* je: equal / zero */

loc_000870E4: ;
    ecx = MEM32(ebx + 0x1BC);
    MEM32(ebp + 0x1BC) = ecx;
    edx = MEM32(ebx + 0x1C0);
    MEM32(ebp + 0x1C0) = edx;
    eax = MEM32(ebx + 0x1C8);
    MEM32(ebp + 0x1C8) = eax;
    xmm1 = MEMF(ebx + 0x1C8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ebx + 0x1BC) = xmm0; /* movss */
    MEMF(ebx + 0x1C0) = xmm0; /* movss */
    MEMF(ebx + 0x1C4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00087168; /* jp: parity */

loc_00087131: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_0008713C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x84A5BD) = 1;
    goto loc_00087168;

loc_00087148: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x1BC) = xmm1; /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x1C8) = xmm1; /* movss */

loc_00087168: ;
    xmm1 = MEMF(esp + 0x138); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008718E; /* jp: parity */

loc_0008717A: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00087185: ;
    MEM8(0x84A5BD) = 1;
    edi = 0; /* xor self */

loc_0008718E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x104);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(ebp + 0x1C4) = xmm0; /* movss */
    MEM8(ebp + 0x1D4) = 0;
    MEM8(ebp + 0x1D6) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_000871BC: ;
    eax = esp + 0x14;
    MEM32(esp + 0x124) = 0x1D;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_000871DC: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_000871E5: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 4), edi)) goto loc_0008725F; /* jne: not equal / not zero */

loc_000871EE: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_000871FC; /* je: equal / zero */

loc_000871F8: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_000871FC: ;
    ebx = MEM32(ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00087207: ;
    esi = ebp + 0x10;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_003CBF10(); /* call 0x003CBF10 */

loc_00087213: ;
    edx = MEM32(esp + 0x134);
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esi;
    MEM16(ebp + 0xF8) = LO16(edi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003CC2A0(); /* call 0x003CC2A0 */

loc_00087234: ;
    xmm0 = MEMF(esp + 0x138); /* movss */
    esp = esp + 4;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEM32(ebp + 0xF4) = edi;
    MEM32(ebp + 0xF0) = 2;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    if ((xmm0 < xmm2)) goto loc_00087272; /* jb: below (unsigned <) */

loc_0008725B: ;
    fp_top() = fabs(fp_top()); /* fabs */
    goto loc_00087276;

loc_0008725F: ;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_00087264: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0008726D: ;
    goto loc_00087301;

loc_00087272: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = -fp_top(); /* fchs */

loc_00087276: ;
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    xmm0 = MEMF(eax); /* movss */
    goto loc_00086FDE;

loc_0008728F: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_00087297: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp + 0x1EC) = edi;
    MEM16(ebp + 0x1E8) = LO16(edi);
    MEM32(ebp + 0x1E4) = edi;
    PUSH32(esp, edi);
    MEM32(ebp + 0x1E0) = edi;
    ebx = ebp;
    PUSH32(esp, 0x366E0);
    MEMF(ebp + 0x1D0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1890(); /* call 0x003E1890 */

loc_000872C9: ;
    xmm0 = MEMF(esp + 0x140); /* movss */
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00087301; /* jnp: not parity */

loc_000872E2: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00036740(); /* call 0x00036740 */

loc_000872E9: ;
    if (TEST_Z(eax, eax)) goto loc_00087301; /* je: equal / zero */

loc_000872ED: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(eax + 0x1B8) = xmm1; /* movss */

loc_00087301: ;
    ebx = MEM32(esp + 0x12C);

loc_00087308: ;
    ecx = MEM32(esp + 0x13C);
    xmm0 = MEMF(esp + 0x134); /* movss */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM8(ebx + 9) = LO8(ecx);
    MEMF(ebx + 0xC) = xmm0; /* movss */
    ebx = MEM32(ebx);
    if (TEST_Z(ebx, ebx)) goto loc_00087372; /* je: equal / zero */

loc_0008732B: ;
    ebx = ebx + 4;
    edx = 0; /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00087337: ;
    if (TEST_Z(eax, eax)) goto loc_00087372; /* je: equal / zero */

loc_0008733B: ;
    ecx = MEM32(eax);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_00087372; /* je: equal / zero */

loc_00087342: ;
    edx = MEM32(ecx + 8);
    if (CMP_NE(edx, MEM32(eax + 8))) goto loc_00087372; /* jne: not equal / not zero */

loc_0008734A: ;
    if (CMP_EQ(ecx, ebx)) goto loc_00087372; /* je: equal / zero */

loc_0008734E: ;
    if (CMP_EQ(MEM16(ecx + 0xF8), 0)) goto loc_00087372; /* je: equal / zero */

loc_00087358: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0xDC) = xmm0; /* movss */
    MEM32(ecx + 0xF4) = 1;

loc_00087372: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00087380
 * Original: 0x00087380 - 0x00087428 (168 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087380: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00087395; /* jne: not equal / not zero */

loc_00087390: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00087395: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000873DD; /* je: equal / zero */

loc_000873BB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_000873DD; /* jb: below (unsigned <) */

loc_000873C4: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000873CE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000873D6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000873FA; /* jne: not equal / not zero */

loc_000873DD: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000873EF: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000873F7: ;
    esp = esp + 8;

loc_000873FA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0008741F; /* je: equal / zero */

loc_00087401: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00076970(); /* call 0x00076970 */

loc_00087418: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00087428(); return; } /* je: equal / zero */

loc_0008741F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00087490
 * Original: 0x00087490 - 0x000874D8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00087490: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00036B50(); /* call 0x00036B50 */

loc_00087498: ;
    ecx = MEM32(esi + 0x14);
    eax = esi + 0x14;
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_000874AE; /* je: equal / zero */

loc_000874A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000874AB: ;
    esp = esp + 4;

loc_000874AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000874B4: ;
    if (TEST_NZ(eax, eax)) goto loc_000874D7; /* jne: not equal / not zero */

loc_000874B8: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000874D6: ;
    POP32(esp, ecx);

loc_000874D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000874E0
 * Original: 0x000874E0 - 0x00087569 (137 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000874E0(void)
{
    uint32_t ebp;
    float xmm5;

loc_000874E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    edx = MEM32(ebp + 0x14);
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x10) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00087570(); /* call 0x00087570 */

loc_00087520: ;
    xmm5 = xmm5 - MEMF(esp + 0x10); /* subss */
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm5; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087541: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0xC;
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00087551: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00087563: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00087570
 * Original: 0x00087570 - 0x000875B9 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087570: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x68);
    eax = eax - 0x69;
    xmm2 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm3 = MEMF(0x648D10); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    if ((eax == 0)) goto loc_0008759E; /* je: equal / zero */

loc_0008758D: ;
    eax = eax - 0x13;
    if ((eax == 0)) goto loc_0008759E; /* je: equal / zero */

loc_00087592: ;
    eax = eax - 0xB;
    MEM32(esp) = 0xA;
    if ((eax != 0)) goto loc_000875A5; /* jne: not equal / not zero */

loc_0008759E: ;
    MEM32(esp) = 0;

loc_000875A5: ;
    SET_LO8(eax, MEM8(esi + 0x401));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000875B9(); return; } /* jne: not equal / not zero */

loc_000875AF: ;
    xmm0 = MEMF(0x649780); /* movss */
    g_seh_ebp = ebp; sub_000875D8(); return; /* tail jmp 0x000875D8 */

}

/**
 * sub_00087790
 * Original: 0x00087790 - 0x000877CB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00087790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, MEM8(ebx + 0x408));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000877CB(); return; } /* jne: not equal / not zero */

loc_000877BB: ;
    xmm0 = MEMF(0x649780); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000877FD(); return; /* tail jmp 0x000877FD */

}

/**
 * sub_000879D0
 * Original: 0x000879D0 - 0x00087A92 (194 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879D0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_000879D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    esi = ebx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00087570(); /* call 0x00087570 */

loc_00087A0E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(ebx + 0x260); /* movss */
    esp = esp + 8;
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    edx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087A4E: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 0xC);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_00087A68: ;
    esp = esp + 0x10;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00087A7B: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edx;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00087A8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00087AA0
 * Original: 0x00087AA0 - 0x00087B36 (150 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087AA0: ;
    ecx = MEM32(0x84A5F8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + 0xFFFFFFC5u;
    if (CMP_A(ecx, 0x75)) goto loc_00087B06; /* ja: above (unsigned >) */

loc_00087ABB: ;
    ecx = ZX8(MEM8(ecx + 0x87B44));
    { uint32_t _jt = MEM32(ecx * 4 + 0x87B38); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00087AC9u) goto loc_00087AC9;
    if (_jt == 0x00087AE3u) goto loc_00087AE3;
    if (_jt == 0x00087B06u) goto loc_00087B06;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00087AC9: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_EQ(ecx, 4)) goto loc_00087AED; /* je: equal / zero */

loc_00087AD4: ;
    if (CMP_EQ(ecx, 0x2F)) goto loc_00087B35; /* je: equal / zero */

loc_00087AD9: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_00087B35; /* je: equal / zero */

loc_00087AE3: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0008F2B0(); /* call 0x0008F2B0 */

loc_00087AE9: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00087AED: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_00087B35; /* je: equal / zero */

loc_00087AF7: ;
    if (CMP_EQ(edx, 8)) goto loc_00087B35; /* je: equal / zero */

loc_00087AFC: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0008F2B0(); /* call 0x0008F2B0 */

loc_00087B02: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00087B06: ;
    ecx = MEM32(eax + 0x70);
    if (TEST_Z(ecx, ecx)) goto loc_00087B2E; /* je: equal / zero */

loc_00087B0D: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00087B35; /* je: equal / zero */

loc_00087B17: ;
    eax = MEM32(eax + 0x3F4);
    if (TEST_Z(eax, eax)) goto loc_00087B35; /* je: equal / zero */

loc_00087B21: ;
    eax = MEM32(eax + 0xC);
    if (CMP_EQ(eax, 1)) goto loc_00087B2E; /* je: equal / zero */

loc_00087B29: ;
    if (CMP_NE(eax, 2)) goto loc_00087B35; /* jne: not equal / not zero */

loc_00087B2E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0008F2B0(); /* call 0x0008F2B0 */

loc_00087B34: ;
    POP32(esp, ecx);

loc_00087B35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087BC0
 * Original: 0x00087BC0 - 0x00087C5A (154 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00087BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84A5F8);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esi + eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00087C57; /* je: equal / zero */

loc_00087BDC: ;
    if (CMP_EQ(MEM32(esi + eax + 0x64), 1)) goto loc_00087C09; /* je: equal / zero */

loc_00087BE3: ;
    SET_LO8(ecx, MEM8(esi + eax + 0xA1));
    if (CMP_EQ(LO8(ecx), 7)) goto loc_00087C09; /* je: equal / zero */

loc_00087BEF: ;
    if (CMP_EQ(LO8(ecx), 9)) goto loc_00087C09; /* je: equal / zero */

loc_00087BF4: ;
    ecx = MEM32(esi + eax + 0x68);
    if (TEST_Z(ecx, ecx)) goto loc_00087C09; /* je: equal / zero */

loc_00087BFC: ;
    if (CMP_EQ(ecx, 0x114)) goto loc_00087C09; /* je: equal / zero */

loc_00087C04: ;
    if (CMP_NE(ecx, 0x58)) goto loc_00087C15; /* jne: not equal / not zero */

loc_00087C09: ;
    edx = edi;
    PUSH32(esp, 0); sub_00087AA0(); /* call 0x00087AA0 */

loc_00087C10: ;
    eax = MEM32(0x84A5F8);

loc_00087C15: ;
    if (CMP_NE(MEM32(esi + eax + 0x64), 0x34)) goto loc_00087C28; /* jne: not equal / not zero */

loc_00087C1C: ;
    eax = edi;
    PUSH32(esp, 0); sub_00090FB0(); /* call 0x00090FB0 */

loc_00087C23: ;
    eax = MEM32(0x84A5F8);

loc_00087C28: ;
    if (CMP_NE(MEM32(esi + eax + 0x64), 0x22)) goto loc_00087C3B; /* jne: not equal / not zero */

loc_00087C2F: ;
    edx = edi;
    PUSH32(esp, 0); sub_00087AA0(); /* call 0x00087AA0 */

loc_00087C36: ;
    eax = MEM32(0x84A5F8);

loc_00087C3B: ;
    ecx = MEM32(eax + esi + 0x68);
    eax = eax + esi;
    ecx = ecx - 0x60;
    if ((ecx == 0)) { sub_00087C5A(); return; } /* je: equal / zero */

loc_00087C46: ;
    ecx = ecx - 0x70;
    if ((ecx == 0)) goto loc_00087C50; /* je: equal / zero */

loc_00087C4B: ;
    ecx = ecx - 5;
    if ((ecx != 0)) goto loc_00087C57; /* jne: not equal / not zero */

loc_00087C50: ;
    edi = eax;
    PUSH32(esp, 0); sub_00117490(); /* call 0x00117490 */

loc_00087C57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087C70
 * Original: 0x00087C70 - 0x00087DF2 (386 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00087C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00087D0D; /* je: equal / zero */

loc_00087C9E: ;
    SET_LO8(edx, MEM8(eax + 0x540));
    if (TEST_S(LO8(edx), LO8(edx))) goto loc_00087D0D; /* js: sign (negative) */

loc_00087CA8: ;
    xmm1 = MEMF(eax + 0x128); /* movss */
    xmm2 = MEMF(eax + 0x1CC); /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    eax = MEM32(eax + 0xA4);
    (void)0; /* cmp eax, 0x42 - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (CMP_EQ(eax, 0x42)) goto loc_00087D0D; /* je: equal / zero */

loc_00087CDD: ;
    if (CMP_EQ(eax, 0x14)) goto loc_00087D0D; /* je: equal / zero */

loc_00087CE2: ;
    eax = MEM32(ecx + 0xA0);
    edx = 0; /* xor self */
    if (CMP_NE(eax, 0xA)) goto loc_00087CF8; /* jne: not equal / not zero */

loc_00087CEF: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00087D01;

loc_00087CF8: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00087D01: ;
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087D0A: ;
    esp = esp + 0xC;

loc_00087D0D: ;
    eax = MEM32(ebx);
    xmm1 = MEMF(eax + 0x3BC); /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm2 = MEMF(eax + 0x1C0); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm2; /* subss */
    eax = esp + 0xEC;
    edx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087D4B: ;
    edx = MEM32(ebx);
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x12C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087D78: ;
    eax = MEM32(ebx);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x16C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087DAC: ;
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + 0x568);
    esp = esp + 0xC;
    if (TEST_Z(ecx, ecx)) { sub_00087DF2(); return; } /* je: equal / zero */

loc_00087DBB: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00087DF2(); return; } /* jnp: not parity */

loc_00087DCD: ;
    xmm0 = xmm0 * MEMF(0x64928C); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0xAC;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00087DED: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00087E05(); return; /* tail jmp 0x00087E05 */

}

/**
 * sub_00087F50
 * Original: 0x00087F50 - 0x00087FF5 (165 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087F50(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00087F50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00087F65: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x3C4);
    edx = MEM32(ecx);
    xmm0 = MEMF(eax + 0x28C); /* movss */
    xmm5 = MEMF(eax + 0x7C); /* movss */
    xmm6 = MEMF(eax + 0x288); /* movss */
    ecx = ZX16(MEM16(esp + 0x18));
    xmm2 = 0.0f; /* xorps self = zero */
    eax = ecx + ecx * 8;
    ecx = MEM32(edx + 0x34);
    xmm3 = MEMF(ecx + eax * 4 + 0xC); /* movss */
    xmm4 = MEMF(ecx + eax * 4 + 0x10); /* movss */
    eax = ecx + eax * 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, ecx);
    MEMF(esi + 0x30) = xmm2; /* movss */
    MEMF(esi + 0x34) = xmm2; /* movss */
    MEMF(esi + 0x38) = xmm2; /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    ecx = esi;
    eax = esi;
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_00087FE0: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    xmm1 = xmm5; /* movaps */
    xmm0 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003E2BD0(); /* call 0x003E2BD0 */

loc_00087FF0: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088000
 * Original: 0x00088000 - 0x00088010 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088000: ;
    eax = MEM32(0x8471EC);
    if (TEST_NZ(eax, eax)) { sub_00088010(); return; } /* jne: not equal / not zero */

loc_00088009: ;
    MEM32(0x847214) = eax;
    g_seh_ebp = ebp; sub_0008801C(); return; /* tail jmp 0x0008801C */

}

/**
 * sub_000880A0
 * Original: 0x000880A0 - 0x00088324 (644 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000880A0(void)
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

loc_000880A0: ;
    esp = esp - 0x2C;
    eax = MEM32(0x76FE00);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(eax, esi)) goto loc_0008831D; /* je: equal / zero */

loc_000880BD: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_000880C0: ;
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000880D0; /* je: equal / zero */

loc_000880CC: ;
    ecx = MEM32(eax);
    goto loc_000880D2;

loc_000880D0: ;
    ecx = 0; /* xor self */

loc_000880D2: ;
    if (CMP_GE(edi, ecx)) goto loc_0008810E; /* jge: greater or equal (signed >=) */

loc_000880D6: ;
    if (TEST_Z(eax, eax)) goto loc_000880E7; /* je: equal / zero */

loc_000880DA: ;
    if (TEST_S(esi, esi)) goto loc_000880E7; /* jl: less (signed <) */

loc_000880DE: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_0008810A; /* jae: above or equal (unsigned >=) */

loc_000880E2: ;
    ebp = MEM32(eax + 4);
    ebp = ebp + esi;

loc_000880E7: ;
    if (TEST_Z(ebp, ebp)) goto loc_000880EE; /* je: equal / zero */

loc_000880EB: ;
    ebx = MEM32(ebp);

loc_000880EE: ;
    PUSH32(esp, 0x5F0558);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_000880F9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00088104; /* je: equal / zero */

loc_00088100: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00088104: ;
    edi++;
    esi = esi + 0xC;
    goto loc_000880C0;

loc_0008810A: ;
    ebp = 0; /* xor self */
    goto loc_000880EE;

loc_0008810E: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0008831C; /* je: equal / zero */

loc_0008811A: ;
    ecx = MEM32(0x77079C);
    esi = MEM32(0x847214);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + ecx;
    PUSH32(esp, 0x59);
    edx = eax + eax * 4;
    edx = edx << 2;
    PUSH32(esp, 0x5F0528);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0008813D: ;
    edx = MEM32(0x77079C);
    esp = esp + 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0x847214) = eax;
    if (TEST_Z(edx, edx)) goto loc_00088165; /* je: equal / zero */

loc_0008814F: ;
    ecx = edx + edx * 4;
    ecx = ecx << 2;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00088165: ;
    edi = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    eax = edx + edx * 4;
    eax = eax << 2;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = esi;

loc_00088179: ;
    ecx = MEM32(0x76FE00);
    eax = MEM32(ecx + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(eax, eax)) goto loc_0008818E; /* je: equal / zero */

loc_0008818A: ;
    ecx = MEM32(eax);
    goto loc_00088190;

loc_0008818E: ;
    ecx = 0; /* xor self */

loc_00088190: ;
    if (CMP_GE(esi, ecx)) goto loc_00088312; /* jge: greater or equal (signed >=) */

loc_00088198: ;
    if (TEST_Z(eax, eax)) goto loc_000881B1; /* je: equal / zero */

loc_0008819C: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_S(ecx, ecx)) goto loc_000881B1; /* jl: less (signed <) */

loc_000881A4: ;
    if (CMP_AE(esi, MEM32(eax))) goto loc_000882B3; /* jae: above or equal (unsigned >=) */

loc_000881AC: ;
    ebp = MEM32(eax + 4);
    ebp = ebp + ecx;

loc_000881B1: ;
    if (TEST_Z(ebp, ebp)) goto loc_000881B8; /* je: equal / zero */

loc_000881B5: ;
    ebx = MEM32(ebp);

loc_000881B8: ;
    PUSH32(esp, 0x5F0558);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_000881C3: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000882F7; /* je: equal / zero */

loc_000881CE: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x847214);
    esi = eax + edx;
    eax = MEM32(0x76FE00);
    if (TEST_Z(eax, eax)) goto loc_000882BC; /* je: equal / zero */

loc_000881E8: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000882BC; /* je: equal / zero */

loc_000881F3: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00088201: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000882BC; /* je: equal / zero */

loc_0008820C: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00088221; /* je: equal / zero */

loc_00088214: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_000882BA; /* je: equal / zero */

loc_0008821F: ;
    edi = eax;

loc_00088221: ;
    if (TEST_Z(edi, edi)) goto loc_000882BC; /* je: equal / zero */

loc_00088229: ;
    xmm0 = MEMF(edi + 0xC); /* movss */
    PUSH32(esp, 0x76FE20);
    edx = esp + 0x34;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    PUSH32(esp, edx);
    eax = edx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x14); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0008825C: ;
    ecx = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    MEM16(esi) = LO16(ecx);
    edx = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    MEM16(esi + 2) = LO16(edx);
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    MEM16(esi + 4) = LO16(eax);
    eax = MEM32(0x76FE00);
    if (TEST_Z(eax, eax)) goto loc_000882CA; /* je: equal / zero */

loc_00088282: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000882CA; /* je: equal / zero */

loc_00088289: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00088297: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000882CA; /* je: equal / zero */

loc_0008829E: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_000882D3; /* je: equal / zero */

loc_000882A6: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_000882C2; /* je: equal / zero */

loc_000882AD: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_000882D7;

loc_000882B3: ;
    ebp = 0; /* xor self */
    goto loc_000881B8;

loc_000882BA: ;
    edi = 0; /* xor self */

loc_000882BC: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    goto loc_000882F7;

loc_000882C2: ;
    MEM32(esp + 0x1C) = 0;

loc_000882CA: ;
    MEM32(esi + 8) = 0x3E8;
    goto loc_000882F2;

loc_000882D3: ;
    eax = MEM32(esp + 0x1C);

loc_000882D7: ;
    if (TEST_Z(eax, eax)) goto loc_000882CA; /* je: equal / zero */

loc_000882DB: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000882EF: ;
    MEM32(esi + 8) = eax;

loc_000882F2: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x14;

loc_000882F7: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x77079C);
    esi++;
    eax = eax + 0xC;
    MEM32(esp + 0x18) = eax;
    goto loc_00088179;

loc_00088312: ;
    edx = edx + MEM32(esp + 0x10);
    MEM32(0x77079C) = edx;

loc_0008831C: ;
    POP32(esp, edi);

loc_0008831D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00088330
 * Original: 0x00088330 - 0x0008837B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00088330: ;
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    eax = eax << 4;
    if (CMP_EQ(ecx, esi)) { sub_0008837B(); return; } /* je: equal / zero */

loc_0008833F: ;
    esi = MEM32(edx * 4 + 0x58E150);
    ecx = esi + ecx * 8;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x7707AC);
    edi = edi | ecx;
    ecx = MEM32(eax + 0x7707B0);
    MEM32(eax + 0x7707AC) = edi;
    ecx = ecx | esi;
    MEM32(eax + 0x7707B0) = ecx;
    POP32(esp, edi);
    MEM8(eax + 0x7707B6) = LO8(edx);
    MEM8(eax + 0x7707B7) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000883A0
 * Original: 0x000883A0 - 0x000884F4 (340 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000883A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000883A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ebx;
    esi = esi << 4;
    eax = ZX8(MEM8(esi + 0x7707B7));
    if (CMP_NE(eax, 2)) goto loc_000883EA; /* jne: not equal / not zero */

loc_000883BA: ;
    ecx = MEM32(0x84A5F8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + 0x16E));
    eax = eax + ecx;
    ecx = MEM32(eax + 0x3C8);
    SET_LO8(edx, LO8(edx) | 0x80);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(eax + 0x16E) = LO8(edx);
    if (TEST_NZ(ecx, ecx)) goto loc_000883F3; /* jne: not equal / not zero */

loc_000883E4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000883EA: ;
    if (CMP_NE(eax, 3)) { sub_000884F4(); return; } /* jne: not equal / not zero */

loc_000883F3: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    eax = MEM32(esi + 0x7707A8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(edx + 0x58E140));
    MEM32(esp + 0x14) = edi;
    if (TEST_NZ(eax, eax)) goto loc_00088449; /* jne: not equal / not zero */

loc_00088411: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x228);
    PUSH32(esp, 0x5F05E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00088428: ;
    esp = esp + 0x10;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x7707A8) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_00088449; /* jle: less or equal (signed <=) */

loc_00088435: ;
    eax = eax + 0x64;
    ecx = edi;
    /* nop */

loc_00088440: ;
    MEM8(eax) = 0;
    eax = eax + 0x68;
    ecx--;
    if ((ecx != 0)) goto loc_00088440; /* jne: not equal / not zero */

loc_00088449: ;
    ecx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(ecx * 4 + 0x58E144);
    ebp = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(edi & edi, 0)) goto loc_000884D7; /* jle: less or equal (signed <=) */

loc_00088461: ;
    ebx = 0; /* xor self */

loc_00088463: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(MEM32(eax + ebp * 4), 0xFFFFFFFEu)) goto loc_000884C7; /* je: equal / zero */

loc_0008846D: ;
    edi = MEM32(esi + 0x7707A8);
    eax = 1;
    ecx = ebp;
    edi = edi + ebx;
    eax = eax << LO8(ecx);
    if (CMP_GE(ebx, 0xD00)) goto loc_00088490; /* jge: greater or equal (signed >=) */

loc_00088486: ;
    if (TEST_NZ(MEM32(esi + 0x7707AC), eax)) goto loc_00088498; /* jne: not equal / not zero */

loc_0008848E: ;
    goto loc_000884C7;

loc_00088490: ;
    if (TEST_Z(MEM32(esi + 0x7707B0), eax)) goto loc_000884C7; /* je: equal / zero */

loc_00088498: ;
    SET_LO8(eax, MEM8(edi + 0x64));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000884C7; /* jne: not equal / not zero */

loc_0008849F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00088590(); /* call 0x00088590 */

loc_000884AC: ;
    eax = MEM32(esp + 0x28);
    edx = ZX8(MEM8(esi + 0x7707B6));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x58E11C), _icall_esp); /* indirect call */
    }

loc_000884C0: ;
    esp = esp + 0x14;
    MEM8(edi + 0x64) = 1;

loc_000884C7: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    ebx = ebx + 0x68;
    if (CMP_L(ebp, eax)) goto loc_00088463; /* jl: less (signed <) */

loc_000884D3: ;
    ebx = MEM32(esp + 0x1C);

loc_000884D7: ;
    ecx = ZX8(MEM8(esi + 0x7707B6));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x58E128), _icall_esp); /* indirect call */
    }

loc_000884E6: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x7707B7) = 1;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000884FD(); return; /* tail jmp 0x000884FD */

}

/**
 * sub_00088530
 * Original: 0x00088530 - 0x0008858C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00088530: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_0008858A; /* jl: less (signed <) */

loc_00088537: ;
    if (CMP_GE(esi, 0x14)) goto loc_0008858A; /* jge: greater or equal (signed >=) */

loc_0008853C: ;
    eax = eax << 4;
    SET_LO8(ecx, MEM8(eax + 0x7707B7));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008858A; /* je: equal / zero */

loc_00088549: ;
    PUSH32(esp, edi);
    edi = eax + 0x7707A8;
    MEM8(eax + 0x7707B7) = 0;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_00088565; /* je: equal / zero */

loc_0008855C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00088562: ;
    esp = esp + 4;

loc_00088565: ;
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    MEM32(edi) = 0;
    SET_LO8(ecx, MEM8(esi + eax + 0x16E));
    eax = esi + eax + 0x16E;
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    MEM8(eax) = LO8(ecx);
    POP32(esp, edi);

loc_0008858A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088590
 * Original: 0x00088590 - 0x0008873A (426 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088590(void)
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

loc_00088590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = ebx + esi;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000885C1: ;
    eax = MEM32(ebp + 0x10);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0008861C; /* jne: not equal / not zero */

loc_000885CB: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 4;
    eax = ZX8(MEM8(eax + 0x7707B6));
    ecx = MEM32(eax * 4 + 0x58E144);
    eax = MEM32(ecx + edx * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0008861C; /* je: equal / zero */

loc_000885EA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x3C8);
    eax = eax << 6;
    eax = eax + edx;
    ecx = esp + 0x14;
    esi = esp + 0x60;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00088606: ;
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00088616: ;
    esi = MEM32(0x84A5F8);

loc_0008861C: ;
    eax = edi + 0x20;
    PUSH32(esp, eax);
    ecx = edi + 0x1C;
    PUSH32(esp, ecx);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    edx = edi + 4;
    PUSH32(esp, edx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = edi + 8;
    eax = edi;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_00088647: ;
    xmm0 = MEMF(edi); /* movss */
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x14);
    MEMF(esp + 0x34) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEMF(edi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEM32(edi + 0x30) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(edi + 0x34) = ecx;
    ecx = MEM32(edi + 0x1C);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(edi + 0x20);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(edi + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEM32(edi + 0x3C) = eax;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    MEM32(edi + 0x40) = ecx;
    MEM32(edi + 0x44) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 - MEMF(ebx + esi + 0x80); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(0x648D14); /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    esp = esp + 0x20;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm2 = xmm1; /* movaps */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008870B; /* jnp: not parity */

loc_00088705: ;
    xmm2 = MEMF(esp + 0x14); /* movss */

loc_0008870B: ;
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    MEMF(edi + 0x48) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    POP32(esp, esi);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 0x4C) = xmm2; /* movss */
    MEMF(edi + 0x50) = xmm1; /* movss */
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
 * sub_00088740
 * Original: 0x00088740 - 0x00088C07 (1223 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088740(void)
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

loc_00088740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00088C00; /* je: equal / zero */

loc_0008875D: ;
    ecx = 0x10;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(esp + 0x90); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    eax = esp + 0x24;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
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
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D54); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ebx) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0008885E; /* jp: parity */

loc_0008885A: ;
    MEMF(ebx) = xmm5; /* movss */

loc_0008885E: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = esp + 0x24;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / MEMF(ebx); /* divss */
    edx = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x30;
    MEM32(esp + 0x20) = eax;
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
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esi = MEM32(ebp + 0x20);
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_000888F5; /* jp: parity */

loc_000888F1: ;
    MEMF(esi) = xmm5; /* movss */

loc_000888F5: ;
    ecx = esp + 0x30;
    edx = ecx;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / MEMF(esi); /* divss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    MEM32(esp + 0x20) = eax;
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
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(ebp + 0x24);
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00088984; /* jp: parity */

loc_00088980: ;
    MEMF(ecx) = xmm5; /* movss */

loc_00088984: ;
    xmm4 = xmm4 / MEMF(ecx); /* divss */
    edx = esp + 0x3C;
    eax = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm4 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    edx = MEM32(esp + 0x48);
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    eax = MEM32(esp + 0x4C);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x50);
    xmm7 = MEMF(esp + 0x54); /* movss */
    MEM32(esp + 0x58) = eax;
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    MEM32(esp + 0x5C) = edx;
    xmm6 = MEMF(esp + 0x5C); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    if ((xmm3 <= xmm6)) goto loc_00088AF5; /* jbe: below or equal (unsigned <=) */

loc_00088A78: ;
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - MEMF(ebx); /* subss */
    MEMF(ebx) = xmm6; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - MEMF(esi); /* subss */
    MEMF(esi) = xmm6; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - MEMF(ecx); /* subss */
    MEMF(ecx) = xmm6; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */

loc_00088AF5: ;
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00088B10: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = eax << 1;
    ecx = 0x59B8D0;
    ecx = ecx - eax;
    /* comiss xmm5, MEMF(esp + 0x18) - sets EFLAGS */
    edx = ZX16(MEM16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6494CC); /* mulss */
    if ((xmm5 <= MEMF(esp + 0x18))) goto loc_00088B3B; /* jbe: below or equal (unsigned <=) */

loc_00088B32: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - xmm0; /* subss */
    goto loc_00088B3E;

loc_00088B3B: ;
    xmm4 = xmm0; /* movaps */

loc_00088B3E: ;
    MEMF(esp + 0x18) = xmm4; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fcos  */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00088B9E; /* jnp: not parity */

loc_00088B5A: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00088B9E; /* jnp: not parity */

loc_00088B69: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00088B9E; /* jnp: not parity */

loc_00088B78: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00088B87: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00088B99: ;
    esp = esp + 0x10;
    goto loc_00088BD7;

loc_00088B9E: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm3 = xmm5; /* movaps */
    if (1 /* jnp after test - parity */) goto loc_00088BD4; /* jnp: not parity */

loc_00088BB0: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00088BD4; /* jnp: not parity */

loc_00088BBF: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00088BCE: ;
    esp = esp + 8;
    xmm3 = xmm0; /* movaps */

loc_00088BD4: ;
    xmm0 = xmm5; /* movaps */

loc_00088BD7: ;
    xmm1 = MEMF(0x648D78); /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(eax) = xmm3; /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(ecx) = xmm4; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(edx) = xmm0; /* movss */

loc_00088C00: ;
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
 * sub_00088C10
 * Original: 0x00088C10 - 0x00089036 (1062 bytes, 272 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00088C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx;
    eax = MEM32(edx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(eax, eax)) goto loc_0008902F; /* je: equal / zero */

loc_00088C3F: ;
    edi = edi << 4;
    eax = ZX8(MEM8(edi + 0x7707B6));
    ecx = ZX8(MEM8(eax + 0x58E140));
    eax = MEM32(eax * 4 + 0x58E144);
    MEM32(esp + 0x1C) = eax;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0008902F; /* jle: less or equal (signed <=) */

loc_00088C6D: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    goto loc_00088C80;

    /* nop */
    /* nop */

loc_00088C80: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(esi + eax * 4), 0xFFFFFFFEu)) goto loc_00088E23; /* je: equal / zero */

loc_00088C8E: ;
    esi = MEM32(edi + 0x7707A8);
    if (CMP_EQ(MEM8(esi + ebx + 0x64), 0)) goto loc_00088E23; /* je: equal / zero */

loc_00088C9F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0x3C8);
    edx = edx + ecx;
    ecx = ZX8(MEM8(edi + 0x7707B6));
    ecx = MEM32(ecx * 4 + 0x58E144);
    esi = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x7707A8);
    eax = eax + ebx;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00088D99; /* je: equal / zero */

loc_00088CCD: ;
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00088CE2: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x3C8);
    esi = esi << 6;
    esi = esi + eax;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00088CFF: ;
    eax = MEM32(edi + 0x7707A8);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(eax + ebx + 0x38); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + ebx;
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00088D5D: ;
    esp = esp + 0x24;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00088D6C: ;
    eax = MEM32(edi + 0x7707A8);
    ecx = MEM32(eax + ebx + 0x44);
    eax = eax + ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_00088D8A: ;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00088D94: ;
    goto loc_00088E17;

loc_00088D99: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00088DEE: ;
    ecx = MEM32(edi + 0x7707A8);
    eax = ecx + ebx;
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029C5F0(); /* call 0x0029C5F0 */

loc_00088E14: ;
    esp = esp + 0x3C;

loc_00088E17: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);

loc_00088E23: ;
    esi = MEM32(esp + 0x14);
    eax++;
    esi = esi + 0x40;
    ebx = ebx + 0x68;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(eax, ecx)) goto loc_00088C80; /* jl: less (signed <) */

loc_00088E3E: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0008902F; /* jle: less or equal (signed <=) */

loc_00088E46: ;
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    ebx = ecx;

loc_00088E4C: ;
    eax = MEM32(edx + 0x3C8);
    xmm4 = MEMF(eax + esi + 0x30); /* movss */
    ecx = ZX8(MEM8(edx + 0x3A8));
    xmm5 = MEMF(eax + esi + 0x34); /* movss */
    xmm6 = MEMF(eax + esi + 0x38); /* movss */
    ecx = MEM32(edx + ecx * 4 + 0x4EC);
    ecx = MEM32(ecx + 0x34);
    xmm2 = MEMF(ecx + edi + 0x14); /* movss */
    xmm0 = MEMF(ecx + edi + 0xC); /* movss */
    xmm7 = MEMF(ecx + edi + 0x10); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    eax = eax + esi;
    eax = MEM32(edx + 0x3C8);
    eax = eax + esi;
    ecx = ecx + edi;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * MEMF(eax); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(eax + 0x10); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * MEMF(eax + 0x24); /* mulss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(eax + 4); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * MEMF(eax + 0x18); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(eax + 0x28); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x28); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    esi = esi + 0x40;
    edi = edi + 0x24;
    ebx--;
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_00088E4C; /* jne: not equal / not zero */

loc_0008902F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089040
 * Original: 0x00089040 - 0x00089502 (1218 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089040: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    eax = ZX8(MEM8(esi + 0x7707B6));
    ebp = ZX8(MEM8(eax + 0x58E140));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_L(ebp, 4)) goto loc_0008942D; /* jl: less (signed <) */

loc_0008906A: ;
    ebx = ebp + -3;
    eax = 0; /* xor self */
    /* nop */

loc_00089070: ;
    ecx = MEM32(esi + 0x7707A8);
    SET_LO8(edx, MEM8(ecx + eax + 0x64));
    ecx = ecx + eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00089121; /* je: equal / zero */

loc_00089084: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(edx + edi * 4), 0xFFFFFFFFu)) goto loc_00089121; /* jne: not equal / not zero */

loc_0008909C: ;
    xmm1 = MEMF(ecx + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x24); /* addss */
    MEMF(ecx + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x28); /* addss */
    MEMF(ecx + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x2C); /* addss */
    MEMF(ecx + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x30); /* addss */
    MEMF(ecx + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x4C); /* addss */
    MEMF(ecx + 0x4C) = xmm1; /* movss */

loc_00089121: ;
    ecx = MEM32(esi + 0x7707A8);
    SET_LO8(edx, MEM8(ecx + eax + 0xCC));
    ecx = ecx + eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00089215; /* je: equal / zero */

loc_00089138: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(edx + edi * 4 + 4), 0xFFFFFFFFu)) goto loc_00089215; /* jne: not equal / not zero */

loc_00089151: ;
    xmm1 = MEMF(ecx + 0xB0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x8C); /* addss */
    MEMF(ecx + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xB4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x90); /* addss */
    MEMF(ecx + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xB8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x94); /* addss */
    MEMF(ecx + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xBC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x98); /* addss */
    MEMF(ecx + 0x98) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xC0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x9C); /* addss */
    MEMF(ecx + 0x9C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xC4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0xA0); /* addss */
    MEMF(ecx + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xC8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0xB4); /* addss */
    MEMF(ecx + 0xB4) = xmm1; /* movss */

loc_00089215: ;
    ecx = MEM32(esi + 0x7707A8);
    SET_LO8(edx, MEM8(eax + ecx + 0x134));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00089319; /* je: equal / zero */

loc_0008922A: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(edx + edi * 4 + 8), 0xFFFFFFFFu)) goto loc_00089319; /* jne: not equal / not zero */

loc_00089243: ;
    xmm1 = MEMF(eax + ecx + 0x118); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0xF4); /* addss */
    MEMF(eax + ecx + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x11C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0xF8); /* addss */
    MEMF(eax + ecx + 0xF8) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x120); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0xFC); /* addss */
    edx = eax + ecx + 0x11C;
    MEMF(eax + ecx + 0xFC) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x124); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x100); /* addss */
    MEMF(eax + ecx + 0x100) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x128); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x104); /* addss */
    MEMF(eax + ecx + 0x104) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x12C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x108); /* addss */
    MEMF(eax + ecx + 0x108) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x130); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edx); /* addss */
    MEMF(edx) = xmm1; /* movss */

loc_00089319: ;
    ecx = MEM32(esi + 0x7707A8);
    SET_LO8(edx, MEM8(eax + ecx + 0x19C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0008941D; /* je: equal / zero */

loc_0008932E: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(edx + edi * 4 + 0xC), 0xFFFFFFFFu)) goto loc_0008941D; /* jne: not equal / not zero */

loc_00089347: ;
    xmm1 = MEMF(eax + ecx + 0x180); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x15C); /* addss */
    MEMF(eax + ecx + 0x15C) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x184); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x160); /* addss */
    MEMF(eax + ecx + 0x160) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x188); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x164); /* addss */
    edx = eax + ecx + 0x184;
    MEMF(eax + ecx + 0x164) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x18C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x168); /* addss */
    MEMF(eax + ecx + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x190); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x16C); /* addss */
    MEMF(eax + ecx + 0x16C) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x194); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + ecx + 0x170); /* addss */
    MEMF(eax + ecx + 0x170) = xmm1; /* movss */
    xmm1 = MEMF(eax + ecx + 0x198); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edx); /* addss */
    MEMF(edx) = xmm1; /* movss */

loc_0008941D: ;
    edi = edi + 4;
    eax = eax + 0x1A0;
    if (CMP_L(edi, ebx)) goto loc_00089070; /* jl: less (signed <) */

loc_0008942D: ;
    if (CMP_GE(edi, ebp)) goto loc_000894FD; /* jge: greater or equal (signed >=) */

loc_00089435: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68);
    /* nop */

loc_00089440: ;
    eax = MEM32(esi + 0x7707A8);
    SET_LO8(edx, MEM8(eax + ecx + 0x64));
    eax = eax + ecx;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000894F1; /* je: equal / zero */

loc_00089454: ;
    edx = ZX8(MEM8(esi + 0x7707B6));
    edx = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(edx + edi * 4), 0xFFFFFFFFu)) goto loc_000894F1; /* jne: not equal / not zero */

loc_0008946C: ;
    xmm1 = MEMF(eax + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm1; /* movss */

loc_000894F1: ;
    edi++;
    ecx = ecx + 0x68;
    if (CMP_L(edi, ebp)) goto loc_00089440; /* jl: less (signed <) */

loc_000894FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089510
 * Original: 0x00089510 - 0x00089527 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089510: ;
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00089527(); return; } /* je: equal / zero */

loc_0008951B: ;
    ebx = 0x80;
    ebp = 0x7F;
    g_seh_ebp = ebp; sub_0008952E(); return; /* tail jmp 0x0008952E */

}

/**
 * sub_000895E0
 * Original: 0x000895E0 - 0x00089782 (418 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000895E0(void)
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

loc_000895E0: ;
    esp = esp - 0xC;
    eax = eax << 4;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ZX8(MEM8(ebx + 0x7707B6));
    eax = ZX8(MEM8(eax + 0x58E140));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0008977C; /* jle: less or equal (signed <=) */

loc_00089606: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    /* nop */

loc_00089610: ;
    ecx = MEM32(ebx + 0x7707A8);
    SET_LO8(eax, MEM8(ecx + ebp + 0x64));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ecx + ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008976A; /* je: equal / zero */

loc_00089625: ;
    edx = ZX8(MEM8(ebx + 0x7707B6));
    eax = MEM32(edx * 4 + 0x58E144);
    if (CMP_NE(MEM32(eax + edi * 4), 0xFFFFFFFFu)) goto loc_0008976A; /* jne: not equal / not zero */

loc_0008963D: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008976A; /* jnp: not parity */

loc_00089653: ;
    ecx = (int32_t)MEMF(esi + 0x28); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x2C); /* cvttss2si */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = (int32_t)MEMF(esi + 0x24); /* cvttss2si */
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000896A4: ;
    edx = (int32_t)MEMF(esp + 0x4C); /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    esp = esp + 0x38;
    /* comiss xmm0, MEMF(esi + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x28))) goto loc_0008976A; /* jbe: below or equal (unsigned <=) */

loc_000896C3: ;
    MEMF(esi + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x6493F4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x4C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x4C))) goto loc_00089744; /* jbe: below or equal (unsigned <=) */

loc_000896D6: ;
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x4C); /* movss */
    xmm1 = xmm1 * MEMF(0x648E1C); /* mulss */
    MEMF(esi + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 * MEMF(0x648EA8); /* mulss */
    MEMF(esi + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x5C) = xmm1; /* movss */
    goto loc_0008976A;

loc_00089744: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x48) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    MEMF(esi + 0x60) = xmm0; /* movss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEMF(esi + 0x58) = xmm0; /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_0008976A: ;
    eax = MEM32(esp + 0x18);
    edi++;
    ebp = ebp + 0x68;
    if (CMP_L(edi, eax)) goto loc_00089610; /* jl: less (signed <) */

loc_0008977A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0008977C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00089790
 * Original: 0x00089790 - 0x000897D6 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000895E0(); /* call 0x000895E0 */

loc_0008979C: ;
    edx = MEM32(0x7FA20C);
    eax = esi;
    eax = eax << 4;
    ecx = eax + 0x7707B4;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    eax = eax - edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(ecx) = LO16(eax);
    if (CMP_G(eax & eax, 0)) goto loc_000897D4; /* jg: greater (signed >) */

loc_000897B9: ;
    edx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, 1);
    esi = esi + edx;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_000897D1: ;
    esp = esp + 0xC;

loc_000897D4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000897E0
 * Original: 0x000897E0 - 0x00089831 (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000897E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000897E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi = edi << 4;
    eax = ZX8(MEM8(edi + 0x7707B6));
    ebx = ZX8(MEM8(eax + 0x58E140));
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM16(edi + 0x7707B4) = 0x78;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0008982E; /* jle: less or equal (signed <=) */

loc_00089804: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00089807: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0008980C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = esi + 0x68;
    edx = edx - 5;
    ebx--;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(edi + 0x7707A8);
    MEMF(edx + esi + -28) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_00089807; /* jne: not equal / not zero */

loc_0008982D: ;
    POP32(esp, esi);

loc_0008982E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089840
 * Original: 0x00089840 - 0x00089857 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089840(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089840: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(esp + 8) = 0x40000000;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00089510(); return; /* tail jmp 0x00089510 */

}

/**
 * sub_00089970
 * Original: 0x00089970 - 0x00089A6C (252 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089970(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089970: ;
    eax = MEM32(0x58E158);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi << 4;
    MEM16(edi + 0x7707B4) = 0x12C;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00089998; /* je: equal / zero */

loc_00089990: ;
    if (TEST_Z(MEM32(edi + 0x7707AC), ecx)) goto loc_000899DB; /* je: equal / zero */

loc_00089998: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_000899A7; /* je: equal / zero */

loc_0008999F: ;
    if (TEST_Z(MEM32(edi + 0x7707B0), ecx)) goto loc_000899DB; /* je: equal / zero */

loc_000899A7: ;
    eax = MEM32(0x84A5F8);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, 0x5F05C8);
    eax = eax + esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_000899C0: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, 0x5F05B4);
    eax = esi + ecx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_000899D3: ;
    eax = MEM32(0x58E158);
    esp = esp + 8;

loc_000899DB: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000899EA; /* je: equal / zero */

loc_000899E2: ;
    if (TEST_Z(MEM32(edi + 0x7707AC), ecx)) goto loc_00089A2D; /* je: equal / zero */

loc_000899EA: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000899F9; /* je: equal / zero */

loc_000899F1: ;
    if (TEST_Z(MEM32(edi + 0x7707B0), ecx)) goto loc_00089A2D; /* je: equal / zero */

loc_000899F9: ;
    edx = MEM32(0x84A5F8);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, 0x5F05A8);
    eax = esi + edx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00089A14: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, 0x5F0594);
    eax = eax + esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00089A25: ;
    eax = MEM32(0x58E158);
    esp = esp + 8;

loc_00089A2D: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00089A3C; /* je: equal / zero */

loc_00089A34: ;
    if (TEST_Z(MEM32(edi + 0x7707AC), ecx)) goto loc_00089A68; /* je: equal / zero */

loc_00089A3C: ;
    eax = MEM32(eax + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00089A4B; /* je: equal / zero */

loc_00089A43: ;
    if (TEST_Z(MEM32(edi + 0x7707B0), eax)) goto loc_00089A68; /* je: equal / zero */

loc_00089A4B: ;
    ecx = MEM32(0x84A5F8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 0x5F0584);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00089A65: ;
    esp = esp + 4;

loc_00089A68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089A70
 * Original: 0x00089A70 - 0x00089B68 (248 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    PUSH32(esp, 0); sub_000895E0(); /* call 0x000895E0 */

loc_00089A7D: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esi = edi;
    esi = esi << 4;
    MEM16(esi + 0x7707B4) = MEM16(esi + 0x7707B4) - LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x7707B4));
    if (CMP_G(LO16(eax) & LO16(eax), 0)) goto loc_00089B65; /* jg: greater (signed >) */

loc_00089A9F: ;
    eax = edi;
    PUSH32(esp, 0); sub_00088530(); /* call 0x00088530 */

loc_00089AA6: ;
    eax = MEM32(0x58E158);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00089AB9; /* je: equal / zero */

loc_00089AB1: ;
    if (TEST_Z(MEM32(esi + 0x7707AC), ecx)) goto loc_00089AEA; /* je: equal / zero */

loc_00089AB9: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00089AC8; /* je: equal / zero */

loc_00089AC0: ;
    if (TEST_Z(MEM32(esi + 0x7707B0), ecx)) goto loc_00089AEA; /* je: equal / zero */

loc_00089AC8: ;
    ecx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 0x5F0578);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00089AE2: ;
    eax = MEM32(0x58E158);
    esp = esp + 4;

loc_00089AEA: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00089AF9; /* je: equal / zero */

loc_00089AF1: ;
    if (TEST_Z(MEM32(esi + 0x7707AC), ecx)) goto loc_00089B2A; /* je: equal / zero */

loc_00089AF9: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00089B08; /* je: equal / zero */

loc_00089B00: ;
    if (TEST_Z(MEM32(esi + 0x7707B0), ecx)) goto loc_00089B2A; /* je: equal / zero */

loc_00089B08: ;
    ecx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 0x5F056C);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00089B22: ;
    eax = MEM32(0x58E158);
    esp = esp + 4;

loc_00089B2A: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00089B39; /* je: equal / zero */

loc_00089B31: ;
    if (TEST_Z(MEM32(esi + 0x7707AC), ecx)) goto loc_00089B65; /* je: equal / zero */

loc_00089B39: ;
    eax = MEM32(eax + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00089B48; /* je: equal / zero */

loc_00089B40: ;
    if (TEST_Z(MEM32(esi + 0x7707B0), eax)) goto loc_00089B65; /* je: equal / zero */

loc_00089B48: ;
    ecx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 0x5F0560);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00089B62: ;
    esp = esp + 4;

loc_00089B65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089B70
 * Original: 0x00089B70 - 0x00089BE8 (120 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089B70: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00089BE6; /* jne: not equal / not zero */

loc_00089B78: ;
    eax = MEM32(esi + 8);
    MEM8(esi + 0x10) = 1;
    if (CMP_EQ(MEM16(eax), 0xFFFF)) goto loc_00089BE6; /* je: equal / zero */

loc_00089B86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    /* nop */

loc_00089B90: ;
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(edi + ecx);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00089BAB: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00089BBF; /* je: equal / zero */

loc_00089BB2: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00089BBF; /* je: equal / zero */

loc_00089BBA: ;
    eax = MEM32(eax + 8);
    goto loc_00089BC1;

loc_00089BBF: ;
    eax = 0; /* xor self */

loc_00089BC1: ;
    edx = MEM32(esi + 8);
    MEM16(edx + ebp) = LO16(eax);
    eax = MEM32(esi + 4);
    MEM32(edi + eax) = 0x770BD4;
    ecx = MEM32(esi + 8);
    ebp = ebp + 2;
    edi = edi + 4;
    if (CMP_NE(MEM16(ecx + ebp), 0xFFFF)) goto loc_00089B90; /* jne: not equal / not zero */

loc_00089BE3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00089BE6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089BF0
 * Original: 0x00089BF0 - 0x00089C6D (125 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089BF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(ebx) = 0;
    MEM32(ebp) = 0;
    ecx = MEM32(edi + 0x74);
    SET_LO8(eax, MEM8(ecx + 0x32));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00089C6B; /* je: equal / zero */

loc_00089C16: ;
    edx = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x6A7BAC);
    if (TEST_Z(esi, esi)) goto loc_00089C6A; /* je: equal / zero */

loc_00089C25: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00089B70(); /* call 0x00089B70 */

loc_00089C37: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 4);
    MEM32(ebx) = edx;
    eax = MEM32(esi + 8);
    MEM32(ebp) = eax;
    esp = esp + 4;
    MEM32(0x770BD4) = edi;
    MEM32(0x770BD8) = esi;
    MEM32(0x770BDC) = 0;
    MEM8(0x770BED) = 0;

loc_00089C6A: ;
    POP32(esp, esi);

loc_00089C6B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089C70
 * Original: 0x00089C70 - 0x00089CCB (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089C70: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebx) = 0;
    MEM32(ebp) = 0;
    MEM32(edi) = 0;
    if (TEST_Z(esi, esi)) goto loc_00089CC8; /* je: equal / zero */

loc_00089C8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00089B70(); /* call 0x00089B70 */

loc_00089C95: ;
    ecx = MEM32(esi);
    MEM32(ebx) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ebp) = edx;
    eax = MEM32(esi + 8);
    MEM32(edi) = eax;
    esp = esp + 4;
    MEM32(0x770BD4) = 0;
    MEM32(0x770BD8) = esi;
    MEM32(0x770BDC) = ecx;
    MEM8(0x770BED) = 0;

loc_00089CC8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089CD0
 * Original: 0x00089CD0 - 0x00089DD7 (263 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089CD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00089CD0: ;
    eax = MEM32(ebx + 0x578);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00089D56; /* jne: not equal / not zero */

loc_00089CDB: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00089CE9; /* jne: not equal / not zero */

loc_00089CE4: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00089CE9: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00089D32; /* je: equal / zero */

loc_00089D10: ;
    if (CMP_B(MEM32(esi + 0x80), 0x54)) goto loc_00089D32; /* jb: below (unsigned <) */

loc_00089D19: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00089D23: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00089D2B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00089D4F; /* jne: not equal / not zero */

loc_00089D32: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00089D44: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00089D4C: ;
    esp = esp + 8;

loc_00089D4F: ;
    MEM32(ebx + 0x578) = eax;
    POP32(esp, esi);

loc_00089D56: ;
    edi = MEM32(ebx + 0x578);
    xmm0 = MEMF(0x6492AC); /* movss */
    eax = 0; /* xor self */
    ecx = 0x15;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x578);
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x578);
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edx = MEM32(ebx + 0x578);
    MEMF(edx + 4) = xmm0; /* movss */
    eax = MEM32(ebx + 0x578);
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x578);
    MEMF(ecx + 8) = xmm0; /* movss */
    edx = MEM32(ebx + 0x578);
    MEMF(edx + 0x14) = xmm0; /* movss */
    eax = MEM32(ebx + 0x578);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x578);
    MEM8(ecx + 0x4C) = 0;
    edx = MEM32(ebx + 0x578);
    MEM8(edx + 0x4D) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089DE0
 * Original: 0x00089DE0 - 0x00089E09 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089DE0: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM16(ecx), LO16(edx))) goto loc_00089DF9; /* je: equal / zero */

loc_00089DED: ;
    /* nop */

loc_00089DF0: ;
    ecx = ecx + 2;
    eax++;
    if (CMP_NE(MEM16(ecx), LO16(edx))) goto loc_00089DF0; /* jne: not equal / not zero */

loc_00089DF9: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x3C8);
    eax = eax << 6;
    eax = eax + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00089E10
 * Original: 0x00089E10 - 0x00089E47 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089E10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_00089E2D; /* je: equal / zero */

loc_00089E1F: ;
    eax = MEM32(esi + 0x578);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_NZ(eax, eax)) { sub_00089E47(); return; } /* jne: not equal / not zero */

loc_00089E2D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00089E41: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A620
 * Original: 0x0008A620 - 0x0008A654 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A620(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0008A620: ;
    edx = MEM32(esp + 0x14);
    esp = esp - 0x10;
    if (TEST_Z(edx, edx)) { sub_0008A654(); return; } /* je: equal / zero */

loc_0008A62B: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    eax = 1;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A7A0
 * Original: 0x0008A7A0 - 0x0008A7EC (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A7A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0008A7A0: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    SET_LO16(ecx, MEM16(eax + 0x540));
    SET_LO16(ecx, LO16(ecx) & 7);
    if (CMP_NE(LO16(ecx), 1)) { sub_0008A7EC(); return; } /* jne: not equal / not zero */

loc_0008A7BF: ;
    eax = MEM32(0x8470DC);
    xmm0 = MEMF(eax + 0x338); /* movss */
    xmm1 = MEMF(eax + 0x334); /* movss */
    eax = MEM32(eax + 0x330);
    MEM32(edx) = eax;
    MEMF(edx + 4) = xmm1; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A890
 * Original: 0x0008A890 - 0x0008AED8 (1608 bytes, 404 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A890(void)
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

loc_0008A890: ;
    xmm0 = MEMF(0x6492AC); /* movss */
    edx = MEM32(0x84A5F8);
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    ebx = eax;
    MEMF(ebx) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    SET_LO16(eax, MEM16(0x76F0E0));
    ebp = ebp + edx;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEMF(0x770BF8) = xmm0; /* movss */
    MEMF(0x770BFC) = xmm0; /* movss */
    MEMF(0x770C00) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0008AED1; /* je: equal / zero */

loc_0008A8E8: ;
    if (CMP_EQ(HI8(eax), 1)) goto loc_0008AED1; /* je: equal / zero */

loc_0008A8F1: ;
    if (CMP_EQ(MEM8(0x76EC82), 1)) goto loc_0008AED1; /* je: equal / zero */

loc_0008A8FE: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0008A963; /* je: equal / zero */

loc_0008A908: ;
    if (CMP_NE(MEM32(eax + 0xC0), 0x100)) goto loc_0008A963; /* jne: not equal / not zero */

loc_0008A914: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0008A963; /* jne: not equal / not zero */

loc_0008A919: ;
    ecx = MEM32(eax + 0x5D0);
    if (TEST_Z(ecx, ecx)) goto loc_0008A963; /* je: equal / zero */

loc_0008A923: ;
    eax = eax + 0x5D4;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    POP32(esp, esi);
    MEMF(ebx + 4) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    POP32(esp, ebp);
    MEMF(ebx + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_0008A963: ;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0008A7A0(); /* call 0x0008A7A0 */

loc_0008A96C: ;
    if (TEST_NZ(eax, eax)) goto loc_0008AED1; /* jne: not equal / not zero */

loc_0008A974: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(esi, esi)) goto loc_0008AA5A; /* jne: not equal / not zero */

loc_0008A97D: ;
    if (CMP_NE(MEM32(ebp + 0xA4), 0x81)) goto loc_0008AA5A; /* jne: not equal / not zero */

loc_0008A98D: ;
    ecx = ebp;
    edi = 0x1F;
    PUSH32(esp, 0); sub_00078A70(); /* call 0x00078A70 */

loc_0008A999: ;
    if (TEST_Z(eax, eax)) goto loc_0008AA5A; /* je: equal / zero */

loc_0008A9A1: ;
    ecx = MEM32(eax + 0xC4);
    if (TEST_Z(ecx, ecx)) goto loc_0008AA5A; /* je: equal / zero */

loc_0008A9AF: ;
    SET_LO8(edx, MEM8(ecx + 8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0008AA5A; /* je: equal / zero */

loc_0008A9BA: ;
    ecx = MEM32(ecx);
    edi = MEM32(ecx + 0xC);
    if (TEST_Z(edi, edi)) goto loc_0008AA5A; /* je: equal / zero */

loc_0008A9C7: ;
    SET_LO8(edx, MEM8(eax));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0008A9CE: ;
    if (TEST_Z(eax, eax)) goto loc_0008AA5A; /* je: equal / zero */

loc_0008A9D6: ;
    if (CMP_NE(MEM8(eax + 0xA1), 5)) goto loc_0008A9FF; /* jne: not equal / not zero */

loc_0008A9DF: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    goto loc_0008AA1A;

loc_0008A9FF: ;
    xmm0 = MEMF(edi + 0x30); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x34); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x38); /* movss */

loc_0008AA1A: ;
    edx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x68);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp + 0x44) = xmm0; /* movss */
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0008A620(); /* call 0x0008A620 */

loc_0008AA4F: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_0008AED0; /* jne: not equal / not zero */

loc_0008AA5A: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x70);
    edx = (int32_t)MEMF(ebp + 0x78); /* cvttss2si */
    PUSH32(esp, eax);
    xmm0 = MEMF(0x649970); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x7C);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0008AEE0(); /* call 0x0008AEE0 */

loc_0008AAA7: ;
    eax = MEM32(0x77079C);
    ecx = MEM32(0x875614);
    esp = esp + 0x30;
    if (CMP_L(ecx, eax)) goto loc_0008AAC3; /* jl: less (signed <) */

loc_0008AAB9: ;
    MEM32(0x875614) = 0;

loc_0008AAC3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_Z(eax, eax)) goto loc_0008AC13; /* je: equal / zero */

loc_0008AAD3: ;
    esi = MEM32(0x875614);
    /* nop */

loc_0008AAE0: ;
    eax = MEM32(0x847214);
    ecx = MEM32(esp + 0x1C);
    edx = esi + esi * 4;
    (void)0; /* cmp LO16(ecx), MEM16(eax + edx * 4 + 0xE) - flags set for next jcc */
    eax = eax + edx * 4;
    if (CMP_GE(LO16(ecx), MEM16(eax + edx * 4 + 0xE))) goto loc_0008ABED; /* jge: greater or equal (signed >=) */

loc_0008AAFA: ;
    if (CMP_LE(LO16(ecx), MEM16(eax + 0x10))) goto loc_0008ABED; /* jle: less or equal (signed <=) */

loc_0008AB04: ;
    if (CMP_NE(MEM16(eax + 6), 0)) goto loc_0008ABED; /* jne: not equal / not zero */

loc_0008AB0F: ;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    fp_push((double)SMEM32(eax + 8)); /* fild */
    xmm2 = MEMF(ebp + 0x80); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = SX16(LO16(ecx));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm2 = xmm2 - xmm4; /* subss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_0008AB82; /* jge: greater or equal (signed >=) */

loc_0008AB7C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0008AB82: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0008ABED; /* jbe: below or equal (unsigned <=) */

loc_0008AB8E: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008ABED; /* jbe: below or equal (unsigned <=) */

loc_0008AB99: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x68);
    xmm3 = xmm3 + MEMF(0x648F08); /* addss */
    edi = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0); sub_0008A620(); /* call 0x0008A620 */

loc_0008ABD6: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0008ABED; /* je: equal / zero */

loc_0008ABDD: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x18) = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0008ABED: ;
    eax = MEM32(0x77079C);
    esi++;
    if (CMP_NE(esi, eax)) goto loc_0008ABF9; /* jne: not equal / not zero */

loc_0008ABF7: ;
    esi = 0; /* xor self */

loc_0008ABF9: ;
    if (CMP_NE(esi, MEM32(0x875614))) goto loc_0008AAE0; /* jne: not equal / not zero */

loc_0008AC05: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0008AC13; /* je: equal / zero */

loc_0008AC0E: ;
    MEM32(0x875614) = eax;

loc_0008AC13: ;
    eax = MEM32(0x76FD10);
    if (CMP_LE(eax & eax, 0)) goto loc_0008AD3B; /* jle: less or equal (signed <=) */

loc_0008AC20: ;
    ecx = MEM32(0x8471B8);
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_0008AC30: ;
    if (CMP_EQ(MEM8(esi + ecx + 0xC2), 1)) goto loc_0008AD26; /* je: equal / zero */

loc_0008AC3E: ;
    xmm0 = MEMF(esi + ecx + 0x108); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008AD26; /* jnp: not parity */

loc_0008AC58: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x18);
    xmm1 = MEMF(ebp + 0x78); /* movss */
    xmm2 = MEMF(ebp + 0x80); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x16);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esi + ecx + 0x108); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0008AD26; /* jbe: below or equal (unsigned <=) */

loc_0008ACD1: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008AD26; /* jbe: below or equal (unsigned <=) */

loc_0008ACDC: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x68);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0008A620(); /* call 0x0008A620 */

loc_0008AD0D: ;
    ecx = MEM32(0x8471B8);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0008AD26; /* je: equal / zero */

loc_0008AD1A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0008AD26: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 0x150;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_0008AC30; /* jne: not equal / not zero */

loc_0008AD3B: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x38) = 0xD;
    MEM32(esp + 0x3C) = 0x18;
    MEM32(esp + 0x40) = 0x19;
    MEM32(esp + 0x44) = 0x1A;
    MEM32(esp + 0x48) = 0x16;
    MEM32(esp + 0x4C) = 0x17;
    MEM32(esp + 0x50) = 0x21;
    MEM32(esp + 0x54) = 0x60;
    MEM32(esp + 0x20) = eax;

loc_0008AD81: ;
    edx = MEM32(esp + eax * 4 + 0x38);
    esi = MEM32(edx * 4 + 0x7714E0);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(esi, esi)) goto loc_0008AEC2; /* je: equal / zero */

loc_0008AD98: ;
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_EQ(edx, 0x21)) goto loc_0008ADBE; /* je: equal / zero */

loc_0008AD9F: ;
    if (CMP_EQ(edx, 0x60)) goto loc_0008ADBE; /* je: equal / zero */

loc_0008ADA4: ;
    xmm0 = MEMF(esi + 0xB8); /* movss */
    xmm3 = MEMF(esi + 0xBC); /* movss */
    xmm4 = MEMF(esi + 0xC0); /* movss */
    goto loc_0008ADFB;

loc_0008ADBE: ;
    eax = MEM32(esi + 0x9C);
    if (TEST_Z(eax, eax)) goto loc_0008ADEC; /* je: equal / zero */

loc_0008ADC8: ;
    if (CMP_NE(eax, 0x2F)) goto loc_0008AEB3; /* jne: not equal / not zero */

loc_0008ADD1: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm3 = MEMF(esi + 0x64); /* movss */
    xmm4 = MEMF(esi + 0x68); /* movss */
    xmm5 = MEMF(0x6493B4); /* movss */
    SET_LO8(ecx, 1);
    goto loc_0008AE03;

loc_0008ADEC: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm3 = MEMF(esi + 0x64); /* movss */
    xmm4 = MEMF(esi + 0x68); /* movss */

loc_0008ADFB: ;
    xmm5 = MEMF(0x6493E4); /* movss */

loc_0008AE03: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm2 = MEMF(ebp + 0x80); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm2 = xmm2 - xmm4; /* subss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008AE6B; /* jne: not equal / not zero */

loc_0008AE5B: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_0008AEB3; /* jbe: below or equal (unsigned <=) */

loc_0008AE60: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008AEB3; /* jbe: below or equal (unsigned <=) */

loc_0008AE6B: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x68);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, 0); sub_0008A620(); /* call 0x0008A620 */

loc_0008AE9C: ;
    edx = MEM32(esp + 0x34);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0008AEB3; /* je: equal / zero */

loc_0008AEA7: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0008AEB3: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_0008AD98; /* jne: not equal / not zero */

loc_0008AEBE: ;
    eax = MEM32(esp + 0x20);

loc_0008AEC2: ;
    eax++;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, 8)) goto loc_0008AD81; /* jl: less (signed <) */

loc_0008AED0: ;
    POP32(esp, edi);

loc_0008AED1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0008AEE0
 * Original: 0x0008AEE0 - 0x0008B21E (830 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AEE0: ;
    esp = esp - 0x20;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    ecx = 1;
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(0x76F0E0));
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(LO8(eax), LO8(ecx))) { sub_0008B21E(); return; } /* je: equal / zero */

loc_0008AF09: ;
    if (CMP_EQ(HI8(eax), LO8(ecx))) { sub_0008B21E(); return; } /* je: equal / zero */

loc_0008AF11: ;
    if (CMP_EQ(MEM8(0x76EC82), LO8(ecx))) { sub_0008B21E(); return; } /* je: equal / zero */

loc_0008AF1D: ;
    edx = MEM32(esp + 0x34);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = eax + esi;
    eax = MEM32(edi + 0x68);
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(eax, 5)) goto loc_0008AF5A; /* je: equal / zero */

loc_0008AF45: ;
    if (CMP_EQ(eax, 0xAD)) goto loc_0008AF5A; /* je: equal / zero */

loc_0008AF4C: ;
    if (CMP_EQ(eax, 0xAE)) goto loc_0008AF5A; /* je: equal / zero */

loc_0008AF53: ;
    if (CMP_NE(eax, 0xAF)) goto loc_0008AF62; /* jne: not equal / not zero */

loc_0008AF5A: ;
    MEM32(esp + 0x1C) = 0;

loc_0008AF62: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0008AF6F; /* jne: not equal / not zero */

loc_0008AF67: ;
    MEM32(esp + 0x10) = 0x2C;

loc_0008AF6F: ;
    ebp = MEM32(esp + 0x58);
    if (TEST_NZ(ebp, ebp)) goto loc_0008AF94; /* jne: not equal / not zero */

loc_0008AF77: ;
    ebp = ZX8(MEM8(edi + 0x448));
    ebp = ebp << 3;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_0008AFA2;

loc_0008AF94: ;
    xmm0 = MEMF(0x649970); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0008AFA2: ;
    if (CMP_NE(eax, 0x194)) goto loc_0008AFBB; /* jne: not equal / not zero */

loc_0008AFA9: ;
    xmm0 = MEMF(0x6493BC); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;

loc_0008AFBB: ;
    eax = ecx;
    ecx = MEM32(0x84A5FC);
    ebp = 0; /* xor self */
    esi = esi + 0x236;
    eax = eax - ecx;
    MEM32(esp + 0x24) = eax;

loc_0008AFD1: ;
    ecx = MEM32(0x84A5FC);
    SET_LO8(eax, MEM8(ecx + ebp));
    ecx = ecx + ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008B1E5; /* je: equal / zero */

loc_0008AFE4: ;
    if (CMP_EQ(LO8(eax), 4)) goto loc_0008AFF9; /* je: equal / zero */

loc_0008AFE8: ;
    eax = MEM32(0x84A600);
    if (CMP_EQ(MEM16(eax + ebp * 2), 0xFFFF)) goto loc_0008B1E5; /* je: equal / zero */

loc_0008AFF9: ;
    if (CMP_EQ(ebp, edx)) goto loc_0008B1E5; /* je: equal / zero */

loc_0008B001: ;
    ebx = ZX8(MEM8(esi + -257));
    eax = edx + 1;
    if (CMP_EQ(ebx, eax)) goto loc_0008B1E1; /* je: equal / zero */

loc_0008B013: ;
    if (CMP_LE(ebp, edx)) goto loc_0008B025; /* jle: less or equal (signed <=) */

loc_0008B017: ;
    SET_LO8(eax, MEM8(esi + 0x310));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008B1E1; /* jne: not equal / not zero */

loc_0008B025: ;
    eax = MEM32(esp + 0x24);
    eax = eax + ecx;
    ecx = ZX8(MEM8(edi + 0x135));
    if (CMP_EQ(ecx, eax)) goto loc_0008B1E1; /* je: equal / zero */

loc_0008B03A: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0008B052; /* jne: not equal / not zero */

loc_0008B042: ;
    eax = MEM32(esp + 0x28);
    if (CMP_EQ(MEM32(esi + -462), eax)) goto loc_0008B1E1; /* je: equal / zero */

loc_0008B052: ;
    ecx = MEM32(esi + -462);
    if (CMP_EQ(ecx, MEM32(esp + 0x10))) goto loc_0008B1E1; /* je: equal / zero */

loc_0008B062: ;
    eax = MEM32(esp + 0x54);
    if (TEST_NZ(eax, eax)) goto loc_0008B076; /* jne: not equal / not zero */

loc_0008B06A: ;
    SET_LO8(eax, MEM8(edi + 0x540));
    SET_LO8(eax, LO8(eax) & 7);
    if (CMP_NE(LO8(eax), 4)) goto loc_0008B07F; /* jne: not equal / not zero */

loc_0008B076: ;
    if (CMP_EQ(MEM8(esi), 0xFF)) goto loc_0008B1E1; /* je: equal / zero */

loc_0008B07F: ;
    SET_LO8(eax, MEM8(edi + 0x540));
    SET_LO8(eax, LO8(eax) & 7);
    if (CMP_NE(LO8(eax), 5)) goto loc_0008B094; /* jne: not equal / not zero */

loc_0008B08B: ;
    if (CMP_NE(MEM8(esi), 0xFF)) goto loc_0008B1E1; /* jne: not equal / not zero */

loc_0008B094: ;
    xmm2 = MEMF(edi + 0x80); /* movss */
    xmm2 = xmm2 - MEMF(esi + -438); /* subss */
    xmm1 = MEMF(edi + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(esi + -446); /* subss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esi + -442); /* subss */
    eax = ZX8(MEM8(edi + 0x42E));
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(eax, ebp)) goto loc_0008B100; /* jne: not equal / not zero */

loc_0008B0E9: ;
    SET_LO8(eax, MEM8(edi + 0x42F));
    if (CMP_EQ(LO8(eax), 1)) goto loc_0008B0F7; /* je: equal / zero */

loc_0008B0F3: ;
    if (CMP_NE(LO8(eax), 0xC)) goto loc_0008B100; /* jne: not equal / not zero */

loc_0008B0F7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0008B100: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008B118; /* jbe: below or equal (unsigned <=) */

loc_0008B10B: ;
    eax = MEM32(esp + 0x4C);
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0008B122; /* ja: above (unsigned >) */

loc_0008B118: ;
    if (CMP_NE(MEM32(esp + 0x48), ecx)) goto loc_0008B1E1; /* jne: not equal / not zero */

loc_0008B122: ;
    (void)0; /* cmp MEM32(esi + -466), 4 - flags set for next jcc */
    edi = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x34);
    if (CMP_NE(MEM32(esi + -466), 4)) goto loc_0008B15E; /* jne: not equal / not zero */

loc_0008B133: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -438);
    PUSH32(esp, eax);
    eax = MEM32(esi + -442);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -446);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0008B1A7;

loc_0008B15E: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x15A);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x15C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x156);
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */

loc_0008B1A7: ;
    eax = MEM32(esp + 0x54);
    ecx = edx;
    PUSH32(esp, 0); sub_0008A620(); /* call 0x0008A620 */

loc_0008B1B2: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0008B1D7; /* je: equal / zero */

loc_0008B1B9: ;
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(esp + 0x18); /* movss */
    edx = MEM32(esp + 0x48);
    MEMF(ecx) = xmm0; /* movss */
    (void)0; /* cmp edx, MEM32(esi + -462) - flags set for next jcc */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(edx, MEM32(esi + -462))) goto loc_0008B1F8; /* je: equal / zero */

loc_0008B1D7: ;
    edx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x2C);
    goto loc_0008B1E5;

loc_0008B1E1: ;
    ebx = MEM32(esp + 0x34);

loc_0008B1E5: ;
    ebp++;
    esi = esi + 0x6D0;
    if (CMP_L(ebp, 0x80)) goto loc_0008AFD1; /* jl: less (signed <) */

loc_0008B1F8: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0008B21E(); return; } /* je: equal / zero */

loc_0008B204: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = ZX8(MEM8(eax + ecx + 0x24F));
    eax++;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B240
 * Original: 0x0008B240 - 0x0008B358 (280 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B240(void)
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

loc_0008B240: ;
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_A(ecx, 3)) goto loc_0008B2FE; /* ja: above (unsigned >) */

loc_0008B24D: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x8B358); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0008B254u) goto loc_0008B254;
    if (_jt == 0x0008B25Fu) goto loc_0008B25F;
    if (_jt == 0x0008B275u) goto loc_0008B275;
    if (_jt == 0x0008B2AFu) goto loc_0008B2AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008B254: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    goto loc_0008B288;

loc_0008B25F: ;
    ecx = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    goto loc_0008B289;

loc_0008B275: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = xmm0; /* movss */

loc_0008B288: ;
    PUSH32(esp, ecx);

loc_0008B289: ;
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0008B28E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    goto loc_0008B2EE;

loc_0008B2AF: ;
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0008B2CB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = xmm3 - MEMF(esp + 0x10); /* subss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = xmm3; /* movss */

loc_0008B2EE: ;
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0008B2F7: ;
    esp = esp + 8;
    MEMF(edx) = xmm0; /* movss */

loc_0008B2FE: ;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(0x648D78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648E6C); /* movss */
    MEMF(edx) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648F60); /* movss */
    if ((xmm1 <= xmm0)) goto loc_0008B343; /* jbe: below or equal (unsigned <=) */

loc_0008B337: ;
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax) = xmm2; /* movss */

loc_0008B343: ;
    xmm2 = MEMF(edx); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0008B357; /* jbe: below or equal (unsigned <=) */

loc_0008B34C: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edx) = xmm0; /* movss */

loc_0008B357: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0008B370
 * Original: 0x0008B370 - 0x0008B3A3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B370(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0008B370: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x578);
    xmm0 = MEMF(eax + 0x48); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) { sub_0008B3A3(); return; } /* jbe: below or equal (unsigned <=) */

loc_0008B38A: ;
    esi = eax;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B550
 * Original: 0x0008B550 - 0x0008C5CF (4223 bytes, 1052 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B550(void)
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

loc_0008B550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + edx + 0x578);
    eax = eax + edx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEMF(esp + 0x5C) = xmm7; /* movss */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0008C5C8; /* je: equal / zero */

loc_0008B592: ;
    SET_LO8(ecx, MEM8(0x770BED));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm7; /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    MEMF(esp + 0x28) = xmm7; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B5B5; /* jne: not equal / not zero */

loc_0008B5AE: ;
    MEM8(eax + 0x518) = 0;

loc_0008B5B5: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00053770(); /* call 0x00053770 */

loc_0008B5D0: ;
    xmm2 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (TEST_Z(eax, eax)) goto loc_0008B5F3; /* je: equal / zero */

loc_0008B5E1: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */

loc_0008B5F3: ;
    xmm0 = MEMF(edi); /* movss */
    xmm6 = MEMF(0x6492AC); /* movss */
    edx = 0; /* xor self */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x3C) = edx;
    MEM8(0x770BEC) = LO8(edx);
    if (1 /* jp after test - parity */) goto loc_0008B630; /* jp: parity */

loc_0008B614: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008B630; /* jp: parity */

loc_0008B622: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008B647; /* jnp: not parity */

loc_0008B630: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x578);
    SET_LO8(ecx, MEM8(eax + 0x4C));
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x60) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008B650; /* je: equal / zero */

loc_0008B647: ;
    edi = 1;
    MEM32(esp + 0x60) = edi;

loc_0008B650: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x542));
    ecx = MEM32(esp + 0x30);
    eax = eax & 4;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x4C) = eax;
    if (CMP_EQ(edi, edx)) goto loc_0008B6BB; /* je: equal / zero */

loc_0008B66B: ;
    if (CMP_NE(ecx, edx)) goto loc_0008B700; /* jne: not equal / not zero */

loc_0008B673: ;
    SET_LO8(ecx, MEM8(ebx + esi + 0x30));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B6BF; /* jne: not equal / not zero */

loc_0008B67B: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEMF(ebx + esi * 4 + 0x18) = xmm7; /* movss */
    MEMF(ebx + esi * 4 + 0x24) = xmm7; /* movss */
    MEM8(ebx + esi + 0x33) = 0xA;
    ecx = ebx + esi + 0x33;
    MEMF(ebx + esi * 4) = xmm6; /* movss */
    MEMF(ebx + esi * 4 + 0xC) = xmm6; /* movss */
    MEM16(ebx + esi * 2 + 0x3A) = LO16(edx);
    MEM16(ebx + esi * 2 + 0x40) = LO16(edx);
    MEM8(ebx + esi + 0x36) = LO8(eax);
    if (CMP_EQ(eax, edx)) goto loc_0008C5C8; /* je: equal / zero */

loc_0008B6B1: ;
    MEM8(ecx) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008B6BB: ;
    if (CMP_NE(ecx, edx)) goto loc_0008B700; /* jne: not equal / not zero */

loc_0008B6BF: ;
    if (CMP_EQ(eax, edx)) goto loc_0008B700; /* je: equal / zero */

loc_0008B6C3: ;
    SET_LO8(ecx, MEM8(ebx + esi + 0x36));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B6D0; /* jne: not equal / not zero */

loc_0008B6CB: ;
    MEM8(ebx + esi + 0x33) = 0xA;

loc_0008B6D0: ;
    SET_LO8(ecx, MEM8(ebx + esi + 0x33));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B700; /* jne: not equal / not zero */

loc_0008B6D8: ;
    MEMF(ebx + esi * 4 + 0x18) = xmm7; /* movss */
    MEMF(ebx + esi * 4 + 0x24) = xmm7; /* movss */
    MEMF(ebx + esi * 4) = xmm6; /* movss */
    MEMF(ebx + esi * 4 + 0xC) = xmm6; /* movss */
    MEM16(ebx + esi * 2 + 0x3A) = LO16(edx);
    MEM16(ebx + esi * 2 + 0x40) = LO16(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008B700: ;
    MEM8(ebx + esi + 0x36) = LO8(eax);
    (void)0; /* cmp MEM8(ebx + esi + 0x33), 1 - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (CMP_A(MEM8(ebx + esi + 0x33), 1)) goto loc_0008B741; /* ja: above (unsigned >) */

loc_0008B70F: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x30));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0008B741; /* jbe: below or equal (unsigned <=) */

loc_0008B717: ;
    SET_LO8(ecx, MEM8(0x7FA275));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B731; /* jne: not equal / not zero */

loc_0008B721: ;
    SET_LO8(ecx, MEM8(0x7FA204));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008B731; /* jne: not equal / not zero */

loc_0008B72B: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + esi + 0x30) = LO8(eax);

loc_0008B731: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008B741; /* jne: not equal / not zero */

loc_0008B739: ;
    MEM32(esp + 0x20) = 1;

loc_0008B741: ;
    if (CMP_NE(edi, edx)) goto loc_0008B78F; /* jne: not equal / not zero */

loc_0008B745: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008B78F; /* je: equal / zero */

loc_0008B74D: ;
    if (CMP_AE(LO8(eax), 0xA)) goto loc_0008B78F; /* jae: above or equal (unsigned >=) */

loc_0008B751: ;
    edx = ZX8(LO8(eax));
    eax = 0xA;
    eax = eax - edx;
    eax = eax + eax * 4;
    eax = eax << 1;
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0008B773: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm6 = MEMF(0x6492AC); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEM8(ebx + esi + 0x33) = LO8(eax);
    MEM8(ebx + esi + 0x30) = 0;
    edx = 0; /* xor self */

loc_0008B78F: ;
    eax = MEM32(ebp + 0x34);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    xmm5 = xmm7; /* movaps */
    if (CMP_A(eax, 3)) goto loc_0008B7D8; /* ja: above (unsigned >) */

loc_0008B79A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8C5D0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0008B7A1u) goto loc_0008B7A1;
    if (_jt == 0x0008B7AEu) goto loc_0008B7AE;
    if (_jt == 0x0008B7BBu) goto loc_0008B7BB;
    if (_jt == 0x0008B7C8u) goto loc_0008B7C8;
    if (_jt == 0x0008C05Du) goto loc_0008C05D;
    if (_jt == 0x0008C089u) goto loc_0008C089;
    if (_jt == 0x0008C0ACu) goto loc_0008C0AC;
    if (_jt == 0x0008C0DDu) goto loc_0008C0DD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008B7A1: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm4 = xmm7; /* movaps */
    goto loc_0008B7E4;

loc_0008B7AE: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = xmm7; /* movaps */
    goto loc_0008B7E4;

loc_0008B7BB: ;
    xmm4 = MEMF(0x648D34); /* movss */
    xmm3 = xmm7; /* movaps */
    goto loc_0008B7E4;

loc_0008B7C8: ;
    xmm5 = MEMF(0x648D34); /* movss */
    xmm4 = xmm7; /* movaps */
    xmm3 = xmm7; /* movaps */
    goto loc_0008B7E4;

loc_0008B7D8: ;
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */

loc_0008B7E4: ;
    if (CMP_NE(MEM32(esp + 0x30), edx)) goto loc_0008B932; /* jne: not equal / not zero */

loc_0008B7EE: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax + 0x18); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm4 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm5 = MEMF(eax + 0x14); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x18); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 0x10); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 0x28); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x24); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x20); /* movss */
    /* ucomiss xmm3, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    if (1 /* jp after test - parity */) goto loc_0008B907; /* jp: parity */

loc_0008B8F1: ;
    /* ucomiss xmm4, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008B907; /* jp: parity */

loc_0008B8FA: ;
    /* ucomiss xmm5, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008C5C8; /* jnp: not parity */

loc_0008B907: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x34);
    edx = esp + 0x28;
    PUSH32(esp, 0); sub_0008B240(); /* call 0x0008B240 */

loc_0008B927: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x10;
    edx = 0; /* xor self */

loc_0008B932: ;
    xmm0 = MEMF(0x648E6C); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648F60); /* movss */
    if ((xmm2 <= xmm0)) goto loc_0008B951; /* jbe: below or equal (unsigned <=) */

loc_0008B947: ;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm2; /* movss */

loc_0008B951: ;
    xmm3 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0008B966; /* jbe: below or equal (unsigned <=) */

loc_0008B95C: ;
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x18) = xmm3; /* movss */

loc_0008B966: ;
    xmm0 = MEMF(ebx + esi * 4); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008B98B; /* jp: parity */

loc_0008B974: ;
    MEMF(ebx + esi * 4) = xmm2; /* movss */
    MEMF(ebx + esi * 4 + 0xC) = xmm3; /* movss */
    MEMF(ebx + esi * 4 + 0x18) = xmm7; /* movss */
    MEMF(ebx + esi * 4 + 0x24) = xmm7; /* movss */

loc_0008B98B: ;
    SET_LO8(eax, MEM8(0x770BED));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008B9AD; /* jne: not equal / not zero */

loc_0008B994: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM8(ecx + 0x518) = LO8(eax);

loc_0008B9AD: ;
    (void)0; /* cmp MEM32(esp + 0x20), edx - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    if (CMP_EQ(MEM32(esp + 0x20), edx)) goto loc_0008B9C5; /* je: equal / zero */

loc_0008B9BF: ;
    if (CMP_EQ(MEM32(esp + 0x30), edx)) goto loc_0008B9CE; /* je: equal / zero */

loc_0008B9C5: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008B9F1; /* je: equal / zero */

loc_0008B9CE: ;
    MEMF(ebx + esi * 4 + 0x18) = xmm7; /* movss */
    MEMF(ebx + esi * 4 + 0x24) = xmm7; /* movss */
    MEM8(ebx + esi + 0x33) = 0xA;
    MEMF(ebx + esi * 4) = xmm6; /* movss */
    MEMF(ebx + esi * 4 + 0xC) = xmm6; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008B9F1: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    edx = esp + 0x50;
    eax = esp + 0x40;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    eax = MEM32(esp + 0x30);
    if (TEST_Z(edi, edi)) goto loc_0008BA92; /* je: equal / zero */

loc_0008BA65: ;
    if (TEST_Z(eax, eax)) goto loc_0008BCF8; /* je: equal / zero */

loc_0008BA6D: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    edi = MEM32(ebp + 0xC);
    MEM8(0x770BEC) = 1;
    MEMF(0x770BE8) = xmm2; /* movss */
    MEMF(0x770BE4) = xmm0; /* movss */
    goto loc_0008BB4D;

loc_0008BA92: ;
    if (TEST_NZ(eax, eax)) goto loc_0008BA6D; /* jne: not equal / not zero */

loc_0008BA96: ;
    edi = MEM32(ebp + 0xC);
    xmm0 = MEMF(edi + 0x28); /* movss */
    xmm1 = MEMF(edi + 0x24); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    ecx = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x34);
    edx = esp + 0x28;
    PUSH32(esp, 0); sub_0008B240(); /* call 0x0008B240 */

loc_0008BB26: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_0008BDB3; /* jbe: below or equal (unsigned <=) */

loc_0008BB38: ;
    xmm1 = (float)(int32_t)MEM32(ebp + 0x30); /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0008BB47: ;
    xmm2 = MEMF(esp + 0x14); /* movss */

loc_0008BB4D: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648EA4); /* movss */
    if (TEST_Z(eax, eax)) goto loc_0008BC69; /* je: equal / zero */

loc_0008BB67: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0008BC69; /* jne: not equal / not zero */

loc_0008BB70: ;
    if (CMP_NE(MEM32(eax + 0xC0), 0x100)) goto loc_0008BC69; /* jne: not equal / not zero */

loc_0008BB80: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_0008BB96; /* ja: above (unsigned >) */

loc_0008BB85: ;
    xmm1 = MEMF(0x6491EC); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_0008BC69; /* jbe: below or equal (unsigned <=) */

loc_0008BB96: ;
    xmm1 = MEMF(edi + 0x24); /* movss */
    ecx = MEM32(ebp + 0x34);
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm0 = MEMF(0x64908C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(edi + 0x28); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    eax = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    edx = esp + 0x28;
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x54) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0008B240(); /* call 0x0008B240 */

loc_0008BC58: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    esp = esp + 0x10;

loc_0008BC69: ;
    eax = MEM32(ebp + 8);
    xmm3 = MEMF(eax + 0x34); /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x38); /* movss */
    eax = MEM32(ebp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x54); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(0x770BF8) = xmm4; /* movss */
    MEMF(0x770BFC) = xmm5; /* movss */
    MEMF(0x770C00) = xmm6; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0008BCF8; /* jne: not equal / not zero */

loc_0008BCC6: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_0008C840(); /* call 0x0008C840 */

loc_0008BCEF: ;
    xmm2 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x18;

loc_0008BCF8: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008BF97; /* jne: not equal / not zero */

loc_0008BD05: ;
    SET_LO8(eax, MEM8(0x7FA204));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008BF97; /* jne: not equal / not zero */

loc_0008BD12: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax << 4;
    xmm3 = MEMF(eax + 0x58E51C); /* movss */
    xmm6 = MEMF(eax + 0x58E518); /* movss */
    xmm0 = MEMF(eax + 0x58E510); /* movss */
    xmm1 = MEMF(eax + 0x58E514); /* movss */
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm3; /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0008BD72; /* jne: not equal / not zero */

loc_0008BD55: ;
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm3; /* movaps */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */

loc_0008BD72: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x33));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0008BDD0; /* jbe: below or equal (unsigned <=) */

loc_0008BD7A: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x4C);
    edx = 0xA;
    edx = edx - ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = 2;
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 * MEMF(0x648D80); /* mulss */
    MEM32(esp + 0x3C) = edi;
    MEMF(esp + 0x5C) = xmm5; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0008BE22; /* jne: not equal / not zero */

loc_0008BDA7: ;
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    goto loc_0008BE22;

loc_0008BDB3: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0008BB47; /* jbe: below or equal (unsigned <=) */

loc_0008BDBC: ;
    xmm1 = (float)(int32_t)MEM32(ebp + 0x30); /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_0008BB47;

loc_0008BDD0: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008BE53; /* je: equal / zero */

loc_0008BDD8: ;
    if (CMP_AE(LO8(eax), 0xA)) goto loc_0008BE53; /* jae: above or equal (unsigned >=) */

loc_0008BDDC: ;
    eax = ZX8(LO8(eax));
    ecx = 0xA;
    xmm4 = xmm3; /* movaps */
    ecx = ecx - eax;
    xmm4 = xmm4 - xmm0; /* subss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * MEMF(0x648D80); /* mulss */
    edi = 1;
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEM32(esp + 0x3C) = edi;
    MEMF(esp + 0x5C) = xmm5; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm3; /* movaps */

loc_0008BE22: ;
    ecx = MEM32(ebp + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_0008BE77; /* je: equal / zero */

loc_0008BE29: ;
    xmm5 = MEMF(0x648E3C); /* movss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    xmm3 = MEMF(0x6492BC); /* movss */
    if ((xmm2 <= xmm5)) goto loc_0008BE5B; /* jbe: below or equal (unsigned <=) */

loc_0008BE3E: ;
    /* comiss xmm3, MEMF(ebx + esi * 4) - sets EFLAGS */
    if ((xmm3 <= MEMF(ebx + esi * 4))) goto loc_0008BE5B; /* jbe: below or equal (unsigned <=) */

loc_0008BE44: ;
    xmm3 = MEMF(ebx + esi * 4); /* movss */
    xmm3 = xmm3 + MEMF(0x648F60); /* addss */
    goto loc_0008BE72;

loc_0008BE53: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x3C) = edi;
    goto loc_0008BE22;

loc_0008BE5B: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0008BE77; /* jbe: below or equal (unsigned <=) */

loc_0008BE60: ;
    xmm3 = MEMF(ebx + esi * 4); /* movss */
    /* comiss xmm3, xmm5 - sets EFLAGS */
    if ((xmm3 <= xmm5)) goto loc_0008BE77; /* jbe: below or equal (unsigned <=) */

loc_0008BE6A: ;
    xmm3 = xmm3 - MEMF(0x648F60); /* subss */

loc_0008BE72: ;
    MEMF(ebx + esi * 4) = xmm3; /* movss */

loc_0008BE77: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm2 = xmm2 - MEMF(ebx + esi * 4); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(ebx + esi * 4 + 0xC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_0008BEC4; /* je: equal / zero */

loc_0008BEA0: ;
    xmm1 = MEMF(ebx + esi * 4); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ebx + esi * 4 + 0xC); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    goto loc_0008BF6B;

loc_0008BEC4: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebx + esi * 4 + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0008BEE6; /* jbe: below or equal (unsigned <=) */

loc_0008BEDE: ;
    MEMF(ebx + esi * 4 + 0x18) = xmm2; /* movss */
    goto loc_0008BF09;

loc_0008BEE6: ;
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 <= xmm2)) goto loc_0008BEF0; /* jbe: below or equal (unsigned <=) */

loc_0008BEEB: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0008BEF5;

loc_0008BEF0: ;
    eax = 1;

loc_0008BEF5: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + esi * 4 + 0x18); /* addss */
    MEMF(ebx + esi * 4 + 0x18) = xmm1; /* movss */

loc_0008BF09: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebx + esi * 4 + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0008BF42; /* ja: above (unsigned >) */

loc_0008BF23: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0008BF2D; /* jbe: below or equal (unsigned <=) */

loc_0008BF28: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0008BF32;

loc_0008BF2D: ;
    eax = 1;

loc_0008BF32: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + esi * 4 + 0x24); /* addss */

loc_0008BF42: ;
    MEMF(ebx + esi * 4 + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + esi * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx + esi * 4 + 0x18); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebx + esi * 4 + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(ebx + esi * 4 + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0008BF6B: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0008BFB2; /* jne: not equal / not zero */

loc_0008BF6F: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = esp + 0x30;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_0008C840(); /* call 0x0008C840 */

loc_0008BF92: ;
    esp = esp + 0x18;
    goto loc_0008BFB2;

loc_0008BF97: ;
    xmm0 = MEMF(ebx + esi * 4); /* movss */
    edi = MEM32(esp + 0x3C);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebx + esi * 4 + 0xC); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0008BFB2: ;
    SET_LO8(eax, MEM8(ebp + 0x24));
    if (TEST_NZ(LO8(eax), 1)) goto loc_0008BFC5; /* jne: not equal / not zero */

loc_0008BFB9: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0008BFC5: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0008BFD5; /* jne: not equal / not zero */

loc_0008BFC9: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0008BFD5: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0008BFFB; /* je: equal / zero */

loc_0008BFDD: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    edi = 0; /* xor self */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x3C) = edi;

loc_0008BFFB: ;
    SET_LO8(eax, MEM8(0x770BED));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008C020; /* jne: not equal / not zero */

loc_0008C004: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    ecx = MEM32(esp + 0x24);
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM8(ecx + 0x518) = LO8(eax);

loc_0008C020: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + esi * 2 + 0x3A);
    eax = (uint32_t)(int32_t)SMEM16(ebx + esi * 2 + 0x40);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0x34);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_A(eax, 3)) goto loc_0008C120; /* ja: above (unsigned >) */

loc_0008C056: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8C5E0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0008C05Du) goto loc_0008C05D;
    if (_jt == 0x0008C089u) goto loc_0008C089;
    if (_jt == 0x0008C0ACu) goto loc_0008C0AC;
    if (_jt == 0x0008C0DDu) goto loc_0008C0DD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008C05D: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x98;
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C073: ;
    ecx = MEM32(esp + 0x2C);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    PUSH32(esp, ecx);
    goto loc_0008C108;

loc_0008C089: ;
    PUSH32(esp, 0);
    xmm1 = xmm7; /* movaps */
    PUSH32(esp, 0);
    eax = esp + 0x98;
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C0A0: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0008C0C9;

loc_0008C0AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x98;
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C0BF: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0008C0C9: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = esp + 0x120;
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C0D8: ;
    esp = esp + 0x10;
    goto loc_0008C11D;

loc_0008C0DD: ;
    PUSH32(esp, 0);
    xmm1 = xmm7; /* movaps */
    PUSH32(esp, 0);
    eax = esp + 0x98;
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C0F4: ;
    eax = MEM32(esp + 0x30);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    PUSH32(esp, eax);

loc_0008C108: ;
    PUSH32(esp, ecx);
    eax = esp + 0x118;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_0008C11A: ;
    esp = esp + 8;

loc_0008C11D: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_0008C120: ;
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008C13D: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    eax = esp + 0xD8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008C156: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm1 = MEMF(eax + 0x34); /* movss */
    xmm2 = MEMF(eax + 0x38); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEMF(esp + 0x104) = xmm1; /* movss */
    MEMF(esp + 0x108) = xmm2; /* movss */
    if (TEST_Z(edi, edi)) goto loc_0008C41E; /* je: equal / zero */

loc_0008C19D: ;
    xmm3 = MEMF(0x648D14); /* movss */
    esi = eax;
    ecx = 0x10;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = esp + 0xD0;
    edi = esp + 0x110;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = esp + 0x90;
    edi = edi - eax;
    MEM32(esp + 0x1C) = edi;
    edi = esp + 0xD0;
    edi = edi - eax;
    MEM32(esp + 0x34) = edi;
    edi = esp + 0x110;
    edi = edi - eax;
    ecx = eax + 0x20;
    edx = eax + 8;
    esi = esp + 0xD4;
    MEM32(esp + 0x28) = edi;
    eax = 0; /* xor self */

loc_0008C200: ;
    xmm2 = MEMF(edx); /* movss */
    xmm1 = MEMF(edx + -4); /* movss */
    xmm0 = MEMF(edx + -8); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x38)); /* sqrtss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    edi = MEM32(esp + 0x1C);
    MEMF(esp + eax + 0x64) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(ecx + -32); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + eax + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(ecx + -16); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + eax + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + -4); /* movss */
    MEMF(edi + ecx) = xmm1; /* movss */
    edi = MEM32(esp + 0x34);
    xmm2 = MEMF(edi + edx); /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm1 = MEMF(esp + eax + 0xD0); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + eax + 0x110) = xmm1; /* movss */
    xmm1 = MEMF(esp + eax + 0xE0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + eax + 0x120) = xmm1; /* movss */
    xmm1 = MEMF(edi + ecx); /* movss */
    edi = MEM32(esp + 0x28);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + ecx) = xmm1; /* movss */
    eax = eax + 4;
    edx = edx + 0x10;
    esi = esi + 0x10;
    ecx = ecx + 4;
    if (CMP_L(eax, 0xC)) goto loc_0008C200; /* jl: less (signed <) */

loc_0008C322: ;
    edi = esp + 0x80;
    eax = esp + 0x110;
    PUSH32(esp, 0); sub_002AFD00(); /* call 0x002AFD00 */

loc_0008C335: ;
    edi = esp + 0x70;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_002AFD00(); /* call 0x002AFD00 */

loc_0008C345: ;
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm1 = MEMF(esp + 0x78); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x8C); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x88); /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x74); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x84); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x80); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_0008C3CF; /* jbe: below or equal (unsigned <=) */

loc_0008C39E: ;
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm7 = xmm7 - xmm0; /* subss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    MEMF(esp + 0x74) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */

loc_0008C3CF: ;
    edx = MEM32(esp + 0x5C);
    ecx = esp + 0x190;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esp + 0x78;
    edi = esp + 0x88;
    PUSH32(esp, 0); sub_002AFE80(); /* call 0x002AFE80 */

loc_0008C3EC: ;
    esp = esp + 8;
    ecx = esp + 0xD0;
    eax = esp + 0x190;
    PUSH32(esp, 0); sub_002B0040(); /* call 0x002B0040 */

loc_0008C402: ;
    xmm3 = MEMF(esp + 0x6C); /* movss */
    xmm2 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_0008C42F;

loc_0008C41E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */

loc_0008C42F: ;
    eax = MEM32(ebp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0008C462; /* je: equal / zero */

loc_0008C436: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008C44F: ;
    ecx = 0x10;
    esi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_0008C50E;

loc_0008C462: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x10;
    esi = esp + 0xD0;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(eax, eax)) goto loc_0008C50E; /* je: equal / zero */

loc_0008C481: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008C4AE; /* jnp: not parity */

loc_0008C48A: ;
    xmm4 = MEMF(edx); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(edx) = xmm4; /* movss */
    xmm4 = MEMF(edx + 0x10); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(edx + 0x20); /* mulss */
    MEMF(edx + 0x10) = xmm4; /* movss */
    MEMF(edx + 0x20) = xmm1; /* movss */

loc_0008C4AE: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008C4DC; /* jnp: not parity */

loc_0008C4B7: ;
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(edx + 4) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x14); /* mulss */
    xmm2 = xmm2 * MEMF(edx + 0x24); /* mulss */
    MEMF(edx + 0x14) = xmm1; /* movss */
    MEMF(edx + 0x24) = xmm2; /* movss */

loc_0008C4DC: ;
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008C50E; /* jnp: not parity */

loc_0008C4E5: ;
    xmm0 = MEMF(edx + 8); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(edx + 8) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(edx + 0x18); /* mulss */
    MEMF(edx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x28); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(edx + 0x28) = xmm0; /* movss */

loc_0008C50E: ;
    esi = MEM32(ebp + 0x20);
    xmm0 = MEMF(esp + 0x14); /* movss */
    SET_LO8(eax, MEM8(0x7FA275));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebx + esi * 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ebx + esi * 4 + 0xC) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008C548; /* jne: not equal / not zero */

loc_0008C531: ;
    SET_LO8(eax, MEM8(0x7FA204));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008C548; /* jne: not equal / not zero */

loc_0008C53A: ;
    SET_LO8(eax, MEM8(ebx + esi + 0x33));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0008C548; /* jbe: below or equal (unsigned <=) */

loc_0008C542: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + esi + 0x33) = LO8(eax);

loc_0008C548: ;
    eax = MEM32(esp + 0x60);
    if (TEST_NZ(eax, eax)) goto loc_0008C555; /* jne: not equal / not zero */

loc_0008C550: ;
    MEM8(ebx + esi + 0x30) = 0x28;

loc_0008C555: ;
    eax = MEM32(0x7FA20C);
    edi = eax + eax * 4;
    SET_LO16(eax, MEM16(ebx + esi * 2 + 0x3A));
    edi = edi << 1;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = SX16(LO16(eax));
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_0008C56E; /* jge: greater or equal (signed >=) */

loc_0008C56C: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008C56E: ;
    if (CMP_LE(ecx, edi)) goto loc_0008C58A; /* jle: less or equal (signed <=) */

loc_0008C572: ;
    edx = 0; /* xor self */
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(LO16(eax) & LO16(eax), 0)) ? 1 : 0); /* setge */
    edx = edx + edx + -1;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    eax = eax - edx;
    MEM16(ebx + esi * 2 + 0x3A) = LO16(eax);
    goto loc_0008C591;

loc_0008C58A: ;
    MEM16(ebx + esi * 2 + 0x3A) = 0;

loc_0008C591: ;
    SET_LO16(eax, MEM16(ebx + esi * 2 + 0x40));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = SX16(LO16(eax));
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_0008C5A0; /* jge: greater or equal (signed >=) */

loc_0008C59E: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008C5A0: ;
    if (CMP_LE(ecx, edi)) goto loc_0008C5C1; /* jle: less or equal (signed <=) */

loc_0008C5A4: ;
    ecx = 0; /* xor self */
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(LO16(eax) & LO16(eax), 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = eax - ecx;
    MEM16(ebx + esi * 2 + 0x40) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008C5C1: ;
    MEM16(ebx + esi * 2 + 0x40) = 0;

loc_0008C5C8: ;
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
 * sub_0008C5F0
 * Original: 0x0008C5F0 - 0x0008C704 (276 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C5F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0008C5F0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    ecx = MEM32(ecx + ebx + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_0008C6B8; /* je: equal / zero */

loc_0008C610: ;
    if (CMP_NE(MEM32(ecx + 0xC0), 0x100)) goto loc_0008C625; /* jne: not equal / not zero */

loc_0008C61C: ;
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0008C6B8; /* je: equal / zero */

loc_0008C625: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648EA4) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648EA4))) goto loc_0008C696; /* ja: above (unsigned >) */

loc_0008C632: ;
    xmm0 = MEMF(0x6491EC); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_0008C696; /* ja: above (unsigned >) */

loc_0008C63F: ;
    if (TEST_Z(esi, esi)) goto loc_0008C64B; /* je: equal / zero */

loc_0008C643: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    ecx = MEM32(edx);
    MEM32(edi) = ecx;

loc_0008C64B: ;
    xmm0 = MEMF(0x6494E4); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_0008C66C; /* ja: above (unsigned >) */

loc_0008C658: ;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(0x6490B4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0008C66C; /* ja: above (unsigned >) */

loc_0008C669: ;
    xmm0 = xmm1; /* movaps */

loc_0008C66C: ;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    /* comiss xmm0, MEMF(0x648E3C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648E3C))) goto loc_0008C68A; /* ja: above (unsigned >) */

loc_0008C67D: ;
    xmm0 = MEMF(0x6492BC); /* movss */
    /* comiss xmm0, MEMF(edx) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx))) goto loc_0008C6DD; /* jbe: below or equal (unsigned <=) */

loc_0008C68A: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(edx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008C696: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(edx) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_0008C702; /* je: equal / zero */

loc_0008C6AE: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;
    ecx = MEM32(edx);
    MEM32(edi) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008C6B8: ;
    xmm0 = MEMF(0x6494E4); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_0008C6D9; /* ja: above (unsigned >) */

loc_0008C6C5: ;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(0x6490B4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0008C6D9; /* ja: above (unsigned >) */

loc_0008C6D6: ;
    xmm0 = xmm1; /* movaps */

loc_0008C6D9: ;
    MEMF(eax) = xmm0; /* movss */

loc_0008C6DD: ;
    xmm0 = MEMF(0x649774); /* movss */
    /* comiss xmm0, MEMF(edx) - sets EFLAGS */
    if ((xmm0 > MEMF(edx))) goto loc_0008C6FE; /* ja: above (unsigned >) */

loc_0008C6EA: ;
    xmm1 = MEMF(edx); /* movss */
    xmm0 = MEMF(0x649770); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0008C6FE; /* ja: above (unsigned >) */

loc_0008C6FB: ;
    xmm0 = xmm1; /* movaps */

loc_0008C6FE: ;
    MEMF(edx) = xmm0; /* movss */

loc_0008C702: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C710
 * Original: 0x0008C710 - 0x0008C839 (297 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C710: ;
    eax = MEM32(esi + 0x578);
    if (TEST_Z(eax, eax)) goto loc_0008C838; /* je: equal / zero */

loc_0008C71E: ;
    (void)0; /* cmp MEM32(esi + 0x68), 0x53 - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 4);
    if (CMP_NE(MEM32(esi + 0x68), 0x53)) goto loc_0008C730; /* jne: not equal / not zero */

loc_0008C727: ;
    if (CMP_EQ(MEM32(esi + 0xA4), 0x15)) goto loc_0008C73A; /* je: equal / zero */

loc_0008C730: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008C751; /* je: equal / zero */

loc_0008C73A: ;
    eax = eax + 0x33;
    ecx = 3;
    SET_LO8(edx, 0x28);

loc_0008C744: ;
    MEM8(eax + -3) = LO8(edx);
    MEM8(eax) = 0;
    MEM8(eax + 3) = LO8(ebx);
    eax++;
    ecx--;
    if ((ecx != 0)) goto loc_0008C744; /* jne: not equal / not zero */

loc_0008C751: ;
    eax = MEM32(esi + 0x74);
    eax = ZX8(MEM8(eax + 0x4C));
    if (TEST_Z(eax, eax)) goto loc_0008C837; /* je: equal / zero */

loc_0008C760: ;
    ecx = ZX8(MEM8(eax + 0x58E3A3));
    edx = MEM32(eax * 4 + 0x6A7CD4);
    eax--;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0008C791; /* jle: less or equal (signed <=) */

loc_0008C777: ;
    edi = MEM32(esi + 0xA4);
    /* nop */

loc_0008C780: ;
    ebp = ZX16(MEM16(edx + eax * 2));
    if (CMP_EQ(edi, ebp)) goto loc_0008C82F; /* je: equal / zero */

loc_0008C78C: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0008C780; /* jl: less (signed <) */

loc_0008C791: ;
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_0008C825; /* jne: not equal / not zero */

loc_0008C79B: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_0008C82F; /* je: equal / zero */

loc_0008C7A9: ;
    SET_LO8(eax, MEM8(esi + 0x1B5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008C7C4; /* je: equal / zero */

loc_0008C7B3: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, MEMF(esi + 0x110) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x110))) goto loc_0008C82F; /* ja: above (unsigned >) */

loc_0008C7C4: ;
    edi = MEM32(esi + 0x568);
    if (TEST_Z(edi, edi)) goto loc_0008C7D8; /* je: equal / zero */

loc_0008C7CE: ;
    eax = MEM32(edi + 0x2B0);
    if (TEST_NZ(eax, eax)) goto loc_0008C82F; /* jne: not equal / not zero */

loc_0008C7D8: ;
    xmm0 = MEMF(esi + 0x110); /* movss */
    /* comiss xmm0, MEMF(0x64908C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x64908C))) goto loc_0008C82F; /* ja: above (unsigned >) */

loc_0008C7E9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_0008C7F0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008C82F; /* jne: not equal / not zero */

loc_0008C7F4: ;
    if (TEST_Z(edi, edi)) goto loc_0008C835; /* je: equal / zero */

loc_0008C7F8: ;
    xmm0 = MEMF(edi + 0x30C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0008C82F; /* ja: above (unsigned >) */

loc_0008C809: ;
    SET_LO8(eax, MEM8(edi + 0x309));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008C835; /* je: equal / zero */

loc_0008C813: ;
    SET_LO8(eax, MEM8(esi + 0x542));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    POP32(esp, ebp);
    MEM8(esi + 0x542) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008C825: ;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_0008C835; /* jne: not equal / not zero */

loc_0008C82F: ;
    MEM8(esi + 0x542) = MEM8(esi + 0x542) | LO8(ebx);

loc_0008C835: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0008C837: ;
    POP32(esp, ebx);

loc_0008C838: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C840
 * Original: 0x0008C840 - 0x0008C86C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C840(void)
{
    int _flags = 0; /* fallback flag var */

loc_0008C840: ;
    eax = MEM32(esp + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) { sub_0008C86C(); return; } /* jne: not equal / not zero */

loc_0008C852: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_0008C5F0(); /* call 0x0008C5F0 */

loc_0008C866: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C960
 * Original: 0x0008C960 - 0x0008CDEE (1166 bytes, 287 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C960(void)
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

loc_0008C960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    (void)0; /* cmp MEM32(edi + 0x68), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(edi + 0x68), 0xFFFF)) goto loc_0008CDE8; /* je: equal / zero */

loc_0008C978: ;
    SET_LO8(eax, MEM8(edi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_0008CD34; /* je: equal / zero */

loc_0008C988: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0008CD34; /* je: equal / zero */

loc_0008C996: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_0008CD34; /* je: equal / zero */

loc_0008C9A4: ;
    esi = MEM32(edi + 0x74);
    if (TEST_Z(esi, esi)) goto loc_0008CD34; /* je: equal / zero */

loc_0008C9AF: ;
    ebx = ZX8(MEM8(esi + 0x64));
    PUSH32(esp, edi);
    eax = esp + 0x44;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0008C9BF: ;
    ecx = ZX8(MEM8(esi + 0x46));
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * MEMF(edi + 0x264); /* mulss */
    /* ucomiss xmm5, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CA62; /* jnp: not parity */

loc_0008C9E2: ;
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CA42; /* jnp: not parity */

loc_0008CA1A: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CA42; /* jnp: not parity */

loc_0008CA3B: ;
    xmm5 = xmm5 / xmm0; /* divss */
    xmm0 = xmm5; /* movaps */

loc_0008CA42: ;
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    goto loc_0008CA74;

loc_0008CA62: ;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0008CA74: ;
    ecx = MEM32(edi + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edi + 0x264); /* mulss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CAFD; /* jnp: not parity */

loc_0008CA8F: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008CAD1; /* jp: parity */

loc_0008CACB: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0008CAD1: ;
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm5 = MEMF(esp + 0x54); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    goto loc_0008CB0C;

loc_0008CAFD: ;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm5 = xmm1; /* movaps */
    MEMF(esp + 0x1C) = xmm1; /* movss */

loc_0008CB0C: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x3A);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    xmm2 = xmm2 * MEMF(edi + 0x264); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    if (1 /* jnp after test - parity */) goto loc_0008CBBC; /* jnp: not parity */

loc_0008CB51: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CB66; /* jnp: not parity */

loc_0008CB5B: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    goto loc_0008CB6C;

loc_0008CB66: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0008CB6C: ;
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm7 = MEMF(esp + 0x64); /* movss */
    xmm6 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D70); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    goto loc_0008CC12;

loc_0008CBBC: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008CBD6; /* jnp: not parity */

loc_0008CBC6: ;
    xmm0 = MEMF(0x648D70); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    goto loc_0008CBDC;

loc_0008CBD6: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0008CBDC: ;
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = MEMF(esp + 0x64); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = MEMF(esp + 0x68); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    xmm6 = xmm1; /* movaps */
    xmm7 = xmm1; /* movaps */
    MEMF(esp + 0x34) = xmm1; /* movss */

loc_0008CC12: ;
    MEM8(edi + 0x3A1) = LO8(edx);
    MEM8(edi + 0x3A2) = LO8(eax);
    esi = esp + 0x28;
    eax = ebx;
    edx = edi;
    MEM8(edi + 0x3A0) = LO8(ecx);
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0008CC31: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm7; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(esp + 0x30); /* movss */
    MEM16(edi + 0x38C) = LO16(eax);
    xmm1 = xmm1 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = xmm0 + xmm5; /* addss */
    esi = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM16(edi + 0x38E) = LO16(ecx);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    ecx = SX16(LO16(ecx));
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = SX16(LO16(edx));
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x10); /* subss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x10); /* addss */
    MEM16(edi + 0x394) = LO16(eax);
    eax = (int32_t)xmm2; /* cvttss2si */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm2; /* movaps */
    MEM16(edi + 0x390) = LO16(edx);
    xmm7 = xmm7 + xmm3; /* addss */
    xmm7 = xmm7 + xmm6; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    xmm2 = xmm2 - xmm6; /* subss */
    MEM16(edi + 0x396) = LO16(eax);
    MEM16(edi + 0x398) = LO16(edx);
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(edi + 0x392) = LO16(esi);
    MEM16(edi + 0x39A) = LO16(eax);
    MEM16(edi + 0x39C) = LO16(ecx);
    MEM16(edi + 0x39E) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008CD34: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_0008CD40; /* je: equal / zero */

loc_0008CD3B: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    goto loc_0008CD42;

loc_0008CD40: ;
    esi = 0; /* xor self */

loc_0008CD42: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_0008CD58: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = (int32_t)MEMF(edi + 0x78); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = (int32_t)MEMF(edi + 0x7C); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0xC;
    edx = edx + eax;
    eax = (int32_t)MEMF(edi + 0x80); /* cvttss2si */
    MEM16(edi + 0x38E) = LO16(edx);
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edi + 0x264); /* mulss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(edi + 0x38C) = LO16(ecx);
    MEM16(edi + 0x390) = LO16(eax);
    MEM16(edi + 0x392) = LO16(edx);
    MEM16(edi + 0x394) = LO16(ecx);
    MEM16(edi + 0x396) = LO16(edx);
    MEM16(edi + 0x398) = LO16(eax);
    MEM16(edi + 0x39A) = LO16(ecx);
    MEM16(edi + 0x39C) = LO16(edx);
    MEM16(edi + 0x39E) = LO16(eax);
    MEM8(edi + 0x518) = 0;

loc_0008CDE8: ;
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
 * sub_0008CDF0
 * Original: 0x0008CDF0 - 0x0008DB86 (3478 bytes, 831 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CDF0(void)
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

loc_0008CDF0: ;
    esp = esp - 0x48;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0008DB81; /* je: equal / zero */

loc_0008CE04: ;
    eax = MEM32(0x770BF8);
    ecx = MEM32(0x770BFC);
    edx = MEM32(0x770C00);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(0x770C04) = eax;
    MEM32(0x770C08) = ecx;
    MEM32(0x770C0C) = edx;
    ebp = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x68);
    (void)0; /* cmp esi, 0x54 - flags set for next jcc */
    ebx = 1;
    MEM32(esp + 0x10) = 0x400;
    MEM32(esp + 0x1C) = 0x100;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x20) = ebx;
    if (CMP_G(esi, 0x54)) goto loc_0008CF61; /* jg: greater (signed >) */

loc_0008CE62: ;
    if (CMP_EQ(esi, 0x54)) goto loc_0008CF37; /* je: equal / zero */

loc_0008CE68: ;
    if (CMP_A(esi, 0x52)) goto loc_0008DB7E; /* ja: above (unsigned >) */

loc_0008CE71: ;
    eax = ZX8(MEM8(esi + 0x8DBA0));
    { uint32_t _jt = MEM32(eax * 4 + 0x8DB88); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0008CE7Fu) goto loc_0008CE7F;
    if (_jt == 0x0008CEA9u) goto loc_0008CEA9;
    if (_jt == 0x0008CED3u) goto loc_0008CED3;
    if (_jt == 0x0008CEFDu) goto loc_0008CEFD;
    if (_jt == 0x0008CFC7u) goto loc_0008CFC7;
    if (_jt == 0x0008DB7Eu) goto loc_0008DB7E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008CE7F: ;
    SET_LO16(eax, MEM16(0x75DB84));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CE8F: ;
    PUSH32(esp, 0x5F0724);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CE9B: ;
    esp = esp + 4;
    MEM16(0x75DB84) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CEA9: ;
    SET_LO16(eax, MEM16(0x75DB80));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CEB9: ;
    PUSH32(esp, 0x5F0D20);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CEC5: ;
    esp = esp + 4;
    MEM16(0x75DB80) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CED3: ;
    SET_LO16(eax, MEM16(0x75DB78));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CEE3: ;
    PUSH32(esp, 0x5F0D28);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CEEF: ;
    esp = esp + 4;
    MEM16(0x75DB78) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CEFD: ;
    SET_LO16(eax, MEM16(0x75DB74));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CF1E; /* jne: not equal / not zero */

loc_0008CF09: ;
    PUSH32(esp, 0x5F0D18);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CF15: ;
    esp = esp + 4;
    MEM16(0x75DB74) = LO16(eax);

loc_0008CF1E: ;
    (void)0; /* cmp esi, 0x1E - flags set for next jcc */
    eax = ZX16(LO16(eax));
    if (CMP_NE(esi, 0x1E)) goto loc_0008CFED; /* jne: not equal / not zero */

loc_0008CF2A: ;
    MEM32(esp + 0x1C) = 0x22;
    goto loc_0008CFED;

loc_0008CF37: ;
    SET_LO16(eax, MEM16(0x75DB7C));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CF47: ;
    PUSH32(esp, 0x5D58CC);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CF53: ;
    esp = esp + 4;
    MEM16(0x75DB7C) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CF61: ;
    esi = esi + 0xFFFFFF7Eu;
    if (CMP_A(esi, 0x92)) goto loc_0008DB7E; /* ja: above (unsigned >) */

loc_0008CF73: ;
    ecx = ZX8(MEM8(esi + 0x8DC04));
    { uint32_t _jt = MEM32(ecx * 4 + 0x8DBF4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0008CF81u) goto loc_0008CF81;
    if (_jt == 0x0008CFA4u) goto loc_0008CFA4;
    if (_jt == 0x0008CFC7u) goto loc_0008CFC7;
    if (_jt == 0x0008DB7Eu) goto loc_0008DB7E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008CF81: ;
    SET_LO16(eax, MEM16(0x75DB8C));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CF8D: ;
    PUSH32(esp, 0x5D4CB4);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CF99: ;
    esp = esp + 4;
    MEM16(0x75DB8C) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CFA4: ;
    SET_LO16(eax, MEM16(0x75DB88));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFEA; /* jne: not equal / not zero */

loc_0008CFB0: ;
    PUSH32(esp, 0x5F0D28);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CFBC: ;
    esp = esp + 4;
    MEM16(0x75DB88) = LO16(eax);
    goto loc_0008CFEA;

loc_0008CFC7: ;
    SET_LO16(eax, MEM16(0x75DB70));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0008CFE8; /* jne: not equal / not zero */

loc_0008CFD3: ;
    PUSH32(esp, 0x5D4CB4);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0008CFDF: ;
    esp = esp + 4;
    MEM16(0x75DB70) = LO16(eax);

loc_0008CFE8: ;
    ebx = 0; /* xor self */

loc_0008CFEA: ;
    eax = ZX16(LO16(eax));

loc_0008CFED: ;
    ecx = MEM32(0x84A5F8);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = ecx + edx;
    edx = MEM32(ecx + 0x3C8);
    eax = eax << 6;
    eax = eax + edx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0008D034; /* je: equal / zero */

loc_0008D014: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = 0x770C04;
    PUSH32(esp, 0); sub_0008A890(); /* call 0x0008A890 */

loc_0008D031: ;
    esp = esp + 0x20;

loc_0008D034: ;
    xmm4 = 0.0f; /* xorps self = zero */
    SET_LO16(esi, MEM16(edi + 0x480));
    ebp = 0; /* xor self */
    (void)0; /* cmp LO16(esi), LO16(ebp) - flags set for next jcc */
    xmm3 = xmm4; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm5 = xmm4; /* movaps */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    if (CMP_NE(LO16(esi), LO16(ebp))) goto loc_0008D091; /* jne: not equal / not zero */

loc_0008D069: ;
    MEM16(edi + 0x476) = LO16(ebp);
    MEM8(edi + 0x482) = 0;
    MEM8(edi + 0x483) = 0;
    MEM8(edi + 0x484) = 0;
    MEM8(edi + 0x485) = 0;
    goto loc_0008D506;

loc_0008D091: ;
    SET_LO8(eax, MEM8(edi + 0x474));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008D198; /* jne: not equal / not zero */

loc_0008D09F: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0x482));
    MEM16(edi + 0x478) = MEM16(edi + 0x478) - LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0x485));
    MEM16(edi + 0x47E) = MEM16(edi + 0x47E) - LO16(eax);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x483));
    eax = ZX16(MEM16(edi + 0x476));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edi + 0x484));
    MEM16(edi + 0x47C) = MEM16(edi + 0x47C) - LO16(ecx);
    MEM16(edi + 0x47A) = MEM16(edi + 0x47A) - LO16(edx);
    ecx = MEM32(0x7FA20C);
    ebx = eax;
    edx = ecx + ecx * 2;
    ebx = ebx & 0xFF;
    ebx = ebx + edx;
    eax = eax >> 8;
    ecx = ecx << 2;
    eax = eax - ecx;
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    MEM32(esp + 0x1C) = eax;
    edx = edx | ebx;
    (void)0; /* cmp LO16(esi), 0x1E - flags set for next jcc */
    MEM16(edi + 0x476) = LO16(edx);
    if (CMP_AE(LO16(esi), 0x1E)) goto loc_0008D125; /* jae: above or equal (unsigned >=) */

loc_0008D114: ;
    eax = ZX16(LO16(esi));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    goto loc_0008D12D;

loc_0008D125: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_0008D12D: ;
    xmm1 = xmm1 * MEMF(0x64912C); /* mulss */
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_0008D13C: ;
    SET_LO8(eax, LO8(ebx));
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_0008D146: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm2 = xmm2 * xmm1; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    SET_LO8(eax, LO8(ebx));
    MEM8(edi + 0x482) = LO8(ecx);
    MEM8(edi + 0x483) = LO8(edx);
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_0008D16D: ;
    SET_LO8(eax, LO8(ebx));
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_0008D177: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = (int32_t)xmm2; /* cvttss2si */
    MEM8(edi + 0x484) = LO8(eax);
    MEM8(edi + 0x485) = LO8(ecx);
    goto loc_0008D4CE;

loc_0008D198: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0008D24D; /* jne: not equal / not zero */

loc_0008D1A0: ;
    if (CMP_NE(MEM16(edi + 0x476), LO16(ebp))) goto loc_0008D1C5; /* jne: not equal / not zero */

loc_0008D1A9: ;
    MEM16(edi + 0x476) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0008D1B7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(edi + 0x485) = MEM8(edi + 0x485) + LO8(edx);

loc_0008D1C5: ;
    SET_LO16(eax, MEM16(edi + 0x480));
    if (CMP_AE(LO16(eax), 0xAE)) goto loc_0008D1E7; /* jae: above or equal (unsigned >=) */

loc_0008D1D2: ;
    ecx = ZX16(LO16(eax));
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = edx + eax + 1;
    goto loc_0008D1EC;

loc_0008D1E7: ;
    eax = 0x1E;

loc_0008D1EC: ;
    SET_LO8(ebx, MEM8(edi + 0x483));
    SET_LO8(edx, MEM8(edi + 0x485));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(edx));
    MEM8(edi + 0x485) = LO8(edx);
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(eax));
    xmm5 = xmm4; /* movaps */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm4; /* movaps */
    MEM8(edi + 0x483) = LO8(ebx);
    MEM8(edi + 0x482) = 0;
    MEM8(edi + 0x484) = 0;
    MEM32(esp + 0x18) = 1;
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_0008D4C8;

loc_0008D24D: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0008D2FD; /* jne: not equal / not zero */

loc_0008D255: ;
    SET_LO8(edx, MEM8(edi + 0x10B));
    esi = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebp = 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D26A: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D277: ;
    ebx = 0x2B;
    /* nop */

loc_0008D280: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0008D295; /* jne: not equal / not zero */

loc_0008D28A: ;
    if (CMP_NE(MEM16(eax + 0xA), LO16(ebx))) goto loc_0008D295; /* jne: not equal / not zero */

loc_0008D290: ;
    if (TEST_Z(esi, esi)) goto loc_0008D2A0; /* je: equal / zero */

loc_0008D294: ;
    esi--;

loc_0008D295: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0008D280; /* jne: not equal / not zero */

loc_0008D29B: ;
    goto loc_0008D4CE;

loc_0008D2A0: ;
    eax = MEM32(eax + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D2AE: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D2BB: ;
    xmm0 = MEMF(eax + 0xB8); /* movss */
    xmm1 = MEMF(eax + 0xB4); /* movss */
    xmm2 = MEMF(eax + 0xB0); /* movss */
    eax = eax + 0x80;
    MEMF(0x770C04) = xmm2; /* movss */
    MEMF(0x770C08) = xmm1; /* movss */
    MEMF(0x770C0C) = xmm0; /* movss */
    MEM32(esp + 0x20) = 0;
    goto loc_0008D4CE;

loc_0008D2FD: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0008D339; /* jne: not equal / not zero */

loc_0008D301: ;
    eax = ZX16(MEM16(edi + 0x476));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D311: ;
    ecx = MEM32(edi + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0008D4CE; /* je: equal / zero */

loc_0008D31F: ;
    esi = 0x770C04;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0008D32B: ;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    goto loc_0008D4CE;

loc_0008D339: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_0008D3E6; /* jne: not equal / not zero */

loc_0008D341: ;
    if (CMP_NE(MEM32(edi + 0xA4), 0x26)) goto loc_0008D3D5; /* jne: not equal / not zero */

loc_0008D34E: ;
    if (CMP_NE(MEM16(edi + 0x476), LO16(ebp))) goto loc_0008D383; /* jne: not equal / not zero */

loc_0008D357: ;
    SET_LO8(edx, MEM8(edi + 0x482));
    SET_LO8(ecx, MEM8(0x7FA20C));
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    SET_LO8(eax, LO8(edx));
    (void)0; /* cmp LO8(eax), 0xEC - flags set for next jcc */
    MEM8(edi + 0x482) = LO8(edx);
    if (CMP_GE(LO8(eax), 0xEC)) goto loc_0008D3AE; /* jge: greater or equal (signed >=) */

loc_0008D371: ;
    MEM8(edi + 0x482) = 0xEC;
    MEM16(edi + 0x476) = 1;
    goto loc_0008D3AE;

loc_0008D383: ;
    SET_LO8(eax, MEM8(0x7FA20C));
    SET_LO8(edx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, MEM8(edi + 0x482));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, LO8(edx));
    (void)0; /* cmp LO8(eax), 0x14 - flags set for next jcc */
    MEM8(edi + 0x482) = LO8(edx);
    if (CMP_LE(LO8(eax), 0x14)) goto loc_0008D3AE; /* jle: less or equal (signed <=) */

loc_0008D3A0: ;
    MEM8(edi + 0x482) = 0x14;
    MEM16(edi + 0x476) = LO16(ebp);

loc_0008D3AE: ;
    SET_LO8(eax, MEM8(edi + 0x482));
    MEM8(edi + 0x484) = LO8(eax);
    MEM8(edi + 0x485) = 0;
    MEM8(edi + 0x483) = 0;
    MEM32(esp + 0x18) = 1;
    goto loc_0008D4CE;

loc_0008D3D5: ;
    MEM16(edi + 0x480) = LO16(ebp);
    ebp = 1;
    goto loc_0008D4CE;

loc_0008D3E6: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_0008D452; /* jne: not equal / not zero */

loc_0008D3EA: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x482);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x484);
    xmm0 = MEMF(0x649A0C); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x483);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x485);
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = MEMF(0x649A08); /* movss */
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x14) = ebp;
    goto loc_0008D4C8;

loc_0008D452: ;
    if (CMP_NE(LO8(eax), 6)) goto loc_0008D4CE; /* jne: not equal / not zero */

loc_0008D456: ;
    edx = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(edx + 0xA0), 0x2A)) goto loc_0008D491; /* jne: not equal / not zero */

loc_0008D465: ;
    xmm6 = MEMF(0x648E5C); /* movss */
    xmm5 = MEMF(0x649438); /* movss */
    xmm7 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    goto loc_0008D4BD;

loc_0008D491: ;
    (void)0; /* cmp MEM16(edi + 0x47C), 0 - flags set for next jcc */
    xmm5 = xmm4; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm6 = xmm4; /* movaps */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    if (CMP_NE(MEM16(edi + 0x47C), 0)) goto loc_0008D4BD; /* jne: not equal / not zero */

loc_0008D4B6: ;
    MEM8(edi + 0x474) = 0;

loc_0008D4BD: ;
    xmm3 = xmm6; /* movaps */
    MEM32(esp + 0x14) = 0;

loc_0008D4C8: ;
    MEMF(esp + 0x3C) = xmm3; /* movss */

loc_0008D4CE: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x480));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0008D4FE; /* je: equal / zero */

loc_0008D4DD: ;
    ecx = MEM32(0x7FA20C);
    edx = ZX16(LO16(eax));
    if (CMP_L(edx, ecx)) goto loc_0008D4F5; /* jl: less (signed <) */

loc_0008D4EA: ;
    eax = eax - ecx;
    MEM16(edi + 0x480) = LO16(eax);
    goto loc_0008D4FE;

loc_0008D4F5: ;
    MEM16(edi + 0x480) = 0;

loc_0008D4FE: ;
    if (TEST_Z(ebp, ebp)) goto loc_0008D736; /* je: equal / zero */

loc_0008D506: ;
    if (TEST_Z(MEM8(edi + 0x542), 4)) goto loc_0008D52E; /* je: equal / zero */

loc_0008D50F: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0008D52E; /* je: equal / zero */

loc_0008D517: ;
    xmm6 = xmm4; /* movaps */
    xmm5 = xmm4; /* movaps */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    goto loc_0008D72E;

loc_0008D52E: ;
    xmm0 = MEMF(0x6492AC); /* movss */
    xmm1 = MEMF(0x770C04); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008D576; /* jp: parity */

loc_0008D547: ;
    xmm1 = MEMF(0x770C08); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008D576; /* jp: parity */

loc_0008D558: ;
    xmm1 = MEMF(0x770C0C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0008D576; /* jp: parity */

loc_0008D569: ;
    MEM32(esp + 0x10) = 0x200;
    goto loc_0008D736;

loc_0008D576: ;
    SET_LO8(eax, MEM8(0x770BEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008D5A7; /* je: equal / zero */

loc_0008D57F: ;
    xmm5 = MEMF(0x770BE8); /* movss */
    xmm6 = MEMF(0x770BE4); /* movss */
    MEM8(0x770BEC) = 0;
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    goto loc_0008D736;

loc_0008D5A7: ;
    edx = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x24);
    esi = MEM32(edx + 0x3C8);
    eax = ebx;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 6);
    esi = esp + 0x4C;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0008D5C5: ;
    eax = esi;
    ecx = esp + 0x40;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = ecx;
    ecx = 0x770C04;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm4 = MEMF(ebx + 4); /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm1 = MEMF(ebx + 0x20); /* movss */
    xmm2 = MEMF(ebx); /* movss */
    xmm6 = MEMF(ebx + 0x10); /* movss */
    xmm7 = MEMF(ebx + 0x14); /* movss */
    xmm3 = MEMF(ebx + 0x18); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x24); /* movss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0008D692: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = xmm3 * MEMF(esp + 0x50); /* mulss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm7 = xmm7 * MEMF(esp + 0x4C); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D78); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm3 = xmm3 + xmm7; /* addss */
    xmm6 = xmm6 * xmm4; /* mulss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm3 = xmm3 + xmm6; /* addss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0008D6DD: ;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E6C); /* movss */
    xmm6 = xmm6 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm6; /* movss */
    if ((xmm5 <= xmm0)) goto loc_0008D710; /* jbe: below or equal (unsigned <=) */

loc_0008D706: ;
    xmm5 = xmm5 - xmm1; /* subss */
    MEMF(esp + 0x30) = xmm5; /* movss */

loc_0008D710: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0008D71F; /* jbe: below or equal (unsigned <=) */

loc_0008D715: ;
    xmm6 = xmm6 - xmm1; /* subss */
    MEMF(esp + 0x38) = xmm6; /* movss */

loc_0008D71F: ;
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */

loc_0008D72E: ;
    MEM32(esp + 0x10) = 0x400;

loc_0008D736: ;
    SET_LO16(ebp, MEM16(edi + 0x480));
    if (TEST_NZ(LO16(ebp), LO16(ebp))) goto loc_0008D786; /* jne: not equal / not zero */

loc_0008D742: ;
    ecx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00053920(); /* call 0x00053920 */

loc_0008D758: ;
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm5 = MEMF(esp + 0x3C); /* movss */
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0008D786; /* je: equal / zero */

loc_0008D777: ;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    esi = 0x400;
    goto loc_0008D792;

loc_0008D786: ;
    eax = MEM32(esp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0008D80A; /* je: equal / zero */

loc_0008D792: ;
    xmm0 = MEMF(0x6497D4); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    xmm2 = MEMF(0x6490B0); /* movss */
    if ((xmm0 <= xmm5)) goto loc_0008D7AC; /* jbe: below or equal (unsigned <=) */

loc_0008D7A7: ;
    xmm5 = xmm0; /* movaps */
    goto loc_0008D7B4;

loc_0008D7AC: ;
    /* comiss xmm5, xmm2 - sets EFLAGS */
    if ((xmm5 <= xmm2)) goto loc_0008D7B4; /* jbe: below or equal (unsigned <=) */

loc_0008D7B1: ;
    xmm5 = xmm2; /* movaps */

loc_0008D7B4: ;
    xmm1 = MEMF(0x58BCCC); /* movss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 <= xmm6)) goto loc_0008D7C6; /* jbe: below or equal (unsigned <=) */

loc_0008D7C1: ;
    xmm6 = xmm1; /* movaps */
    goto loc_0008D7DE;

loc_0008D7C6: ;
    xmm2 = MEMF(0x648E5C); /* movss */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_0008D7D6; /* jbe: below or equal (unsigned <=) */

loc_0008D7D3: ;
    xmm6 = xmm2; /* movaps */

loc_0008D7D6: ;
    xmm2 = MEMF(0x6490B0); /* movss */

loc_0008D7DE: ;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_0008D7E8; /* jbe: below or equal (unsigned <=) */

loc_0008D7E3: ;
    xmm7 = xmm0; /* movaps */
    goto loc_0008D7F0;

loc_0008D7E8: ;
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 <= xmm2)) goto loc_0008D7F0; /* jbe: below or equal (unsigned <=) */

loc_0008D7ED: ;
    xmm7 = xmm2; /* movaps */

loc_0008D7F0: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_0008D7FA; /* jbe: below or equal (unsigned <=) */

loc_0008D7F5: ;
    xmm3 = xmm1; /* movaps */
    goto loc_0008D80A;

loc_0008D7FA: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0008D80A; /* jbe: below or equal (unsigned <=) */

loc_0008D807: ;
    xmm3 = xmm0; /* movaps */

loc_0008D80A: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0008D818; /* je: equal / zero */

loc_0008D812: ;
    xmm7 = xmm5; /* movaps */
    xmm3 = xmm6; /* movaps */

loc_0008D818: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_0008DB7E; /* je: equal / zero */

loc_0008D823: ;
    /* comiss xmm5, xmm4 - sets EFLAGS */
    xmm1 = MEMF(0x649A04); /* movss */
    if ((xmm5 < xmm4)) goto loc_0008D849; /* jb: below (unsigned <) */

loc_0008D830: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x37);
    ecx = ecx << 8;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 * MEMF(0x649A00); /* mulss */
    goto loc_0008D85C;

loc_0008D849: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x36);
    edx = edx << 8;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */

loc_0008D85C: ;
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 < xmm4)) goto loc_0008D87A; /* jb: below (unsigned <) */

loc_0008D861: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x36);
    ecx = ecx << 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x649A00); /* mulss */
    goto loc_0008D88D;

loc_0008D87A: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x37);
    edx = edx << 8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */

loc_0008D88D: ;
    /* comiss xmm6, xmm4 - sets EFLAGS */
    xmm7 = MEMF(0x6499FC); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 - xmm0; /* subss */
    if ((xmm6 < xmm4)) goto loc_0008D8BA; /* jb: below (unsigned <) */

loc_0008D8A1: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x38);
    ecx = ecx << 8;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    goto loc_0008D8CD;

loc_0008D8BA: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edx = edx << 8;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */

loc_0008D8CD: ;
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 < xmm4)) goto loc_0008D8EB; /* jb: below (unsigned <) */

loc_0008D8D2: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x38);
    eax = eax << 8;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    goto loc_0008D8FE;

loc_0008D8EB: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = ecx << 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */

loc_0008D8FE: ;
    SET_LO8(eax, MEM8(0x847206));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008D913; /* je: equal / zero */

loc_0008D907: ;
    if (CMP_EQ(edi, MEM32(0x84A5F8))) goto loc_0008DA0B; /* je: equal / zero */

loc_0008D913: ;
    SET_LO16(edx, MEM16(edi + 0x478));
    ecx = SX16(LO16(edx));
    eax = (int32_t)xmm5; /* cvttss2si */
    eax = eax - ecx;
    ecx = eax;
    if (((int32_t)eax >= 0)) goto loc_0008D929; /* jns: not sign (positive) */

loc_0008D927: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008D929: ;
    if (CMP_GE(ecx, esi)) goto loc_0008D93A; /* jge: greater or equal (signed >=) */

loc_0008D92D: ;
    edx = (int32_t)xmm5; /* cvttss2si */
    MEM16(edi + 0x478) = LO16(edx);
    goto loc_0008D951;

loc_0008D93A: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx + edx;
    MEM16(edi + 0x478) = LO16(ecx);

loc_0008D951: ;
    SET_LO16(edx, MEM16(edi + 0x47A));
    ecx = SX16(LO16(edx));
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = eax - ecx;
    ecx = eax;
    if (((int32_t)eax >= 0)) goto loc_0008D967; /* jns: not sign (positive) */

loc_0008D965: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008D967: ;
    if (CMP_GE(ecx, esi)) goto loc_0008D978; /* jge: greater or equal (signed >=) */

loc_0008D96B: ;
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(edi + 0x47A) = LO16(edx);
    goto loc_0008D98F;

loc_0008D978: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx + edx;
    MEM16(edi + 0x47A) = LO16(ecx);

loc_0008D98F: ;
    SET_LO16(edx, MEM16(edi + 0x47C));
    ecx = SX16(LO16(edx));
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax - ecx;
    ecx = eax;
    if (((int32_t)eax >= 0)) goto loc_0008D9A5; /* jns: not sign (positive) */

loc_0008D9A3: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008D9A5: ;
    if (CMP_GE(ecx, esi)) goto loc_0008D9B6; /* jge: greater or equal (signed >=) */

loc_0008D9A9: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(edi + 0x47C) = LO16(edx);
    goto loc_0008D9CD;

loc_0008D9B6: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx + edx;
    MEM16(edi + 0x47C) = LO16(ecx);

loc_0008D9CD: ;
    SET_LO16(edx, MEM16(edi + 0x47E));
    ecx = SX16(LO16(edx));
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = eax - ecx;
    ecx = eax;
    if (((int32_t)eax >= 0)) goto loc_0008D9E3; /* jns: not sign (positive) */

loc_0008D9E1: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0008D9E3: ;
    if (CMP_GE(ecx, esi)) goto loc_0008D9F4; /* jge: greater or equal (signed >=) */

loc_0008D9E7: ;
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(edi + 0x47E) = LO16(edx);
    goto loc_0008DA0B;

loc_0008D9F4: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx + edx;
    MEM16(edi + 0x47E) = LO16(ecx);

loc_0008DA0B: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0008DA4F; /* je: equal / zero */

loc_0008DA13: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(edi + 0x482));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(edi + 0x483));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(edi + 0x484));
    MEM16(edi + 0x478) = LO16(edx);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(edi + 0x485));
    MEM16(edi + 0x47C) = LO16(eax);
    MEM16(edi + 0x47A) = LO16(ecx);
    MEM16(edi + 0x47E) = LO16(edx);

loc_0008DA4F: ;
    if (TEST_Z(LO16(ebp), LO16(ebp))) goto loc_0008DAA6; /* je: equal / zero */

loc_0008DA54: ;
    SET_LO8(eax, MEM8(edi + 0x474));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0008DAA6; /* jne: not equal / not zero */

loc_0008DA5E: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0x482));
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x483));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edi + 0x484));
    eax = eax << 8;
    MEM16(edi + 0x478) = MEM16(edi + 0x478) + LO16(eax);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0x485));
    ecx = ecx << 8;
    MEM16(edi + 0x47C) = MEM16(edi + 0x47C) + LO16(ecx);
    edx = edx << 8;
    MEM16(edi + 0x47A) = MEM16(edi + 0x47A) + LO16(edx);
    eax = eax << 8;
    MEM16(edi + 0x47E) = MEM16(edi + 0x47E) + LO16(eax);

loc_0008DAA6: ;
    eax = ZX8(MEM8(edi + 0x511));
    if (TEST_NZ(eax, eax)) goto loc_0008DAB6; /* jne: not equal / not zero */

loc_0008DAB1: ;
    eax = 1;

loc_0008DAB6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x478);
    xmm0 = MEMF(0x6499F8); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x47C);
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x47A);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x47E);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = (uint32_t)(-(int32_t)ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0008DB7E; /* jle: less or equal (signed <=) */

loc_0008DB1A: ;
    ebp = MEM32(esp + 0x2C);
    edi = edi + 0x4C4;
    MEM32(esp + 0x28) = eax;

loc_0008DB28: ;
    eax = MEM32(edi + -20);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0008DB70; /* je: equal / zero */

loc_0008DB32: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    esi = MEM32(eax + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F0D0C);
    PUSH32(esp, eax);
    ebx = 0x5F0CF8;
    eax = esi;
    PUSH32(esp, 0); sub_0008DCA0(); /* call 0x0008DCA0 */

loc_0008DB53: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5F0CEC);
    PUSH32(esp, edx);
    ebx = 0x5F0CDC;
    eax = esi;
    PUSH32(esp, 0); sub_0008DCA0(); /* call 0x0008DCA0 */

loc_0008DB6D: ;
    esp = esp + 0x20;

loc_0008DB70: ;
    eax = MEM32(esp + 0x28);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0x28) = eax;
    if ((eax != 0)) goto loc_0008DB28; /* jne: not equal / not zero */

loc_0008DB7E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008DB81: ;
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
 * sub_0008DCA0
 * Original: 0x0008DCA0 - 0x0008DD97 (247 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DCA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0008DCA0: ;
    eax = MEM32(eax + 0x10);
    esp = esp - 0x68;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0008DCB3: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0008DD93; /* je: equal / zero */

loc_0008DCBE: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_0008DD93; /* je: equal / zero */

loc_0008DCC9: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x6C);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    edx = MEM32(eax + 0x38);
    ecx = ecx + esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(eax + 0x30);
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) goto loc_0008DCEC; /* je: equal / zero */

loc_0008DCE3: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax);
    edi = MEM32(ecx);
    goto loc_0008DCEF;

loc_0008DCEC: ;
    edi = MEM32(ecx + 4);

loc_0008DCEF: ;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x5F0CD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0008DD03: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_0008DD14: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0008DD91; /* je: equal / zero */

loc_0008DD1B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, 1)) goto loc_0008DD2C; /* je: equal / zero */

loc_0008DD27: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0008DD91; /* jne: not equal / not zero */

loc_0008DD2C: ;
    eax = MEM32(eax + 8);
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0);
    eax = eax << 6;
    eax = eax + edx;
    edx = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0008DD4D: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x14); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(eax + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0008DD8E: ;
    esp = esp + 8;

loc_0008DD91: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0008DD93: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_0008DDA0
 * Original: 0x0008DDA0 - 0x0008DE16 (118 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DDA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0008DDA0: ;
    xmm0 = MEMF(0x6492AC); /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(edx + 4) = xmm0; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    eax = esi;
    MEMF(0x770BF8) = xmm0; /* movss */
    MEMF(0x770BFC) = xmm0; /* movss */
    MEMF(0x770C00) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0008A7A0(); /* call 0x0008A7A0 */

loc_0008DDD5: ;
    if (TEST_NZ(eax, eax)) goto loc_0008DE15; /* jne: not equal / not zero */

loc_0008DDD9: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0008AEE0(); /* call 0x0008AEE0 */

loc_0008DE12: ;
    esp = esp + 0x30;

loc_0008DE15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008DE20
 * Original: 0x0008DE20 - 0x0008E13F (799 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0008DE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_EQ(eax, 1)) goto loc_0008E05E; /* je: equal / zero */

loc_0008DE4D: ;
    if (TEST_Z(eax, eax)) goto loc_0008E05E; /* je: equal / zero */

loc_0008DE55: ;
    if (CMP_NE(eax, 2)) goto loc_0008E138; /* jne: not equal / not zero */

loc_0008DE5E: ;
    xmm0 = MEMF(0x648D34); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x64928C); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x7C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0008DEA5: ;
    xmm0 = MEMF(ebp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0008DEDC: ;
    xmm6 = MEMF(ebp + 0x1C); /* movss */
    xmm7 = MEMF(ebp + 0x14); /* movss */
    esp = esp + 0x24;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0008DFA6; /* jle: less or equal (signed <=) */

loc_0008DEF1: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp + 0x18) = eax;
    edx = edx + 0x34;
    MEM32(esp + 0x1C) = ebx;
    /* nop */

loc_0008DF00: ;
    esi = MEM32(esp + 0x18);
    ebx = edx + -52;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(edx + -4); /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm2 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x18); /* subss */
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    xmm0 = xmm0 - xmm7; /* subss */
    xmm2 = xmm2 - xmm6; /* subss */
    PUSH32(esp, ebx);
    MEMF(edx + -4) = xmm0; /* movss */
    MEMF(edx) = xmm1; /* movss */
    MEMF(edx + 4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008DF45: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008DF51: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008DF60: ;
    xmm0 = MEMF(edx + -4); /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm2 = MEMF(edx + 4); /* movss */
    esi = MEM32(esp + 0x18);
    xmm1 = xmm1 + MEMF(ebp + 0x18); /* addss */
    eax = MEM32(esp + 0x1C);
    xmm0 = xmm0 + xmm7; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(edx + -4) = xmm0; /* movss */
    MEMF(edx) = xmm1; /* movss */
    MEMF(edx + 4) = xmm2; /* movss */
    esi = esi + 0x40;
    edx = edx + 0x40;
    eax--;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_0008DF00; /* jne: not equal / not zero */

loc_0008DFA6: ;
    ecx = (int32_t)MEMF(ebp + 0x24); /* cvttss2si */
    edx = (int32_t)xmm7; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(ebp + 0x2C); /* cvttss2si */
    eax = (int32_t)xmm6; /* cvttss2si */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ebp + 0x34) - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ebp + 0x34))) goto loc_0008E018; /* jbe: below or equal (unsigned <=) */

loc_0008E00A: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E018: ;
    xmm1 = MEMF(ebp + 0x30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008E037; /* jbe: below or equal (unsigned <=) */

loc_0008E022: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0008E02A: ;
    edx = MEM32(ebp + 8);
    MEM8(edx + 4) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E037: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x34)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    /* FPU: fsubr dword ptr [ebp + 0x38] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0008E051: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 4) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E05E: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(0x648D34); /* movss */
    xmm6 = MEMF(ebp + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0008E0BB; /* jle: less or equal (signed <=) */

loc_0008E075: ;
    eax = MEM32(ebp + 0x10);
    xmm7 = MEMF(0x648CE0); /* movss */
    edi = edx;
    esi = eax + 0x34;
    edi = edi - eax;

loc_0008E087: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi + -52;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0008E096: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(edi + esi) = xmm1; /* movss */
    esi = esi + 0x40;
    edx = edx + 0x40;
    ebx--;
    if ((ebx != 0)) goto loc_0008E087; /* jne: not equal / not zero */

loc_0008E0B8: ;
    eax = MEM32(ebp + 0xC);

loc_0008E0BB: ;
    xmm0 = MEMF(ebp + 0x28); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm0, MEMF(ebp + 0x34) - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ebp + 0x34))) goto loc_0008E0DE; /* jbe: below or equal (unsigned <=) */

loc_0008E0D0: ;
    edx = MEM32(ebp + 8);
    MEM8(edx + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E0DE: ;
    xmm1 = MEMF(ebp + 0x30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008E118; /* jbe: below or equal (unsigned <=) */

loc_0008E0E8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    if (TEST_NZ(eax, eax)) goto loc_0008E106; /* jne: not equal / not zero */

loc_0008E0EF: ;
    xmm1 = MEMF(0x648CE4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008E12D; /* jbe: below or equal (unsigned <=) */

loc_0008E0FC: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_0008E106: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0008E10B: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 4) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E118: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x34)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    /* FPU: fsubr dword ptr [ebp + 0x38] */

loc_0008E12D: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0008E132: ;
    edx = MEM32(ebp + 8);
    MEM8(edx + 4) = LO8(eax);

loc_0008E138: ;
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
 * sub_0008E140
 * Original: 0x0008E140 - 0x0008E14C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E140(void)
{
    int _flags = 0; /* fallback flag var */

loc_0008E140: ;
    SET_LO8(eax, MEM8(0x770DF8));
    if (CMP_NE(LO8(eax), 0xF)) { sub_0008E14C(); return; } /* jne: not equal / not zero */

loc_0008E149: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E160
 * Original: 0x0008E160 - 0x0008E1AA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E160: ;
    xmm2 = MEMF(eax + 0x260); /* movss */
    esp = esp - 0x14;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x74);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0xE));
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0x264); /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(eax + 0x264); /* mulss */
    if (CMP_EQ(edx, 1)) { sub_0008E1AA(); return; } /* je: equal / zero */

loc_0008E19B: ;
    if (TEST_Z(edx, edx)) { sub_0008E1AA(); return; } /* je: equal / zero */

loc_0008E19F: ;
    xmm3 = MEMF(eax + 0x7C); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    g_seh_ebp = ebp; sub_0008E1C4(); return; /* tail jmp 0x0008E1C4 */

}

/**
 * sub_0008E250
 * Original: 0x0008E250 - 0x0008E665 (1045 bytes, 288 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E250: ;
    esp = esp - 0x1C;
    eax = MEM32(0x7FA1F8);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x1D - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 0x578;
    if (CMP_NE(eax, 0x1D)) goto loc_0008E285; /* jne: not equal / not zero */

loc_0008E26F: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0008E285; /* jne: not equal / not zero */

loc_0008E278: ;
    if (CMP_EQ(MEM8(0x76F0DC), 2)) goto loc_0008E661; /* je: equal / zero */

loc_0008E285: ;
    if (CMP_EQ(MEM8(0x770DF8), 0xF)) goto loc_0008E661; /* je: equal / zero */

loc_0008E292: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    if (CMP_NE(eax, ecx)) goto loc_0008E2B8; /* jne: not equal / not zero */

loc_0008E2A5: ;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    if (CMP_NE(MEM32(edx + eax + 0x64), 1)) goto loc_0008E65F; /* jne: not equal / not zero */

loc_0008E2B8: ;
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    esi = eax + ebp;
    if (CMP_EQ(MEM32(esi + 0x3C8), ecx)) goto loc_0008E65E; /* je: equal / zero */

loc_0008E2D0: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_0008E65E; /* je: equal / zero */

loc_0008E2E0: ;
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0xB4));
    if (CMP_EQ(edi, ecx)) goto loc_0008E65D; /* je: equal / zero */

loc_0008E2F0: ;
    eax = esi;
    PUSH32(esp, 0); sub_000807C0(); /* call 0x000807C0 */

loc_0008E2F7: ;
    ecx = eax;
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0008E30E; /* jne: not equal / not zero */

loc_0008E306: ;
    MEM32(esp + 0x1C) = 0x2710;

loc_0008E30E: ;
    eax = MEM32(0x8470DC);
    xmm0 = MEMF(eax + 0x338); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x80); /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(eax + 0x334); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x7C); /* subss */
    PUSH32(esp, edx);
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(eax + 0x330); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    PUSH32(esp, edx);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029D490(); /* call 0x0029D490 */

loc_0008E351: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0008E65D; /* ja: above (unsigned >) */

loc_0008E369: ;
    eax = eax + 0xFFFFFF38u;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_0008E391; /* jbe: below or equal (unsigned <=) */

loc_0008E377: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648E8C); /* mulss */
    xmm0 = xmm0 / xmm2; /* divss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x10) = edx;
    goto loc_0008E399;

loc_0008E391: ;
    MEM32(esp + 0x10) = 0x100;

loc_0008E399: ;
    if (CMP_EQ(edi, 0xFF)) goto loc_0008E3AF; /* je: equal / zero */

loc_0008E3A1: ;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x10) = eax;

loc_0008E3AF: ;
    PUSH32(esp, 0); sub_0008E140(); /* call 0x0008E140 */

loc_0008E3B4: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0008E65D; /* je: equal / zero */

loc_0008E3BE: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x16E);
    ecx = ecx << 6;
    PUSH32(esp, 0x5F0D5C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0008E3D7: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    MEM8(esi + 0x14) = LO8(ebx);
    ebx = MEM32(0x84A5F8);
    MEM32(esi) = eax;
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEM8(esi + 0x18) = 0;
    SET_LO8(ecx, MEM8(ebx + ebp + 0x10B));
    edi = ebx + ebp;
    MEM8(esi + 0x15) = LO8(ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = 0;
    eax = MEM32(edi + 0x3C8);
    MEM32(esp + 0x30) = eax;
    ecx = MEM32(edi + 0x80);
    edx = MEM32(edi + 0x7C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0008DE20(); /* call 0x0008DE20 */

loc_0008E45F: ;
    eax = ZX8(MEM8(esi + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x54));
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 8);
    esp = esp + 0x44;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = edi;
    PUSH32(esp, 0); sub_0008E160(); /* call 0x0008E160 */

loc_0008E488: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0008E4AE; /* je: equal / zero */

loc_0008E48F: ;
    SET_LO8(edx, MEM8(0x770DF8));
    SET_LO8(edx, LO8(edx) - 1);
    PUSH32(esp, esi);
    MEM8(0x770DF8) = LO8(edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0008E4A3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0008E4AE: ;
    edi = MEM32(0x847200);
    if (TEST_Z(edi, edi)) goto loc_0008E65D; /* je: equal / zero */

loc_0008E4BC: ;
    /* nop */

loc_0008E4C0: ;
    SET_LO8(edx, MEM8(edi));
    (void)0; /* cmp LO8(edx), MEM8(ebx + ebp + 0x10B) - flags set for next jcc */
    eax = MEM32(edi + 0xE0);
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(LO8(edx), MEM8(ebx + ebp + 0x10B))) goto loc_0008E64F; /* jne: not equal / not zero */

loc_0008E4D9: ;
    SET_LO8(ecx, MEM8(edi + 6));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008E64F; /* je: equal / zero */

loc_0008E4E4: ;
    PUSH32(esp, 0); sub_0008E140(); /* call 0x0008E140 */

loc_0008E4E9: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0008E65D; /* je: equal / zero */

loc_0008E4F3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(esp + 0x34));
    MEM8(esi + 0x14) = LO8(eax);
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEM8(esi + 0x18) = 1;
    SET_LO8(ecx, MEM8(ebx + ebp + 0x10B));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO16(edx, MEM16(edi + 0xA));
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM16(esi + 0x16) = LO16(edx);
    PUSH32(esp, ecx);
    edx = ebx + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00077F70(); /* call 0x00077F70 */

loc_0008E53B: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0008E54B; /* jne: not equal / not zero */

loc_0008E542: ;
    edi = MEM32(esp + 0x1C);
    goto loc_0008E651;

loc_0008E54B: ;
    eax = MEM32(edi + 0xC4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(eax, eax)) goto loc_0008E57D; /* je: equal / zero */

loc_0008E55D: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5E991C;
    PUSH32(esp, 0); sub_003ED460(); /* call 0x003ED460 */

loc_0008E573: ;
    edx = MEM32(eax + 0x30);
    esp = esp + 8;
    MEM32(esp + 0x18) = edx;

loc_0008E57D: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    eax = SX8(LO8(ecx));
    edx = MEM32(edi + eax * 4 + 0xC8);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = edi + eax * 4 + 0xC8;
    if (TEST_NZ(edx, edx)) goto loc_0008E5CE; /* jne: not equal / not zero */

loc_0008E598: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x10);
    ecx = SX8(LO8(ecx));
    PUSH32(esp, 0x1CD);
    edx = edx << 6;
    ebx = edi + ecx * 4 + 0xC8;
    PUSH32(esp, 0x5F0D5C);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0008E5BF: ;
    MEM32(ebx) = eax;
    ebx = MEM32(0x84A5F8);
    eax = MEM32(esp + 0x34);
    esp = esp + 0x10;

loc_0008E5CE: ;
    edx = MEM32(eax);
    ecx = (int32_t)MEMF(esp + 0x54); /* cvttss2si */
    MEM32(esi) = edx;
    eax = ZX8(MEM8(edi + 6));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    eax = (uint32_t)((int32_t)eax >> 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x54);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(ebx + ebp + 0x80);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + ebp + 0x7C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + ebp + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0008DE20(); /* call 0x0008DE20 */

loc_0008E630: ;
    ecx = ZX8(MEM8(esi + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x44));
    edx = MEM32(esp + 0x5C);
    edi = MEM32(esp + 0x50);
    esp = esp + 0x34;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esi + 4) = LO8(ecx);
    MEM32(esi + 0x1C) = edx;
    goto loc_0008E651;

loc_0008E64F: ;
    edi = eax;

loc_0008E651: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0008E4C0; /* jne: not equal / not zero */

loc_0008E65D: ;
    POP32(esp, edi);

loc_0008E65E: ;
    POP32(esp, ebp);

loc_0008E65F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008E661: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E670
 * Original: 0x0008E670 - 0x0008E6B6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E670(void)
{
    int _flags = 0; /* fallback flag var */

loc_0008E670: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0008E6B4; /* je: equal / zero */

loc_0008E67B: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_0008E694: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_0008E6A0: ;
    ecx = MEM32(edi + 0x58);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    MEM32(edx + eax + 4) = ecx;
    POP32(esp, esi);

loc_0008E6B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E6C0
 * Original: 0x0008E6C0 - 0x0008E7DC (284 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E6C0: ;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x770DF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008E7DA; /* je: equal / zero */

loc_0008E6D0: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0008E7C0; /* jbe: below or equal (unsigned <=) */

loc_0008E6DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x770C2D;
    ebx = 0x20;
    goto loc_0008E6F0;

    /* nop */

loc_0008E6F0: ;
    if (CMP_NE(MEM8(esi + 3), 1)) goto loc_0008E7AC; /* jne: not equal / not zero */

loc_0008E6FA: ;
    SET_LO8(eax, MEM8(esi));
    if (CMP_NE(LO8(eax), MEM8(edi))) goto loc_0008E7AC; /* jne: not equal / not zero */

loc_0008E704: ;
    SET_LO16(ecx, MEM16(esi + 1));
    if (CMP_NE(LO16(ecx), MEM16(edi + 0xA))) goto loc_0008E7AC; /* jne: not equal / not zero */

loc_0008E712: ;
    if (TEST_Z(MEM8(edi + 7), LO8(ebx))) goto loc_0008E71F; /* je: equal / zero */

loc_0008E717: ;
    edx = MEM32(esi + 7);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    goto loc_0008E72D;

loc_0008E71F: ;
    eax = MEM32(edi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_0008E735; /* je: equal / zero */

loc_0008E729: ;
    ecx = MEM32(esi + -21);
    PUSH32(esp, ecx);

loc_0008E72D: ;
    PUSH32(esp, 0); sub_0008E670(); /* call 0x0008E670 */

loc_0008E732: ;
    esp = esp + 4;

loc_0008E735: ;
    edx = ZX8(MEM8(esi + -1));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_0008E751: ;
    eax = ZX8(MEM8(esi + -1));
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_0008E76E: ;
    SET_LO8(eax, MEM8(edi + 7));
    esp = esp + 0x20;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0008E794; /* je: equal / zero */

loc_0008E778: ;
    ecx = MEM32(esi + 7);
    edx = ZX8(MEM8(ecx + 0x14));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = MEM32(edx + eax + 0x3C8);
    PUSH32(esp, ecx);
    goto loc_0008E7A4;

loc_0008E794: ;
    eax = MEM32(edi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_0008E7AC; /* je: equal / zero */

loc_0008E79E: ;
    edx = MEM32(eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);

loc_0008E7A4: ;
    PUSH32(esp, 0); sub_0008E670(); /* call 0x0008E670 */

loc_0008E7A9: ;
    esp = esp + 4;

loc_0008E7AC: ;
    ecx = ZX8(MEM8(0x770DF8));
    ebp++;
    esi = esi + ebx;
    if (CMP_L(ebp, ecx)) goto loc_0008E6F0; /* jl: less (signed <) */

loc_0008E7BE: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008E7C0: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0008E7CF: ;
    MEM32(0x549ADC) = 0x203;
    POP32(esp, ebp);

loc_0008E7DA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E7E0
 * Original: 0x0008E7E0 - 0x0008E8BC (220 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E7E0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x770DF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008E8BA; /* je: equal / zero */

loc_0008E7EE: ;
    MEM32(esp) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0008E8BA; /* jbe: below or equal (unsigned <=) */

loc_0008E7FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x770C2C;

loc_0008E804: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0008E89F; /* jne: not equal / not zero */

loc_0008E80F: ;
    ebx = MEM32(ebp + -20);
    if (TEST_Z(ebx, ebx)) goto loc_0008E89F; /* je: equal / zero */

loc_0008E81A: ;
    edi = ZX8(MEM8(ebp));
    edx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    xmm0 = MEMF(edi + edx + 0x228); /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    edi = edi + edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0008E851; /* je: equal / zero */

loc_0008E845: ;
    xmm1 = MEMF(edi + 0x7C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0008E89F; /* jae: above or equal (unsigned >=) */

loc_0008E84F: ;
    goto loc_0008E857;

loc_0008E851: ;
    /* comiss xmm0, MEMF(edi + 0x7C) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 0x7C))) goto loc_0008E89F; /* ja: above (unsigned >) */

loc_0008E857: ;
    ecx = edi;
    PUSH32(esp, 0); sub_002B3510(); /* call 0x002B3510 */

loc_0008E85E: ;
    esi = ZX8(MEM8(ebp));
    eax = ZX8(MEM8(ebp + -16));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esi + ebx;
    PUSH32(esp, 0); sub_0007FAB0(); /* call 0x0007FAB0 */

loc_0008E881: ;
    ebx = MEM32(edi + 0x3C8);
    ecx = edi;
    PUSH32(esp, 0); sub_002B3510(); /* call 0x002B3510 */

loc_0008E88E: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0008E897: ;
    SET_LO8(eax, MEM8(0x770DF8));
    esp = esp + 0x10;

loc_0008E89F: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX8(LO8(eax));
    ecx++;
    ebp = ebp + 0x20;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0008E804; /* jl: less (signed <) */

loc_0008E8B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008E8BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E8C0
 * Original: 0x0008E8C0 - 0x0008E990 (208 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E8C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0008E8C0: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 4)) goto loc_0008E98F; /* je: equal / zero */

loc_0008E8CD: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    if (CMP_EQ(MEM8(ecx + 0x8C2), 1)) goto loc_0008E98F; /* je: equal / zero */

loc_0008E8E2: ;
    edx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(edx), 0)) goto loc_0008E98F; /* je: equal / zero */

loc_0008E8F1: ;
    ecx = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(ecx + 0xA1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008E909; /* je: equal / zero */

loc_0008E901: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0008E98F; /* jne: not equal / not zero */

loc_0008E909: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0008E98F; /* jnp: not parity */

loc_0008E91E: ;
    xmm0 = xmm0 - MEMF(0x648EC8); /* subss */
    xmm1 = MEMF(ecx + 0x7C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0008E98F; /* jbe: below or equal (unsigned <=) */

loc_0008E930: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x294) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x294))) goto loc_0008E98F; /* jbe: below or equal (unsigned <=) */

loc_0008E941: ;
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_0008E98F; /* jbe: below or equal (unsigned <=) */

loc_0008E952: ;
    xmm0 = xmm1; /* movaps */
    /* comiss xmm0, MEMF(ecx + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x228))) goto loc_0008E98F; /* jbe: below or equal (unsigned <=) */

loc_0008E95E: ;
    eax = MEM32(ecx + 0x80);
    edx = MEM32(ecx + 0x228);
    PUSH32(esp, 0x42FE0000);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0008E250(); /* call 0x0008E250 */

loc_0008E98C: ;
    esp = esp + 0x28;

loc_0008E98F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E990
 * Original: 0x0008E990 - 0x0008EA26 (150 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E990(void)
{
    int _flags = 0; /* fallback flag var */

loc_0008E990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xB8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0008E9D2; /* je: equal / zero */

loc_0008E99D: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F0DCC;
    if (TEST_Z(ecx, ecx)) goto loc_0008E9B0; /* je: equal / zero */

loc_0008E9AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0008E9B0: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = 0;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0008E9C5: ;
    esp = esp + 4;
    MEM32(ebx + 0xB8) = 0;

loc_0008E9D2: ;
    esi = MEM32(esp + 0x10);
    ecx = 0xD8;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0xB8);
    if (TEST_Z(eax, eax)) goto loc_0008EA1E; /* je: equal / zero */

loc_0008E9E9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_00091270(); /* call 0x00091270 */

loc_0008E9F0: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0008EA16; /* je: equal / zero */

loc_0008E9F7: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx + 0xB8);
    esi = eax;
    PUSH32(esp, 0); sub_00091450(); /* call 0x00091450 */

loc_0008EA08: ;
    POP32(esp, edi);
    MEM32(ebx + 0xB8) = eax;
    eax = ebx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0008EA16: ;
    eax = 0; /* xor self */
    MEM32(ebx + 0xB8) = eax;

loc_0008EA1E: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008EA30
 * Original: 0x0008EA30 - 0x0008EAE7 (183 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EA30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008EA30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84A19C);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0008EAE7(); return; } /* jne: not equal / not zero */

loc_0008EA4A: ;
    if (TEST_NZ(eax, eax)) goto loc_0008EA53; /* jne: not equal / not zero */

loc_0008EA4E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0008EA53: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0008EAA1; /* je: equal / zero */

loc_0008EA79: ;
    if (CMP_B(MEM32(esi + 0x80), 0x360)) goto loc_0008EAA1; /* jb: below (unsigned <) */

loc_0008EA85: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0008EA8F: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0008EA9A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0008EAC5; /* jne: not equal / not zero */

loc_0008EAA1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0008EAB3: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0008EABE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0008EADA; /* je: equal / zero */

loc_0008EAC5: ;
    MEM32(eax + 0xB8) = 0;
    MEM32(ebp + 0x650) = eax;
    g_seh_ebp = ebp; sub_0008EB7C(); return; /* tail jmp 0x0008EB7C */

loc_0008EADA: ;
    eax = 0; /* xor self */
    MEM32(ebp + 0x650) = eax;
    g_seh_ebp = ebp; sub_0008EB7C(); return; /* tail jmp 0x0008EB7C */

}

/**
 * sub_0008EBC0
 * Original: 0x0008EBC0 - 0x0008EC3B (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EBC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0008EBC0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_0008EBCF; /* jne: not equal / not zero */

loc_0008EBC9: ;
    if (CMP_EQ(MEM32(ecx + 0x64), 2)) goto loc_0008EBE9; /* je: equal / zero */

loc_0008EBCF: ;
    if (CMP_NE(MEM32(ecx + 0x64), 1)) goto loc_0008EC3A; /* jne: not equal / not zero */

loc_0008EBD5: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0008EBF1; /* je: equal / zero */

loc_0008EBDF: ;
    if (CMP_NE(MEM16(ecx + 0x3AE), 0)) goto loc_0008EBF1; /* jne: not equal / not zero */

loc_0008EBE9: ;
    MEM8(ecx + 0x542) = MEM8(ecx + 0x542) | 1;
    esp += 4; return; /* ret */

loc_0008EBF1: ;
    edx = MEM32(ecx + 0xA4);
    eax = 0x58E6B8;
    PUSH32(esp, esi);
    /* nop */

loc_0008EC00: ;
    esi = ZX16(MEM16(eax));
    if (CMP_EQ(edx, esi)) goto loc_0008EC29; /* je: equal / zero */

loc_0008EC07: ;
    eax = eax + 2;
    if (CMP_L(eax, 0x58E6BE)) goto loc_0008EC00; /* jl: less (signed <) */

loc_0008EC11: ;
    eax = 0x58E600;

loc_0008EC16: ;
    esi = ZX16(MEM16(eax));
    if (CMP_EQ(edx, esi)) goto loc_0008EC32; /* je: equal / zero */

loc_0008EC1D: ;
    eax = eax + 2;
    if (CMP_L(eax, 0x58E6B8)) goto loc_0008EC16; /* jl: less (signed <) */

loc_0008EC27: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008EC29: ;
    MEM8(ecx + 0x542) = MEM8(ecx + 0x542) | 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008EC32: ;
    MEM8(ecx + 0x542) = MEM8(ecx + 0x542) | 1;
    POP32(esp, esi);

loc_0008EC3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008EC40
 * Original: 0x0008EC40 - 0x0008ED48 (264 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EC40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0008EC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    SET_LO8(eax, MEM8(0x6A7F70));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0008ED41; /* je: equal / zero */

loc_0008EC59: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ebx = 0; /* xor self */
    goto loc_0008EC90;

    /* nop */

loc_0008EC90: ;
    esi = ebx;
    edi = 5;
    goto loc_0008ECA0;

    /* nop */

loc_0008ECA0: ;
    eax = MEM32(esi + 0x6A7E50);
    ecx = MEM32(esi + 0x6A7E54);
    edx = esi + 0x770E00;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi + 0x6A7E58);
    MEM32(esp + 0x18) = eax;
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    edx = 0; /* xor self */
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_0008ECDC: ;
    esp = esp + 0xC;
    eax = MEM32(esp + 0x14);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x10);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_0008ECA0; /* jne: not equal / not zero */

loc_0008ED2B: ;
    ebx = ebx + 0x48;
    if (CMP_L(ebx, 0x120)) goto loc_0008EC90; /* jl: less (signed <) */

loc_0008ED3A: ;
    MEM8(0x6A7F70) = 0;

loc_0008ED41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008ED50
 * Original: 0x0008ED50 - 0x0008EDD4 (132 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ED50(void)
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

loc_0008ED50: ;
    esp = esp - 0x1C;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = MEM32(esp + 0x24);
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0008EDD4(); return; } /* jnp: not parity */

loc_0008EDA6: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0008EDE6(); return; /* tail jmp 0x0008EDE6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0008EE80
 * Original: 0x0008EE80 - 0x0008EF04 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008EE80: ;
    esp = esp - 0x10;
    eax = eax + eax * 2;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    ecx = ecx + eax * 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0008EF04(); return; } /* jnp: not parity */

loc_0008EEDF: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 / MEMF(esp); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 4); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 * MEMF(esp + 8); /* mulss */
    xmm6 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_0008EF16(); return; /* tail jmp 0x0008EF16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0008EFE0
 * Original: 0x0008EFE0 - 0x0008F07E (158 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0008EFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    eax = eax + eax * 2;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esi = ecx + eax * 4;
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0008F07E(); return; } /* jnp: not parity */

loc_0008F049: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x14); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0008F08A(); return; /* tail jmp 0x0008F08A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0008F2B0
 * Original: 0x0008F2B0 - 0x0008F385 (213 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0008F2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C4;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(0x7FA21C); /* divss */
    xmm0 = MEMF(0x648F78); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0 = xmm0 / xmm1; /* divss */
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = 0; /* xor self */
    MEM32(esp + 0x5C) = edi;
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0008EC40(); /* call 0x0008EC40 */

loc_0008F2FB: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ebx = esi + eax;
    eax = MEM32(ebx + 0x68);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x58 - flags set for next jcc */
    eax = MEM32(ebx + 0x650);
    SET_LO8(ecx, (CMP_EQ(eax, 0x58)) ? 1 : 0); /* sete */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x6C) = ebx;
    ecx = ecx + 4;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(eax, edi)) goto loc_0008F36F; /* jne: not equal / not zero */

loc_0008F330: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_EQ(eax, edi)) goto loc_0008F342; /* je: equal / zero */

loc_0008F33A: ;
    if (CMP_NE(MEM32(eax + 0x200), edi)) goto loc_0008F36F; /* jne: not equal / not zero */

loc_0008F342: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0008EA30(); /* call 0x0008EA30 */

loc_0008F348: ;
    eax = MEM32(ebx + 0x568);
    esp = esp + 4;
    if (CMP_NE(eax, edi)) goto loc_0008F363; /* jne: not equal / not zero */

loc_0008F355: ;
    edx = MEM32(ebx + 0x650);
    MEM32(edx + 0x90) = edi;
    goto loc_0008F36F;

loc_0008F363: ;
    eax = MEM32(eax + 0x200);
    MEM32(eax + 0x90) = edi;

loc_0008F36F: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_NE(eax, edi)) { sub_0008F385(); return; } /* jne: not equal / not zero */

loc_0008F379: ;
    edi = MEM32(ebx + 0x650);
    MEM32(esp + 0x18) = edi;
    g_seh_ebp = ebp; sub_0008F391(); return; /* tail jmp 0x0008F391 */

}

/**
 * sub_00090FB0
 * Original: 0x00090FB0 - 0x00091037 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00090FB0: ;
    ecx = MEM32(0x84EC04);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84EC00);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ecx)) goto loc_00090FD8; /* je: equal / zero */

loc_00090FC7: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_00090FD4; /* je: equal / zero */

loc_00090FCB: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_00090FC7; /* jne: not equal / not zero */

loc_00090FD2: ;
    goto loc_00090FD8;

loc_00090FD4: ;
    if (CMP_NE(eax, ecx)) { sub_00091037(); return; } /* jne: not equal / not zero */

loc_00090FD8: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_00091320(); /* call 0x00091320 */

loc_00090FDF: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_00091018; /* je: equal / zero */

loc_00090FE8: ;
    ecx = MEM32(0x75DBC8);
    edi = MEM32(0x84A5F8);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ecx);
    edx = edx + edi;
    PUSH32(esp, 0x5F0D80);
    PUSH32(esp, edx);
    edx = 4;
    ecx = 6;
    edi = eax;
    PUSH32(esp, 0); sub_00091FE0(); /* call 0x00091FE0 */

loc_00091016: ;
    goto loc_0009101A;

loc_00091018: ;
    eax = 0; /* xor self */

loc_0009101A: ;
    MEM32(esp + 0x18) = esi;
    edx = esp + 0x18;
    esi = 0x84EBFC;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_00091030: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000911A0
 * Original: 0x000911A0 - 0x00091236 (150 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000911A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000911A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84EC04);
    PUSH32(esp, esi);
    esi = MEM32(0x84EC00);
    if (CMP_EQ(esi, ecx)) goto loc_00091233; /* je: equal / zero */

loc_000911B6: ;
    if (CMP_EQ(MEM32(esi), eax)) goto loc_000911C4; /* je: equal / zero */

loc_000911BA: ;
    esi = esi + 8;
    if (CMP_NE(esi, ecx)) goto loc_000911B6; /* jne: not equal / not zero */

loc_000911C1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000911C4: ;
    if (CMP_EQ(esi, ecx)) goto loc_00091233; /* je: equal / zero */

loc_000911C8: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_Z(edi, edi)) goto loc_00091202; /* je: equal / zero */

loc_000911D0: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_000911DC; /* je: equal / zero */

loc_000911D6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000911DC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_000911E5: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(edi) = 0;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000911F9: ;
    ecx = MEM32(0x84EC04);
    esp = esp + 8;

loc_00091202: ;
    eax = esi + 8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = ecx;
    POP32(esp, edi);
    if (CMP_EQ(eax, ecx)) goto loc_0009122A; /* je: equal / zero */

loc_0009120C: ;
    ecx = eax + -8;
    /* nop */

loc_00091210: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    eax = eax + 8;
    ecx = ecx + 8;
    if (CMP_NE(eax, edx)) goto loc_00091210; /* jne: not equal / not zero */

loc_00091224: ;
    ecx = MEM32(0x84EC04);

loc_0009122A: ;
    ecx = ecx - 8;
    MEM32(0x84EC04) = ecx;

loc_00091233: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00091240
 * Original: 0x00091240 - 0x0009126B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091240: ;
    eax = MEM32(0x84EC00);
    ecx = MEM32(0x84EC04);
    if (CMP_EQ(eax, ecx)) goto loc_0009126A; /* je: equal / zero */

loc_0009124F: ;
    edx = ZX16(MEM16(edx + 0x60));

loc_00091253: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_0009125F; /* je: equal / zero */

loc_00091257: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_00091253; /* jne: not equal / not zero */

loc_0009125E: ;
    esp += 4; return; /* ret */

loc_0009125F: ;
    if (CMP_EQ(eax, ecx)) goto loc_0009126A; /* je: equal / zero */

loc_00091263: ;
    eax = MEM32(eax + 4);
    MEM8(eax + 0x10) = 1;

loc_0009126A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091270
 * Original: 0x00091270 - 0x000912F4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091270: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000912F4(); return; } /* je: equal / zero */

loc_0009128B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0009129F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000912D4; /* je: equal / zero */

loc_000912AA: ;
    ecx = 0x75DBAC;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000912B4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000912D1: ;
    esp = esp + 0x14;

loc_000912D4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000912ED: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00091320
 * Original: 0x00091320 - 0x000913A4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091320: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000913A4(); return; } /* je: equal / zero */

loc_0009133B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0009134F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00091384; /* je: equal / zero */

loc_0009135A: ;
    ecx = 0x75DB90;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00091364: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00091381: ;
    esp = esp + 0x14;

loc_00091384: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0009139D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000913D0
 * Original: 0x000913D0 - 0x00091423 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000913D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000913D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F260);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_00091400: ;
    if (CMP_EQ(ecx, edx)) { sub_00091423(); return; } /* je: equal / zero */

loc_00091404: ;
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_00091415; /* je: equal / zero */

loc_0009140B: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;

loc_00091415: ;
    eax = eax + 8;
    MEM32(ebp + 0xC) = eax;
    ecx = ecx + 8;
    MEM32(ebp + 8) = ecx;
    goto loc_00091400;

}

/**
 * sub_00091450
 * Original: 0x00091450 - 0x0009147D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091450: ;
    MEM32(esi) = 0x5F0DCC;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0x1B0);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_00091EA0(); /* call 0x00091EA0 */

loc_00091466: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0009147D(); return; } /* je: equal / zero */

loc_0009146D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000979F0(); /* call 0x000979F0 */

loc_00091477: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00091490
 * Original: 0x00091490 - 0x00091583 (243 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00091490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 8) = eax;
    esi = eax + 2;
    eax++;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx) = 0x5F0DCC;
    MEM8(ebx + 0xC) = 0;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x1B0);
    if (TEST_NZ(edi, edi)) goto loc_000914F8; /* jne: not equal / not zero */

loc_000914C2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00091EA0(); /* call 0x00091EA0 */

loc_000914DA: ;
    esi = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00091534; /* je: equal / zero */

loc_000914E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ebx = 8;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00097920(); /* call 0x00097920 */

loc_000914F3: ;
    ebx = MEM32(ebp + 8);
    goto loc_00091534;

loc_000914F8: ;
    xmm0 = MEMF(edi + 0x260); /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00091EA0(); /* call 0x00091EA0 */

loc_00091510: ;
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) goto loc_00091532; /* je: equal / zero */

loc_00091519: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    eax = esi;
    PUSH32(esp, edi);
    ebx = 8;
    esi = edx;
    PUSH32(esp, 0); sub_00097920(); /* call 0x00097920 */

loc_0009152D: ;
    ebx = MEM32(ebp + 8);
    goto loc_00091534;

loc_00091532: ;
    eax = 0; /* xor self */

loc_00091534: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebx + 4) = eax;
    ecx = MEM32(edi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(eax + 4);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0009156F: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00091583(); return; } /* je: equal / zero */

loc_00091576: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) { sub_00091583(); return; } /* je: equal / zero */

loc_0009157E: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00091585(); return; /* tail jmp 0x00091585 */

}

/**
 * sub_00091BE0
 * Original: 0x00091BE0 - 0x00091C1E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091BE0(void)
{

loc_00091BE0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002D0C90(); /* call 0x002D0C90 */

loc_00091C02: ;
    MEM8(esi + 0xC8) = 1;
    ebx = MEM32(ebx + 4);
    eax = MEM32(ebx + 4);
    esp = esp + 0x10;
    POP32(esp, edi);
    eax = eax | 2;
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091C20
 * Original: 0x00091C20 - 0x00091CCB (171 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091C20(void)
{
    float xmm0;

loc_00091C20: ;
    esp = esp - 0x24;
    xmm0 = MEMF(0x648D14); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00091C7C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = 0x11;
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00091C8A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00091C98: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = 0x11;
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00091CA6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00091CB4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = 0x11;
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00091CC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091CD0
 * Original: 0x00091CD0 - 0x00091D14 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091CD0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00091D10; /* jle: less or equal (signed <=) */

loc_00091CDA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    PUSH32(esp, edi);

loc_00091CE3: ;
    edi = MEM32(ecx + 4);
    edi = MEM32(edi + 0x10);
    edi = edi + edx + 0x44;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(edi + 8) = ebx;
    edi = MEM32(ecx + 8);
    esi++;
    eax = eax + 0xC;
    edx = edx + 0x28;
    if (CMP_L(esi, edi)) goto loc_00091CE3; /* jl: less (signed <) */

loc_00091D0D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00091D10: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091D20
 * Original: 0x00091D20 - 0x00091E12 (242 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091D20: ;
    esp = esp - 8;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(eax, edi)) goto loc_00091E0B; /* jle: less or equal (signed <=) */

loc_00091D35: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = edi;
    goto loc_00091D50;

loc_00091D46: ;
    ecx = MEM32(esp + 0x14);
    /* nop */

loc_00091D50: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx + edi * 4); /* movss */
    edx = MEM32(eax + 0xC0);
    ecx = MEM32(0x7F9F60);
    edx++;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_EQ(edx, ecx)) goto loc_00091D81; /* je: equal / zero */

loc_00091D73: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_00091D81: ;
    esi = MEM32(eax + 0x1C);
    esi = esi + MEM32(esp + 0x10);
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00091DCD; /* jnp: not parity */

loc_00091D95: ;
    if (TEST_Z(MEM8(esi + 0xC), 1)) goto loc_00091DB3; /* je: equal / zero */

loc_00091D9B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00093350(); /* call 0x00093350 */

loc_00091DB1: ;
    goto loc_00091DCA;

loc_00091DB3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, 0x3C23D70A);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000934A0(); /* call 0x000934A0 */

loc_00091DCA: ;
    esp = esp + 0xC;

loc_00091DCD: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000938D0(); /* call 0x000938D0 */

loc_00091DEA: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x10;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 8);
    esp = esp + 0x18;
    edi++;
    ebp = ebp + 0xC;
    ebx = ebx + 0x40;
    if (CMP_L(edi, ecx)) goto loc_00091D46; /* jl: less (signed <) */

loc_00091E08: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00091E0B: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00091E20
 * Original: 0x00091E20 - 0x00091E30 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091E20(void)
{

loc_00091E20: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00091E2D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091E50
 * Original: 0x00091E50 - 0x00091E5D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091E50(void)
{

loc_00091E50: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091E60
 * Original: 0x00091E60 - 0x00091E65 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091E60(void)
{

loc_00091E60: ;
    MEM8(ecx + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00091E70
 * Original: 0x00091E70 - 0x00091E98 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091E70(void)
{

loc_00091E70: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x10);
    ecx = eax + edx * 8 + 0x1C;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091EA0
 * Original: 0x00091EA0 - 0x00091F24 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091EA0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00091F24(); return; } /* je: equal / zero */

loc_00091EBB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00091ECF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00091F04; /* je: equal / zero */

loc_00091EDA: ;
    ecx = 0x75DBD0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00091EE4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00091F01: ;
    esp = esp + 0x14;

loc_00091F04: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00091F1D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00091F50
 * Original: 0x00091F50 - 0x00091FD1 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00091F50: ;
    esp = esp - 0x184;
    SET_LO8(eax, MEM8(esp + 0x18C));
    SET_LO8(eax, LO8(eax) + 0x61);
    PUSH32(esp, esi);
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0xA);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx++;
    PUSH32(esp, ecx);
    MEM8(esp + 0x11) = 0;
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_00091F77: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x7F);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    MEM8(esp + 0x93) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00091F96: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esp + 0x8C;
    esi = esp + 0x10C;
    PUSH32(esp, 0); sub_00093190(); /* call 0x00093190 */

loc_00091FAE: ;
    edx = MEM32(esp + 0x190);
    esp = esp + 4;
    POP32(esp, esi);
    /* nop */

loc_00091FC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00091FC0; /* jne: not equal / not zero */

loc_00091FCA: ;
    esp = esp + 0x184;
    esp += 4; return; /* ret */

}

/**
 * sub_00091FE0
 * Original: 0x00091FE0 - 0x00092039 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00091FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    eax = 0x1908;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00091FF0: ;
    eax = edx + 1;
    ecx++;
    MEM32(edi + 0xC) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B0);
    MEM8(edi + 0x10) = 0;
    MEM32(edi + 8) = ecx;
    esi = eax + edx * 2;
    PUSH32(esp, 0); sub_00091EA0(); /* call 0x00091EA0 */

loc_00092010: ;
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) { sub_00092039(); return; } /* je: equal / zero */

loc_00092019: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(ebp + 8);
    ebx = eax + eax * 2;
    eax = esi + esi * 2;
    eax = eax << 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = 1;
    esi = edx;
    PUSH32(esp, 0); sub_00097920(); /* call 0x00097920 */

loc_00092037: ;
    g_seh_ebp = ebp; sub_0009203B(); return; /* tail jmp 0x0009203B */

}

/**
 * sub_00092BA0
 * Original: 0x00092BA0 - 0x00092C22 (130 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00092BA0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00092BEB; /* je: equal / zero */

loc_00092BA8: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) | 0x40;
    esi = MEM32(eax);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 0xC4);
    ecx = ecx | 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00092C1F; /* jne: not equal / not zero */

loc_00092BC1: ;
    PUSH32(esp, 0x2840);
    PUSH32(esp, 0); sub_00098DA0(); /* call 0x00098DA0 */

loc_00092BCB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00092BE0; /* je: equal / zero */

loc_00092BD2: ;
    PUSH32(esp, 0); sub_00099380(); /* call 0x00099380 */

loc_00092BD7: ;
    MEM32(esi + 0xC4) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00092BE0: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xC4) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00092BEB: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0xFFFFFFBFu;
    esi = MEM32(eax);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0xC4);
    edx = edx & 0xFFFFFFFBu;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = edx;
    if (TEST_Z(eax, eax)) goto loc_00092C1F; /* je: equal / zero */

loc_00092C04: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00092C12: ;
    esp = esp + 4;
    MEM32(esi + 0xC4) = 0;

loc_00092C1F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00092C30
 * Original: 0x00092C30 - 0x00092CE5 (181 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092C30(void)
{
    float xmm0, xmm1, xmm2;

loc_00092C30: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_001C2700(); /* call 0x001C2700 */

loc_00092C3D: ;
    ecx = MEM32(eax);
    xmm0 = MEMF(0x64908C); /* movss */
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    edx = ecx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x10);
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = eax + 0xCC;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    esi = MEM32(edi);
    PUSH32(esp, 0); sub_000982E0(); /* call 0x000982E0 */

loc_00092CD0: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x2C);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00092CDE: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092CF0
 * Original: 0x00092CF0 - 0x00093190 (1184 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092CF0: ;
    esp = esp - 0x74;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x7C);
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ecx + 0x3C8);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, edx)) goto loc_00093189; /* je: equal / zero */

loc_00092D12: ;
    eax = MEM32(ebp + 0xC);
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_00093189; /* jle: less or equal (signed <=) */

loc_00092D22: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + -1;
    goto loc_00092D30;

    /* nop */

loc_00092D30: ;
    edx++;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = 1;
    if (CMP_LE(esi, 1)) goto loc_00093170; /* jle: less or equal (signed <=) */

loc_00092D46: ;
    eax = esp + 0x48;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x60;
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x6C;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x54;
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x48;
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x78;
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x48;
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x78;
    edi = edx + edx * 4;
    MEM32(esp + 0x44) = eax;
    eax = esp + 0x54;
    edi = edi << 3;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x10) = edi;
    goto loc_00092DA0;

loc_00092D9A: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_00092DA0: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax + edx * 4);
    eax = MEM32(ebp);
    ebx = MEM32(esp + 0x20);
    esi = esi << 6;
    esi = esi + ebx;
    ebx = MEM32(eax + 0x10);
    edi = ebx + edi + 0x1C;
    ebx = MEM32(edi);
    MEM32(esp + 0x48) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x4C) = ebx;
    edi = MEM32(edi + 8);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(eax + 0x10);
    edi = edi + ebx + 0x44;
    ebx = MEM32(edi);
    MEM32(esp + 0x54) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x58) = ebx;
    edi = MEM32(edi + 8);
    ecx = ecx + edx;
    MEM32(esp + 0x5C) = edi;
    edx = MEM32(eax + 0x10);
    ecx = ecx + ecx * 4;
    eax = edx + ecx * 8 + 0x1C;
    ecx = MEM32(eax);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x64) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x68) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x6C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00092E3E: ;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x34);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edi = ebx;
    PUSH32(esp, 0); sub_003E32F0(); /* call 0x003E32F0 */

loc_00092E9D: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 0x38);
    xmm0 = MEMF(eax + 0x260); /* movss */
    xmm1 = MEMF(eax + 0x264); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esi); /* mulss */
    MEMF(esi) = xmm3; /* movss */
    xmm3 = MEMF(esi + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esi + 4) = xmm3; /* movss */
    xmm3 = MEMF(esi + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esi + 8) = xmm3; /* movss */
    xmm3 = MEMF(esi + 0xC); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x14); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x18); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x1C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp + 8;
    MEMF(esi + 0xC) = xmm3; /* movss */
    MEMF(esi + 0x1C) = xmm2; /* movss */
    MEMF(esi + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2C) = xmm1; /* movss */
    ecx = MEM32(ebp);
    ecx = MEM32(ecx + 0x38);
    eax = ZX8(MEM8(ecx + 0x3A8));
    edi = MEM32(ecx + eax * 4 + 0x4EC);
    edx = MEM32(ebp + 4);
    ebx = MEM32(ecx + 0x3C8);
    esi = MEM32(esp + 0x14);
    edx = MEM32(edx + esi * 4);
    xmm3 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(esp + 0x50); /* movss */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    eax = edx;
    ecx = edx + edx * 8;
    edx = MEM32(edi + 0x34);
    xmm2 = MEMF(edx + ecx * 4 + 0x14); /* movss */
    xmm0 = MEMF(edx + ecx * 4 + 0xC); /* movss */
    xmm7 = MEMF(edx + ecx * 4 + 0x10); /* movss */
    ecx = edx + ecx * 4;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    eax = eax << 6;
    eax = eax + ebx;
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = MEMF(eax + 0x20); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * MEMF(eax); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(eax + 0x14); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * MEMF(eax + 0x24); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(eax + 8); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * MEMF(eax + 0x18); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(eax + 0x2C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    edi = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    esi++;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 8);
    edi = edi + 0x28;
    MEM32(esp + 0x14) = esi;
    edx = MEM32(esp + 0x14);
    eax++;
    esi = ecx + -1;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, esi)) goto loc_00092D9A; /* jl: less (signed <) */

loc_00093170: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(ebp + 0xC);
    edx++;
    eax++;
    edi--;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, edi)) goto loc_00092D30; /* jl: less (signed <) */

loc_00093186: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00093189: ;
    POP32(esp, ebp);
    esp = esp + 0x74;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093190
 * Original: 0x00093190 - 0x000931D3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00093190: ;
    edx = esp + -128;
    esp = esp - 0x80;
    edx = edx - eax;
    /* nop */

loc_000931A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000931A0; /* jne: not equal / not zero */

loc_000931AA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x88);
    PUSH32(esp, edi);
    edi = esp + 8;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_000931BC: ;
    POP32(esp, edi);
    edx = esi;
    POP32(esp, ebx);

loc_000931C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000931C0; /* jne: not equal / not zero */

loc_000931CA: ;
    eax = esi;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_000931E0
 * Original: 0x000931E0 - 0x00093350 (368 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000931E0(void)
{
    float xmm0, xmm1;

loc_000931E0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, edi);
    edi = eax + 0x1C;
    MEM32(esp + 0x1C) = ecx;
    edx = edi;
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    esi = eax + 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(ecx + 8) = edx;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = esi;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x649760); /* movss */
    edx = esp + 0x14;
    eax = edx;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
    edx = ecx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x14;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00093350
 * Original: 0x00093350 - 0x000933D0 (128 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093350: ;
    esp = esp - 0x18;
    eax = esp + 0xC;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
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
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000933D0(); return; } /* jbe: below or equal (unsigned <=) */

loc_000933C1: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    g_seh_ebp = ebp; sub_000933F8(); return; /* tail jmp 0x000933F8 */

}

/**
 * sub_000934A0
 * Original: 0x000934A0 - 0x000935CC (300 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000934A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000934A0: ;
    esp = esp - 0x14;
    eax = esp + 8;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
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
    xmm1 = MEMF(esp + 4); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm0 = 0.0f; /* xorps self = zero */
    if ((xmm1 > xmm2)) goto loc_000935C8; /* ja: above (unsigned >) */

loc_0009351B: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0009352B; /* jbe: below or equal (unsigned <=) */

loc_00093520: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0009352B: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = esp + 8;
    eax = edx;
    MEMF(esp) = xmm0; /* movss */
    MEM32(esp + 4) = edx;
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 8;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000935C8: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000935D0
 * Original: 0x000935D0 - 0x000938C4 (756 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000935D0(void)
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

loc_000935D0: ;
    esp = esp - 0x30;
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0009360E: ;
    ecx = esp + 0xC;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00093648: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    POP32(esp, ebx);
    if ((xmm1 > xmm0)) goto loc_00093695; /* ja: above (unsigned >) */

loc_00093688: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0009369A; /* jbe: below or equal (unsigned <=) */

loc_00093695: ;
    MEMF(esp) = xmm1; /* movss */

loc_0009369A: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, 0); sub_00470F54(); /* call 0x00470F54 */

loc_000936A2: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000938C0; /* jbe: below or equal (unsigned <=) */

loc_000936BE: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_003E4CA0(); /* call 0x003E4CA0 */

loc_000936D0: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 / MEMF(esp + 4); /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    ecx = eax;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E4ED0(); /* call 0x003E4ED0 */

loc_000936F4: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    MEMF(esp + 4) = xmm5; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x14); /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm7 = MEMF(esp + 0x44); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x10); /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0xC); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 4); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x44); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 8); /* movss */
    esp = esp + 4;
    xmm7 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm4 = xmm4 * MEMF(esp); /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    eax = esp + 8;
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm7 = xmm7 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    ecx = eax;
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    MEM32(esp + 0x40) = ecx;
    xmm0 = MEMF(esp); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000938C0: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000938D0
 * Original: 0x000938D0 - 0x00093BE0 (784 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000938D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000938D0: ;
    esp = esp - 0x38;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(eax, eax)) goto loc_0009393B; /* je: equal / zero */

loc_000938F3: ;
    ecx = esp + 0x10;
    MEM32(esp) = ecx;
    eax = MEM32(esp + 0x40);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x3C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */

loc_0009393B: ;
    edx = esp + 4;
    MEM32(esp + 0x3C) = edx;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 4;
    MEM32(esp + 0x3C) = eax;
    edx = MEM32(esp + 0x3C);
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
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00093BDC; /* jnp: not parity */

loc_000939B1: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(esp + 0x3C);
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
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00093BDC; /* jnp: not parity */

loc_000939F5: ;
    eax = esp + 4;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00093A01: ;
    eax = esp + 0x14;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00093A0C: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    edx = ebx;
    PUSH32(esp, 0); sub_003E4CA0(); /* call 0x003E4CA0 */

loc_00093A1C: ;
    eax = MEM32(esp + 0x54);
    ecx = esp + 0x30;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_003E4ED0(); /* call 0x003E4ED0 */

loc_00093A2C: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm7; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x40); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm7; /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x10); /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x48); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    esp = esp + 8;
    xmm7 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x44); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    ecx = esp + 0x20;
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    edx = ecx;
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x40) = edx;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    MEM32(esp + 0x40) = eax;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, ebx);

loc_00093BDC: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00093BE0
 * Original: 0x00093BE0 - 0x00093C54 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093BE0(void)
{
    float xmm0, xmm1;

loc_00093BE0: ;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00091490(); /* call 0x00091490 */

loc_00093C02: ;
    eax = MEM32(esi + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F5C); /* movss */
    MEM32(esi) = 0x5F0DF0;
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFFFFFFF7u;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFFFFFFDFu;
    eax = MEM32(esi + 4);
    eax = eax + 0xCC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    MEMF(esp + 0x18) = xmm1; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = esi;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00093C60
 * Original: 0x00093C60 - 0x00093D1A (186 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093C60(void)
{
    float xmm0, xmm1, xmm2;

loc_00093C60: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    edi = ecx;
    PUSH32(esp, 0); sub_001C2700(); /* call 0x001C2700 */

loc_00093C70: ;
    ecx = MEM32(eax);
    xmm0 = MEMF(0x64908C); /* movss */
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    edx = ecx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = eax + 0xCC;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    esi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_000982E0(); /* call 0x000982E0 */

loc_00093D05: ;
    edx = MEM32(edi + 4);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00098380(); /* call 0x00098380 */

loc_00093D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093D20
 * Original: 0x00093D20 - 0x00093E45 (293 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00093D20: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = esp + 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = ecx;
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648CF8))) { sub_00093E45(); return; } /* jbe: below or equal (unsigned <=) */

loc_00093DA4: ;
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    edx = ecx;
    eax = ecx;
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(ebx) = xmm2; /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00093E80
 * Original: 0x00093E80 - 0x00093F1B (155 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093E80(void)
{

loc_00093E80: ;
    eax = 0; /* xor self */
    MEM32(0x770F28) = eax;
    MEM32(0x770F2C) = eax;
    MEM32(0x770F30) = eax;
    MEM32(0x770F34) = eax;
    MEM32(0x770F38) = eax;
    MEM32(0x770F3C) = eax;
    MEM32(0x770F40) = eax;
    MEM32(0x770F44) = eax;
    MEM32(0x770F48) = eax;
    MEM32(0x770F4C) = eax;
    MEM32(0x770F50) = eax;
    MEM32(0x770F54) = eax;
    MEM32(0x770F58) = eax;
    MEM32(0x770F5C) = eax;
    MEM32(0x770F60) = eax;
    MEM32(0x770F64) = eax;
    MEM32(0x770F68) = eax;
    MEM32(0x770F6C) = eax;
    MEM32(0x770F70) = eax;
    MEM32(0x770F74) = eax;
    MEM32(0x770F78) = eax;
    MEM32(0x770F7C) = eax;
    MEM32(0x770F80) = eax;
    MEM32(0x770F84) = eax;
    MEM32(0x770F88) = eax;
    MEM32(0x770F8C) = eax;
    MEM32(0x770F90) = eax;
    MEM32(0x770F94) = eax;
    MEM32(0x770F98) = eax;
    MEM8(0x84721C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00093F20
 * Original: 0x00093F20 - 0x00093F33 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093F20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00093F33(); return; } /* je: equal / zero */

loc_00093F2F: ;
    ebp = MEM32(eax);
    g_seh_ebp = ebp; sub_00093F35(); return; /* tail jmp 0x00093F35 */

}

/**
 * sub_00093FE0
 * Original: 0x00093FE0 - 0x000940BA (218 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093FE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A19C);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(edi) = 0x5F0E14;
    MEM8(edi + 0x3C) = LO8(ebx);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = ebx;
    MEM32(edi + 0x30) = ebx;
    MEM8(edi + 0x3D) = LO8(ebx);
    MEM32(edi + 0x34) = ebx;
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEM8(edi + 0x44) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_00094036; /* jne: not equal / not zero */

loc_00094031: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00094036: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00094087; /* je: equal / zero */

loc_0009405D: ;
    if (CMP_B(MEM32(esi + 0x80), 0x31D0)) goto loc_00094087; /* jb: below (unsigned <) */

loc_00094069: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00094073: ;
    PUSH32(esp, 0x31D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0009407E: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_000940AD; /* jne: not equal / not zero */

loc_00094087: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00094099: ;
    PUSH32(esp, 0x31D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000940A4: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) { sub_000940BA(); return; } /* je: equal / zero */

loc_000940AD: ;
    eax = esi + 0x990;
    PUSH32(esp, 0); sub_00099380(); /* call 0x00099380 */

loc_000940B8: ;
    g_seh_ebp = ebp; sub_000940BC(); return; /* tail jmp 0x000940BC */

}

/**
 * sub_000942D0
 * Original: 0x000942D0 - 0x000942FA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000942D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000942D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00094300(); /* call 0x00094300 */

loc_000942D8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000942F4; /* je: equal / zero */

loc_000942DF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000942F4; /* je: equal / zero */

loc_000942E7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000942F1: ;
    esp = esp + 4;

loc_000942F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094300
 * Original: 0x00094300 - 0x00094434 (308 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00094300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi) = 0x5F0E14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000943F9; /* je: equal / zero */

loc_00094315: ;
    ecx = MEM32(esi + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x28;
    if (TEST_Z(ecx, ecx)) goto loc_00094328; /* je: equal / zero */

loc_0009431F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094325: ;
    esp = esp + 4;

loc_00094328: ;
    ecx = MEM32(esi + 0x2C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x2C;
    if (TEST_Z(ecx, ecx)) goto loc_0009433B; /* je: equal / zero */

loc_00094332: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094338: ;
    esp = esp + 4;

loc_0009433B: ;
    ecx = MEM32(esi + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x30;
    if (TEST_Z(ecx, ecx)) goto loc_0009434E; /* je: equal / zero */

loc_00094345: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009434B: ;
    esp = esp + 4;

loc_0009434E: ;
    ecx = MEM32(esi + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 8;
    if (TEST_Z(ecx, ecx)) goto loc_00094361; /* je: equal / zero */

loc_00094358: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009435E: ;
    esp = esp + 4;

loc_00094361: ;
    ecx = MEM32(esi + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_00094374; /* je: equal / zero */

loc_0009436B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094371: ;
    esp = esp + 4;

loc_00094374: ;
    ecx = MEM32(esi + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00094387; /* je: equal / zero */

loc_0009437E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094384: ;
    esp = esp + 4;

loc_00094387: ;
    ecx = MEM32(esi + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x14;
    if (TEST_Z(ecx, ecx)) goto loc_0009439A; /* je: equal / zero */

loc_00094391: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094397: ;
    esp = esp + 4;

loc_0009439A: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x18;
    if (TEST_Z(ecx, ecx)) goto loc_000943AD; /* je: equal / zero */

loc_000943A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000943AA: ;
    esp = esp + 4;

loc_000943AD: ;
    ecx = MEM32(esi + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x1C;
    if (TEST_Z(ecx, ecx)) goto loc_000943C0; /* je: equal / zero */

loc_000943B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000943BD: ;
    esp = esp + 4;

loc_000943C0: ;
    ecx = MEM32(esi + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x20;
    if (TEST_Z(ecx, ecx)) goto loc_000943D3; /* je: equal / zero */

loc_000943CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000943D0: ;
    esp = esp + 4;

loc_000943D3: ;
    ecx = MEM32(esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x38;
    if (TEST_Z(ecx, ecx)) goto loc_000943E6; /* je: equal / zero */

loc_000943DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000943E3: ;
    esp = esp + 4;

loc_000943E6: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_Z(ecx, ecx)) goto loc_000943F9; /* je: equal / zero */

loc_000943F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000943F6: ;
    esp = esp + 4;

loc_000943F9: ;
    ecx = MEM32(esi + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x34;
    if (TEST_Z(ecx, ecx)) goto loc_0009440C; /* je: equal / zero */

loc_00094403: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094409: ;
    esp = esp + 4;

loc_0009440C: ;
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0009442B; /* je: equal / zero */

loc_00094413: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00094421: ;
    esp = esp + 4;
    MEM32(esi + 0x48) = 0;

loc_0009442B: ;
    MEM32(0x847220) = MEM32(0x847220) - 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00094440
 * Original: 0x00094440 - 0x00094D07 (2247 bytes, 632 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094440: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x649118); /* movss */
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    MEMF(0x770F9C) = xmm0; /* movss */
    MEMF(0x770FA0) = xmm1; /* movss */
    MEMF(0x770FA4) = xmm0; /* movss */
    eax = ZX16(MEM16(ebx + 0x94));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(0x84A19C);
    PUSH32(esp, esi);
    ebx = ebx + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0009448D; /* jne: not equal / not zero */

loc_00094488: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0009448D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000944DB; /* je: equal / zero */

loc_000944B3: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA0)) goto loc_000944DB; /* jb: below (unsigned <) */

loc_000944BF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000944C9: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000944D4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000944FB; /* jne: not equal / not zero */

loc_000944DB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000944ED: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000944F8: ;
    esp = esp + 8;

loc_000944FB: ;
    edi = eax;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0x28;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x84);
    PUSH32(esp, 0x1B4);
    eax = eax << 6;
    PUSH32(esp, 0x5F0F08);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00094524: ;
    MEM32(ebp + 0x28) = eax;
    eax = MEM32(ebp + 0x24);
    esp = esp + 0x10;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00094554; /* jle: less or equal (signed <=) */

loc_00094533: ;
    eax = 0; /* xor self */

loc_00094535: ;
    esi = MEM32(ebx + 0x8C);
    edi = MEM32(ebp + 0x28);
    esi = esi + eax;
    edi = edi + eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x24);
    edx++;
    eax = eax + 0x40;
    if (CMP_L(edx, ecx)) goto loc_00094535; /* jl: less (signed <) */

loc_00094554: ;
    eax = MEM32(ebx + 0x84);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C0);
    ecx = eax + eax * 8;
    ecx = ecx << 2;
    PUSH32(esp, 0x5F0F08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00094572: ;
    MEM32(ebp + 0x30) = eax;
    ecx = MEM32(ebx + 0x84);
    esi = MEM32(ebx + 0x88);
    ecx = ecx + ecx * 8;
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(eax + 0x88) = ecx;
    ebx = MEM32(ebx + 0x84);
    PUSH32(esp, 0x1C5);
    PUSH32(esp, 0x5F0F08);
    ebx = ebx << 6;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000945BE: ;
    ecx = MEM32(ebp + 0x24);
    esi = MEM32(esp + 0x60);
    ecx = ecx << 6;
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    MEM32(ebp + 0x2C) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0x2C);
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0); sub_003CD5A0(); /* call 0x003CD5A0 */

loc_000945EB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003CF4D0(); /* call 0x003CF4D0 */

loc_000945F2: ;
    esp = esp + 0x24;
    edi = esi;
    PUSH32(esp, 0); sub_003CF2C0(); /* call 0x003CF2C0 */

loc_000945FC: ;
    ebx = 0; /* xor self */
    MEM32(esi + 0xA0) = ebx;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ebp + 0x28);
    MEM32(ecx + 0x8C) = edx;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(ebp + 0x2C);
    MEM32(eax + 0x90) = ecx;
    eax = MEM32(esp + 0x44);
    edx = MEM32(ebp + 0x38);
    MEM32(edx + 0x80) = eax;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00094636; /* jne: not equal / not zero */

loc_00094631: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00094636: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0009467E; /* je: equal / zero */

loc_0009465C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0009467E; /* jb: below (unsigned <) */

loc_00094665: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0009466F: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00094677: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0009469B; /* jne: not equal / not zero */

loc_0009467E: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00094690: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00094698: ;
    esp = esp + 8;

loc_0009469B: ;
    ecx = MEM32(ebp + 0x38);
    MEM32(ebp + 4) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 0x18) = 0;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x44) = ebx;
    ecx = MEM32(ebp + 0x38);
    esi = MEM32(ecx + 0x84);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1DB);
    PUSH32(esp, 0x5F0F08);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000946E0: ;
    edi = MEM32(ebp + 4);
    ecx = eax;
    eax = 0x86186187u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = esi - edx;
    esi = esi >> 1;
    esi = esi + edx;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = esi >> 5;
    PUSH32(esp, 0x1E0);
    MEM32(ebp + 8) = ecx;
    edx = esi + esi * 4;
    eax = ecx + edx * 8;
    PUSH32(esp, 0x5F0F08);
    MEM32(edi + 8) = ecx;
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x640);
    MEM32(edi + 0x40) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0009471D: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1E5);
    ecx = ecx + 4;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0x5F0F08);
    PUSH32(esp, 0x4B0);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = 0x64;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00094749: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EA);
    PUSH32(esp, 0x5F0F08);
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x190);
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00094768: ;
    edx = MEM32(ebp + 4);
    esp = esp + 0x40;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EF);
    PUSH32(esp, 0x5F0F08);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0xFA0);
    MEM32(edx + 0x28) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0009478A: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x5F0F08);
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0x120);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000947A9: ;
    edx = MEM32(ebp + 4);
    MEM32(ebp + 0x1C) = eax;
    MEM32(edx + 0x38) = eax;
    edi = MEM32(ebp + 0x38);
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_003F8530(); /* call 0x003F8530 */

loc_000947BD: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + 0x84);
    edx = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0009492B; /* jle: less or equal (signed <=) */

loc_000947D0: ;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x40) = ebx;
    goto loc_000947E0;

    /* nop */

loc_000947E0: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x1C);
    edi = MEM32(eax + 0x40);
    MEM16(edi + ecx * 2) = LO16(edx);
    edi = MEM32(eax);
    ecx = ZX16(LO16(edx));
    ecx = ecx << 6;
    ecx = ecx + MEM32(edi + 0x8C);
    edi = MEM32(eax + 8);
    xmm0 = MEMF(ecx + 0x30); /* movss */
    xmm1 = MEMF(ecx + 0x34); /* movss */
    xmm2 = MEMF(ecx + 0x38); /* movss */
    ecx = ZX16(MEM16(eax + 0x1C));
    ecx = ecx + ecx * 4;
    MEMF(edi + ecx * 8) = xmm0; /* movss */
    MEMF(edi + ecx * 8 + 4) = xmm1; /* movss */
    MEMF(edi + ecx * 8 + 8) = xmm2; /* movss */
    ecx = edi + ecx * 8;
    ecx = ZX16(MEM16(eax + 0x1C));
    edi = MEM32(eax + 8);
    ecx = ecx + ecx * 4;
    ecx = edi + ecx * 8 + 0xC;
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 4) = xmm1; /* movss */
    MEMF(ecx + 8) = xmm2; /* movss */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + 1;
    eax = MEM32(ebp + 0x38);
    eax = MEM32(eax + 0x88);
    MEM32(esp + 0x44) = ebx;
    esi = edx;
    ecx = ebx;
    goto loc_00094860;

    /* nop */

loc_00094860: ;
    esi = esi + esi * 8;
    esi = ZX16(MEM16(eax + esi * 4 + 0x18));
    ecx++;
    if (CMP_NE(esi, 0xFFFF)) goto loc_00094860; /* jne: not equal / not zero */

loc_00094871: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x44) = ecx;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00094883; /* jge: greater or equal (signed >=) */

loc_0009487D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00094883: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x40);
    MEMF(eax + ecx + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(0x770F9C); /* movss */
    MEMF(eax + ecx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x770FA0); /* movss */
    eax = eax + ecx + 0x18;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x770FA4); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(eax + ecx); /* movss */
    esi = MEM32(ebp + 0x48);
    eax = eax + ecx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    edi = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x38);
    esi = eax + esi + 4;
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x2C);
    MEM32(esi + 4) = edi;
    ecx = ecx + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    edi = MEM32(esp + 0x30);
    eax = eax + 0x54;
    MEM32(esi + 8) = edi;
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebp + 0x38);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ecx + 0x84);
    edx++;
    if (CMP_L(edx, eax)) goto loc_000947E0; /* jl: less (signed <) */

loc_0009492B: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = ecx + ecx * 4;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx + edx * 8 + 0x24) = 4;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 8));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_0009495D: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 5;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0xA));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_0009498F: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 2;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 4));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_000949C1: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 7;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0xE));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_000949F3: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 8;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x10));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094A25: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 6;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0xC));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094A57: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x14;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x28));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094A89: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x17;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x2E));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094ABB: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x18;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x30));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094AED: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0xA;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x14));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094B1F: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 9;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    ecx = esi + ecx * 8;
    edx = ZX16(MEM16(edx + 0x12));
    eax = MEM32(eax);
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094B51: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x15;
    edx = MEM32(eax + 0x34);
    esi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x2A));
    eax = MEM32(eax);
    ecx = esi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094B83: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    esi = 0x16;
    MEM32(edx + ecx * 8 + 0x24) = esi;
    edx = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x2C));
    eax = MEM32(eax);
    ecx = edi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094BB6: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x1C;
    edx = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x38));
    eax = MEM32(eax);
    ecx = edi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094BE8: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 4;
    MEM32(edx + ecx * 8 + 0x24) = 0x1A;
    edx = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x30);
    ecx = edx + edx * 4;
    edx++;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x40);
    edx = ZX16(MEM16(edx + 0x34));
    eax = MEM32(eax);
    ecx = edi + ecx * 8;
    PUSH32(esp, 0); sub_004158D0(); /* call 0x004158D0 */

loc_00094C1A: ;
    ebx = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_00413B50(); /* call 0x00413B50 */

loc_00094C22: ;
    edi = MEM32(ebp + 4);
    ebx = 4;
    eax = MEM32(edi + ebx + 4);
    edi = edi + ebx;
    ecx = eax + 0xA0;
    edx = esp + 0x28;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x28;
    MEM32(esp + 0x40) = eax;
    edx = MEM32(esp + 0x40);
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
    ecx = MEM32(edi + 8);
    ecx = ecx << 4;
    edx = MEM32(edi + 0x10);
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    MEM32(ecx + edx) = 0;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    eax = eax << 4;
    MEM32(eax + ecx + 4) = ebx;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0x10);
    edx = edx << 4;
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    MEMF(edx + eax + 8) = xmm0; /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00094D07(); return; } /* jnp: not parity */

loc_00094CE8: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm4; /* movaps */
    ecx = ecx << 4;
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx + edx + 0xC) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00094D16(); return; /* tail jmp 0x00094D16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000964D0
 * Original: 0x000964D0 - 0x00096887 (951 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000964D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000964D0: ;
    esp = esp - 0x48;
    (void)0; /* cmp MEM16(0x847278), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM16(0x847278), 0)) goto loc_0009650D; /* je: equal / zero */

loc_000964E1: ;
    MEM32(0x7FA09C) = MEM32(0x7FA09C) + 1;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_000964F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00096502: ;
    MEM32(0x7FA0A0) = eax;
    MEM32(0x7FA0A4) = edx;

loc_0009650D: ;
    eax = MEM32(esi + 0x48);
    SET_LO8(ecx, MEM8(eax + 0x990));
    eax = eax + 0x990;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    PUSH32(esp, ebx);
    MEM8(eax) = LO8(ecx);
    MEM32(esp + 0xC) = 0;
    edi = 0x770F28;
    PUSH32(esp, ebp);
    /* nop */

loc_00096530: ;
    xmm0 = MEMF(edi); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000965E9; /* jnp: not parity */

loc_00096545: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    ebp = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(edi); /* movss */
    eax = eax + ebp;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esi + 0x48);
    MEMF(esp + 0x44) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x990));
    xmm0 = MEMF(0x6A7FA0); /* movss */
    eax = eax + 0x990;
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), 1)) goto loc_000965CF; /* jne: not equal / not zero */

loc_0009659B: ;
    ebp = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x40);
    MEM32(esp + 0x50) = ebp;
    ebp = eax + 8;
    MEM32(ebp) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = edx;
    MEMF(esp + 0x54) = xmm0; /* movss */
    edx = MEM32(esp + 0x54);
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM32(ebp + 0xC) = edx;
    MEM8(eax) = LO8(ecx);
    goto loc_000965E9;

loc_000965CF: ;
    ecx = MEM32(esp + 0x14);
    ebx = eax + 0x14;
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00093D20(); /* call 0x00093D20 */

loc_000965E9: ;
    edx = MEM32(esp + 0x10);
    edx = edx + 0x28;
    edi = edi + 4;
    (void)0; /* cmp edi, 0x770F9C - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(edi, 0x770F9C)) goto loc_00096530; /* jl: less (signed <) */

loc_00096603: ;
    edx = MEM32(esi + 0x48);
    edx = edx + 0x990;
    PUSH32(esp, edx);
    MEM32(0x780AB0) = 0x5F0F08;
    MEM32(0x6C0210) = 0x309;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_000993E0(); /* call 0x000993E0 */

loc_00096637: ;
    SET_LO8(eax, MEM8(esi + 0x3D));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    MEM32(0x84B56C) = 3;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009682E; /* jne: not equal / not zero */

loc_0009666A: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009682E; /* jne: not equal / not zero */

loc_00096675: ;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, 0); sub_003F8530(); /* call 0x003F8530 */

loc_0009667D: ;
    eax = MEM32(esi + 0x48);
    xmm0 = MEMF(esi + 0x64); /* movss */
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEMF(0x6A7FA0) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    eax = 4;
    PUSH32(esp, 0); sub_00413FA0(); /* call 0x00413FA0 */

loc_000966A3: ;
    xmm3 = MEMF(0x648D1C); /* movss */
    ecx = esp + 0x40;
    eax = esp + 0x4C;
    MEM32(esp + 0x14) = ecx;
    edx = esp + 0x34;
    ecx = eax;
    esp = esp + 4;
    ebp = 0; /* xor self */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    edi = 0; /* xor self */

loc_000966D0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 8);
    xmm0 = MEMF(eax + edi); /* movss */
    eax = eax + edi;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = MEM32(ecx + 8);
    xmm0 = MEMF(edx + edi + 0xC); /* movss */
    eax = edx + edi + 0xC;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
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
    MEMF(esp + 0x20) = xmm1; /* movss */
    /* comiss xmm3, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm3 > MEMF(esp + 0x20))) goto loc_00096784; /* ja: above (unsigned >) */

loc_00096779: ;
    eax = MEM32(esi + 0x48);
    SET_LO8(ecx, MEM8(eax + ebp + 0x50));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00096785; /* je: equal / zero */

loc_00096784: ;
    ebx++;

loc_00096785: ;
    edi = edi + 0x28;
    ebp = ebp + 0x54;
    if (CMP_L(edi, 0x488)) goto loc_000966D0; /* jl: less (signed <) */

loc_00096797: ;
    if (CMP_NE(ebx, 0x1D)) goto loc_000967A5; /* jne: not equal / not zero */

loc_0009679C: ;
    MEM8(esi + 0x3D) = 1;
    PUSH32(esp, 0); sub_00096890(); /* call 0x00096890 */

loc_000967A5: ;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, 0); sub_003F8430(); /* call 0x003F8430 */

loc_000967AD: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    esi = esi + 0x4C;
    ecx = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x60);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x60);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax); /* movss */
    eax = MEM32(esp + 0x5C);
    MEMF(eax + 0x30) = xmm2; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */

loc_0009682E: ;
    (void)0; /* cmp MEM16(0x847278), 0 - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(MEM16(0x847278), 0)) goto loc_0009687F; /* je: equal / zero */

loc_0009683A: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00096847: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00096855: ;
    edi = MEM32(0x7FA0A0);
    esi = MEM32(0x7FA0A4);
    ecx = MEM32(0x7FA0A8);
    eax = eax - edi;
    edx = edx - esi - _cf; /* sbb */
    ecx = ecx + eax;
    eax = MEM32(0x7FA0AC);
    eax = eax + edx + _cf; /* adc */
    MEM32(0x7FA0A8) = ecx;
    MEM32(0x7FA0AC) = eax;

loc_0009687F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

}
