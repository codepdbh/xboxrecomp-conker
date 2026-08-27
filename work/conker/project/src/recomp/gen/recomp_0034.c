/**
 * Burnout 3 - Recompiled code chunk 34
 * Functions: 250 (0x002F6850 - 0x00306C80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002F6850
 * Original: 0x002F6850 - 0x002F687D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6850(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F6850: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002F687D(); return; } /* jne: not equal / not zero */

loc_002F6859: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) { sub_002F687D(); return; } /* je: equal / zero */

loc_002F6863: ;
    if (CMP_EQ(eax, 0x46)) { sub_002F687D(); return; } /* je: equal / zero */

loc_002F6868: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002F6880
 * Original: 0x002F6880 - 0x002F690F (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F6880: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002F6896; /* jne: not equal / not zero */

loc_002F6891: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002F6896: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002F68DE; /* je: equal / zero */

loc_002F68BC: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_002F68DE; /* jb: below (unsigned <) */

loc_002F68C5: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F68CF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F68D7: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002F68FF; /* jne: not equal / not zero */

loc_002F68DE: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F68F0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F68F8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002F690F(); return; } /* je: equal / zero */

loc_002F68FF: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(0x7FDB94) = eax;
    g_seh_ebp = ebp; sub_002F6915(); return; /* tail jmp 0x002F6915 */

}

/**
 * sub_002F6A60
 * Original: 0x002F6A60 - 0x002F6B2B (203 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F6A60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDB94);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ebp, ecx)) goto loc_002F6AEE; /* je: equal / zero */

loc_002F6A74: ;
    esi = MEM32(0x870F04);
    eax = MEM32(esi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ebp);
    edi = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002F6A8D; /* je: equal / zero */

loc_002F6A87: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_002F6A8D: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_002F6A95: ;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_002F6AAB; /* je: equal / zero */

loc_002F6AA2: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + ecx * 4) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_002F6AAB: ;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x10) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002F6AB8: ;
    if (TEST_NZ(eax, eax)) goto loc_002F6ADF; /* jne: not equal / not zero */

loc_002F6ABC: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002F6ADC: ;
    esp = esp + 4;

loc_002F6ADF: ;
    eax = MEM32(0x7FDB94);
    ecx = MEM32(eax + 8);
    ebp = ebp + 4;
    if (CMP_NE(ebp, ecx)) goto loc_002F6A74; /* jne: not equal / not zero */

loc_002F6AEE: ;
    edi = eax + 4;
    esi = eax;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_002F6B0C; /* je: equal / zero */

loc_002F6AFB: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002F6B09: ;
    esp = esp + 4;

loc_002F6B0C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(edi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002F6B22: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F6B30
 * Original: 0x002F6B30 - 0x002F6C65 (309 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F6B30: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x7FDB90));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F6B71; /* jne: not equal / not zero */

loc_002F6B40: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_00354210(); /* call 0x00354210 */

loc_002F6B47: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002F6B60; /* je: equal / zero */

loc_002F6B4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    esi = eax;
    PUSH32(esp, 0); sub_00355810(); /* call 0x00355810 */

loc_002F6B59: ;
    MEM32(0x870F04) = eax;
    goto loc_002F6B6A;

loc_002F6B60: ;
    MEM32(0x870F04) = 0;

loc_002F6B6A: ;
    MEM8(0x7FDB90) = 1;

loc_002F6B71: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002F6B7F; /* jne: not equal / not zero */

loc_002F6B7A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002F6B7F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_002F6BCA; /* je: equal / zero */

loc_002F6BA6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002F6BCA; /* jb: below (unsigned <) */

loc_002F6BAF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F6BB9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F6BC1: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_002F6BE9; /* jne: not equal / not zero */

loc_002F6BCA: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F6BDC: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F6BE4: ;
    esp = esp + 8;
    esi = eax;

loc_002F6BE9: ;
    ecx = MEM32(edi);
    xmm0 = MEMF(esp + 0x34); /* movss */
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    SET_LO8(edx, MEM8(esp + 0x38));
    MEM32(eax + 8) = ecx;
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x14) = LO8(edx);
    MEM32(esi + 0x10) = 0;
    xmm0 = MEMF(esi + 0xC); /* movss */
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x870F04);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_003560A0(); /* call 0x003560A0 */

loc_002F6C51: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(0x7FDB94);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_NZ(ecx, ecx)) { sub_002F6C65(); return; } /* jne: not equal / not zero */

loc_002F6C61: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F6C6D(); return; /* tail jmp 0x002F6C6D */

}

/**
 * sub_002F6CB0
 * Original: 0x002F6CB0 - 0x002F6D1C (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F6CB0: ;
    esp = esp - 0x28;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    PUSH32(esp, ebx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ebx = esi + 0x78;
    ecx = ebx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1F0);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x14) = xmm1; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x870F04);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_002F6D1C(); return; } /* jne: not equal / not zero */

loc_002F6D15: ;
    edi = 0x870F08;
    g_seh_ebp = ebp; sub_002F6D4C(); return; /* tail jmp 0x002F6D4C */

}

/**
 * sub_002F6EB0
 * Original: 0x002F6EB0 - 0x002F6EE2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F6EB0: ;
    SET_LO8(ecx, MEM8(ecx + 0x135));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002F6EE1; /* je: equal / zero */

loc_002F6EBC: ;
    edx = ZX8(LO8(ecx));
    ecx = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = edx + ecx + -1744;
    ecx = MEM32(edx + 0x64);
    if (CMP_EQ(ecx, 0x35)) goto loc_002F6EDF; /* je: equal / zero */

loc_002F6EDA: ;
    if (CMP_NE(ecx, 0x1E)) goto loc_002F6EE1; /* jne: not equal / not zero */

loc_002F6EDF: ;
    eax = edx;

loc_002F6EE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F6EF0
 * Original: 0x002F6EF0 - 0x002F6F23 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F6EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002F6EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    xmm0 = MEMF(0x648E60); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (1 /* jp after test - parity */) { sub_002F6F23(); return; } /* jp: parity */

loc_002F6F13: ;
    xmm1 = MEMF(esi + 0x6C0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    g_seh_ebp = ebp; sub_002F70D6(); return; /* tail jmp 0x002F70D6 */

}

/**
 * sub_002F70F0
 * Original: 0x002F70F0 - 0x002F7174 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F70F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F70F0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F7174(); return; } /* je: equal / zero */

loc_002F710B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_002F711F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002F7154; /* je: equal / zero */

loc_002F712A: ;
    ecx = 0x75EA64;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_002F7134: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002F7151: ;
    esp = esp + 0x14;

loc_002F7154: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002F716D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_002F71A0
 * Original: 0x002F71A0 - 0x002F730D (365 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F71A0(void)
{
    uint32_t ebp;

loc_002F71A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6E8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_002F71B7: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(0x84A5F8);
    ecx = esi;
    ecx = ecx - edi;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0xC) = eax;
    ecx = ebx;
    ecx = ecx - edi;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(ebx + 0x10B));
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x2D);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM8(esp + 0x24) = LO8(eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x29) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_002F7225: ;
    eax = MEM32(ebp + 8);
    ecx = 0x1B4;
    esi = ebx;
    edi = esp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x1B4;
    esi = eax;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x1B4;
    esi = esp + 0x2C;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x1C);
    esi = ecx;
    MEM8(ebx + 0x236) = LO8(ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    MEM8(ebx + 0x253) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ebx + 0x10B) = LO8(edx);
    ecx = MEM32(0x8470DC);
    MEM8(esp + 0x16) = LO8(edx);
    edx = esi + ecx;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM32(ebx + 0x564) = edx;
    SET_LO8(edx, LO8(ecx));
    MEM8(eax + 0x236) = LO8(ecx);
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax + 0x253) = LO8(ecx);
    ecx = MEM32(eax + 0x258);
    MEM8(eax + 0x10B) = LO8(edx);
    edi = 0; /* xor self */
    MEM32(eax + 0x564) = edi;
    MEM8(esp + 0x17) = LO8(edx);
    edx = MEM32(ebx + 0x258);
    MEM32(eax + 0x258) = edx;
    MEM32(ebx + 0x258) = ecx;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(0x8470DC);
    MEM32(esi + edx + 0x3E4) = ecx;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x2B0) = edi;
    edx = ZX8(MEM8(eax + 0x10B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(ebx + 0x10B));
    PUSH32(esp, 0); sub_0007CB60(); /* call 0x0007CB60 */

loc_002F72F3: ;
    esp = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_002F5CD0(); /* call 0x002F5CD0 */

loc_002F72FD: ;
    esi = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    esi = esi + 0x135;
    g_seh_ebp = ebp; sub_002F7310(); return; /* tail jmp 0x002F7310 */

}

/**
 * sub_002F73A0
 * Original: 0x002F73A0 - 0x002F73F4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F73A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002F73A0: ;
    xmm0 = MEMF(eax + 0x260); /* movss */
    SET_LO16(edx, MEM16(eax + 0x1EE));
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1EC) = LO16(ecx);
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_002F73F4(); return; } /* je: equal / zero */

loc_002F73C5: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_002F73F4(); return; } /* je: equal / zero */

loc_002F73CA: ;
    ecx = SX16(LO16(ecx));
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + 0x1F4) = xmm2; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7410
 * Original: 0x002F7410 - 0x002F7464 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7410(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002F7410: ;
    xmm0 = MEMF(eax + 0x264); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM16(eax + 0x1EE) = LO16(ecx);
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_002F7464(); return; } /* je: equal / zero */

loc_002F742E: ;
    SET_LO16(edx, MEM16(eax + 0x1EC));
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_002F7464(); return; } /* je: equal / zero */

loc_002F743A: ;
    edx = SX16(LO16(edx));
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + 0x1F4) = xmm2; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7480
 * Original: 0x002F7480 - 0x002F75E0 (352 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7480(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002F7480: ;
    (void)0; /* cmp MEM32(ecx + 0x68), 0xFFFF - flags set for next jcc */
    MEMF(ecx + 0x260) = xmm1; /* movss */
    MEMF(ecx + 0x264) = xmm0; /* movss */
    if (CMP_EQ(MEM32(ecx + 0x68), 0xFFFF)) goto loc_002F75DF; /* je: equal / zero */

loc_002F749D: ;
    eax = MEM32(ecx + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(ecx + 0x1DA) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(ecx + 0x1DC) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(ecx + 0x1DE) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = 0.0f; /* xorps self = zero */
    MEM16(ecx + 0x1EC) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(ecx + 0x1EE) = LO16(edx);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1E);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO16(eax, MEM16(ecx + 0x1EE));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(ecx + 0x1F0) = LO16(edx);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002F7570; /* je: equal / zero */

loc_002F7539: ;
    SET_LO16(edx, MEM16(ecx + 0x1EC));
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_002F7570; /* je: equal / zero */

loc_002F7545: ;
    edx = SX16(LO16(edx));
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx + 0x1F4) = xmm3; /* movss */
    MEMF(ecx + 0x1F8) = xmm0; /* movss */
    goto loc_002F7580;

loc_002F7570: ;
    MEMF(ecx + 0x1F4) = xmm2; /* movss */
    MEMF(ecx + 0x1F8) = xmm2; /* movss */

loc_002F7580: ;
    SET_LO16(edx, MEM16(ecx + 0x1DC));
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_002F75BB; /* je: equal / zero */

loc_002F758C: ;
    SET_LO16(eax, MEM16(ecx + 0x1DA));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002F75BB; /* je: equal / zero */

loc_002F7598: ;
    eax = SX16(LO16(eax));
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx + 0x1E8) = xmm0; /* movss */
    goto loc_002F75C3;

loc_002F75BB: ;
    MEMF(ecx + 0x1E8) = xmm2; /* movss */

loc_002F75C3: ;
    eax = MEM32(ecx + 0x5DC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x1E4) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002F75DF; /* je: equal / zero */

loc_002F75D5: ;
    PUSH32(esp, 0x870ED4);
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_002F75DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F75E0
 * Original: 0x002F75E0 - 0x002F7660 (128 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F75E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F75E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ecx = ecx - MEM32(0x84A5F8);
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(eax, MEM8(0x6BCFEB));
    edx = edx + ecx;
    PUSH32(esp, esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    PUSH32(esp, edi);
    edi = edx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002F765C; /* jle: less or equal (signed <=) */

loc_002F760B: ;
    ebp = 0; /* xor self */
    PUSH32(esp, ebx);
    edi = edi;

loc_002F7610: ;
    if (CMP_EQ(esi, edi)) goto loc_002F7649; /* je: equal / zero */

loc_002F7614: ;
    SET_LO8(eax, MEM8(esi + 0x7FDCA8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002F7649; /* je: equal / zero */

loc_002F761E: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + ebp + 0x568);
    eax = eax + ebp;
    if (TEST_Z(ecx, ecx)) goto loc_002F7649; /* je: equal / zero */

loc_002F7630: ;
    SET_LO8(edx, MEM8(ecx + 0x2DA));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002F7649; /* jne: not equal / not zero */

loc_002F763A: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00133C40(); /* call 0x00133C40 */

loc_002F7646: ;
    esp = esp + 4;

loc_002F7649: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    esi++;
    ebp = ebp + 0x6D0;
    if (CMP_L(esi, edx)) goto loc_002F7610; /* jl: less (signed <) */

loc_002F765B: ;
    POP32(esp, ebx);

loc_002F765C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7660
 * Original: 0x002F7660 - 0x002F77C5 (357 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7660(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F7660: ;
    esp = esp - 0x18;
    eax = ZX8(MEM8(esi + 0x253));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    MEM32(esp + 8) = eax;
    ecx = esi;
    ecx = ecx - ebp;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    ebx = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x258);
    MEM32(edi + 0x10) = ecx;
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEMF(edi + 0x34) = xmm0; /* movss */
    MEM8(edi + 0xA) = 0;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = edx;
    xmm0 = MEMF(esi + 0x78); /* movss */
    eax = ZX16(MEM16(esi + 0x170));
    ebp = MEM32(esi + 0x564);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C0); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x114); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1CC); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002F7719: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = ebx + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_002F7729: ;
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    eax = MEM32(esp + 0x38);
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    edx = MEM32(esi + 0x568);
    MEMF(esi + 0x1C0) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    esp = esp + 0x18;
    MEMF(esi + 0x114) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    MEM32(esi + 0x564) = ebp;
    POP32(esp, edi);
    MEMF(esi + 0x78) = xmm1; /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEMF(esi + 0x80) = xmm2; /* movss */
    MEMF(esi + 0x1CC) = xmm3; /* movss */
    MEM16(esi + 0x174) = LO16(eax);
    MEM16(esi + 0x170) = LO16(eax);
    MEMF(esi + 0x84) = xmm1; /* movss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    MEMF(esi + 0x8C) = xmm2; /* movss */
    MEMF(esi + 0x3B8) = xmm0; /* movss */
    MEM32(ebp + 0x3E4) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002F77D0
 * Original: 0x002F77D0 - 0x002F7807 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F77D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F77D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002F77F3: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002F7807(); return; } /* je: equal / zero */

loc_002F77FB: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_002F7807(); return; } /* je: equal / zero */

loc_002F7802: ;
    eax = MEM32(eax + 8);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7810
 * Original: 0x002F7810 - 0x002F7853 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7810(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7810: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002F7833: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002F7853(); return; } /* je: equal / zero */

loc_002F783B: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_002F7853(); return; } /* je: equal / zero */

loc_002F7842: ;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_002F784F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7870
 * Original: 0x002F7870 - 0x002F78F0 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7870(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_002F7870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x3A8));
    ebx = MEM32(ecx + esi * 4 + 0x4EC);
    esi = MEM32(ecx + 0x3C8);
    PUSH32(esp, edi);
    edi = edx;
    edi = edi << 6;
    esi = esi + edi;
    ecx = 0x10;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx + edx * 8;
    edx = MEM32(ebx + 0x34);
    xmm1 = MEMF(edx + ecx * 4 + 0x14); /* movss */
    xmm0 = MEMF(edx + ecx * 4 + 0x10); /* movss */
    ecx = edx + ecx * 4;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_002F78C5: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    esp = esp + 4;
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x38) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F78F0
 * Original: 0x002F78F0 - 0x002F792E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F78F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F78F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002F7913: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002F792E(); return; } /* je: equal / zero */

loc_002F791B: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_002F792E(); return; } /* je: equal / zero */

loc_002F7922: ;
    eax = MEM32(eax + 8);
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_002F792C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7940
 * Original: 0x002F7940 - 0x002F79AD (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7940(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_002F7940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = ZX8(MEM8(edx + 0x3A8));
    ecx = MEM32(edx + ecx * 4 + 0x4EC);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    edi = eax + eax * 8;
    xmm1 = MEMF(ecx + edi * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edi * 4 + 0x10); /* movss */
    ecx = ecx + edi * 4;
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x3C8);
    eax = eax << 6;
    eax = eax + edi;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_002F7985: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    esp = esp + 4;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F79B0
 * Original: 0x002F79B0 - 0x002F7A46 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F79B0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_002F79B0: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x3A8));
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm5 = MEMF(ecx + 4); /* movss */
    xmm6 = MEMF(ecx); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x3C8);
    PUSH32(esp, edi);
    edi = MEM32(esi + eax * 4 + 0x4EC);
    eax = edx;
    ecx = edx + edx * 8;
    edx = MEM32(edi + 0x34);
    xmm3 = MEMF(edx + ecx * 4 + 0xC); /* movss */
    xmm4 = MEMF(edx + ecx * 4 + 0x10); /* movss */
    ecx = edx + ecx * 4;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    eax = eax << 6;
    eax = eax + ebx;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, ecx);
    MEMF(eax + 0x30) = xmm2; /* movss */
    MEMF(eax + 0x34) = xmm2; /* movss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    ecx = eax;
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_002F7A2D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    xmm1 = xmm5; /* movaps */
    xmm0 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003E2BD0(); /* call 0x003E2BD0 */

loc_002F7A3F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7A50
 * Original: 0x002F7A50 - 0x002F7B29 (217 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F7A50: ;
    PUSH32(esp, ecx);
    if (TEST_Z(edi, edi)) goto loc_002F7B27; /* je: equal / zero */

loc_002F7A59: ;
    SET_LO8(eax, MEM8(edi + 0x3A8));
    SET_LO8(ecx, MEM8(edi + 0x510));
    if (CMP_B(LO8(eax), LO8(ecx))) goto loc_002F7AC1; /* jb: below (unsigned <) */

loc_002F7A69: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(edi + ecx * 4 + 0x4B0);
    if (TEST_Z(eax, eax)) goto loc_002F7B27; /* je: equal / zero */

loc_002F7A7B: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_002F7B27; /* je: equal / zero */

loc_002F7A86: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002F7B27; /* je: equal / zero */

loc_002F7A91: ;
    edx = MEM32(edi + ecx * 4 + 0x4C4);
    if (TEST_Z(edx, edx)) goto loc_002F7B27; /* je: equal / zero */

loc_002F7AA0: ;
    ecx = ZX8(MEM8(edi + 0x3A8));
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edi + ecx * 4 + 0x4C4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00081E60(); /* call 0x00081E60 */

loc_002F7ABC: ;
    esp = esp + 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002F7AC1: ;
    eax = ZX8(LO8(ecx));
    if (TEST_NZ(eax, eax)) goto loc_002F7ACF; /* jne: not equal / not zero */

loc_002F7AC8: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_002F7ACF: ;
    if (CMP_LE(eax & eax, 0)) goto loc_002F7B27; /* jle: less or equal (signed <=) */

loc_002F7AD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0xFFFFFB50u;
    PUSH32(esp, esi);
    esi = edi + 0x4B0;
    ebx = ebx - edi;
    ebp = eax;

loc_002F7AE3: ;
    eax = MEM32(edi + 0x50C);
    eax = eax + ebx;
    ecx = MEM32(eax + esi);
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(eax, eax)) goto loc_002F7B1E; /* je: equal / zero */

loc_002F7AF8: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_002F7B1E; /* je: equal / zero */

loc_002F7AFF: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002F7B1E; /* je: equal / zero */

loc_002F7B06: ;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_002F7B1E; /* je: equal / zero */

loc_002F7B0D: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00081E60(); /* call 0x00081E60 */

loc_002F7B1B: ;
    esp = esp + 4;

loc_002F7B1E: ;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_002F7AE3; /* jne: not equal / not zero */

loc_002F7B24: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002F7B27: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7B30
 * Original: 0x002F7B30 - 0x002F7B5E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7B30: ;
    if (TEST_Z(ecx, ecx)) goto loc_002F7B5D; /* je: equal / zero */

loc_002F7B34: ;
    eax = MEM32(ecx + 0x5D4);
    if (TEST_Z(eax, eax)) goto loc_002F7B5D; /* je: equal / zero */

loc_002F7B3E: ;
    ecx = MEM32(ecx + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002F7B5D; /* je: equal / zero */

loc_002F7B48: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002F7B5D; /* je: equal / zero */

loc_002F7B4F: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002F7B5C: ;
    POP32(esp, ecx);

loc_002F7B5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7B60
 * Original: 0x002F7B60 - 0x002F7B8E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7B60: ;
    if (TEST_Z(ecx, ecx)) goto loc_002F7B8D; /* je: equal / zero */

loc_002F7B64: ;
    eax = MEM32(ecx + 0x5D4);
    if (TEST_Z(eax, eax)) goto loc_002F7B8D; /* je: equal / zero */

loc_002F7B6E: ;
    ecx = MEM32(ecx + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002F7B8D; /* je: equal / zero */

loc_002F7B78: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002F7B8D; /* je: equal / zero */

loc_002F7B7F: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002F7B8C: ;
    POP32(esp, ecx);

loc_002F7B8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7B90
 * Original: 0x002F7B90 - 0x002F7BD5 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7B90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002F7BD2; /* je: equal / zero */

loc_002F7B9C: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002F7BA4: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002F7BD2; /* je: equal / zero */

loc_002F7BB1: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_002F7BD2; /* je: equal / zero */

loc_002F7BBB: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002F7BD2; /* je: equal / zero */

loc_002F7BC2: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002F7BCF: ;
    esp = esp + 4;

loc_002F7BD2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7BE0
 * Original: 0x002F7BE0 - 0x002F7C25 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7BE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002F7C22; /* je: equal / zero */

loc_002F7BEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002F7BF4: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002F7C22; /* je: equal / zero */

loc_002F7C01: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_002F7C22; /* je: equal / zero */

loc_002F7C0B: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002F7C22; /* je: equal / zero */

loc_002F7C12: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002F7C1F: ;
    esp = esp + 4;

loc_002F7C22: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7C30
 * Original: 0x002F7C30 - 0x002F7C65 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7C30(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7C30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    if (TEST_Z(edi, edi)) goto loc_002F7C60; /* je: equal / zero */

loc_002F7C45: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0029CE20(); /* call 0x0029CE20 */

loc_002F7C54: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 8;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_002F7C65(); return; } /* jne: not equal / not zero */

loc_002F7C60: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7CA0
 * Original: 0x002F7CA0 - 0x002F7CB7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7CA0: ;
    SET_LO16(ecx, MEM16(eax + 0x3AE));
    edx = 0; /* xor self */
    esp = esp - 0x10;
    if (CMP_NE(LO16(ecx), LO16(edx))) { sub_002F7CB7(); return; } /* jne: not equal / not zero */

loc_002F7CB1: ;
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7D20
 * Original: 0x002F7D20 - 0x002F7DDB (187 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F7D20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(ecx + 0x3AE));
    MEM32(ebx) = ebp;
    ebp = ZX16(MEM16(ecx + 0x3AA));
    MEM32(edi) = ebp;
    MEM32(esi) = 0;
    MEM32(edx) = 0;
    ebp = MEM32(ecx + 0x568);
    if (TEST_Z(ebp, ebp)) goto loc_002F7D69; /* je: equal / zero */

loc_002F7D51: ;
    ebp = ZX8(MEM8(ebp + 0x2D3));
    MEM32(esi) = ebp;
    ebp = MEM32(ecx + 0x568);
    ebp = ZX8(MEM8(ebp + 0x2D2));
    MEM32(edx) = ebp;

loc_002F7D69: ;
    if (TEST_Z(eax, eax)) goto loc_002F7DD7; /* je: equal / zero */

loc_002F7D6D: ;
    ebp = MEM32(ecx + 0x568);
    if (TEST_Z(ebp, ebp)) goto loc_002F7DB3; /* je: equal / zero */

loc_002F7D77: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002F7D99; /* jne: not equal / not zero */

loc_002F7D7F: ;
    ecx = MEM32(edx);
    if (CMP_LE(ecx, eax)) goto loc_002F7D8D; /* jle: less or equal (signed <=) */

loc_002F7D85: ;
    ecx = ecx - eax;
    MEM32(edx) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002F7D8D: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_002F7D99; /* jle: less or equal (signed <=) */

loc_002F7D91: ;
    eax = eax - ecx;
    MEM32(edx) = 0;

loc_002F7D99: ;
    ecx = MEM32(esi);
    if (CMP_LE(ecx, eax)) goto loc_002F7DA7; /* jle: less or equal (signed <=) */

loc_002F7D9F: ;
    ecx = ecx - eax;
    MEM32(esi) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002F7DA7: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_002F7DB3; /* jle: less or equal (signed <=) */

loc_002F7DAB: ;
    eax = eax - ecx;
    MEM32(esi) = 0;

loc_002F7DB3: ;
    ecx = MEM32(edi);
    if (CMP_L(ecx, eax)) goto loc_002F7DC1; /* jl: less (signed <) */

loc_002F7DB9: ;
    ecx = ecx - eax;
    MEM32(edi) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002F7DC1: ;
    if (TEST_Z(ecx, ecx)) goto loc_002F7DCD; /* je: equal / zero */

loc_002F7DC5: ;
    eax = eax - ecx;
    MEM32(edi) = 0;

loc_002F7DCD: ;
    ecx = MEM32(ebx);
    if (CMP_LE(ecx, eax)) { sub_002F7DDB(); return; } /* jle: less or equal (signed <=) */

loc_002F7DD3: ;
    ecx = ecx - eax;
    MEM32(ebx) = ecx;

loc_002F7DD7: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7DF0
 * Original: 0x002F7DF0 - 0x002F7E8B (155 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F7DF0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ecx = MEM32(esp + 4);
    esp = esp - 0x10;
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_002F7E5C; /* jne: not equal / not zero */

loc_002F7E04: ;
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0x7B)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E0C: ;
    if (CMP_EQ(eax, 0x7C)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E11: ;
    if (CMP_EQ(eax, 0xF)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E16: ;
    if (CMP_EQ(eax, 0x46)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E1B: ;
    if (CMP_EQ(eax, 0x4C)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E20: ;
    if (CMP_EQ(eax, 0x5B)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E25: ;
    if (CMP_EQ(eax, 0x60)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E2A: ;
    if (CMP_EQ(eax, 0x8C)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E31: ;
    if (CMP_EQ(eax, 0x53)) goto loc_002F7E83; /* je: equal / zero */

loc_002F7E36: ;
    if (CMP_NE(eax, 0x28)) goto loc_002F7E5C; /* jne: not equal / not zero */

loc_002F7E3B: ;
    esi = ZX16(MEM16(ecx + 0x60));
    eax = MEM32(0x84A5F8);
    edi = ZX8(MEM8(eax + 0x135));
    esi++;
    if (CMP_NE(edi, esi)) goto loc_002F7E5C; /* jne: not equal / not zero */

loc_002F7E50: ;
    SET_LO16(esi, MEM16(esp + 0x20));
    MEM16(eax + 0x3AE) = MEM16(eax + 0x3AE) - LO16(esi);

loc_002F7E5C: ;
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, edx)) goto loc_002F7E66; /* je: equal / zero */

loc_002F7E64: ;
    MEM8(eax) = LO8(edx);

loc_002F7E66: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x568);
    if (CMP_EQ(ebp, edx)) { sub_002F7E8B(); return; } /* je: equal / zero */

loc_002F7E71: ;
    if (CMP_NE(MEM32(ebp + 0xBC), 2)) { sub_002F7E8B(); return; } /* jne: not equal / not zero */

loc_002F7E7A: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002F7E83: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7F70
 * Original: 0x002F7F70 - 0x002F7FB4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F7F70: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002F7FB4(); return; } /* jne: not equal / not zero */

loc_002F7F79: ;
    eax = ZX16(MEM16(ecx + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, edx)) goto loc_002F7F8D; /* jl: less (signed <) */

loc_002F7F88: ;
    eax = 0x14;

loc_002F7F8D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    edx = MEM32(eax + 0x7632CC);
    if (TEST_NZ(edx, edx)) { sub_002F7FB4(); return; } /* jne: not equal / not zero */

loc_002F7F9D: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002F7FB1; /* je: equal / zero */

loc_002F7FA7: ;
    SET_LO8(ecx, MEM8(eax + 0x3A0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_002F7FB4(); return; } /* jne: not equal / not zero */

loc_002F7FB1: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7FC0
 * Original: 0x002F7FC0 - 0x002F8015 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F7FC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi + 0x4D8;
    MEM32(esp + 0xC) = 5;

loc_002F7FD8: ;
    eax = MEM32(edi + -40);
    if (TEST_Z(eax, eax)) goto loc_002F8002; /* je: equal / zero */

loc_002F7FDF: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_002F8002; /* je: equal / zero */

loc_002F7FE5: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    eax = ebp;
    PUSH32(esp, 0); sub_003F87A0(); /* call 0x003F87A0 */

loc_002F7FFF: ;
    esp = esp + 0xC;

loc_002F8002: ;
    eax = MEM32(esp + 0xC);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_002F7FD8; /* jne: not equal / not zero */

loc_002F8010: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8020
 * Original: 0x002F8020 - 0x002F818D (365 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_002F8020: ;
    eax = MEM32(ecx + 0x568);
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_002F8189; /* je: equal / zero */

loc_002F8031: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x579) = 1;
    edx = MEM32(ecx + 0x568);
    xmm1 = MEMF(0x648F60); /* movss */
    edx = edx + 0x588;
    PUSH32(esp, esi);
    eax = ecx + 0x78;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(ecx + 0x568);
    eax = MEM32(ecx + 0x114);
    MEM32(edx + 0x594) = eax;
    edx = MEM32(ecx + 0x568);
    MEMF(edx + 0x59C) = xmm0; /* movss */
    eax = MEM32(ecx + 0x568);
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(eax + 0x5A0) = xmm2; /* movss */
    POP32(esp, esi);
    if ((xmm2 <= xmm0)) goto loc_002F80A9; /* jbe: below or equal (unsigned <=) */

loc_002F809D: ;
    /* nop */

loc_002F80A0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_002F80A0; /* ja: above (unsigned >) */

loc_002F80A9: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_002F80B9; /* jb: below (unsigned <) */

loc_002F80AE: ;
    edi = edi;

loc_002F80B0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_002F80B0; /* jae: above or equal (unsigned >=) */

loc_002F80B9: ;
    eax = MEM32(ecx + 0x568);
    eax = eax + 0x594;
    /* comiss xmm2, MEMF(eax) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax))) goto loc_002F80E3; /* jbe: below or equal (unsigned <=) */

loc_002F80C9: ;
    xmm4 = MEMF(eax); /* movss */
    /* nop */

loc_002F80D0: ;
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm4 = xmm3; /* movaps */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 > xmm4)) goto loc_002F80D0; /* ja: above (unsigned >) */

loc_002F80DF: ;
    MEMF(eax) = xmm4; /* movss */

loc_002F80E3: ;
    xmm2 = MEMF(eax); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_002F8103; /* jb: below (unsigned <) */

loc_002F80EC: ;
    xmm3 = xmm2; /* movaps */
    /* nop */

loc_002F80F0: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    if ((xmm2 >= xmm1)) goto loc_002F80F0; /* jae: above or equal (unsigned >=) */

loc_002F80FF: ;
    MEMF(eax) = xmm3; /* movss */

loc_002F8103: ;
    edx = MEM32(ecx + 0x568);
    xmm3 = MEMF(edx + 0x594); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm2 < MEMF(0x648E6C))) goto loc_002F8127; /* jb: below (unsigned <) */

loc_002F8121: ;
    xmm3 = xmm3 - xmm1; /* subss */
    goto loc_002F8138;

loc_002F8127: ;
    xmm4 = MEMF(0x648F64); /* movss */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 < xmm2)) goto loc_002F8138; /* jb: below (unsigned <) */

loc_002F8134: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_002F8138: ;
    eax = MEM32(ecx + 0x568);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x598) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x568);
    edx = ecx + 0x57C;
    ecx = ecx + 0x588;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002F8189: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002F8190
 * Original: 0x002F8190 - 0x002F82B4 (292 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8190(void)
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

loc_002F8190: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002F82B2; /* je: equal / zero */

loc_002F819F: ;
    SET_LO8(ecx, MEM8(eax + 0x579));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002F82B2; /* je: equal / zero */

loc_002F81AD: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x5A0); /* addss */
    MEMF(eax + 0x5A0) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x5A0); /* movss */
    /* comiss xmm0, MEMF(eax + 0x59C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x59C))) goto loc_002F81E8; /* jbe: below or equal (unsigned <=) */

loc_002F81DC: ;
    ecx = MEM32(eax + 0x59C);
    MEM32(eax + 0x5A0) = ecx;

loc_002F81E8: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x5A0); /* movss */
    xmm0 = xmm0 / MEMF(eax + 0x59C); /* divss */
    xmm1 = MEMF(eax + 0x57C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x588); /* addss */
    MEMF(esi + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x580); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x58C); /* addss */
    MEMF(esi + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x584); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x590); /* addss */
    MEMF(esi + 0x80) = xmm1; /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x568);
    xmm1 = MEMF(edi + 0x598); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x594); /* addss */
    MEMF(esp + 4) = xmm1; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esi + 0x114) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002F8284: ;
    ecx = 0xC000;
    ecx = ecx - eax;
    MEM16(esi + 0x170) = LO16(ecx);
    MEM16(esi + 0x174) = LO16(ecx);
    xmm0 = MEMF(edi + 0x5A0); /* movss */
    /* comiss xmm0, MEMF(edi + 0x59C) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 0x59C))) goto loc_002F82B1; /* jb: below (unsigned <) */

loc_002F82AA: ;
    MEM8(edi + 0x579) = 0;

loc_002F82B1: ;
    POP32(esp, edi);

loc_002F82B2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002F82C0
 * Original: 0x002F82C0 - 0x002F82CD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F82C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F82C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002F82C6: ;
    if (TEST_Z(eax, eax)) { sub_002F82CD(); return; } /* je: equal / zero */

loc_002F82CA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8310
 * Original: 0x002F8310 - 0x002F832A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8310(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8310: ;
    SET_LO8(ecx, MEM8(eax + 0x3C1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002F8329; /* jne: not equal / not zero */

loc_002F831A: ;
    ecx = MEM32(eax + 0x3C4);
    if (TEST_Z(ecx, ecx)) goto loc_002F8329; /* je: equal / zero */

loc_002F8324: ;
    eax = 0x5A0350;

loc_002F8329: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F8330
 * Original: 0x002F8330 - 0x002F8347 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8330: ;
    eax = eax + 0x14E;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F8347(); return; } /* jne: not equal / not zero */

loc_002F8343: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F837D(); return; /* tail jmp 0x002F837D */

}

/**
 * sub_002F83A0
 * Original: 0x002F83A0 - 0x002F83B7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F83A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F83A0: ;
    eax = eax + 0x144;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F83B7(); return; } /* jne: not equal / not zero */

loc_002F83B3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F83ED(); return; /* tail jmp 0x002F83ED */

}

/**
 * sub_002F8420
 * Original: 0x002F8420 - 0x002F8437 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8420: ;
    eax = eax + 0x158;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F8437(); return; } /* jne: not equal / not zero */

loc_002F8433: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F846D(); return; /* tail jmp 0x002F846D */

}

/**
 * sub_002F8490
 * Original: 0x002F8490 - 0x002F84A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8490: ;
    eax = eax + 0x162;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F84A7(); return; } /* jne: not equal / not zero */

loc_002F84A3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F84DD(); return; /* tail jmp 0x002F84DD */

}

/**
 * sub_002F8500
 * Original: 0x002F8500 - 0x002F8517 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8500: ;
    eax = eax + 0x176;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F8517(); return; } /* jne: not equal / not zero */

loc_002F8513: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F854D(); return; /* tail jmp 0x002F854D */

}

/**
 * sub_002F8580
 * Original: 0x002F8580 - 0x002F85A8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8580(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8580: ;
    eax = eax + 0x180;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(eax * 4 + 0x6A58F0) = ecx;
    if (CMP_NE(eax, 0xFFFF)) { sub_002F85A8(); return; } /* jne: not equal / not zero */

loc_002F8593: ;
    SET_LO16(edx, MEM16(esp + 4));
    SET_LO16(ecx, MEM16(esp + 8));
    eax = 0; /* xor self */
    MEM16(eax + 0xE) = LO16(edx);
    MEM16(eax + 0x10) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8620
 * Original: 0x002F8620 - 0x002F8647 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8620(void)
{

loc_002F8620: ;
    eax = MEM32(0x742628);
    MEM32(0x6A5B90) = esi;
    MEM16(eax + 0xE) = LO16(edx);
    MEM16(eax + 0x10) = LO16(ecx);
    eax = MEM32(0x7427E8);
    MEM32(0x6A5D50) = esi;
    MEM16(eax + 0xE) = LO16(edx);
    MEM16(eax + 0x10) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8650
 * Original: 0x002F8650 - 0x002F8677 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8650(void)
{

loc_002F8650: ;
    eax = MEM32(0x74262C);
    MEM32(0x6A5B94) = esi;
    MEM16(eax + 0xE) = LO16(edx);
    MEM16(eax + 0x10) = LO16(ecx);
    eax = MEM32(0x7427E4);
    MEM32(0x6A5D4C) = esi;
    MEM16(eax + 0xE) = LO16(edx);
    MEM16(eax + 0x10) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8680
 * Original: 0x002F8680 - 0x002F86A2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8680(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8680: ;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0xA8)) { sub_002F86A2(); return; } /* je: equal / zero */

loc_002F868A: ;
    if (CMP_EQ(eax, 0xA9)) { sub_002F86A2(); return; } /* je: equal / zero */

loc_002F8691: ;
    if (CMP_EQ(eax, 0x118)) { sub_002F86A2(); return; } /* je: equal / zero */

loc_002F8698: ;
    if (CMP_EQ(eax, 0x117)) { sub_002F86A2(); return; } /* je: equal / zero */

loc_002F869F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F86B0
 * Original: 0x002F86B0 - 0x002F874F (159 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F86B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002F86B0: ;
    eax = MEM32(esi + 0x6A4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002F86F7; /* jne: not equal / not zero */

loc_002F86BF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x6D5);
    PUSH32(esp, 0x638168);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002F86D2: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002F86F1; /* je: equal / zero */

loc_002F86D9: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;

loc_002F86F1: ;
    MEM32(esi + 0x6A4) = eax;

loc_002F86F7: ;
    eax = MEM32(esi + 0x6A4);
    if (TEST_Z(eax, eax)) goto loc_002F874D; /* je: equal / zero */

loc_002F8701: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = edi;
    if (TEST_Z(edi, edi)) goto loc_002F8719; /* je: equal / zero */

loc_002F870E: ;
    edx = MEM32(edi + 0xB0);
    MEM32(eax + 4) = edx;
    goto loc_002F8720;

loc_002F8719: ;
    MEM32(eax + 4) = 0;

loc_002F8720: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(eax + 0xC) = xmm0; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_002F8742; /* jle: less or equal (signed <=) */

loc_002F8739: ;
    if (CMP_LE(ebx, ecx)) goto loc_002F874D; /* jle: less or equal (signed <=) */

loc_002F873D: ;
    MEM32(eax + 0x10) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F8742: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM32(eax + 0x10) = ebx;

loc_002F874D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8750
 * Original: 0x002F8750 - 0x002F87A5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8750(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8750: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002F87A3; /* je: equal / zero */

loc_002F875D: ;
    if (CMP_GE(eax, 0x1A1)) goto loc_002F876D; /* jge: greater or equal (signed >=) */

loc_002F8764: ;
    eax = MEM32(eax * 4 + 0x742388);
    goto loc_002F8793;

loc_002F876D: ;
    if (CMP_G(eax, 0x1D4)) goto loc_002F877B; /* jg: greater (signed >) */

loc_002F8774: ;
    eax = MEM32(0x742588);
    goto loc_002F8793;

loc_002F877B: ;
    if (CMP_L(eax, 0x1D5)) goto loc_002F878E; /* jl: less (signed <) */

loc_002F8782: ;
    (void)0; /* cmp eax, 0x204 - flags set for next jcc */
    eax = MEM32(0x74255C);
    if (CMP_LE(eax, 0x204)) goto loc_002F8793; /* jle: less or equal (signed <=) */

loc_002F878E: ;
    eax = MEM32(0x742388);

loc_002F8793: ;
    if (TEST_Z(eax, eax)) goto loc_002F87A3; /* je: equal / zero */

loc_002F8797: ;
    if (CMP_NE(MEM16(eax + 0xE), 0)) goto loc_002F87A3; /* jne: not equal / not zero */

loc_002F879E: ;
    PUSH32(esp, 0); sub_002F87B0(); /* call 0x002F87B0 */

loc_002F87A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F87B0
 * Original: 0x002F87B0 - 0x002F87C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F87B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F87B0: ;
    eax = MEM32(esi + 0x68);
    esp = esp - 0x20;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0xFFFF)) { sub_002F87C2(); return; } /* jne: not equal / not zero */

loc_002F87BE: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F87FB(); return; /* tail jmp 0x002F87FB */

}

/**
 * sub_002F8950
 * Original: 0x002F8950 - 0x002F8988 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8950(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8950: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_002F8958: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002F8984; /* je: equal / zero */

loc_002F895C: ;
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_002F8984; /* jne: not equal / not zero */

loc_002F8962: ;
    eax = MEM32(esi + 0x238);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x238);
    eax = MEM32(eax);
    if (CMP_EQ(eax, ecx)) { sub_002F8988(); return; } /* je: equal / zero */

loc_002F897A: ;
    if (CMP_EQ(eax, 2)) { sub_002F8988(); return; } /* je: equal / zero */

loc_002F897F: ;
    if (CMP_EQ(ecx, 2)) { sub_002F8988(); return; } /* je: equal / zero */

loc_002F8984: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8990
 * Original: 0x002F8990 - 0x002F89A7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8990: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x10);
    eax = eax + ecx;
    MEM32(esp) = 0;
    if (((int32_t)eax >= 0)) { sub_002F89A7(); return; } /* jns: not sign (positive) */

loc_002F89A2: ;
    eax = eax + 0x10;
    g_seh_ebp = ebp; sub_002F89AF(); return; /* tail jmp 0x002F89AF */

}

/**
 * sub_002F8AA0
 * Original: 0x002F8AA0 - 0x002F8CB1 (529 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F8AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002F8CAF; /* je: equal / zero */

loc_002F8AB3: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x638);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = eax;
    if (CMP_L(ecx, edx)) goto loc_002F8AD7; /* jl: less (signed <) */

loc_002F8AD2: ;
    ecx = 0x14;

loc_002F8AD7: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1B0);
    ecx = ecx + 0x763260;
    edi = ecx;
    ecx = MEM32(edi + 0x194);
    if (TEST_Z(ecx, ecx)) goto loc_002F8B05; /* je: equal / zero */

loc_002F8AEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F8990(); /* call 0x002F8990 */

loc_002F8AF7: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x638) = eax;
    goto loc_002F8B23;

loc_002F8B05: ;
    ecx = MEM32(edi + 0x198);
    if (TEST_Z(ecx, ecx)) goto loc_002F8B26; /* je: equal / zero */

loc_002F8B0F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F8990(); /* call 0x002F8990 */

loc_002F8B17: ;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x638) = eax;

loc_002F8B23: ;
    esp = esp + 8;

loc_002F8B26: ;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x638);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002F8B52; /* je: equal / zero */

loc_002F8B37: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F8950(); /* call 0x002F8950 */

loc_002F8B4B: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F8B75; /* jne: not equal / not zero */

loc_002F8B52: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x638);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F8990(); /* call 0x002F8990 */

loc_002F8B66: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 8;
    MEM32(edx + 0x638) = eax;

loc_002F8B75: ;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x638);
    if (CMP_EQ(ebp, eax)) goto loc_002F8BBE; /* je: equal / zero */

loc_002F8B85: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(esi + 0x564);
    ecx = MEM32(ecx + 4);
    if ((eax == 0)) goto loc_002F8BAD; /* je: equal / zero */

loc_002F8B9E: ;
    MEM8(ecx + 0x358) = 1;
    MEM32(ecx + 0x35C) = eax;
    goto loc_002F8BBE;

loc_002F8BAD: ;
    MEM8(ecx + 0x358) = 0;
    MEM32(ecx + 0x35C) = 0;

loc_002F8BBE: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002F8C75; /* je: equal / zero */

loc_002F8BCC: ;
    ecx = MEM32(eax + 0x4D4);
    if (TEST_Z(ecx, ecx)) goto loc_002F8C75; /* je: equal / zero */

loc_002F8BDA: ;
    edx = MEM32(0x7FA21C);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_002F99A0(); /* call 0x002F99A0 */

loc_002F8BE8: ;
    eax = MEM32(esi + 0x564);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F8C31; /* jne: not equal / not zero */

loc_002F8BFE: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x4D4);
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_002F8C26: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_002F8C31: ;
    ecx = MEM32(esi + 0x564);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F8C75; /* jne: not equal / not zero */

loc_002F8C47: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x4D4);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax + 0x40); /* subss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_002F8C6A: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_002F8C75: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x638);
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    POP32(esp, edi);
    POP32(esp, ebp);
    if ((eax == 0)) goto loc_002F8CAF; /* je: equal / zero */

loc_002F8C93: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_002F8CAF; /* jne: not equal / not zero */

loc_002F8C99: ;
    eax = eax + 0x78;
    edx = MEM32(eax);
    esi = esi + 0x78;
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;

loc_002F8CAF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8CC0
 * Original: 0x002F8CC0 - 0x002F8CE4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8CC0: ;
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x500));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_002F8CE4(); return; } /* je: equal / zero */

loc_002F8CD0: ;
    eax = MEM32(eax + 0x6A4);
    if (TEST_Z(eax, eax)) { sub_002F8CE4(); return; } /* je: equal / zero */

loc_002F8CDA: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) { sub_002F8CE4(); return; } /* jne: not equal / not zero */

loc_002F8CE1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8CF0
 * Original: 0x002F8CF0 - 0x002F8D30 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8CF0: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    ecx = 0; /* xor self */
    /* nop */

loc_002F8D00: ;
    if (CMP_NE(MEM8(edi + ecx), 0x42)) goto loc_002F8D20; /* jne: not equal / not zero */

loc_002F8D06: ;
    if (CMP_EQ(eax, esi)) goto loc_002F8D20; /* je: equal / zero */

loc_002F8D0A: ;
    edx = MEM32(eax + 0x568);
    if (TEST_Z(edx, edx)) goto loc_002F8D20; /* je: equal / zero */

loc_002F8D14: ;
    ebx = ZX16(MEM16(esi + 0x60));
    if (CMP_EQ(MEM32(edx + 0x638), ebx)) goto loc_002F8D2D; /* je: equal / zero */

loc_002F8D20: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x10)) goto loc_002F8D00; /* jl: less (signed <) */

loc_002F8D2B: ;
    eax = 0; /* xor self */

loc_002F8D2D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8D30
 * Original: 0x002F8D30 - 0x002F8D3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8D30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F8D3C(); return; } /* je: equal / zero */

loc_002F8D39: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8DA0
 * Original: 0x002F8DA0 - 0x002F8E0E (110 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8DA0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002F8E0E(); return; } /* jne: not equal / not zero */

loc_002F8DA9: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x10)) goto loc_002F8DB8; /* je: equal / zero */

loc_002F8DB3: ;
    if (CMP_NE(eax, 1)) { sub_002F8E0E(); return; } /* jne: not equal / not zero */

loc_002F8DB8: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(eax, 1)) goto loc_002F8DC7; /* jne: not equal / not zero */

loc_002F8DC0: ;
    eax = 0x200A;
    goto loc_002F8DD1;

loc_002F8DC7: ;
    if (CMP_NE(eax, 0x10)) goto loc_002F8DF0; /* jne: not equal / not zero */

loc_002F8DCC: ;
    eax = 0x2007;

loc_002F8DD1: ;
    PUSH32(esp, 0x2B);
    ecx = 0; /* xor self */
    PUSH32(esp, 0x26);
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_002F8DDC: ;
    ecx = 0; /* xor self */
    eax = eax | 0x2000;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_002F8DEB: ;
    esp = esp + 4;
    esi = eax;

loc_002F8DF0: ;
    PUSH32(esp, 0x2A);
    eax = 0x2000;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_002F8DFE: ;
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) { sub_002F8E0E(); return; } /* je: equal / zero */

loc_002F8E06: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_002F8E0E(); return; } /* je: equal / zero */

loc_002F8E0B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8E20
 * Original: 0x002F8E20 - 0x002F8EF5 (213 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002F8E20: ;
    eax = MEM32(eax + 0x564);
    esp = esp - 0x110;
    if (TEST_Z(eax, eax)) goto loc_002F8EEE; /* je: equal / zero */

loc_002F8E34: ;
    MEM32(edi + 0x564) = eax;
    eax = MEM32(edi + 0x568);
    PUSH32(esp, ebx);
    ebx = eax + 0x4D4;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_002F8E56; /* je: equal / zero */

loc_002F8E4C: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002F8E51: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_002F8E56: ;
    ecx = MEM32(edi + 0x114);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002F8E65: ;
    edx = MEM32(0x74A598);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0x59D958);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002F8E7F: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F9560(); /* call 0x002F9560 */

loc_002F8E94: ;
    ecx = MEM32(edi + 0x568);
    MEM32(ecx + 0x4D4) = eax;
    eax = MEM32(edi + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002F8EB8; /* je: equal / zero */

loc_002F8EAB: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x63812C);
    PUSH32(esp, 0); sub_00039190(); /* call 0x00039190 */

loc_002F8EB8: ;
    eax = MEM32(edi + 0x564);
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    esi = esi + 0x360;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0004BA80(); /* call 0x0004BA80 */

loc_002F8EE4: ;
    edx = MEM32(edi + 0x564);
    MEM8(edx) = 1;
    POP32(esp, esi);

loc_002F8EEE: ;
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_002F8F00
 * Original: 0x002F8F00 - 0x002F8F50 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8F00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x568);
    eax = MEM32(ebx + 0x4D4);
    ebx = ebx + 0x4D4;
    if (TEST_Z(eax, eax)) goto loc_002F8F21; /* je: equal / zero */

loc_002F8F17: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002F8F1C: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_002F8F21: ;
    eax = MEM32(edi + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002F8F36; /* je: equal / zero */

loc_002F8F2C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_002F8F35: ;
    POP32(esp, esi);

loc_002F8F36: ;
    eax = MEM32(edi + 0x564);
    MEM8(eax) = 0;
    ecx = MEM32(edi + 0x564);
    MEM32(ecx + 0x5D0) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_002F8F50
 * Original: 0x002F8F50 - 0x002F8F65 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8F50: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F8F62; /* jne: not equal / not zero */

loc_002F8F59: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x14)) { sub_002F8F65(); return; } /* je: equal / zero */

loc_002F8F62: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8FB0
 * Original: 0x002F8FB0 - 0x002F8FC5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F8FB0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002F8FC2; /* jne: not equal / not zero */

loc_002F8FB9: ;
    eax = MEM32(0x7FA1F8);
    if (TEST_Z(eax, eax)) { sub_002F8FC5(); return; } /* je: equal / zero */

loc_002F8FC2: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002F9010
 * Original: 0x002F9010 - 0x002F9054 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9010(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F9010: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002F9054(); return; } /* jne: not equal / not zero */

loc_002F9019: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x29)) { sub_002F9054(); return; } /* jne: not equal / not zero */

loc_002F9022: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F9054(); return; } /* je: equal / zero */

loc_002F9030: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx;
    if (CMP_NE(MEM32(eax + -1640), 0x8E)) { sub_002F9054(); return; } /* jne: not equal / not zero */

loc_002F904E: ;
    eax = eax + 0xFFFFF930u;
    esp += 4; return; /* ret */

}

/**
 * sub_002F9060
 * Original: 0x002F9060 - 0x002F907E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9060(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F9060: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002F907E(); return; } /* je: equal / zero */

loc_002F906A: ;
    if (CMP_EQ(MEM16(eax + 8), 0)) { sub_002F907E(); return; } /* je: equal / zero */

loc_002F9071: ;
    SET_LO8(ecx, MEM8(eax + 0x22));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_002F907E(); return; } /* jne: not equal / not zero */

loc_002F9078: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002F9090
 * Original: 0x002F9090 - 0x002F90B5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F9090: ;
    SET_LO8(edx, MEM8(ecx + 0x20C));
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F90B5(); return; } /* je: equal / zero */

loc_002F90A4: ;
    eax = MEM32(ecx + 0x568);
    if (CMP_LE(MEM16(eax + 8), 0)) { sub_002F90B5(); return; } /* jle: less or equal (signed <=) */

loc_002F90B1: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_002F90B7(); return; /* tail jmp 0x002F90B7 */

}

/**
 * sub_002F90E0
 * Original: 0x002F90E0 - 0x002F9135 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F90E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F90E0: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x41)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F90EA: ;
    if (CMP_EQ(eax, 0xC)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F90EF: ;
    if (CMP_EQ(eax, 0x1C)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F90F4: ;
    if (CMP_EQ(eax, 0x10)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F90F9: ;
    if (CMP_EQ(eax, 0x13)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F90FE: ;
    if (CMP_EQ(eax, 0x23)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F9103: ;
    if (CMP_EQ(eax, 0x49)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F9108: ;
    if (CMP_EQ(eax, 0x3B)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F910D: ;
    if (CMP_EQ(eax, 6)) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F9112: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x2C));
    SET_LO8(edx, ~LO8(edx));
    if (TEST_Z(LO8(edx), 1)) goto loc_002F912F; /* je: equal / zero */

loc_002F9126: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F9135(); return; } /* je: equal / zero */

loc_002F912F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002F9140
 * Original: 0x002F9140 - 0x002F91B5 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F9140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    esi = 0; /* xor self */

loc_002F9147: ;
    eax = MEM32(0x84A5F8);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F2E90(); /* call 0x002F2E90 */

loc_002F9155: ;
    esi = esi + 0x6D0;
    esp = esp + 4;
    if (CMP_L(esi, 0x36800)) goto loc_002F9147; /* jl: less (signed <) */

loc_002F9166: ;
    SET_LO8(eax, MEM8(0x876758));
    ebx = 1;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    MEM32(0x84A634) = ebp;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_002F918A; /* jne: not equal / not zero */

loc_002F917A: ;
    MEM32(0x876758) = MEM32(0x876758) | ebx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002F918A: ;
    eax = MEM32(0x8761EC);
    eax = eax - 2;
    if ((eax == 0)) { sub_002F91B5(); return; } /* je: equal / zero */

loc_002F9194: ;
    eax--;
    if ((eax == 0)) goto loc_002F91AC; /* je: equal / zero */

loc_002F9197: ;
    eax--;
    if ((eax == 0)) goto loc_002F91A3; /* je: equal / zero */

loc_002F919A: ;
    MEM8(0x7FDCA0) = 0;
    g_seh_ebp = ebp; sub_002F91BC(); return; /* tail jmp 0x002F91BC */

loc_002F91A3: ;
    MEM8(0x7FDCA0) = 4;
    g_seh_ebp = ebp; sub_002F91BC(); return; /* tail jmp 0x002F91BC */

loc_002F91AC: ;
    MEM8(0x7FDCA0) = 3;
    g_seh_ebp = ebp; sub_002F91BC(); return; /* tail jmp 0x002F91BC */

}

/**
 * sub_002F9410
 * Original: 0x002F9410 - 0x002F948F (127 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9410(void)
{
    float xmm0, xmm1;

loc_002F9410: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x18); /* movss */
    ecx = eax + 0xC;
    edx = esp + 0xC;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xC;
    ecx = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F9490
 * Original: 0x002F9490 - 0x002F9554 (196 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9490(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F9490: ;
    eax = MEM32(0x84A624);
    if (TEST_NZ(eax, eax)) goto loc_002F9553; /* jne: not equal / not zero */

loc_002F949D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002F94AB; /* jne: not equal / not zero */

loc_002F94A6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002F94AB: ;
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
    if (TEST_Z(esi, esi)) goto loc_002F94FD; /* je: equal / zero */

loc_002F94D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0xD0)) goto loc_002F94FD; /* jb: below (unsigned <) */

loc_002F94DF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F94E9: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F94F4: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_NZ(edx, edx)) goto loc_002F9523; /* jne: not equal / not zero */

loc_002F94FD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F950F: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F951A: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_002F954A; /* je: equal / zero */

loc_002F9523: ;
    eax = 0; /* xor self */
    ecx = 0x31;
    edi = edx + 0xC;
    MEM8(edx) = 0;
    MEM32(edx + 4) = 0;
    MEM32(edx + 8) = 0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    MEM32(0x84A624) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002F954A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84A624) = eax;
    POP32(esp, esi);

loc_002F9553: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F9560
 * Original: 0x002F9560 - 0x002F961F (191 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9560(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm2, xmm3;

loc_002F9560: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_0005EFE0(); /* call 0x0005EFE0 */

loc_002F957A: ;
    eax = MEM32(0x84A19C);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_002F958C; /* jne: not equal / not zero */

loc_002F9587: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002F958C: ;
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
    if (TEST_Z(esi, esi)) goto loc_002F95DC; /* je: equal / zero */

loc_002F95B4: ;
    if (CMP_B(MEM32(esi + 0x80), 0xE4)) goto loc_002F95DC; /* jb: below (unsigned <) */

loc_002F95C0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F95CA: ;
    PUSH32(esp, 0xE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F95D5: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002F9600; /* jne: not equal / not zero */

loc_002F95DC: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002F95EE: ;
    PUSH32(esp, 0xE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002F95F9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002F961F(); return; } /* je: equal / zero */

loc_002F9600: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, 0); sub_002F96A0(); /* call 0x002F96A0 */

loc_002F9619: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F9630
 * Original: 0x002F9630 - 0x002F9697 (103 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9630(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F9630: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    esi = esi - 0xC;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002F9646: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002F9671; /* je: equal / zero */

loc_002F964C: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002F9657; /* je: equal / zero */

loc_002F9653: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002F9657: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002F9671; /* jne: not equal / not zero */

loc_002F965E: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002F9667: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002F9671: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_002F968D; /* je: equal / zero */

loc_002F9677: ;
    PUSH32(esp, 0); sub_002F9850(); /* call 0x002F9850 */

loc_002F967C: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002F968A: ;
    esp = esp + 4;

loc_002F968D: ;
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F96A0
 * Original: 0x002F96A0 - 0x002F9849 (425 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F96A0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_002F96A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm1 = MEMF(0x648E84); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm2; /* movss */
    MEMF(eax + 0x14) = xmm2; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x1C) = xmm2; /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0x20) = xmm4; /* movss */
    edx = 0x5D5064;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    MEMF(eax + 0x64) = xmm1; /* movss */
    MEMF(eax + 0x68) = xmm1; /* movss */
    MEMF(eax + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x48) = edx;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm3; /* movss */
    MEMF(eax + 0x50) = xmm3; /* movss */
    MEMF(eax + 0x58) = xmm2; /* movss */
    MEMF(eax + 0x5C) = xmm4; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    edx = 0; /* xor self */
    MEM32(eax + 0x80) = edx;
    MEMF(eax + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    MEMF(eax + 0xA4) = xmm1; /* movss */
    xmm1 = MEMF(0x59D944); /* movss */
    MEMF(eax + 0xA8) = xmm1; /* movss */
    xmm1 = MEMF(0x59D948); /* movss */
    MEMF(eax + 0xAC) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA8); /* movss */
    MEMF(eax + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(0x59D950); /* movss */
    MEM32(eax + 0x84) = ecx;
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEM32(eax + 0x90) = edx;
    MEMF(eax + 0xB4) = xmm1; /* movss */
    MEMF(eax + 0xB8) = xmm2; /* movss */
    MEMF(eax + 0xBC) = xmm2; /* movss */
    MEMF(eax + 0xC0) = xmm0; /* movss */
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM8(eax + 0xC8) = 1;
    MEMF(eax + 0x94) = xmm0; /* movss */
    MEMF(eax + 0x98) = xmm0; /* movss */
    MEMF(eax + 0x9C) = xmm0; /* movss */
    MEM32(eax + 0xCC) = ecx;
    MEMF(eax + 0xD0) = xmm0; /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm2; /* movss */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    MEM8(eax + 0xE0) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9850
 * Original: 0x002F9850 - 0x002F9897 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9850(void)
{
    int _flags = 0; /* fallback flag var */

loc_002F9850: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0xCC) = edi;
    MEM32(esi) = edi;
    if (CMP_EQ(eax, edi)) goto loc_002F9877; /* je: equal / zero */

loc_002F9866: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002F9874: ;
    esp = esp + 4;

loc_002F9877: ;
    MEM32(esi + 0x80) = edi;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x90) = edi;
    eax = 0x606A68;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F98A0
 * Original: 0x002F98A0 - 0x002F990F (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F98A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002F98A0: ;
    if (TEST_Z(eax, eax)) goto loc_002F98DD; /* je: equal / zero */

loc_002F98A4: ;
    ecx = MEM32(edx);
    xmm0 = MEMF(ecx + 0x18); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_002F98BE; /* jbe: below or equal (unsigned <=) */

loc_002F98B0: ;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax) = ecx;
    MEM8(edx + 0xE0) = 1;
    goto loc_002F98DD;

loc_002F98BE: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x1C))) goto loc_002F98D6; /* jbe: below or equal (unsigned <=) */

loc_002F98C8: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax) = ecx;
    MEM8(edx + 0xE0) = 1;
    goto loc_002F98DD;

loc_002F98D6: ;
    MEM8(edx + 0xE0) = 0;

loc_002F98DD: ;
    if (TEST_Z(esi, esi)) goto loc_002F990E; /* je: equal / zero */

loc_002F98E1: ;
    edx = MEM32(edx);
    xmm0 = MEMF(edx + 0x2C); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_002F98F2; /* jbe: below or equal (unsigned <=) */

loc_002F98ED: ;
    MEMF(esi) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_002F98F2: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(edx + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x30))) goto loc_002F9906; /* jbe: below or equal (unsigned <=) */

loc_002F98FC: ;
    xmm0 = MEMF(edx + 0x30); /* movss */
    MEMF(esi) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_002F9906: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esi) = xmm0; /* movss */

loc_002F990E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F9910
 * Original: 0x002F9910 - 0x002F9925 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F9910: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x20));
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_002F9925(); return; } /* je: equal / zero */

loc_002F991E: ;
    xmm0 = (float)(int32_t)MEM32(edi + 0x1C); /* cvtsi2ss */
    g_seh_ebp = ebp; sub_002F992A(); return; /* tail jmp 0x002F992A */

}

/**
 * sub_002F99A0
 * Original: 0x002F99A0 - 0x002F9A0C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F99A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F99A0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x80);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002F99FA; /* je: equal / zero */

loc_002F99B3: ;
    eax = MEM32(ecx + 0x24);
    xmm0 = MEMF(ecx + 0x28); /* movss */
    xmm1 = MEMF(ecx + 0x2C); /* movss */
    MEM32(edi + 0x7C) = eax;
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x18); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002F99FA; /* jp: parity */

loc_002F99DF: ;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002F99ED: ;
    esp = esp + 4;
    MEM32(edi + 0x80) = 0;

loc_002F99FA: ;
    eax = MEM32(edi);
    edx = eax;
    SET_LO8(eax, MEM8(eax + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002F9A0C(); return; } /* je: equal / zero */

loc_002F9A05: ;
    xmm0 = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    g_seh_ebp = ebp; sub_002F9A11(); return; /* tail jmp 0x002F9A11 */

}

/**
 * sub_002F9E50
 * Original: 0x002F9E50 - 0x002F9E84 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9E50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002F9E50: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = 4;
    /* nop */

loc_002F9E60: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002F9E7A; /* jnp: not parity */

loc_002F9E69: ;
    /* comiss xmm0, MEMF(ecx * 8 + 0x747798) - sets EFLAGS */
    if ((xmm0 >= MEMF(ecx * 8 + 0x747798))) { sub_002F9E84(); return; } /* jae: above or equal (unsigned >=) */

loc_002F9E73: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_002F9E60; /* jns: not sign (positive) */

loc_002F9E76: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp += 4; return; /* ret */

loc_002F9E7A: ;
    xmm0 = MEMF(ecx * 8 + 0x74779C); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002F9ED0
 * Original: 0x002F9ED0 - 0x002F9F9C (204 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9ED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002F9ED0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(esi + 0x18) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = esi + 0x18;
    if ((xmm0 <= MEMF(esi + 0x18))) { sub_002F9F9C(); return; } /* jbe: below or equal (unsigned <=) */

loc_002F9EE6: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    ecx = esi + 0x24;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_002F9F12: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    edx = MEM32(esi + 0x20);
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = MEM32(esi + 0x10);
    esp = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = esi + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_002F9F3C: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = MEM32(esi + 0x14);
    esp = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_002F9F66: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    ecx = MEM32(esi + 0x20);
    esp = esp + 0xC;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ecx);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x3F800000);
    edx = ebx;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_002F9F94: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F9FC0
 * Original: 0x002F9FC0 - 0x002FA77E (1982 bytes, 508 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9FC0(void)
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

loc_002F9FC0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002F9FD7: ;
    edi = MEM32(esi);
    if (CMP_EQ(edi, ebx)) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002F9FE1: ;
    if (CMP_EQ(MEM8(esi + 0x44), LO8(ebx))) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002F9FEA: ;
    eax = edi + 0x78;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x54) = eax;
    edx = MEM32(edi + 0x568);
    if (CMP_EQ(edx, ebx)) goto loc_002FA037; /* je: equal / zero */

loc_002FA00B: ;
    eax = MEM32(edx + 0x444);
    if (CMP_EQ(eax, ebx)) goto loc_002FA037; /* je: equal / zero */

loc_002FA015: ;
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_002FA01A: ;
    if (CMP_EQ(eax, ebx)) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002FA022: ;
    eax = MEM32(eax + 0x18);
    if (CMP_EQ(eax, 8)) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002FA02E: ;
    if (CMP_EQ(eax, 0xC)) { sub_002FA77E(); return; } /* je: equal / zero */

loc_002FA037: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM8(esp + 0xB) = 1;
    if (CMP_EQ(edx, ebx)) goto loc_002FA058; /* je: equal / zero */

loc_002FA040: ;
    fp_push(MEMF(edi + 0x648)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002FA058; /* jbe: below or equal (unsigned <=) */

loc_002FA054: ;
    MEM8(esp + 0xB) = LO8(ebx);

loc_002FA058: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(0x64935C); /* addss */
    xmm1 = MEMF(esi + 4); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x4C;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_002FA0A4: ;
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CF8); /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x28) = xmm7; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x24); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x40); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_002FA1C0: ;
    xmm0 = MEMF(esi + 0x28); /* movss */
    ecx = ebx;
    edx = esp + 0x70;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x70;
    eax = esp + 0x50;
    edx = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x20);
    xmm0 = MEMF(esi + 0x28); /* movss */
    PUSH32(esp, eax);
    ecx = ebx;
    edx = esp + 0x54;
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_0012C7B0(); /* call 0x0012C7B0 */

loc_002FA256: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x238);
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    eax = MEM32(0x870ED4);
    ecx = esp + 0x20;
    edx = esp + 0x88;
    PUSH32(esp, ecx);
    ecx = 0xC;
    ebp = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_002FA7B0(); /* call 0x002FA7B0 */

loc_002FA28D: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_002FA4E5; /* jle: less or equal (signed <=) */

loc_002FA2D3: ;
    edi = MEM32(esp + ebp * 4 + 0xAC);
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_002FA4D1; /* je: equal / zero */

loc_002FA2E5: ;
    eax = MEM32(esi);
    if (CMP_EQ(edi, eax)) goto loc_002FA4D1; /* je: equal / zero */

loc_002FA2EF: ;
    edx = edi + 0x78;
    ecx = MEM32(edx);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 4);
    eax = eax + 0x78;
    MEM32(esp + 0x64) = eax;
    eax = esp + 0x40;
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(edx + 8);
    ecx = eax;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x5C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x64);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x40;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_002FA34D: ;
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_002FA355: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002FA4CE; /* jnp: not parity */

loc_002FA368: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if ((xmm0 < MEMF(esp + 0x18))) goto loc_002FA4CE; /* jb: below (unsigned <) */

loc_002FA3A5: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    eax = edi;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x54)); /* fld float */
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
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002FA4CE; /* jnp: not parity */

loc_002FA3F3: ;
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_002FA3FB: ;
    esp = esp + 4;
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002FA4CE; /* jnp: not parity */

loc_002FA40B: ;
    xmm0 = MEMF(0x59D944); /* movss */
    /* comiss xmm0, MEMF(esp + 0x38) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x38))) goto loc_002FA4CE; /* ja: above (unsigned >) */

loc_002FA41E: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(0x780AB0) = 0x638194;
    MEM32(0x6C0210) = 0x6B2;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_002FA47D: ;
    esp = esp + 0x30;
    ecx = eax;
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_002FA487: ;
    if (TEST_NZ(ecx, ecx)) goto loc_002FA4CE; /* jne: not equal / not zero */

loc_002FA48B: ;
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002FA4CE; /* jb: below (unsigned <) */

loc_002FA49C: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    xmm1 = MEMF(esp + 0x60); /* movss */
    MEM32(esp + 0x10) = ebp;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x14) = edi;

loc_002FA4CE: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_002FA4D1: ;
    eax = MEM32(esp + 0x3C);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_002FA2D3; /* jl: less (signed <) */

loc_002FA4DE: ;
    if (CMP_NE(MEM32(esp + 0x10), 0xFFFFFFFFu)) goto loc_002FA50A; /* jne: not equal / not zero */

loc_002FA4E5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEM32(esi + 0xC) = 0;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

loc_002FA50A: ;
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x24); /* subss */
    xmm3 = xmm3 - MEMF(esi + 0x24); /* subss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002FA53C; /* jbe: below or equal (unsigned <=) */

loc_002FA537: ;
    xmm1 = xmm0; /* movaps */
    goto loc_002FA544;

loc_002FA53C: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_002FA544; /* jbe: below or equal (unsigned <=) */

loc_002FA541: ;
    xmm1 = xmm2; /* movaps */

loc_002FA544: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002FA57C; /* jbe: below or equal (unsigned <=) */

loc_002FA577: ;
    xmm3 = xmm0; /* movaps */
    goto loc_002FA58A;

loc_002FA57C: ;
    xmm3 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_002FA58A; /* jbe: below or equal (unsigned <=) */

loc_002FA587: ;
    xmm3 = xmm2; /* movaps */

loc_002FA58A: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_002FA592; /* jbe: below or equal (unsigned <=) */

loc_002FA58F: ;
    xmm1 = xmm3; /* movaps */

loc_002FA592: ;
    xmm2 = MEMF(esi + 0x30); /* movss */
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp MEM32(esi + 0xC), eax - flags set for next jcc */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x2C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + 0x34) = xmm2; /* movss */
    if (CMP_EQ(MEM32(esi + 0xC), eax)) goto loc_002FA5D1; /* je: equal / zero */

loc_002FA5B7: ;
    edx = MEM32(esp + 0x28);
    ecx = esi + 0x10;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;

loc_002FA5D1: ;
    if (CMP_NE(MEM8(esp + 0xF), 1)) goto loc_002FA76A; /* jne: not equal / not zero */

loc_002FA5DC: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002FA76A; /* je: equal / zero */

loc_002FA5E7: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x28;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(esp + 0x20); /* movss */
    ebx = eax;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_002FA62E: ;
    eax = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_002FA639: ;
    xmm5 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm7 = MEMF(esp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D14))) goto loc_002FA693; /* jb: below (unsigned <) */

loc_002FA67C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

loc_002FA693: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    xmm5 = xmm3; /* movaps */
    if ((xmm1 >= xmm4)) goto loc_002FA6D1; /* jae: above or equal (unsigned >=) */

loc_002FA6C9: ;
    xmm5 = MEMF(0x648D34); /* movss */

loc_002FA6D1: ;
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_002FA6D6: ;
    eax = MEM32(esp + 0x3C);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x5C); /* subss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002FA703: ;
    xmm0 = xmm0 * MEMF(0x649DBC); /* mulss */
    ecx = MEM32(esi);
    MEMF(esi + 0x40) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 / MEMF(esi + 0x30); /* divss */
    xmm0 = xmm0 * MEMF(esi + 0x38); /* mulss */
    esp = esp + 8;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x64) = ecx;
    MEMF(esp + 0x68) = xmm0; /* movss */
    if ((xmm4 <= xmm0)) goto loc_002FA741; /* jbe: below or equal (unsigned <=) */

loc_002FA739: ;
    MEMF(esp + 0x68) = xmm4; /* movss */
    goto loc_002FA74C;

loc_002FA741: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_002FA74C; /* jbe: below or equal (unsigned <=) */

loc_002FA746: ;
    MEMF(esp + 0x68) = xmm3; /* movss */

loc_002FA74C: ;
    edx = esp + 0x64;
    PUSH32(esp, 0x62);
    PUSH32(esp, edx);
    eax = 0x72;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_002FA75D: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

loc_002FA76A: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002FA7B0
 * Original: 0x002FA7B0 - 0x002FA7ED (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FA7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002FA7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x644;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_00129980(); /* call 0x00129980 */

loc_002FA7CE: ;
    eax = MEM32(esi + 0x34);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_002FA7DD; /* je: equal / zero */

loc_002FA7D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_002FA7DD: ;
    if (CMP_NE(MEM32(esi + 0x4C), ebx)) { sub_002FA7ED(); return; } /* jne: not equal / not zero */

loc_002FA7E2: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002FAB20
 * Original: 0x002FAB20 - 0x002FAB6F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FAB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_002FAB20: ;
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ecx + 0xA0) = ebx;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x1F8) = ebx;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002FAB4B; /* je: equal / zero */

loc_002FAB40: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002FAB48: ;
    esp = esp + 4;

loc_002FAB4B: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_002FAB5B; /* je: equal / zero */

loc_002FAB50: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002FAB58: ;
    esp = esp + 4;

loc_002FAB5B: ;
    MEM8(esi + 0x181) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FAB70
 * Original: 0x002FAB70 - 0x002FABA6 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FAB70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002FAB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = edx;
    PUSH32(esp, ecx);
    eax = 1;
    edi = esi;
    PUSH32(esp, 0); sub_003197F0(); /* call 0x003197F0 */

loc_002FAB88: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0x14;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(edx) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002FABA3; /* jne: not equal / not zero */

loc_002FAB96: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_002FAB20(); /* call 0x002FAB20 */

loc_002FABA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FABB0
 * Original: 0x002FABB0 - 0x002FABC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FABB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002FABB0: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002FABC6(); return; } /* je: equal / zero */

loc_002FABBA: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) { sub_002FABC6(); return; } /* jne: not equal / not zero */

loc_002FABC3: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002FABD0
 * Original: 0x002FABD0 - 0x002FAD65 (405 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FABD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FABD0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x568);
    (void)0; /* cmp MEM32(eax + 0xBC), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_002FAC25; /* je: equal / zero */

loc_002FABE9: ;
    ecx = eax + 0x21C;
    edx = MEM32(ecx);
    eax = eax + 0x358;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x568);
    edx = eax + 0x228;
    ecx = MEM32(edx);
    eax = eax + 0x34C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_002FAC25: ;
    PUSH32(esp, 0x4100000);
    ecx = 0x17D;
    eax = 0x6381C8;
    esi = ebp;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_002FAC3B: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = eax + 0x358;
    esi = eax + 0xF0;
    PUSH32(esp, edx);
    eax = eax + 0x34C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_002FAC6B: ;
    eax = MEM32(ebp + 0x564);
    esp = esp + 0x34;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_002FAD1D; /* je: equal / zero */

loc_002FAC98: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x72);
    PUSH32(esp, eax);
    eax = 0x7A;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_002FACB1: ;
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x1D4);
    esp = esp + 8;
    if (CMP_NE(eax, 3)) goto loc_002FACE2; /* jne: not equal / not zero */

loc_002FACC5: ;
    if (CMP_NE(MEM8(esi + 0x1D2), 0xB)) goto loc_002FACE2; /* jne: not equal / not zero */

loc_002FACCE: ;
    eax = MEM32(esi + 0x444);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_002FACD9: ;
    if (CMP_NE(eax, 4)) goto loc_002FACE2; /* jne: not equal / not zero */

loc_002FACDE: ;
    SET_LO8(eax, 1);
    goto loc_002FACE4;

loc_002FACE2: ;
    SET_LO8(eax, 0); /* xor self */

loc_002FACE4: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(edi, ebx)) goto loc_002FAD09; /* je: equal / zero */

loc_002FACED: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002FAD00; /* je: equal / zero */

loc_002FACF1: ;
    eax = esi + 0xF8;
    ebx = ebp;
    PUSH32(esp, 0); sub_001D6440(); /* call 0x001D6440 */

loc_002FACFE: ;
    goto loc_002FAD1A;

loc_002FAD00: ;
    esi = edi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_002FAD07: ;
    goto loc_002FAD1C;

loc_002FAD09: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002FAD1C; /* je: equal / zero */

loc_002FAD0D: ;
    eax = esi + 0xF8;
    ebx = ebp;
    PUSH32(esp, 0); sub_001D60A0(); /* call 0x001D60A0 */

loc_002FAD1A: ;
    ebx = 0; /* xor self */

loc_002FAD1C: ;
    POP32(esp, edi);

loc_002FAD1D: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xF0);
    if (CMP_EQ(eax, ebx)) goto loc_002FAD5E; /* je: equal / zero */

loc_002FAD2D: ;
    ecx = MEM32(eax + 0x568);
    if (CMP_EQ(ecx, ebx)) goto loc_002FAD4F; /* je: equal / zero */

loc_002FAD37: ;
    edx = ecx;
    MEM8(edx + 0x288) = 0x1E;
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ebp + 0x60));
    MEM8(ecx + 0x289) = LO8(edx);

loc_002FAD4F: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(eax + 0x60));
    MEM8(ecx + 0x28A) = LO8(edx);

loc_002FAD5E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002FAD70
 * Original: 0x002FAD70 - 0x002FADB2 (66 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FAD70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002FAD70: ;
    eax = MEM32(ecx + 0x568);
    eax = MEM32(eax + 0xF0);
    if (TEST_Z(eax, eax)) goto loc_002FADB1; /* je: equal / zero */

loc_002FAD80: ;
    edx = MEM32(eax + 0x568);
    if (TEST_Z(edx, edx)) goto loc_002FADA2; /* je: equal / zero */

loc_002FAD8A: ;
    MEM8(edx + 0x288) = 0x1E;
    edx = MEM32(eax + 0x568);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x60));
    MEM8(edx + 0x289) = LO8(ebx);
    POP32(esp, ebx);

loc_002FADA2: ;
    ecx = MEM32(ecx + 0x568);
    SET_LO8(edx, MEM8(eax + 0x60));
    MEM8(ecx + 0x28A) = LO8(edx);

loc_002FADB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FADC0
 * Original: 0x002FADC0 - 0x002FADDD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FADC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FADC0: ;
    esp = esp - 0xE0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(0x7FDB7C) = 0;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_002FADE0(); return; /* tail jmp 0x002FADE0 */

}

/**
 * sub_002FB960
 * Original: 0x002FB960 - 0x002FB9ED (141 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FB960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;

loc_002FB960: ;
    esp = esp - 0x14;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648F08); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x3EC); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3F0); /* movss */
    MEMF(eax + 0x3EC) = xmm4; /* movss */
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x3F0) = xmm4; /* movss */
    ecx = MEM32(esi + 0x564);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_002FB9C3; /* je: equal / zero */

loc_002FB9B9: ;
    SET_LO8(eax, MEM8(ecx + 0x6DE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002FB9E6; /* jne: not equal / not zero */

loc_002FB9C3: ;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) { sub_002FB9ED(); return; } /* jne: not equal / not zero */

loc_002FB9CD: ;
    ecx = MEM32(esi + 0x568);
    MEMF(ecx + 0x4D8) = xmm4; /* movss */
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x14) = xmm4; /* movss */

loc_002FB9E6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002FBDE0
 * Original: 0x002FBDE0 - 0x002FBFBD (477 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FBDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002FBDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002FBE64; /* jne: not equal / not zero */

loc_002FBDF5: ;
    ecx = MEM32(esi + 0x568);
    eax = ZX8(MEM8(ecx + 0x2C1));
    if (TEST_NZ(eax, eax)) goto loc_002FBE17; /* jne: not equal / not zero */

loc_002FBE06: ;
    ecx = MEM32(ecx + 0x3F4);
    if (CMP_NE(MEM32(ecx + 8), 1)) goto loc_002FBE17; /* jne: not equal / not zero */

loc_002FBE12: ;
    eax = 4;

loc_002FBE17: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    ebx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x75EB14);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002FBFB6; /* je: equal / zero */

loc_002FBE2F: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_002FBFB6; /* je: equal / zero */

loc_002FBE3C: ;
    /* nop */

loc_002FBE40: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_002FBE57; /* jne: not equal / not zero */

loc_002FBE4A: ;
    eax = ZX16(MEM16(eax + 0xA));
    if (CMP_NE(eax, ebx)) goto loc_002FBE57; /* jne: not equal / not zero */

loc_002FBE52: ;
    if (TEST_Z(edi, edi)) goto loc_002FBE64; /* je: equal / zero */

loc_002FBE56: ;
    edi--;

loc_002FBE57: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_002FBE40; /* jne: not equal / not zero */

loc_002FBE5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FBE64: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_002FBEA0; /* je: equal / zero */

loc_002FBE6E: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D58C4);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_002FBE7D: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    esp = esp + 8;
    goto loc_002FBEBE;

loc_002FBEA0: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */

loc_002FBEBE: ;
    edx = ZX16(MEM16(esi + 0x60));
    edx++;
    eax = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_002FBED8: ;
    if (TEST_Z(eax, eax)) goto loc_002FBEEC; /* je: equal / zero */

loc_002FBEDC: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    eax = MEM32(ecx + edx + 0x50);

loc_002FBEEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0);
    MEM32(esi + 0x5E0) = eax;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0x100045);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F06F0(); /* call 0x002F06F0 */

loc_002FBF07: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    eax = MEM32(0x59CA24);
    MEMF(0x7FCB64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x88); /* movss */
    MEMF(0x7FCB68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    MEMF(0x7FCB6C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD38); /* movss */
    MEMF(0x7FCB58) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD34); /* movss */
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x7FCB5C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD30); /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002FBF7E; /* je: equal / zero */

loc_002FBF73: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002FBF7B: ;
    esp = esp + 8;

loc_002FBF7E: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_002FBF8E; /* je: equal / zero */

loc_002FBF83: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002FBF8B: ;
    esp = esp + 4;

loc_002FBF8E: ;
    edx = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(edx + 0x2BF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002FBFA6; /* je: equal / zero */

loc_002FBF9E: ;
    eax = edx;
    MEM8(eax + 0x2BF) = MEM8(eax + 0x2BF) - 1;

loc_002FBFA6: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x1F8) = 0;

loc_002FBFB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FBFC0
 * Original: 0x002FBFC0 - 0x002FC009 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FBFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FBFC0: ;
    edx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    edx++;
    eax = 0; /* xor self */
    ecx = edi + 0x135;
    /* nop */

loc_002FBFE0: ;
    if (CMP_EQ(MEM8(esi + eax), 0)) goto loc_002FBFF5; /* je: equal / zero */

loc_002FBFE6: ;
    if (CMP_NE(MEM32(ecx + -205), ebx)) goto loc_002FBFF5; /* jne: not equal / not zero */

loc_002FBFEE: ;
    ebp = ZX8(MEM8(ecx));
    if (CMP_EQ(ebp, edx)) { sub_002FC009(); return; } /* je: equal / zero */

loc_002FBFF5: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_002FBFE0; /* jl: less (signed <) */

loc_002FC003: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC020
 * Original: 0x002FC020 - 0x002FC11C (252 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC020(void)
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

loc_002FC020: ;
    esp = esp - 0x24;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x64925C); /* movss */
    PUSH32(esp, edi);
    eax = ebx + -2;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 0x14 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 4) = xmm1; /* movss */
    if (CMP_A(eax, 0x14)) goto loc_002FC091; /* ja: above (unsigned >) */

loc_002FC048: ;
    eax = ZX8(MEM8(eax + 0x2FC220));
    { uint32_t _jt = MEM32(eax * 4 + 0x2FC210); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002FC056u) goto loc_002FC056;
    if (_jt == 0x002FC066u) goto loc_002FC066;
    if (_jt == 0x002FC07Bu) goto loc_002FC07B;
    if (_jt == 0x002FC091u) goto loc_002FC091;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002FC056: ;
    xmm3 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 4) = xmm3; /* movss */
    goto loc_002FC08B;

loc_002FC066: ;
    xmm3 = MEMF(0x649148); /* movss */
    edi = 0xA;
    MEMF(esp + 4) = xmm3; /* movss */
    goto loc_002FC08B;

loc_002FC07B: ;
    xmm2 = MEMF(0x64A8BC); /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */

loc_002FC08B: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_002FC091: ;
    ecx = MEM32(esi + 0x568);
    fp_push(MEMF(ecx + 0x258)); /* fld float */
    eax = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(eax + 0x1D4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = MEMF(eax + 0x22C); /* movss */
    /* fld st(0) */
    xmm0 = xmm0 + xmm2; /* addss */
    /* FPU: fsin  */
    MEMF(esp + 0x20) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(ecx, ecx)) { sub_002FC11C(); return; } /* jne: not equal / not zero */

loc_002FC0ED: ;
    xmm1 = xmm1 - MEMF(eax + 0x25C); /* subss */
    xmm0 = MEMF(eax + 0x258); /* movss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    eax = esp + 0xC;
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_002FC11A: ;
    g_seh_ebp = ebp; sub_002FC193(); return; /* tail jmp 0x002FC193 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002FC240
 * Original: 0x002FC240 - 0x002FC2AB (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC240(void)
{

loc_002FC240: ;
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x309));
    MEM8(ecx + 0x308) = LO8(edx);
    ecx = MEM32(eax + 0x568);
    MEM8(ecx + 0x309) = 1;
    edx = MEM32(eax + 0x568);
    ecx = MEM32(eax + 0x568);
    edx = edx + 0x228;
    ecx = ecx + 0x340;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0x568);
    ecx = eax + 0x21C;
    edx = MEM32(ecx);
    eax = eax + 0x334;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC2B0
 * Original: 0x002FC2B0 - 0x002FC90A (1626 bytes, 365 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FC2B0: ;
    esp = esp - 0x20;
    eax = ZX16(MEM16(esi + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_L(eax, ecx)) goto loc_002FC2EA; /* jl: less (signed <) */

loc_002FC2E5: ;
    eax = 0x14;

loc_002FC2EA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    edx = eax;
    (void)0; /* cmp MEM32(esp + 0x38), ebp - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(MEM32(esp + 0x38), ebp)) goto loc_002FC307; /* je: equal / zero */

loc_002FC301: ;
    MEM32(edx + 0x84) = ebp;

loc_002FC307: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xA9));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ebx, 0xFF);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002FC718; /* je: equal / zero */

loc_002FC31D: ;
    ecx = ZX8(LO8(ecx));
    ecx--;
    if (CMP_A(ecx, 0xB)) goto loc_002FC70B; /* ja: above (unsigned >) */

loc_002FC32A: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2FC90C); /* switch: 15 entries, 14 targets */
    if (_jt == 0x002FC331u) goto loc_002FC331;
    if (_jt == 0x002FC397u) goto loc_002FC397;
    if (_jt == 0x002FC3BBu) goto loc_002FC3BB;
    if (_jt == 0x002FC473u) goto loc_002FC473;
    if (_jt == 0x002FC51Du) goto loc_002FC51D;
    if (_jt == 0x002FC529u) goto loc_002FC529;
    if (_jt == 0x002FC567u) goto loc_002FC567;
    if (_jt == 0x002FC583u) goto loc_002FC583;
    if (_jt == 0x002FC5D3u) goto loc_002FC5D3;
    if (_jt == 0x002FC649u) goto loc_002FC649;
    if (_jt == 0x002FC70Bu) goto loc_002FC70B;
    if (_jt == 0x002FC80Fu) goto loc_002FC80F;
    if (_jt == 0x002FC815u) goto loc_002FC815;
    if (_jt == 0x002FC81Au) goto loc_002FC81A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002FC331: ;
    SET_LO16(ecx, MEM16(esi + 0x52E));
    SET_LO16(edx, MEM16(esi + 0x52C));
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    MEM32(esi + 0xA4) = ebp;
    MEM8(eax + 0x44) = 0xD;
    eax = SX16(LO16(ecx));
    ecx = MEM32(esi + 0x568);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    SET_LO16(ecx, MEM16(esi + 0x530));
    edi = 0x96;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM16(esi + 0x170) = LO16(ecx);
    goto loc_002FC70B;

loc_002FC397: ;
    xmm0 = MEMF(0x648E68); /* movss */
    edi = 0xDD;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    goto loc_002FC70B;

loc_002FC3BB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30D510);
    ecx = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002FC3D0: ;
    SET_LO8(eax, MEM8(esi + 0x1B5));
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002FC443; /* jne: not equal / not zero */

loc_002FC3DD: ;
    edx = (int32_t)MEMF(esi + 0xDC); /* cvttss2si */
    if (TEST_NZ(edx, edx)) goto loc_002FC443; /* jne: not equal / not zero */

loc_002FC3E9: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648D20); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x181) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM32(eax + 0x1F8) = 1;
    ecx = MEM32(esi + 0x568);
    edi = 0x151;
    MEM32(ecx + 0x3DC) = edi;
    edx = MEM32(esi + 0x568);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(edx + 0x474) = edi;
    goto loc_002FC70B;

loc_002FC443: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x17);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_002FC453: ;
    eax = MEM32(esi + 0x568);
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;
    MEM32(eax + 0x1F8) = 2;
    goto loc_002FC70B;

loc_002FC473: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30D510);
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002FC485: ;
    SET_LO8(eax, MEM8(esi + 0x1B5));
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002FC4F8; /* jne: not equal / not zero */

loc_002FC492: ;
    ecx = (int32_t)MEMF(esi + 0xDC); /* cvttss2si */
    if (TEST_NZ(ecx, ecx)) goto loc_002FC4F8; /* jne: not equal / not zero */

loc_002FC49E: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648D20); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x181) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM32(edx + 0x1F8) = 3;
    eax = MEM32(esi + 0x568);
    edi = 0x14E;
    MEM32(eax + 0x3DC) = edi;
    ecx = MEM32(esi + 0x568);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(ecx + 0x474) = edi;
    goto loc_002FC70B;

loc_002FC4F8: ;
    PUSH32(esp, 0x17);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002FC501: ;
    edx = MEM32(esi + 0x568);
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    MEM32(edx + 0x1F8) = ebp;
    goto loc_002FC70B;

loc_002FC51D: ;
    MEM8(esi + 0x17B) = 1;
    goto loc_002FC70B;

loc_002FC529: ;
    if (CMP_EQ(MEM32(edx + 0x84), ebp)) goto loc_002FC70B; /* je: equal / zero */

loc_002FC535: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x30))) goto loc_002FC70B; /* jb: below (unsigned <) */

loc_002FC543: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    edi = 0x33;
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_002FC70B;

loc_002FC567: ;
    edi = 0x22D;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    goto loc_002FC70B;

loc_002FC583: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), LO16(ebp))) goto loc_002FC70B; /* je: equal / zero */

loc_002FC590: ;
    edx = MEM32(esi + 0x64);
    ecx = 5;
    if (CMP_EQ(edx, ecx)) goto loc_002FC70B; /* je: equal / zero */

loc_002FC5A0: ;
    /* comiss xmm1, MEMF(esi + 0xDC) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0xDC))) goto loc_002FC638; /* jb: below (unsigned <) */

loc_002FC5AD: ;
    MEM8(esi + 0x17D) = 0x32;
    MEM8(esi + 0x20C) = LO8(ebx);
    MEM32(eax + 0x1F8) = ebp;
    eax = MEM32(esi + 0x568);
    edi = 0x19A;
    MEM32(eax + 0xA0) = ebp;
    goto loc_002FC627;

loc_002FC5D3: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), LO16(ebp))) goto loc_002FC70B; /* je: equal / zero */

loc_002FC5E0: ;
    edx = MEM32(esi + 0x64);
    ecx = 5;
    if (CMP_EQ(edx, ecx)) goto loc_002FC70B; /* je: equal / zero */

loc_002FC5F0: ;
    /* comiss xmm1, MEMF(esi + 0xDC) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0xDC))) goto loc_002FC638; /* jb: below (unsigned <) */

loc_002FC5F9: ;
    SET_LO8(edx, MEM8(esi + 0x250));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002FC638; /* jne: not equal / not zero */

loc_002FC603: ;
    MEM8(esi + 0x17D) = 0x7D;
    MEM8(esi + 0x20C) = LO8(ebx);
    MEM32(eax + 0x1F8) = ebp;
    edx = MEM32(esi + 0x568);
    edi = 0x2E7;
    MEM32(edx + 0xA0) = ebp;

loc_002FC627: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */

loc_002FC638: ;
    MEM8(esi + 0x180) = LO8(ecx);
    MEM8(esi + 0x181) = LO8(ecx);
    goto loc_002FC70B;

loc_002FC649: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x59D944)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002FC6F8; /* jbe: below or equal (unsigned <=) */

loc_002FC686: ;
    eax = MEM32(esp + 0x38);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002FC69F: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, LO16(eax));
    esp = esp + 4;
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_002EB710(); /* call 0x002EB710 */

loc_002FC6B0: ;
    xmm0 = MEMF(0x649444); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    esp = esp + 4;
    edx = esi + 0x284;
    ecx = esi + 0x280;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EB760(); /* call 0x002EB760 */

loc_002FC6EB: ;
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    goto loc_002FC70B;

loc_002FC6F8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x284) = xmm0; /* movss */
    MEMF(esi + 0x280) = xmm0; /* movss */

loc_002FC70B: ;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0xA9) = 0;

loc_002FC718: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002FC8DB; /* jne: not equal / not zero */

loc_002FC725: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(eax + 0x2B8), ebp)) goto loc_002FC74A; /* je: equal / zero */

loc_002FC733: ;
    ecx = MEM32(esi + 0x564);
    if (CMP_EQ(ecx, ebp)) goto loc_002FC8DB; /* je: equal / zero */

loc_002FC741: ;
    if (CMP_EQ(MEM8(ecx), 1)) goto loc_002FC8DB; /* je: equal / zero */

loc_002FC74A: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(ecx + 0x84);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_EQ(ebx, ebp)) goto loc_002FC75C; /* je: equal / zero */

loc_002FC75A: ;
    SET_LO8(edx, 1);

loc_002FC75C: ;
    SET_LO8(ecx, MEM8(esi + 0x250));
    if (CMP_A(LO8(ecx) & LO8(ecx), 0)) goto loc_002FC771; /* ja: above (unsigned >) */

loc_002FC766: ;
    SET_LO8(ebx, MEM8(eax + 0x66));
    SET_LO8(ebx, LO8(ebx) & 0xF);
    if (CMP_NE(LO8(ebx), 2)) goto loc_002FC77C; /* jne: not equal / not zero */

loc_002FC771: ;
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(MEM32(ebx + 0x24), ebp)) goto loc_002FC77C; /* je: equal / zero */

loc_002FC77A: ;
    SET_LO8(edx, 1);

loc_002FC77C: ;
    if (CMP_NE(edi, ebp)) goto loc_002FC8DF; /* jne: not equal / not zero */

loc_002FC784: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002FC903; /* je: equal / zero */

loc_002FC78C: ;
    SET_LO8(edx, MEM8(eax + 0x66));
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xF);
    if (CMP_EQ(LO8(ebx), 1)) goto loc_002FC903; /* je: equal / zero */

loc_002FC79D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x30))) goto loc_002FC903; /* jb: below (unsigned <) */

loc_002FC7AB: ;
    SET_LO8(ebx, 0xFF);
    if (CMP_EQ(MEM8(esi + 0x180), LO8(ebx))) goto loc_002FC903; /* je: equal / zero */

loc_002FC7B9: ;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_002FC82B; /* jbe: below or equal (unsigned <=) */

loc_002FC7BD: ;
    if (TEST_NZ(MEM8(esi + 0x468), 0x20)) goto loc_002FC903; /* jne: not equal / not zero */

loc_002FC7CA: ;
    eax = MEM32(0x84A5F8);
    xmm0 = MEMF(0x6496F8); /* movss */
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = edx + eax + -1744;
    eax = MEM32(eax + 0x68);
    eax = eax + 0xFFFFFF58u;
    (void)0; /* cmp eax, 0x8D - flags set for next jcc */
    edi = 0xD6;
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_A(eax, 0x8D)) goto loc_002FC81A; /* ja: above (unsigned >) */

loc_002FC801: ;
    ecx = ZX8(MEM8(eax + 0x2FC948));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2FC93C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x002FC80Fu) goto loc_002FC80F;
    if (_jt == 0x002FC815u) goto loc_002FC815;
    if (_jt == 0x002FC81Au) goto loc_002FC81A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002FC80F: ;
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_002FC815: ;
    edi = 0x50B;

loc_002FC81A: ;
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    goto loc_002FC8D9;

loc_002FC82B: ;
    SET_LO8(ecx, MEM8(eax + 0x97));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002FC83F; /* jne: not equal / not zero */

loc_002FC835: ;
    ecx = MEM32(eax + 0xAC);
    if (TEST_Z(ecx, ecx)) goto loc_002FC848; /* je: equal / zero */

loc_002FC83F: ;
    if (CMP_NE(LO8(edx), 2)) goto loc_002FC903; /* jne: not equal / not zero */

loc_002FC848: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_EQ(ecx, 0x45)) goto loc_002FC903; /* je: equal / zero */

loc_002FC857: ;
    if (CMP_EQ(ecx, 0x2D)) goto loc_002FC903; /* je: equal / zero */

loc_002FC860: ;
    if (CMP_EQ(ecx, 0x2B)) goto loc_002FC903; /* je: equal / zero */

loc_002FC869: ;
    if (CMP_EQ(ecx, 0x30)) goto loc_002FC903; /* je: equal / zero */

loc_002FC872: ;
    if (CMP_EQ(ecx, 0x34)) goto loc_002FC903; /* je: equal / zero */

loc_002FC87B: ;
    (void)0; /* cmp MEM16(eax + 8), 0 - flags set for next jcc */
    MEM8(esi + 0x17D) = LO8(ebx);
    if (CMP_EQ(MEM16(eax + 8), 0)) goto loc_002FC8A5; /* je: equal / zero */

loc_002FC888: ;
    xmm0 = MEMF(0x649B50); /* movss */
    MEM8(esi + 0x180) = LO8(ebx);
    edi = 0x33;
    MEMF(esp + 0xC) = xmm0; /* movss */
    ebp = 0; /* xor self */
    goto loc_002FC8E4;

loc_002FC8A5: ;
    ecx = MEM32(eax + 0xBC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm1 = MEMF(0x6496B8); /* movss */
    edi = 0x1DC;
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_002FC8CC; /* jne: not equal / not zero */

loc_002FC8C2: ;
    SET_LO8(ecx, MEM8(eax + 0x66));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002FC8CC; /* jne: not equal / not zero */

loc_002FC8C9: ;
    edi = edi | 0xFFFFFFFFu;

loc_002FC8CC: ;
    MEM8(esi + 0x17A) = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_002FC8D9: ;
    ebp = 0; /* xor self */

loc_002FC8DB: ;
    if (CMP_EQ(edi, ebp)) goto loc_002FC903; /* je: equal / zero */

loc_002FC8DF: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_002FC903; /* je: equal / zero */

loc_002FC8E4: ;
    if (CMP_NE(MEM32(esp + 0x34), ebp)) goto loc_002FC903; /* jne: not equal / not zero */

loc_002FC8EA: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002FC900: ;
    esp = esp + 0x18;

loc_002FC903: ;
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_002FC9E0
 * Original: 0x002FC9E0 - 0x002FCA7D (157 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC9E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002FC9E0: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = MEM32(ecx + edx + 0x3C4);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx + 0x3C4);
    if (TEST_Z(esi, esi)) goto loc_002FCA7B; /* je: equal / zero */

loc_002FCA05: ;
    if (TEST_Z(ecx, ecx)) goto loc_002FCA7B; /* je: equal / zero */

loc_002FCA09: ;
    eax = ecx + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002FCA13: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_002FCA24; /* je: equal / zero */

loc_002FCA1A: ;
    xmm1 = MEMF(eax + 0xDC); /* movss */
    goto loc_002FCA27;

loc_002FCA24: ;
    xmm1 = xmm2; /* movaps */

loc_002FCA27: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002FCA31: ;
    if (TEST_Z(eax, eax)) goto loc_002FCA7B; /* je: equal / zero */

loc_002FCA35: ;
    /* comiss xmm2, MEMF(eax + 0xE8) - sets EFLAGS */
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(eax + 0xE8))) goto loc_002FCA6B; /* ja: above (unsigned >) */

loc_002FCA59: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FCA6B: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_002FCA7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FCA80
 * Original: 0x002FCA80 - 0x002FCC2F (431 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FCA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FCA80: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x135));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = eax + ecx + -1744;
    eax = MEM32(ecx + 0x68);
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    PUSH32(esp, ebx);
    edx = 0xF;
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_NE(eax, 0xC)) goto loc_002FCB85; /* jne: not equal / not zero */

loc_002FCABB: ;
    SET_LO8(eax, MEM8(ecx + 0x452));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx + 0x455));
    edx = edx & 0x1F;
    edx = edx << 8;
    edx = edx + edi;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x64ABC4); /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    POP32(esp, edi);
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_002FCB5B; /* js: sign (negative) */

loc_002FCAEC: ;
    /* comiss xmm0, MEMF(ecx + 0x110) - sets EFLAGS */
    xmm0 = 0.0f; /* xorps self = zero */
    if ((xmm0 >= MEMF(ecx + 0x110))) goto loc_002FCB55; /* jae: above or equal (unsigned >=) */

loc_002FCAF8: ;
    if (TEST_Z(MEM8(ecx + 0x438), 0x10)) goto loc_002FCB12; /* je: equal / zero */

loc_002FCB01: ;
    xmm2 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002FCB55; /* jnp: not parity */

loc_002FCB12: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 / MEMF(ecx + 0x260); /* divss */
    xmm0 = xmm0 * MEMF(ecx + 0x110); /* mulss */
    xmm1 = xmm1 * MEMF(0x648CE4); /* mulss */
    (void)0; /* test MEM8(ecx + 0x452), 0x20 - flags set for next jcc */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_NZ(MEM8(ecx + 0x452), 0x20)) goto loc_002FCB5B; /* jne: not equal / not zero */

loc_002FCB4D: ;
    xmm0 = xmm0 + MEMF(0x648EA8); /* addss */

loc_002FCB55: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_002FCB5B: ;
    ecx = MEM32(ecx + 0xA4);
    (void)0; /* cmp ecx, 0xC - flags set for next jcc */
    edx = 0x5A;
    if (CMP_NE(ecx, 0xC)) goto loc_002FCB75; /* jne: not equal / not zero */

loc_002FCB6B: ;
    edx = 0x5B;
    goto loc_002FCC01;

loc_002FCB75: ;
    if (CMP_NE(ecx, 0xD)) goto loc_002FCC01; /* jne: not equal / not zero */

loc_002FCB7E: ;
    edx = 0x5C;
    goto loc_002FCC01;

loc_002FCB85: ;
    if (CMP_NE(eax, 0x53)) goto loc_002FCBAD; /* jne: not equal / not zero */

loc_002FCB8A: ;
    ecx = MEM32(ecx + 0xA4);
    (void)0; /* cmp ecx, 0xB - flags set for next jcc */
    edx = 0x8C;
    if (CMP_NE(ecx, 0xB)) goto loc_002FCBA1; /* jne: not equal / not zero */

loc_002FCB9A: ;
    edx = 0xA2;
    goto loc_002FCC01;

loc_002FCBA1: ;
    if (CMP_NE(ecx, 0xD)) goto loc_002FCC01; /* jne: not equal / not zero */

loc_002FCBA6: ;
    edx = 0xA3;
    goto loc_002FCC01;

loc_002FCBAD: ;
    if (CMP_NE(eax, 0x21)) goto loc_002FCBB9; /* jne: not equal / not zero */

loc_002FCBB2: ;
    edx = 0x169;
    goto loc_002FCC01;

loc_002FCBB9: ;
    if (CMP_NE(eax, 0x8A)) goto loc_002FCBDA; /* jne: not equal / not zero */

loc_002FCBC0: ;
    SET_LO8(ebx, MEM8(ecx + 0x43D));
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ebx), 4)) ? 1 : 0); /* setne */
    edx--;
    edx = edx & 3;
    edx = edx + 0x1A1;
    goto loc_002FCC01;

loc_002FCBDA: ;
    if (CMP_EQ(eax, 0xC1)) goto loc_002FCBFC; /* je: equal / zero */

loc_002FCBE1: ;
    if (CMP_EQ(eax, 0xCC)) goto loc_002FCBFC; /* je: equal / zero */

loc_002FCBE8: ;
    if (CMP_NE(MEM32(ecx + 0x64), 0x35)) goto loc_002FCC01; /* jne: not equal / not zero */

loc_002FCBEE: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_0038D680(); /* call 0x0038D680 */

loc_002FCBF6: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002FCBFC: ;
    edx = 0x1A1;

loc_002FCC01: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002FCC17: ;
    ecx = ZX8(MEM8(esi + 0x135));
    eax = ZX16(MEM16(esi + 0x60));
    esp = esp + 0x18;
    ecx--;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002FC9E0(); return; /* tail jmp 0x002FC9E0 */

}

/**
 * sub_002FCC30
 * Original: 0x002FCC30 - 0x002FCCBA (138 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FCC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FCC30: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x648D18); /* movss */
    ecx = MEM32(ebx + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x3A0));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(ebx + 0x118); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0xC) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002FCC9B; /* je: equal / zero */

loc_002FCC88: ;
    xmm3 = MEMF(ecx + 0x390); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_002FCC9B; /* jbe: below or equal (unsigned <=) */

loc_002FCC95: ;
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm1; /* movaps */

loc_002FCC9B: ;
    if (CMP_LE(MEM16(ecx + 0x5E), 0)) { sub_002FCCBA(); return; } /* jle: less or equal (signed <=) */

loc_002FCCA2: ;
    xmm0 = xmm0 * MEMF(0x64A5AC); /* mulss */
    esi = 0x4C;
    MEMF(esp + 0xC) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002FD678(); return; /* tail jmp 0x002FD678 */

}

/**
 * sub_002FD7D0
 * Original: 0x002FD7D0 - 0x002FD9D5 (517 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD7D0: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xE;
    edi = esp + 0x58;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(ebp + 0xCE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002FD8A5; /* je: equal / zero */

loc_002FD803: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002FD8A5; /* je: equal / zero */

loc_002FD811: ;
    ebx = MEM32(eax + 0x444);
    if (TEST_Z(ebx, ebx)) goto loc_002FD8A5; /* je: equal / zero */

loc_002FD81F: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    edi = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_002FD832: ;
    if (TEST_Z(eax, eax)) goto loc_002FD889; /* je: equal / zero */

loc_002FD836: ;
    eax = MEM32(eax + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    edi = esp + 0x24;
    ecx = ebx;
    PUSH32(esp, 0); sub_0032F340(); /* call 0x0032F340 */

loc_002FD84D: ;
    edx = MEM32(ebp + 0x568);
    edx = MEM32(edx + 0x444);
    esp = esp + 4;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0032F390(); /* call 0x0032F390 */

loc_002FD865: ;
    eax = MEM32(ebp + 0x568);
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0x2DE) = LO16(ecx);
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(edx + 0x2BF) = LO8(eax);
    goto loc_002FD8A5;

loc_002FD889: ;
    eax = MEM32(ebp + 0x568);
    MEM16(eax + 0x2DE) = 0;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x2BF) = 0;

loc_002FD8A5: ;
    eax = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x68) = 1;
    if (CMP_L(eax, edx)) goto loc_002FD8C1; /* jl: less (signed <) */

loc_002FD8BC: ;
    eax = 0x14;

loc_002FD8C1: ;
    ebx = MEM32(esp + 0x9C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    edi = MEM32(esp + 0xA4);
    xmm0 = MEMF(ebp + 0x110); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0x98); /* movss */
    eax = eax + 0x763260;
    edx = eax;
    eax = MEM32(esp + 0xA8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(esp + 0x82) = (TEST_NZ(ebx, ebx)) ? 1 : 0; /* setne */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x78) = eax;
    eax = MEM32(ebp + 0x568);
    MEM8(esp + 0x83) = (TEST_NZ(edi, edi)) ? 1 : 0; /* setne */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x118); /* movss */
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x54) = 0;
    MEMF(esp + 0x5C) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEM8(esp + 0x71) = 1;
    MEM32(esp + 0x84) = esi;
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) { sub_002FD9D5(); return; } /* je: equal / zero */

loc_002FD973: ;
    ebx = MEM32(eax + 0x444);
    if (TEST_Z(ebx, ebx)) { sub_002FD9D5(); return; } /* je: equal / zero */

loc_002FD97D: ;
    edi = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_002FD986: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002FD9C4; /* je: equal / zero */

loc_002FD98C: ;
    ecx = MEM32(edi + 0x1C);
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002FD9A7; /* jne: not equal / not zero */

loc_002FD996: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x8C);
    eax = ebx;
    PUSH32(esp, 0); sub_0032FE10(); /* call 0x0032FE10 */

loc_002FD9A7: ;
    eax = MEM32(edi + 8);
    edx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + edx + 0x2C);
    edx = MEM32(esp + 0x8C);
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_002FDA07(); return; /* tail jmp 0x002FDA07 */

loc_002FD9C4: ;
    edx = MEM32(esp + 0x8C);
    MEM32(esp + 0x10) = 0;
    g_seh_ebp = ebp; sub_002FDA07(); return; /* tail jmp 0x002FDA07 */

}

/**
 * sub_00300740
 * Original: 0x00300740 - 0x00300E9F (1887 bytes, 464 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300740: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003007E9; /* jne: not equal / not zero */

loc_00300759: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    if (CMP_EQ(eax, ebx)) goto loc_00300773; /* je: equal / zero */

loc_00300769: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0032F650(); /* call 0x0032F650 */

loc_00300770: ;
    esp = esp + 8;

loc_00300773: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x1F8);
    if (CMP_NE(edx, 1)) goto loc_003007B0; /* jne: not equal / not zero */

loc_00300784: ;
    if (CMP_EQ(MEM32(eax + 0xA0), ebx)) goto loc_003007B0; /* je: equal / zero */

loc_0030078C: ;
    ecx = MEM32(eax + 0x3DC);
    if (CMP_NE(MEM32(ebp + 0xA4), ecx)) goto loc_0030079F; /* jne: not equal / not zero */

loc_0030079A: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_003007B0; /* jne: not equal / not zero */

loc_0030079F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x1F8) = 2;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003007B0: ;
    if (CMP_NE(edx, 3)) goto loc_00300E98; /* jne: not equal / not zero */

loc_003007B9: ;
    if (CMP_NE(MEM32(eax + 0xA0), ebx)) goto loc_00300E98; /* jne: not equal / not zero */

loc_003007C5: ;
    ecx = MEM32(eax + 0x3DC);
    if (CMP_NE(MEM32(ebp + 0xA4), ecx)) goto loc_003007DC; /* jne: not equal / not zero */

loc_003007D3: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00300E98; /* jne: not equal / not zero */

loc_003007DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x1F8) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003007E9: ;
    esi = MEM32(ebp + 0x568);
    ecx = MEM32(esi + 0x444);
    (void)0; /* cmp MEM32(ecx + 8), 6 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx + 8), 6)) goto loc_00300899; /* jne: not equal / not zero */

loc_00300800: ;
    if (CMP_NE(MEM32(esi + 0xA0), 0x59)) goto loc_00300839; /* jne: not equal / not zero */

loc_00300809: ;
    eax = esi;
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0030081C: ;
    if (CMP_EQ(eax, ebx)) goto loc_00300899; /* je: equal / zero */

loc_00300820: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    ecx = ecx + edx + 0x14;
    if (CMP_EQ(ecx, ebx)) goto loc_00300899; /* je: equal / zero */

loc_00300834: ;
    if (CMP_EQ(MEM32(ecx), 0x13)) goto loc_00300899; /* je: equal / zero */

loc_00300839: ;
    eax = MEM32(ebp + 0xA4);
    if (CMP_EQ(eax, MEM32(esi + 0x3DC))) goto loc_00300899; /* je: equal / zero */

loc_00300847: ;
    if (CMP_NE(MEM8(esi + 0x5DD), 1)) goto loc_00300899; /* jne: not equal / not zero */

loc_00300850: ;
    PUSH32(esp, 0x5F5334);
    eax = ebp;
    MEM8(esi + 0x5DD) = 0;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00300863: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x624) = xmm0; /* movss */
    MEMF(ebp + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    esp = esp + 4;
    MEMF(ebp + 0x628) = xmm1; /* movss */
    MEMF(ebp + 0x630) = xmm0; /* movss */

loc_00300899: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300E97; /* jne: not equal / not zero */

loc_003008A7: ;
    eax = MEM32(ebp + 0x568);
    (void)0; /* cmp MEM32(eax + 0x1F8), ebx - flags set for next jcc */
    edi = 2;
    if (CMP_NE(MEM32(eax + 0x1F8), ebx)) goto loc_003008EF; /* jne: not equal / not zero */

loc_003008BA: ;
    ecx = MEM32(ebp + 0xA4);
    if (CMP_EQ(ecx, MEM32(eax + 0x3DC))) goto loc_003008EF; /* je: equal / zero */

loc_003008C8: ;
    if (CMP_EQ(MEM32(eax + 0xA0), ebx)) goto loc_003008EF; /* je: equal / zero */

loc_003008D0: ;
    ecx = eax;
    edx = ZX8(MEM8(ecx + 0x97));
    esi = MEM32(ecx + 0xA0);
    edx = edx & 0xFFFFFF7Fu;
    if (CMP_NE(esi, edx)) goto loc_003008EF; /* jne: not equal / not zero */

loc_003008E9: ;
    MEM32(eax + 0x1F8) = edi;

loc_003008EF: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x2F8);
    if (CMP_NE(ecx, MEM32(eax + 0x2FC))) goto loc_00300AD4; /* jne: not equal / not zero */

loc_00300907: ;
    ecx = eax;
    edx = MEM32(ecx + 0x1F8);
    if (CMP_NE(edx, edi)) goto loc_0030092C; /* jne: not equal / not zero */

loc_00300913: ;
    esi = ZX8(MEM8(eax + 0x97));
    esi = esi & 0xFFFFFF7Fu;
    if (CMP_NE(MEM32(eax + 0xA0), esi)) goto loc_00300AD4; /* jne: not equal / not zero */

loc_0030092C: ;
    eax = MEM32(ebp + 0x568);
    esi = ZX8(MEM8(eax + 0x97));
    esi = esi & 0xFFFFFF7Fu;
    if (CMP_NE(MEM32(eax + 0xA0), esi)) goto loc_00300969; /* jne: not equal / not zero */

loc_00300947: ;
    if (CMP_NE(edx, 1)) goto loc_00300969; /* jne: not equal / not zero */

loc_0030094C: ;
    edx = MEM32(ecx + 0x2F8);
    PUSH32(esp, edx);
    esi = ebp;
    PUSH32(esp, 0); sub_003151A0(); /* call 0x003151A0 */

loc_0030095A: ;
    eax = MEM32(ebp + 0x568);
    esp = esp + 4;
    MEM32(eax + 0x1F8) = edi;

loc_00300969: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300A2B; /* jne: not equal / not zero */

loc_00300977: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edx + 0x22));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300A2B; /* jne: not equal / not zero */

loc_00300988: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_002D6390(); /* call 0x002D6390 */

loc_0030098F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300A2B; /* jne: not equal / not zero */

loc_00300997: ;
    eax = MEM32(ebp + 0xA4);
    PUSH32(esp, 0); sub_00301150(); /* call 0x00301150 */

loc_003009A2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300A2B; /* jne: not equal / not zero */

loc_003009AA: ;
    (void)0; /* cmp MEM32(edx + 0x2F8), ebx - flags set for next jcc */
    eax = MEM32(edx + 0x1F8);
    if (CMP_NE(MEM32(edx + 0x2F8), ebx)) goto loc_00300A3D; /* jne: not equal / not zero */

loc_003009BC: ;
    if (CMP_EQ(eax, ebx)) goto loc_00300AB7; /* je: equal / zero */

loc_003009C4: ;
    if (CMP_BE(MEM8(edx + 0x3E8), 0x1E)) goto loc_00300AC3; /* jbe: below or equal (unsigned <=) */

loc_003009D1: ;
    ecx = edx;
    MEM32(ecx + 0x1F8) = ebx;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xA0), 0x43)) goto loc_00300A2B; /* je: equal / zero */

loc_003009E8: ;
    eax = edx;
    eax = MEM32(eax + 0xA0);
    if (CMP_EQ(eax, 0x4A)) goto loc_00300A2B; /* je: equal / zero */

loc_003009F5: ;
    if (CMP_EQ(eax, 0x4B)) goto loc_00300A2B; /* je: equal / zero */

loc_003009FA: ;
    if (CMP_EQ(eax, 0x4C)) goto loc_00300A2B; /* je: equal / zero */

loc_003009FF: ;
    if (CMP_EQ(eax, 0x4D)) goto loc_00300A2B; /* je: equal / zero */

loc_00300A04: ;
    if (CMP_EQ(eax, 0x4E)) goto loc_00300A2B; /* je: equal / zero */

loc_00300A09: ;
    if (CMP_EQ(eax, 0x4F)) goto loc_00300A2B; /* je: equal / zero */

loc_00300A0E: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003150E0(); /* call 0x003150E0 */

loc_00300A15: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x39) = 0;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0xA0) = ebx;

loc_00300A2B: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x3E8) = 0;
    goto loc_00300C13;

loc_00300A3D: ;
    if (CMP_EQ(eax, edi)) goto loc_00300AB7; /* je: equal / zero */

loc_00300A41: ;
    if (CMP_BE(MEM8(edx + 0x3E8), 0x1E)) goto loc_00300AC3; /* jbe: below or equal (unsigned <=) */

loc_00300A4A: ;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x1F8) = edi;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xA0), 0x43)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A65: ;
    eax = edx;
    eax = MEM32(eax + 0xA0);
    if (CMP_EQ(eax, 0x4A)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A72: ;
    if (CMP_EQ(eax, 0x4B)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A77: ;
    if (CMP_EQ(eax, 0x4C)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A7C: ;
    if (CMP_EQ(eax, 0x4D)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A81: ;
    if (CMP_EQ(eax, 0x4E)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A86: ;
    if (CMP_EQ(eax, 0x4F)) goto loc_00300AB1; /* je: equal / zero */

loc_00300A8B: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003150E0(); /* call 0x003150E0 */

loc_00300A92: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x39) = 0;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x300);
    ecx = MEM32(edx + 0x50);
    MEM32(eax + 0xA0) = ecx;

loc_00300AB1: ;
    edx = MEM32(ebp + 0x568);

loc_00300AB7: ;
    MEM8(edx + 0x3E8) = 0;
    goto loc_00300C13;

loc_00300AC3: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x3E8) = MEM8(eax + 0x3E8) + 1;
    goto loc_00300C13;

loc_00300AD4: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x2F8), ebx)) goto loc_00300B6C; /* jne: not equal / not zero */

loc_00300AE6: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_00300AED: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300C13; /* jne: not equal / not zero */

loc_00300AF5: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00311D70(); /* call 0x00311D70 */

loc_00300AFC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300C13; /* jne: not equal / not zero */

loc_00300B04: ;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x1F8) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0xA0) = ebx;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM8(eax + 0x70), 1)) goto loc_00300B31; /* jne: not equal / not zero */

loc_00300B28: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00300B2E: ;
    esp = esp + 4;

loc_00300B31: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x2F8);
    MEM32(eax + 0x2FC) = ecx;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x300);
    MEM32(eax + 0x304) = edx;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(ecx);
    goto loc_00300C13;

loc_00300B6C: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x300);
    ecx = MEM32(ecx + 0xA0);
    if (CMP_NE(ecx, MEM32(edx + 0x50))) goto loc_00300B8F; /* jne: not equal / not zero */

loc_00300B83: ;
    if (CMP_EQ(MEM32(eax + 0x1F8), edi)) goto loc_00300C13; /* je: equal / zero */

loc_00300B8F: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_00300B96: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300C13; /* jne: not equal / not zero */

loc_00300B9A: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x300);
    ecx = MEM32(edx + 0x50);
    MEM32(eax + 0xA0) = ecx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x1F8) = edi;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x2C2) = 0;
    ecx = MEM32(ebp + 0x568);
    if (CMP_NE(MEM8(ecx + 0x70), 1)) goto loc_00300BDD; /* jne: not equal / not zero */

loc_00300BD4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00300BDA: ;
    esp = esp + 4;

loc_00300BDD: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x2F8);
    MEM32(eax + 0x2FC) = edx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x300);
    MEM32(eax + 0x304) = ecx;
    eax = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(edx);

loc_00300C13: ;
    ebx = MEM32(ebp + 0x568);
    if (TEST_Z(ebx, ebx)) goto loc_00300E97; /* je: equal / zero */

loc_00300C21: ;
    if (CMP_NE(MEM32(ebx + 0xBC), edi)) goto loc_00300E97; /* jne: not equal / not zero */

loc_00300C2D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = ebx;
    edi = MEM32(eax + 0xA0);
    SET_LO8(ecx, MEM8(eax + 0x308));
    SET_LO8(edx, MEM8(eax + 0x309));
    eax = MEM32(eax + 0x444);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x10) = 0;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x20) = 1;
    MEM32(esp + 0x24) = edi;
    MEM8(esp + 0x28) = LO8(ecx);
    MEM8(esp + 0x29) = LO8(edx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00300C8A: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x2C) = esi;
    if (TEST_Z(esi, esi)) goto loc_00300CBB; /* je: equal / zero */

loc_00300C94: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebx + 0x444);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = MEM32(eax + ecx + 0x48);
    eax = eax + ecx + 0x40;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(edx + eax + 0x14);
    MEM32(esp + 0x30) = ecx;
    goto loc_00300CC3;

loc_00300CBB: ;
    MEM32(esp + 0x30) = 0x3E;

loc_00300CC3: ;
    eax = MEM32(ebx + 0xA0);
    if (TEST_NZ(eax, eax)) goto loc_00300D19; /* jne: not equal / not zero */

loc_00300CCD: ;
    SET_LO8(eax, MEM8(esp + 0x29));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00300D19; /* jne: not equal / not zero */

loc_00300CD5: ;
    if (CMP_EQ(MEM16(ebx + 0x2C6), 0)) goto loc_00300D19; /* je: equal / zero */

loc_00300CDF: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031FCA0(); /* call 0x0031FCA0 */

loc_00300CE6: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1750(); /* call 0x002B1750 */

loc_00300CF7: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(ebp + 0x568);
    esp = esp + 8;
    MEM16(edx + 0x2C6) = 0;

loc_00300D19: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0xA0);
    eax = eax + 0xFFFFFFAFu;
    if (CMP_A(eax, 0x23)) goto loc_00300E6A; /* ja: above (unsigned >) */

loc_00300D31: ;
    ecx = ZX8(MEM8(eax + 0x300EF0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x300EA0); /* switch: 20 entries, 19 targets */
    if (_jt == 0x00300D3Fu) goto loc_00300D3F;
    if (_jt == 0x00300D4Fu) goto loc_00300D4F;
    if (_jt == 0x00300D61u) goto loc_00300D61;
    if (_jt == 0x00300D73u) goto loc_00300D73;
    if (_jt == 0x00300D85u) goto loc_00300D85;
    if (_jt == 0x00300D99u) goto loc_00300D99;
    if (_jt == 0x00300DADu) goto loc_00300DAD;
    if (_jt == 0x00300DBDu) goto loc_00300DBD;
    if (_jt == 0x00300DD1u) goto loc_00300DD1;
    if (_jt == 0x00300DE3u) goto loc_00300DE3;
    if (_jt == 0x00300DF4u) goto loc_00300DF4;
    if (_jt == 0x00300E05u) goto loc_00300E05;
    if (_jt == 0x00300E12u) goto loc_00300E12;
    if (_jt == 0x00300E1Fu) goto loc_00300E1F;
    if (_jt == 0x00300E30u) goto loc_00300E30;
    if (_jt == 0x00300E3Du) goto loc_00300E3D;
    if (_jt == 0x00300E4Eu) goto loc_00300E4E;
    if (_jt == 0x00300E5Fu) goto loc_00300E5F;
    if (_jt == 0x00300E6Au) goto loc_00300E6A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00300D3F: ;
    eax = esp + 0x10;
    ecx = ebp;
    PUSH32(esp, 0); sub_00329B50(); /* call 0x00329B50 */

loc_00300D4A: ;
    goto loc_00300E6A;

loc_00300D4F: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_003282A0(); /* call 0x003282A0 */

loc_00300D59: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300D61: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0031B8D0(); /* call 0x0031B8D0 */

loc_00300D6B: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300D73: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00323730(); /* call 0x00323730 */

loc_00300D7D: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300D85: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_0031E7E0(); /* call 0x0031E7E0 */

loc_00300D91: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300D99: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00327370(); /* call 0x00327370 */

loc_00300DA5: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300DAD: ;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00325AE0(); /* call 0x00325AE0 */

loc_00300DB8: ;
    goto loc_00300E6A;

loc_00300DBD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_0031DF20(); /* call 0x0031DF20 */

loc_00300DC9: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300DD1: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00320DC0(); /* call 0x00320DC0 */

loc_00300DDB: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300DE3: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_003224E0(); /* call 0x003224E0 */

loc_00300DEF: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300DF4: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0031D8B0(); /* call 0x0031D8B0 */

loc_00300E00: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300E05: ;
    esi = esp + 0x10;
    ebx = ebp;
    PUSH32(esp, 0); sub_003205E0(); /* call 0x003205E0 */

loc_00300E10: ;
    goto loc_00300E6A;

loc_00300E12: ;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00326910(); /* call 0x00326910 */

loc_00300E1D: ;
    goto loc_00300E6A;

loc_00300E1F: ;
    SET_LO8(eax, MEM8(esp + 0x29));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00300E6A; /* je: equal / zero */

loc_00300E27: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00328B30(); /* call 0x00328B30 */

loc_00300E2E: ;
    goto loc_00300E6A;

loc_00300E30: ;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_003241C0(); /* call 0x003241C0 */

loc_00300E3B: ;
    goto loc_00300E6A;

loc_00300E3D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_003215F0(); /* call 0x003215F0 */

loc_00300E49: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300E4E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_0031F3A0(); /* call 0x0031F3A0 */

loc_00300E5A: ;
    esp = esp + 4;
    goto loc_00300E6A;

loc_00300E5F: ;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0031CC30(); /* call 0x0031CC30 */

loc_00300E6A: ;
    edx = MEM32(esp + 0x10);
    if (TEST_Z(edx, edx)) goto loc_00300E97; /* je: equal / zero */

loc_00300E72: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00300E97; /* je: equal / zero */

loc_00300E77: ;
    eax = ZX8(MEM8(esp + 0x20));
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00300E94: ;
    esp = esp + 0x18;

loc_00300E97: ;
    POP32(esp, edi);

loc_00300E98: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00300F20
 * Original: 0x00300F20 - 0x00300F3D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00300F20: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(edx + 0x84));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00300F3D(); return; } /* je: equal / zero */

loc_00300F31: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002FB960(); /* call 0x002FB960 */

loc_00300F38: ;
    esp = esp + 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00300FE0
 * Original: 0x00300FE0 - 0x00300FF9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300FE0: ;
    eax = eax + 0xFFFFFFDAu;
    if (CMP_A(eax, 0x3E)) { sub_00300FF9(); return; } /* ja: above (unsigned >) */

loc_00300FE8: ;
    eax = ZX8(MEM8(eax + 0x301004));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x300FFC)); return; /* indirect tail jmp */

    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00301050
 * Original: 0x00301050 - 0x00301062 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301050: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 9)) { sub_00301062(); return; } /* je: equal / zero */

loc_0030105A: ;
    if (CMP_EQ(eax, 0x51)) { sub_00301062(); return; } /* je: equal / zero */

loc_0030105F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00301070
 * Original: 0x00301070 - 0x00301087 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301070: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x24)) { sub_00301087(); return; } /* je: equal / zero */

loc_0030107A: ;
    if (CMP_EQ(eax, 0x52)) { sub_00301087(); return; } /* je: equal / zero */

loc_0030107F: ;
    if (CMP_EQ(eax, 0x74)) { sub_00301087(); return; } /* je: equal / zero */

loc_00301084: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00301090
 * Original: 0x00301090 - 0x003010A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301090: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x16)) { sub_003010A2(); return; } /* je: equal / zero */

loc_0030109A: ;
    if (CMP_EQ(eax, 0x53)) { sub_003010A2(); return; } /* je: equal / zero */

loc_0030109F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003010B0
 * Original: 0x003010B0 - 0x003010C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003010B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003010B0: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x14)) { sub_003010C2(); return; } /* je: equal / zero */

loc_003010BA: ;
    if (CMP_EQ(eax, 0x54)) { sub_003010C2(); return; } /* je: equal / zero */

loc_003010BF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003010D0
 * Original: 0x003010D0 - 0x003010E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003010D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003010D0: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x55)) { sub_003010E2(); return; } /* je: equal / zero */

loc_003010DA: ;
    if (CMP_EQ(eax, 0x72)) { sub_003010E2(); return; } /* je: equal / zero */

loc_003010DF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003010F0
 * Original: 0x003010F0 - 0x00301102 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003010F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003010F0: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x37)) { sub_00301102(); return; } /* je: equal / zero */

loc_003010FA: ;
    if (CMP_EQ(eax, 0x56)) { sub_00301102(); return; } /* je: equal / zero */

loc_003010FF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00301110
 * Original: 0x00301110 - 0x00301122 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301110: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x21)) { sub_00301122(); return; } /* je: equal / zero */

loc_0030111A: ;
    if (CMP_EQ(eax, 0x59)) { sub_00301122(); return; } /* je: equal / zero */

loc_0030111F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00301130
 * Original: 0x00301130 - 0x00301142 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301130: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x39)) { sub_00301142(); return; } /* je: equal / zero */

loc_0030113A: ;
    if (CMP_EQ(eax, 0x5A)) { sub_00301142(); return; } /* je: equal / zero */

loc_0030113F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00301150
 * Original: 0x00301150 - 0x0030117B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301150(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301150: ;
    if (CMP_G(eax, 0x2E7)) goto loc_0030116A; /* jg: greater (signed >) */

loc_00301157: ;
    if (CMP_EQ(eax, 0x2E7)) goto loc_00301178; /* je: equal / zero */

loc_00301159: ;
    if (CMP_EQ(eax, 0x19A)) goto loc_00301178; /* je: equal / zero */

loc_00301160: ;
    if (CMP_EQ(eax, 0x22D)) goto loc_00301178; /* je: equal / zero */

loc_00301167: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0030116A: ;
    if (CMP_L(eax, 0x386)) goto loc_00301167; /* jl: less (signed <) */

loc_00301171: ;
    if (CMP_G(eax, 0x387)) goto loc_00301167; /* jg: greater (signed >) */

loc_00301178: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00301180
 * Original: 0x00301180 - 0x003011BF (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301180: ;
    if (CMP_G(eax, 0xCB)) goto loc_003011A1; /* jg: greater (signed >) */

loc_00301187: ;
    if (CMP_EQ(eax, 0xCB)) goto loc_003011B9; /* je: equal / zero */

loc_00301189: ;
    eax = eax + 0xFFFFFFE5u;
    if (CMP_A(eax, 0xAE)) { sub_003011BF(); return; } /* ja: above (unsigned >) */

loc_00301193: ;
    eax = ZX8(MEM8(eax + 0x3011CC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3011C4)); return; /* indirect tail jmp */

loc_003011A1: ;
    eax = eax + 0xFFFFFF1Du;
    if (CMP_A(eax, 0x45)) { sub_003011BF(); return; } /* ja: above (unsigned >) */

loc_003011AB: ;
    ecx = ZX8(MEM8(eax + 0x301284));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x30127C)); return; /* indirect tail jmp */

loc_003011B9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003012D0
 * Original: 0x003012D0 - 0x0030137F (175 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003012D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003012D0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x564);
    if (TEST_Z(ebx, ebx)) goto loc_00301379; /* je: equal / zero */

loc_003012E5: ;
    PUSH32(esp, 0); sub_001D3CB0(); /* call 0x001D3CB0 */

loc_003012EA: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2B0);
    ebx = 0; /* xor self */
    if (CMP_NE(ecx, ebx)) goto loc_00301309; /* jne: not equal / not zero */

loc_003012FC: ;
    ecx = MEM32(esi + 0x564);
    eax = esi;
    PUSH32(esp, 0); sub_001CFA20(); /* call 0x001CFA20 */

loc_00301309: ;
    xmm0 = MEMF(0x648D34); /* movss */
    ecx = MEM32(esi + 0x564);
    SET_LO16(edx, ZX8(MEM8(ecx + 0x2A8)));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    PUSH32(esp, 0xFF);
    esi = esp + 0xC;
    MEM16(esp + 0xC) = LO16(edx);
    MEM8(esp + 0x14) = 0x64;
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_00301376: ;
    esp = esp + 4;

loc_00301379: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00301380
 * Original: 0x00301380 - 0x003013B8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301380: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x5F);
    PUSH32(esp, esi);
    eax = 0x72;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00301390: ;
    PUSH32(esp, 0x5F);
    PUSH32(esp, esi);
    eax = 0x7A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0030139D: ;
    esi = MEM32(esi + 0x564);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) { sub_003013B8(); return; } /* je: equal / zero */

loc_003013AA: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x2A8)));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000C69F0(); return; /* tail jmp 0x000C69F0 */

}

/**
 * sub_003013C0
 * Original: 0x003013C0 - 0x003013E0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003013C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003013C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x300);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) { sub_003013E0(); return; } /* jne: not equal / not zero */

loc_003013D4: ;
    eax = 0; /* xor self */
    edi = ecx;
    PUSH32(esp, 0); sub_002FAB20(); /* call 0x002FAB20 */

loc_003013DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301410
 * Original: 0x00301410 - 0x00301460 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301410: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_0030142E; /* je: equal / zero */

loc_0030141A: ;
    edx = MEM32(eax + 0x568);
    edx = MEM32(edx + 0xA0);
    (void)0; /* cmp edx, MEM32(esi + 0x30) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(edx, MEM32(esi + 0x30))) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);

loc_0030142E: ;
    SET_LO8(ecx, MEM8(esi + 0x2E));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00301460(); return; } /* je: equal / zero */

loc_00301435: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 4)) { sub_00301460(); return; } /* je: equal / zero */

loc_0030143E: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_0030145B; /* je: equal / zero */

loc_00301448: ;
    MEM8(ecx) = 0;
    edx = MEM32(eax + 0x564);
    MEM32(edx + 0x5D0) = 3;

loc_0030145B: ;
    g_seh_ebp = ebp; sub_0031A730(); return; /* tail jmp 0x0031A730 */

}

/**
 * sub_00301470
 * Original: 0x00301470 - 0x003015A3 (307 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301470(void)
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

loc_00301470: ;
    esp = esp - 0x10;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
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
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_003015A3(); return; } /* jae: above or equal (unsigned >=) */

loc_003014BD: ;
    xmm1 = MEMF(esp); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003014F7; /* jnp: not parity */

loc_003014CE: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 4); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm6 = xmm0; /* movaps */
    goto loc_00301509;

loc_003014F7: ;
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(esp + 4); /* movss */

loc_00301509: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm7 = MEMF(0x648D34); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 * xmm4; /* mulss */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp); /* movss */
    /* FPU: fcos  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00301579; /* jbe: below or equal (unsigned <=) */

loc_00301571: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_00301584;

loc_00301579: ;
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 <= xmm1)) goto loc_00301584; /* jbe: below or equal (unsigned <=) */

loc_0030157E: ;
    MEMF(esp + 0x1C) = xmm7; /* movss */

loc_00301584: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0); sub_00470F54(); /* call 0x00470F54 */

loc_0030158D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003015A3(); return; } /* jbe: below or equal (unsigned <=) */

loc_0030159D: ;
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003015B0
 * Original: 0x003015B0 - 0x00301604 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003015B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003015B0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_LE(eax & eax, 0)) goto loc_00301603; /* jle: less or equal (signed <=) */

loc_003015BB: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    esi = esi + 0x568;
    edi = eax;
    goto loc_003015D0;

    /* nop */

loc_003015D0: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_003015F8; /* je: equal / zero */

loc_003015D6: ;
    ecx = eax + 0x1F4;
    PUSH32(esp, ecx);
    edx = eax + 0x1F2;
    PUSH32(esp, edx);
    eax = eax + 0x1F0;
    PUSH32(esp, eax);
    ecx = esi + -1384;
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_003015F5: ;
    esp = esp + 0xC;

loc_003015F8: ;
    esi = esi + 0x6D0;
    edi--;
    if ((edi != 0)) goto loc_003015D0; /* jne: not equal / not zero */

loc_00301601: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00301603: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00301610
 * Original: 0x00301610 - 0x0030163F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301610: ;
    eax = MEM32(ecx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 1;
    if (TEST_NZ(eax, eax)) { sub_0030163F(); return; } /* jne: not equal / not zero */

loc_00301627: ;
    xmm1 = MEMF(0x648E38); /* movss */
    xmm0 = MEMF(0x648E6C); /* movss */
    xmm2 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_00301AC8(); return; /* tail jmp 0x00301AC8 */

}

/**
 * sub_00301B00
 * Original: 0x00301B00 - 0x00301B4B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00301B00: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00301B4A; /* jle: less or equal (signed <=) */

loc_00301B0B: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x568;
    edx = 0x3C;
    PUSH32(esp, edi);
    goto loc_00301B20;

    /* nop */

loc_00301B20: ;
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_00301B41; /* je: equal / zero */

loc_00301B26: ;
    MEM16(edi + 0x1F0) = 0xB4;
    edi = MEM32(eax);
    MEM16(edi + 0x1F2) = LO16(edx);
    edi = MEM32(eax);
    MEM16(edi + 0x1F4) = LO16(edx);

loc_00301B41: ;
    eax = eax + 0x6D0;
    ecx--;
    if ((ecx != 0)) goto loc_00301B20; /* jne: not equal / not zero */

loc_00301B49: ;
    POP32(esp, edi);

loc_00301B4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00301B50
 * Original: 0x00301B50 - 0x00301B83 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301B50(void)
{

loc_00301B50: ;
    edx = MEM32(esp + 0xC);
    MEM32(0x7FDBF0) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x7FDBF8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x7FDBF4) = ecx;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(0x7FDBEC) = eax;
    MEM32(0x7FDBE8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 8), _icall_esp); /* indirect call */
    }

loc_00301B81: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301B90
 * Original: 0x00301B90 - 0x00301C31 (161 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x208));
    if (TEST_Z(LO8(eax), 8)) goto loc_00301BA7; /* je: equal / zero */

loc_00301B9F: ;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x208) = LO8(eax);

loc_00301BA7: ;
    SET_LO8(edx, MEM8(esi + 0x208));
    eax = MEM32(esi + 0x68);
    SET_LO8(edx, LO8(edx) & 0xF7);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM8(esi + 0x208) = LO8(edx);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00301C2F; /* je: equal / zero */

loc_00301BC0: ;
    if (CMP_GE(eax, 0x205)) goto loc_00301C2F; /* jge: greater or equal (signed >=) */

loc_00301BC7: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00301C2F; /* je: equal / zero */

loc_00301BCE: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00301C2F; /* je: equal / zero */

loc_00301BD5: ;
    edx = MEM32(edx + 0x2A0);
    if (TEST_Z(edx, edx)) goto loc_00301C2F; /* je: equal / zero */

loc_00301BDF: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_00301BF2; /* je: equal / zero */

loc_00301BE7: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x38)) goto loc_00301BF8; /* ja: above (unsigned >) */

loc_00301BF2: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00301BF8: ;
    ecx = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x2A8);
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x2A4));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x2A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x38);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00301C2C: ;
    esp = esp + 0x20;

loc_00301C2F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301C40
 * Original: 0x00301C40 - 0x00301CEF (175 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301C40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00301CED; /* je: equal / zero */

loc_00301C53: ;
    if (CMP_GE(eax, 0x205)) goto loc_00301CED; /* jge: greater or equal (signed >=) */

loc_00301C5E: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00301CED; /* je: equal / zero */

loc_00301C69: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00301CED; /* je: equal / zero */

loc_00301C70: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00301C90; /* jne: not equal / not zero */

loc_00301C79: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_00301C90; /* jne: not equal / not zero */

loc_00301C82: ;
    if (CMP_NE(eax, 0x58)) goto loc_00301C90; /* jne: not equal / not zero */

loc_00301C87: ;
    MEM16(esi + 0x3AE) = 0;

loc_00301C90: ;
    edx = MEM32(ecx + 0x50);
    edx = MEM32(edx + 0x360);
    if (TEST_Z(edx, edx)) goto loc_00301CED; /* je: equal / zero */

loc_00301C9D: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_00301CB0; /* je: equal / zero */

loc_00301CA5: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x48)) goto loc_00301CB6; /* ja: above (unsigned >) */

loc_00301CB0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00301CB6: ;
    ecx = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x368);
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x364));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x360);
    PUSH32(esp, edx);
    PUSH32(esp, 0x48);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00301CEA: ;
    esp = esp + 0x20;

loc_00301CED: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301CF0
 * Original: 0x00301CF0 - 0x00301D73 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301CF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00301D71; /* je: equal / zero */

loc_00301CFF: ;
    if (CMP_GE(eax, 0x205)) goto loc_00301D71; /* jge: greater or equal (signed >=) */

loc_00301D06: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00301D71; /* je: equal / zero */

loc_00301D0D: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00301D71; /* je: equal / zero */

loc_00301D14: ;
    ecx = MEM32(ecx + 0x2AC);
    if (TEST_Z(ecx, ecx)) goto loc_00301D71; /* je: equal / zero */

loc_00301D1E: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00301D31; /* je: equal / zero */

loc_00301D26: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x39)) goto loc_00301D37; /* ja: above (unsigned >) */

loc_00301D31: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00301D37: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0x2B4);
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x2B0));
    ecx = MEM32(ecx + 0x2AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x39);
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00301D6E: ;
    esp = esp + 0x20;

loc_00301D71: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301D80
 * Original: 0x00301D80 - 0x00301E01 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebx + 0x208));
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 8)) goto loc_00301D9B; /* je: equal / zero */

loc_00301D93: ;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ebx + 0x208) = LO8(eax);

loc_00301D9B: ;
    SET_LO8(edx, MEM8(ebx + 0x208));
    ebp = MEM32(ebx + 0x568);
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xF7);
    PUSH32(esp, eax);
    MEM8(ebx + 0x208) = LO8(edx);
    edi = MEM32(ebp + 0xA0);
    eax = MEM32(ebp + 0x444);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00301DCB: ;
    edi = MEM32(ebp + 0x5A4);
    PUSH32(esp, eax);
    esi = 8;
    eax = ebx;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_00301DDE: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00301DF8: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301E10
 * Original: 0x00301E10 - 0x00301E47 (55 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301E10: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x228); /* movss */
    xmm1 = xmm1 - MEMF(0x648EC8); /* subss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649508); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00301E47(); return; } /* jbe: below or equal (unsigned <=) */

loc_00301E3D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_00301E4F(); return; /* tail jmp 0x00301E4F */

}

/**
 * sub_00301E80
 * Original: 0x00301E80 - 0x00301E9E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301E80(void)
{

loc_00301E80: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00301E9A: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00301EA0
 * Original: 0x00301EA0 - 0x00301EC7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301EA0(void)
{

loc_00301EA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x120);
    edx = MEM32(eax + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    edx++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00301EC3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00301ED0
 * Original: 0x00301ED0 - 0x00301EF7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301ED0(void)
{

loc_00301ED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x120);
    edx = MEM32(eax + 0xA4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    edx++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00301EF3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00301F00
 * Original: 0x00301F00 - 0x00301F83 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00301F81; /* je: equal / zero */

loc_00301F0F: ;
    if (CMP_GE(eax, 0x205)) goto loc_00301F81; /* jge: greater or equal (signed >=) */

loc_00301F16: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00301F81; /* je: equal / zero */

loc_00301F1D: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00301F81; /* je: equal / zero */

loc_00301F24: ;
    ecx = MEM32(ecx + 0x2D0);
    if (TEST_Z(ecx, ecx)) goto loc_00301F81; /* je: equal / zero */

loc_00301F2E: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00301F41; /* je: equal / zero */

loc_00301F36: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x3C)) goto loc_00301F47; /* ja: above (unsigned >) */

loc_00301F41: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00301F47: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0x2D8);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x2D4));
    ecx = MEM32(ecx + 0x2D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C);
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00301F7E: ;
    esp = esp + 0x20;

loc_00301F81: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301F90
 * Original: 0x00301F90 - 0x00302013 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301F90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00302011; /* je: equal / zero */

loc_00301F9F: ;
    if (CMP_GE(eax, 0x205)) goto loc_00302011; /* jge: greater or equal (signed >=) */

loc_00301FA6: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00302011; /* je: equal / zero */

loc_00301FAD: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00302011; /* je: equal / zero */

loc_00301FB4: ;
    ecx = MEM32(ecx + 0x3F0);
    if (TEST_Z(ecx, ecx)) goto loc_00302011; /* je: equal / zero */

loc_00301FBE: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00301FD1; /* je: equal / zero */

loc_00301FC6: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x54)) goto loc_00301FD7; /* ja: above (unsigned >) */

loc_00301FD1: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00301FD7: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0x3F8);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x3F4));
    ecx = MEM32(ecx + 0x3F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x54);
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_0030200E: ;
    esp = esp + 0x20;

loc_00302011: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00302020
 * Original: 0x00302020 - 0x003020AE (142 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM8(esi + 0x17D) = 0;
    MEM8(esi + 0x180) = 0;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003020AC; /* je: equal / zero */

loc_0030203D: ;
    if (CMP_GE(eax, 0x205)) goto loc_003020AC; /* jge: greater or equal (signed >=) */

loc_00302044: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003020AC; /* je: equal / zero */

loc_0030204B: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003020AC; /* je: equal / zero */

loc_00302052: ;
    edx = MEM32(edx + 0xB4);
    if (TEST_Z(edx, edx)) goto loc_003020AC; /* je: equal / zero */

loc_0030205C: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_0030206F; /* je: equal / zero */

loc_00302064: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0xF)) goto loc_00302075; /* ja: above (unsigned >) */

loc_0030206F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00302075: ;
    ecx = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0xBC);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0xB8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003020A9: ;
    esp = esp + 0x20;

loc_003020AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003020B0
 * Original: 0x003020B0 - 0x003020FF (79 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003020B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003020B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00308AA0(); /* call 0x00308AA0 */

loc_003020BF: ;
    if (TEST_Z(eax, eax)) goto loc_003020FC; /* je: equal / zero */

loc_003020C3: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = eax - esi;
    ecx = eax;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    ecx = edx + eax + 1;
    edx = ZX8(MEM8(esi + 0x470));
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(edx, ecx)) goto loc_003020FC; /* jne: not equal / not zero */

loc_003020EF: ;
    MEM32(edi + 0x420) = ebx;
    MEM8(edi + 0x43D) = 4;

loc_003020FC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302100
 * Original: 0x00302100 - 0x00302183 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00302181; /* je: equal / zero */

loc_0030210F: ;
    if (CMP_GE(eax, 0x205)) goto loc_00302181; /* jge: greater or equal (signed >=) */

loc_00302116: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00302181; /* je: equal / zero */

loc_0030211D: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00302181; /* je: equal / zero */

loc_00302124: ;
    ecx = MEM32(ecx + 0x2E8);
    if (TEST_Z(ecx, ecx)) goto loc_00302181; /* je: equal / zero */

loc_0030212E: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00302141; /* je: equal / zero */

loc_00302136: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x3E)) goto loc_00302147; /* ja: above (unsigned >) */

loc_00302141: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00302147: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0x2F0);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x2EC));
    ecx = MEM32(ecx + 0x2E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E);
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_0030217E: ;
    esp = esp + 0x20;

loc_00302181: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00302190
 * Original: 0x00302190 - 0x003021B4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302190(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302190: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(esp + 4);
    ecx = ecx - edx;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    g_seh_ebp = ebp; sub_002CCD90(); return; /* tail jmp 0x002CCD90 */

}

/**
 * sub_003022E0
 * Original: 0x003022E0 - 0x003022E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003022E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003022E0: ;
    g_seh_ebp = ebp; sub_003021C0(); return; /* tail jmp 0x003021C0 */

}

/**
 * sub_00302300
 * Original: 0x00302300 - 0x0030236D (109 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00302300: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x568);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM16(esi + 0x3AE), LO16(ebx))) { sub_0030236D(); return; } /* je: equal / zero */

loc_0030231A: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = 0xF0;
    if (CMP_EQ(eax, ebx)) goto loc_00302350; /* je: equal / zero */

loc_00302323: ;
    ecx = MEM32(eax + 0xA0);
    if (CMP_EQ(ecx, 0x25)) goto loc_0030234B; /* je: equal / zero */

loc_0030232E: ;
    if (CMP_EQ(ecx, 0x44)) goto loc_0030234B; /* je: equal / zero */

loc_00302333: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00302350; /* je: equal / zero */

loc_0030233B: ;
    if (CMP_AE(MEM8(eax + 0x3A3), 3)) goto loc_00302350; /* jae: above or equal (unsigned >=) */

loc_00302344: ;
    edx = 0x371;
    goto loc_00302350;

loc_0030234B: ;
    edx = 0x1AB;

loc_00302350: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00302364: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003026C0
 * Original: 0x003026C0 - 0x00302712 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003026C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003026C0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0xB7));
    SET_LO8(eax, 2);
    if (CMP_A(LO8(edx), LO8(eax))) goto loc_003026EB; /* ja: above (unsigned >) */

loc_003026D0: ;
    edx = 0; /* xor self */
    MEM8(ecx + 0xB7) = LO8(eax);
    MEM8(ecx + 0xB5) = 7;
    MEM8(ecx + 0xB6) = 4;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_003026EB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x120) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x3C4);
    if (TEST_Z(ecx, ecx)) { sub_00302712(); return; } /* je: equal / zero */

loc_00302700: ;
    MEM32(esp + 4) = 0;
    eax = ecx + 4;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00036830(); return; /* tail jmp 0x00036830 */

}

/**
 * sub_00302720
 * Original: 0x00302720 - 0x0030275D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00302729: ;
    ecx = ZX8(MEM8(esp + 0xC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x22));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) { sub_0030275D(); return; } /* je: equal / zero */

loc_00302740: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x29)) goto loc_00302750; /* jne: not equal / not zero */

loc_00302749: ;
    if (CMP_NE(LO8(edx), 7)) goto loc_00302750; /* jne: not equal / not zero */

loc_0030274E: ;
    SET_LO8(edx, 0); /* xor self */

loc_00302750: ;
    edx = ZX8(LO8(edx));
    SET_LO16(ecx, ZX8(MEM8(edx + 0x59DA50)));
    g_seh_ebp = ebp; sub_00302768(); return; /* tail jmp 0x00302768 */

}

/**
 * sub_00302820
 * Original: 0x00302820 - 0x00302853 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302820(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00302820: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00302825: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    SET_LO8(edx, LO8(eax));
    if (1 /* jnp after test - parity */) { sub_00302853(); return; } /* jnp: not parity */

loc_00302840: ;
    /* comiss xmm0, MEMF(ecx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x7C))) { sub_00302853(); return; } /* jbe: below or equal (unsigned <=) */

loc_00302846: ;
    eax = MEM32(ecx + 0x568);
    MEM16(eax + 0xE) = 0x2D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00302900
 * Original: 0x00302900 - 0x00302923 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302900(void)
{

loc_00302900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edx = 0xB6;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0030291F: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00302930
 * Original: 0x00302930 - 0x00302957 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302930(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302930: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = 0; /* xor self */
    MEM32(edx + 0xA0) = ecx;
    MEM8(eax + 0x180) = LO8(ecx);
    MEM8(eax + 0x17D) = LO8(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_00302990
 * Original: 0x00302990 - 0x003029B3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302990(void)
{

loc_00302990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edx = 0xBF;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003029AF: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003029C0
 * Original: 0x003029C0 - 0x003029EE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003029C0(void)
{

loc_003029C0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edx = 0xC5;
    MEM8(eax + 0x180) = LO8(ecx);
    MEM8(eax + 0x17D) = LO8(ecx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003029EA: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003029F0
 * Original: 0x003029F0 - 0x00302A13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003029F0(void)
{

loc_003029F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edx = 0xAF;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00302A0F: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00302A20
 * Original: 0x00302A20 - 0x00302A2E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A20(void)
{

loc_00302A20: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x450) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00302A30
 * Original: 0x00302A30 - 0x00302A4C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302A30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00302A4C(); return; } /* je: equal / zero */

loc_00302A3E: ;
    eax = ZX8(MEM8(esi + 0x60));
    MEM8(eax * 2 + 0x763235) = MEM8(eax * 2 + 0x763235) | 2;
    g_seh_ebp = ebp; sub_00302A53(); return; /* tail jmp 0x00302A53 */

}

/**
 * sub_00302AA0
 * Original: 0x00302AA0 - 0x00302AD1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00302AA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00302AD1(); return; } /* jne: not equal / not zero */

loc_00302AAD: ;
    if (TEST_NZ(eax, eax)) goto loc_00302AB8; /* jne: not equal / not zero */

loc_00302AB1: ;
    PUSH32(esp, 0); sub_00021560(); /* call 0x00021560 */

loc_00302AB6: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00302AB8: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302ACF: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302AF0
 * Original: 0x00302AF0 - 0x00302B05 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302AF0(void)
{
    float xmm0;

loc_00302AF0: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302B10
 * Original: 0x00302B10 - 0x00302BC3 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302B10(void)
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

loc_00302B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* cmp MEM32(esi + 0x64), 0x16 - flags set for next jcc */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    if (CMP_NE(MEM32(esi + 0x64), 0x16)) goto loc_00302B93; /* jne: not equal / not zero */

loc_00302B20: ;
    /* ucomiss xmm0, MEMF(esi + 0x294) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00302BC1; /* jp: parity */

loc_00302B31: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00302B36: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_00302B42; /* jns: not sign (positive) */

loc_00302B3D: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_00302B42: ;
    eax = eax + MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00302B5A; /* jge: greater or equal (signed >=) */

loc_00302B54: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00302B5A: ;
    xmm1 = MEMF(esi + 0x110); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_popp(); /* fstp */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00302BB9; /* jnp: not parity */

loc_00302B78: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648EF4); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00302B93: ;
    xmm0 = xmm0 - MEMF(esi + 0x294); /* subss */
    /* comiss xmm0, MEMF(0x649354) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649354))) goto loc_00302BC1; /* jbe: below or equal (unsigned <=) */

loc_00302BA4: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00302BC1; /* jbe: below or equal (unsigned <=) */

loc_00302BB1: ;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */

loc_00302BB9: ;
    MEMF(esi + 0xD0) = xmm0; /* movss */

loc_00302BC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00302BD0
 * Original: 0x00302BD0 - 0x00302BF3 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302BD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00302BD0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x648F0C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x7C))) goto loc_00302BF2; /* jbe: below or equal (unsigned <=) */

loc_00302BE2: ;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD0) = xmm0; /* movss */

loc_00302BF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C00
 * Original: 0x00302C00 - 0x00302C15 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C00(void)
{
    float xmm0;

loc_00302C00: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C20
 * Original: 0x00302C20 - 0x00302C3D (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C20(void)
{
    float xmm0;

loc_00302C20: ;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C40
 * Original: 0x00302C40 - 0x00302C4C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C40(void)
{

loc_00302C40: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x180) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C50
 * Original: 0x00302C50 - 0x00302C65 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C50(void)
{
    float xmm0;

loc_00302C50: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x1C8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C70
 * Original: 0x00302C70 - 0x00302C81 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C70(void)
{

loc_00302C70: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x180) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302C90
 * Original: 0x00302C90 - 0x00302CFB (107 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00302C90: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x13 - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_00302CDA; /* jne: not equal / not zero */

loc_00302C9D: ;
    if (CMP_NE(MEM32(ecx + 0x68), 0x66)) goto loc_00302CDA; /* jne: not equal / not zero */

loc_00302CA3: ;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    /* ucomiss xmm0, MEMF(0x648F08) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00302CC9; /* jp: parity */

loc_00302CB8: ;
    xmm0 = MEMF(0x648F04); /* movss */
    /* comiss xmm0, MEMF(0x84A628) - sets EFLAGS */
    goto loc_00302CD8;

loc_00302CC9: ;
    xmm0 = MEMF(0x84A628); /* movss */
    /* comiss xmm0, MEMF(0x648F00) - sets EFLAGS */

loc_00302CD8: ;
    if ((xmm0 > MEMF(0x648F00))) goto loc_00302CFA; /* ja: above (unsigned >) */

loc_00302CDA: ;
    SET_LO8(eax, MEM8(0x7FDBF8));
    MEM8(ecx + 0x1D8) = LO8(eax);
    edx = MEM32(0x7FDBF8);
    edx = (uint32_t)((int32_t)edx >> 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x224) = xmm0; /* movss */

loc_00302CFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302D00
 * Original: 0x00302D00 - 0x00302D24 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302D00: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00302D24(); return; } /* jne: not equal / not zero */

loc_00302D09: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x228) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x228))) { sub_00302D24(); return; } /* jb: below (unsigned <) */

loc_00302D1B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00302D30(); return; /* tail jmp 0x00302D30 */

}

/**
 * sub_00302D30
 * Original: 0x00302D30 - 0x00302FA6 (630 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302D30: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00302FA4; /* jne: not equal / not zero */

loc_00302D3E: ;
    edx = ZX8(MEM8(0x7FDBFB));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    ebx = esi;
    ebx = ebx & 0x7FF;
    (void)0; /* cmp eax, 0x80 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, 0x80)) ? 1 : 0); /* sete */
    (void)0; /* cmp eax, 0x75 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 0x75)) ? 1 : 0); /* sete */
    (void)0; /* cmp edx, 0x80 - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    eax = ZX8(LO8(eax));
    if (CMP_NE(edx, 0x80)) goto loc_00302D81; /* jne: not equal / not zero */

loc_00302D79: ;
    if (TEST_Z(ecx, ecx)) goto loc_00302D8E; /* je: equal / zero */

loc_00302D7D: ;
    ecx = edx;
    goto loc_00302DAA;

loc_00302D81: ;
    if (CMP_NE(edx, 0x75)) goto loc_00302D8E; /* jne: not equal / not zero */

loc_00302D86: ;
    if (TEST_Z(eax, eax)) goto loc_00302D8E; /* je: equal / zero */

loc_00302D8A: ;
    ecx = edx;
    goto loc_00302DAA;

loc_00302D8E: ;
    eax = MEM32(ebp + 0x74);
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00302DA7; /* je: equal / zero */

loc_00302D98: ;
    eax = ZX8(MEM8(eax + 5));
    ecx = MEM32(eax * 4 + 0x6C8708);
    ecx = MEM32(ecx);
    goto loc_00302DAA;

loc_00302DA7: ;
    ecx = MEM32(ebp + 0x68);

loc_00302DAA: ;
    eax = esi;
    eax = eax & 0xC000;
    (void)0; /* cmp eax, 0x4000 - flags set for next jcc */
    MEM32(0x7FDBE0) = 0;
    if (CMP_EQ(eax, 0x4000)) goto loc_00302DD3; /* je: equal / zero */

loc_00302DC2: ;
    if (CMP_NE(eax, 0x8000)) goto loc_00302DDB; /* jne: not equal / not zero */

loc_00302DC9: ;
    if (CMP_EQ(ecx, edx)) goto loc_00302FA1; /* je: equal / zero */

loc_00302DD1: ;
    goto loc_00302DDB;

loc_00302DD3: ;
    if (CMP_NE(ecx, edx)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302DDB: ;
    if (TEST_Z(esi, 0x10000)) goto loc_00302DEF; /* je: equal / zero */

loc_00302DE3: ;
    esi++;
    MEM32(0x7FDBE0) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302DEF: ;
    esi = esi & 0x3800;
    if (CMP_G(esi, 0x2000)) goto loc_00302F3C; /* jg: greater (signed >) */

loc_00302E01: ;
    if (CMP_EQ(esi, 0x2000)) goto loc_00302E67; /* je: equal / zero */

loc_00302E03: ;
    if (TEST_Z(esi, esi)) goto loc_00302E33; /* je: equal / zero */

loc_00302E07: ;
    if (CMP_NE(esi, 0x1000)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302E13: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302E2E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E33: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    if (TEST_Z(ebx, ebx)) goto loc_00302E54; /* je: equal / zero */

loc_00302E46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302E4F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E54: ;
    eax = MEM32(0x7FDBF4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302E62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E67: ;
    if (CMP_G(MEM32(0x84A144), 1)) goto loc_00302FA1; /* jg: greater (signed >) */

loc_00302E74: ;
    esi = MEM32(ebp + 0x298);
    esi = esi & 0x1F;
    (void)0; /* cmp esi, 0xF - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(esi, 0xF)) goto loc_00302EB0; /* jne: not equal / not zero */

loc_00302E86: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1D4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(0x649A98) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649A98))) goto loc_00302EB0; /* jbe: below or equal (unsigned <=) */

loc_00302E9A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x9C);
    edi = 2;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00302EAA: ;
    esp = esp + 4;
    POP32(esp, edi);
    goto loc_00302EEE;

loc_00302EB0: ;
    xmm0 = MEMF(ebp + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00302EE5; /* jnp: not parity */

loc_00302EC5: ;
    /* comiss xmm0, MEMF(ebp + 0x7C) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0x7C))) goto loc_00302EE5; /* jb: below (unsigned <) */

loc_00302ECB: ;
    eax = ebp;
    ecx = 0x10;
    PUSH32(esp, 0); sub_00021630(); /* call 0x00021630 */

loc_00302ED7: ;
    MEM32(esp + 0xC) = 0x10;
    esi = MEM32(esp + 0xC);
    goto loc_00302EEE;

loc_00302EE5: ;
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_00021630(); /* call 0x00021630 */

loc_00302EEE: ;
    if (TEST_NZ(eax, eax)) goto loc_00302F17; /* jne: not equal / not zero */

loc_00302EF2: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00302F12; /* je: equal / zero */

loc_00302EFB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x63837C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00302F0B: ;
    esi = MEM32(esp + 0x10);
    esp = esp + 4;

loc_00302F12: ;
    eax = 0xBA0;

loc_00302F17: ;
    (void)0; /* cmp esi, 0x10 - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    if (CMP_NE(esi, 0x10)) goto loc_00302F8E; /* jne: not equal / not zero */

loc_00302F23: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302F37: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302F3C: ;
    if (CMP_EQ(esi, 0x3000)) goto loc_00302F7A; /* je: equal / zero */

loc_00302F44: ;
    if (CMP_NE(esi, 0x3800)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302F4C: ;
    edx = MEM32(0x847024);
    esi = MEM32(edx + 0x40);
    eax = MEM32(ebp + 0x188);
    ecx = esi;
    PUSH32(esp, 0); sub_000255F0(); /* call 0x000255F0 */

loc_00302F62: ;
    if (CMP_EQ(eax, ebx)) goto loc_00302FA1; /* je: equal / zero */

loc_00302F66: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302F75: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302F7A: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    if (TEST_Z(ebx, ebx)) goto loc_00302F87; /* je: equal / zero */

loc_00302F84: ;
    PUSH32(esp, ebx);
    goto loc_00302F8E;

loc_00302F87: ;
    edx = MEM32(0x7FDBF4);
    PUSH32(esp, edx);

loc_00302F8E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00302FA1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00302FA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302FB0
 * Original: 0x00302FB0 - 0x00302FDF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00302FB0: ;
    eax = MEM32(0x7FDBF4);
    if (CMP_AE(eax, 3)) goto loc_00302FDE; /* jae: above or equal (unsigned >=) */

loc_00302FBA: ;
    SET_LO8(ecx, MEM8(eax + 0x7FDBDC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00302FDE; /* je: equal / zero */

loc_00302FC4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00302D30(); /* call 0x00302D30 */

loc_00302FCE: ;
    ecx = MEM32(0x7FDBF4);
    esp = esp + 4;
    MEM8(ecx + 0x7FDBDC) = 0;

loc_00302FDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302FE0
 * Original: 0x00302FE0 - 0x00303098 (184 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00302FE0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00303094; /* jne: not equal / not zero */

loc_00302FF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBE0);
    if (TEST_Z(ebx, ebx)) goto loc_00303093; /* je: equal / zero */

loc_00302FFF: ;
    eax = MEM32(0x7FDBF8);
    ebx--;
    ecx = eax;
    PUSH32(esp, esi);
    edx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0xB);
    esi = ebx;
    esi = esi & 0x7FF;
    edx = edx & 0x7FF;
    ecx = ecx & 0x7FF;
    eax = (uint32_t)((int32_t)eax >> 0x16);
    eax = eax & 0x7FF;
    PUSH32(esp, edi);
    MEM32(0x7FDBE0) = ebx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax == 0)) goto loc_00303049; /* je: equal / zero */

loc_00303042: ;
    edi = 4;
    goto loc_0030305E;

loc_00303049: ;
    if (TEST_Z(ecx, ecx)) goto loc_00303054; /* je: equal / zero */

loc_0030304D: ;
    edi = 3;
    goto loc_0030305E;

loc_00303054: ;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    eax++;
    edi = eax;

loc_0030305E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00303064: ;
    eax = eax - esi;
    eax = MEM32(esp + eax * 4 + 0x10);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00303093; /* je: equal / zero */

loc_00303073: ;
    ecx = MEM32(esp + 0x18);
    ebx = ebx & 0xFFFEF800u;
    eax = eax | ebx;
    PUSH32(esp, ecx);
    MEM32(0x7FDBE0) = ebx;
    MEM32(0x7FDBF8) = eax;
    PUSH32(esp, 0); sub_00302D30(); /* call 0x00302D30 */

loc_00303090: ;
    esp = esp + 4;

loc_00303093: ;
    POP32(esp, ebx);

loc_00303094: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003030A0
 * Original: 0x003030A0 - 0x003030A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003030A0: ;
    g_seh_ebp = ebp; sub_000215C0(); return; /* tail jmp 0x000215C0 */

}

/**
 * sub_003030C0
 * Original: 0x003030C0 - 0x00303158 (152 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003030C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030310F; /* je: equal / zero */

loc_003030DA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030310F; /* je: equal / zero */

loc_003030E7: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0030310F; /* jne: not equal / not zero */

loc_003030F0: ;
    eax = MEM32(eax + 0x368);
    if (TEST_NZ(eax, eax)) goto loc_00303101; /* jne: not equal / not zero */

loc_003030FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00303101: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    MEM32(ebp + 0x2C) = 1;
    MEM32(ebp + 0x20) = ecx;

loc_0030310F: ;
    ecx = MEM32(0x84A5FC);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    /* nop */

loc_00303120: ;
    if (CMP_NE(MEM8(ecx + eax), 4)) goto loc_00303127; /* jne: not equal / not zero */

loc_00303126: ;
    esi++;

loc_00303127: ;
    eax++;
    if (CMP_L(eax, 0x80)) goto loc_00303120; /* jl: less (signed <) */

loc_0030312F: ;
    if (CMP_L(esi, 0xA)) { sub_00303158(); return; } /* jl: less (signed <) */

loc_00303134: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    esi = 4;
    PUSH32(esp, 0); sub_002F2DA0(); /* call 0x002F2DA0 */

loc_00303143: ;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00303153: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_003031B2(); return; /* tail jmp 0x003031B2 */

}

/**
 * sub_00304340
 * Original: 0x00304340 - 0x003045C3 (643 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304340: ;
    esp = esp - 0x44;
    eax = MEM32(0x7FDBF4);
    ecx = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(eax, edi)) goto loc_0030437A; /* je: equal / zero */

loc_00304364: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(ebx, MEM8(edx + 0xB1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0030437A; /* je: equal / zero */

loc_00304374: ;
    MEM32(esp + 0x1C) = eax;
    ecx = eax;

loc_0030437A: ;
    xmm0 = MEMF(0x6490B0); /* movss */
    eax = ZX16(MEM16(ebp + 0x174));
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649500); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    eax = eax + 0x4000;
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x28) = edi;
    if (CMP_EQ(ecx, 5)) goto loc_003043E2; /* je: equal / zero */

loc_003043D4: ;
    if (CMP_EQ(ecx, 9)) goto loc_003043E2; /* je: equal / zero */

loc_003043D9: ;
    if (CMP_NE(ecx, 0xA)) goto loc_00304532; /* jne: not equal / not zero */

loc_003043E2: ;
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ebx = 0x5F0C94;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00304403: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00304419; /* je: equal / zero */

loc_0030440A: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00304419; /* je: equal / zero */

loc_00304412: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_0030441D; /* jne: not equal / not zero */

loc_00304419: ;
    eax = 0; /* xor self */
    goto loc_00304426;

loc_0030441D: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0030452F; /* je: equal / zero */

loc_00304426: ;
    ecx = MEM32(ebp + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm6 = MEMF(0x648D14); /* movss */
    if (TEST_Z(ecx, ecx)) { sub_003045C3(); return; } /* je: equal / zero */

loc_0030443C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax << 6;
    esi = eax + ecx;
    PUSH32(esp, esi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00304467: ;
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm2 = MEMF(esi + 0x38); /* movss */
    xmm4 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003044C9: ;
    eax = MEM32(esp + 0x40);
    xmm5 = MEMF(0x648D78); /* movss */
    esp = esp + 8;
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm4; /* subss */
    xmm3 = xmm3 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003044F5: ;
    xmm1 = MEMF(0x648E6C); /* movss */
    xmm2 = MEMF(0x648F60); /* movss */
    esp = esp + 8;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm0 = xmm0 * xmm5; /* mulss */
    if ((xmm3 <= xmm1)) goto loc_00304515; /* jbe: below or equal (unsigned <=) */

loc_00304511: ;
    xmm3 = xmm3 - xmm2; /* subss */

loc_00304515: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0030451E; /* jbe: below or equal (unsigned <=) */

loc_0030451A: ;
    xmm0 = xmm0 - xmm2; /* subss */

loc_0030451E: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_003045C9(); return; /* tail jmp 0x003045C9 */

loc_0030452F: ;
    xmm4 = 0.0f; /* xorps self = zero */

loc_00304532: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003045A8; /* je: equal / zero */

loc_0030453C: ;
    if (CMP_NE(MEM32(eax + 0xC0), 0x100)) goto loc_003045A8; /* jne: not equal / not zero */

loc_00304548: ;
    xmm1 = MEMF(eax + 0x604); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0030457E; /* jbe: below or equal (unsigned <=) */

loc_00304555: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E1C); /* mulss */
    xmm1 = xmm1 * MEMF(0x64B19C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(0x648F98); /* addss */
    xmm0 = xmm0 * MEMF(0x649794); /* mulss */
    goto loc_003045B3;

loc_0030457E: ;
    xmm0 = MEMF(0x648E38); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x64B198); /* mulss */
    xmm1 = xmm1 * MEMF(0x648E1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x649794); /* mulss */
    goto loc_003045B3;

loc_003045A8: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 0x3BC); /* subss */

loc_003045B3: ;
    xmm6 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_003045CC(); return; /* tail jmp 0x003045CC */

}

/**
 * sub_00304860
 * Original: 0x00304860 - 0x003048C1 (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00304860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 2;
    eax = MEM32(edi + 0x59DA90);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(eax, eax)) { sub_003048C1(); return; } /* je: equal / zero */

loc_0030487D: ;
    ecx = MEM32(esi + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00304894; /* je: equal / zero */

loc_00304887: ;
    ecx = MEM32(esi + 0x64);
    if (CMP_EQ(ecx, 0x2E)) goto loc_00304894; /* je: equal / zero */

loc_0030488F: ;
    if (CMP_NE(ecx, 0x42)) { sub_003048C1(); return; } /* jne: not equal / not zero */

loc_00304894: ;
    esi = esi + 0x78;
    ecx = MEM32(esi);
    eax = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(ebx + 4) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00304940
 * Original: 0x00304940 - 0x00304B97 (599 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304940: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0030499C; /* je: equal / zero */

loc_00304960: ;
    ecx = eax + 0x21C;
    edx = MEM32(ecx);
    eax = eax + 0x358;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(edi + 0x568);
    edx = eax + 0x228;
    ecx = MEM32(edx);
    eax = eax + 0x34C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0030499C: ;
    PUSH32(esp, 0x4100000);
    ecx = 0xAD4;
    eax = 0x63834C;
    esi = edi;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_003049B2: ;
    eax = MEM32(edi + 0x568);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax + 0x358;
    esi = eax + 0xF0;
    PUSH32(esp, ecx);
    eax = eax + 0x34C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_003049DE: ;
    esp = esp + 0x34;
    (void)0; /* cmp ebp, 0x15 - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_L(ebp, 0x15)) goto loc_00304B8F; /* jl: less (signed <) */

loc_00304A06: ;
    if (CMP_G(ebp, 0x16)) goto loc_00304B8F; /* jg: greater (signed >) */

loc_00304A0F: ;
    edx = MEM32(edi + 0x568);
    edx = edx + 0x34C;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ebx = esp + 0x18;
    eax = ebp;
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00304860(); /* call 0x00304860 */

loc_00304A3C: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x1D4);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00304AA5; /* jne: not equal / not zero */

loc_00304A4E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax + 0x25C); /* subss */
    (void)0; /* cmp MEM32(eax + 0xBC), 1 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x258); /* movss */
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_00304A8C; /* jne: not equal / not zero */

loc_00304A70: ;
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00304A87: ;
    goto loc_00304B1E;

loc_00304A8C: ;
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00304AA3: ;
    goto loc_00304B1E;

loc_00304AA5: ;
    fp_push(MEMF(eax + 0xF8)); /* fld float */
    xmm0 = MEMF(eax + 0xFC); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    esp = esp - 8;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x100)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00304AF0: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x18);
    xmm3 = MEMF(0x648D78); /* movss */
    PUSH32(esp, eax);
    xmm0 = xmm0 * xmm3; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00304B11: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    esp = esp + 0x10;
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_00304B1E: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00304B3B: ;
    edx = ZX16(LO16(eax));
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    /* fld st(0) */
    PUSH32(esp, 0x64);
    /* FPU: fcos  */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x50);
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_00304B8C: ;
    esp = esp + 0x38;

loc_00304B8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00304BA0
 * Original: 0x00304BA0 - 0x00304D54 (436 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BA0(void)
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

loc_00304BA0: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00304BAF: ;
    esi = eax;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00304BB6: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00304D4F; /* je: equal / zero */

loc_00304BC0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00139840(); /* call 0x00139840 */

loc_00304BD4: ;
    eax = MEM32(0x7FDBF8);
    edi = MEM32(esp + 0x20);
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 0xFF)) goto loc_00304C01; /* je: equal / zero */

loc_00304BE5: ;
    eax = MEM32(edi + 0x564);
    xmm0 = MEMF(eax + 0x604); /* movss */
    xmm0 = xmm0 - MEMF(0x648F38); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_00304C01: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    SET_LO16(eax, MEM16(edi + 0x174));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ZX16(LO16(eax));
    MEM32(esp + 8) = ecx;
    MEM16(esi + 0x172) = LO16(eax);
    /* fld st(0) */
    MEM16(esi + 0x174) = LO16(eax);
    /* FPU: fsin  */
    MEM16(esi + 0x170) = LO16(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00304C6E: ;
    edx = ZX8(MEM8(esi + 0x253));
    ecx = MEM32(0x84A1A0);
    edx = MEM32(ecx + edx * 4);
    MEM16(edx + 8) = LO16(eax);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00304C8A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x253));
    edx = MEM32(0x84A1A0);
    ecx = MEM32(edx + ecx * 4);
    MEM16(ecx + 0xA) = LO16(eax);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00304CAD: ;
    edx = ZX8(MEM8(esi + 0x253));
    ecx = MEM32(0x84A1A0);
    edx = MEM32(ecx + edx * 4);
    MEM16(edx + 0xC) = LO16(eax);
    MEM8(esi + 0x135) = 0;
    MEM32(esi + 0x420) = 0;
    eax = MEM32(0x7FDBF8);
    if (TEST_Z(HI8(eax), 0xFF)) goto loc_00304CFF; /* je: equal / zero */

loc_00304CDC: ;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEM8(esi + 0x43D) = 4;
    goto loc_00304D3E;

loc_00304CFF: ;
    xmm0 = MEMF(0x58BCCC); /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(0x6498B8); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648E2C); /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEM8(esi + 0x43D) = 2;

loc_00304D3E: ;
    MEMF(esi + 0x260) = xmm0; /* movss */
    MEMF(esi + 0x264) = xmm0; /* movss */
    POP32(esp, edi);

loc_00304D4F: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00304D60
 * Original: 0x00304D60 - 0x00304D81 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D60(void)
{

loc_00304D60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00304D7D: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00304D90
 * Original: 0x00304D90 - 0x00304DA6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304D90: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_00304DA6(); return; } /* je: equal / zero */

loc_00304D99: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0x60));
    g_seh_ebp = ebp; sub_002CCD90(); return; /* tail jmp 0x002CCD90 */

}

/**
 * sub_00304DB0
 * Original: 0x00304DB0 - 0x00304DBC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304DB0(void)
{

loc_00304DB0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x13F) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00304DC0
 * Original: 0x00304DC0 - 0x00304E67 (167 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304DC0(void)
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

loc_00304DC0: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(MEM8(edi + 0x141), 0x2A)) goto loc_00304E62; /* je: equal / zero */

loc_00304DD5: ;
    SET_LO16(eax, MEM16(0x7FDBFA));
    MEM8(esp + 0xC) = HI8(eax);
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(edi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    if (TEST_Z(eax, eax)) goto loc_00304E21; /* je: equal / zero */

loc_00304DF4: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00304DFE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_00304E0F; /* je: equal / zero */

loc_00304E05: ;
    xmm0 = MEMF(eax + 0xE4); /* movss */
    goto loc_00304E12;

loc_00304E0F: ;
    xmm0 = xmm1; /* movaps */

loc_00304E12: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00304E2F; /* jp: parity */

loc_00304E21: ;
    xmm0 = MEMF(0x648E54); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00304E2F: ;
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_00304E4C; /* je: equal / zero */

loc_00304E36: ;
    eax = ZX16(LO16(esi));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00304E4A: ;
    esi = eax;

loc_00304E4C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002CEFC0(); /* call 0x002CEFC0 */

loc_00304E5E: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_00304E62: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00304E70
 * Original: 0x00304E70 - 0x00304ED0 (96 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304E70: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00304ED0(); return; } /* jnp: not parity */

loc_00304E89: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x38E);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ecx + 0x228) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 0x228))) { sub_00304ED0(); return; } /* ja: above (unsigned >) */

loc_00304E9D: ;
    SET_LO16(edx, 1);
    (void)0; /* cmp LO16(edx), MEM16(ecx + 0x3AE) - flags set for next jcc */
    edx = MEM32(0x7FDBF8);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 3;
    eax = eax + 0x29;
    edx = edx & 0xFFFF;
    eax = eax << 0x18;
    edx = edx | eax;
    MEM32(0x7FDBF8) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00304DC0(); return; /* tail jmp 0x00304DC0 */

}

/**
 * sub_00304EE0
 * Original: 0x00304EE0 - 0x003050BE (478 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304EE0(void)
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

loc_00304EE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x1B5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00304F0D; /* jne: not equal / not zero */

loc_00304EF2: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm0; /* movss */

loc_00304F0D: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    xmm0 = (float)(int32_t)MEM32(0x7FDBF4); /* cvtsi2ss */
    /* FPU: fcos  */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    eax = ZX16(MEM16(esi + 0x170));
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEM8(esi + 0x24B) = 0;
    MEM8(esi + 0x180) = 0;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    fp_push((double)SMEM32(0x7FDBF8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F78: ;
    if (CMP_GE(eax, 0x205)) goto loc_00304FE5; /* jge: greater or equal (signed >=) */

loc_00304F7F: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F86: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F8D: ;
    edx = MEM32(edx + 0xB4);
    if (TEST_Z(edx, edx)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F97: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_00304FAA; /* je: equal / zero */

loc_00304F9F: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0xF)) goto loc_00304FB1; /* ja: above (unsigned >) */

loc_00304FAA: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00304FAF: ;
    goto loc_00304FE5;

loc_00304FB1: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0xBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0xB8));
    eax = MEM32(eax + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00304FE2: ;
    esp = esp + 0x20;

loc_00304FE5: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x80); /* addss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    edx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esi + 0x84;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0x80);
    MEM32(ecx + 4) = eax;
    MEM8(esi + 0x208) = MEM8(esi + 0x208) | 2;
    eax = MEM32(esi + 0x568);
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0xDC) = xmm0; /* movss */
    MEM8(esi + 0x17D) = 0x14;
    MEM8(eax + 0x5C) = 0xC;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x6C) = 0xA;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000808F0(); /* call 0x000808F0 */

loc_0030505E: ;
    xmm0 = MEMF(0x648F40); /* movss */
    xmm1 = MEMF(0x648F3C); /* movss */
    esp = esp + 8;
    MEMF(esi + 0x2E0) = xmm0; /* movss */
    MEMF(esi + 0x2E4) = xmm0; /* movss */
    MEMF(esi + 0x2E8) = xmm0; /* movss */
    MEMF(esi + 0x2EC) = xmm1; /* movss */
    MEMF(esi + 0x2F0) = xmm0; /* movss */
    MEMF(esi + 0x2F4) = xmm0; /* movss */
    MEMF(esi + 0x2F8) = xmm1; /* movss */
    MEMF(esi + 0x2FC) = xmm0; /* movss */
    MEMF(esi + 0x300) = xmm1; /* movss */
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
 * sub_003050C0
 * Original: 0x003050C0 - 0x0030518C (204 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003050C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    xmm0 = xmm0 - MEMF(0x6493A8); /* subss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00305157; /* je: equal / zero */

loc_003050E6: ;
    if (CMP_GE(eax, 0x205)) goto loc_00305157; /* jge: greater or equal (signed >=) */

loc_003050ED: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00305157; /* je: equal / zero */

loc_003050F4: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00305157; /* je: equal / zero */

loc_003050FB: ;
    edx = MEM32(edx + 0x1F14);
    if (TEST_Z(edx, edx)) goto loc_00305157; /* je: equal / zero */

loc_00305105: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_00305119; /* je: equal / zero */

loc_0030510D: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x297)) goto loc_00305120; /* ja: above (unsigned >) */

loc_00305119: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_0030511E: ;
    goto loc_00305157;

loc_00305120: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x1F1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x1F18));
    eax = MEM32(eax + 0x1F14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x297);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00305154: ;
    esp = esp + 0x20;

loc_00305157: ;
    SET_LO8(eax, MEM8(esi + 0x208));
    ecx = MEM32(esi + 0x568);
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x208) = LO8(eax);
    MEM8(esi + 0x17D) = 0;
    MEM8(esi + 0x180) = 0;
    MEM8(ecx + 0xD9) = 0;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x5C) = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305190
 * Original: 0x00305190 - 0x003051A1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305190(void)
{

loc_00305190: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x20B) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003051B0
 * Original: 0x003051B0 - 0x003051C8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051B0(void)
{

loc_003051B0: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003051C4: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003051D0
 * Original: 0x003051D0 - 0x00305243 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003051D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00305241; /* je: equal / zero */

loc_003051D9: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00305241; /* je: equal / zero */

loc_003051E3: ;
    ecx = MEM32(eax + 0xA0);
    (void)0; /* cmp ecx, 0x5D - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(ecx, 0x5D)) goto loc_003051FA; /* jl: less (signed <) */

loc_003051EF: ;
    (void)0; /* cmp ecx, 0x61 - flags set for next jcc */
    edi = MEM32(0x7FDBF4);
    if (CMP_LE(ecx, 0x61)) goto loc_00305200; /* jle: less or equal (signed <=) */

loc_003051FA: ;
    edi = MEM32(0x7FDBF8);

loc_00305200: ;
    xmm0 = MEMF(eax + 0x514); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_00305240; /* jbe: below or equal (unsigned <=) */

loc_00305211: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00305216: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x32)) goto loc_00305240; /* jg: greater (signed >) */

loc_00305223: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00305230: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 8;
    MEM8(edx + 0x4F5) = 1;

loc_00305240: ;
    POP32(esp, edi);

loc_00305241: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305250
 * Original: 0x00305250 - 0x00305385 (309 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00305250: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_00305383; /* je: equal / zero */

loc_0030525D: ;
    ecx = MEM32(edi + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00305383; /* je: equal / zero */

loc_0030526B: ;
    eax = MEM32(0x7FDBF8);
    eax = eax - 2;
    if ((eax == 0)) goto loc_00305362; /* je: equal / zero */

loc_00305279: ;
    eax--;
    if ((eax == 0)) goto loc_003052E1; /* je: equal / zero */

loc_0030527C: ;
    eax--;
    if ((eax != 0)) goto loc_00305383; /* jne: not equal / not zero */

loc_00305283: ;
    xmm0 = MEMF(ecx + 0x4F8); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00305383; /* jp: parity */

loc_0030529C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x7FDBF4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003052C5; /* je: equal / zero */

loc_003052AA: ;
    if (CMP_NE(eax, 0xB52)) goto loc_003052C5; /* jne: not equal / not zero */

loc_003052B1: ;
    ecx = MEM32(ecx + 0x3F4);
    if (TEST_Z(ecx, ecx)) goto loc_003052C5; /* je: equal / zero */

loc_003052BB: ;
    if (CMP_NE(MEM32(ecx + 0x18), 1)) goto loc_00305383; /* jne: not equal / not zero */

loc_003052C5: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003052DF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003052E1: ;
    xmm0 = MEMF(ecx + 0x4F8); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00305383; /* jp: parity */

loc_003052FA: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    if (1 /* jnp after test - parity */) goto loc_00305321; /* jnp: not parity */

loc_00305316: ;
    /* comiss xmm0, MEMF(edi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x7C))) goto loc_00305321; /* jbe: below or equal (unsigned <=) */

loc_0030531C: ;
    ebx = 4;

loc_00305321: ;
    ecx = MEM32(edi + 0x298);
    ecx = ecx & 0x1F;
    eax = edi;
    PUSH32(esp, 0); sub_00021630(); /* call 0x00021630 */

loc_00305331: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_G(eax & eax, 0)) goto loc_00305359; /* jg: greater (signed >) */

loc_00305336: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00305354; /* je: equal / zero */

loc_0030533F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x63837C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00305350: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00305354: ;
    eax = 0xBA0;

loc_00305359: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    goto loc_0030536F;

loc_00305362: ;
    ecx = MEM32(0x7FDBF4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);

loc_0030536F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00305383: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305390
 * Original: 0x00305390 - 0x003053A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305390(void)
{

loc_00305390: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00021960(); /* call 0x00021960 */

loc_0030539F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003053B0
 * Original: 0x003053B0 - 0x003053E3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003053B0: ;
    ecx = MEM32(0x7FDBF8);
    if (TEST_Z(ecx, ecx)) goto loc_003053E2; /* je: equal / zero */

loc_003053BA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003053E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003053F0
 * Original: 0x003053F0 - 0x00305416 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053F0(void)
{

loc_003053F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF4);
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00305415: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305420
 * Original: 0x00305420 - 0x0030545D (61 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00305420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = MEM32(eax + 0xA4);
    if (CMP_EQ(MEM32(edx + 0x4FC), ecx)) goto loc_0030545C; /* je: equal / zero */

loc_00305438: ;
    MEM32(edx + 0x4FC) = ecx;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    eax = MEM32(eax + 0x568);
    xmm0 = xmm0 * MEMF(0x7F9F58); /* mulss */
    MEMF(eax + 0x4F8) = xmm0; /* movss */

loc_0030545C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305460
 * Original: 0x00305460 - 0x003054B9 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305460: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = eax;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    ebx = ZX8(HI8(eax));
    edx = edx & 0xFF;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ecx + 0x135;

loc_00305488: ;
    if (CMP_EQ(MEM8(esi + eax), 0)) goto loc_003054A6; /* je: equal / zero */

loc_0030548E: ;
    edi = ZX8(MEM8(ecx + 0x7E));
    if (CMP_NE(edi, edx)) goto loc_003054A6; /* jne: not equal / not zero */

loc_00305496: ;
    edi = MEM32(esp + 0x14);
    edi = ZX16(MEM16(edi + 0x60));
    ebp = ZX8(MEM8(ecx));
    edi++;
    if (CMP_EQ(ebp, edi)) { sub_003054B9(); return; } /* je: equal / zero */

loc_003054A6: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_00305488; /* jl: less (signed <) */

loc_003054B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003054E0
 * Original: 0x003054E0 - 0x003054F1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003054E0(void)
{

loc_003054E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x234) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305500
 * Original: 0x00305500 - 0x0030555A (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305500(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00305500: ;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_00305536; /* je: equal / zero */

loc_0030550D: ;
    xmm1 = MEMF(eax + 0x118); /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00305536; /* jbe: below or equal (unsigned <=) */

loc_00305522: ;
    xmm1 = MEMF(eax + 0x110); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00305536; /* jbe: below or equal (unsigned <=) */

loc_0030552F: ;
    MEM8(eax + 0x17D) = 0;

loc_00305536: ;
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    eax = 0x199;
    PUSH32(esp, 0); sub_00174300(); /* call 0x00174300 */

loc_00305556: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00305560
 * Original: 0x00305560 - 0x0030556B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305560(void)
{

loc_00305560: ;
    SET_LO8(eax, MEM8(0x7FDBF8));
    MEM8(0x7FAADB) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00305570
 * Original: 0x00305570 - 0x00305585 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305570(void)
{
    float xmm0;

loc_00305570: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00305590
 * Original: 0x00305590 - 0x003055A1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305590(void)
{

loc_00305590: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x444) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003055B0
 * Original: 0x003055B0 - 0x003055D0 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055B0(void)
{

loc_003055B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x3EE) = LO8(ecx);
    edx = MEM32(0x7FDBF8);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(eax + 0x3EF) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305600
 * Original: 0x00305600 - 0x0030563B (59 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x228); /* movss */
    xmm0 = xmm0 - MEMF(0x648E38); /* subss */
    xmm1 = MEMF(esi + 0x7C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_0030563B(); return; } /* ja: above (unsigned >) */

loc_0030561F: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0030563B(); return; } /* jnp: not parity */

loc_00305634: ;
    eax = 9;
    g_seh_ebp = ebp; sub_00305654(); return; /* tail jmp 0x00305654 */

}

/**
 * sub_00305690
 * Original: 0x00305690 - 0x003056A1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305690(void)
{

loc_00305690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x530) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003056B0
 * Original: 0x003056B0 - 0x003056C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056B0(void)
{

loc_003056B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x534) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003056D0
 * Original: 0x003056D0 - 0x003056E3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056D0(void)
{

loc_003056D0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x3AE) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003056F0
 * Original: 0x003056F0 - 0x0030570E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003056F0: ;
    ecx = MEM32(0x7FDBF8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_NZ(ecx, ecx)) { sub_0030570E(); return; } /* jne: not equal / not zero */

loc_003056FE: ;
    ecx = MEM32(eax + 0x258);
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x200) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00305720
 * Original: 0x00305720 - 0x0030573B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305720(void)
{

loc_00305720: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x200);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x200) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00305740
 * Original: 0x00305740 - 0x00305775 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00305740: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030575D; /* je: equal / zero */

loc_0030574E: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    SET_LO8(edx, LO8(edx) & 0x7F);
    MEM8(eax + 0xB2) = LO8(edx);

loc_0030575D: ;
    eax = MEM32(0x7FDBF8);
    if (TEST_NZ(eax, eax)) goto loc_00305774; /* jne: not equal / not zero */

loc_00305766: ;
    SET_LO16(eax, MEM16(ecx + 0x174));
    MEM16(ecx + 0x170) = LO16(eax);

loc_00305774: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305780
 * Original: 0x00305780 - 0x0030578D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305780(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 2;
    g_seh_ebp = ebp; sub_00305790(); return; /* tail jmp 0x00305790 */

}

/**
 * sub_003057C0
 * Original: 0x003057C0 - 0x00305890 (208 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003057C0: ;
    eax = MEM32(0x7FDBF8);
    if (CMP_A(eax, 0xD)) goto loc_0030588F; /* ja: above (unsigned >) */

loc_003057CE: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x305890); /* switch: 14 entries, 10 targets */
    if (_jt == 0x003057D6u) goto loc_003057D6;
    if (_jt == 0x0030581Cu) goto loc_0030581C;
    if (_jt == 0x00305822u) goto loc_00305822;
    if (_jt == 0x00305830u) goto loc_00305830;
    if (_jt == 0x0030583Eu) goto loc_0030583E;
    if (_jt == 0x00305849u) goto loc_00305849;
    if (_jt == 0x00305859u) goto loc_00305859;
    if (_jt == 0x00305869u) goto loc_00305869;
    if (_jt == 0x00305873u) goto loc_00305873;
    if (_jt == 0x00305881u) goto loc_00305881;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003057D6: ;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0030588E; /* jp: parity */

loc_003057F3: ;
    eax = MEM32(ecx + 0x80);
    edx = MEM32(ecx + 0x7C);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00114C10(); /* call 0x00114C10 */

loc_00305817: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030581C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003E2480(); return; /* tail jmp 0x003E2480 */

loc_00305822: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DDE20(); return; /* tail jmp 0x000DDE20 */

loc_00305830: ;
    edx = MEM32(esp + 8);
    eax = ZX16(MEM16(edx + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE080(); return; /* tail jmp 0x000DE080 */

loc_0030583E: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_003058D0(); /* call 0x003058D0 */

loc_00305847: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305849: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00165650(); /* call 0x00165650 */

loc_00305854: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305859: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00165650(); /* call 0x00165650 */

loc_00305864: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305869: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003058F0(); return; /* tail jmp 0x003058F0 */

loc_00305873: ;
    eax = MEM32(esp + 8);
    eax = ZX16(MEM16(eax + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE080(); return; /* tail jmp 0x000DE080 */

loc_00305881: ;
    ecx = MEM32(esp + 8);
    esi = ZX16(MEM16(ecx + 0x60));
    PUSH32(esp, 0); sub_001655B0(); /* call 0x001655B0 */

loc_0030588E: ;
    POP32(esp, esi);

loc_0030588F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058D0
 * Original: 0x003058D0 - 0x003058E3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058D0(void)
{

loc_003058D0: ;
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000DBDA0(); /* call 0x000DBDA0 */

loc_003058DF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003058F0
 * Original: 0x003058F0 - 0x0030594D (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003058F0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_00305939; /* jne: not equal / not zero */

loc_003058FC: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x66)) goto loc_00305939; /* jne: not equal / not zero */

loc_00305902: ;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    /* ucomiss xmm0, MEMF(0x648F08) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00305928; /* jp: parity */

loc_00305917: ;
    xmm0 = MEMF(0x648F04); /* movss */
    /* comiss xmm0, MEMF(0x84A628) - sets EFLAGS */
    goto loc_00305937;

loc_00305928: ;
    xmm0 = MEMF(0x84A628); /* movss */
    /* comiss xmm0, MEMF(0x648F00) - sets EFLAGS */

loc_00305937: ;
    if ((xmm0 > MEMF(0x648F00))) goto loc_0030594B; /* ja: above (unsigned >) */

loc_00305939: ;
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000DBDA0(); /* call 0x000DBDA0 */

loc_00305948: ;
    esp = esp + 8;

loc_0030594B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305950
 * Original: 0x00305950 - 0x003059FB (171 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305950: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ecx = esi;
    ecx = ecx & 0x7FFF;
    if (CMP_B(ecx, 0xDDA)) goto loc_0030599E; /* jb: below (unsigned <) */

loc_00305969: ;
    edx = ZX8(MEM8(eax + 0x486));
    edx = MEM32(edx * 4 + 0x6CB4A8);
    ecx = MEM32(edx + ecx * 4 + -14184);
    if (TEST_NZ(ecx, ecx)) goto loc_0030598A; /* jne: not equal / not zero */

loc_00305982: ;
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030598A: ;
    esi = esi & 0xFF200000u;
    if ((esi == 0)) goto loc_0030599C; /* je: equal / zero */

loc_00305992: ;
    ecx = ecx & 0xFFFFFF;
    esi = esi | ecx;
    goto loc_0030599E;

loc_0030599C: ;
    esi = ecx;

loc_0030599E: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    if (TEST_Z(esi, 0x200000)) goto loc_003059E6; /* je: equal / zero */

loc_003059AF: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_003059DD; /* je: equal / zero */

loc_003059B8: ;
    ecx--;
    if ((ecx == 0)) goto loc_003059CE; /* je: equal / zero */

loc_003059BB: ;
    ecx--;
    if ((ecx != 0)) goto loc_003059E6; /* jne: not equal / not zero */

loc_003059BE: ;
    PUSH32(esp, 0); sub_0001B140(); /* call 0x0001B140 */

loc_003059C3: ;
    if (CMP_NE(eax, 1)) goto loc_003059E6; /* jne: not equal / not zero */

loc_003059C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003059CE: ;
    PUSH32(esp, 0); sub_00021510(); /* call 0x00021510 */

loc_003059D3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003059E6; /* je: equal / zero */

loc_003059D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003059DD: ;
    PUSH32(esp, 0); sub_000214C0(); /* call 0x000214C0 */

loc_003059E2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003059C8; /* jne: not equal / not zero */

loc_003059E6: ;
    if (CMP_L(edi, 0xDDA)) { sub_003059FB(); return; } /* jl: less (signed <) */

loc_003059EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00305A40
 * Original: 0x00305A40 - 0x00305A67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305A40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_00305A53: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00305A67(); return; } /* je: equal / zero */

loc_00305A5A: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

}

/**
 * sub_00305A70
 * Original: 0x00305A70 - 0x00305AAC (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00305A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_00305A83: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00305AAA; /* je: equal / zero */

loc_00305A8A: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00305AAA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305AB0
 * Original: 0x00305AB0 - 0x00305B26 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305AB0: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x13 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_00305AFB; /* jne: not equal / not zero */

loc_00305ABE: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x66)) goto loc_00305AFB; /* jne: not equal / not zero */

loc_00305AC4: ;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    /* ucomiss xmm0, MEMF(0x648F08) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00305AEA; /* jp: parity */

loc_00305AD9: ;
    xmm0 = MEMF(0x648F04); /* movss */
    /* comiss xmm0, MEMF(0x84A628) - sets EFLAGS */
    goto loc_00305AF9;

loc_00305AEA: ;
    xmm0 = MEMF(0x84A628); /* movss */
    /* comiss xmm0, MEMF(0x648F00) - sets EFLAGS */

loc_00305AF9: ;
    if ((xmm0 > MEMF(0x648F00))) { sub_00305B26(); return; } /* ja: above (unsigned >) */

loc_00305AFB: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00305B26(); return; } /* jne: not equal / not zero */

loc_00305B04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_00305B12: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00305B26(); return; } /* je: equal / zero */

loc_00305B19: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

}

/**
 * sub_00305B30
 * Original: 0x00305B30 - 0x00305B62 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305B30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305B61; /* jne: not equal / not zero */

loc_00305B39: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_00305B4C: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00305B60; /* je: equal / zero */

loc_00305B53: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305B60: ;
    POP32(esp, esi);

loc_00305B61: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B70
 * Original: 0x00305B70 - 0x00305BA5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305B70: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00305BA5(); return; } /* jne: not equal / not zero */

loc_00305B79: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00305BA5(); return; } /* jp: parity */

loc_00305B92: ;
    SET_LO8(eax, MEM8(ecx + 0x214));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00305BA5(); return; } /* jne: not equal / not zero */

loc_00305B9C: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00305A40(); return; /* tail jmp 0x00305A40 */

}

/**
 * sub_00305BB0
 * Original: 0x00305BB0 - 0x00305BFC (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305BB0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305BFB; /* jne: not equal / not zero */

loc_00305BB9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_00305BCC: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00305BFA; /* je: equal / zero */

loc_00305BD3: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(0x7FDBF8);
    eax = edi;
    PUSH32(esp, 0); sub_00024D90(); /* call 0x00024D90 */

loc_00305BEA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305BF9; /* jne: not equal / not zero */

loc_00305BEE: ;
    eax = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305BF9: ;
    POP32(esp, edi);

loc_00305BFA: ;
    POP32(esp, esi);

loc_00305BFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C00
 * Original: 0x00305C00 - 0x00305CD0 (208 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305C00: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305CCF; /* jne: not equal / not zero */

loc_00305C0D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    if (CMP_B(eax, 0xDDA)) goto loc_00305C5B; /* jb: below (unsigned <) */

loc_00305C27: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    if (TEST_NZ(eax, eax)) goto loc_00305C48; /* jne: not equal / not zero */

loc_00305C40: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305C48: ;
    esi = esi & 0xFF200000u;
    if ((esi == 0)) goto loc_00305C59; /* je: equal / zero */

loc_00305C50: ;
    eax = eax & 0xFFFFFF;
    esi = esi | eax;
    goto loc_00305C5B;

loc_00305C59: ;
    esi = eax;

loc_00305C5B: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp & 0x7FFF;
    if (TEST_Z(esi, 0x200000)) goto loc_00305C76; /* je: equal / zero */

loc_00305C6C: ;
    PUSH32(esp, 0); sub_0001B140(); /* call 0x0001B140 */

loc_00305C71: ;
    if (CMP_EQ(eax, 1)) goto loc_00305CCC; /* je: equal / zero */

loc_00305C76: ;
    if (CMP_L(ebp, 0xDDA)) goto loc_00305C8C; /* jl: less (signed <) */

loc_00305C7E: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305C8C: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 0x10;
    if (TEST_Z(edi, edi)) goto loc_00305CB9; /* je: equal / zero */

loc_00305C96: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00305C9B: ;
    eax = eax & 0xFF;
    esi = esi >> 0x18;
    if (CMP_B(esi, eax)) goto loc_00305CCB; /* jb: below (unsigned <) */

loc_00305CA7: ;
    edi = edi & 0x1F;
    esi = ebp;
    if ((edi == 0)) goto loc_00305CB9; /* je: equal / zero */

loc_00305CAE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00305CB4: ;
    esp = esp + 4;
    esi = eax;

loc_00305CB9: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = esi;
    PUSH32(esp, 0); sub_0001AF70(); /* call 0x0001AF70 */

loc_00305CC8: ;
    esp = esp + 0xC;

loc_00305CCB: ;
    POP32(esp, edi);

loc_00305CCC: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00305CCF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305E40
 * Original: 0x00305E40 - 0x00305F33 (243 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305E40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305F32; /* jne: not equal / not zero */

loc_00305E4D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    if (CMP_B(eax, 0xDDA)) goto loc_00305E9B; /* jb: below (unsigned <) */

loc_00305E67: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    if (TEST_NZ(eax, eax)) goto loc_00305E88; /* jne: not equal / not zero */

loc_00305E80: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305E88: ;
    esi = esi & 0xFF200000u;
    if ((esi == 0)) goto loc_00305E99; /* je: equal / zero */

loc_00305E90: ;
    eax = eax & 0xFFFFFF;
    esi = esi | eax;
    goto loc_00305E9B;

loc_00305E99: ;
    esi = eax;

loc_00305E9B: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    if (TEST_Z(esi, 0x200000)) goto loc_00305EB7; /* je: equal / zero */

loc_00305EAC: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00021510(); /* call 0x00021510 */

loc_00305EB3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00305F2F; /* jne: not equal / not zero */

loc_00305EB7: ;
    if (CMP_L(edi, 0xDDA)) goto loc_00305ECD; /* jl: less (signed <) */

loc_00305EBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305ECD: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp >> 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_00305EFC; /* je: equal / zero */

loc_00305ED7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00305EDC: ;
    eax = eax & 0xFF;
    esi = esi >> 0x18;
    if (CMP_B(esi, eax)) goto loc_00305F2E; /* jb: below (unsigned <) */

loc_00305EE8: ;
    ebp = ebp & 0x1F;
    esi = edi;
    if ((ebp == 0)) goto loc_00305EFC; /* je: equal / zero */

loc_00305EEF: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00305EF7: ;
    esp = esp + 4;
    esi = eax;

loc_00305EFC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FDBF8) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00305F14; /* jne: not equal / not zero */

loc_00305F06: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_00305F0C: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305F14: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 0x4000001;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00305F2E: ;
    POP32(esp, ebp);

loc_00305F2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00305F32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F40
 * Original: 0x00305F40 - 0x0030605F (287 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305F40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030605E; /* jne: not equal / not zero */

loc_00305F4D: ;
    eax = MEM32(0x8498D4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00305F63; /* je: equal / zero */

loc_00305F59: ;
    if (CMP_EQ(MEM8(eax + 4), 1)) goto loc_0030605D; /* je: equal / zero */

loc_00305F63: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    if (CMP_B(eax, 0xDDA)) goto loc_00305FB3; /* jb: below (unsigned <) */

loc_00305F7D: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    if (CMP_NE(eax, ebp)) goto loc_00305FA0; /* jne: not equal / not zero */

loc_00305F96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FA0: ;
    esi = esi & 0xFF200000u;
    if ((esi == 0)) goto loc_00305FB1; /* je: equal / zero */

loc_00305FA8: ;
    eax = eax & 0xFFFFFF;
    esi = esi | eax;
    goto loc_00305FB3;

loc_00305FB1: ;
    esi = eax;

loc_00305FB3: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    if (TEST_Z(esi, 0x200000)) goto loc_00305FD3; /* je: equal / zero */

loc_00305FC4: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00021510(); /* call 0x00021510 */

loc_00305FCB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030605A; /* jne: not equal / not zero */

loc_00305FD3: ;
    if (CMP_L(edi, 0xDDA)) goto loc_00305FE6; /* jl: less (signed <) */

loc_00305FDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FE6: ;
    ebp = esi;
    ebp = ebp >> 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_00306014; /* je: equal / zero */

loc_00305FEF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00305FF4: ;
    eax = eax & 0xFF;
    esi = esi >> 0x18;
    if (CMP_B(esi, eax)) goto loc_0030605A; /* jb: below (unsigned <) */

loc_00306000: ;
    ebp = ebp & 0x1F;
    esi = edi;
    if ((ebp == 0)) goto loc_00306014; /* je: equal / zero */

loc_00306007: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_0030600F: ;
    esp = esp + 4;
    esi = eax;

loc_00306014: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FDBF8) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00306029; /* jne: not equal / not zero */

loc_0030601E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_00306024: ;
    esp = esp + 4;
    goto loc_00306043;

loc_00306029: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00306043: ;
    if (CMP_NE(MEM32(ebx + 0x68), 0x3C)) goto loc_0030605A; /* jne: not equal / not zero */

loc_00306049: ;
    edx = MEM32(0x7FDBF8);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_000E0500(); /* call 0x000E0500 */

loc_00306057: ;
    esp = esp + 4;

loc_0030605A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0030605D: ;
    POP32(esp, ebp);

loc_0030605E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306060
 * Original: 0x00306060 - 0x00306153 (243 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306060: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00306152; /* jne: not equal / not zero */

loc_0030606D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    if (CMP_B(eax, 0xDDA)) goto loc_003060BB; /* jb: below (unsigned <) */

loc_00306087: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    if (TEST_NZ(eax, eax)) goto loc_003060A8; /* jne: not equal / not zero */

loc_003060A0: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003060A8: ;
    esi = esi & 0xFF200000u;
    if ((esi == 0)) goto loc_003060B9; /* je: equal / zero */

loc_003060B0: ;
    eax = eax & 0xFFFFFF;
    esi = esi | eax;
    goto loc_003060BB;

loc_003060B9: ;
    esi = eax;

loc_003060BB: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    if (TEST_Z(esi, 0x200000)) goto loc_003060D7; /* je: equal / zero */

loc_003060CC: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00021510(); /* call 0x00021510 */

loc_003060D3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030614F; /* jne: not equal / not zero */

loc_003060D7: ;
    if (CMP_L(edi, 0xDDA)) goto loc_003060ED; /* jl: less (signed <) */

loc_003060DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003060ED: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp >> 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_0030611C; /* je: equal / zero */

loc_003060F7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003060FC: ;
    eax = eax & 0xFF;
    esi = esi >> 0x18;
    if (CMP_B(esi, eax)) goto loc_0030614E; /* jb: below (unsigned <) */

loc_00306108: ;
    ebp = ebp & 0x1F;
    esi = edi;
    if ((ebp == 0)) goto loc_0030611C; /* je: equal / zero */

loc_0030610F: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00306117: ;
    esp = esp + 4;
    esi = eax;

loc_0030611C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FDBF8) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00306134; /* jne: not equal / not zero */

loc_00306126: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_0030612C: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306134: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0030614E: ;
    POP32(esp, ebp);

loc_0030614F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00306152: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306160
 * Original: 0x00306160 - 0x0030627C (284 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(ebp + 0x250));
    SET_LO8(eax, LO8(ecx));
    ebx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) - 1);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00306279; /* je: equal / zero */

loc_0030617A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    esi = edi + eax;
    if (CMP_B(MEM8(esi + 0x251), 1)) goto loc_00306271; /* jb: below (unsigned <) */

loc_0030619A: ;
    xmm0 = MEMF(0x648CFC); /* movss */
    (void)0; /* cmp MEM32(esi + 0x68), 0x20 - flags set for next jcc */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    MEM8(esi + 0x251) = LO8(ebx);
    SET_LO16(ecx, MEM16(ebp + 0x174));
    MEM16(esi + 0x170) = LO16(ecx);
    MEM8(esi + 0x135) = LO8(ebx);
    if (CMP_NE(MEM32(esi + 0x68), 0x20)) goto loc_00306216; /* jne: not equal / not zero */

loc_003061EA: ;
    eax = MEM32(esi + 0x200);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax | 0x204;
    MEMF(esi + 0xD0) = xmm0; /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM32(esi + 0x200) = eax;

loc_00306216: ;
    eax = esi;
    ecx = 0xC;
    MEM8(esi + 0x20C) = 0xFE;
    MEM8(esi + 0x20D) = LO8(ebx);
    PUSH32(esp, 0); sub_002F1D20(); /* call 0x002F1D20 */

loc_0030622F: ;
    xmm0 = MEMF(0x6493BC); /* movss */
    MEM32(esi + 0x210) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi;
    MEM32(esi + 0xA4) = 0xFFFFFFFFu;
    MEMF(esi + 0x3B8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F2950(); /* call 0x002F2950 */

loc_00306258: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(edi + eax + 0x468);
    esp = esp + 8;
    ecx = ecx | 0x40;
    MEM32(edi + eax + 0x468) = ecx;

loc_00306271: ;
    POP32(esp, edi);
    MEM8(ebp + 0x250) = LO8(ebx);
    POP32(esp, esi);

loc_00306279: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306280
 * Original: 0x00306280 - 0x00306359 (217 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306280: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00306349; /* je: equal / zero */

loc_00306293: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ebx = ebx + edx;
    ecx = ebx;
    PUSH32(esp, 0); sub_003B8010(); /* call 0x003B8010 */

loc_003062AB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00306348; /* je: equal / zero */

loc_003062B3: ;
    eax = MEM32(ebx + 0x68);
    if (CMP_EQ(eax, 0xA8)) goto loc_003062D2; /* je: equal / zero */

loc_003062BD: ;
    if (CMP_EQ(eax, 0xA9)) goto loc_003062D2; /* je: equal / zero */

loc_003062C4: ;
    if (CMP_EQ(eax, 0x118)) goto loc_003062D2; /* je: equal / zero */

loc_003062CB: ;
    if (CMP_NE(eax, 0x117)) goto loc_003062DC; /* jne: not equal / not zero */

loc_003062D2: ;
    eax = MEM32(ebx + 0x52C);
    if (TEST_NZ(eax, eax)) goto loc_00306348; /* jne: not equal / not zero */

loc_003062DC: ;
    esi = MEM32(ebx + 0x570);
    if (TEST_Z(esi, esi)) goto loc_00306348; /* je: equal / zero */

loc_003062E6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003062ED: ;
    if (TEST_NZ(eax, eax)) goto loc_00306348; /* jne: not equal / not zero */

loc_003062F1: ;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x4E));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00306300: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00306347; /* je: equal / zero */

loc_00306306: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0030630D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0030631D; /* je: equal / zero */

loc_00306314: ;
    PUSH32(esp, 0); sub_0027D3C0(); /* call 0x0027D3C0 */

loc_00306319: ;
    esi = eax;
    goto loc_0030631F;

loc_0030631D: ;
    esi = 0; /* xor self */

loc_0030631F: ;
    MEM8(esi + 0x40) = 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xAC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00306339: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00306347: ;
    POP32(esp, edi);

loc_00306348: ;
    POP32(esp, ebx);

loc_00306349: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002E9F80(); /* call 0x002E9F80 */

loc_00306353: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00306360
 * Original: 0x00306360 - 0x003063BF (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00306360: ;
    eax = MEM32(0x7FDBF8);
    if (TEST_Z(eax, eax)) goto loc_003063A2; /* je: equal / zero */

loc_00306369: ;
    edx = MEM32(0x84A5F8);
    eax--;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx;
    edx = MEM32(ecx + 0x64);
    if (TEST_Z(edx, edx)) goto loc_003063BE; /* je: equal / zero */

loc_00306381: ;
    edx = MEM32(esp + 4);
    ecx = ZX8(MEM8(ecx + 0x251));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0x60));
    esi++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(ecx, esi)) goto loc_003063BE; /* jne: not equal / not zero */

loc_00306397: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_0030639E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003063A2: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx + 0x250));
    eax = ZX8(LO8(ecx));
    eax--;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003063BE; /* je: equal / zero */

loc_003063B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003063BB: ;
    esp = esp + 8;

loc_003063BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063C0
 * Original: 0x003063C0 - 0x00306419 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003063C0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648E64) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E64))) goto loc_00306418; /* jbe: below or equal (unsigned <=) */

loc_003063D5: ;
    eax = MEM32(0x7FDBF8);
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_003063EF; /* jns: not sign (positive) */

loc_003063DE: ;
    edx = MEM32(0x84A5F8);
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    /* comiss xmm0, MEMF(edx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x7C))) goto loc_00306418; /* jbe: below or equal (unsigned <=) */

loc_003063EF: ;
    eax = eax & 0xFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ecx + 0x24C));
    SET_LO8(eax, LO8(eax) - 1);
    MEMF(0x7FDBE4) = xmm0; /* movss */
    MEM32(0x7FDBD8) = 0;
    MEM8(ecx + 0x24C) = LO8(eax);

loc_00306418: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306420
 * Original: 0x00306420 - 0x00306455 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00306420: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00306454; /* je: equal / zero */

loc_0030642E: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00306438: ;
    if (TEST_Z(eax, eax)) goto loc_00306454; /* je: equal / zero */

loc_0030643C: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = LO16(edx);
    MEM16(eax + 0x1D8) = LO16(edx);

loc_00306454: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306460
 * Original: 0x00306460 - 0x00306471 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306460(void)
{

loc_00306460: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x10A) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306480
 * Original: 0x00306480 - 0x003064A2 (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306480(void)
{

loc_00306480: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    edx = MEM32(eax + 0x568);
    MEM8(eax + 0x17D) = LO8(ecx);
    MEM8(eax + 0x208) = MEM8(eax + 0x208) | 0x10;
    MEM8(edx + 0x45) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003064B0
 * Original: 0x003064B0 - 0x003064C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064B0(void)
{

loc_003064B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x208) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003064D0
 * Original: 0x003064D0 - 0x003064E6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064D0(void)
{

loc_003064D0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x1B1) = 5;
    eax = MEM32(eax + 0x568);
    MEM8(eax + 0x45) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003064F0
 * Original: 0x003064F0 - 0x00306503 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064F0(void)
{

loc_003064F0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x428) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306510
 * Original: 0x00306510 - 0x00306521 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306510(void)
{

loc_00306510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x1FC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306530
 * Original: 0x00306530 - 0x0030654B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306530(void)
{

loc_00306530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x1FC);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x1FC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306550
 * Original: 0x00306550 - 0x00306561 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306550(void)
{

loc_00306550: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x1FC) = MEM32(eax + 0x1FC) | ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306570
 * Original: 0x00306570 - 0x00306581 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306570(void)
{

loc_00306570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x468) = MEM32(eax + 0x468) | ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306590
 * Original: 0x00306590 - 0x003065AB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306590(void)
{

loc_00306590: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x468);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x468) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003065B0
 * Original: 0x003065B0 - 0x003065D9 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003065B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003065B0: ;
    eax = MEM32(0x7FDBF8);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) { sub_003065D9(); return; } /* je: equal / zero */

loc_003065BC: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x7FDBFA);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = eax & 0xFFFF;
    PUSH32(esp, 0); sub_00140900(); /* call 0x00140900 */

loc_003065D2: ;
    esp = esp + 4;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00306610
 * Original: 0x00306610 - 0x00306637 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00306610: ;
    eax = MEM32(0x774A60);
    if (TEST_Z(eax, eax)) goto loc_00306636; /* je: equal / zero */

loc_00306619: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_00306620: ;
    if (CMP_EQ(MEM32(eax + 0x10), ecx)) goto loc_0030662D; /* je: equal / zero */

loc_00306625: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00306620; /* jne: not equal / not zero */

loc_0030662C: ;
    esp += 4; return; /* ret */

loc_0030662D: ;
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x14) = ecx;

loc_00306636: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306640
 * Original: 0x00306640 - 0x00306651 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306640(void)
{

loc_00306640: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x459) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306660
 * Original: 0x00306660 - 0x003066E4 (132 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306660: ;
    SET_LO8(eax, MEM8(0x7FDBFA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM8(esi + 0x474) = LO8(eax);
    SET_LO8(ecx, MEM8(0x7FDBFB));
    ecx = ecx & 0xFF;
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM16(esi + 0x476) = LO16(ecx);
    SET_LO16(edx, MEM16(0x7FDBF8));
    MEM16(esi + 0x480) = LO16(edx);
    if (CMP_NE(LO8(eax), 3)) { sub_003066E4(); return; } /* jne: not equal / not zero */

loc_00306697: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003066BB: ;
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003066D9; /* je: equal / zero */

loc_003066C5: ;
    eax = MEM32(esp + 8);
    if (CMP_EQ(eax, ecx)) goto loc_003066D9; /* je: equal / zero */

loc_003066CD: ;
    eax = MEM32(eax + 8);
    MEM16(esi + 0x476) = LO16(eax);
    g_seh_ebp = ebp; sub_003066E6(); return; /* tail jmp 0x003066E6 */

loc_003066D9: ;
    eax = 0; /* xor self */
    MEM16(esi + 0x476) = LO16(eax);
    g_seh_ebp = ebp; sub_003066E6(); return; /* tail jmp 0x003066E6 */

}

/**
 * sub_00306750
 * Original: 0x00306750 - 0x00306765 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00306750: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esi + 0x68), 0x8C)) goto loc_00306763; /* je: equal / zero */

loc_0030675E: ;
    PUSH32(esp, 0); sub_000E43E0(); /* call 0x000E43E0 */

loc_00306763: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306770
 * Original: 0x00306770 - 0x0030677C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306770(void)
{

loc_00306770: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000E5050(); /* call 0x000E5050 */

loc_0030677A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306780
 * Original: 0x00306780 - 0x00306794 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306780(void)
{

loc_00306780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_00179FD0(); /* call 0x00179FD0 */

loc_0030678F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003067A0
 * Original: 0x003067A0 - 0x003067B9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003067A0: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003067B8; /* je: equal / zero */

loc_003067A8: ;
    PUSH32(esp, 0xFF);
    eax = 0x32;
    PUSH32(esp, 0); sub_000E5B10(); /* call 0x000E5B10 */

loc_003067B7: ;
    POP32(esp, ecx);

loc_003067B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003067C0
 * Original: 0x003067C0 - 0x003067D7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003067C0: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003067D6; /* je: equal / zero */

loc_003067C8: ;
    PUSH32(esp, 0xFF);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000E5B10(); /* call 0x000E5B10 */

loc_003067D5: ;
    POP32(esp, ecx);

loc_003067D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003067E0
 * Original: 0x003067E0 - 0x003067F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067E0(void)
{

loc_003067E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001571C0(); /* call 0x001571C0 */

loc_003067EC: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306800
 * Original: 0x00306800 - 0x00306811 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306800(void)
{

loc_00306800: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001571C0(); /* call 0x001571C0 */

loc_0030680C: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306820
 * Original: 0x00306820 - 0x00306834 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306820(void)
{

loc_00306820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00181300(); /* call 0x00181300 */

loc_00306830: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00306840
 * Original: 0x00306840 - 0x00306854 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306840(void)
{

loc_00306840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00181300(); /* call 0x00181300 */

loc_00306850: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00306860
 * Original: 0x00306860 - 0x0030686C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306860(void)
{

loc_00306860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00116BB0(); /* call 0x00116BB0 */

loc_0030686A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306870
 * Original: 0x00306870 - 0x00306936 (198 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00306870: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    MEM8(0x84A60C) = 1;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00306880: ;
    esi = MEM32(esp + 0x1C);
    MEM32(0x747628) = eax;
    eax = MEM32(0x8496E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84A610) = 0;
    if (TEST_Z(eax, eax)) goto loc_003068BB; /* je: equal / zero */

loc_0030689C: ;
    eax = 0x5E0B88;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003068A6: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_003068B8: ;
    esp = esp + 0xC;

loc_003068BB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649148); /* movss */
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0x1A;
    MEM16(esp + 0x12) = 0xA0;
    MEM8(esp + 0x16) = 0;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00306904: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x43160000);
    edx = esp + 0x1C;
    PUSH32(esp, 0x47435000);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0030692E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00306940
 * Original: 0x00306940 - 0x0030696C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306940(void)
{

loc_00306940: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x26);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00306968: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00306970
 * Original: 0x00306970 - 0x003069ED (125 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306970(void)
{
    float xmm0;

loc_00306970: ;
    esp = esp - 0x24;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x28);
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, eax);
    eax = esp + 4;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D16D0(); /* call 0x000D16D0 */

loc_003069E9: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003069F0
 * Original: 0x003069F0 - 0x00306A20 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003069F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x638344;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00306A17: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003E1D70(); return; /* tail jmp 0x003E1D70 */

}

/**
 * sub_00306AB0
 * Original: 0x00306AB0 - 0x00306AC4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AB0(void)
{

loc_00306AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0); sub_0013FBF0(); /* call 0x0013FBF0 */

loc_00306AC0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00306AD0
 * Original: 0x00306AD0 - 0x00306AD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AD0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306AD0: ;
    g_seh_ebp = ebp; sub_000D9010(); return; /* tail jmp 0x000D9010 */

}

/**
 * sub_00306AF0
 * Original: 0x00306AF0 - 0x00306AFF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AF0(void)
{

loc_00306AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_00114520(); /* call 0x00114520 */

loc_00306AFD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B00
 * Original: 0x00306B00 - 0x00306B15 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B00(void)
{

loc_00306B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    ecx = 6;
    PUSH32(esp, 0); sub_000CA540(); /* call 0x000CA540 */

loc_00306B13: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B20
 * Original: 0x00306B20 - 0x00306B35 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B20(void)
{

loc_00306B20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    ecx = 5;
    PUSH32(esp, 0); sub_000CA540(); /* call 0x000CA540 */

loc_00306B33: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B40
 * Original: 0x00306B40 - 0x00306B70 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B40(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306B40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C6C;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00306B67: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003E1D70(); return; /* tail jmp 0x003E1D70 */

}

/**
 * sub_00306B90
 * Original: 0x00306B90 - 0x00306BA1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B90(void)
{

loc_00306B90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00192EE0(); /* call 0x00192EE0 */

loc_00306B9C: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BB0
 * Original: 0x00306BB0 - 0x00306BC1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BB0(void)
{

loc_00306BB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00192EE0(); /* call 0x00192EE0 */

loc_00306BBC: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BD0
 * Original: 0x00306BD0 - 0x00306BE1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BD0(void)
{

loc_00306BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_00192EE0(); /* call 0x00192EE0 */

loc_00306BDC: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BF0
 * Original: 0x00306BF0 - 0x00306C1C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00306BF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0 = MEMF(ebx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00306C1A; /* jnp: not parity */

loc_00306C0A: ;
    /* comiss xmm0, MEMF(ebx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x7C))) goto loc_00306C1A; /* jbe: below or equal (unsigned <=) */

loc_00306C10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00192EE0(); /* call 0x00192EE0 */

loc_00306C17: ;
    esp = esp + 4;

loc_00306C1A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C20
 * Original: 0x00306C20 - 0x00306C4C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00306C20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0 = MEMF(ebx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00306C4A; /* jnp: not parity */

loc_00306C3A: ;
    /* comiss xmm0, MEMF(ebx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x7C))) goto loc_00306C4A; /* jbe: below or equal (unsigned <=) */

loc_00306C40: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_00192EE0(); /* call 0x00192EE0 */

loc_00306C47: ;
    esp = esp + 4;

loc_00306C4A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C50
 * Original: 0x00306C50 - 0x00306C59 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C50(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306C50: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00193710(); return; /* tail jmp 0x00193710 */

}

/**
 * sub_00306C80
 * Original: 0x00306C80 - 0x00306C96 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C80(void)
{

loc_00306C80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00555B20(); /* call 0x00555B20 */

loc_00306C91: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
