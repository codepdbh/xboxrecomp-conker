/**
 * Burnout 3 - Recompiled code chunk 39
 * Functions: 250 (0x00352A50 - 0x003750D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00352A50
 * Original: 0x00352A50 - 0x00352AC5 (117 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352A50: ;
    esp = esp - 8;
    eax = eax + eax * 4;
    edx = MEM32(eax * 8 + 0x776F20);
    eax = MEM32(edx * 4 + 0x69CF90);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00352ABB; /* jle: less or equal (signed <=) */

loc_00352A75: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(esp + 0x14) = ecx;
    edi = ecx + 0x1A;
    /* nop */

loc_00352A80: ;
    ecx = MEM32(esp + 0x10);
    esi = edi;

loc_00352A86: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00352AAA; /* jne: not equal / not zero */

loc_00352A8E: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00352AA6; /* je: equal / zero */

loc_00352A92: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00352AAA; /* jne: not equal / not zero */

loc_00352A9C: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00352A86; /* jne: not equal / not zero */

loc_00352AA6: ;
    ecx = 0; /* xor self */
    goto loc_00352AAF;

loc_00352AAA: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_00352AAF: ;
    if (TEST_Z(ecx, ecx)) { sub_00352AC5(); return; } /* je: equal / zero */

loc_00352AB3: ;
    ebp++;
    edi = edi + 0x2E;
    if (CMP_L(ebp, eax)) goto loc_00352A80; /* jl: less (signed <) */

loc_00352ABB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00352AE0
 * Original: 0x00352AE0 - 0x00352D52 (626 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352AE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    ebp = ebp + 4;
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    MEM32(esp + 0xC) = ebp;

loc_00352B05: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00352B22; /* jne: not equal / not zero */

loc_00352B09: ;
    SET_LO16(edx, MEM16(ebp + -4));
    if (CMP_EQ(LO16(edx), 0x20)) goto loc_00352B69; /* je: equal / zero */

loc_00352B13: ;
    if (CMP_EQ(LO16(edx), 0x2C)) goto loc_00352B69; /* je: equal / zero */

loc_00352B19: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00352B69; /* je: equal / zero */

loc_00352B1E: ;
    SET_LO8(ebx, 1);
    ecx = 0; /* xor self */

loc_00352B22: ;
    SET_LO16(esi, MEM16(ebp + -4));
    if (CMP_EQ(LO16(esi), 0x2C)) goto loc_00352B4C; /* je: equal / zero */

loc_00352B2C: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00352B4C; /* je: equal / zero */

loc_00352B31: ;
    edx = MEM32(eax);
    ebp = edi + edx * 2;
    ebp = ebp + edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ebp = ebp + ecx;
    MEM16(ebp * 2 + 0x8014A0) = LO16(esi);
    ebp = MEM32(esp + 0xC);
    ecx++;
    goto loc_00352B69;

loc_00352B4C: ;
    edx = MEM32(eax);
    esi = edi + edx * 2;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    esi = esi + ecx;
    MEM16(esi * 2 + 0x8014A0) = 0;
    edx = MEM32(eax);
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    MEM32(eax) = edx;

loc_00352B69: ;
    if (CMP_EQ(MEM16(ebp + -4), 0)) goto loc_00352D4B; /* je: equal / zero */

loc_00352B74: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00352B91; /* jne: not equal / not zero */

loc_00352B78: ;
    SET_LO16(edx, MEM16(ebp + -2));
    if (CMP_EQ(LO16(edx), 0x20)) goto loc_00352BD8; /* je: equal / zero */

loc_00352B82: ;
    if (CMP_EQ(LO16(edx), 0x2C)) goto loc_00352BD8; /* je: equal / zero */

loc_00352B88: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00352BD8; /* je: equal / zero */

loc_00352B8D: ;
    SET_LO8(ebx, 1);
    ecx = 0; /* xor self */

loc_00352B91: ;
    SET_LO16(esi, MEM16(ebp + -2));
    if (CMP_EQ(LO16(esi), 0x2C)) goto loc_00352BBB; /* je: equal / zero */

loc_00352B9B: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00352BBB; /* je: equal / zero */

loc_00352BA0: ;
    edx = MEM32(eax);
    ebp = edi + edx * 2;
    ebp = ebp + edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ebp = ebp + ecx;
    MEM16(ebp * 2 + 0x8014A0) = LO16(esi);
    ebp = MEM32(esp + 0xC);
    ecx++;
    goto loc_00352BD8;

loc_00352BBB: ;
    edx = MEM32(eax);
    esi = edi + edx * 2;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    esi = esi + ecx;
    MEM16(esi * 2 + 0x8014A0) = 0;
    edx = MEM32(eax);
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    MEM32(eax) = edx;

loc_00352BD8: ;
    if (CMP_EQ(MEM16(ebp + -2), 0)) goto loc_00352D4B; /* je: equal / zero */

loc_00352BE3: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00352C04; /* jne: not equal / not zero */

loc_00352BE7: ;
    SET_LO16(edx, MEM16(ebp));
    if (CMP_EQ(LO16(edx), 0x20)) goto loc_00352C4B; /* je: equal / zero */

loc_00352BF1: ;
    if (CMP_EQ(LO16(edx), 0x2C)) goto loc_00352C4B; /* je: equal / zero */

loc_00352BF7: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00352D4B; /* je: equal / zero */

loc_00352C00: ;
    SET_LO8(ebx, 1);
    ecx = 0; /* xor self */

loc_00352C04: ;
    SET_LO16(esi, MEM16(ebp));
    if (CMP_EQ(LO16(esi), 0x2C)) goto loc_00352C2E; /* je: equal / zero */

loc_00352C0E: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00352C2E; /* je: equal / zero */

loc_00352C13: ;
    edx = MEM32(eax);
    ebp = edi + edx * 2;
    ebp = ebp + edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ebp = ebp + ecx;
    MEM16(ebp * 2 + 0x8014A0) = LO16(esi);
    ebp = MEM32(esp + 0xC);
    ecx++;
    goto loc_00352C4B;

loc_00352C2E: ;
    edx = MEM32(eax);
    esi = edi + edx * 2;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    esi = esi + ecx;
    MEM16(esi * 2 + 0x8014A0) = 0;
    edx = MEM32(eax);
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    MEM32(eax) = edx;

loc_00352C4B: ;
    if (CMP_EQ(MEM16(ebp), 0)) goto loc_00352D4B; /* je: equal / zero */

loc_00352C56: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00352C73; /* jne: not equal / not zero */

loc_00352C5A: ;
    SET_LO16(edx, MEM16(ebp + 2));
    if (CMP_EQ(LO16(edx), 0x20)) goto loc_00352CBA; /* je: equal / zero */

loc_00352C64: ;
    if (CMP_EQ(LO16(edx), 0x2C)) goto loc_00352CBA; /* je: equal / zero */

loc_00352C6A: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00352CBA; /* je: equal / zero */

loc_00352C6F: ;
    SET_LO8(ebx, 1);
    ecx = 0; /* xor self */

loc_00352C73: ;
    SET_LO16(esi, MEM16(ebp + 2));
    if (CMP_EQ(LO16(esi), 0x2C)) goto loc_00352C9D; /* je: equal / zero */

loc_00352C7D: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00352C9D; /* je: equal / zero */

loc_00352C82: ;
    edx = MEM32(eax);
    ebp = edi + edx * 2;
    ebp = ebp + edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ebp = ebp + ecx;
    MEM16(ebp * 2 + 0x8014A0) = LO16(esi);
    ebp = MEM32(esp + 0xC);
    ecx++;
    goto loc_00352CBA;

loc_00352C9D: ;
    edx = MEM32(eax);
    esi = edi + edx * 2;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    esi = esi + ecx;
    MEM16(esi * 2 + 0x8014A0) = 0;
    edx = MEM32(eax);
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    MEM32(eax) = edx;

loc_00352CBA: ;
    if (CMP_EQ(MEM16(ebp + 2), 0)) goto loc_00352D4B; /* je: equal / zero */

loc_00352CC5: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00352CE2; /* jne: not equal / not zero */

loc_00352CC9: ;
    SET_LO16(edx, MEM16(ebp + 4));
    if (CMP_EQ(LO16(edx), 0x20)) goto loc_00352D29; /* je: equal / zero */

loc_00352CD3: ;
    if (CMP_EQ(LO16(edx), 0x2C)) goto loc_00352D29; /* je: equal / zero */

loc_00352CD9: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00352D29; /* je: equal / zero */

loc_00352CDE: ;
    SET_LO8(ebx, 1);
    ecx = 0; /* xor self */

loc_00352CE2: ;
    SET_LO16(esi, MEM16(ebp + 4));
    if (CMP_EQ(LO16(esi), 0x2C)) goto loc_00352D0C; /* je: equal / zero */

loc_00352CEC: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00352D0C; /* je: equal / zero */

loc_00352CF1: ;
    edx = MEM32(eax);
    ebp = edi + edx * 2;
    ebp = ebp + edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF);
    ebp = ebp + ecx;
    MEM16(ebp * 2 + 0x8014A0) = LO16(esi);
    ebp = MEM32(esp + 0xC);
    ecx++;
    goto loc_00352D29;

loc_00352D0C: ;
    edx = MEM32(eax);
    esi = edi + edx * 2;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    esi = esi + ecx;
    MEM16(esi * 2 + 0x8014A0) = 0;
    edx = MEM32(eax);
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    MEM32(eax) = edx;

loc_00352D29: ;
    if (CMP_EQ(MEM16(ebp + 4), 0)) goto loc_00352D4B; /* je: equal / zero */

loc_00352D30: ;
    edx = MEM32(esp + 0x10);
    edx = edx + 5;
    ebp = ebp + 0xA;
    (void)0; /* cmp edx, 0x64 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_L(edx, 0x64)) goto loc_00352B05; /* jl: less (signed <) */

loc_00352D4B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00352D60
 * Original: 0x00352D60 - 0x00352E68 (264 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00352D60: ;
    esp = esp - 0xD8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x5FA6C0;
    eax = 0x63BCA8;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_001F51A0(); /* call 0x001F51A0 */

loc_00352D8A: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63BC98);
    PUSH32(esp, esi);
    edi = ebx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00352DA4: ;
    esp = esp + 0x14;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00352DB5; /* je: equal / zero */

loc_00352DB1: ;
    eax = MEM32(esp + 0xC);

loc_00352DB5: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00352DC0: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00352AE0(); /* call 0x00352AE0 */

loc_00352DD0: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63BC88);
    PUSH32(esp, esi);
    edi = ebx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00352DE2: ;
    esp = esp + 0x18;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00352DF3; /* je: equal / zero */

loc_00352DEF: ;
    eax = MEM32(esp + 0xC);

loc_00352DF3: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00352DFE: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = 1;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00352AE0(); /* call 0x00352AE0 */

loc_00352E11: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63BC78);
    PUSH32(esp, esi);
    edi = ebx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00352E23: ;
    esp = esp + 0x18;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00352E34; /* je: equal / zero */

loc_00352E30: ;
    eax = MEM32(esp + 0xC);

loc_00352E34: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00352E3F: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = 2;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00352AE0(); /* call 0x00352AE0 */

loc_00352E52: ;
    esp = esp + 0xC;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_00352E5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00352E70
 * Original: 0x00352E70 - 0x00352EA4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00352E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8014A0;
    esi = 0; /* xor self */
    /* nop */

loc_00352E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00352E87: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00352EA4(); return; } /* je: equal / zero */

loc_00352E8E: ;
    esi = esi + 0x1E;
    edi = edi + 0x1E;
    if (CMP_B(esi, 0x21C)) goto loc_00352E80; /* jb: below (unsigned <) */

loc_00352E9C: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00352EB0
 * Original: 0x00352EB0 - 0x00352EE3 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0x8014A0;
    esi = 0; /* xor self */

loc_00352EC1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00352EC8: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00352EE3(); return; } /* je: equal / zero */

loc_00352ECF: ;
    esi = esi + 0x1E;
    ebx++;
    edi = edi + 0x1E;
    if (CMP_B(esi, 0x21C)) goto loc_00352EC1; /* jb: below (unsigned <) */

loc_00352EDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00352F10
 * Original: 0x00352F10 - 0x00352F70 (96 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352F10: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = 0x63BCB0;
    MEM8(esi + 0x2B0) = LO8(ebx);
    MEM8(esi + 0x2B1) = LO8(ebx);
    MEM8(esi + 0x2B2) = LO8(ebx);
    PUSH32(esp, 0x100);
    MEM8(esi + 0x2C0) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00352F45: ;
    ecx = MEM32(0x7FA1DC);
    ecx = ecx + ecx * 2 + -3;
    esp = esp + 4;
    (void)0; /* cmp ecx, 0x12 - flags set for next jcc */
    if (CMP_A(ecx, 0x12)) ecx = ebx; /* cmova */
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    MEM32(esi + 0x2C4) = eax;
    if (CMP_AE(edi, 3)) { sub_00352F70(); return; } /* jae: above or equal (unsigned >=) */

loc_00352F63: ;
    ecx = ecx + edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    ecx = ecx + 0x8014A0;
    g_seh_ebp = ebp; sub_00352F72(); return; /* tail jmp 0x00352F72 */

}

/**
 * sub_00352FA0
 * Original: 0x00352FA0 - 0x00352FE7 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00352FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x63BCB0;
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00352FB5: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 4;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esi + 0x2C4) = 0;
    MEM32(esi) = 0x63BBF8;
    if (TEST_Z(LO8(eax), 1)) goto loc_00352FE1; /* je: equal / zero */

loc_00352FD0: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00352FDE: ;
    esp = esp + 4;

loc_00352FE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00352FF0
 * Original: 0x00352FF0 - 0x00353040 (80 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00352FF0: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00353022; /* je: equal / zero */

loc_00352FF7: ;
    ecx = MEM32(0x7FA1DC);
    if (CMP_EQ(edx, ecx)) goto loc_0035301A; /* je: equal / zero */

loc_00353001: ;
    if (CMP_EQ(MEM32(eax + 0x2C8), ecx)) goto loc_0035303D; /* je: equal / zero */

loc_00353009: ;
    MEM8(eax + 0x2C0) = 1;
    MEM32(eax + 0xC) = 7;
    esp += 8; return; /* ret 4 */

loc_0035301A: ;
    if (CMP_EQ(MEM32(eax + 0x2C8), ecx)) goto loc_00353009; /* je: equal / zero */

loc_00353022: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x2C8) = edx;
    MEM8(eax + 0x2C0) = 0;
    MEM32(eax + 0xC) = 1;

loc_0035303D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00353040
 * Original: 0x00353040 - 0x003530BC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353040(void)
{

loc_00353040: ;
    edx = ecx;
    MEM8(edx + 0x1A) = 0x18;
    MEM8(edx + 0x18) = 4;
    MEM8(edx + 0x19) = 3;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edx + 0x2CC) = ebx;
    MEM32(edx + 0x2D0) = ebx;
    MEM8(edx + 0x1B) = LO8(ebx);
    MEM32(edx + 0x10) = ebx;
    MEM32(edx + 0x14) = ebx;
    MEM8(edx + 0x1C) = LO8(ebx);
    ecx = edx + 0x1D;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM16(ecx + 0x18) = LO16(eax);
    ecx = edx + 0x37;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM16(ecx + 0x1C) = LO16(eax);
    PUSH32(esp, edi);
    MEM8(ecx + 0x1E) = LO8(eax);
    ecx = 0x96;
    edi = edx + 0x58;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0x2BC) = ebx;
    MEM8(edx + 0x2B8) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003530C0
 * Original: 0x003530C0 - 0x003530F5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003530C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003530C0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_003530C7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x84B10C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003530D6: ;
    if (TEST_NZ(eax, eax)) goto loc_003530DF; /* jne: not equal / not zero */

loc_003530DA: ;
    PUSH32(esp, 0); sub_0034F860(); /* call 0x0034F860 */

loc_003530DF: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x2C8) = eax;
    MEM8(esi + 0x2C0) = 1;
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00353100
 * Original: 0x00353100 - 0x003531AB (171 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353100(void)
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

loc_00353100: ;
    edx = MEM32(eax + 0x10);
    ecx = 0xD693A018u;
    esp = esp - 0xC;
    if (CMP_BE(edx, ecx)) goto loc_00353112; /* jbe: below or equal (unsigned <=) */

loc_0035310F: ;
    MEM32(eax + 0x10) = ecx;

loc_00353112: ;
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00353127; /* jge: greater or equal (signed >=) */

loc_00353121: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00353127: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp - 8;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_00353154: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = xmm0; /* movss */
    /* FPU: fsubr dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_00353182: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    /* FPU: fsubr dword ptr [esp + 4] */
    if (TEST_Z(esi, esi)) goto loc_0035319E; /* je: equal / zero */

loc_00353193: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0035319C: ;
    MEM32(esi) = eax;

loc_0035319E: ;
    if (TEST_Z(edi, edi)) { sub_003531AB(); return; } /* je: equal / zero */

loc_003531A2: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003531A7: ;
    MEM32(edi) = eax;
    g_seh_ebp = ebp; sub_003531AD(); return; /* tail jmp 0x003531AD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003531C0
 * Original: 0x003531C0 - 0x003531D0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003531C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003531C0: ;
    SET_LO8(eax, MEM8(ecx + 0x2C0));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003531D0(); return; } /* je: equal / zero */

loc_003531CA: ;
    eax = 0x490;
    esp += 4; return; /* ret */

}

/**
 * sub_00353270
 * Original: 0x00353270 - 0x003532A4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00353270: ;
    SET_LO8(eax, MEM8(esp + 4));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0035328F; /* je: equal / zero */

loc_00353281: ;
    if (CMP_NE(MEM8(esi + 0x2B8), LO8(ebx))) goto loc_0035328F; /* jne: not equal / not zero */

loc_00353289: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00353350(); /* call 0x00353350 */

loc_0035328F: ;
    if (CMP_EQ(MEM8(esi + 0x2C0), LO8(ebx))) { sub_003532A4(); return; } /* je: equal / zero */

loc_00353297: ;
    POP32(esp, esi);
    eax = 0x490;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00353350
 * Original: 0x00353350 - 0x003533F8 (168 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353350: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x84B248));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(ebp + 0x1A));
    eax = SX8(LO8(ebx));
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(ecx, eax)) goto loc_00353388; /* jne: not equal / not zero */

loc_00353369: ;
    SET_LO8(edx, MEM8(0x84B250));
    if (CMP_NE(MEM8(ebp + 0x1B), LO8(edx))) goto loc_00353388; /* jne: not equal / not zero */

loc_00353374: ;
    edi = MEM32(0x84B290);
    ecx = 0x1F;
    esi = ebp + 0x37;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00353397; /* je: equal / zero */

loc_00353388: ;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00353391: ;
    esp = esp + 4;
    MEM32(ebp + 0x14) = eax;

loc_00353397: ;
    PUSH32(esp, 4);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_003533A0: ;
    MEM8(ebp + 0x19) = LO8(eax);
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_003533AC: ;
    SET_LO8(ecx, MEM8(0x84B250));
    MEM8(ebp + 0x1B) = LO8(ecx);
    MEM8(ebp + 0x1A) = LO8(ebx);
    MEM8(ebp + 0x18) = LO8(eax);
    edi = ebp + 0x1D;
    ecx = 6;
    esi = 0x801A00;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(0x84B290);
    edi = ebp + 0x37;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    esp = esp + 8;
    edi = ebp + 0x58;
    ecx = 0x96;
    esi = 0x765608;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00353400
 * Original: 0x00353400 - 0x0035348E (142 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353400(void)
{

loc_00353400: ;
    SET_LO8(eax, MEM8(ebx + 0x1A));
    SET_LO8(ecx, MEM8(ebx + 0x1B));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x84B248) = LO8(eax);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0xA);
    esi = 0; /* xor self */
    MEM8(0x84B250) = LO8(ecx);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0035341F: ;
    eax = ZX8(MEM8(ebx + 0x18));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0035342A: ;
    eax = ZX8(MEM8(ebx + 0x19));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00353435: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x19)));
    edx = MEM32(ebx + 0x14);
    ecx = MEM32(0x84A5F8);
    esp = esp + 0xC;
    MEM32(0x84B24C) = edx;
    MEM16(ecx + 0x3AE) = LO16(eax);
    PUSH32(esp, 0); sub_0035DF40(); /* call 0x0035DF40 */

loc_00353458: ;
    esi = ebx + 0x1D;
    ecx = 6;
    edi = 0x801A00;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    edi = MEM32(0x84B290);
    esi = ebx + 0x37;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    esi = ebx + 0x58;
    ecx = 0x96;
    edi = 0x765608;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00353490
 * Original: 0x00353490 - 0x003535CD (317 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353490(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353490: ;
    esp = esp - 0x2A0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2AC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x60100C;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_003534AB: ;
    edi = MEM32(esp + 0x2B8);
    MEM32(esp + 0x10) = eax;
    eax = ZX8(MEM8(ebp + 0x1A));
    MEM32(esp + 0x18) = eax;
    esi = 6;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_003534D2: ;
    edx = 0x5F9834;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_003534DC: ;
    ecx = ZX8(MEM8(ebp + 0x18));
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_003534F7: ;
    edx = 0x609AF8;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_00353501: ;
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x10) = eax;
    ebx = 2;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00353520: ;
    edx = 0x63BD20;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_0035352A: ;
    MEM32(esp + 0x10) = eax;
    eax = ZX8(MEM8(ebp + 0x19));
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00353545: ;
    edx = 0x63BD14;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_0035354F: ;
    ecx = ZX8(MEM8(ebp + 0x1B));
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0035356A: ;
    edx = 0x600FF0;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_00353574: ;
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0035358E: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63BD08);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_003535A2: ;
    ebx = 0; /* xor self */
    edi = esp + 0x1B0;
    ecx = esp + 0xB0;
    edi = edi - ecx;
    MEM8(esp + 0x30) = LO8(ebx);
    MEM8(esp + 0xAF) = LO8(ebx);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = esi;
    g_seh_ebp = ebp; sub_003535D3(); return; /* tail jmp 0x003535D3 */

}

/**
 * sub_00353860
 * Original: 0x00353860 - 0x0035388C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353860: ;
    esp = esp - 0x28C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x298);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) { sub_0035388C(); return; } /* jne: not equal / not zero */

loc_0035387B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x10D2;
    POP32(esp, ebx);
    esp = esp + 0x28C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00353B00
 * Original: 0x00353B00 - 0x00353B32 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00353B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F850);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = edx;
    if (CMP_BE(edi, 0x15555555)) { sub_00353B32(); return; } /* jbe: below or equal (unsigned <=) */

loc_00353B2D: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00353C10
 * Original: 0x00353C10 - 0x00353C6B (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C10: ;
    esp = esp - 0x10;
    PUSH32(esp, 0xA);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_00353C20: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    edx = eax + 1;
    /* nop */

loc_00353C30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00353C30; /* jne: not equal / not zero */

loc_00353C37: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00353C41: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00353C41; /* jne: not equal / not zero */

loc_00353C48: ;
    eax = eax - esi;
    ecx = 0x7F;
    ecx = ecx - eax;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(edx, ecx)) { sub_00353C6B(); return; } /* jae: above or equal (unsigned >=) */

loc_00353C56: ;
    eax = esp;
    edx = eax + 1;
    /* nop */

loc_00353C60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00353C60; /* jne: not equal / not zero */

loc_00353C67: ;
    eax = eax - edx;
    g_seh_ebp = ebp; sub_00353C82(); return; /* tail jmp 0x00353C82 */

}

/**
 * sub_00353CA0
 * Original: 0x00353CA0 - 0x00353CEF (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    eax = ebp;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00353CB6: ;
    MEM32(esp + 0x14) = eax;
    eax = edi + edi * 2;
    ecx = esp + 0x14;
    edi = ebx + eax * 4;
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_00353CCE: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) { sub_00353CEF(); return; } /* je: equal / zero */

loc_00353CD5: ;
    edx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(eax), edx)) { sub_00353CEF(); return; } /* jne: not equal / not zero */

loc_00353CDD: ;
    SET_LO8(eax, MEM8(eax + 8));
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00353D40
 * Original: 0x00353D40 - 0x00353D5C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D40(void)
{

loc_00353D40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00353D90(); /* call 0x00353D90 */

loc_00353D56: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00353D60
 * Original: 0x00353D60 - 0x00353D89 (41 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00353D60: ;
    if (CMP_EQ(edx, ecx)) goto loc_00353D88; /* je: equal / zero */

loc_00353D64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00353D67: ;
    ecx = ecx - 0xC;
    eax = eax - 0xC;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(edi + 8) = esi;
    if (CMP_NE(ecx, edx)) goto loc_00353D67; /* jne: not equal / not zero */

loc_00353D85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00353D88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00353D90
 * Original: 0x00353D90 - 0x00353DDB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00353D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F240);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    /* nop */

loc_00353DC0: ;
    if (CMP_EQ(esi, ebx)) { sub_00353DDB(); return; } /* je: equal / zero */

loc_00353DC4: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00269CE0(); /* call 0x00269CE0 */

loc_00353DCD: ;
    edi = edi + 0xC;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00353DC0;

}

/**
 * sub_00353E00
 * Original: 0x00353E00 - 0x00353E95 (149 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E00: ;
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x84B290);
    if (TEST_Z(eax, eax)) goto loc_00353E2F; /* je: equal / zero */

loc_00353E12: ;
    esi = eax;
    ecx = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    esi = (uint32_t)((int32_t)esi >> 3);
    SET_LO8(ecx, MEM8(esi + edi));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00353E2F; /* je: equal / zero */

loc_00353E2A: ;
    ebp = 1;

loc_00353E2F: ;
    eax = MEM32(edx + 8);
    if (TEST_Z(eax, eax)) goto loc_00353E4F; /* je: equal / zero */

loc_00353E36: ;
    esi = eax;
    ecx = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    esi = (uint32_t)((int32_t)esi >> 3);
    SET_LO8(ecx, MEM8(esi + edi));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00353E4F; /* je: equal / zero */

loc_00353E4E: ;
    ebp++;

loc_00353E4F: ;
    eax = MEM32(edx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00353E6F; /* je: equal / zero */

loc_00353E56: ;
    esi = eax;
    ecx = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    esi = (uint32_t)((int32_t)esi >> 3);
    SET_LO8(ecx, MEM8(esi + edi));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00353E6F; /* je: equal / zero */

loc_00353E6E: ;
    ebp++;

loc_00353E6F: ;
    eax = MEM32(edx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00353E8F; /* je: equal / zero */

loc_00353E76: ;
    edx = eax;
    ecx = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    edx = (uint32_t)((int32_t)edx >> 3);
    SET_LO8(ecx, MEM8(edx + edi));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00353E8F; /* je: equal / zero */

loc_00353E8E: ;
    ebp++;

loc_00353E8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00353EA0
 * Original: 0x00353EA0 - 0x00353EC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00353EA0: ;
    edx = 0x74C6F0;
    PUSH32(esp, edi);

loc_00353EA6: ;
    if (CMP_EQ(eax, MEM32(edx))) { sub_00353EC3(); return; } /* je: equal / zero */

loc_00353EAA: ;
    edx = edx + 0x14;
    if (CMP_NE(edx, 0x74C7F4)) goto loc_00353EA6; /* jne: not equal / not zero */

loc_00353EB5: ;
    MEM32(ecx) = 0;
    MEM32(esi) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00353F00
 * Original: 0x00353F00 - 0x00353FD7 (215 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00353F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7737A0);
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00353F0E: ;
    eax = MEM32(0x870ED4);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00353F37; /* je: equal / zero */

loc_00353F19: ;
    edi = eax;
    PUSH32(esp, 0); sub_00355A80(); /* call 0x00355A80 */

loc_00353F20: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00353F2E: ;
    esp = esp + 4;
    MEM32(0x870ED4) = esi;

loc_00353F37: ;
    eax = MEM32(0x870EE0);
    if (CMP_EQ(eax, esi)) goto loc_00353F5E; /* je: equal / zero */

loc_00353F40: ;
    edi = eax;
    PUSH32(esp, 0); sub_00355A80(); /* call 0x00355A80 */

loc_00353F47: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00353F55: ;
    esp = esp + 4;
    MEM32(0x870EE0) = esi;

loc_00353F5E: ;
    eax = MEM32(0x870EEC);
    if (CMP_EQ(eax, esi)) goto loc_00353F85; /* je: equal / zero */

loc_00353F67: ;
    edi = eax;
    PUSH32(esp, 0); sub_00355A80(); /* call 0x00355A80 */

loc_00353F6E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00353F7C: ;
    esp = esp + 4;
    MEM32(0x870EEC) = esi;

loc_00353F85: ;
    eax = MEM32(0x870EF8);
    if (CMP_EQ(eax, esi)) goto loc_00353FAC; /* je: equal / zero */

loc_00353F8E: ;
    edi = eax;
    PUSH32(esp, 0); sub_00355A80(); /* call 0x00355A80 */

loc_00353F95: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00353FA3: ;
    esp = esp + 4;
    MEM32(0x870EF8) = esi;

loc_00353FAC: ;
    eax = MEM32(0x870F04);
    if (CMP_EQ(eax, esi)) goto loc_00353FD3; /* je: equal / zero */

loc_00353FB5: ;
    edi = eax;
    PUSH32(esp, 0); sub_00355A80(); /* call 0x00355A80 */

loc_00353FBC: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00353FCA: ;
    esp = esp + 4;
    MEM32(0x870F04) = esi;

loc_00353FD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00353FE0
 * Original: 0x00353FE0 - 0x003540B0 (208 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00353FE0: ;
    eax = MEM32(0x870ED4);
    if (TEST_Z(eax, eax)) goto loc_00354008; /* je: equal / zero */

loc_00353FE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00353FEF: ;
    SET_LO8(eax, MEM8(0x870EDC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00354008; /* je: equal / zero */

loc_00353FF8: ;
    ecx = MEM32(0x870ED4);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_00354008: ;
    eax = MEM32(0x870EE0);
    if (TEST_Z(eax, eax)) goto loc_00354030; /* je: equal / zero */

loc_00354011: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00354017: ;
    SET_LO8(eax, MEM8(0x870EE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00354030; /* je: equal / zero */

loc_00354020: ;
    ecx = MEM32(0x870EE0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_00354030: ;
    eax = MEM32(0x870EEC);
    if (TEST_Z(eax, eax)) goto loc_00354058; /* je: equal / zero */

loc_00354039: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_0035403F: ;
    SET_LO8(eax, MEM8(0x870EF4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00354058; /* je: equal / zero */

loc_00354048: ;
    ecx = MEM32(0x870EEC);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_00354058: ;
    eax = MEM32(0x870EF8);
    if (TEST_Z(eax, eax)) goto loc_00354080; /* je: equal / zero */

loc_00354061: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00354067: ;
    SET_LO8(eax, MEM8(0x870F00));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00354080; /* je: equal / zero */

loc_00354070: ;
    ecx = MEM32(0x870EF8);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_00354080: ;
    eax = MEM32(0x870F04);
    if (TEST_Z(eax, eax)) goto loc_003540A8; /* je: equal / zero */

loc_00354089: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_0035408F: ;
    SET_LO8(eax, MEM8(0x870F0C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003540A8; /* je: equal / zero */

loc_00354098: ;
    ecx = MEM32(0x870F04);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_003540A8: ;
    MEM8(0x870EDC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003540B0
 * Original: 0x003540B0 - 0x003541BB (267 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003540B0: ;
    esp = esp - 0x24;
    eax = MEM32(edx + 0x60);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm1 = MEMF(eax + 0x28); /* movss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x1C); /* addss */
    eax = edx + 0x20;
    ecx = esp + 0xC;
    MEM32(esp + 4) = eax;
    eax = ecx;
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp) = eax;
    eax = MEM32(esp + 8);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 4);
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
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    eax = MEM32(edx + 0x60);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    xmm1 = MEMF(eax + 0x1C); /* movss */
    /* ucomiss xmm1, MEMF(0x64929C) - sets EFLAGS */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) { sub_003541BB(); return; } /* jnp: not parity */

loc_0035418E: ;
    xmm0 = MEMF(edx + 0x80); /* movss */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = eax;
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0xC) = xmm0; /* movss */
    eax = esi;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00354210
 * Original: 0x00354210 - 0x00354294 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00354210: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00354294(); return; } /* je: equal / zero */

loc_0035422B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0035423F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00354274; /* je: equal / zero */

loc_0035424A: ;
    ecx = 0x75ED44;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00354254: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00354271: ;
    esp = esp + 0x14;

loc_00354274: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0035428D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_003542C0
 * Original: 0x003542C0 - 0x003542FD (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003542C0: ;
    eax = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x14));
    ecx = 0; /* xor self */
    if (CMP_BE(LO8(ebx) & LO8(ebx), 0)) goto loc_003542FB; /* jbe: below or equal (unsigned <=) */

loc_003542D0: ;
    PUSH32(esp, esi);
    eax = edx + 0x10;
    PUSH32(esp, edi);

loc_003542D5: ;
    SET_LO8(ebx, MEM8(eax + 5));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003542E7; /* je: equal / zero */

loc_003542DC: ;
    edi = MEM32(eax);
    esi = eax + -16;
    MEM32(edi + 0x100) = esi;

loc_003542E7: ;
    esi = MEM32(edx + 0x100);
    esi = ZX8(MEM8(esi + 0x14));
    ecx++;
    eax = eax + 0x20;
    if (CMP_L(ecx, esi)) goto loc_003542D5; /* jl: less (signed <) */

loc_003542F9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003542FB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00354300
 * Original: 0x00354300 - 0x00354488 (392 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354300: ;
    esp = esp - 0x24;
    SET_LO8(ecx, MEM8(esp + 0x28));
    SET_LO8(edx, MEM8(esp + 0x2C));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM8(esi + 0x15) = LO8(edx);
    edi = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = LO8(ecx);
    MEM16(esi + 0x16) = LO16(edi);
    MEM32(eax + 0x100) = esi;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_0035432A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = MEM32(esi + 0x10);
    eax = MEM32(ebx + 0x100);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    SET_LO8(eax, MEM8(eax + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035442E; /* je: equal / zero */

loc_00354359: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003543CB; /* jbe: below or equal (unsigned <=) */

loc_0035435B: ;
    edx = esp + 0xC;
    ecx = esp + 0x1C;
    eax = edx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x34) = eax;
    ebp = ebx;

loc_00354374: ;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(ebx + 0x100);
    edx = ZX8(MEM8(ecx + 0x14));
    edi++;
    ebp = ebp + 0x20;
    if (CMP_L(edi, edx)) goto loc_00354374; /* jl: less (signed <) */

loc_003543CA: ;
    POP32(esp, ebp);

loc_003543CB: ;
    eax = MEM32(ebx + 0x100);
    ecx = ZX8(MEM8(eax + 0x14));
    xmm1 = MEMF(0x648D14); /* movss */
    edx = esp + 0xC;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = edx;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x30) = eax;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x34);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00354510(); /* call 0x00354510 */

loc_00354428: ;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0035442E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(eax + 0x100);
    SET_LO8(ecx, MEM8(edx + 0x14));
    MEM8(esi + 0x14) = LO8(ecx);
    edx = MEM32(eax + 0x100);
    edx = ZX8(MEM8(edx + 0x14));
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035447B; /* jle: less or equal (signed <=) */

loc_0035446A: ;
    eax = eax + 0x16;
    /* nop */

loc_00354470: ;
    edi = ZX16(MEM16(eax));
    ecx = ecx + edi;
    eax = eax + 0x20;
    edx--;
    if ((edx != 0)) goto loc_00354470; /* jne: not equal / not zero */

loc_0035447B: ;
    ecx++;
    POP32(esp, edi);
    MEM16(esi + 0x16) = LO16(ecx);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00354490
 * Original: 0x00354490 - 0x003544C0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 8;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_003544A8; /* je: equal / zero */

loc_003544A6: ;
    MEM32(ecx) = eax;

loc_003544A8: ;
    SET_LO8(ecx, MEM8(edx + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003544C0(); return; } /* je: equal / zero */

loc_003544AF: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(eax + 0x10);
    g_seh_ebp = ebp; sub_003542C0(); return; /* tail jmp 0x003542C0 */

}

/**
 * sub_003544D0
 * Original: 0x003544D0 - 0x0035450E (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x15));
    ebp = MEM32(eax * 4 + 0x74C7F8);
    SET_LO8(eax, MEM8(esi + 0x14));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00354508; /* jbe: below or equal (unsigned <=) */

loc_003544E9: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* nop */

loc_003544F0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ecx = ecx + ebx;
    PUSH32(esp, 0); sub_003544D0(); /* call 0x003544D0 */

loc_003544FB: ;
    ecx = ZX8(MEM8(esi + 0x14));
    edi++;
    ebx = ebx + 0x20;
    if (CMP_L(edi, ecx)) goto loc_003544F0; /* jl: less (signed <) */

loc_00354507: ;
    POP32(esp, ebx);

loc_00354508: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354510
 * Original: 0x00354510 - 0x0035460B (251 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00354510: ;
    eax = MEM32(ebx + 0x100);
    SET_LO8(ecx, MEM8(eax + 0x14));
    xmm3 = MEMF(0x649200); /* movss */
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00354601; /* jbe: below or equal (unsigned <=) */

loc_0035452F: ;
    edx = esp + 0x14;
    ecx = esp + 0x20;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = eax;
    edi = ebx;

loc_00354548: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    ecx = edi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x40) = eax;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEM32(esp + 0x3C) = edx;
    if ((xmm0 <= xmm3)) goto loc_003545EA; /* jbe: below or equal (unsigned <=) */

loc_003545E7: ;
    xmm3 = xmm0; /* movaps */

loc_003545EA: ;
    ecx = MEM32(ebx + 0x100);
    edx = ZX8(MEM8(ecx + 0x14));
    esi++;
    edi = edi + 0x20;
    if (CMP_L(esi, edx)) goto loc_00354548; /* jl: less (signed <) */

loc_00354600: ;
    POP32(esp, edi);

loc_00354601: ;
    xmm0 = xmm3; /* movaps */
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354610
 * Original: 0x00354610 - 0x003546F1 (225 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354610: ;
    xmm3 = MEMF(0x648E84); /* movss */
    esp = esp - 0x2C;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebp | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_003546D4; /* jle: less or equal (signed <=) */

loc_0035462A: ;
    ecx = esp + 0x18;
    eax = esp + 0x24;
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = edx;

loc_00354645: ;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003546C2; /* jbe: below or equal (unsigned <=) */

loc_003546BD: ;
    xmm3 = xmm0; /* movaps */
    ebp = esi;

loc_003546C2: ;
    esi++;
    edi = edi + 0x20;
    if (CMP_L(esi, ebx)) goto loc_00354645; /* jl: less (signed <) */

loc_003546CE: ;
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_003546DE; /* jne: not equal / not zero */

loc_003546D4: ;
    MEM32(0) = 1;

loc_003546DE: ;
    ecx = MEM32(esp + 0x38);
    eax = ebp;
    eax = eax << 5;
    POP32(esp, esi);
    eax = eax + ecx;
    POP32(esp, ebp);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00354700
 * Original: 0x00354700 - 0x00354834 (308 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354700(void)
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

loc_00354700: ;
    esp = esp - 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 4);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + ecx * 4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_00354734; /* je: equal / zero */

loc_0035471F: ;
    esi = MEM32(eax);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00354734: ;
    if (CMP_EQ(edx, 1)) goto loc_00354753; /* je: equal / zero */

loc_00354739: ;
    esi = MEM32(eax + 4);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00354753: ;
    if (CMP_EQ(edx, 2)) goto loc_00354772; /* je: equal / zero */

loc_00354758: ;
    esi = MEM32(eax + 8);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00354772: ;
    if (CMP_EQ(edx, 3)) goto loc_00354791; /* je: equal / zero */

loc_00354777: ;
    esi = MEM32(eax + 0xC);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00354791: ;
    if (CMP_EQ(edx, 4)) goto loc_003547B0; /* je: equal / zero */

loc_00354796: ;
    esi = MEM32(eax + 0x10);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_003547B0: ;
    if (CMP_EQ(edx, 5)) goto loc_003547CF; /* je: equal / zero */

loc_003547B5: ;
    esi = MEM32(eax + 0x14);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_003547CF: ;
    if (CMP_EQ(edx, 6)) goto loc_003547EE; /* je: equal / zero */

loc_003547D4: ;
    esi = MEM32(eax + 0x18);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_003547EE: ;
    if (CMP_EQ(edx, 7)) goto loc_0035480D; /* je: equal / zero */

loc_003547F3: ;
    esi = MEM32(eax + 0x1C);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_0035480D: ;
    (void)0; /* cmp edx, 8 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(edx, 8)) goto loc_0035482B; /* je: equal / zero */

loc_00354813: ;
    eax = MEM32(eax + 0x20);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_0035482B: ;
    xmm0 = MEMF(esp); /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00354840
 * Original: 0x00354840 - 0x003549EB (427 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354840(void)
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

loc_00354840: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = ebp + 0x20;
    ecx = ebp + 0x40;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    edx = ebp + 0x60;
    MEM32(esp + 0x18) = edx;
    eax = ebp + 0x80;
    ecx = ebp + 0xA0;
    edx = ebp + 0xC0;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x28) = edx;
    eax = ebp + 0xE0;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0); sub_00354C60(); /* call 0x00354C60 */

loc_0035489D: ;
    xmm3 = 0.0f; /* xorps self = zero */
    ebx = eax;
    MEM32(esp + 0x10) = 0;
    /* nop */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(ebp + ebx * 4)); /* fld float */
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 0x28);
    xmm1 = xmm1 * xmm1; /* mulss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esp + 0x2C);
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 0x50);
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    /* FPU: fsubr dword ptr [eax + ebx*4] */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    esi = 0; /* xor self */
    xmm2 = xmm2 + xmm1; /* addss */
    edx = 0; /* xor self */
    /* nop */

loc_003549A0: ;
    eax = esp + 0x14;
    ecx = ebx;
    PUSH32(esp, 0); sub_00354700(); /* call 0x00354700 */

loc_003549AB: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003549BE; /* jbe: below or equal (unsigned <=) */

loc_003549B0: ;
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003549BE; /* jnp: not parity */

loc_003549B9: ;
    xmm2 = xmm0; /* movaps */
    esi = edx;

loc_003549BE: ;
    edx++;
    if (CMP_L(edx, 9)) goto loc_003549A0; /* jl: less (signed <) */

loc_003549C4: ;
    ecx = MEM32(esp + esi * 4 + 0x14);
    xmm0 = MEMF(ecx + ebx * 4); /* movss */
    edi = MEM32(esp + 0x4C);
    esi = MEM32(esp + 0x44);
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    MEM32(esp + 0x3C) = 0;
    g_seh_ebp = ebp; sub_003549F3(); return; /* tail jmp 0x003549F3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00354C60
 * Original: 0x00354C60 - 0x00354EEA (650 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354C60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00354C60: ;
    esp = esp - 0x68;
    eax = MEM32(edx);
    ecx = eax;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esp + 0x4C) = esi;
    esi = MEM32(ecx + 4);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x58) = ecx;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(esp + 0x28);
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = ecx;
    xmm6 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x54) = esi;
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(eax + 4);
    xmm1 = MEMF(esp + 0x4C); /* movss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x58) = eax;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = 1;

loc_00354D46: ;
    eax = MEM32(edx + ecx * 4);
    esi = MEM32(eax);
    MEM32(esp + 0x5C) = esi;
    esi = MEM32(eax + 4);
    xmm1 = MEMF(esp + 0x5C); /* movss */
    MEM32(esp + 0x60) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x68) = eax;
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    eax = MEM32(esp + 0x28);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x2C) = xmm3; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x64) = esi;
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x3C) = eax;
    if ((xmm6 > xmm4)) goto loc_00354DCF; /* ja: above (unsigned >) */

loc_00354DC6: ;
    xmm6 = xmm4; /* movaps */
    MEMF(esp + 0x1C) = xmm6; /* movss */

loc_00354DCF: ;
    xmm4 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 > xmm4)) goto loc_00354DE6; /* ja: above (unsigned >) */

loc_00354DE0: ;
    MEMF(esp + 0x20) = xmm4; /* movss */

loc_00354DE6: ;
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 > xmm4)) goto loc_00354DFD; /* ja: above (unsigned >) */

loc_00354DF7: ;
    MEMF(esp + 0x24) = xmm4; /* movss */

loc_00354DFD: ;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    eax = MEM32(esp + 0x40);
    xmm2 = xmm2 - xmm0; /* subss */
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x44) = xmm2; /* movss */
    eax = MEM32(esp + 0x44);
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x54) = eax;
    if ((xmm0 > xmm5)) goto loc_00354E47; /* ja: above (unsigned >) */

loc_00354E3E: ;
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm5; /* movss */

loc_00354E47: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x14))) goto loc_00354E5A; /* ja: above (unsigned >) */

loc_00354E54: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00354E5A: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x18))) goto loc_00354E6D; /* ja: above (unsigned >) */

loc_00354E67: ;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00354E6D: ;
    ecx++;
    if (CMP_L(ecx, 9)) goto loc_00354D46; /* jl: less (signed <) */

loc_00354E77: ;
    ecx = esp + 0x10;
    edx = esp + 0x1C;
    eax = esp + 0x28;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
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
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 <= xmm1)) goto loc_00354ED5; /* jbe: below or equal (unsigned <=) */

loc_00354EC8: ;
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x2C))) goto loc_00354EE1; /* jb: below (unsigned <) */

loc_00354ECF: ;
    eax = 0; /* xor self */
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_00354ED5: ;
    /* comiss xmm1, MEMF(esp + 0x2C) - sets EFLAGS */
    eax = 1;
    if ((xmm1 >= MEMF(esp + 0x2C))) goto loc_00354EE6; /* jae: above or equal (unsigned >=) */

loc_00354EE1: ;
    eax = 2;

loc_00354EE6: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00354EF0
 * Original: 0x00354EF0 - 0x00354FB1 (193 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00354EF0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = edx + 0x40;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    MEM32(eax + 4) = 0;
    ecx = edx + 0x3C8;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + ebx * 4 + 0x4EC);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(edx + 0x260);
    MEM32(eax + 0x58) = ecx;
    ecx = edx + 0x78;
    MEM32(eax + 0x60) = ecx;
    MEMF(eax + 0x5C) = xmm0; /* movss */
    ecx = ZX16(MEM16(edx + 0x60));
    ecx++;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = 0xFFFFFFFFu;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0xB0) = 0xFFFFFFFFu;
    ecx = MEM32(edx + ebx * 4 + 0x4B0);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00354FA5; /* je: equal / zero */

loc_00354F67: ;
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX8(MEM8(edx + 0x511));
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax + 0x30) = ecx;
    if (CMP_LE(ecx, edi)) goto loc_00354FAB; /* jle: less or equal (signed <=) */

loc_00354F7E: ;
    esi = eax + 0x34;
    ecx = edx + 0x4C4;

loc_00354F87: ;
    edx = MEM32(ecx + 0x14);
    MEM32(esi + -36) = edx;
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    edx = MEM32(eax + 0x30);
    edi++;
    ecx = ecx + 4;
    esi = esi + 4;
    if (CMP_L(edi, edx)) goto loc_00354F87; /* jl: less (signed <) */

loc_00354F9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00354FA5: ;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x30) = edi;

loc_00354FAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354FC0
 * Original: 0x00354FC0 - 0x00355026 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354FC0: ;
    ecx = MEM32(edx);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx + 0x54);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x58) = ecx;
    MEMF(eax + 0x5C) = xmm0; /* movss */
    ecx = MEM32(edx + 0x60);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(edx + 0x64);
    PUSH32(esp, esi);
    MEM32(eax + 0x64) = ecx;
    PUSH32(esp, edi);
    esi = edx + 0x70;
    edi = eax + 0x70;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0xB0);
    MEM32(eax + 0xB0) = ecx;
    ecx = MEM32(edx + 8);
    if (TEST_Z(ecx, ecx)) { sub_00355026(); return; } /* je: equal / zero */

loc_00355018: ;
    esi = MEM32(edx + 0x68);
    if (CMP_NE(MEM32(ecx), esi)) { sub_00355026(); return; } /* jne: not equal / not zero */

loc_0035501F: ;
    ecx = eax + 0x68;
    MEM32(ecx) = esi;
    g_seh_ebp = ebp; sub_0035502D(); return; /* tail jmp 0x0035502D */

}

/**
 * sub_00355040
 * Original: 0x00355040 - 0x003550B7 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00355040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003550B4; /* je: equal / zero */

loc_0035504B: ;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 4) = eax;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003550B4; /* jne: not equal / not zero */

loc_00355056: ;
    eax = MEM32(esi + 0x60);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0035506E; /* je: equal / zero */

loc_00355061: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035506B: ;
    esp = esp + 4;

loc_0035506E: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x60) = 0;
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0035508D; /* je: equal / zero */

loc_00355080: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035508A: ;
    esp = esp + 4;

loc_0035508D: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035509A: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003550B4; /* je: equal / zero */

loc_003550A4: ;
    esi = MEM32(esi + 0x68);
    if (CMP_NE(MEM32(eax), esi)) goto loc_003550B4; /* jne: not equal / not zero */

loc_003550AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003550B1: ;
    esp = esp + 4;

loc_003550B4: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003550C0
 * Original: 0x003550C0 - 0x00355133 (115 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003550C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003550C0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x63BD54;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x54) = 0;
    ecx = MEM32(edx + 0xBC);
    PUSH32(esp, ebx);
    MEM32(eax + 0x58) = ecx;
    PUSH32(esp, esi);
    ecx = edx + 0x70;
    ebx = eax + 0x68;
    MEM32(ebx) = ecx;
    PUSH32(esp, edi);
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x60) = 0x84B254;
    MEM32(eax + 0x64) = edx;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0xB0) = 0xFFFFFFFFu;
    edx = MEM32(edx + 0x54);
    if (TEST_Z(edx, edx)) { sub_00355133(); return; } /* je: equal / zero */

loc_0035511F: ;
    edx = MEM32(edx + 0x24);
    if (TEST_Z(edx, edx)) { sub_00355133(); return; } /* je: equal / zero */

loc_00355126: ;
    edx = MEM32(edx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355150
 * Original: 0x00355150 - 0x003551C5 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355150(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00355150: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x63BD48;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x54) = 0;
    ecx = MEM32(edx + 0x54);
    MEM32(eax + 0x58) = ecx;
    ecx = edx + 0x60;
    MEM32(eax + 0x60) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edx + 0x110;
    MEM32(eax + 0x68) = ecx;
    ebx = eax + 0x68;
    PUSH32(esp, edi);
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x64) = edx;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0xB0) = 0xFFFFFFFFu;
    edx = MEM32(edx + 0x100);
    ecx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) { sub_003551C5(); return; } /* je: equal / zero */

loc_003551B8: ;
    edx = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003551E0
 * Original: 0x003551E0 - 0x0035524C (108 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003551E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003551E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x63A118;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x54) = 0;
    ecx = MEM32(edx + 0x7C);
    PUSH32(esp, ebx);
    MEM32(eax + 0x58) = ecx;
    PUSH32(esp, esi);
    ecx = edx + 0x20;
    ebx = eax + 0x68;
    MEM32(ebx) = ecx;
    PUSH32(esp, edi);
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x60) = 0x84B254;
    MEM32(eax + 0x64) = edx;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0xB0) = 0xFFFFFFFFu;
    edx = MEM32(edx + 0x60);
    if (TEST_Z(edx, edx)) { sub_0035524C(); return; } /* je: equal / zero */

loc_0035523C: ;
    edx = MEM32(edx + 0x24);
    ecx = MEM32(edx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355260
 * Original: 0x00355260 - 0x003552C9 (105 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00355260: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x63BD40;
    MEM32(eax + 4) = 0;
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x60) = 0x84B254;
    MEM32(eax + 0x64) = edx;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + 0xB0) = ecx;
    esi = MEM32(edx + 8);
    esi = MEM32(esi + 0x10);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 0x10);
    if (TEST_Z(esi, esi)) { sub_003552C9(); return; } /* je: equal / zero */

loc_003552B3: ;
    esi = MEM32(esi + 0xC);
    ecx = eax + 0x68;
    MEM32(ecx) = esi;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(eax + 0x54) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003552E0
 * Original: 0x003552E0 - 0x0035534D (109 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003552E0(void)
{
    float xmm0;

loc_003552E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x60100C;
    edx = MEM32(0x76FE00);
    PUSH32(esp, edi);
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x60) = 0x84B254;
    edi = eax + 0x70;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0xB0) = 0xFFFFFFFFu;
    ecx = MEM32(0x76FE18);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x76FE08);
    POP32(esp, edi);
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x30) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00355350
 * Original: 0x00355350 - 0x003553D9 (137 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355350(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00355350: ;
    eax = MEM32(edx + 8);
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) { sub_003553D9(); return; } /* je: equal / zero */

loc_0035535F: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_003553D9(); return; } /* je: equal / zero */

loc_00355365: ;
    ecx = MEM32(edx + 0xB0);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00355372; /* je: equal / zero */

loc_00355370: ;
    ebx = ebx + ecx;

loc_00355372: ;
    PUSH32(esp, edi);
    ecx = ebx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    edi = edx + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00355385: ;
    ecx = MEM32(edx + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_003553CF; /* je: equal / zero */

loc_0035538C: ;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00036970(); /* call 0x00036970 */

loc_003553A3: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, edi);
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, esi);
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, esi);
    MEMF(esi + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003553CF: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003553F0
 * Original: 0x003553F0 - 0x00355424 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003553F0(void)
{
    float xmm0;

loc_003553F0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM16(eax + 0x16) = 1;
    MEM32(eax + 0x18) = 0xFFFFFFFFu;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00355430
 * Original: 0x00355430 - 0x00355578 (328 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00355430: ;
    esp = esp - 0x28;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0x100);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    SET_LO8(eax, MEM8(eax + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00355543; /* je: equal / zero */

loc_00355468: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003554DF; /* jbe: below or equal (unsigned <=) */

loc_0035546F: ;
    edx = esp + 0x14;
    ecx = esp + 0x24;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x3C) = eax;
    edi = ebx;

loc_00355488: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(ebx + 0x100);
    edx = ZX8(MEM8(ecx + 0x14));
    esi++;
    edi = edi + 0x20;
    if (CMP_L(esi, edx)) goto loc_00355488; /* jl: less (signed <) */

loc_003554DE: ;
    POP32(esp, edi);

loc_003554DF: ;
    eax = MEM32(ebx + 0x100);
    ecx = ZX8(MEM8(eax + 0x14));
    xmm1 = MEMF(0x648D14); /* movss */
    edx = esp + 0x14;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = edx;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x38) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00354510(); /* call 0x00354510 */

loc_0035553C: ;
    MEMF(esp + 0x20) = xmm0; /* movss */
    POP32(esp, esi);

loc_00355543: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x38); /* movss */
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    MEMF(ebp + 0xC) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00355580
 * Original: 0x00355580 - 0x003556E4 (356 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355580(void)
{
    float xmm0;

loc_00355580: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ecx;
    edx = eax + 0x20;
    edx = edx + 0x20;
    ecx = ecx | 0xFFFFFFFFu;
    edx = edx + 0x20;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(eax) = xmm0; /* movss */
    MEMF(edx + -64) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(edx + -60) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(edx + -56) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(edx + -52) = xmm0; /* movss */
    MEM32(eax + 0x10) = ebx;
    MEM32(edx + -48) = ebx;
    MEM8(eax + 0x14) = LO8(ebx);
    MEM8(edx + -44) = LO8(ebx);
    MEM8(eax + 0x15) = LO8(ebx);
    MEM8(edx + -43) = LO8(ebx);
    MEM32(eax + 0x18) = ecx;
    MEM32(edx + -40) = ecx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(edx + -36) = ebx;
    PUSH32(esp, esi);
    esi = 1;
    MEM16(eax + 0x16) = LO16(esi);
    MEM16(edx + -42) = LO16(esi);
    MEMF(edx + -32) = xmm0; /* movss */
    MEMF(edx + -28) = xmm0; /* movss */
    MEMF(edx + -24) = xmm0; /* movss */
    MEMF(edx + -20) = xmm0; /* movss */
    MEM32(edx + -16) = ebx;
    MEM8(edx + -12) = LO8(ebx);
    MEM8(edx + -11) = LO8(ebx);
    MEM16(edx + -10) = LO16(esi);
    edx = edx + 0x20;
    MEM32(edx + -40) = ecx;
    MEM32(edx + -36) = ebx;
    edx = edx + 0x20;
    MEMF(edx + -64) = xmm0; /* movss */
    MEMF(edx + -60) = xmm0; /* movss */
    MEMF(edx + -56) = xmm0; /* movss */
    MEMF(edx + -52) = xmm0; /* movss */
    MEM32(edx + -48) = ebx;
    MEM8(edx + -44) = LO8(ebx);
    MEM8(edx + -43) = LO8(ebx);
    MEM16(edx + -42) = LO16(esi);
    MEM32(edx + -40) = ecx;
    MEM32(edx + -36) = ebx;
    MEMF(edx + -32) = xmm0; /* movss */
    MEMF(edx + -28) = xmm0; /* movss */
    MEMF(edx + -24) = xmm0; /* movss */
    MEMF(edx + -20) = xmm0; /* movss */
    MEM32(edx + -16) = ebx;
    MEM8(edx + -12) = LO8(ebx);
    MEM8(edx + -11) = LO8(ebx);
    MEM16(edx + -10) = LO16(esi);
    edx = edx + 0x20;
    MEM32(edx + -40) = ecx;
    MEM32(edx + -36) = ebx;
    MEMF(edx + -32) = xmm0; /* movss */
    MEMF(edx + -28) = xmm0; /* movss */
    MEMF(edx + -24) = xmm0; /* movss */
    MEMF(edx + -20) = xmm0; /* movss */
    MEM32(edx + -16) = ebx;
    MEM8(edx + -12) = LO8(ebx);
    MEM8(edx + -11) = LO8(ebx);
    MEM16(edx + -10) = LO16(esi);
    MEM32(edx + -8) = ecx;
    MEM32(edx + -4) = ebx;
    MEMF(edx) = xmm0; /* movss */
    MEMF(edx + 4) = xmm0; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    MEM32(edx + 0x10) = ebx;
    MEM8(edx + 0x14) = LO8(ebx);
    MEM8(edx + 0x15) = LO8(ebx);
    MEM16(edx + 0x16) = LO16(esi);
    edx = edx + 0x20;
    MEM32(edx + -4) = ebx;
    MEM32(edx + -8) = ecx;
    MEM16(edx + 0x16) = LO16(esi);
    MEM32(edx + 0x10) = ebx;
    MEM8(edx + 0x14) = LO8(ebx);
    MEM8(edx + 0x15) = LO8(ebx);
    MEM32(edx + 0x1C) = ebx;
    MEMF(edx) = xmm0; /* movss */
    MEMF(edx + 4) = xmm0; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    MEM32(edx + 0x18) = ecx;
    POP32(esp, esi);
    MEM32(eax + 0x100) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003556F0
 * Original: 0x003556F0 - 0x0035574A (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003556F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003556F0: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00355747; /* jle: less or equal (signed <=) */

loc_003556F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ebx = ebx + 0x10;
    MEM32(esp + 0x14) = eax;

loc_00355705: ;
    eax = ebx + -16;
    ecx = 8;
    esi = ebp;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0035571C; /* je: equal / zero */

loc_0035571A: ;
    MEM32(ecx) = eax;

loc_0035571C: ;
    SET_LO8(ecx, MEM8(ebp + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00355732; /* je: equal / zero */

loc_00355723: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_00355732: ;
    eax = MEM32(esp + 0x14);
    ebp = ebp + 0x20;
    ebx = ebx + 0x20;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00355705; /* jne: not equal / not zero */

loc_00355743: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00355747: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355750
 * Original: 0x00355750 - 0x003557A2 (82 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00355750: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x100);
    eax = ZX8(MEM8(eax + 0x14));
    PUSH32(esp, esi);
    eax = eax << 5;
    eax = eax + ebx;
    PUSH32(esp, edi);
    ecx = 8;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_00355778; /* je: equal / zero */

loc_00355776: ;
    MEM32(ecx) = eax;

loc_00355778: ;
    SET_LO8(ecx, MEM8(edx + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00355790; /* je: equal / zero */

loc_0035577F: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_00355790: ;
    ebx = MEM32(ebx + 0x100);
    SET_LO8(eax, MEM8(ebx + 0x14));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebx + 0x14) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003557B0
 * Original: 0x003557B0 - 0x00355803 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003557B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003557B0: ;
    eax = MEM32(edx + 0x100);
    MEM8(eax + 0x14) = MEM8(eax + 0x14) - 1;
    eax = MEM32(edx + 0x100);
    eax = ZX8(MEM8(eax + 0x14));
    if (CMP_EQ(eax, ecx)) { sub_00355803(); return; } /* je: equal / zero */

loc_003557C7: ;
    ecx = ecx << 5;
    ecx = ecx + edx;
    PUSH32(esp, esi);
    eax = eax << 5;
    eax = eax + edx;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 8;
    esi = eax;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_003557EB; /* je: equal / zero */

loc_003557E9: ;
    MEM32(ecx) = edx;

loc_003557EB: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00355803(); return; } /* je: equal / zero */

loc_003557F2: ;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + 0x100) = edx;
    edx = MEM32(edx + 0x10);
    g_seh_ebp = ebp; sub_003542C0(); return; /* tail jmp 0x003542C0 */

}

/**
 * sub_00355810
 * Original: 0x00355810 - 0x00355888 (120 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00355810: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    eax = ebp * 4;
    PUSH32(esp, edi);
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM8(esi + 0x15) = LO8(ebx);
    MEM16(esi + 0x16) = 1;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0035585B: ;
    ecx = ebp;
    ecx = ecx << 5;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, ecx);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0035586F: ;
    edi = eax;
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) { sub_00355888(); return; } /* je: equal / zero */

loc_00355878: ;
    PUSH32(esp, 0x3553F0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_00355886: ;
    g_seh_ebp = ebp; sub_0035588A(); return; /* tail jmp 0x0035588A */

}

/**
 * sub_00355A80
 * Original: 0x00355A80 - 0x00355B3A (186 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00355A80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355A8E: ;
    eax = MEM32(esi + 0x2C);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00355AB5; /* je: equal / zero */

loc_00355A98: ;
    ecx = MEM32(eax + -4);
    edi = eax + -4;
    PUSH32(esp, 0xCF570);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_00355AAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355AB2: ;
    esp = esp + 4;

loc_00355AB5: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355ABE: ;
    edi = MEM32(esi + 0x60);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00355AFF; /* je: equal / zero */

loc_00355AC8: ;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00355AE0; /* je: equal / zero */

loc_00355AD3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00355ADD: ;
    esp = esp + 4;

loc_00355AE0: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(edi + 8) = 0;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00355AF5: ;
    esp = esp + 4;
    MEM32(esi + 0x60) = 0;

loc_00355AFF: ;
    MEM32(esi + 0x50) = 0;
    eax = MEM32(esi + 0x40);
    if (TEST_Z(eax, eax)) goto loc_00355B16; /* je: equal / zero */

loc_00355B0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355B13: ;
    esp = esp + 4;

loc_00355B16: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00355B26; /* je: equal / zero */

loc_00355B1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355B23: ;
    esp = esp + 4;

loc_00355B26: ;
    esi = MEM32(esi + 0x20);
    if (TEST_Z(esi, esi)) goto loc_00355B36; /* je: equal / zero */

loc_00355B2D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00355B33: ;
    esp = esp + 4;

loc_00355B36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355B40
 * Original: 0x00355B40 - 0x00356095 (1365 bytes, 383 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00355B40: ;
    ecx = MEM32(0x8758D8);
    esp = esp - 0xC8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD4);
    eax = MEM32(ebp + 0x34);
    ecx++;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x8758D8) = ecx;
    if (CMP_EQ(eax, ebx)) goto loc_00356084; /* je: equal / zero */

loc_00355B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00355B70;

    /* nop */

loc_00355B70: ;
    eax = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax << 5;
    eax = eax + ecx + -32;
    MEM32(esp + 0x34) = ebx;
    ecx = 8;
    esi = eax;
    edi = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM16(esp + 0x2E) = 1;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x34);
    if (CMP_EQ(ecx, ebx)) goto loc_00355BD2; /* je: equal / zero */

loc_00355BCC: ;
    edx = esp + 0x18;
    MEM32(ecx) = edx;

loc_00355BD2: ;
    if (CMP_EQ(MEM8(eax + 0x15), LO8(ebx))) goto loc_00355BEE; /* je: equal / zero */

loc_00355BD7: ;
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x18;
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_00355BEE: ;
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) - 1;
    if (CMP_NE(MEM32(ebp + 0x4C), ebx)) goto loc_00355C2C; /* jne: not equal / not zero */

loc_00355BF6: ;
    edx = MEM32(ebp + 0x44);
    eax = MEM32(ebp + 0x40);
    esi = MEM32(eax + edx * 4 + -4);
    eax = edx;
    eax--;
    ecx = esp + 0x18;
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0); sub_003556F0(); /* call 0x003556F0 */

loc_00355C17: ;
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 1);
    esi = ebp;
    PUSH32(esp, 0); sub_00354300(); /* call 0x00354300 */

loc_00355C24: ;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    goto loc_00356079;

loc_00355C2C: ;
    edx = ZX8(MEM8(ebp + 0x15));
    eax = ZX8(MEM8(esp + 0x2D));
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edi = ebp;
    MEM32(esp + 0x38) = ebx;
    if (CMP_EQ(eax, edx)) goto loc_00355CA1; /* je: equal / zero */

loc_00355C40: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x88) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    eax = MEM32(edi + 0x10);
    ebx = ZX8(MEM8(edi + 0x14));
    edx = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edi;
    PUSH32(esp, 0); sub_00354610(); /* call 0x00354610 */

loc_00355C85: ;
    edi = eax;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355430(); /* call 0x00355430 */

loc_00355C91: ;
    ecx = ZX8(MEM8(edi + 0x15));
    edx = ZX8(MEM8(esp + 0x2D));
    ecx--;
    if (CMP_NE(edx, ecx)) goto loc_00355C40; /* jne: not equal / not zero */

loc_00355C9F: ;
    ebx = 0; /* xor self */

loc_00355CA1: ;
    eax = ZX8(MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ecx = MEM32(esi + 0x100);
    MEM32(esp + 0x10) = eax;
    (void)0; /* cmp MEM8(ecx + 0x14), 8 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(MEM8(ecx + 0x14), 8)) goto loc_00355CDD; /* je: equal / zero */

loc_00355CBC: ;
    edx = esp + 0x18;
    eax = esi;
    PUSH32(esp, 0); sub_00355750(); /* call 0x00355750 */

loc_00355CC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355430(); /* call 0x00355430 */

loc_00355CCE: ;
    edx = MEM32(ebp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355430(); /* call 0x00355430 */

loc_00355CD8: ;
    goto loc_00356079;

loc_00355CDD: ;
    eax = MEM32(0x8758D8);
    if (CMP_EQ(eax, MEM32(edi + 0x18))) goto loc_00355D8B; /* je: equal / zero */

loc_00355CEB: ;
    MEM32(edi + 0x18) = eax;
    eax = ZX8(MEM8(edi + 0x14));
    ecx = eax + -4;
    if (CMP_GE(ecx, eax)) goto loc_00355D53; /* jge: greater or equal (signed >=) */

loc_00355CF9: ;
    eax = eax - ecx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_00355D00: ;
    edx = MEM32(ebp + 0x30);
    if (CMP_EQ(edx, ebx)) goto loc_00355D45; /* je: equal / zero */

loc_00355D07: ;
    ecx = MEM32(ebp + 0x34);
    eax = ecx;
    eax = eax << 5;
    eax = eax + edx;
    ecx++;
    MEM32(ebp + 0x34) = ecx;
    ecx = 8;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, ebx)) goto loc_00355D27; /* je: equal / zero */

loc_00355D25: ;
    MEM32(ecx) = eax;

loc_00355D27: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM8(ecx + 0x15), LO8(ebx))) goto loc_00355D41; /* je: equal / zero */

loc_00355D30: ;
    edx = MEM32(eax + 0x10);
    MEM32(edx + 0x100) = eax;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_00355D41: ;
    esi = MEM32(esp + 0x14);

loc_00355D45: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_00355D4D: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_00355D00; /* jne: not equal / not zero */

loc_00355D53: ;
    edx = MEM32(ebp + 0x30);
    if (CMP_EQ(edx, ebx)) goto loc_00356079; /* je: equal / zero */

loc_00355D5E: ;
    ecx = MEM32(ebp + 0x34);
    eax = ecx;
    eax = eax << 5;
    eax = eax + edx;
    ecx++;
    MEM32(ebp + 0x34) = ecx;
    ecx = 8;
    esi = esp + 0x18;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, ebx)) goto loc_00355D82; /* je: equal / zero */

loc_00355D80: ;
    MEM32(ecx) = eax;

loc_00355D82: ;
    SET_LO8(ecx, MEM8(esp + 0x2D));
    goto loc_0035601F;

loc_00355D8B: ;
    edx = MEM32(ebp + 0x44);
    eax = MEM32(ebp + 0x40);
    esi = MEM32(eax + edx * 4 + -4);
    edx--;
    MEM32(ebp + 0x44) = edx;
    ecx = edx;
    edx = MEM32(ebp + 0x40);
    eax = MEM32(edx + ecx * 4 + -4);
    ecx--;
    MEM32(ebp + 0x44) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00354840(); /* call 0x00354840 */

loc_00355DCA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 1;
    ecx = ecx | 0xFFFFFFFFu;
    MEM16(esp + 0x52) = LO16(eax);
    MEM16(esp + 0x72) = LO16(eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, ecx);
    esi = esp + 0x44;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x54) = ebx;
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM32(esp + 0x60) = ebx;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM32(esp + 0x74) = ebx;
    MEM8(esp + 0x78) = LO8(ebx);
    MEM8(esp + 0x79) = LO8(ebx);
    MEM32(esp + 0x80) = ebx;
    PUSH32(esp, 0); sub_00354300(); /* call 0x00354300 */

loc_00355E52: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    esi = esp + 0x64;
    PUSH32(esp, 0); sub_00354300(); /* call 0x00354300 */

loc_00355E69: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(ecx, MEM32(ebp + 0x4C))) goto loc_00355EC2; /* jne: not equal / not zero */

loc_00355E72: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + 0x10);
    edx = esp + 0x3C;
    MEM16(edi + 0x16) = 1;
    MEM8(edi + 0x14) = LO8(ebx);
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00355750(); /* call 0x00355750 */

loc_00355E9D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355430(); /* call 0x00355430 */

loc_00355EA4: ;
    eax = MEM32(edi + 0x10);
    edx = esp + 0x5C;
    PUSH32(esp, 0); sub_00355750(); /* call 0x00355750 */

loc_00355EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355430(); /* call 0x00355430 */

loc_00355EB7: ;
    MEM8(edi + 0x15) = MEM8(edi + 0x15) + 1;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    goto loc_00356079;

loc_00355EC2: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x38);
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x98) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0xA0) = ecx;
    eax = esi;
    ecx = MEM32(eax);
    MEM32(esp + 0xA4) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x98;
    MEM32(esp + 0xB0) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    MEM32(esp + 0xBC) = edx;
    PUSH32(esp, 0); sub_00123B70(); /* call 0x00123B70 */

loc_00355F30: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0xD0) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0xD4) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0xCC) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0xBC) = ecx;
    ecx = esp + 0xC8;
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0xB8) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0xCC) = eax;
    PUSH32(esp, 0); sub_00123B70(); /* call 0x00123B70 */

loc_00355FA1: ;
    eax = MEM32(ebp + 0x40);
    if (CMP_EQ(eax, ebx)) goto loc_00355FB4; /* je: equal / zero */

loc_00355FA8: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(edi + 0x10);
    MEM32(eax + ecx * 4) = edx;
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) + 1;

loc_00355FB4: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(edi) = xmm1; /* movss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEMF(edi + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM16(edi + 0x16) = 1;
    MEM8(edi + 0x14) = LO8(ebx);
    eax = edi;
    if ((xmm1 <= xmm0)) goto loc_0035602E; /* jbe: below or equal (unsigned <=) */

loc_00355FE3: ;
    edx = esp + 0x5C;
    PUSH32(esp, 0); sub_00354490(); /* call 0x00354490 */

loc_00355FEC: ;
    edx = MEM32(ebp + 0x30);
    if (CMP_EQ(edx, ebx)) goto loc_00356079; /* je: equal / zero */

loc_00355FF7: ;
    ecx = MEM32(ebp + 0x34);
    eax = ecx;
    eax = eax << 5;
    eax = eax + edx;
    ecx++;
    MEM32(ebp + 0x34) = ecx;
    ecx = 8;
    esi = esp + 0x3C;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, ebx)) goto loc_0035601B; /* je: equal / zero */

loc_00356019: ;
    MEM32(ecx) = eax;

loc_0035601B: ;
    SET_LO8(ecx, MEM8(esp + 0x51));

loc_0035601F: ;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00356079; /* je: equal / zero */

loc_00356023: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + 0x100) = eax;
    goto loc_00356071;

loc_0035602E: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0); sub_00354490(); /* call 0x00354490 */

loc_00356037: ;
    edx = MEM32(ebp + 0x30);
    if (CMP_EQ(edx, ebx)) goto loc_00356079; /* je: equal / zero */

loc_0035603E: ;
    ecx = MEM32(ebp + 0x34);
    eax = ecx;
    eax = eax << 5;
    eax = eax + edx;
    ecx++;
    MEM32(ebp + 0x34) = ecx;
    ecx = 8;
    esi = esp + 0x5C;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, ebx)) goto loc_00356062; /* je: equal / zero */

loc_00356060: ;
    MEM32(ecx) = eax;

loc_00356062: ;
    if (CMP_EQ(MEM8(esp + 0x71), LO8(ebx))) goto loc_00356079; /* je: equal / zero */

loc_00356068: ;
    edx = MEM32(eax + 0x10);
    MEM32(edx + 0x100) = eax;

loc_00356071: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_003542C0(); /* call 0x003542C0 */

loc_00356079: ;
    if (CMP_NE(MEM32(ebp + 0x34), ebx)) goto loc_00355B70; /* jne: not equal / not zero */

loc_00356082: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00356084: ;
    POP32(esp, ebp);
    MEM8(0x8758D4) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003560A0
 * Original: 0x003560A0 - 0x003560B2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003560A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003560A0: ;
    edx = MEM32(ecx + 0x24);
    esp = esp - 0x20;
    if (TEST_NZ(edx, edx)) { sub_003560B2(); return; } /* jne: not equal / not zero */

loc_003560AA: ;
    eax = 0; /* xor self */
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00356170
 * Original: 0x00356170 - 0x0035628E (286 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356170: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_00356288; /* je: equal / zero */

loc_0035617F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ecx + 0x30);
    if (CMP_B(ebx, eax)) goto loc_003561DE; /* jb: below (unsigned <) */

loc_00356189: ;
    edx = MEM32(ecx + 0x38);
    edx = edx << 5;
    edx = edx + eax;
    if (CMP_AE(ebx, edx)) goto loc_003561DE; /* jae: above or equal (unsigned >=) */

loc_00356195: ;
    ecx = MEM32(edi);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ebx);
    eax = 0x7F800000;
    if (TEST_NZ(eax, ecx)) goto loc_003561BF; /* jne: not equal / not zero */

loc_003561BB: ;
    MEMF(ebx) = xmm0; /* movss */

loc_003561BF: ;
    if (TEST_NZ(MEM32(ebx + 4), eax)) goto loc_003561C9; /* jne: not equal / not zero */

loc_003561C4: ;
    MEMF(ebx + 4) = xmm0; /* movss */

loc_003561C9: ;
    if (TEST_NZ(MEM32(ebx + 8), eax)) goto loc_00356287; /* jne: not equal / not zero */

loc_003561D2: ;
    MEMF(ebx + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_003561DE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    ecx = ebx;
    ecx = ecx - esi;
    eax = ecx;
    ebp = 0x130;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    xmm0 = 0.0f; /* xorps self = zero */
    eax = edi;
    ecx = ecx - edx;
    ecx = MEM32(ecx + esi + 0x100);
    esi = MEM32(eax);
    edx = ebx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ebx);
    eax = 0x7F800000;
    if (TEST_NZ(eax, edx)) goto loc_00356227; /* jne: not equal / not zero */

loc_00356223: ;
    MEMF(ebx) = xmm0; /* movss */

loc_00356227: ;
    if (TEST_NZ(MEM32(ebx + 4), eax)) goto loc_00356231; /* jne: not equal / not zero */

loc_0035622C: ;
    MEMF(ebx + 4) = xmm0; /* movss */

loc_00356231: ;
    if (TEST_NZ(MEM32(ebx + 8), eax)) goto loc_0035623B; /* jne: not equal / not zero */

loc_00356236: ;
    MEMF(ebx + 8) = xmm0; /* movss */

loc_0035623B: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_000990E0(); /* call 0x000990E0 */

loc_00356261: ;
    xmm0 = xmm0 + MEMF(edi + 0xC); /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00356285; /* ja: above (unsigned >) */

loc_00356271: ;
    esi = MEM32(esp + 0x20);
    edx = esi + 0x30;
    PUSH32(esp, 0); sub_00356370(); /* call 0x00356370 */

loc_0035627D: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_00356285: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00356287: ;
    POP32(esp, ebx);

loc_00356288: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00356290
 * Original: 0x00356290 - 0x0035629D (13 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356290(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    g_seh_ebp = ebp; sub_003562A0(); return; /* tail jmp 0x003562A0 */

}

/**
 * sub_00356360
 * Original: 0x00356360 - 0x00356369 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356360(void)
{

loc_00356360: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00356370
 * Original: 0x00356370 - 0x003563B4 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356370: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    if (TEST_Z(esi, esi)) { sub_003563B4(); return; } /* je: equal / zero */

loc_00356377: ;
    ecx = MEM32(edx + 4);
    eax = ecx;
    eax = eax << 5;
    eax = eax + esi;
    ecx++;
    PUSH32(esp, edi);
    MEM32(edx + 4) = ecx;
    ecx = 8;
    esi = ebx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0035639B; /* je: equal / zero */

loc_00356399: ;
    MEM32(ecx) = eax;

loc_0035639B: ;
    SET_LO8(ecx, MEM8(ebx + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003563B4(); return; } /* je: equal / zero */

loc_003563A2: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(eax + 0x10);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003542C0(); return; /* tail jmp 0x003542C0 */

}

/**
 * sub_003563C0
 * Original: 0x003563C0 - 0x00356427 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003563C0(void)
{
    uint32_t ebp;

loc_003563C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, esi);
    esi = MEM32(ecx * 4 + 0x762E44);
    PUSH32(esp, edi);
    eax = edx;
    eax = eax << 6;
    esi = esi + eax;
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(0x84A13C);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = eax + 0x801760;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0035640D: ;
    ecx = edx;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x84B260));
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(0x84B260) = LO8(ecx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00356430
 * Original: 0x00356430 - 0x0035647A (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356430: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003564F0(); /* call 0x003564F0 */

loc_00356436: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    if (CMP_A(eax, 4)) goto loc_00356479; /* ja: above (unsigned >) */

loc_00356441: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35647C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00356448u) goto loc_00356448;
    if (_jt == 0x00356454u) goto loc_00356454;
    if (_jt == 0x00356460u) goto loc_00356460;
    if (_jt == 0x0035646Cu) goto loc_0035646C;
    if (_jt == 0x00356479u) goto loc_00356479;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00356448: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00356453: ;
    esp += 4; return; /* ret */

loc_00356454: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0035645F: ;
    esp += 4; return; /* ret */

loc_00356460: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0035646B: ;
    esp += 4; return; /* ret */

loc_0035646C: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00356479: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003564F0
 * Original: 0x003564F0 - 0x0035654B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003564F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003564F0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003564FF; /* je: equal / zero */

loc_003564F8: ;
    MEM32(ecx + 0x10) = 0x801860;

loc_003564FF: ;
    if (TEST_NZ(eax, eax)) goto loc_0035651C; /* jne: not equal / not zero */

loc_00356503: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00356515: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 8;

loc_0035651C: ;
    SET_LO16(ecx, MEM16(eax + 0xC));
    MEM16(0x801864) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0xE));
    MEM16(0x801866) = LO16(edx);
    eax = MEM32(eax);
    MEM32(0x801868) = eax;
    MEM32(0x80186C) = 0;
    MEM8(0x801870) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00356550
 * Original: 0x00356550 - 0x003565B0 (96 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356550: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00356569; /* jne: not equal / not zero */

loc_0035655D: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00356566: ;
    esp = esp + 8;

loc_00356569: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 4);
    if (CMP_A(eax, 4)) goto loc_003565AE; /* ja: above (unsigned >) */

loc_00356573: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3565B0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0035657Au) goto loc_0035657A;
    if (_jt == 0x00356587u) goto loc_00356587;
    if (_jt == 0x00356594u) goto loc_00356594;
    if (_jt == 0x003565A1u) goto loc_003565A1;
    if (_jt == 0x003565AEu) goto loc_003565AE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035657A: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00356585: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00356587: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00356592: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00356594: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0035659F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003565A1: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003565AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003565D0
 * Original: 0x003565D0 - 0x003566A3 (211 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003565D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003565D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x84A148);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM8(0x84B260), LO8(eax))) { sub_003566A3(); return; } /* je: equal / zero */

loc_003565F1: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    ecx = ecx << 6;
    PUSH32(esp, eax);
    ecx = ecx + 0x801760;
    PUSH32(esp, ecx);
    edx = ebx;
    PUSH32(esp, 0); sub_0029C210(); /* call 0x0029C210 */

loc_00356615: ;
    xmm1 = MEMF(ebp); /* movss */
    esp = esp + 0x18;
    /* comiss xmm1, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm1 >= MEMF(esp + 0x1C))) { sub_003566A3(); return; } /* jae: above or equal (unsigned >=) */

loc_00356624: ;
    xmm0 = MEMF(0x76F7AC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) { sub_003566A3(); return; } /* jae: above or equal (unsigned >=) */

loc_00356631: ;
    eax = MEM32(0x84A13C);
    if (TEST_Z(eax, eax)) { sub_003566A3(); return; } /* je: equal / zero */

loc_0035663A: ;
    xmm2 = MEMF(0x648D1C); /* movss */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    xmm3 = MEMF(eax + esi + 0x200); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + esi;
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 * MEMF(edi); /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(eax + 0x228); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = MEMF(eax + 0x1FC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 * MEMF(ebx); /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x224); /* addss */
    POP32(esp, esi);
    MEMF(ebx) = xmm3; /* movss */
    MEMF(edi) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003566B0
 * Original: 0x003566B0 - 0x00356742 (146 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003566B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003566B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x457A0000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp);
    esp = esp - 8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    edi = esp + 0x30;
    ebx = esp + 0x20;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_003566FC: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0035673B; /* je: equal / zero */

loc_00356703: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    xmm6 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x2C;
    edx = ebp;
    PUSH32(esp, 0); sub_003567E0(); /* call 0x003567E0 */

loc_00356721: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0035673B; /* je: equal / zero */

loc_0035672D: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    edi = ebp;
    PUSH32(esp, 0); sub_00356AA0(); /* call 0x00356AA0 */

loc_00356738: ;
    esp = esp + 4;

loc_0035673B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00356750
 * Original: 0x00356750 - 0x0035678F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356750(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm6;

loc_00356750: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    xmm6 = MEMF(0x649580); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_003567E0(); /* call 0x003567E0 */

loc_00356774: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0035678B; /* je: equal / zero */

loc_0035677F: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00356AA0(); /* call 0x00356AA0 */

loc_00356788: ;
    esp = esp + 4;

loc_0035678B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356790
 * Original: 0x00356790 - 0x003567D4 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm5;

loc_00356790: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    xmm5 = MEMF(0x649580); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_00356950(); /* call 0x00356950 */

loc_003567B4: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003567D0; /* je: equal / zero */

loc_003567BF: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00358CA0(); /* call 0x00358CA0 */

loc_003567CD: ;
    esp = esp + 8;

loc_003567D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003567E0
 * Original: 0x003567E0 - 0x00356941 (353 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003567E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003567E0: ;
    MEM32(esi) = 0;
    SET_LO16(eax, MEM16(edx + 6));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00356940; /* je: equal / zero */

loc_003567F3: ;
    SET_LO16(ecx, MEM16(edx + 8));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00356940; /* je: equal / zero */

loc_00356800: ;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0xC);
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x7FA254); /* mulss */
    ecx = MEM32(0x84A13C);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84A148);
    if (TEST_Z(eax, eax)) goto loc_0035684D; /* je: equal / zero */

loc_00356831: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm3 = MEMF(eax + ecx + 0x20C); /* movss */
    xmm4 = MEMF(eax + ecx + 0x210); /* movss */
    eax = eax + ecx;
    goto loc_00356867;

loc_0035684D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm3 = MEMF(eax + ecx + 0x204); /* movss */
    xmm4 = MEMF(eax + ecx + 0x208); /* movss */
    eax = eax + ecx;

loc_00356867: ;
    ecx = MEM32(edx + 0x10);
    edx = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 6));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm2 = xmm2 / xmm6; /* divss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 + xmm2; /* addss */
    /* comiss xmm7, MEMF(eax + 0x21C) - sets EFLAGS */
    if ((xmm7 < MEMF(eax + 0x21C))) goto loc_00356908; /* jb: below (unsigned <) */

loc_003568D8: ;
    xmm7 = MEMF(eax + 0x220); /* movss */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 <= xmm2)) goto loc_00356908; /* jbe: below or equal (unsigned <=) */

loc_003568E5: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, MEMF(eax + 0x214) - sets EFLAGS */
    if ((xmm7 < MEMF(eax + 0x214))) goto loc_00356908; /* jb: below (unsigned <) */

loc_003568F5: ;
    xmm7 = MEMF(eax + 0x218); /* movss */
    /* comiss xmm7, xmm5 - sets EFLAGS */
    if ((xmm7 <= xmm5)) goto loc_00356908; /* jbe: below or equal (unsigned <=) */

loc_00356902: ;
    MEM32(esi) = 1;

loc_00356908: ;
    MEMF(0x801748) = xmm3; /* movss */
    MEMF(0x801744) = xmm4; /* movss */
    MEMF(0x801740) = xmm2; /* movss */
    MEMF(0x80173C) = xmm5; /* movss */
    MEMF(0x801738) = xmm6; /* movss */
    MEMF(0x801734) = xmm0; /* movss */
    MEMF(0x801730) = xmm1; /* movss */

loc_00356940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00356950
 * Original: 0x00356950 - 0x00356A93 (323 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356950(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00356950: ;
    MEM32(esi) = 0;
    SET_LO16(eax, MEM16(edx + 6));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00356A92; /* je: equal / zero */

loc_00356963: ;
    SET_LO16(ecx, MEM16(edx + 8));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00356A92; /* je: equal / zero */

loc_00356970: ;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0xC);
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x7FA254); /* mulss */
    ecx = MEM32(0x84A13C);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84A148);
    if (TEST_Z(eax, eax)) goto loc_003569BD; /* je: equal / zero */

loc_003569A1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm3 = MEMF(eax + ecx + 0x20C); /* movss */
    xmm4 = MEMF(eax + ecx + 0x210); /* movss */
    eax = eax + ecx;
    goto loc_003569D7;

loc_003569BD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm3 = MEMF(eax + ecx + 0x204); /* movss */
    xmm4 = MEMF(eax + ecx + 0x208); /* movss */
    eax = eax + ecx;

loc_003569D7: ;
    ecx = MEM32(edx + 0x10);
    edx = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 6));
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 / xmm5; /* divss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 + xmm1; /* addss */
    /* comiss xmm6, MEMF(eax + 0x21C) - sets EFLAGS */
    xmm6 = MEMF(esp + 8); /* movss */
    if ((xmm6 < MEMF(eax + 0x21C))) goto loc_00356A5A; /* jb: below (unsigned <) */

loc_00356A2A: ;
    xmm7 = MEMF(eax + 0x220); /* movss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 <= xmm1)) goto loc_00356A5A; /* jbe: below or equal (unsigned <=) */

loc_00356A37: ;
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    /* comiss xmm7, MEMF(eax + 0x214) - sets EFLAGS */
    if ((xmm7 < MEMF(eax + 0x214))) goto loc_00356A5A; /* jb: below (unsigned <) */

loc_00356A47: ;
    xmm7 = MEMF(eax + 0x218); /* movss */
    /* comiss xmm7, xmm6 - sets EFLAGS */
    if ((xmm7 <= xmm6)) goto loc_00356A5A; /* jbe: below or equal (unsigned <=) */

loc_00356A54: ;
    MEM32(esi) = 1;

loc_00356A5A: ;
    MEMF(0x801748) = xmm3; /* movss */
    MEMF(0x801744) = xmm4; /* movss */
    MEMF(0x801740) = xmm1; /* movss */
    MEMF(0x80173C) = xmm6; /* movss */
    MEMF(0x801738) = xmm5; /* movss */
    MEMF(0x801734) = xmm0; /* movss */
    MEMF(0x801730) = xmm2; /* movss */

loc_00356A92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00356AA0
 * Original: 0x00356AA0 - 0x00356D32 (658 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356AA0: ;
    xmm7 = MEMF(0x801740); /* movss */
    xmm0 = MEMF(0x80173C); /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x801730); /* movss */
    xmm2 = MEMF(0x801734); /* movss */
    esp = esp - 0x78;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    xmm1 = xmm7; /* movaps */
    if (CMP_EQ(eax, esi)) goto loc_00356B3A; /* je: equal / zero */

loc_00356AD5: ;
    xmm5 = MEMF(0x801748); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(0x801738); /* divss */
    xmm6 = MEMF(0x801744); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x80173C); /* addss */
    MEMF(0x801734) = xmm2; /* movss */
    MEMF(0x801730) = xmm3; /* movss */
    xmm1 = xmm1 + xmm7; /* addss */

loc_00356B3A: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    if ((xmm4 <= xmm2)) goto loc_00356B51; /* jbe: below or equal (unsigned <=) */

loc_00356B4B: ;
    MEMF(esp + 4) = xmm4; /* movss */

loc_00356B51: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = (int32_t)xmm1; /* cvttss2si */
    ebx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00356B66: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00356B70: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00356B7A: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356B89: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356B9F: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00356BAC: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356BBB: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356BD1: ;
    eax = MEM32(0x5499F0);
    MEM32(0x549AF8) = esi;
    eax = eax | 0x1200;
    MEM32(0x549B90) = esi;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(0x5499F0) = eax;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00356BF4: ;
    ecx = MEM32(0x5499F0);
    eax = 3;
    ecx = ecx | 0xC01;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = 1;
    MEM32(0x5499F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = esi;
    MEM32(0x54737C) = 2;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    MEM32(0x547384) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356C53: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356C6C: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00356C7D: ;
    xmm4 = (float)(int32_t)MEM32(esp + 0x88); /* cvtsi2ss */
    xmm4 = xmm4 + MEMF(esp + 0xC); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm3 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm4 = xmm4 - xmm1; /* subss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    xmm3 = xmm3 - xmm1; /* subss */
    ecx = ecx + ebp;
    edx = (int32_t)xmm3; /* cvttss2si */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = edx + ebx;
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(eax, MEM8(edi + 0xD));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm3; /* movss */
    if (TEST_Z(LO8(eax), 1)) { sub_00356D32(); return; } /* je: equal / zero */

loc_00356D18: ;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00356D4A(); return; /* tail jmp 0x00356D4A */

}

/**
 * sub_00356EB0
 * Original: 0x00356EB0 - 0x003570E1 (561 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356EB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;

loc_00356EB0: ;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x9C);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003570DB; /* je: equal / zero */

loc_00356EC8: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00356ED4: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00356EDE: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00356EE8: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356EF4: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356F06: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00356F13: ;
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356F22: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356F3B: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = 1;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00356F65: ;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    edx = 0x302;
    ecx = 0x40344;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x20;
    eax = eax | 0xC01;
    ebx = ebx | 2;
    MEM32(0x547360) = 2;
    MEM32(0x547368) = ebx;
    MEM32(0x5473E0) = 1;
    MEM32(0x5473F0) = 1;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356FC6: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00356FDF: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00356FF0: ;
    xmm3 = MEMF(esp + 0x80); /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x8C); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x88); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    ecx = MEM32(esp + 0xA0);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x9C); /* movss */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003570CA: ;
    PUSH32(esp, 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003570DA: ;
    POP32(esp, esi);

loc_003570DB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_003570F0
 * Original: 0x003570F0 - 0x0035730F (543 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003570F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003570F0: ;
    esp = esp - 0x70;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebp, edi)) goto loc_00357309; /* je: equal / zero */

loc_00357106: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00357112: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0035711C: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00357126: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357132: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357144: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00357151: ;
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357160: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357179: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = 1;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0035719B: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 0xC01;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    eax = 3;
    MEM32(0x5499F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5473E0) = 1;
    MEM32(0x5473F0) = 1;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003571F4: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035720D: ;
    ecx = MEM32(esp + 0x94);
    eax = MEM32(ecx * 8 + 0x6B8C14);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0035722A: ;
    edx = MEM32(esp + 0x98);
    eax = 1;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_0035723E: ;
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm3 = MEMF(esp + 0x80); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x8C); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x88); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003572F8: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00357308: ;
    POP32(esp, esi);

loc_00357309: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00357310
 * Original: 0x00357310 - 0x00357858 (1352 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357310(void)
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

loc_00357310: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00357853; /* je: equal / zero */

loc_0035731E: ;
    if (CMP_EQ(MEM32(esp + 0x98), ebx)) goto loc_00357853; /* je: equal / zero */

loc_0035732B: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00357337: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00357341: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0035734B: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035735A: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357370: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = ebx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00357392; /* jb: below (unsigned <) */

loc_00357383: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00357392: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_003573EF; /* jne: not equal / not zero */

loc_003573C0: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_003573C5: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_003573CA: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_003573E0; /* jb: below (unsigned <) */

loc_003573D1: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003573E0: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_003573E8: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_003573ED: ;
    MEM32(esi) = eax;

loc_003573EF: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003573FE: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357414: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00357432: ;
    ecx = MEM32(0x5499F0);
    SET_LO8(eax, MEM8(esp + 0xA4));
    ecx = ecx | 0x800;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(eax), LO8(ebx))) ? 1 : 0); /* setne */
    MEM32(0x5499F0) = ecx;
    SET_LO8(eax, LO8(eax) - 1);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0xA0));
    esi = 3;
    MEM32(0x547360) = 4;
    MEM32(0x547368) = 2;
    MEM32(0x54736C) = esi;
    eax = eax & 0xFF;
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    ecx = ecx << 8;
    ecx = ecx | eax;
    ecx = ecx << 8;
    ecx = ecx | eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_00357494: ;
    eax = 1;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = 2;
    MEM32(0x54737C) = esi;
    MEM32(0x54735C) = 4;
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003574F7: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357510: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00357521: ;
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm2 = MEMF(esp + 0x90); /* movss */
    xmm1 = MEMF(esp + 0x88); /* movss */
    xmm3 = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003575E3: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = esp + 0x18;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    ecx = esp + 0x18;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esp + 0x24;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0; /* xor self */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00357671: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x40); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    edx = esp + 0x44;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = esp + 0x50;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_003576FF: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x70); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x6C); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    edx = esp + 0x70;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edx);
    eax = esp + 0x70;
    xmm0 = xmm0 + xmm1; /* addss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x78); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, eax);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esp + 0x7C;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    edx = MEM32(esp + 0x34);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_0035778D: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * MEMF(esp + 0x9C); /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x98); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0xA0); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esp + 0xA8;
    ecx = 0; /* xor self */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    eax = MEM32(esp + 0x44);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_0035783F: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x1C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00357852: ;
    POP32(esp, esi);

loc_00357853: ;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00357860
 * Original: 0x00357860 - 0x00357CEF (1167 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357860(void)
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

loc_00357860: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00357CEA; /* je: equal / zero */

loc_0035786E: ;
    if (CMP_EQ(MEM32(esp + 0x98), ebx)) goto loc_00357CEA; /* je: equal / zero */

loc_0035787B: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00357887: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00357891: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0035789B: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003578A7: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003578B9: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003578C6: ;
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003578D5: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003578EE: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x1200;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = 1;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00357918: ;
    eax = 2;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x5473E0) = 1;
    MEM32(0x5473F0) = 1;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035796E: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357987: ;
    ecx = MEM32(esp + 0xA0);
    eax = MEM32(ecx * 8 + 0x6B8C14);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003579A4: ;
    edx = MEM32(esp + 0xA4);
    eax = 1;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003579B8: ;
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm2 = MEMF(esp + 0x90); /* movss */
    xmm1 = MEMF(esp + 0x88); /* movss */
    xmm3 = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00357A7A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 0x18;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edx = 0; /* xor self */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esp + 0x24;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00357B08: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x40); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x44;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    PUSH32(esp, edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x20);
    eax = esp + 0x44;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esp + 0x50;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00357B96: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 0x70); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x6C); /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    eax = esp + 0x70;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm1 = xmm1 * MEMF(esp + 0x78); /* mulss */
    ecx = esp + 0x70;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esp + 0x7C;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    eax = MEM32(esp + 0x34);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0; /* xor self */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00357C24: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    xmm0 = MEMF(edi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x9C); /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x98); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0xA0); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x9C;
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    edx = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esp + 0xA8;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    ecx = MEM32(esp + 0x44);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00357CD6: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x1C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00357CE9: ;
    POP32(esp, esi);

loc_00357CEA: ;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00357CF0
 * Original: 0x00357CF0 - 0x00357FA4 (692 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357CF0(void)
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

loc_00357CF0: ;
    eax = MEM32(esp + 0x14);
    esp = esp - 0x70;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00357F9F; /* je: equal / zero */

loc_00357D02: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00357D0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00357D15: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00357D1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00357D25: ;
    ebp = 1;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357D36: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357D48: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00357D6A; /* jb: below (unsigned <) */

loc_00357D5B: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00357D6A: ;
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
    if (CMP_NE(eax, 2)) goto loc_00357DC7; /* jne: not equal / not zero */

loc_00357D98: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00357D9D: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00357DA2: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00357DB8; /* jb: below (unsigned <) */

loc_00357DA9: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00357DB8: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00357DC0: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00357DC5: ;
    MEM32(esi) = eax;

loc_00357DC7: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357DD6: ;
    edx = ebp;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357DEC: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebp;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00357E12: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = 2;
    MEM32(0x547368) = 2;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = edi;
    MEM32(0x54737C) = 2;
    MEM32(0x5473E0) = ebp;
    MEM32(0x5473F0) = ebp;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357E7F: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357E98: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00357EA9: ;
    fp_push(MEMF(esp + 0x94)); /* fld float */
    xmm3 = MEMF(esp + 0x80); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x8C); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x88); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00357F6D: ;
    POP32(esp, esi);
    ecx = esp + 0x17;
    edx = 4;
    POP32(esp, ebp);

loc_00357F78: ;
    MEM8(ecx) = LO8(eax);
    ecx = ecx + 0x1C;
    edx--;
    if ((edx != 0)) goto loc_00357F78; /* jne: not equal / not zero */

loc_00357F80: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00357F8F: ;
    PUSH32(esp, 0x1C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00357F9F: ;
    POP32(esp, edi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00357FB0
 * Original: 0x00357FB0 - 0x003582B6 (774 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357FB0(void)
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

loc_00357FB0: ;
    eax = MEM32(esp + 0x14);
    esp = esp - 0x74;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003582B1; /* je: equal / zero */

loc_00357FC2: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00357FCF: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00357FD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00357FDF: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00357FF0: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358002: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00358024; /* jb: below (unsigned <) */

loc_00358015: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00358024: ;
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
    if (CMP_NE(eax, 2)) goto loc_00358081; /* jne: not equal / not zero */

loc_00358052: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00358057: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0035805C: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00358072; /* jb: below (unsigned <) */

loc_00358063: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00358072: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0035807A: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0035807F: ;
    MEM32(esi) = eax;

loc_00358081: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358090: ;
    edx = ebx;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003580A6: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_003580CC: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    esi = 4;
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = esi;
    MEM32(0x547368) = edi;
    MEM32(0x54736C) = 2;
    MEM32(0x547370) = esi;
    MEM32(0x547378) = edi;
    MEM32(0x54737C) = 2;
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035813C: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358155: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00358166: ;
    fp_push(MEMF(esp + 0x98)); /* fld float */
    xmm3 = MEMF(esp + 0x84); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x90); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x8C); /* addss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0035822A: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0035823E: ;
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xD) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358254: ;
    MEM8(esp + 0xE) = LO8(eax);
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0035826A: ;
    MEM8(esp + 0xF) = LO8(eax);
    ecx = esp + 0x1D;
    edx = esi;

loc_00358274: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xE));
    MEM8(ecx + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xF));
    MEM8(ecx + -1) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ecx + 0x1C;
    edx--;
    if ((edx != 0)) goto loc_00358274; /* jne: not equal / not zero */

loc_00358291: ;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003582A0: ;
    PUSH32(esp, 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003582AF: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003582B1: ;
    POP32(esp, edi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003582C0
 * Original: 0x003582C0 - 0x003585E2 (802 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003582C0(void)
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

loc_003582C0: ;
    eax = MEM32(esp + 0x24);
    esp = esp - 0x74;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003585DD; /* je: equal / zero */

loc_003582D2: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003582DF: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003582E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003582EF: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358300: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358312: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00358334; /* jb: below (unsigned <) */

loc_00358325: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00358334: ;
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
    if (CMP_NE(eax, 2)) goto loc_00358391; /* jne: not equal / not zero */

loc_00358362: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00358367: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0035836C: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00358382; /* jb: below (unsigned <) */

loc_00358373: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00358382: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0035838A: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0035838F: ;
    MEM32(esi) = eax;

loc_00358391: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003583A0: ;
    edx = ebx;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003583B6: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_003583DC: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    esi = 4;
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = esi;
    MEM32(0x547368) = edi;
    MEM32(0x54736C) = 2;
    MEM32(0x547370) = esi;
    MEM32(0x547378) = edi;
    MEM32(0x54737C) = 2;
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035844C: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358465: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00358476: ;
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    xmm3 = MEMF(esp + 0x84); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x8C); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x90); /* addss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x9C); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358553: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358567: ;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xD) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0035857D: ;
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xE) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358593: ;
    MEM8(esp + 0xF) = LO8(eax);
    ecx = esp + 0x1D;
    edx = esi;
    /* nop */

loc_003585A0: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xE));
    MEM8(ecx + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xF));
    MEM8(ecx + -1) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ecx + 0x1C;
    edx--;
    if ((edx != 0)) goto loc_003585A0; /* jne: not equal / not zero */

loc_003585BD: ;
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003585CC: ;
    PUSH32(esp, 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003585DB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003585DD: ;
    POP32(esp, edi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003585F0
 * Original: 0x003585F0 - 0x003587CE (478 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003585F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003585F0: ;
    esp = esp - 0x70;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x94));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00358609: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00358613: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0035861D: ;
    edi = 1;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035862E: ;
    edx = edi;
    ecx = 0x40300;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358640: ;
    PUSH32(esp, edi);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0035864C: ;
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035865B: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358671: ;
    edx = MEM32(0x5499F0);
    ebp = 0; /* xor self */
    edx = edx | 0x1200;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = edi;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = ebp;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00358699: ;
    eax = 2;
    MEM32(0x547360) = eax;
    MEM32(0x547370) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC00;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547368) = ebp;
    MEM32(0x547378) = ebp;
    MEM32(0x5473E0) = edi;
    MEM32(0x5473F0) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003586E4: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003586FD: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0035870E: ;
    xmm3 = MEMF(esp + 0x84); /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x8C); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x90); /* addss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    eax = esp + 0x1D;
    ecx = 4;
    edi = edi;

loc_00358790: ;
    SET_LO8(edx, MEM8(esp + 0x9C));
    MEM8(eax + -1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x98));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x94));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ebx);
    eax = eax + 0x1C;
    ecx--;
    if ((ecx != 0)) goto loc_00358790; /* jne: not equal / not zero */

loc_003587B6: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003587C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_003587D0
 * Original: 0x003587D0 - 0x00358964 (404 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003587D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003587D0: ;
    esp = esp - 0x38;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003587E1: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003587EB: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003587F5: ;
    edi = 1;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358806: ;
    edx = edi;
    ecx = 0x40300;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358818: ;
    PUSH32(esp, edi);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00358824: ;
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358833: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358849: ;
    edx = MEM32(0x5499F0);
    ebp = 0; /* xor self */
    edx = edx | 0x1200;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = edi;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = ebp;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00358871: ;
    eax = MEM32(0x5499F0);
    esi = 2;
    eax = eax | 0xC00;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = esi;
    MEM32(0x547368) = ebp;
    MEM32(0x547370) = esi;
    MEM32(0x547378) = ebp;
    MEM32(0x5473E0) = edi;
    MEM32(0x5473F0) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003588BE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003588D7: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003588E8: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = esp + 0x19;
    ecx = esi;

loc_00358932: ;
    SET_LO8(edx, MEM8(esp + 0x60));
    MEM8(eax + -1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5C));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x58));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ebx);
    eax = eax + 0x1C;
    ecx--;
    if ((ecx != 0)) goto loc_00358932; /* jne: not equal / not zero */

loc_0035894F: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0035895D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00358970
 * Original: 0x00358970 - 0x00358C93 (803 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358970(void)
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

loc_00358970: ;
    eax = MEM32(esp + 0x24);
    esp = esp - 0x74;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00358C8E; /* je: equal / zero */

loc_00358982: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0035898F: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00358999: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0035899F: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003589B0: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003589C2: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_003589E4; /* jb: below (unsigned <) */

loc_003589D5: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003589E4: ;
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
    if (CMP_NE(eax, 2)) goto loc_00358A41; /* jne: not equal / not zero */

loc_00358A12: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00358A17: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00358A1C: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00358A32; /* jb: below (unsigned <) */

loc_00358A23: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00358A32: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00358A3A: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00358A3F: ;
    MEM32(esi) = eax;

loc_00358A41: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358A50: ;
    edx = ebx;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358A66: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00358A8C: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = 4;
    MEM32(0x547368) = edi;
    MEM32(0x54736C) = 2;
    MEM32(0x547370) = 2;
    MEM32(0x547378) = edi;
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358AF5: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358B0E: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00358B1F: ;
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    xmm3 = MEMF(esp + 0x84); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x8C); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x90); /* addss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x9C); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358BFC: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358C10: ;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xD) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358C26: ;
    MEM8(esp + 0xE) = LO8(eax);
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00358C3C: ;
    MEM8(esp + 0xF) = LO8(eax);
    ecx = esp + 0x1D;
    edx = 4;
    /* nop */

loc_00358C50: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xE));
    MEM8(ecx + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xF));
    MEM8(ecx + -1) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ecx + 0x1C;
    edx--;
    if ((edx != 0)) goto loc_00358C50; /* jne: not equal / not zero */

loc_00358C6D: ;
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00358C7C: ;
    PUSH32(esp, 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00358C8C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00358C8E: ;
    POP32(esp, edi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00358CA0
 * Original: 0x00358CA0 - 0x0035907A (986 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358CA0(void)
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

loc_00358CA0: ;
    esp = esp - 0x88;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    xmm7 = MEMF(0x801740); /* movss */
    /* fld st(0) */
    xmm0 = MEMF(0x80173C); /* movss */
    /* FPU: fsin  */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x801730); /* movss */
    xmm2 = MEMF(0x801734); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    xmm1 = xmm7; /* movaps */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(eax, esi)) goto loc_00358D5E; /* je: equal / zero */

loc_00358CF3: ;
    xmm5 = MEMF(0x801748); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(0x801738); /* divss */
    xmm6 = MEMF(0x801744); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x80173C); /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(0x801734) = xmm2; /* movss */
    MEMF(0x801730) = xmm3; /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00358D5E: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    if ((xmm4 <= xmm2)) goto loc_00358D75; /* jbe: below or equal (unsigned <=) */

loc_00358D6F: ;
    MEMF(esp + 4) = xmm4; /* movss */

loc_00358D75: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    ebx = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00358D8C: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00358D96: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00358DA0: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358DAF: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358DC5: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00358DD2: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358DE1: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358DF7: ;
    edx = MEM32(0x5499F0);
    MEM32(0x549AF8) = esi;
    edx = edx | 0x1200;
    MEM32(0x549B90) = esi;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(0x5499F0) = edx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00358E1D: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = 1;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = esi;
    MEM32(0x54737C) = 2;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358E79: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00358E92: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00358EA3: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm2 = (float)(int32_t)MEM32(esp + 0x98); /* cvtsi2ss */
    xmm2 = xmm2 + MEMF(esp + 0xC); /* addss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm5 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm6 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm6 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm3 = xmm3 + xmm5; /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm2 = MEMF(0x648D1C); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x20); /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x18); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x10); /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm2 = xmm3; /* movaps */
    MEMF(esp + 0x5C) = xmm7; /* movss */
    xmm7 = MEMF(0x648D1C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm2 = xmm2 - xmm5; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 0x64) = xmm7; /* movss */
    MEMF(esp + 0x80) = xmm7; /* movss */
    if ((xmm0 > xmm2)) goto loc_00359000; /* ja: above (unsigned >) */

loc_00358FFD: ;
    xmm0 = xmm2; /* movaps */

loc_00359000: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00359018; /* jbe: below or equal (unsigned <=) */

loc_00359008: ;
    xmm4 = xmm4 - xmm0; /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */

loc_00359018: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    SET_LO8(eax, MEM8(edi + 0xD));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 1)) { sub_0035907A(); return; } /* je: equal / zero */

loc_0035905D: ;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00359095(); return; /* tail jmp 0x00359095 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00359210
 * Original: 0x00359210 - 0x003594A7 (663 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359210: ;
    xmm7 = MEMF(0x801740); /* movss */
    xmm0 = MEMF(0x80173C); /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x801730); /* movss */
    xmm2 = MEMF(0x801734); /* movss */
    esp = esp - 0x78;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    xmm1 = xmm7; /* movaps */
    if (CMP_EQ(eax, esi)) goto loc_003592AA; /* je: equal / zero */

loc_00359245: ;
    xmm5 = MEMF(0x801748); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(0x801738); /* divss */
    xmm6 = MEMF(0x801744); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x80173C); /* addss */
    MEMF(0x801734) = xmm2; /* movss */
    MEMF(0x801730) = xmm3; /* movss */
    xmm1 = xmm1 + xmm7; /* addss */

loc_003592AA: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    if ((xmm4 <= xmm2)) goto loc_003592C1; /* jbe: below or equal (unsigned <=) */

loc_003592BB: ;
    MEMF(esp + 4) = xmm4; /* movss */

loc_003592C1: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = (int32_t)xmm1; /* cvttss2si */
    ebx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003592D6: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003592E0: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003592EA: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003592F9: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035930F: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0035931C: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035932B: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359341: ;
    ecx = MEM32(0x5499F0);
    MEM32(0x549AF8) = esi;
    ecx = ecx | 0x1200;
    MEM32(0x549B90) = esi;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(0x5499F0) = ecx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00359367: ;
    edx = MEM32(0x5499F0);
    ecx = 0; /* xor self */
    eax = 3;
    edx = edx | 0xC01;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = 1;
    MEM32(0x547378) = ecx;
    MEM32(0x5499F0) = edx;
    MEM32(0x547384) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547370) = 4;
    MEM32(0x54737C) = 2;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003593C8: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003593E1: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003593F2: ;
    xmm4 = (float)(int32_t)MEM32(esp + 0x8C); /* cvtsi2ss */
    xmm4 = xmm4 + MEMF(esp + 0xC); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm3 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm4 = xmm4 - xmm1; /* subss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    MEMF(esp + 0x34) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    ecx = ecx + ebp;
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    edx = (int32_t)xmm3; /* cvttss2si */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    edx = edx + ebx;
    SET_LO8(eax, MEM8(edi + 0xD));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm3; /* movss */
    if (TEST_Z(LO8(eax), 1)) { sub_003594A7(); return; } /* je: equal / zero */

loc_0035948D: ;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_003594BF(); return; /* tail jmp 0x003594BF */

}

/**
 * sub_00359610
 * Original: 0x00359610 - 0x003596A3 (147 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359610(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_00359610: ;
    ecx = MEM32(0x84A148);
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm2 = MEMF(0x648D14); /* movss */
    ecx = ecx + edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = xmm0 * MEMF(0x7FA254); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x208); /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(0x7FA258); /* mulss */
    xmm3 = xmm3 * MEMF(ecx + 0x204); /* mulss */
    ecx = MEM32(eax + 0x10);
    edx = ZX16(MEM16(ecx + 4));
    ecx = MEM32(esp + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(0x648E80); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(ecx) = xmm3; /* movss */
    edx = MEM32(eax + 0x10);
    eax = ZX16(MEM16(edx + 6));
    ecx = MEM32(esp + 8);
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(ecx) = xmm3; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003596B0
 * Original: 0x003596B0 - 0x0035974A (154 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003596B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003596B0: ;
    xmm4 = MEMF(0x648D10); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp - 0x10;
    xmm2 = xmm2 - xmm5; /* subss */
    xmm3 = xmm3 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm5, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0035974A(); return; } /* jp: parity */

loc_003596FA: ;
    MEMF(0x8016C4) = xmm0; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(0x8016E0) = xmm0; /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(0x8016C0) = xmm1; /* movss */
    MEMF(0x8016DC) = xmm4; /* movss */
    MEMF(0x8016F8) = xmm4; /* movss */
    MEMF(0x8016FC) = xmm0; /* movss */
    MEMF(0x801714) = xmm1; /* movss */
    MEMF(0x801718) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00359864(); return; /* tail jmp 0x00359864 */

}

/**
 * sub_003598A0
 * Original: 0x003598A0 - 0x00359A36 (406 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003598A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003598A0: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003598AD: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003598B7: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003598C1: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003598D0: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003598E6: ;
    edi = 0; /* xor self */
    PUSH32(esp, 1);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003598F5: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359904: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0035991A: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0035993D: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0xC01;
    eax = 3;
    MEM32(0x5499F0) = edx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = 2;
    MEM32(0x547368) = 2;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = edi;
    MEM32(0x54737C) = 2;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5473E0) = 1;
    MEM32(0x5473F0) = 1;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003599B5: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003599CE: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003599DF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(esp + 0xC));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(0x8016C8) = xmm0; /* movss */
    MEMF(0x8016E4) = xmm0; /* movss */
    MEMF(0x801700) = xmm0; /* movss */
    MEMF(0x80171C) = xmm0; /* movss */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), 1)) { sub_00359A36(); return; } /* je: equal / zero */

loc_00359A14: ;
    MEMF(0x8016D0) = xmm0; /* movss */
    MEMF(0x8016EC) = xmm1; /* movss */
    MEMF(0x801708) = xmm1; /* movss */
    MEMF(0x801724) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00359A56(); return; /* tail jmp 0x00359A56 */

}

/**
 * sub_00359AA0
 * Original: 0x00359AA0 - 0x00359D5F (703 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359AA0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x64ABB4); /* movss */
    esp = esp - 0x74;
    if (CMP_EQ(eax, 0x58DE44)) goto loc_00359ABE; /* je: equal / zero */

loc_00359AB6: ;
    xmm0 = MEMF(0x648D1C); /* movss */

loc_00359ABE: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00359AD2: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00359ADC: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00359AE6: ;
    ebp = 1;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359AF7: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359B09: ;
    edi = 0; /* xor self */
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359B20: ;
    PUSH32(esp, ebp);
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00359B30: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359B3F: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359B55: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = edi;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00359B7B: ;
    MEM32(0x547330) = ebp;
    MEM32(0x547334) = ebp;
    MEM32(0x5473E0) = ebp;
    MEM32(0x5473F0) = ebp;
    ebp = MEM32(0x5499F0);
    eax = 2;
    ebp = ebp | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = edi;
    MEM32(0x54737C) = eax;
    MEM32(0x5499F0) = ebp;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359BDE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00359BF7: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00359C08: ;
    ebp = MEM32(esp + 0x84);
    eax = MEM32(ebp);
    esi = ebx + ebx * 4;
    esi = esi << 2;
    edx = MEM32(esi + eax + 4);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = esi + eax + 4;
    if (CMP_NE(edx, edi)) goto loc_00359C31; /* jne: not equal / not zero */

loc_00359C24: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00359C2E: ;
    esp = esp + 8;

loc_00359C31: ;
    edx = MEM32(ebp);
    esi = MEM32(esi + edx + 4);
    eax = MEM32(esi + 4);
    if (CMP_A(eax, 4)) goto loc_00359C65; /* ja: above (unsigned >) */

loc_00359C40: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x359DE4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00359C47u) goto loc_00359C47;
    if (_jt == 0x00359C4Du) goto loc_00359C4D;
    if (_jt == 0x00359C52u) goto loc_00359C52;
    if (_jt == 0x00359C58u) goto loc_00359C58;
    if (_jt == 0x00359C65u) goto loc_00359C65;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00359C47: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    goto loc_00359C5E;

loc_00359C4D: ;
    ecx = MEM32(esi + 0x1C);
    goto loc_00359C5D;

loc_00359C52: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    goto loc_00359C5E;

loc_00359C58: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);

loc_00359C5D: ;
    PUSH32(esp, ecx);

loc_00359C5E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00359C65: ;
    xmm3 = MEMF(0x648E80); /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm1 = (float)(int32_t)MEM32(esp + 0x98); /* cvtsi2ss */
    xmm5 = MEMF(esp + 0x90); /* movss */
    xmm6 = MEMF(esp + 0x94); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    SET_LO8(eax, MEM8(esp + 0xA0));
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x8C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)MEM32(esp + 0x9C); /* cvtsi2ss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0xA4); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64ABB0); /* mulss */
    POP32(esp, edi);
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    POP32(esp, esi);
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x48) = xmm4; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    POP32(esp, ebp);
    xmm1 = xmm1 + xmm2; /* addss */
    if (TEST_Z(LO8(eax), 2)) { sub_00359D5F(); return; } /* je: equal / zero */

loc_00359D45: ;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00359D77(); return; /* tail jmp 0x00359D77 */

}

/**
 * sub_00359E10
 * Original: 0x00359E10 - 0x00359F10 (256 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359E10: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00359E4B; /* jne: not equal / not zero */

loc_00359E23: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x48)) goto loc_00359E4B; /* je: equal / zero */

loc_00359E2C: ;
    if (CMP_EQ(eax, 0x3C)) goto loc_00359E4B; /* je: equal / zero */

loc_00359E31: ;
    if (CMP_L(eax, ebx)) { sub_00359F10(); return; } /* jl: less (signed <) */

loc_00359E39: ;
    if (CMP_GE(eax, 0x55)) { sub_00359F10(); return; } /* jge: greater or equal (signed >=) */

loc_00359E42: ;
    if (CMP_L(eax, 0x4B)) { sub_00359F10(); return; } /* jl: less (signed <) */

loc_00359E4B: ;
    eax = MEM32(eax * 4 + 0x69CF90);
    if (CMP_EQ(eax, ebx)) { sub_00359F10(); return; } /* je: equal / zero */

loc_00359E5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x10);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00359E6B: ;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x10;
    MEM32(esp + 4) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00359E8E: ;
    edi = edi;

loc_00359E90: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_00359EAC; /* jl: less (signed <) */

loc_00359E9E: ;
    if (CMP_G(eax, 0x3E5)) goto loc_00359EAC; /* jg: greater (signed >) */

loc_00359EA5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00359EAA: ;
    goto loc_00359E90;

loc_00359EAC: ;
    if (CMP_EQ(MEM32(ecx + 4), ebx)) goto loc_00359EC4; /* je: equal / zero */

loc_00359EB1: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84B268) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_00359EEA; /* jne: not equal / not zero */

loc_00359EBF: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_00359EC4: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_00359ED2; /* je: equal / zero */

loc_00359ECE: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_00359ED2: ;
    eax = MEM32(eax);
    ecx = esp + 4;
    MEM32(0x84B268) = eax;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00359EE2: ;
    ecx = MEM32(0x84B264);
    g_seh_ebp = ebp; sub_00359F1E(); return; /* tail jmp 0x00359F1E */

loc_00359EEA: ;
    eax = MEM32(eax + 0x44);
    ecx = esp + 4;
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;
    MEM32(0x84B264) = ebx;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00359F08: ;
    ecx = MEM32(0x84B264);
    g_seh_ebp = ebp; sub_00359F1E(); return; /* tail jmp 0x00359F1E */

}

/**
 * sub_00359F80
 * Original: 0x00359F80 - 0x00359FF0 (112 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00359F80: ;
    ecx = MEM32(0x84B268);
    if (TEST_Z(ecx, ecx)) goto loc_00359FC5; /* je: equal / zero */

loc_00359F8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00359F98: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00359FC3; /* je: equal / zero */

loc_00359F9E: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00359FA9; /* je: equal / zero */

loc_00359FA5: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00359FA9: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00359FC3; /* jne: not equal / not zero */

loc_00359FB0: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00359FB9: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00359FC3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00359FC5: ;
    eax = MEM32(0x84B284);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84B264) = 0;
    if (TEST_Z(eax, eax)) goto loc_00359FEF; /* je: equal / zero */

loc_00359FD8: ;
    PUSH32(esp, 0x84B284);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00359FE2: ;
    esp = esp + 4;
    MEM32(0x84B284) = 0;

loc_00359FEF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A090
 * Original: 0x0035A090 - 0x0035A149 (185 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A090: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B264);
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0035A143; /* je: equal / zero */

loc_0035A0AE: ;
    (void)0; /* test LO16(ebp), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0x81;
    if (TEST_S(LO16(ebp), LO16(ebp))) goto loc_0035A0E6; /* jl: less (signed <) */

loc_0035A0BA: ;
    if (CMP_GE(LO16(ebp), MEM16(ebx + 4))) goto loc_0035A0E6; /* jge: greater or equal (signed >=) */

loc_0035A0C0: ;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x1C);
    eax = LO16(ebp);
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_0035A0D4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0035A0E6; /* je: equal / zero */

loc_0035A0DB: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x14) = ebp;

loc_0035A0E6: ;
    edi = 0; /* xor self */
    if (CMP_LE(MEM16(ebx + 4), LO16(edi))) goto loc_0035A13C; /* jle: less or equal (signed <=) */

loc_0035A0EE: ;
    ebp = LO16(ebp);

loc_0035A0F1: ;
    if (CMP_EQ(edi, ebp)) goto loc_0035A133; /* je: equal / zero */

loc_0035A0F5: ;
    ecx = MEM32(ebx);
    esi = MEM32(ecx + edi * 4);
    SET_LO8(edx, MEM8(esp + 0x13));
    if (CMP_LE(MEM8(esi + 0x28), LO8(edx))) goto loc_0035A133; /* jle: less or equal (signed <=) */

loc_0035A103: ;
    SET_LO8(ecx, MEM8(esi));
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x24);
    if (TEST_Z(ecx, eax)) goto loc_0035A133; /* je: equal / zero */

loc_0035A115: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_0035A121: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0035A133; /* je: equal / zero */

loc_0035A128: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x14) = edi;

loc_0035A133: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0035A0F1; /* jl: less (signed <) */

loc_0035A13C: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);

loc_0035A143: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A150
 * Original: 0x0035A150 - 0x0035A202 (178 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A150: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 > MEMF(ebp))) { sub_0035A202(); return; } /* ja: above (unsigned >) */

loc_0035A167: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x22);
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_0035A202(); return; } /* ja: above (unsigned >) */

loc_0035A17D: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x20);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ebp + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(ebp + 8))) { sub_0035A202(); return; } /* ja: above (unsigned >) */

loc_0035A18B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    xmm1 = MEMF(ebp + 8); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_0035A202(); return; } /* ja: above (unsigned >) */

loc_0035A19D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = esi;
    PUSH32(esp, 0); sub_0035A5C0(); /* call 0x0035A5C0 */

loc_0035A1A9: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0035A202(); return; } /* je: equal / zero */

loc_0035A1B0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = esi + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0035A210(); /* call 0x0035A210 */

loc_0035A1BF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0035A1C9; /* jne: not equal / not zero */

loc_0035A1C6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035A1C9: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(MEM16(esi + 0x10), LO16(ebx))) goto loc_0035A1F3; /* jle: less or equal (signed <=) */

loc_0035A1D2: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edi = eax + ebx * 8;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0035A210(); /* call 0x0035A210 */

loc_0035A1E3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0035A1FC; /* jne: not equal / not zero */

loc_0035A1EA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_0035A1D2; /* jl: less (signed <) */

loc_0035A1F3: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035A1FC: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035A210
 * Original: 0x0035A210 - 0x0035A229 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A210: ;
    SET_LO16(eax, MEM16(edi + 4));
    esp = esp - 0x1C;
    (void)0; /* cmp LO16(eax), 3 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    if (CMP_GE(LO16(eax), 3)) { sub_0035A229(); return; } /* jge: greater or equal (signed >=) */

loc_0035A222: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A360
 * Original: 0x0035A360 - 0x0035A3BE (94 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A360(void)
{
    float xmm0, xmm1;

loc_0035A360: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = esp + 8;
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    eax = ebx;
    MEMF(ebx) = xmm1; /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0035A3B9: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A3C0
 * Original: 0x0035A3C0 - 0x0035A3E5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A3C0: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x10;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) { sub_0035A3E5(); return; } /* jne: not equal / not zero */

loc_0035A3D2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    ecx = MEM32(esp + 0x24);
    eax++;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_0035A3F1(); return; /* tail jmp 0x0035A3F1 */

}

/**
 * sub_0035A5C0
 * Original: 0x0035A5C0 - 0x0035A65A (154 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A5C0: ;
    esp = esp - 0x10;
    SET_LO8(ecx, MEM8(edx + 0x18));
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x1E);
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x20);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x22);
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x24);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x26);
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(edx + 0x1A));
    eax = 1;
    eax = eax << LO8(ecx);
    MEMF(esp + 0xC) = xmm5; /* movss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm5 = xmm5 * MEMF(0x648E7C); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 - xmm6; /* subss */
    xmm2 = xmm7; /* movaps */
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm3 / xmm0; /* divss */
    xmm0 = MEMF(ebp); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm1 = MEMF(ebp + 8); /* movss */
    if ((xmm4 <= xmm0)) { sub_0035A65A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0035A655: ;
    xmm0 = xmm4; /* movaps */
    g_seh_ebp = ebp; sub_0035A662(); return; /* tail jmp 0x0035A662 */

}

/**
 * sub_0035A770
 * Original: 0x0035A770 - 0x0035A7A0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0035A770: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0035A7A0(); return; } /* je: equal / zero */

loc_0035A775: ;
    ecx = MEM32(0x84B264);
    edx = MEM32(ecx);
    ecx = MEM32(edx + eax * 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035A79D; /* jle: less or equal (signed <=) */

loc_0035A78A: ;
    ecx = MEM32(ecx + 4);
    ecx = ecx + 4;

loc_0035A790: ;
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 >= MEMF(ecx))) { sub_0035A7A0(); return; } /* jae: above or equal (unsigned >=) */

loc_0035A795: ;
    eax++;
    ecx = ecx + 0x10;
    if (CMP_L(eax, edx)) goto loc_0035A790; /* jl: less (signed <) */

loc_0035A79D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0035A7B0
 * Original: 0x0035A7B0 - 0x0035A7D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A7B0: ;
    eax = MEM32(edx);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi << 4;
    esi = esi + eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) { sub_0035A7D5(); return; } /* jne: not equal / not zero */

loc_0035A7C8: ;
    edi = (uint32_t)(int32_t)SMEM16(edx + 4);
    edi = edi << 4;
    ebp = edi + eax + -16;
    g_seh_ebp = ebp; sub_0035A7D8(); return; /* tail jmp 0x0035A7D8 */

}

/**
 * sub_0035A850
 * Original: 0x0035A850 - 0x0035A9E2 (402 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A850: ;
    edx = MEM32(0x84B264);
    esp = esp - 0xC;
    if (TEST_Z(edx, edx)) goto loc_0035A9DE; /* je: equal / zero */

loc_0035A861: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x84B278) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0035A8A7; /* jle: less or equal (signed <=) */

loc_0035A874: ;
    esi = MEM32(edx);
    edi = eax;

loc_0035A878: ;
    eax = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = ecx + edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_0035A89B; /* jle: less or equal (signed <=) */

loc_0035A888: ;
    eax = MEM32(eax + 0xC);
    eax = eax + 4;
    edi = edi;

loc_0035A890: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax);
    ecx = ecx + ebx;
    eax = eax + 8;
    edx--;
    if ((edx != 0)) goto loc_0035A890; /* jne: not equal / not zero */

loc_0035A89B: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0035A878; /* jne: not equal / not zero */

loc_0035A8A1: ;
    MEM32(0x84B278) = ecx;

loc_0035A8A7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x445);
    eax = ecx + ecx * 2;
    eax = eax << 2;
    PUSH32(esp, 0x63BD60);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0035A8C0: ;
    ebp = MEM32(0x84B264);
    edx = 0; /* xor self */
    esp = esp + 0x10;
    MEM32(0x84B274) = eax;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 4), LO16(edx) - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(MEM16(ebp + 4), LO16(edx))) goto loc_0035A9DA; /* jle: less or equal (signed <=) */

loc_0035A8E0: ;
    ecx = MEM32(ebp);
    esi = MEM32(ecx + edx * 4);
    esi = esi + 4;
    ebx = 0; /* xor self */
    if (CMP_LE(MEM16(esi + 4), LO16(ebx))) goto loc_0035A93F; /* jle: less or equal (signed <=) */

loc_0035A8F1: ;
    ebp = edi + edi * 2;
    MEM32(esp + 0x14) = ebx;
    ebp = ebp << 2;
    goto loc_0035A900;

    /* nop */

loc_0035A900: ;
    edx = MEM32(0x84B274);
    eax = edx + ebp;
    PUSH32(esp, eax);
    ecx = ebx;
    edx = esi;
    PUSH32(esp, 0); sub_0035A7B0(); /* call 0x0035A7B0 */

loc_0035A913: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    MEM16(ecx + eax + 0xE) = LO16(edi);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    esp = esp + 4;
    edi++;
    ebp = ebp + 0xC;
    ebx++;
    eax = eax + 0x10;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(ebx, edx)) goto loc_0035A900; /* jl: less (signed <) */

loc_0035A935: ;
    edx = MEM32(esp + 0x10);
    ebp = MEM32(0x84B264);

loc_0035A93F: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + edx * 4);
    eax = eax + edx * 4;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x10), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(MEM16(esi + 0x10), LO16(ecx))) goto loc_0035A9C9; /* jle: less or equal (signed <=) */

loc_0035A954: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 0xC);
    esi = eax + ecx * 8;
    ebx = 0; /* xor self */
    if (CMP_LE(MEM16(esi + 4), LO16(ebx))) goto loc_0035A9B3; /* jle: less or equal (signed <=) */

loc_0035A964: ;
    ebp = edi + edi * 2;
    MEM32(esp + 0x14) = ebx;
    ebp = ebp << 2;
    edi = edi;

loc_0035A970: ;
    ecx = MEM32(0x84B274);
    edx = ecx + ebp;
    PUSH32(esp, edx);
    ecx = ebx;
    edx = esi;
    PUSH32(esp, 0); sub_0035A7B0(); /* call 0x0035A7B0 */

loc_0035A983: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    MEM16(ecx + eax + 0xE) = LO16(edi);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    esp = esp + 4;
    edi++;
    ebp = ebp + 0xC;
    ebx++;
    eax = eax + 0x10;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(ebx, edx)) goto loc_0035A970; /* jl: less (signed <) */

loc_0035A9A5: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ebp = MEM32(0x84B264);

loc_0035A9B3: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + edx * 4);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    eax = eax + edx * 4;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, esi)) goto loc_0035A954; /* jl: less (signed <) */

loc_0035A9C9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    edx++;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(edx, ecx)) goto loc_0035A8E0; /* jl: less (signed <) */

loc_0035A9DA: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0035A9DE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A9F0
 * Original: 0x0035A9F0 - 0x0035AB0E (286 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A9F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0035A9F0: ;
    esp = esp - 0x28;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    edi = edx;
    eax = MEM32(edi);
    edx = ebx;
    edx = edx << 4;
    esi = edx + eax;
    edx = MEM32(0x84B274);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (TEST_NZ(edx, edx)) { sub_0035AB0E(); return; } /* jne: not equal / not zero */

loc_0035AA1A: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0035AA2B; /* jne: not equal / not zero */

loc_0035AA1E: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    ecx = ecx << 4;
    ecx = ecx + eax + -16;
    goto loc_0035AA2E;

loc_0035AA2B: ;
    ecx = esi + -16;

loc_0035AA2E: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx--;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(ebx, edx)) goto loc_0035AA3C; /* je: equal / zero */

loc_0035AA39: ;
    edi = esi + 0x10;

loc_0035AA3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0035A360(); /* call 0x0035A360 */

loc_0035AA47: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0035A360(); /* call 0x0035A360 */

loc_0035AA52: ;
    eax = esp + 0x2C;
    ecx = esp + 0x38;
    edx = eax;
    esp = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0035AA9D: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    eax = ebx;
    ecx = ebx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ebx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0035AB60
 * Original: 0x0035AB60 - 0x0035AFD7 (1143 bytes, 313 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035AB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035AB60: ;
    esp = esp - 0x50;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 8) = 0;
    if (TEST_S(LO16(eax), LO16(eax))) { sub_0035AFD7(); return; } /* jl: less (signed <) */

loc_0035AB74: ;
    ecx = MEM32(0x84B264);
    if (CMP_GE(LO16(eax), MEM16(ecx + 4))) { sub_0035AFD7(); return; } /* jge: greater or equal (signed >=) */

loc_0035AB84: ;
    ecx = MEM32(ecx);
    eax = SX16(LO16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + eax * 4);
    (void)0; /* cmp MEM8(esp + 0x6C), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(MEM8(esp + 0x6C), 1)) goto loc_0035ABCB; /* jne: not equal / not zero */

loc_0035AB9A: ;
    xmm0 = MEMF(esp + 0x68); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0035ABCB; /* jp: parity */

loc_0035ABAD: ;
    ebx = MEM32(esp + 0x64);
    esi = MEM32(esp + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_0035ABC1: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_0035ABCB: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(esp + 0x58) = edx;
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x34) = eax;
    eax = 0; /* xor self */
    ebx++;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0035AF97; /* jle: less or equal (signed <=) */

loc_0035AC11: ;
    esi = MEM32(esp + 0x6C);
    goto loc_0035AC20;

loc_0035AC17: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_0035AC20: ;
    if (TEST_NZ(eax, eax)) goto loc_0035AC29; /* jne: not equal / not zero */

loc_0035AC24: ;
    ebp = ebp + 4;
    goto loc_0035AC30;

loc_0035AC29: ;
    ecx = MEM32(ebp + 0xC);
    ebp = ecx + eax * 8 + -8;

loc_0035AC30: ;
    if (CMP_LE(MEM16(ebp + 4), 0)) goto loc_0035AC49; /* jle: less or equal (signed <=) */

loc_0035AC37: ;
    edx = esp + 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = ebp;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_0035AC46: ;
    esp = esp + 8;

loc_0035AC49: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0035AF82; /* jle: less or equal (signed <=) */

loc_0035AC57: ;
    if (CMP_EQ(MEM16(esp + 0x70), 0xFFFFFFFFu)) goto loc_0035AC84; /* je: equal / zero */

loc_0035AC5F: ;
    edx = MEM32(ebp);
    eax = edi;
    eax = eax << 4;
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xC);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0035AC84; /* je: equal / zero */

loc_0035AC71: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x70);
    eax = eax & 0xFF;
    eax--;
    if (CMP_EQ(eax, edx)) goto loc_0035AF5D; /* je: equal / zero */

loc_0035AC84: ;
    ecx--;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    edx = ebp;
    PUSH32(esp, esi);
    if (CMP_NE(edi, ecx)) goto loc_0035AC95; /* jne: not equal / not zero */

loc_0035AC8C: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    goto loc_0035AC9D;

loc_0035AC95: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    eax = edi + 1;

loc_0035AC9D: ;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_0035ACA2: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm6 = MEMF(esp + 0x5C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm1 = xmm1 * xmm4; /* mulss */
    esp = esp + 8;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    if ((xmm0 < xmm7)) goto loc_0035AF5D; /* jb: below (unsigned <) */

loc_0035AD35: ;
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 <= xmm1)) goto loc_0035AF5D; /* jbe: below or equal (unsigned <=) */

loc_0035AD3E: ;
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x20)); /* sqrtss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x24); /* divss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x48); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x50); /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x3C); /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x44); /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    /* comiss xmm2, MEMF(0x649354) - sets EFLAGS */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 + xmm7; /* addss */
    if ((xmm2 < MEMF(0x649354))) goto loc_0035AF5D; /* jb: below (unsigned <) */

loc_0035AE1A: ;
    xmm6 = MEMF(0x648D1C); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 <= xmm2)) goto loc_0035AF5D; /* jbe: below or equal (unsigned <=) */

loc_0035AE32: ;
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_0035AE3C; /* jbe: below or equal (unsigned <=) */

loc_0035AE37: ;
    xmm2 = xmm6; /* movaps */
    goto loc_0035AE48;

loc_0035AE3C: ;
    xmm5 = xmm5 - xmm6; /* subss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 <= xmm5)) goto loc_0035AE48; /* jbe: below or equal (unsigned <=) */

loc_0035AE45: ;
    xmm2 = xmm5; /* movaps */

loc_0035AE48: ;
    if (CMP_EQ(MEM8(esp + 0x74), 1)) goto loc_0035AFCA; /* je: equal / zero */

loc_0035AE53: ;
    xmm6 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x48); /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, MEMF(esp + 0x2C) - sets EFLAGS */
    xmm5 = xmm5 + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    if ((xmm2 < MEMF(esp + 0x2C))) goto loc_0035AED5; /* jb: below (unsigned <) */

loc_0035AE96: ;
    goto loc_0035AEA0;

    /* nop */
    /* nop */

loc_0035AEA0: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x54); /* addss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x5C) = xmm7; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x14); /* addss */
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 >= xmm7)) goto loc_0035AEA0; /* jae: above or equal (unsigned >=) */

loc_0035AED5: ;
    xmm7 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_0035AF36; /* jb: below (unsigned <) */

loc_0035AEF5: ;
    goto loc_0035AF00;

loc_0035AEF7: ;
    xmm5 = MEMF(esp + 0x38); /* movss */
    /* nop */

loc_0035AF00: ;
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    xmm5 = xmm7; /* movaps */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm5 = xmm5 + MEMF(esp + 0x14); /* addss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 >= xmm5)) goto loc_0035AEF7; /* jae: above or equal (unsigned >=) */

loc_0035AF36: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);
    edi = edi | 0xFFFFFFFFu;
    eax++;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_G(eax, 5)) goto loc_0035AFB8; /* jg: greater (signed >) */

loc_0035AF4B: ;
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = ebp;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_0035AF5A: ;
    esp = esp + 8;

loc_0035AF5D: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0035AC57; /* jl: less (signed <) */

loc_0035AF82: ;
    eax = MEM32(esp + 0x10);
    eax++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ebx)) goto loc_0035AC17; /* jl: less (signed <) */

loc_0035AF93: ;
    ecx = MEM32(esp + 0x68);

loc_0035AF97: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    POP32(esp, ebp);
    MEMF(ecx + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_0035AFB8: ;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x68);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0035AFCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0035AFE0
 * Original: 0x0035AFE0 - 0x0035AFF5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035AFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035AFE0: ;
    SET_LO8(eax, MEM8(0x80189A));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(LO8(eax), 0xFF)) { sub_0035AFF5(); return; } /* jne: not equal / not zero */

loc_0035AFEE: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035B0D0
 * Original: 0x0035B0D0 - 0x0035B0DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035B0D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035B0D0: ;
    SET_LO8(eax, MEM8(0x80189B));
    if (CMP_NE(LO8(eax), 0xFF)) { sub_0035B0DC(); return; } /* jne: not equal / not zero */

loc_0035B0D9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0035B0F0
 * Original: 0x0035B0F0 - 0x0035B457 (871 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035B0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035B0F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    esp = esp - 0x38;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(0x80189B));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0035B452; /* je: equal / zero */

loc_0035B11B: ;
    edx = MEM32(0x84B264);
    ecx = SX8(LO8(eax));
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4);
    ecx = esp + 0x28;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x48)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x1C))) goto loc_0035B451; /* ja: above (unsigned >) */

loc_0035B19C: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    SET_LO8(ecx, MEM8(esi + 0x1A));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x20);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1C);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x22);
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esi + 0x18));
    edx = 1;
    xmm0 = xmm0 / xmm2; /* divss */
    edx = edx << LO8(ecx);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0035B1F9; /* jbe: below or equal (unsigned <=) */

loc_0035B1F6: ;
    xmm2 = xmm0; /* movaps */

loc_0035B1F9: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x48)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax << 1;
    if (CMP_GE(eax, 1)) goto loc_0035B243; /* jge: greater or equal (signed >=) */

loc_0035B23E: ;
    eax = 1;

loc_0035B243: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (TEST_S(eax, eax)) goto loc_0035B451; /* jl: less (signed <) */

loc_0035B267: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x24) = xmm0; /* movss */
    ebp = eax + 1;
    goto loc_0035B290;

loc_0035B281: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    goto loc_0035B290;

    /* nop */

loc_0035B290: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    eax = esp + 0x20;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esi;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0035A5C0(); /* call 0x0035A5C0 */

loc_0035B2DF: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x5C); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    xmm0 = xmm0 + xmm3; /* addss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if ((xmm0 <= xmm2)) goto loc_0035B3A3; /* jbe: below or equal (unsigned <=) */

loc_0035B319: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_0035B34E; /* jbe: below or equal (unsigned <=) */

loc_0035B32C: ;
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) goto loc_0035B33A; /* ja: above (unsigned >) */

loc_0035B337: ;
    xmm1 = xmm2; /* movaps */

loc_0035B33A: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 4); /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    goto loc_0035B357;

loc_0035B34E: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm1; /* movss */

loc_0035B357: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0035B437; /* jbe: below or equal (unsigned <=) */

loc_0035B373: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(esp + 0xC); /* movss */
    eax = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    goto loc_0035B437;

loc_0035B3A3: ;
    if (CMP_NE(MEM32(esi + 0x30), 2)) goto loc_0035B437; /* jne: not equal / not zero */

loc_0035B3AD: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0035B437; /* jbe: below or equal (unsigned <=) */

loc_0035B3B6: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0035B3EB; /* jbe: below or equal (unsigned <=) */

loc_0035B3C9: ;
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0035B3D7; /* ja: above (unsigned >) */

loc_0035B3D4: ;
    xmm0 = xmm2; /* movaps */

loc_0035B3D7: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 4); /* subss */
    xmm2 = xmm2 / xmm0; /* divss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    goto loc_0035B3F4;

loc_0035B3EB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm0; /* movss */

loc_0035B3F4: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0035B437; /* jbe: below or equal (unsigned <=) */

loc_0035B40C: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(esp + 0xC); /* movss */
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm1; /* movss */

loc_0035B437: ;
    ebp--;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((ebp != 0)) goto loc_0035B281; /* jne: not equal / not zero */

loc_0035B450: ;
    POP32(esp, ebp);

loc_0035B451: ;
    POP32(esp, esi);

loc_0035B452: ;
    POP32(esp, edi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0035B460
 * Original: 0x0035B460 - 0x0035B49F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035B460(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0035B460: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x80189B));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0035B49D; /* je: equal / zero */

loc_0035B477: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = SX8(LO8(eax));
    eax = MEM32(0x84B264);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, 0); sub_0035A5C0(); /* call 0x0035A5C0 */

loc_0035B494: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 0xC;

loc_0035B49D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035B4A0
 * Original: 0x0035B4A0 - 0x0035B994 (1268 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035B4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035B4A0: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    SET_LO16(edi, 0); /* xor self */
    SET_LO16(esi, 0); /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM16(0x801890) = LO16(edi);
    MEM16(0x80188C) = LO16(esi);
    if (CMP_LE(eax, ebx)) goto loc_0035B4F7; /* jle: less or equal (signed <=) */

loc_0035B4C8: ;
    edx = MEM32(0x84B0E0);
    edx = edx + 0x33;

loc_0035B4D1: ;
    SET_LO8(ecx, MEM8(edx));
    if (CMP_NE(LO8(ecx), 0x32)) goto loc_0035B4DC; /* jne: not equal / not zero */

loc_0035B4D8: ;
    SET_LO16(edi, LO16(edi) + 1);
    goto loc_0035B4E3;

loc_0035B4DC: ;
    if (CMP_NE(LO8(ecx), 0x33)) goto loc_0035B4E3; /* jne: not equal / not zero */

loc_0035B4E1: ;
    SET_LO16(esi, LO16(esi) + 1);

loc_0035B4E3: ;
    edx = edx + 0x38;
    eax--;
    if ((eax != 0)) goto loc_0035B4D1; /* jne: not equal / not zero */

loc_0035B4E9: ;
    MEM16(0x80188C) = LO16(esi);
    MEM16(0x801890) = LO16(edi);

loc_0035B4F7: ;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_0035B508; /* jne: not equal / not zero */

loc_0035B4FF: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0035B570; /* jne: not equal / not zero */

loc_0035B508: ;
    eax = SX16(LO16(esi));
    ecx = SX16(LO16(edi));
    edx = eax + ecx + 0x80;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x749);
    PUSH32(esp, 0x63BD60);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0035B52A: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x801890);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + eax;
    MEM32(0x84B284) = eax;
    MEM32(0x84B288) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x80188C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    esp = esp + 0x10;
    MEM32(0x84B280) = eax;
    eax = eax + 0x700;
    MEM32(0x84B28C) = ecx;
    MEM32(0x84B27C) = eax;
    MEM8(0x801893) = LO8(ebx);
    MEM8(0x801892) = LO8(ebx);

loc_0035B570: ;
    edi = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x64908C); /* movss */
    SET_LO16(esi, 0); /* xor self */
    SET_LO16(edx, 0); /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM16(0x801890) = LO16(esi);
    MEM16(0x80188C) = LO16(edx);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(edi, 4)) goto loc_0035B8AD; /* jl: less (signed <) */

loc_0035B5BD: ;
    ecx = edi + -4;
    ecx = ecx >> 2;
    ecx++;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx << 2;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_0035B5D0: ;
    ecx = MEM32(0x84B0E0);
    SET_LO8(ecx, MEM8(eax + ecx + 0x33));
    if (CMP_NE(LO8(ecx), 0x32)) goto loc_0035B61E; /* jne: not equal / not zero */

loc_0035B5DF: ;
    edi = MEM32(0x84B288);
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0x35));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(ecx + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = edi + eax;
    SET_LO16(esi, LO16(esi) + 1);
    goto loc_0035B660;

loc_0035B61E: ;
    if (CMP_NE(LO8(ecx), 0x33)) goto loc_0035B67F; /* jne: not equal / not zero */

loc_0035B623: ;
    edi = MEM32(0x84B28C);
    ecx = SX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0x35));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    MEMF(ecx + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = edi + eax;
    SET_LO16(edx, LO16(edx) + 1);

loc_0035B660: ;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(0x84B0E0);
    edi = MEM32(eax + edi + 0xC);
    MEM32(ecx + 0xC) = edi;

loc_0035B67F: ;
    ecx = MEM32(0x84B0E0);
    SET_LO8(ecx, MEM8(eax + ecx + 0x6B));
    if (CMP_NE(LO8(ecx), 0x32)) goto loc_0035B6C0; /* jne: not equal / not zero */

loc_0035B68E: ;
    edi = MEM32(0x84B288);
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0x6D));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    SET_LO16(esi, LO16(esi) + 1);
    goto loc_0035B6F5;

loc_0035B6C0: ;
    if (CMP_NE(LO8(ecx), 0x33)) goto loc_0035B723; /* jne: not equal / not zero */

loc_0035B6C5: ;
    edi = MEM32(0x84B28C);
    ecx = SX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0x6D));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    SET_LO16(edx, LO16(edx) + 1);

loc_0035B6F5: ;
    MEMF(ecx + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = eax + edi + 0x38;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(0x84B0E0);
    edi = MEM32(eax + edi + 0x44);
    MEM32(ecx + 0xC) = edi;

loc_0035B723: ;
    ecx = MEM32(0x84B0E0);
    SET_LO8(ecx, MEM8(eax + ecx + 0xA3));
    if (CMP_NE(LO8(ecx), 0x32)) goto loc_0035B76A; /* jne: not equal / not zero */

loc_0035B735: ;
    edi = MEM32(0x84B288);
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0xA5));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    SET_LO16(esi, LO16(esi) + 1);
    goto loc_0035B7A2;

loc_0035B76A: ;
    if (CMP_NE(LO8(ecx), 0x33)) goto loc_0035B7D0; /* jne: not equal / not zero */

loc_0035B76F: ;
    edi = MEM32(0x84B28C);
    ecx = SX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0xA5));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    SET_LO16(edx, LO16(edx) + 1);

loc_0035B7A2: ;
    MEMF(ecx + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = eax + edi + 0x70;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(0x84B0E0);
    edi = MEM32(eax + edi + 0x7C);
    MEM32(ecx + 0xC) = edi;

loc_0035B7D0: ;
    ecx = MEM32(0x84B0E0);
    SET_LO8(ecx, MEM8(eax + ecx + 0xDB));
    if (CMP_NE(LO8(ecx), 0x32)) goto loc_0035B817; /* jne: not equal / not zero */

loc_0035B7E2: ;
    edi = MEM32(0x84B288);
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0xDD));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    SET_LO16(esi, LO16(esi) + 1);
    goto loc_0035B84F;

loc_0035B817: ;
    if (CMP_NE(LO8(ecx), 0x33)) goto loc_0035B883; /* jne: not equal / not zero */

loc_0035B81C: ;
    edi = MEM32(0x84B28C);
    ecx = SX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + edi;
    MEM8(ecx + 0x18) = 0xFF;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(eax + edi + 0xDD));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    SET_LO16(edx, LO16(edx) + 1);

loc_0035B84F: ;
    MEMF(ecx + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = eax + edi + 0xA8;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(0x84B0E0);
    edi = MEM32(eax + edi + 0xB4);
    MEM32(ecx + 0xC) = edi;

loc_0035B883: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0xE0;
    ecx--;
    MEM32(esp + 0x10) = ecx;
    if ((ecx != 0)) goto loc_0035B5D0; /* jne: not equal / not zero */

loc_0035B897: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    MEM16(0x80188C) = LO16(edx);
    MEM16(0x801890) = LO16(esi);

loc_0035B8AD: ;
    if (CMP_GE(eax, edi)) goto loc_0035B98C; /* jge: greater or equal (signed >=) */

loc_0035B8B5: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edi = edi - eax;
    MEM32(esp + 0x10) = edi;

loc_0035B8C0: ;
    eax = MEM32(0x84B0E0);
    SET_LO8(eax, MEM8(ecx + eax + 0x33));
    if (CMP_NE(LO8(eax), 0x32)) goto loc_0035B90C; /* jne: not equal / not zero */

loc_0035B8CD: ;
    edi = MEM32(0x84B288);
    eax = SX16(LO16(esi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edi;
    MEM8(eax + 0x18) = 0xFF;
    MEMF(eax + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(ecx + edi + 0x35));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(eax + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = edi + ecx;
    SET_LO16(esi, LO16(esi) + 1);
    goto loc_0035B94D;

loc_0035B90C: ;
    if (CMP_NE(LO8(eax), 0x33)) goto loc_0035B96C; /* jne: not equal / not zero */

loc_0035B910: ;
    edi = MEM32(0x84B28C);
    eax = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edi;
    MEM8(eax + 0x18) = 0xFF;
    MEMF(eax + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84B0E0);
    edi = ZX8(MEM8(ecx + edi + 0x35));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    MEMF(eax + 0x14) = xmm5; /* movss */
    edi = MEM32(0x84B0E0);
    edi = edi + ecx;
    SET_LO16(edx, LO16(edx) + 1);

loc_0035B94D: ;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(0x84B0E0);
    edi = MEM32(ecx + edi + 0xC);
    MEM32(eax + 0xC) = edi;

loc_0035B96C: ;
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0x38;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0035B8C0; /* jne: not equal / not zero */

loc_0035B97E: ;
    MEM16(0x80188C) = LO16(edx);
    MEM16(0x801890) = LO16(esi);

loc_0035B98C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0035B9A0
 * Original: 0x0035B9A0 - 0x0035BA07 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035B9A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0035B9A0: ;
    eax = MEM32(0x84B284);
    if (TEST_Z(eax, eax)) goto loc_0035BA06; /* je: equal / zero */

loc_0035B9A9: ;
    if (CMP_GE(MEM8(0x801892), 0x40)) goto loc_0035BA06; /* jge: greater or equal (signed >=) */

loc_0035B9B2: ;
    SET_LO8(edx, MEM8(0x801893));
    eax = SX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(0x84B27C);
    eax = eax + esi;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(edx, LO8(edx) + 1);
    POP32(esp, edi);
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(0x801893) = LO8(edx);
    POP32(esp, esi);

loc_0035BA06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035BA10
 * Original: 0x0035BA10 - 0x0035BA2A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035BA10(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035BA10: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x801892);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B288);
    PUSH32(esp, esi);
    esi = MEM32(0x84B280);
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_0035BA30(); return; /* tail jmp 0x0035BA30 */

}

/**
 * sub_0035BB10
 * Original: 0x0035BB10 - 0x0035BBBE (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035BB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035BB10: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    xmm0 = MEMF(ebp + 4); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = esp + 0x34;
    MEM32(esp + 0x18) = edi;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x6C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x68);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x34;
    MEM32(esp + 0x6C) = ecx;
    edx = MEM32(esp + 0x6C);
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
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0035BBBE(); return; } /* jp: parity */

loc_0035BBA1: ;
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x78);
    MEM32(eax) = edx;
    ecx = MEM32(ebp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0035C040
 * Original: 0x0035C040 - 0x0035C152 (274 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035C040: ;
    esp = esp - 0xF8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x104);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x104);
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x10C);
    MEM32(esp + 0x38) = ecx;
    edx = ebp;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = esp + 0x14;
    ecx = esp + 0x34;
    edx = esp + 0x40;
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0x8C) = edx;
    ecx = MEM32(esp + 0xAC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xA4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x8C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x40;
    MEM32(esp + 0x8C) = eax;
    edx = MEM32(esp + 0x8C);
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
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x90) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x90))) { sub_0035C152(); return; } /* jbe: below or equal (unsigned <=) */

loc_0035C146: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_0035CF40
 * Original: 0x0035CF40 - 0x0035CFB9 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CF40: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x1B;
    edi = 0x801A48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x801ABC) = eax;
    eax = 0x801EC0;
    POP32(esp, edi);
    /* nop */

loc_0035CF60: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0035CF6B; /* je: equal / zero */

loc_0035CF65: ;
    MEM32(eax) = 0;

loc_0035CF6B: ;
    eax = eax + 4;
    if (CMP_L(eax, 0x801F10)) goto loc_0035CF60; /* jl: less (signed <) */

loc_0035CF75: ;
    SET_LO8(eax, MEM8(0x84B295));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0035CFB3; /* jbe: below or equal (unsigned <=) */

loc_0035CF81: ;
    eax = ZX16(MEM16(esi * 2 + 0x84B298));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035DC90(); /* call 0x0035DC90 */

loc_0035CF8F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0035CFA7; /* je: equal / zero */

loc_0035CF96: ;
    eax = ZX16(MEM16(esi * 2 + 0x84B298));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0035D010(); /* call 0x0035D010 */

loc_0035CFA4: ;
    esp = esp + 4;

loc_0035CFA7: ;
    ecx = ZX8(MEM8(0x84B295));
    esi++;
    if (CMP_L(esi, ecx)) goto loc_0035CF81; /* jl: less (signed <) */

loc_0035CFB3: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0035DB60(); return; /* tail jmp 0x0035DB60 */

}

/**
 * sub_0035CFC0
 * Original: 0x0035CFC0 - 0x0035CFF9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CFC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035CFC0: ;
    edx = ZX16(MEM16(0x801900));
    ecx = MEM32(0x801904);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0035CFF4; /* jle: less or equal (signed <=) */

loc_0035CFD5: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    /* nop */

loc_0035CFE0: ;
    edi = MEM32(ecx);
    edi = edi & 0xFFFF03FFu;
    if (CMP_EQ(edi, esi)) { sub_0035CFF9(); return; } /* je: equal / zero */

loc_0035CFEC: ;
    ecx = MEM32(ecx + 0x34);
    eax++;
    if (CMP_L(eax, edx)) goto loc_0035CFE0; /* jl: less (signed <) */

loc_0035CFF4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D010
 * Original: 0x0035D010 - 0x0035D06F (95 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D010: ;
    edx = ZX16(MEM16(0x801900));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x801904);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0035D044; /* jle: less or equal (signed <=) */

loc_0035D02B: ;
    edi = SX16(LO16(eax));
    edi = edi;

loc_0035D030: ;
    ebx = MEM32(esi);
    ebx = ebx & 0xFFFF03FFu;
    if (CMP_EQ(ebx, edi)) goto loc_0035D046; /* je: equal / zero */

loc_0035D03C: ;
    esi = MEM32(esi + 0x34);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0035D030; /* jl: less (signed <) */

loc_0035D044: ;
    esi = 0; /* xor self */

loc_0035D046: ;
    if (TEST_NZ(ebp, ebp)) { sub_0035D06F(); return; } /* jne: not equal / not zero */

loc_0035D04A: ;
    edi = MEM32(0x84B290);
    ecx = eax;
    ecx = ecx & 7;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    SET_LO8(ecx, MEM8(ecx + edi));
    if (TEST_Z(LO8(ecx), LO8(edx))) { sub_0035D06F(); return; } /* je: equal / zero */

loc_0035D068: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D100
 * Original: 0x0035D100 - 0x0035D12E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035D100: ;
    edx = ZX16(MEM16(0x801900));
    eax = MEM32(0x801904);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0035D12A; /* jle: less or equal (signed <=) */

loc_0035D113: ;
    esi = SX16(LO16(esi));

loc_0035D116: ;
    edi = MEM32(eax);
    edi = edi & 0xFFFF03FFu;
    if (CMP_EQ(edi, esi)) goto loc_0035D12C; /* je: equal / zero */

loc_0035D122: ;
    eax = MEM32(eax + 0x34);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0035D116; /* jl: less (signed <) */

loc_0035D12A: ;
    eax = 0; /* xor self */

loc_0035D12C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D130
 * Original: 0x0035D130 - 0x0035D15B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D130: ;
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_0035D139: ;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00343600(); /* call 0x00343600 */

loc_0035D141: ;
    edi = 0; /* xor self */
    if (CMP_NE(MEM16(0x801900), 1)) { sub_0035D15B(); return; } /* jne: not equal / not zero */

loc_0035D14D: ;
    MEM32(0x801904) = edi;
    MEM32(0x801908) = edi;
    g_seh_ebp = ebp; sub_0035D198(); return; /* tail jmp 0x0035D198 */

}

/**
 * sub_0035D1D0
 * Original: 0x0035D1D0 - 0x0035D20C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035D1D0: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(0x801908);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(0x801900));
    esi = 0; /* xor self */
    edx = edx & 0xFFFF03FFu;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    ecx = ebx;
    if (CMP_NE(LO16(edi), LO16(esi))) { sub_0035D20C(); return; } /* jne: not equal / not zero */

loc_0035D1F1: ;
    MEM32(0x801904) = eax;
    MEM32(0x801908) = eax;
    POP32(esp, edi);
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = esi;
    MEM16(0x801900) = MEM16(0x801900) + 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D290
 * Original: 0x0035D290 - 0x0035D300 (112 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D290(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035D290: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    esi = SX16(LO16(eax));
    eax = MEM32(esi * 8 + 0x74D00C);
    ecx = MEM32(esi * 8 + 0x74D008);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0035D2B5: ;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x11;
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0035D2E4: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0035D300(); return; } /* jl: less (signed <) */

loc_0035D2F2: ;
    if (CMP_G(eax, 0x3E5)) { sub_0035D300(); return; } /* jg: greater (signed >) */

loc_0035D2F9: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0035D2FE: ;
    goto loc_0035D2E4;

}

/**
 * sub_0035D370
 * Original: 0x0035D370 - 0x0035D43F (207 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + ebp;
    eax = eax & 7;
    ecx = esi;
    ecx = ecx - eax;
    eax = MEM32(ebp + 0xC);
    ecx = ecx + 8;
    eax = eax + ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = eax + ebp;
    PUSH32(esp, edi);
    ecx = ecx & 7;
    edx = 8;
    edx = edx - ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + edx;
    PUSH32(esp, 0x285);
    MEM32(esp + 0x18) = eax;
    eax = eax + 0x400;
    PUSH32(esp, 0x63BD8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0035D3BC: ;
    edx = MEM32(esp + 0x28);
    ebx = eax;
    ecx = esi;
    eax = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0xC);
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx + ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x20);
    MEM32(ebx + 8) = ecx;
    esp = esp + 0x10;
    ecx = ebp;
    edi = 0x84D458;
    MEM32(ebx + 0x30) = 1;
    MEM32(ebx + 0x14) = edx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0035D40C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0035D437; /* je: equal / zero */

loc_0035D412: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0035D41D; /* je: equal / zero */

loc_0035D419: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0035D41D: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0035D437; /* jne: not equal / not zero */

loc_0035D424: ;
    ecx = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0035D42D: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0035D437: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D440
 * Original: 0x0035D440 - 0x0035D51D (221 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D440: ;
    SET_LO8(eax, MEM8(0x80190C));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x801904);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(0x801900));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D467; /* je: equal / zero */

loc_0035D45B: ;
    PUSH32(esp, 0); sub_0035DA10(); /* call 0x0035DA10 */

loc_0035D460: ;
    MEM8(0x80190C) = 0;

loc_0035D467: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0035D517; /* jle: less or equal (signed <=) */

loc_0035D46F: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, ebp);

loc_0035D475: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x34);
    edx = MEM32(0x84B290);
    edi = eax;
    edi = edi & 0xFFFF03FFu;
    MEM32(esp + 0x14) = ecx;
    ecx = edi;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp >> 3);
    if (TEST_Z(MEM8(edx + ebp), LO8(ebx))) goto loc_0035D4B8; /* je: equal / zero */

loc_0035D4A2: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0035D4D4; /* jne: not equal / not zero */

loc_0035D4AA: ;
    PUSH32(esp, 0); sub_0035D130(); /* call 0x0035D130 */

loc_0035D4AF: ;
    MEM8(edi + 0x801910) = 3;
    goto loc_0035D502;

loc_0035D4B8: ;
    ecx = MEM32(esp + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_0035D4D4; /* jne: not equal / not zero */

loc_0035D4C0: ;
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0035D4D4; /* js: sign (negative) */

loc_0035D4C4: ;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0035D502; /* je: equal / zero */

loc_0035D4C9: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, MEM32(0x7FA1F8))) goto loc_0035D502; /* je: equal / zero */

loc_0035D4D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D4DA: ;
    PUSH32(esp, eax);
    eax = 5;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D4E5: ;
    PUSH32(esp, 0); sub_0035D130(); /* call 0x0035D130 */

loc_0035D4EA: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + ebp));
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = edx & 3;
    MEM8(edi + 0x801910) = LO8(edx);

loc_0035D502: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0035D475; /* jne: not equal / not zero */

loc_0035D515: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0035D517: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0035D520
 * Original: 0x0035D520 - 0x0035D760 (576 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x801904);
    PUSH32(esp, 0); sub_0035FFB0(); /* call 0x0035FFB0 */

loc_0035D532: ;
    PUSH32(esp, 2);
    eax = 0x2000;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0035D540: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035D573; /* jne: not equal / not zero */

loc_0035D54C: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x32)) goto loc_0035D573; /* je: equal / zero */

loc_0035D555: ;
    PUSH32(esp, 2);
    eax = 0x2000;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0035D563: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0035D573; /* jne: not equal / not zero */

loc_0035D56A: ;
    if (CMP_EQ(ebp, 4)) goto loc_0035D75C; /* je: equal / zero */

loc_0035D573: ;
    PUSH32(esp, 0); sub_0035DA10(); /* call 0x0035DA10 */

loc_0035D578: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D58A; /* je: equal / zero */

loc_0035D581: ;
    SET_LO8(eax, MEM8(0x864EBD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D593; /* je: equal / zero */

loc_0035D58A: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D5A5; /* je: equal / zero */

loc_0035D593: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035D5A5; /* jne: not equal / not zero */

loc_0035D59C: ;
    PUSH32(esp, 0); sub_001F7760(); /* call 0x001F7760 */

loc_0035D5A1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D5AF; /* je: equal / zero */

loc_0035D5A5: ;
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_0035D5AA: ;
    PUSH32(esp, 0); sub_003436B0(); /* call 0x003436B0 */

loc_0035D5AF: ;
    (void)0; /* cmp MEM16(0x801900), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(MEM16(0x801900), 0)) goto loc_0035D727; /* jbe: below or equal (unsigned <=) */

loc_0035D5C6: ;
    ebx = 3;
    PUSH32(esp, edi);
    /* nop */

loc_0035D5D0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    eax = eax & 0x3FF;
    edi = ZX16(LO16(eax));
    eax = MEM32(esi);
    (void)0; /* test HI8(eax), HI8(eax) - flags set for next jcc */
    MEM32(0x8018FC) = edi;
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0035D70B; /* js: sign (negative) */

loc_0035D5ED: ;
    if (CMP_NE(ebp, 1)) goto loc_0035D663; /* jne: not equal / not zero */

loc_0035D5F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D5F8: ;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D600: ;
    ecx = edi;
    ecx = ecx & 7;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(0x84B290);
    eax = edi;
    eax = eax >> 3;
    SET_LO8(eax, MEM8(eax + ecx));
    if (TEST_NZ(LO8(eax), LO8(edx))) goto loc_0035D705; /* jne: not equal / not zero */

loc_0035D622: ;
    eax = MEM32(esi);
    if (TEST_Z(HI8(eax), 0x40)) goto loc_0035D63D; /* je: equal / zero */

loc_0035D629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D62F: ;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D637: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFBFFFu;

loc_0035D63D: ;
    eax = MEM32(esi);
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0035D70B; /* js: sign (negative) */

loc_0035D647: ;
    if (TEST_Z(HI8(eax), 0x20)) goto loc_0035D6BA; /* je: equal / zero */

loc_0035D64C: ;
    ecx = MEM32(esi + 4);
    if (CMP_EQ(ecx, MEM32(0x7FA1F8))) goto loc_0035D6BA; /* je: equal / zero */

loc_0035D657: ;
    MEM8(edi + 0x801910) = 2;
    goto loc_0035D70B;

loc_0035D663: ;
    if (CMP_NE(ebp, 2)) goto loc_0035D67B; /* jne: not equal / not zero */

loc_0035D668: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D66E: ;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D676: ;
    goto loc_0035D70E;

loc_0035D67B: ;
    if (CMP_NE(ebp, 6)) goto loc_0035D600; /* jne: not equal / not zero */

loc_0035D680: ;
    edx = MEM32(0x84B290);
    ecx = edi;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = edi;
    ecx = ecx >> 3;
    SET_LO8(ecx, MEM8(ecx + edx));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0035D70B; /* je: equal / zero */

loc_0035D69E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D6A4: ;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D6AC: ;
    MEM8(edi + 0x801910) = LO8(ebx);
    MEM32(esi) = MEM32(esi) | 0x8000;
    goto loc_0035D70B;

loc_0035D6BA: ;
    if (CMP_EQ(ebp, 4)) goto loc_0035D6C8; /* je: equal / zero */

loc_0035D6BF: ;
    if (CMP_NE(ebp, ebx)) goto loc_0035D6F7; /* jne: not equal / not zero */

loc_0035D6C3: ;
    if (TEST_NZ(HI8(eax), 4)) goto loc_0035D70B; /* jne: not equal / not zero */

loc_0035D6C8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D6DE; /* je: equal / zero */

loc_0035D6D1: ;
    PUSH32(esp, 0); sub_002E5C00(); /* call 0x002E5C00 */

loc_0035D6D6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035D6DE; /* je: equal / zero */

loc_0035D6DA: ;
    SET_LO8(eax, 1);
    goto loc_0035D6E0;

loc_0035D6DE: ;
    SET_LO8(eax, 0); /* xor self */

loc_0035D6E0: ;
    if (CMP_NE(ebp, 4)) goto loc_0035D6E9; /* jne: not equal / not zero */

loc_0035D6E5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035D6FC; /* jne: not equal / not zero */

loc_0035D6E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D6EF: ;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0035E210(); /* call 0x0035E210 */

loc_0035D6F7: ;
    if (CMP_NE(ebp, 4)) goto loc_0035D70B; /* jne: not equal / not zero */

loc_0035D6FC: ;
    MEM8(edi + 0x801910) = 1;
    goto loc_0035D70B;

loc_0035D705: ;
    MEM8(edi + 0x801910) = LO8(ebx);

loc_0035D70B: ;
    esi = MEM32(esi + 0x34);

loc_0035D70E: ;
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(0x801900));
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0035D5D0; /* jl: less (signed <) */

loc_0035D726: ;
    POP32(esp, edi);

loc_0035D727: ;
    eax = MEM32(0x8018F8);
    if (TEST_Z(eax, eax)) goto loc_0035D741; /* je: equal / zero */

loc_0035D730: ;
    ebx = 0; /* xor self */
    MEM32(0x8018F8) = 0;
    PUSH32(esp, 0); sub_0035CF40(); /* call 0x0035CF40 */

loc_0035D741: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D746: ;
    esi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D74D: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x8004) = ecx;
    MEM32(esi + 0x8000) = ecx;
    POP32(esp, ebx);

loc_0035D75C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D760
 * Original: 0x0035D760 - 0x0035D7EB (139 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ecx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D772: ;
    eax = MEM32(eax + 0x8004);
    esi = edi;
    esi = (uint32_t)((int32_t)esi >> 0xC);
    esi = esi & 0xF;
    MEM32(esp + 0x10) = eax;
    edi = edi & 0xFFF;
    esi--;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x8018A8) = edi;
    MEM32(0x8018AC) = ebp;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0035D7B3; /* jle: less or equal (signed <=) */

loc_0035D79D: ;
    ecx = esp + 0x18;

loc_0035D7A1: ;
    edx = MEM32(ecx + 4);
    ecx = ecx + 4;
    MEM32(eax * 4 + 0x8018B0) = edx;
    eax++;
    if (CMP_L(eax, ebx)) goto loc_0035D7A1; /* jl: less (signed <) */

loc_0035D7B3: ;
    ebx = ebx + 2;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D7BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8018A8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(eax + 0x8004) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi * 4 + 0x74CE38), _icall_esp); /* indirect call */
    }

loc_0035D7CF: ;
    esp = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D7D9: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x8004) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D7F0
 * Original: 0x0035D7F0 - 0x0035D87B (139 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D7F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D803: ;
    eax = MEM32(eax + 0x8004);
    esi = edi;
    esi = (uint32_t)((int32_t)esi >> 0xC);
    esi = esi & 0xF;
    MEM32(esp + 0x14) = eax;
    edi = edi & 0xFFF;
    esi--;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x8018A8) = edi;
    MEM32(0x8018AC) = ebp;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0035D844; /* jle: less or equal (signed <=) */

loc_0035D82E: ;
    ecx = esp + 0x18;

loc_0035D832: ;
    edx = MEM32(ecx + 4);
    ecx = ecx + 4;
    MEM32(eax * 4 + 0x8018B0) = edx;
    eax++;
    if (CMP_L(eax, ebx)) goto loc_0035D832; /* jl: less (signed <) */

loc_0035D844: ;
    ebx = ebx + 2;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D84C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8018A8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(eax + 0x8004) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi * 4 + 0x74CE98), _icall_esp); /* indirect call */
    }

loc_0035D860: ;
    esp = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035D86A: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax + 0x8004) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D880
 * Original: 0x0035D880 - 0x0035D89D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D880(void)
{

loc_0035D880: ;
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = (uint32_t)((int32_t)eax >> 3);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x801A00));
    eax = eax + 0x801A00;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D8A0
 * Original: 0x0035D8A0 - 0x0035D8C0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D8A0(void)
{

loc_0035D8A0: ;
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = (uint32_t)((int32_t)eax >> 3);
    SET_LO8(ecx, MEM8(eax + 0x801A00));
    eax = eax + 0x801A00;
    SET_LO8(edx, LO8(edx) & 7);
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035D8C0
 * Original: 0x0035D8C0 - 0x0035DA0E (334 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D8C0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0035D8C9: ;
    ebx = eax;
    eax = MEM32(0x84B290);
    ebx = ebx & 3;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0035D8E8; /* je: equal / zero */

loc_0035D8DB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0035D8E0: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_0035DA09; /* je: equal / zero */

loc_0035D8E8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(ebx, ebx)) goto loc_0035D96D; /* jl: less (signed <) */

loc_0035D8F1: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0035D8FF; /* jne: not equal / not zero */

loc_0035D8FA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0035D8FF: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0035D947; /* je: equal / zero */

loc_0035D925: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1F)) goto loc_0035D947; /* jb: below (unsigned <) */

loc_0035D92E: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035D938: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035D940: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0035D964; /* jne: not equal / not zero */

loc_0035D947: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035D959: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035D961: ;
    esp = esp + 8;

loc_0035D964: ;
    MEM32(esp + ebp * 4 + 0x14) = eax;
    ebp++;
    if (CMP_LE(ebp, ebx)) goto loc_0035D8F1; /* jle: less or equal (signed <=) */

loc_0035D96D: ;
    edi = 0; /* xor self */
    if (TEST_S(ebx, ebx)) goto loc_0035D9B9; /* jl: less (signed <) */

loc_0035D973: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */

loc_0035D975: ;
    if (CMP_EQ(edi, ebx)) goto loc_0035D9B4; /* je: equal / zero */

loc_0035D977: ;
    esi = MEM32(esp + edi * 4 + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0035D981: ;
    if (TEST_NZ(eax, eax)) goto loc_0035D9B4; /* jne: not equal / not zero */

loc_0035D985: ;
    if (TEST_Z(esi, esi)) goto loc_0035D9B4; /* je: equal / zero */

loc_0035D989: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0035D9A9: ;
    esp = esp + 4;
    MEM32(esp + edi * 4 + 0x14) = 0;

loc_0035D9B4: ;
    edi++;
    if (CMP_LE(edi, ebx)) goto loc_0035D975; /* jle: less or equal (signed <=) */

loc_0035D9B9: ;
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(esp + ebx * 4 + 0x14);
    MEM32(0x84B290) = edi;
    if (TEST_Z(esi, esi)) goto loc_0035DA06; /* je: equal / zero */

loc_0035D9CB: ;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0035D9DF: ;
    if (TEST_NZ(eax, eax)) goto loc_0035DA06; /* jne: not equal / not zero */

loc_0035D9E3: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0035DA03: ;
    esp = esp + 4;

loc_0035DA06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0035DA09: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0035DA10
 * Original: 0x0035DA10 - 0x0035DA7E (110 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DA10: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x41)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA1A: ;
    if (CMP_EQ(eax, 0xC)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA1F: ;
    if (CMP_EQ(eax, 0x1C)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA24: ;
    if (CMP_EQ(eax, 0x10)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA29: ;
    if (CMP_EQ(eax, 0x13)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA2E: ;
    if (CMP_EQ(eax, 0x23)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA33: ;
    if (CMP_EQ(eax, 0x49)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA38: ;
    if (CMP_EQ(eax, 0x3B)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA3D: ;
    if (CMP_EQ(eax, 6)) goto loc_0035DA68; /* je: equal / zero */

loc_0035DA42: ;
    eax = MEM32(0x84B290);
    SET_LO8(eax, MEM8(eax + 0xF));
    SET_LO8(ecx, MEM8(0x801A00));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) & 1);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035DA60; /* je: equal / zero */

loc_0035DA59: ;
    MEM8(0x801A00) = MEM8(0x801A00) | 1;

loc_0035DA60: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0035DA7E(); return; } /* jne: not equal / not zero */

loc_0035DA64: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0035DA7E(); return; } /* jne: not equal / not zero */

loc_0035DA68: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x35);
    eax = 0x2000;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0035DA7A: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0035DAA0
 * Original: 0x0035DAA0 - 0x0035DB54 (180 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DAA0: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 3)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAAE: ;
    if (CMP_EQ(eax, 5)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAB7: ;
    if (CMP_EQ(eax, 9)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAC0: ;
    if (CMP_EQ(eax, 0xD)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAC9: ;
    if (CMP_EQ(eax, 0xF)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAD2: ;
    if (CMP_EQ(eax, 0x11)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAD7: ;
    if (CMP_EQ(eax, 0x15)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DADC: ;
    if (CMP_EQ(eax, 0x16)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAE1: ;
    if (CMP_EQ(eax, 0x18)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAE6: ;
    if (CMP_EQ(eax, 0x1A)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAEB: ;
    if (CMP_EQ(eax, 0x1D)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAF0: ;
    if (CMP_EQ(eax, 0x46)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAF5: ;
    if (CMP_EQ(eax, 0x1F)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAFA: ;
    if (CMP_EQ(eax, 0x20)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DAFF: ;
    if (CMP_EQ(eax, 0x21)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB04: ;
    if (CMP_EQ(eax, 0x22)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB09: ;
    if (CMP_EQ(eax, 0x24)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB0E: ;
    if (CMP_EQ(eax, 0x25)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB13: ;
    if (CMP_EQ(eax, 0x2A)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB18: ;
    if (CMP_EQ(eax, 0x2B)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB1D: ;
    if (CMP_EQ(eax, 0x2D)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB22: ;
    if (CMP_EQ(eax, 0x45)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB27: ;
    if (CMP_EQ(eax, 0x30)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB2C: ;
    if (CMP_EQ(eax, 0x33)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB31: ;
    if (CMP_EQ(eax, 0x34)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB36: ;
    if (CMP_EQ(eax, 0x38)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB3B: ;
    if (CMP_EQ(eax, 0x3E)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB40: ;
    if (CMP_EQ(eax, 0x3F)) { sub_0035DB54(); return; } /* je: equal / zero */

loc_0035DB45: ;
    SET_LO8(eax, MEM8(0x801A2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0035DB54(); return; } /* jne: not equal / not zero */

loc_0035DB4E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0035DB60
 * Original: 0x0035DB60 - 0x0035DBC4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DB60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DB60: ;
    SET_LO8(eax, MEM8(0x801A31));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0035DBC3; /* je: equal / zero */

loc_0035DB69: ;
    SET_LO8(eax, MEM8(0x801A2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035DBC3; /* jne: not equal / not zero */

loc_0035DB72: ;
    PUSH32(esp, 0); sub_0035DAA0(); /* call 0x0035DAA0 */

loc_0035DB77: ;
    if (TEST_NZ(eax, eax)) goto loc_0035DB96; /* jne: not equal / not zero */

loc_0035DB7B: ;
    if (CMP_NE(MEM32(0x7FA1F4), 0x22)) goto loc_0035DBC3; /* jne: not equal / not zero */

loc_0035DB84: ;
    ecx = MEM32(0x84B118);
    if (TEST_Z(ecx, ecx)) goto loc_0035DBC3; /* je: equal / zero */

loc_0035DB8E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0035DB95: ;
    esp += 4; return; /* ret */

loc_0035DB96: ;
    SET_LO8(eax, MEM8(0x76F0B6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, MEM8(0x7FA1F4));
    MEM8(0x84B248) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035DBBC; /* jne: not equal / not zero */

loc_0035DBAB: ;
    ecx = MEM32(0x84B118);
    if (TEST_Z(ecx, ecx)) goto loc_0035DBBC; /* je: equal / zero */

loc_0035DBB5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0035DBBC: ;
    MEM8(0x801A31) = 0;

loc_0035DBC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035DBD0
 * Original: 0x0035DBD0 - 0x0035DC09 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DBD0: ;
    eax = 0; /* xor self */
    edx = 0x59E9A4;
    PUSH32(esp, edi);

loc_0035DBD8: ;
    ecx = MEM32(edx + -4);
    if (TEST_Z(ecx, ecx)) goto loc_0035DBF6; /* je: equal / zero */

loc_0035DBDF: ;
    ecx = MEM32(edx);
    if (TEST_NZ(ecx, 0x40000000)) goto loc_0035DBF6; /* jne: not equal / not zero */

loc_0035DBE9: ;
    ecx = ecx & 0x1FFFFFFF;
    edi = esi + -1;
    if (CMP_EQ(ecx, edi)) goto loc_0035DC07; /* je: equal / zero */

loc_0035DBF6: ;
    edx = edx + 0x14;
    eax++;
    if (CMP_L(edx, 0x59FC3C)) goto loc_0035DBD8; /* jl: less (signed <) */

loc_0035DC02: ;
    eax = 0xEE;

loc_0035DC07: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DC10
 * Original: 0x0035DC10 - 0x0035DC4A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DC10: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = 0x59E9A4;
    PUSH32(esp, edi);
    /* nop */

loc_0035DC20: ;
    esi = MEM32(ecx + -4);
    if (TEST_Z(esi, esi)) goto loc_0035DC36; /* je: equal / zero */

loc_0035DC27: ;
    esi = MEM32(ecx);
    esi = esi & 0x1FFFFFFF;
    edi = edx + -1;
    if (CMP_EQ(esi, edi)) goto loc_0035DC47; /* je: equal / zero */

loc_0035DC36: ;
    ecx = ecx + 0x14;
    eax++;
    if (CMP_L(ecx, 0x59FC3C)) goto loc_0035DC20; /* jl: less (signed <) */

loc_0035DC42: ;
    eax = 0xEE;

loc_0035DC47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DC50
 * Original: 0x0035DC50 - 0x0035DC86 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DC50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DC50: ;
    eax = 0; /* xor self */
    ecx = 0x59E9A4;
    edx = 0x40000000;
    PUSH32(esp, esi);
    /* nop */

loc_0035DC60: ;
    esi = MEM32(ecx + -4);
    if (TEST_Z(esi, esi)) goto loc_0035DC6C; /* je: equal / zero */

loc_0035DC67: ;
    if (TEST_NZ(MEM32(ecx), edx)) goto loc_0035DC6C; /* jne: not equal / not zero */

loc_0035DC6B: ;
    eax++;

loc_0035DC6C: ;
    esi = MEM32(ecx + 0x10);
    if (TEST_Z(esi, esi)) goto loc_0035DC79; /* je: equal / zero */

loc_0035DC73: ;
    if (TEST_NZ(MEM32(ecx + 0x14), edx)) goto loc_0035DC79; /* jne: not equal / not zero */

loc_0035DC78: ;
    eax++;

loc_0035DC79: ;
    ecx = ecx + 0x28;
    if (CMP_L(ecx, 0x59FC3C)) goto loc_0035DC60; /* jl: less (signed <) */

loc_0035DC84: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DC90
 * Original: 0x0035DC90 - 0x0035DD06 (118 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DC90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax + eax * 4;
    ebx = MEM32(eax * 4 + 0x59E9AC);
    (void)0; /* cmp MEM16(ebx), 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM16(ebx), 0xFFFF)) goto loc_0035DCFA; /* je: equal / zero */

loc_0035DCA9: ;
    esi = ebx;
    ebp = ebx;
    /* nop */

loc_0035DCB0: ;
    eax = ZX16(MEM16(esi));
    ecx = eax + eax * 4;
    if (CMP_EQ(ebx, MEM32(ecx * 4 + 0x59E9AC))) goto loc_0035DD04; /* je: equal / zero */

loc_0035DCBF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035DC90(); /* call 0x0035DC90 */

loc_0035DCC5: ;
    edx = ZX16(MEM16(esi));
    ecx = edx;
    edi = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x84B290);
    edx = edx >> 3;
    SET_LO8(edx, MEM8(edx + ecx));
    esp = esp + 4;
    if (TEST_Z(LO8(edx), LO8(eax))) { sub_0035DD06(); return; } /* je: equal / zero */

loc_0035DCE9: ;
    if (TEST_Z(edi, edi)) { sub_0035DD06(); return; } /* je: equal / zero */

loc_0035DCED: ;
    ebp = ebp + 2;
    (void)0; /* cmp MEM16(ebp), 0xFFFF - flags set for next jcc */
    esi = ebp;
    if (CMP_NE(MEM16(ebp), 0xFFFF)) goto loc_0035DCB0; /* jne: not equal / not zero */

loc_0035DCFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035DD04: ;
    goto loc_0035DD04;

}

/**
 * sub_0035DD10
 * Original: 0x0035DD10 - 0x0035DD26 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DD10(void)
{

loc_0035DD10: ;
    eax = eax + eax * 4;
    eax = MEM32(eax * 4 + 0x59E9AC);
    PUSH32(esp, 0x35DD30);
    PUSH32(esp, 0); sub_0035DE10(); /* call 0x0035DE10 */

loc_0035DD24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DD30
 * Original: 0x0035DD30 - 0x0035DD4A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DD30(void)
{

loc_0035DD30: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = MEM32(eax * 4 + 0x59E9AC);
    PUSH32(esp, 0x35DD30);
    PUSH32(esp, 0); sub_0035DE10(); /* call 0x0035DE10 */

loc_0035DD48: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DD50
 * Original: 0x0035DD50 - 0x0035DDC7 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DD50: ;
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x59E9B0);
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0035DDC2; /* je: equal / zero */

loc_0035DD67: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 3);
    /* nop */

loc_0035DD70: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(0x84B290);
    edx = ecx;
    edx = edx >> 3;
    eax = eax + edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(edx);
    eax = ZX16(MEM16(esi));
    if (CMP_EQ(MEM8(eax + 0x801910), LO8(ebx))) goto loc_0035DDB4; /* je: equal / zero */

loc_0035DD93: ;
    MEM8(eax + 0x801910) = LO8(ebx);
    eax = ZX16(MEM16(esi));
    eax = eax + eax * 4;
    eax = MEM32(eax * 4 + 0x59E9AC);
    PUSH32(esp, 0x35DD30);
    PUSH32(esp, 0); sub_0035DE10(); /* call 0x0035DE10 */

loc_0035DDB0: ;
    esp = esp + 4;
    edi++;

loc_0035DDB4: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0035DD70; /* jne: not equal / not zero */

loc_0035DDC1: ;
    POP32(esp, ebx);

loc_0035DDC2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DDD0
 * Original: 0x0035DDD0 - 0x0035DE06 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035DDD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0035DD50(); /* call 0x0035DD50 */

loc_0035DDD8: ;
    SET_LO8(ebx, 3);
    /* nop */

loc_0035DDE0: ;
    edi = 0; /* xor self */
    esi = 0; /* xor self */

loc_0035DDE4: ;
    if (CMP_NE(MEM8(esi + 0x801910), LO8(ebx))) goto loc_0035DDF5; /* jne: not equal / not zero */

loc_0035DDEC: ;
    eax = esi;
    PUSH32(esp, 0); sub_0035DD50(); /* call 0x0035DD50 */

loc_0035DDF3: ;
    edi = edi + eax;

loc_0035DDF5: ;
    esi++;
    if (CMP_L(esi, 0xEE)) goto loc_0035DDE4; /* jl: less (signed <) */

loc_0035DDFE: ;
    if (TEST_NZ(edi, edi)) goto loc_0035DDE0; /* jne: not equal / not zero */

loc_0035DE02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DE10
 * Original: 0x0035DE10 - 0x0035DE69 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DE10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0035DE66; /* je: equal / zero */

loc_0035DE23: ;
    PUSH32(esp, edi);
    edi = esi;

loc_0035DE26: ;
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0035DE2C: ;
    ecx = ZX16(MEM16(edi));
    eax = MEM32(0x84B290);
    MEM8(ecx + 0x801910) = 3;
    ecx = ZX16(MEM16(edi));
    edx = ecx;
    edx = edx >> 3;
    eax = eax + edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax));
    esi = esi + 2;
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax) = LO8(ecx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    edi = esi;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0035DE26; /* jne: not equal / not zero */

loc_0035DE65: ;
    POP32(esp, edi);

loc_0035DE66: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DE70
 * Original: 0x0035DE70 - 0x0035DEE3 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DE70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    ebp = 0; /* xor self */
    edi = 0x74CD44;
    /* nop */

loc_0035DE90: ;
    edx = ZX8(MEM8(ebp + 0x74CD68));
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035DED2; /* jle: less or equal (signed <=) */

loc_0035DE9D: ;
    /* nop */

loc_0035DEA0: ;
    eax = MEM32(edi);
    eax = ZX16(MEM16(eax + esi * 4 + 2));
    ecx = eax;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax >> 3);
    SET_LO8(eax, MEM8(eax + ecx));
    if (TEST_Z(LO8(eax), LO8(ebx))) goto loc_0035DECD; /* je: equal / zero */

loc_0035DEC1: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = ebp;
    MEM32(eax) = esi;

loc_0035DECD: ;
    esi++;
    if (CMP_L(esi, edx)) goto loc_0035DEA0; /* jl: less (signed <) */

loc_0035DED2: ;
    edi = edi + 4;
    ebp++;
    if (CMP_L(edi, 0x74CD68)) goto loc_0035DE90; /* jl: less (signed <) */

loc_0035DEDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DEF0
 * Original: 0x0035DEF0 - 0x0035DF3F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0035DEF0: ;
    if (TEST_Z(eax, eax)) goto loc_0035DF04; /* je: equal / zero */

loc_0035DEF4: ;
    PUSH32(esp, edi);
    edi = MEM32(edx * 4 + 0x74CD44);
    edi = ZX16(MEM16(edi + ecx * 4 + 2));
    MEM32(eax) = edi;
    POP32(esp, edi);

loc_0035DF04: ;
    if (TEST_Z(esi, esi)) goto loc_0035DF15; /* je: equal / zero */

loc_0035DF08: ;
    eax = MEM32(edx * 4 + 0x74CD44);
    eax = ZX16(MEM16(eax + ecx * 4));
    MEM32(esi) = eax;

loc_0035DF15: ;
    edx = MEM32(edx * 4 + 0x74CD44);
    eax = ZX16(MEM16(edx + ecx * 4 + 2));
    ecx = eax;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = MEM32(0x84B290);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) & MEM8(eax + ecx));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0035DF40
 * Original: 0x0035DF40 - 0x0035DFB8 (120 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DF40(void)
{

loc_0035DF40: ;
    ecx = MEM32(0x84B290);
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM16(ecx + 0x1C) = LO16(eax);
    MEM8(ecx + 0x1E) = LO8(eax);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    ecx = 0x3B;
    edi = 0x801910;
    MEM32(0x801A1C) = edx;
    MEM32(0x801A00) = eax;
    MEM32(0x801A04) = eax;
    MEM32(0x801A08) = eax;
    MEM32(0x801A0C) = eax;
    MEM32(0x801A10) = eax;
    MEM32(0x801A14) = eax;
    MEM16(0x801A18) = LO16(eax);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x801A20) = edx;
    MEM32(0x801A24) = edx;
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM32(0x801A28) = edx;
    MEM8(0x801A2E) = LO8(edx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DFC0
 * Original: 0x0035DFC0 - 0x0035E031 (113 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DFC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0035DFC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0035D440(); /* call 0x0035D440 */

loc_0035DFC7: ;
    eax = 0; /* xor self */
    MEM32(0x801900) = eax;
    MEM32(0x801904) = eax;
    esp = esp + 4;
    MEM32(0x801908) = eax;
    PUSH32(esp, 0); sub_00378550(); /* call 0x00378550 */

loc_0035DFE0: ;
    SET_LO8(eax, MEM8(0x801A2D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x6492B0); /* movss */
    MEMF(0x801AB8) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035E007; /* jne: not equal / not zero */

loc_0035DFF9: ;
    MEM8(0x801A2D) = 0xA;
    MEM8(0x801A2C) = 6;

loc_0035E007: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035E00D: ;
    esi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035E014: ;
    MEM32(eax + 0x8004) = 0;
    MEM32(esi + 0x8000) = 0;
    MEM8(0x801A2E) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E040
 * Original: 0x0035E040 - 0x0035E0C5 (133 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E040: ;
    eax = ZX8(MEM8(0x84B295));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0035E0AE; /* jle: less or equal (signed <=) */

loc_0035E04F: ;
    ebx = MEM32(0x7FA1F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    goto loc_0035E060;

    /* nop */

loc_0035E060: ;
    edx = ZX16(MEM16(0x801900));
    eax = MEM32(0x801904);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035E0A0; /* jle: less or equal (signed <=) */

loc_0035E072: ;
    esi = (uint32_t)(int32_t)SMEM16(edi * 2 + 0x84B298);
    /* nop */

loc_0035E080: ;
    ebp = MEM32(eax);
    ebp = ebp & 0xFFFF03FFu;
    if (CMP_EQ(ebp, esi)) goto loc_0035E096; /* je: equal / zero */

loc_0035E08C: ;
    eax = MEM32(eax + 0x34);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0035E080; /* jl: less (signed <) */

loc_0035E094: ;
    goto loc_0035E0A0;

loc_0035E096: ;
    ecx = MEM32(eax);
    if (TEST_Z(HI8(ecx), 0x10)) goto loc_0035E0A0; /* je: equal / zero */

loc_0035E09D: ;
    MEM32(eax + 4) = ebx;

loc_0035E0A0: ;
    eax = ZX8(MEM8(0x84B295));
    edi++;
    if (CMP_L(edi, eax)) goto loc_0035E060; /* jl: less (signed <) */

loc_0035E0AC: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0035E0AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035D440(); /* call 0x0035D440 */

loc_0035E0B5: ;
    esp = esp + 4;
    ebx = 1;
    PUSH32(esp, 0); sub_0035CF40(); /* call 0x0035CF40 */

loc_0035E0C2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E0D0
 * Original: 0x0035E0D0 - 0x0035E139 (105 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E0D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035E0D0: ;
    esp = esp - 0x300;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035E0DB: ;
    ecx = MEM32(eax + 0x8004);
    if (TEST_Z(ecx, ecx)) goto loc_0035E12D; /* je: equal / zero */

loc_0035E0E5: ;
    eax = MEM32(1);
    ecx = MEM32(esp + 0x304);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(0x776162) = 0;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035E106: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x110;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0035E11D: ;
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_0035E12A: ;
    esp = esp + 0x1C;

loc_0035E12D: ;
    eax = 1;
    esp = esp + 0x300;
    esp += 4; return; /* ret */

}

/**
 * sub_0035E140
 * Original: 0x0035E140 - 0x0035E205 (197 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E140(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035E140: ;
    eax = MEM32(0x84B304);
    if (TEST_NZ(eax, eax)) goto loc_0035E204; /* jne: not equal / not zero */

loc_0035E14D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0035E15B; /* jne: not equal / not zero */

loc_0035E156: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0035E15B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0035E1AB; /* je: equal / zero */

loc_0035E183: ;
    if (CMP_B(MEM32(esi + 0x80), 0x800C)) goto loc_0035E1AB; /* jb: below (unsigned <) */

loc_0035E18F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035E199: ;
    PUSH32(esp, 0x800C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035E1A4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0035E1CF; /* jne: not equal / not zero */

loc_0035E1AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035E1BD: ;
    PUSH32(esp, 0x800C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035E1C8: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0035E1FB; /* je: equal / zero */

loc_0035E1CF: ;
    POP32(esp, edi);
    MEM32(eax + 0x8000) = 0;
    MEM32(eax + 0x8004) = 0;
    MEM32(eax + 0x8008) = 0;
    MEM32(eax) = 0;
    MEM32(0x84B304) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0035E1FB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84B304) = eax;
    POP32(esp, esi);

loc_0035E204: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035E210
 * Original: 0x0035E210 - 0x0035EF3D (3373 bytes, 1003 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E210: ;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x13C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14C);
    esi = 0; /* xor self */
    eax = eax + 0x3C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x18) = esi;
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    MEM32(ebx + 0x8000) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035E25C: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x8004) = ecx;
    eax = MEM32(esp + 0x14C);
    MEM32(esp + 0x2C) = ecx;
    MEM8(0x84B294) = LO8(ecx);
    ecx = MEM32(eax + 0x14);
    ecx = ecx + eax;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x10);
    ebx = ebx + 0x7FFC;
    ecx = ecx + eax;
    (void)0; /* cmp edi, 6 - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x34) = ecx;
    if (CMP_A(edi, 6)) goto loc_0035EB2D; /* ja: above (unsigned >) */

loc_0035E29E: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x35EF5C); /* switch: 76 entries, 68 targets */
    if (_jt == 0x0035E2A5u) goto loc_0035E2A5;
    if (_jt == 0x0035E2BCu) goto loc_0035E2BC;
    if (_jt == 0x0035E2D3u) goto loc_0035E2D3;
    if (_jt == 0x0035E2DFu) goto loc_0035E2DF;
    if (_jt == 0x0035E2EBu) goto loc_0035E2EB;
    if (_jt == 0x0035E2F7u) goto loc_0035E2F7;
    if (_jt == 0x0035E303u) goto loc_0035E303;
    if (_jt == 0x0035E310u) goto loc_0035E310;
    if (_jt == 0x0035E35Cu) goto loc_0035E35C;
    if (_jt == 0x0035E37Fu) goto loc_0035E37F;
    if (_jt == 0x0035E389u) goto loc_0035E389;
    if (_jt == 0x0035E38Fu) goto loc_0035E38F;
    if (_jt == 0x0035E3A1u) goto loc_0035E3A1;
    if (_jt == 0x0035E3DBu) goto loc_0035E3DB;
    if (_jt == 0x0035E3FFu) goto loc_0035E3FF;
    if (_jt == 0x0035E409u) goto loc_0035E409;
    if (_jt == 0x0035E40Fu) goto loc_0035E40F;
    if (_jt == 0x0035E415u) goto loc_0035E415;
    if (_jt == 0x0035E440u) goto loc_0035E440;
    if (_jt == 0x0035E469u) goto loc_0035E469;
    if (_jt == 0x0035E46Fu) goto loc_0035E46F;
    if (_jt == 0x0035E475u) goto loc_0035E475;
    if (_jt == 0x0035E47Bu) goto loc_0035E47B;
    if (_jt == 0x0035E4A5u) goto loc_0035E4A5;
    if (_jt == 0x0035E4BAu) goto loc_0035E4BA;
    if (_jt == 0x0035E4D1u) goto loc_0035E4D1;
    if (_jt == 0x0035E4E7u) goto loc_0035E4E7;
    if (_jt == 0x0035E507u) goto loc_0035E507;
    if (_jt == 0x0035E534u) goto loc_0035E534;
    if (_jt == 0x0035E547u) goto loc_0035E547;
    if (_jt == 0x0035E55Du) goto loc_0035E55D;
    if (_jt == 0x0035E570u) goto loc_0035E570;
    if (_jt == 0x0035E585u) goto loc_0035E585;
    if (_jt == 0x0035E59Au) goto loc_0035E59A;
    if (_jt == 0x0035E5AFu) goto loc_0035E5AF;
    if (_jt == 0x0035E5C6u) goto loc_0035E5C6;
    if (_jt == 0x0035E5DDu) goto loc_0035E5DD;
    if (_jt == 0x0035E602u) goto loc_0035E602;
    if (_jt == 0x0035E63Au) goto loc_0035E63A;
    if (_jt == 0x0035E65Cu) goto loc_0035E65C;
    if (_jt == 0x0035E66Bu) goto loc_0035E66B;
    if (_jt == 0x0035E686u) goto loc_0035E686;
    if (_jt == 0x0035E6A1u) goto loc_0035E6A1;
    if (_jt == 0x0035E6BBu) goto loc_0035E6BB;
    if (_jt == 0x0035E6D5u) goto loc_0035E6D5;
    if (_jt == 0x0035E6EFu) goto loc_0035E6EF;
    if (_jt == 0x0035E709u) goto loc_0035E709;
    if (_jt == 0x0035E723u) goto loc_0035E723;
    if (_jt == 0x0035E73Du) goto loc_0035E73D;
    if (_jt == 0x0035E76Eu) goto loc_0035E76E;
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    if (_jt == 0x0035EAA5u) goto loc_0035EAA5;
    if (_jt == 0x0035EAB8u) goto loc_0035EAB8;
    if (_jt == 0x0035EAD7u) goto loc_0035EAD7;
    if (_jt == 0x0035EAE3u) goto loc_0035EAE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E2A5: ;
    ecx = MEM32(esp + 0x14C);
    eax = MEM32(ecx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0035EB2D; /* je: equal / zero */

loc_0035E2B7: ;
    edi = eax + ecx;
    goto loc_0035E310;

loc_0035E2BC: ;
    ecx = MEM32(esp + 0x14C);
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0035EB2D; /* je: equal / zero */

loc_0035E2CE: ;
    edi = eax + ecx;
    goto loc_0035E310;

loc_0035E2D3: ;
    edi = MEM32(esp + 0x14C);
    edi = edi + 0x7C;
    goto loc_0035E310;

loc_0035E2DF: ;
    eax = MEM32(esp + 0x14C);
    edi = MEM32(eax + 0x20);
    goto loc_0035E30D;

loc_0035E2EB: ;
    eax = MEM32(esp + 0x14C);
    edi = MEM32(eax + 0x24);
    goto loc_0035E30D;

loc_0035E2F7: ;
    eax = MEM32(esp + 0x14C);
    edi = MEM32(eax + 0x28);
    goto loc_0035E30D;

loc_0035E303: ;
    eax = MEM32(esp + 0x14C);
    edi = MEM32(eax + 0x2C);

loc_0035E30D: ;
    edi = edi + eax;
    /* nop */

loc_0035E310: ;
    if (CMP_EQ(MEM8(0x84B294), 1)) goto loc_0035EB2D; /* je: equal / zero */

loc_0035E31D: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    edx = eax;
    eax = eax & 0x3F;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(eax * 4 + 0x74CEF8);
    edi = edi + 2;
    if (CMP_EQ(eax, 1)) goto loc_0035E490; /* je: equal / zero */

loc_0035E33C: ;
    eax = edx;
    eax = eax >> 0xD;
    ecx = edx;
    ecx = ecx >> 6;
    eax = eax & 7;
    SET_LO8(ecx, LO8(ecx) & 1);
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    if (CMP_A(eax, 6)) goto loc_0035E3B0; /* ja: above (unsigned >) */

loc_0035E355: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35EF78); /* switch: 69 entries, 61 targets */
    if (_jt == 0x0035E310u) goto loc_0035E310;
    if (_jt == 0x0035E35Cu) goto loc_0035E35C;
    if (_jt == 0x0035E37Fu) goto loc_0035E37F;
    if (_jt == 0x0035E389u) goto loc_0035E389;
    if (_jt == 0x0035E38Fu) goto loc_0035E38F;
    if (_jt == 0x0035E3A1u) goto loc_0035E3A1;
    if (_jt == 0x0035E3DBu) goto loc_0035E3DB;
    if (_jt == 0x0035E3FFu) goto loc_0035E3FF;
    if (_jt == 0x0035E409u) goto loc_0035E409;
    if (_jt == 0x0035E40Fu) goto loc_0035E40F;
    if (_jt == 0x0035E415u) goto loc_0035E415;
    if (_jt == 0x0035E440u) goto loc_0035E440;
    if (_jt == 0x0035E469u) goto loc_0035E469;
    if (_jt == 0x0035E46Fu) goto loc_0035E46F;
    if (_jt == 0x0035E475u) goto loc_0035E475;
    if (_jt == 0x0035E47Bu) goto loc_0035E47B;
    if (_jt == 0x0035E4A5u) goto loc_0035E4A5;
    if (_jt == 0x0035E4BAu) goto loc_0035E4BA;
    if (_jt == 0x0035E4D1u) goto loc_0035E4D1;
    if (_jt == 0x0035E4E7u) goto loc_0035E4E7;
    if (_jt == 0x0035E507u) goto loc_0035E507;
    if (_jt == 0x0035E534u) goto loc_0035E534;
    if (_jt == 0x0035E547u) goto loc_0035E547;
    if (_jt == 0x0035E55Du) goto loc_0035E55D;
    if (_jt == 0x0035E570u) goto loc_0035E570;
    if (_jt == 0x0035E585u) goto loc_0035E585;
    if (_jt == 0x0035E59Au) goto loc_0035E59A;
    if (_jt == 0x0035E5AFu) goto loc_0035E5AF;
    if (_jt == 0x0035E5C6u) goto loc_0035E5C6;
    if (_jt == 0x0035E5DDu) goto loc_0035E5DD;
    if (_jt == 0x0035E602u) goto loc_0035E602;
    if (_jt == 0x0035E63Au) goto loc_0035E63A;
    if (_jt == 0x0035E65Cu) goto loc_0035E65C;
    if (_jt == 0x0035E66Bu) goto loc_0035E66B;
    if (_jt == 0x0035E686u) goto loc_0035E686;
    if (_jt == 0x0035E6A1u) goto loc_0035E6A1;
    if (_jt == 0x0035E6BBu) goto loc_0035E6BB;
    if (_jt == 0x0035E6D5u) goto loc_0035E6D5;
    if (_jt == 0x0035E6EFu) goto loc_0035E6EF;
    if (_jt == 0x0035E709u) goto loc_0035E709;
    if (_jt == 0x0035E723u) goto loc_0035E723;
    if (_jt == 0x0035E73Du) goto loc_0035E73D;
    if (_jt == 0x0035E76Eu) goto loc_0035E76E;
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    if (_jt == 0x0035EAA5u) goto loc_0035EAA5;
    if (_jt == 0x0035EAB8u) goto loc_0035EAB8;
    if (_jt == 0x0035EAD7u) goto loc_0035EAD7;
    if (_jt == 0x0035EAE3u) goto loc_0035EAE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E35C: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0035E3AC; /* je: equal / zero */

loc_0035E363: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 2));
    edi = edi + 2;
    eax = eax << 0x10;
    ecx = ecx & 0xFFFF;
    ecx = ecx | eax;
    MEM32(esp + 0x18) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    goto loc_0035E3B0;

loc_0035E37F: ;
    eax = MEM32(esp + 0x28);
    esi = esp + 0x28;
    goto loc_0035E3AC;

loc_0035E389: ;
    eax = MEM32(esp + 0x20);
    goto loc_0035E3A5;

loc_0035E38F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    esi = eax;
    esi = esi >> 2;
    MEM32(esp + 0x40) = esi;
    esi = MEM32(esp + 0x30);
    goto loc_0035E3A8;

loc_0035E3A1: ;
    eax = MEM32(esp + 0x34);

loc_0035E3A5: ;
    esi = (uint32_t)(int32_t)SMEM16(edi);

loc_0035E3A8: ;
    esi = esi + eax;
    eax = MEM32(esi);

loc_0035E3AC: ;
    MEM32(esp + 0x18) = eax;

loc_0035E3B0: ;
    eax = MEM32(esp + 0x3C);
    ebx = MEM32(eax * 4 + 0x74CEF8);
    edi = edi + 2;
    if (CMP_EQ(ebx, 2)) goto loc_0035E48C; /* je: equal / zero */

loc_0035E3C7: ;
    eax = edx;
    eax = eax >> 0xA;
    eax = eax & 7;
    if (CMP_A(eax, 6)) goto loc_0035E424; /* ja: above (unsigned >) */

loc_0035E3D4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35EF94); /* switch: 62 entries, 56 targets */
    if (_jt == 0x0035E310u) goto loc_0035E310;
    if (_jt == 0x0035E3DBu) goto loc_0035E3DB;
    if (_jt == 0x0035E3FFu) goto loc_0035E3FF;
    if (_jt == 0x0035E409u) goto loc_0035E409;
    if (_jt == 0x0035E40Fu) goto loc_0035E40F;
    if (_jt == 0x0035E415u) goto loc_0035E415;
    if (_jt == 0x0035E440u) goto loc_0035E440;
    if (_jt == 0x0035E469u) goto loc_0035E469;
    if (_jt == 0x0035E46Fu) goto loc_0035E46F;
    if (_jt == 0x0035E475u) goto loc_0035E475;
    if (_jt == 0x0035E47Bu) goto loc_0035E47B;
    if (_jt == 0x0035E4A5u) goto loc_0035E4A5;
    if (_jt == 0x0035E4BAu) goto loc_0035E4BA;
    if (_jt == 0x0035E4D1u) goto loc_0035E4D1;
    if (_jt == 0x0035E4E7u) goto loc_0035E4E7;
    if (_jt == 0x0035E507u) goto loc_0035E507;
    if (_jt == 0x0035E534u) goto loc_0035E534;
    if (_jt == 0x0035E547u) goto loc_0035E547;
    if (_jt == 0x0035E55Du) goto loc_0035E55D;
    if (_jt == 0x0035E570u) goto loc_0035E570;
    if (_jt == 0x0035E585u) goto loc_0035E585;
    if (_jt == 0x0035E59Au) goto loc_0035E59A;
    if (_jt == 0x0035E5AFu) goto loc_0035E5AF;
    if (_jt == 0x0035E5C6u) goto loc_0035E5C6;
    if (_jt == 0x0035E5DDu) goto loc_0035E5DD;
    if (_jt == 0x0035E602u) goto loc_0035E602;
    if (_jt == 0x0035E63Au) goto loc_0035E63A;
    if (_jt == 0x0035E65Cu) goto loc_0035E65C;
    if (_jt == 0x0035E66Bu) goto loc_0035E66B;
    if (_jt == 0x0035E686u) goto loc_0035E686;
    if (_jt == 0x0035E6A1u) goto loc_0035E6A1;
    if (_jt == 0x0035E6BBu) goto loc_0035E6BB;
    if (_jt == 0x0035E6D5u) goto loc_0035E6D5;
    if (_jt == 0x0035E6EFu) goto loc_0035E6EF;
    if (_jt == 0x0035E709u) goto loc_0035E709;
    if (_jt == 0x0035E723u) goto loc_0035E723;
    if (_jt == 0x0035E73Du) goto loc_0035E73D;
    if (_jt == 0x0035E76Eu) goto loc_0035E76E;
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    if (_jt == 0x0035EAA5u) goto loc_0035EAA5;
    if (_jt == 0x0035EAB8u) goto loc_0035EAB8;
    if (_jt == 0x0035EAD7u) goto loc_0035EAD7;
    if (_jt == 0x0035EAE3u) goto loc_0035EAE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E3DB: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0035E3FA; /* je: equal / zero */

loc_0035E3DF: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(edi + 2));
    edi = edi + 2;
    eax = eax << 0x10;
    ebp = ebp & 0xFFFF;
    ebp = ebp | eax;
    SET_LO8(ecx, 0); /* xor self */
    goto loc_0035E424;

loc_0035E3FA: ;
    ebp = (uint32_t)(int32_t)SMEM16(edi);
    goto loc_0035E424;

loc_0035E3FF: ;
    ebp = MEM32(esp + 0x28);
    eax = esp + 0x28;
    goto loc_0035E420;

loc_0035E409: ;
    ebp = MEM32(esp + 0x20);
    goto loc_0035E419;

loc_0035E40F: ;
    ebp = MEM32(esp + 0x30);
    goto loc_0035E419;

loc_0035E415: ;
    ebp = MEM32(esp + 0x34);

loc_0035E419: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax + ebp;
    ebp = MEM32(eax);

loc_0035E420: ;
    MEM32(esp + 0x24) = eax;

loc_0035E424: ;
    edi = edi + 2;
    if (CMP_EQ(ebx, 3)) goto loc_0035E48C; /* je: equal / zero */

loc_0035E42C: ;
    edx = edx >> 7;
    eax = edx;
    eax = eax & 7;
    if (CMP_A(eax, 6)) goto loc_0035E489; /* ja: above (unsigned >) */

loc_0035E439: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35EFB0); /* switch: 55 entries, 51 targets */
    if (_jt == 0x0035E310u) goto loc_0035E310;
    if (_jt == 0x0035E440u) goto loc_0035E440;
    if (_jt == 0x0035E469u) goto loc_0035E469;
    if (_jt == 0x0035E46Fu) goto loc_0035E46F;
    if (_jt == 0x0035E475u) goto loc_0035E475;
    if (_jt == 0x0035E47Bu) goto loc_0035E47B;
    if (_jt == 0x0035E4A5u) goto loc_0035E4A5;
    if (_jt == 0x0035E4BAu) goto loc_0035E4BA;
    if (_jt == 0x0035E4D1u) goto loc_0035E4D1;
    if (_jt == 0x0035E4E7u) goto loc_0035E4E7;
    if (_jt == 0x0035E507u) goto loc_0035E507;
    if (_jt == 0x0035E534u) goto loc_0035E534;
    if (_jt == 0x0035E547u) goto loc_0035E547;
    if (_jt == 0x0035E55Du) goto loc_0035E55D;
    if (_jt == 0x0035E570u) goto loc_0035E570;
    if (_jt == 0x0035E585u) goto loc_0035E585;
    if (_jt == 0x0035E59Au) goto loc_0035E59A;
    if (_jt == 0x0035E5AFu) goto loc_0035E5AF;
    if (_jt == 0x0035E5C6u) goto loc_0035E5C6;
    if (_jt == 0x0035E5DDu) goto loc_0035E5DD;
    if (_jt == 0x0035E602u) goto loc_0035E602;
    if (_jt == 0x0035E63Au) goto loc_0035E63A;
    if (_jt == 0x0035E65Cu) goto loc_0035E65C;
    if (_jt == 0x0035E66Bu) goto loc_0035E66B;
    if (_jt == 0x0035E686u) goto loc_0035E686;
    if (_jt == 0x0035E6A1u) goto loc_0035E6A1;
    if (_jt == 0x0035E6BBu) goto loc_0035E6BB;
    if (_jt == 0x0035E6D5u) goto loc_0035E6D5;
    if (_jt == 0x0035E6EFu) goto loc_0035E6EF;
    if (_jt == 0x0035E709u) goto loc_0035E709;
    if (_jt == 0x0035E723u) goto loc_0035E723;
    if (_jt == 0x0035E73Du) goto loc_0035E73D;
    if (_jt == 0x0035E76Eu) goto loc_0035E76E;
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    if (_jt == 0x0035EAA5u) goto loc_0035EAA5;
    if (_jt == 0x0035EAB8u) goto loc_0035EAB8;
    if (_jt == 0x0035EAD7u) goto loc_0035EAD7;
    if (_jt == 0x0035EAE3u) goto loc_0035EAE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E440: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0035E460; /* je: equal / zero */

loc_0035E444: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    edi = edi + 2;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    eax = eax << 0x10;
    ecx = ecx & 0xFFFF;
    ecx = ecx | eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_0035E489;

loc_0035E460: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x10) = ecx;
    goto loc_0035E489;

loc_0035E469: ;
    edx = MEM32(esp + 0x28);
    goto loc_0035E485;

loc_0035E46F: ;
    ecx = MEM32(esp + 0x20);
    goto loc_0035E47F;

loc_0035E475: ;
    ecx = MEM32(esp + 0x30);
    goto loc_0035E47F;

loc_0035E47B: ;
    ecx = MEM32(esp + 0x34);

loc_0035E47F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    edx = MEM32(eax + ecx);

loc_0035E485: ;
    MEM32(esp + 0x10) = edx;

loc_0035E489: ;
    edi = edi + 2;

loc_0035E48C: ;
    ebx = MEM32(esp + 0x1C);

loc_0035E490: ;
    eax = MEM32(esp + 0x3C);
    eax--;
    if (CMP_A(eax, 0x1F)) goto loc_0035EB1C; /* ja: above (unsigned >) */

loc_0035E49E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35EFCC); /* switch: 48 entries, 46 targets */
    if (_jt == 0x0035E310u) goto loc_0035E310;
    if (_jt == 0x0035E4A5u) goto loc_0035E4A5;
    if (_jt == 0x0035E4BAu) goto loc_0035E4BA;
    if (_jt == 0x0035E4D1u) goto loc_0035E4D1;
    if (_jt == 0x0035E4E7u) goto loc_0035E4E7;
    if (_jt == 0x0035E507u) goto loc_0035E507;
    if (_jt == 0x0035E534u) goto loc_0035E534;
    if (_jt == 0x0035E547u) goto loc_0035E547;
    if (_jt == 0x0035E55Du) goto loc_0035E55D;
    if (_jt == 0x0035E570u) goto loc_0035E570;
    if (_jt == 0x0035E585u) goto loc_0035E585;
    if (_jt == 0x0035E59Au) goto loc_0035E59A;
    if (_jt == 0x0035E5AFu) goto loc_0035E5AF;
    if (_jt == 0x0035E5C6u) goto loc_0035E5C6;
    if (_jt == 0x0035E5DDu) goto loc_0035E5DD;
    if (_jt == 0x0035E602u) goto loc_0035E602;
    if (_jt == 0x0035E63Au) goto loc_0035E63A;
    if (_jt == 0x0035E65Cu) goto loc_0035E65C;
    if (_jt == 0x0035E66Bu) goto loc_0035E66B;
    if (_jt == 0x0035E686u) goto loc_0035E686;
    if (_jt == 0x0035E6A1u) goto loc_0035E6A1;
    if (_jt == 0x0035E6BBu) goto loc_0035E6BB;
    if (_jt == 0x0035E6D5u) goto loc_0035E6D5;
    if (_jt == 0x0035E6EFu) goto loc_0035E6EF;
    if (_jt == 0x0035E709u) goto loc_0035E709;
    if (_jt == 0x0035E723u) goto loc_0035E723;
    if (_jt == 0x0035E73Du) goto loc_0035E73D;
    if (_jt == 0x0035E76Eu) goto loc_0035E76E;
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    if (_jt == 0x0035EAA5u) goto loc_0035EAA5;
    if (_jt == 0x0035EAB8u) goto loc_0035EAB8;
    if (_jt == 0x0035EAD7u) goto loc_0035EAD7;
    if (_jt == 0x0035EAE3u) goto loc_0035EAE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E4A5: ;
    if (TEST_Z(esi, esi)) goto loc_0035EB3A; /* je: equal / zero */

loc_0035E4AD: ;
    eax = MEM32(esp + 0x10);
    eax = eax + ebp;
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E4BA: ;
    if (TEST_Z(esi, esi)) goto loc_0035EB59; /* je: equal / zero */

loc_0035E4C2: ;
    eax = MEM32(esp + 0x10);
    ecx = ebp;
    ecx = ecx - eax;
    MEM32(esi) = ecx;
    goto loc_0035E310;

loc_0035E4D1: ;
    if (TEST_Z(esi, esi)) goto loc_0035EB78; /* je: equal / zero */

loc_0035E4D9: ;
    edx = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E4E7: ;
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0035EB97; /* je: equal / zero */

loc_0035E4F3: ;
    if (TEST_Z(esi, esi)) goto loc_0035EBB6; /* je: equal / zero */

loc_0035E4FB: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E507: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0035EBD5; /* jnp: not parity */

loc_0035E520: ;
    if (TEST_Z(esi, esi)) goto loc_0035EBF4; /* je: equal / zero */

loc_0035E528: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E534: ;
    if (TEST_Z(esi, esi)) goto loc_0035EC13; /* je: equal / zero */

loc_0035E53C: ;
    eax = ebp;
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E547: ;
    if (TEST_Z(esi, esi)) goto loc_0035EC32; /* je: equal / zero */

loc_0035E54F: ;
    ecx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ebp, ebp)) ? 1 : 0); /* sete */
    MEM32(esi) = ecx;
    goto loc_0035E310;

loc_0035E55D: ;
    if (TEST_Z(esi, esi)) goto loc_0035EC51; /* je: equal / zero */

loc_0035E565: ;
    edx = ebp;
    edx = ~edx;
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E570: ;
    if (TEST_Z(esi, esi)) goto loc_0035EC70; /* je: equal / zero */

loc_0035E578: ;
    eax = MEM32(esp + 0x10);
    eax = eax & ebp;
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E585: ;
    if (TEST_Z(esi, esi)) goto loc_0035EC8F; /* je: equal / zero */

loc_0035E58D: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx | ebp;
    MEM32(esi) = ecx;
    goto loc_0035E310;

loc_0035E59A: ;
    if (TEST_Z(esi, esi)) goto loc_0035ECAE; /* je: equal / zero */

loc_0035E5A2: ;
    edx = MEM32(esp + 0x10);
    edx = edx ^ ebp;
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E5AF: ;
    if (TEST_Z(esi, esi)) goto loc_0035ECCD; /* je: equal / zero */

loc_0035E5B7: ;
    ecx = MEM32(esp + 0x10);
    eax = ebp;
    eax = eax << LO8(ecx);
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E5C6: ;
    if (TEST_Z(esi, esi)) goto loc_0035ECEC; /* je: equal / zero */

loc_0035E5CE: ;
    ecx = MEM32(esp + 0x10);
    edx = ebp;
    edx = edx >> LO8(ecx);
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E5DD: ;
    if (TEST_Z(esi, esi)) goto loc_0035ED0B; /* je: equal / zero */

loc_0035E5E5: ;
    if (TEST_NZ(ebp, ebp)) goto loc_0035E5F0; /* jne: not equal / not zero */

loc_0035E5E9: ;
    MEM32(esi) = ebp;
    goto loc_0035E310;

loc_0035E5F0: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E602: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 0x14C);
    edx = MEM32(ecx + 0x10);
    edx = edx + ecx;
    if (CMP_B(eax, edx)) goto loc_0035ED2A; /* jb: below (unsigned <) */

loc_0035E621: ;
    edx = MEM32(ecx + 0xC);
    edx = edx + MEM32(ecx + 0x14);
    edx = edx + ecx;
    if (CMP_A(eax, edx)) goto loc_0035ED49; /* ja: above (unsigned >) */

loc_0035E631: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E63A: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    eax = ecx + edx * 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0035ED68; /* je: equal / zero */

loc_0035E651: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    goto loc_0035E310;

loc_0035E65C: ;
    if (TEST_Z(esi, esi)) goto loc_0035ED87; /* je: equal / zero */

loc_0035E664: ;
    MEM32(esi) = ebp;
    goto loc_0035E310;

loc_0035E66B: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_0035E310; /* jne: not equal / not zero */

loc_0035E677: ;
    ecx = MEM32(esp + 0x14C);
    edi = ecx + ebp;
    goto loc_0035E310;

loc_0035E686: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0035E310; /* je: equal / zero */

loc_0035E692: ;
    edx = MEM32(esp + 0x14C);
    edi = edx + ebp;
    goto loc_0035E310;

loc_0035E6A1: ;
    if (TEST_Z(esi, esi)) goto loc_0035EDA6; /* je: equal / zero */

loc_0035E6A9: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_L(ebp, ecx)) ? 1 : 0); /* setl */
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E6BB: ;
    if (TEST_Z(esi, esi)) goto loc_0035EDC5; /* je: equal / zero */

loc_0035E6C3: ;
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(ebp, eax)) ? 1 : 0); /* setg */
    MEM32(esi) = ecx;
    goto loc_0035E310;

loc_0035E6D5: ;
    if (TEST_Z(esi, esi)) goto loc_0035EDE4; /* je: equal / zero */

loc_0035E6DD: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(ebp, eax)) ? 1 : 0); /* setle */
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E6EF: ;
    if (TEST_Z(esi, esi)) goto loc_0035EE03; /* je: equal / zero */

loc_0035E6F7: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebp, ecx)) ? 1 : 0); /* setge */
    MEM32(esi) = eax;
    goto loc_0035E310;

loc_0035E709: ;
    if (TEST_Z(esi, esi)) goto loc_0035EE22; /* je: equal / zero */

loc_0035E711: ;
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ebp, eax)) ? 1 : 0); /* sete */
    MEM32(esi) = ecx;
    goto loc_0035E310;

loc_0035E723: ;
    if (TEST_Z(esi, esi)) goto loc_0035EE41; /* je: equal / zero */

loc_0035E72B: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ebp, eax)) ? 1 : 0); /* setne */
    MEM32(esi) = edx;
    goto loc_0035E310;

loc_0035E73D: ;
    ecx = MEM32(esp + 0x2C);
    ebx = ebx - 4;
    ecx++;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x2C) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0035EE60; /* je: equal / zero */

loc_0035E755: ;
    if (CMP_NE(MEM32(esp + 0x38), 2)) goto loc_0035E763; /* jne: not equal / not zero */

loc_0035E75C: ;
    MEM32(ebx) = esi;
    goto loc_0035E310;

loc_0035E763: ;
    eax = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    goto loc_0035E310;

loc_0035E76E: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035E773: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x8004) = ecx;
    if (CMP_NE(MEM32(esp + 0x38), 6)) goto loc_0035EA85; /* jne: not equal / not zero */

loc_0035E788: ;
    eax = MEM32(esp + 0x18);
    if (CMP_A(eax, 0xF)) goto loc_0035EA70; /* ja: above (unsigned >) */

loc_0035E795: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35F04C); /* switch: 16 entries, 14 targets */
    if (_jt == 0x0035E79Cu) goto loc_0035E79C;
    if (_jt == 0x0035E7B9u) goto loc_0035E7B9;
    if (_jt == 0x0035E7FDu) goto loc_0035E7FD;
    if (_jt == 0x0035E841u) goto loc_0035E841;
    if (_jt == 0x0035E889u) goto loc_0035E889;
    if (_jt == 0x0035E8D1u) goto loc_0035E8D1;
    if (_jt == 0x0035E8F9u) goto loc_0035E8F9;
    if (_jt == 0x0035E905u) goto loc_0035E905;
    if (_jt == 0x0035E974u) goto loc_0035E974;
    if (_jt == 0x0035E9BBu) goto loc_0035E9BB;
    if (_jt == 0x0035E9F9u) goto loc_0035E9F9;
    if (_jt == 0x0035EA4Au) goto loc_0035EA4A;
    if (_jt == 0x0035EA55u) goto loc_0035EA55;
    if (_jt == 0x0035EA5Fu) goto loc_0035EA5F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035E79C: ;
    MEM32(esp + 0x14) = 1;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E7B9: ;
    eax = MEM32(ebx);
    if (CMP_NE(eax, 0xFF)) goto loc_0035E7D5; /* jne: not equal / not zero */

loc_0035E7C2: ;
    edx = MEM32(esp + 0x14C);
    eax = MEM32(edx);
    eax = eax & 0xFFFF53FFu;
    eax = eax | 0x5000;

loc_0035E7D5: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xF;
    ecx--;
    if (CMP_AE(ecx, 0x17)) goto loc_0035EE7F; /* jae: above or equal (unsigned >=) */

loc_0035E7E7: ;
    eax = eax & 0xFFFF0FFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x74CD78), _icall_esp); /* indirect call */
    }

loc_0035E7F5: ;
    esp = esp + 8;
    goto loc_0035EA6C;

loc_0035E7FD: ;
    eax = MEM32(ebx);
    if (CMP_NE(eax, 0xFF)) goto loc_0035E819; /* jne: not equal / not zero */

loc_0035E806: ;
    eax = MEM32(esp + 0x14C);
    eax = MEM32(eax);
    eax = eax & 0xFFFF53FFu;
    eax = eax | 0x5000;

loc_0035E819: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xF;
    ecx--;
    if (CMP_AE(ecx, 0x17)) goto loc_0035EE9F; /* jae: above or equal (unsigned >=) */

loc_0035E82B: ;
    eax = eax & 0xFFFF0FFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x74CDD8), _icall_esp); /* indirect call */
    }

loc_0035E839: ;
    esp = esp + 8;
    goto loc_0035EA6C;

loc_0035E841: ;
    eax = MEM32(ebx);
    if (CMP_NE(eax, 0xFF)) goto loc_0035E85D; /* jne: not equal / not zero */

loc_0035E84A: ;
    ecx = MEM32(esp + 0x14C);
    eax = MEM32(ecx);
    eax = eax & 0xFFFF53FFu;
    eax = eax | 0x5000;

loc_0035E85D: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xF;
    ecx--;
    if (CMP_AE(ecx, 0x17)) goto loc_0035EEBF; /* jae: above or equal (unsigned >=) */

loc_0035E86F: ;
    edx = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax & 0xFFFF0FFFu;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x74CE38), _icall_esp); /* indirect call */
    }

loc_0035E881: ;
    esp = esp + 0xC;
    goto loc_0035EA6C;

loc_0035E889: ;
    eax = MEM32(ebx);
    if (CMP_NE(eax, 0xFF)) goto loc_0035E8A5; /* jne: not equal / not zero */

loc_0035E892: ;
    eax = MEM32(esp + 0x14C);
    eax = MEM32(eax);
    eax = eax & 0xFFFF53FFu;
    eax = eax | 0x5000;

loc_0035E8A5: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xF;
    ecx--;
    if (CMP_AE(ecx, 0x17)) goto loc_0035EEDF; /* jae: above or equal (unsigned >=) */

loc_0035E8B7: ;
    edx = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax & 0xFFFF0FFFu;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x74CE98), _icall_esp); /* indirect call */
    }

loc_0035E8C9: ;
    esp = esp + 0xC;
    goto loc_0035EA6C;

loc_0035E8D1: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0035EEFF; /* je: equal / zero */

loc_0035E8DA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0035E8DF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx))); }
    MEM32(esp + 0x2C) = 0;
    ecx = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x28) = ecx;
    goto loc_0035E310;

loc_0035E8F9: ;
    eax = ZX8(MEM8(0x7FA250));
    goto loc_0035EA6C;

loc_0035E905: ;
    eax = MEM32(ebx);
    ebp = MEM32(0x7FA20C);
    MEM32(esp + 0x10) = ebp;
    ebp = ebp + eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0035E93E; /* jge: greater or equal (signed >=) */

loc_0035E91B: ;
    if (TEST_S(ebp, ebp)) goto loc_0035E93C; /* jl: less (signed <) */

loc_0035E91F: ;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E93C: ;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_0035E93E: ;
    if (TEST_NZ(eax, eax)) goto loc_0035E95D; /* jne: not equal / not zero */

loc_0035E940: ;
    MEM32(esp + 0x14) = 1;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E95D: ;
    ecx = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E974: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x7FA20C);
    ebp = eax;
    ebp = ebp - ecx;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(eax, 1)) goto loc_0035E9AF; /* jle: less or equal (signed <=) */

loc_0035E98D: ;
    if (CMP_G(ebp, 1)) goto loc_0035E9AF; /* jg: greater (signed >) */

loc_0035E992: ;
    MEM32(esp + 0x14) = 1;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E9AF: ;
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ebp;
    goto loc_0035EA6C;

loc_0035E9BB: ;
    xmm1 = (float)(int32_t)MEM32(ebx + 4); /* cvtsi2ss */
    xmm0 = MEMF(0x648D48); /* movss */
    xmm2 = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D4C); /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035E9F9: ;
    xmm0 = (float)(int32_t)MEM32(ebx + 4); /* cvtsi2ss */
    xmm1 = MEMF(0x648D48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0035EF1E; /* jnp: not parity */

loc_0035EA1B: ;
    xmm2 = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm2 = xmm2 * MEMF(0x648D4C); /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    ecx = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035EA4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0035E0D0(); /* call 0x0035E0D0 */

loc_0035EA50: ;
    esp = esp + 4;
    goto loc_0035EA6C;

loc_0035EA55: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    goto loc_0035EA6C;

loc_0035EA5F: ;
    eax = MEM32(esp + 0x40);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0035EF3D(); return; } /* je: equal / zero */

loc_0035EA6C: ;
    MEM32(esp + 0x14) = eax;

loc_0035EA70: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    goto loc_0035E310;

loc_0035EA85: ;
    ebx = ebx - 4;
    MEM32(esp + 0x1C) = ebx;
    MEM32(ebx) = edi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035EA9B: ;
    MEM32(eax + 0x8004) = 0;

loc_0035EAA5: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14C);
    edi = edx + eax;
    goto loc_0035E310;

loc_0035EAB8: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    ebx = ebx - 4;
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(ebx) = ecx;
    MEM32(esp + 0x20) = ebx;
    ebx = ebx + edx * 4;
    MEM32(esp + 0x1C) = ebx;
    goto loc_0035E310;

loc_0035EAD7: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x28) = eax;

loc_0035EAE3: ;
    ebx = MEM32(esp + 0x20);
    eax = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ebx = ebx + 4;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0035EAFC: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x8004) = ecx;
    eax = MEM32(esp + 0x148);
    eax = eax + 0x7FFC;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_B(ebx, eax)) goto loc_0035E310; /* jb: below (unsigned <) */

loc_0035EB1C: ;
    edx = MEM32(esp + 0x148);
    MEM32(edx + 0x8000) = 0;

loc_0035EB2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EB3A: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D3F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EB49: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EB59: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D3D0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EB68: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EB78: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D3B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EB87: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EB97: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D394);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EBA6: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EBB6: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D374);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EBC5: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EBD5: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D358);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EBE4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EBF4: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D338);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC03: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EC13: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D318);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC22: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EC32: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D2F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC41: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EC51: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D2D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC60: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EC70: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D2B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC7F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EC8F: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D298);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EC9E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ECAE: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D278);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ECBD: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ECCD: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D254);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ECDC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ECEC: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D230);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ECFB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ED0B: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D210);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ED1A: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ED2A: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D1E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ED39: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ED49: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ED58: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ED68: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D194);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ED77: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035ED87: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D174);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035ED96: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EDA6: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D154);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EDB5: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EDC5: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D134);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EDD4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EDE4: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D114);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EDF3: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE03: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D0F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EE12: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE22: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x63D0D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EE31: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE41: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63D0AC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EE50: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE60: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63D08C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EE6F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE7F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x63D058);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EE8F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EE9F: ;
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, 0x63D020);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EEAF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EEBF: ;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, 0x63CFEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EECF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EEDF: ;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x63CFB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EEEF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EEFF: ;
    edx = esp + 0x44;
    PUSH32(esp, 0x63CF9C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EF0E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

loc_0035EF1E: ;
    eax = esp + 0x44;
    PUSH32(esp, 0x63CF7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0035EF2D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F090
 * Original: 0x0035F090 - 0x0035F0EB (91 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F090: ;
    ecx = MEM32(0x74D00C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0035F0E3; /* je: equal / zero */

loc_0035F0A4: ;
    esi = ebp;

loc_0035F0A6: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0035F0CE; /* jne: not equal / not zero */

loc_0035F0B0: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0035F0CA; /* je: equal / zero */

loc_0035F0B4: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0035F0CE; /* jne: not equal / not zero */

loc_0035F0C0: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0035F0A6; /* jne: not equal / not zero */

loc_0035F0CA: ;
    ecx = 0; /* xor self */
    goto loc_0035F0D3;

loc_0035F0CE: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_0035F0D3: ;
    if (TEST_Z(ecx, ecx)) { sub_0035F0EB(); return; } /* je: equal / zero */

loc_0035F0D7: ;
    ecx = MEM32(edi * 8 + 0x74D014);
    edi++;
    if (TEST_NZ(ecx, ecx)) goto loc_0035F0A4; /* jne: not equal / not zero */

loc_0035F0E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035F100
 * Original: 0x0035F100 - 0x0035F1F5 (245 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F100: ;
    eax = MEM32(0x84B308);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(0x8018FC);
    if (CMP_NE(eax, ebx)) goto loc_0035F1BA; /* jne: not equal / not zero */

loc_0035F117: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0035F124; /* jne: not equal / not zero */

loc_0035F11F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0035F124: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_0035F174; /* je: equal / zero */

loc_0035F14C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x2244)) goto loc_0035F174; /* jb: below (unsigned <) */

loc_0035F158: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035F162: ;
    PUSH32(esp, 0x2244);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035F16D: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0035F194; /* jne: not equal / not zero */

loc_0035F174: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035F186: ;
    PUSH32(esp, 0x2244);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035F191: ;
    esp = esp + 8;

loc_0035F194: ;
    (void)0; /* cmp MEM32(0x84B30C), ebx - flags set for next jcc */
    POP32(esp, edi);
    MEM32(0x84B308) = eax;
    POP32(esp, esi);
    if (CMP_EQ(MEM32(0x84B30C), ebx)) goto loc_0035F1B5; /* je: equal / zero */

loc_0035F1A3: ;
    PUSH32(esp, 0x84B30C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035F1AD: ;
    eax = MEM32(0x84B308);
    esp = esp + 4;

loc_0035F1B5: ;
    MEM32(0x84B30C) = eax;

loc_0035F1BA: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x776563);
    MEM8(eax + 0x1C3C) = LO8(ebx);
    MEM8(eax + 0x1C3D) = LO8(ebx);
    MEM8(eax + 0x1C3F) = LO8(ebx);
    MEM8(eax + 0x1C3E) = LO8(ebx);
    MEM8(eax + 0x1C40) = LO8(ebx);
    MEM16(eax + 0x1B38) = LO16(ebp);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x74D788);
    POP32(esp, ebp);
    MEM32(eax + 0xC) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035F200
 * Original: 0x0035F200 - 0x0035F327 (295 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F200(void)
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

loc_0035F200: ;
    esp = esp - 0x10;
    edx = MEM32(0x84A5F8);
    xmm0 = MEMF(0x648E70); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(0x84B308);
    ebx = MEM32(edi + 0x14);
    eax = eax | 0xFFFFFFFFu;
    esi = esi + edx;
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0035F320; /* jle: less or equal (signed <=) */

loc_0035F240: ;
    xmm1 = MEMF(0x64931C); /* movss */
    xmm2 = MEMF(0x6493C8); /* movss */
    PUSH32(esp, ebp);
    ebp = edx + 0x78;

loc_0035F254: ;
    eax = MEM32(edi + ecx * 4 + 0x28);
    edx = 1;
    edx = edx << LO8(ecx);
    if (CMP_EQ(eax, 3)) goto loc_0035F30C; /* je: equal / zero */

loc_0035F268: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, edx)) goto loc_0035F30C; /* je: equal / zero */

loc_0035F273: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(MEM32(edi + eax * 4 + 0x1BBC), edx)) goto loc_0035F30C; /* je: equal / zero */

loc_0035F284: ;
    edx = ebp + -120;
    if (TEST_Z(edx, edx)) goto loc_0035F2B9; /* je: equal / zero */

loc_0035F28B: ;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0035F2C1; /* jbe: below or equal (unsigned <=) */

loc_0035F2B9: ;
    MEMF(esp + 0x10) = xmm1; /* movss */
    goto loc_0035F2CC;

loc_0035F2C1: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0035F2CC; /* jbe: below or equal (unsigned <=) */

loc_0035F2C6: ;
    MEMF(esp + 0x10) = xmm2; /* movss */

loc_0035F2CC: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsin  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0035F30C; /* jbe: below or equal (unsigned <=) */

loc_0035F2FC: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;

loc_0035F30C: ;
    ecx++;
    ebp = ebp + 0x6D0;
    if (CMP_L(ecx, ebx)) goto loc_0035F254; /* jl: less (signed <) */

loc_0035F31B: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);

loc_0035F320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0035F330
 * Original: 0x0035F330 - 0x0035F33E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035F330: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEC);
    if (CMP_L(eax, ecx)) { sub_0035F33E(); return; } /* jl: less (signed <) */

loc_0035F33B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0035F350
 * Original: 0x0035F350 - 0x0035F368 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F350(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035F350: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEC);
    if (CMP_GE(eax, ecx)) goto loc_0035F367; /* jge: greater or equal (signed >=) */

loc_0035F35B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + 0x776284) = 0;

loc_0035F367: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035F370
 * Original: 0x0035F370 - 0x0035F3B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F370(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F370: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B308);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx + 0x134;
    ebp = ecx + 0xB4;
    PUSH32(esp, edi);
    edx = ecx + 0x534;
    eax = ecx + 0x734;
    esi = ecx + 0x934;
    edi = ecx + 0xB34;
    ecx = ecx + 0x1138;
    MEM32(esp + 0x10) = ecx;
    ecx = ebx;
    ebp = ebp - ebx;
    ebx = 0x20;
    g_seh_ebp = ebp; sub_0035F3C0(); return; /* tail jmp 0x0035F3C0 */

}

/**
 * sub_0035F420
 * Original: 0x0035F420 - 0x0035F631 (529 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F420: ;
    esp = esp - 0xC;
    edx = MEM32(0x84B308);
    PUSH32(esp, ebx);
    eax = edx + 0x334;
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(0x6BCFEB));
    PUSH32(esp, esi);
    ecx = edx + 0xD38;
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    esi = edx + 0x934;
    MEM32(esp + 0x18) = ecx;
    ebx = edx + 0xF38;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0035F49C; /* jle: less or equal (signed <=) */

loc_0035F458: ;
    edi = 0; /* xor self */
    /* nop */

loc_0035F460: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + edi + 0x568);
    eax = eax + edi;
    if (TEST_Z(ecx, ecx)) goto loc_0035F48A; /* je: equal / zero */

loc_0035F472: ;
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0035F48A; /* je: equal / zero */

loc_0035F47B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003306D0(); /* call 0x003306D0 */

loc_0035F481: ;
    edx = MEM32(0x84B308);
    esp = esp + 4;

loc_0035F48A: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebp++;
    edi = edi + 0x6D0;
    if (CMP_L(ebp, ecx)) goto loc_0035F460; /* jl: less (signed <) */

loc_0035F49C: ;
    eax = MEM32(edx + 0xA8);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_0035F622; /* jle: less or equal (signed <=) */

loc_0035F4B0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = ecx - ebx;
    ebx = ebx - esi;
    eax = eax - esi;
    edi = esi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_0035F4D0;

loc_0035F4CA: ;
    ecx = MEM32(esp + 0x14);
    edi = edi;

loc_0035F4D0: ;
    esi = ebx + edi;
    SET_LO8(edx, MEM8(esi + ecx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F4DE: ;
    ecx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0035F5FF; /* jle: less or equal (signed <=) */

loc_0035F4EE: ;
    ecx = MEM32(0x8471B8);
    ecx = ecx + 0xC6;
    /* nop */

loc_0035F500: ;
    if (CMP_EQ(MEM8(ecx), LO8(edx))) goto loc_0035F518; /* je: equal / zero */

loc_0035F504: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, MEM32(0x76FD10))) goto loc_0035F500; /* jl: less (signed <) */

loc_0035F513: ;
    goto loc_0035F5FF;

loc_0035F518: ;
    edx = MEM32(0x8471B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + edx;
    if (TEST_Z(eax, eax)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F52E: ;
    ecx = MEM32(edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0035F586; /* jle: less or equal (signed <=) */

loc_0035F534: ;
    ecx = ecx - MEM32(0x7FA20C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = ecx;
    if (CMP_G(ecx & ecx, 0)) goto loc_0035F5FF; /* jg: greater (signed >) */

loc_0035F544: ;
    MEM32(edi) = 0;
    MEM8(eax + 0xC2) = 0;
    if (TEST_Z(MEM8(esi), 4)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F55A: ;
    ecx = MEM32(0x84B308);
    SET_LO16(edx, MEM16(ecx + ebp + 0x1EC4));
    MEM16(eax + 0x14) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + ebp + 0x1EC6));
    MEM16(eax + 0x16) = LO16(edx);
    SET_LO16(ecx, MEM16(ecx + ebp + 0x1EC8));
    MEM16(eax + 0x18) = LO16(ecx);
    goto loc_0035F5FF;

loc_0035F586: ;
    if (TEST_NZ(MEM8(esi), 4)) goto loc_0035F5FF; /* jne: not equal / not zero */

loc_0035F588: ;
    ecx = MEM32(eax + 0xDC);
    ecx--;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F594: ;
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    esi = ecx + edx;
    ecx = MEM32(esi + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F5AD: ;
    MEM32(eax + 0xDC) = 0;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + edi);
    eax = ecx;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_0035F5C5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035F5FF; /* jne: not equal / not zero */

loc_0035F5C9: ;
    if (CMP_NE(ecx, 0x115C)) goto loc_0035F5FF; /* jne: not equal / not zero */

loc_0035F5D1: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_000DB4D0(); /* call 0x000DB4D0 */

loc_0035F5DA: ;
    esi = MEM32(esi + 0x568);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F5E7: ;
    esi = MEM32(esi + 0x444);
    if (TEST_Z(esi, esi)) goto loc_0035F5FF; /* je: equal / zero */

loc_0035F5F1: ;
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0); sub_0032E2B0(); /* call 0x0032E2B0 */

loc_0035F5FA: ;
    PUSH32(esp, 0); sub_0032E330(); /* call 0x0032E330 */

loc_0035F5FF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x84B308);
    edx = MEM32(ecx + 0xA8);
    eax++;
    ebp = ebp + 6;
    edi = edi + 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0035F4CA; /* jl: less (signed <) */

loc_0035F622: ;
    PUSH32(esp, 0); sub_0035FC90(); /* call 0x0035FC90 */

loc_0035F627: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0035F640
 * Original: 0x0035F640 - 0x0035F728 (232 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    if (CMP_BE(MEM8(esi + 0x7FCB4C), 0x32)) goto loc_0035F723; /* jbe: below or equal (unsigned <=) */

loc_0035F653: ;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x7FCB50);
    if (TEST_NZ(eax, ecx)) goto loc_0035F723; /* jne: not equal / not zero */

loc_0035F668: ;
    edx = ecx;
    edx = edx | eax;
    PUSH32(esp, ebx);
    MEM32(0x7FCB50) = edx;
    edx = MEM32(0x7FCB54);
    eax = ~eax;
    eax = eax & edx;
    ebx = esi;
    ecx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    edx = 1;
    edx = edx << LO8(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, 3);
    eax = eax | edx;
    MEM32(0x7FCB54) = eax;
    eax = edi;
    ebx = ebx + ebp;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_0035F6A7: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0035F6AE: ;
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    esi = edi;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0035F6B9: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    eax = MEM32(ebx + 0x568);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x2D8);
    edi = edi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F71A0(); /* call 0x002F71A0 */

loc_0035F6D4: ;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0xBC) = 0;
    edx = MEM32(ebx + 0x568);
    MEM8(ebx + 0x234) = 0x5A;
    MEM16(edx + 0x2D8) = LO16(esi);
    eax = MEM32(ebx + 0x568);
    MEM8(eax + 0x2E3) = 0x40;
    ecx = MEM32(ebx + 0x564);
    esp = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_00041DD0(); /* call 0x00041DD0 */

loc_0035F715: ;
    SET_LO8(eax, MEM8(0x6BCFED));
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, ebp);
    MEM8(0x6BCFED) = LO8(eax);
    POP32(esp, ebx);

loc_0035F723: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035F730
 * Original: 0x0035F730 - 0x0035F8D2 (418 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F730: ;
    eax = MEM32(0x76FDB4);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B308);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(ebp + 0xA8) = ebx;
    esi = MEM32(0x8471DC);
    if (CMP_LE(eax, ebx)) goto loc_0035F8CB; /* jle: less or equal (signed <=) */

loc_0035F757: ;
    ecx = ebp + 0x1EC6;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    edi = ebp + 0xF38;
    goto loc_0035F770;

    /* nop */

loc_0035F770: ;
    eax = MEM32(esi + 8);
    MEM8(eax + 0xC8) = 0;
    eax = MEM32(esi + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(edx * 8 + 0x58CF30);
    MEM32(edi + -512) = eax;
    eax = MEM32(esi + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(edx * 8 + 0x58CF30);
    MEM32(edi + -512) = eax;
    MEM8(ebx + ebp + 0x21C4) = 0xA;
    eax = MEM32(edi + -512);
    if (CMP_EQ(eax, 0x25)) goto loc_0035F7D9; /* je: equal / zero */

loc_0035F7B3: ;
    if (CMP_EQ(eax, 0x44)) goto loc_0035F7D9; /* je: equal / zero */

loc_0035F7B8: ;
    if (CMP_EQ(eax, 0x1A0A)) goto loc_0035F7D1; /* je: equal / zero */

loc_0035F7BF: ;
    MEM32(edi) = 6;
    eax = MEM32(esi + 8);
    MEM8(eax + 0xC8) = MEM8(eax + 0xC8) | 1;
    goto loc_0035F7E7;

loc_0035F7D1: ;
    MEM32(edi) = 0xC;
    goto loc_0035F7DF;

loc_0035F7D9: ;
    MEM32(edi) = 6;

loc_0035F7DF: ;
    MEM8(ebx + ebp + 0x21C4) = 0x14;

loc_0035F7E7: ;
    edx = MEM32(esi + 8);
    eax = ZX8(MEM8(edx + 0xC6));
    MEM32(edi + -3076) = eax;
    eax = MEM32(esi + 8);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x84B0E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0035F86B; /* je: equal / zero */

loc_0035F82D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034A860(); /* call 0x0034A860 */

loc_0035F843: ;
    esp = esp + 0x10;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0035F867; /* je: equal / zero */

loc_0035F84D: ;
    ecx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = ZX16(MEM16(eax + ecx + 0x10));
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0xA00) = edx;
    goto loc_0035F875;

loc_0035F867: ;
    ecx = MEM32(esp + 0x10);

loc_0035F86B: ;
    MEM32(edi + 0xA00) = 0xFFFFFFFFu;

loc_0035F875: ;
    eax = MEM32(esi + 8);
    SET_LO16(edx, MEM16(eax + 0x14));
    MEM16(ecx + -2) = LO16(edx);
    eax = MEM32(esi + 8);
    SET_LO16(edx, MEM16(eax + 0x16));
    MEM16(ecx) = LO16(edx);
    eax = MEM32(esi + 8);
    SET_LO16(edx, MEM16(eax + 0x18));
    MEM16(ecx + 2) = LO16(edx);
    edx = MEM32(ebp + 0xA8);
    eax = MEM32(ebp + 0xAC);
    edx++;
    eax++;
    MEM32(ebp + 0xAC) = eax;
    eax = MEM32(0x76FDB4);
    ebx++;
    ecx = ecx + 6;
    edi = edi + 4;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0xA8) = edx;
    esi = MEM32(esi + 4);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ebx, eax)) goto loc_0035F770; /* jl: less (signed <) */

loc_0035F8CA: ;
    POP32(esp, edi);

loc_0035F8CB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0035F8E0
 * Original: 0x0035F8E0 - 0x0035FA4F (367 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F8E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035F8E0: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0x45 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0x45)) goto loc_0035F8FB; /* jne: not equal / not zero */

loc_0035F8F6: ;
    ebp = 0x74D7B0;

loc_0035F8FB: ;
    eax = MEM32(esp + 0xA0);
    ecx = MEM32(0x76FE00);
    edi = MEM32(ecx + 0x14);
    ebx = MEM32(0x76FE08);
    eax = eax << 4;
    esi = MEM32(ebp + eax);
    ebp = ebp + eax;
    if (TEST_Z(edi, edi)) goto loc_0035F95B; /* je: equal / zero */

loc_0035F91E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_0035F929: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0035F95B; /* je: equal / zero */

loc_0035F935: ;
    ecx = MEM32(edi + 4);
    edi = MEM32(ebx + 0xC);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + edi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + edi) = LO8(ecx);

loc_0035F95B: ;
    PUSH32(esp, 0);
    ebx = esi;
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_0035F964: ;
    ecx = MEM32(esp + 0xA4);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x801A34);
    esp = esp + 4;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x801A34) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0035F99C; /* jne: not equal / not zero */

loc_0035F98A: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0035F992: ;
    esi = eax;
    PUSH32(esp, 0); sub_003C8A30(); /* call 0x003C8A30 */

loc_0035F999: ;
    MEM32(ebp + 0xC) = eax;

loc_0035F99C: ;
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648F20); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x6C) = 0xC8;
    MEM32(esp + 0x78) = 0x105;
    MEM8(esp + 0x8C) = 0;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0x10) = 0x14;
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ebx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = (uint32_t)(-(int32_t)ebx);
    esi = eax;
    edi = edx;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = esi - eax;
    edi = edi - edx - _cf; /* sbb */
    esi = esi + 1;
    edi = edi + 0 + _cf; /* adc */
    if (CMP_NE(esi, 1)) { sub_0035FA4F(); return; } /* jne: not equal / not zero */

loc_0035FA45: ;
    if (TEST_NZ(edi, edi)) { sub_0035FA4F(); return; } /* jne: not equal / not zero */

loc_0035FA49: ;
    MEM32(esp + 0x14) = ebx;
    g_seh_ebp = ebp; sub_0035FA64(); return; /* tail jmp 0x0035FA64 */

}

/**
 * sub_0035FC90
 * Original: 0x0035FC90 - 0x0035FD53 (195 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035FC90: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0xC;
    if (CMP_NE(eax, 0x45)) goto loc_0035FD4F; /* jne: not equal / not zero */

loc_0035FCA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    eax = 0x74D7B0;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    goto loc_0035FCC0;

    /* nop */
    /* nop */

loc_0035FCC0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM32(0x801A34), edx)) goto loc_0035FD30; /* je: equal / zero */

loc_0035FCCF: ;
    ebp = MEM32(eax);
    eax = MEM32(0x76FE00);
    edi = MEM32(eax + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(0x76FE08);
    if (TEST_Z(edi, edi)) goto loc_0035FD20; /* je: equal / zero */

loc_0035FCE3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_0035FCEE: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0035FD20; /* je: equal / zero */

loc_0035FCFA: ;
    esi = MEM32(esi + 0xC);
    edx = eax + eax * 4;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + edx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);

loc_0035FD20: ;
    PUSH32(esp, 0);
    ebx = ebp;
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_0035FD29: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;

loc_0035FD30: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x10;
    ecx++;
    (void)0; /* cmp eax, 0x74D7D0 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x74D7D0)) goto loc_0035FCC0; /* jl: less (signed <) */

loc_0035FD4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0035FD4F: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0035FD60
 * Original: 0x0035FD60 - 0x0035FD80 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035FD60: ;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035FD7D; /* jle: less or equal (signed <=) */

loc_0035FD66: ;
    ecx = 0x801A48;
    goto loc_0035FD70;

    /* nop */

loc_0035FD70: ;
    if (CMP_NE(MEM8(ecx), 0)) { sub_0035FD80(); return; } /* jne: not equal / not zero */

loc_0035FD75: ;
    eax++;
    ecx = ecx + 0x24;
    if (CMP_L(eax, edx)) goto loc_0035FD70; /* jl: less (signed <) */

loc_0035FD7D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FD90
 * Original: 0x0035FD90 - 0x0035FFA7 (535 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035FD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + ebp * 8;
    edi = edi << 2;
    eax = ZX8(MEM8(edi + 0x801A48));
    eax--;
    if ((eax == 0)) goto loc_0035FE86; /* je: equal / zero */

loc_0035FDAD: ;
    eax--;
    if ((eax != 0)) goto loc_0035FF9D; /* jne: not equal / not zero */

loc_0035FDB4: ;
    esi = ZX8(MEM8(edi + 0x801A49));
    SET_LO16(eax, ZX8(MEM8(0x7FA250)));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    ebp = MEM32(0x8470DC);
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax << 1;
    MEM16(edi + 0x801A4C) = MEM16(edi + 0x801A4C) + LO16(eax);
    eax = MEM32(esi + ebp + 0x38C);
    esi = esi + ebp;
    ebx = 0; /* xor self */
    if (TEST_Z(HI8(eax), 0x40)) goto loc_0035FDF1; /* je: equal / zero */

loc_0035FDEA: ;
    MEM16(edi + 0x801A4C) = LO16(ebx);

loc_0035FDF1: ;
    ecx = MEM32(esi + 0x3E0);
    if (CMP_NE(MEM16(ecx + 0x3AE), LO16(ebx))) goto loc_0035FE07; /* jne: not equal / not zero */

loc_0035FE00: ;
    MEM16(edi + 0x801A4C) = LO16(ebx);

loc_0035FE07: ;
    if (CMP_G(MEM16(edi + 0x801A4C), LO16(ebx))) goto loc_0035FF9D; /* jg: greater (signed >) */

loc_0035FE14: ;
    edx = MEM32(edi + 0x801A68);
    MEM32(esi + 0x3CC) = edx;
    if (TEST_NZ(MEM8(edi + 0x801A54), 2)) goto loc_0035FE36; /* jne: not equal / not zero */

loc_0035FE29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0035FE33: ;
    esp = esp + 8;

loc_0035FE36: ;
    (void)0; /* test MEM8(edi + 0x801A54), 1 - flags set for next jcc */
    MEM32(0x801ABC) = ebx;
    if (TEST_NZ(MEM8(edi + 0x801A54), 1)) goto loc_0035FE62; /* jne: not equal / not zero */

loc_0035FE45: ;
    eax = MEM32(esi + 0x3E0);
    MEM32(eax + 0x468) = MEM32(eax + 0x468) & 0xFFFFFDFFu;
    eax = MEM32(esi + 0x3E0);
    MEM8(eax + 0xB4) = 0xFF;

loc_0035FE62: ;
    xmm0 = MEMF(0x801AB4); /* movss */
    MEM16(edi + 0x801A4C) = LO16(ebx);
    MEM8(edi + 0x801A48) = LO8(ebx);
    POP32(esp, edi);
    MEMF(esi + 0x2F8) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035FE86: ;
    ecx = ZX8(MEM8(edi + 0x801A49));
    eax = ZX8(MEM8(edi + 0x801A4A));
    ebx = MEM32(0x8470DC);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    xmm0 = MEMF(esi + ebx + 0x2F8); /* movss */
    eax = eax & 0xFFF;
    edx = eax + eax * 2;
    eax = MEM32(0x762E3C);
    eax = eax + edx * 8;
    MEM8(ecx + 0x762E40) = 3;
    esi = esi + ebx;
    edx = 1;
    MEM32(0x76EDFC) = edx;
    ebx = 0; /* xor self */
    MEM32(0x76EE00) = ebx;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    MEMF(0x801AB4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x76EE10) = xmm0; /* movss */
    MEM32(0x801ABC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x76EE14) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x76EE18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEMF(0x76EE1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x76EE20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x76EE24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    ecx = esi;
    MEMF(0x76EE04) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0035FF50: ;
    PUSH32(esp, 0x76EDFC);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0035FF5E: ;
    SET_LO8(eax, MEM8(edi + 0x801A54));
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0035FF87; /* jne: not equal / not zero */

loc_0035FF6B: ;
    edx = MEM32(esi + 0x3E0);
    MEM8(edx + 0xB4) = LO8(ebx);
    esi = MEM32(esi + 0x3E0);
    MEM32(esi + 0x468) = MEM32(esi + 0x468) | 0x200;

loc_0035FF87: ;
    eax = (int32_t)MEMF(edi + 0x801A58); /* cvttss2si */
    MEM32(ebp * 4 + 0x801A38) = eax;
    MEM8(edi + 0x801A48) = 2;

loc_0035FF9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035FFB0
 * Original: 0x0035FFB0 - 0x0035FFE3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FFB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0035FFB0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0035FFE2; /* je: equal / zero */

loc_0035FFB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x801A48;

loc_0035FFC2: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0035FFD4; /* je: equal / zero */

loc_0035FFC7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0035FD90(); /* call 0x0035FD90 */

loc_0035FFCD: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0035FFE0; /* jne: not equal / not zero */

loc_0035FFD4: ;
    esi = esi + 0x24;
    edi++;
    if (CMP_L(esi, 0x801AB4)) goto loc_0035FFC2; /* jl: less (signed <) */

loc_0035FFE0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0035FFE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035FFF0
 * Original: 0x0035FFF0 - 0x00360014 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035FFF0: ;
    ecx = MEM32(0x8470DC);
    eax = MEM32(0x84A144);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x770);
    ebp = ebp + ecx;
    if (CMP_LE(ebx, eax)) { sub_00360014(); return; } /* jle: less or equal (signed <=) */

loc_0036000F: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003608F0
 * Original: 0x003608F0 - 0x00360A86 (406 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003608F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003608F0: ;
    ecx = MEM32(0x8470DC);
    eax = MEM32(0x801ABC);
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    edi = edi + ecx;
    if (TEST_Z(eax, eax)) goto loc_00360A81; /* je: equal / zero */

loc_00360913: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x2DC;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    ebp = edi + 0x330;
    if (TEST_NZ(ebx, ebx)) goto loc_0036092B; /* jne: not equal / not zero */

loc_00360926: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0036092B: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00360934; /* jne: not equal / not zero */

loc_0036092F: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_00360934: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0E50(); /* call 0x002B0E50 */

loc_0036096F: ;
    eax = MEM32(esp + 0x24);
    xmm2 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(ebx); /* movss */
    xmm5 = MEMF(edi + 0x2E0); /* movss */
    xmm6 = MEMF(edi + 0x2E4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEMF(ebx) = xmm3; /* movss */
    xmm4 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    xmm3 = MEMF(0x648CE0); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    MEMF(edi + 0x2E0) = xmm5; /* movss */
    xmm5 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    MEMF(edi + 0x2E4) = xmm6; /* movss */
    edx = MEM32(ebx);
    ecx = edi + 0x2F4;
    MEM32(ecx) = edx;
    edx = MEM32(ebx + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebx + 8);
    MEM32(ecx + 8) = edx;
    xmm5 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = MEMF(ebp); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(edi + 0x334); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    esp = esp + 4;
    MEMF(edi + 0x334) = xmm2; /* movss */
    xmm1 = (float)(int32_t)MEM32(eax * 4 + 0x801A38); /* cvtsi2ss */
    POP32(esp, esi);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 0x338); /* movss */
    POP32(esp, ebp);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edi + 0x338) = xmm0; /* movss */
    POP32(esp, ebx);

loc_00360A81: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00360A90
 * Original: 0x00360A90 - 0x00360B3C (172 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00360A90: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00360A9D: ;
    esi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00360AA4: ;
    edx = MEM32(eax + 0x8004);
    ecx = 1;
    if (CMP_LE(edx, ecx)) goto loc_00360ADB; /* jle: less or equal (signed <=) */

loc_00360AB3: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(eax + 4), ecx)) goto loc_00360ADB; /* jne: not equal / not zero */

loc_00360ABC: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00360B15; /* je: equal / zero */

loc_00360AC1: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00360AC8: ;
    if (TEST_Z(eax, eax)) goto loc_00360B15; /* je: equal / zero */

loc_00360ACC: ;
    eax = ZX8(MEM8(eax + 0x253));
    POP32(esp, esi);
    eax = eax | 0x2000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00360ADB: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_00360B3C(); return; } /* je: equal / zero */

loc_00360AE0: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00360AE7: ;
    if (TEST_NZ(eax, eax)) goto loc_00360B33; /* jne: not equal / not zero */

loc_00360AEB: ;
    ecx = MEM32(0x84A1AC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    MEM8(eax + ecx + 0xA) = 0;
    edx = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    eax = eax + edx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_00360B0E: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00360B1B; /* jne: not equal / not zero */

loc_00360B15: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00360B1B: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00360B22: ;
    esi = eax;

loc_00360B24: ;
    if (TEST_Z(esi, esi)) goto loc_00360B2E; /* je: equal / zero */

loc_00360B28: ;
    esi = esi | 0x2000;

loc_00360B2E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00360B33: ;
    esi = ZX8(MEM8(eax + 0x253));
    goto loc_00360B24;

}

/**
 * sub_00360B50
 * Original: 0x00360B50 - 0x00360B64 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00360B50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00360B5B: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_00360B64(); return; } /* jne: not equal / not zero */

loc_00360B61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00360BC0
 * Original: 0x00360BC0 - 0x00360BE0 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00360BC0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00360BCF: ;
    ebp = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(ebp, ebx)) { sub_00360BE0(); return; } /* jne: not equal / not zero */

loc_00360BD7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00365C50
 * Original: 0x00365C50 - 0x00365C5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00365C50: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_00365C5E(); return; } /* jne: not equal / not zero */

loc_00365C57: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365CA0
 * Original: 0x00365CA0 - 0x00365CDD (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00365CA0: ;
    esp = esp - 0x458;
    ecx = MEM32(esp + 0x460);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00365CC4; /* je: equal / zero */

loc_00365CBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00365CC4: ;
    ebx = MEM32(esp + 0x474);
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x10) = 1;
    g_seh_ebp = ebp; sub_00365CE0(); return; /* tail jmp 0x00365CE0 */

}

/**
 * sub_00365F10
 * Original: 0x00365F10 - 0x003661F4 (740 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00365F10: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(eax, 5)) goto loc_003661ED; /* ja: above (unsigned >) */

loc_00365F1E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3661F4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00365F25u) goto loc_00365F25;
    if (_jt == 0x00365FDBu) goto loc_00365FDB;
    if (_jt == 0x0036606Du) goto loc_0036606D;
    if (_jt == 0x0036610Fu) goto loc_0036610F;
    if (_jt == 0x00366185u) goto loc_00366185;
    if (_jt == 0x003661E6u) goto loc_003661E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00365F25: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036610B; /* jne: not equal / not zero */

loc_00365F32: ;
    esi = MEM32(0x7FA1F8);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00365F3D: ;
    if (CMP_NE(MEM32(eax + 0x8004), 6)) goto loc_00365F88; /* jne: not equal / not zero */

loc_00365F46: ;
    eax = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)MEM32(eax + 0x14); /* cvtsi2ss */
    SET_LO16(ecx, MEM16(eax + 0x10));
    SET_LO16(edx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(eax);
    MEM16(0x76E87E) = LO16(edx);
    MEM16(0x76E880) = LO16(ecx);
    MEM8(0x76E868) = 1;
    goto loc_00365FBB;

loc_00365F88: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00365F8D: ;
    if (CMP_NE(MEM32(eax + 0x8004), 3)) goto loc_00365FBB; /* jne: not equal / not zero */

loc_00365F96: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    edx = eax;
    edx = edx & 0xF000;
    if (CMP_NE(edx, 0x2000)) goto loc_00365FB9; /* jne: not equal / not zero */

loc_00365FAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003662F0(); /* call 0x003662F0 */

loc_00365FB4: ;
    esp = esp + 4;
    goto loc_00365FBB;

loc_00365FB9: ;
    esi = eax;

loc_00365FBB: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00365FC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_00365FD1: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00365FDB: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036610B; /* jne: not equal / not zero */

loc_00365FE8: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00365FED: ;
    if (CMP_NE(MEM32(eax + 0x8004), 6)) goto loc_00366036; /* jne: not equal / not zero */

loc_00365FF6: ;
    eax = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)MEM32(eax + 0x14); /* cvtsi2ss */
    SET_LO16(ecx, MEM16(eax + 0x10));
    SET_LO16(edx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(eax);
    MEM16(0x76E87E) = LO16(edx);
    MEM16(0x76E880) = LO16(ecx);
    MEM8(0x76E868) = 1;

loc_00366036: ;
    esi = MEM32(0x7FA1F8);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366041: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x25);
    MEM32(0x7FA1F8) = 0x25;
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_0036605D: ;
    esp = esp + 0x14;
    MEM32(0x7FA1F8) = esi;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036606D: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036610B; /* jne: not equal / not zero */

loc_0036607A: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA1F8);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366092: ;
    if (CMP_NE(MEM32(eax + 0x8004), 8)) goto loc_003660D9; /* jne: not equal / not zero */

loc_0036609B: ;
    xmm0 = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    SET_LO16(eax, MEM16(esi + 0x18));
    SET_LO16(ecx, MEM16(esi + 0x14));
    SET_LO16(edx, MEM16(esi + 0x10));
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(edx);
    MEM16(0x76E87E) = LO16(ecx);
    MEM16(0x76E880) = LO16(eax);
    MEM8(0x76E868) = 1;
    goto loc_003660EA;

loc_003660D9: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003660DE: ;
    if (CMP_NE(MEM32(eax + 0x8004), 5)) goto loc_003660EA; /* jne: not equal / not zero */

loc_003660E7: ;
    edi = MEM32(esi + 0x10);

loc_003660EA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_003660F9: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366101: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036610B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036610F: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(0x7FA1F8));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(0x76F0B8) = LO8(ecx);
    MEM8(0x76F0B7) = LO8(edx);
    MEM8(0x7655F9) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366133: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 6)) goto loc_003661A6; /* je: equal / zero */

loc_0036613C: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366141: ;
    if (CMP_NE(MEM32(eax + 0x8004), 3)) goto loc_003661ED; /* jne: not equal / not zero */

loc_0036614E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    edx = eax;
    edx = edx & 0xF000;
    if (CMP_NE(edx, 0x2000)) goto loc_00366176; /* jne: not equal / not zero */

loc_00366165: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003662F0(); /* call 0x003662F0 */

loc_0036616C: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00366176: ;
    SET_LO8(eax, MEM8(ecx + 8));
    MEM8(0x76F0B7) = LO8(eax);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00366185: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(0x76F0B8) = LO8(ecx);
    MEM8(0x76F0B7) = 0x25;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0036619D: ;
    if (CMP_NE(MEM32(eax + 0x8004), 6)) goto loc_003661ED; /* jne: not equal / not zero */

loc_003661A6: ;
    eax = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)MEM32(eax + 0x14); /* cvtsi2ss */
    SET_LO16(ecx, MEM16(eax + 0x10));
    SET_LO16(edx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 8));
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    MEM16(0x76E870) = LO16(eax);
    MEMF(0x76E86C) = xmm0; /* movss */
    MEM16(0x76E872) = LO16(edx);
    MEM16(0x76E874) = LO16(ecx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003661E6: ;
    MEM8(0x7655F7) = 1;

loc_003661ED: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003663B0
 * Original: 0x003663B0 - 0x00366B73 (1987 bytes, 667 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003663B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;

loc_003663B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x3E - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_A(eax, 0x3E)) goto loc_00366B68; /* ja: above (unsigned >) */

loc_003663D1: ;
    eax = ZX8(MEM8(eax + 0x366C04));
    { uint32_t _jt = MEM32(eax * 4 + 0x366B74); /* switch: 36 entries, 35 targets */
    if (_jt == 0x003663DFu) goto loc_003663DF;
    if (_jt == 0x003663F7u) goto loc_003663F7;
    if (_jt == 0x00366407u) goto loc_00366407;
    if (_jt == 0x0036641Fu) goto loc_0036641F;
    if (_jt == 0x00366452u) goto loc_00366452;
    if (_jt == 0x00366483u) goto loc_00366483;
    if (_jt == 0x00366493u) goto loc_00366493;
    if (_jt == 0x003664C5u) goto loc_003664C5;
    if (_jt == 0x003664D5u) goto loc_003664D5;
    if (_jt == 0x00366500u) goto loc_00366500;
    if (_jt == 0x00366551u) goto loc_00366551;
    if (_jt == 0x0036661Du) goto loc_0036661D;
    if (_jt == 0x00366668u) goto loc_00366668;
    if (_jt == 0x00366713u) goto loc_00366713;
    if (_jt == 0x00366807u) goto loc_00366807;
    if (_jt == 0x00366817u) goto loc_00366817;
    if (_jt == 0x00366856u) goto loc_00366856;
    if (_jt == 0x00366877u) goto loc_00366877;
    if (_jt == 0x0036688Du) goto loc_0036688D;
    if (_jt == 0x003668A6u) goto loc_003668A6;
    if (_jt == 0x003668D6u) goto loc_003668D6;
    if (_jt == 0x003668EDu) goto loc_003668ED;
    if (_jt == 0x003668FFu) goto loc_003668FF;
    if (_jt == 0x00366915u) goto loc_00366915;
    if (_jt == 0x00366960u) goto loc_00366960;
    if (_jt == 0x003669BAu) goto loc_003669BA;
    if (_jt == 0x003669F8u) goto loc_003669F8;
    if (_jt == 0x00366A5Cu) goto loc_00366A5C;
    if (_jt == 0x00366A6Cu) goto loc_00366A6C;
    if (_jt == 0x00366A89u) goto loc_00366A89;
    if (_jt == 0x00366AADu) goto loc_00366AAD;
    if (_jt == 0x00366AD0u) goto loc_00366AD0;
    if (_jt == 0x00366AFBu) goto loc_00366AFB;
    if (_jt == 0x00366B59u) goto loc_00366B59;
    if (_jt == 0x00366B68u) goto loc_00366B68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003663DF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000E5580(); /* call 0x000E5580 */

loc_003663E9: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003663F7: ;
    PUSH32(esp, 0); sub_0016E930(); /* call 0x0016E930 */

loc_003663FC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366407: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0016E6F0(); /* call 0x0016E6F0 */

loc_00366411: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0036641F: ;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366430: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_00366438: ;
    PUSH32(esp, 0xFF);
    edi = eax;
    PUSH32(esp, 0); sub_00172420(); /* call 0x00172420 */

loc_00366444: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366452: ;
    edx = MEM32(ebp + 0xC);
    esi = MEM32(edx + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366463: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_0036646B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0016B2F0(); /* call 0x0016B2F0 */

loc_00366475: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366483: ;
    PUSH32(esp, 0); sub_0016E9A0(); /* call 0x0016E9A0 */

loc_00366488: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366493: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_003664A4: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_003664AC: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00171510(); /* call 0x00171510 */

loc_003664B7: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003664C5: ;
    PUSH32(esp, 0); sub_001693E0(); /* call 0x001693E0 */

loc_003664CA: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003664D5: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x78);
    eax = eax & 0xFFF;
    PUSH32(esp, 0); sub_00123210(); /* call 0x00123210 */

loc_003664F2: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366500: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    eax = eax & 0xFFF;
    PUSH32(esp, 0); sub_00123210(); /* call 0x00123210 */

loc_0036651F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x1EB;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00366546: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366551: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = 0; /* xor self */
    MEM32(esp + 0xD0) = ebx;
    MEM8(esp + 0xD4) = LO8(ebx);
    MEM8(esp + 0xD5) = LO8(ebx);
    MEM32(esp + 0xD8) = ebx;
    ecx = 0x24;
    edi = esp + 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    xmm0 = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    PUSH32(esp, 0xC61C4000u);
    PUSH32(esp, ebx);
    esi = esp + 0x3C;
    edi = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_003665C3: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00366B68; /* je: equal / zero */

loc_003665CE: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = edi;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = esp + 0x50;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AC380(); /* call 0x000AC380 */

loc_0036660F: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0036661D: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366622: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 2)) goto loc_00366639; /* je: equal / zero */

loc_0036662B: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366630: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366639: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366653: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_0036665A: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366668: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0036666D: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 2)) goto loc_00366688; /* je: equal / zero */

loc_00366676: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0036667B: ;
    if (CMP_NE(MEM32(eax + 0x8004), 3)) goto loc_00366B68; /* jne: not equal / not zero */

loc_00366688: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366699: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_003666A1: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0xFF);
    ecx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AC560(); /* call 0x000AC560 */

loc_003666DE: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003666E6: ;
    if (CMP_LE(MEM32(eax + 0x8004), 2)) goto loc_00366B68; /* jle: less or equal (signed <=) */

loc_003666F3: ;
    eax = MEM32(0x847024);
    ecx = MEM32(edi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_00366708: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366713: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366718: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 4)) goto loc_00366733; /* je: equal / zero */

loc_00366721: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366726: ;
    if (CMP_NE(MEM32(eax + 0x8004), 5)) goto loc_00366B68; /* jne: not equal / not zero */

loc_00366733: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366744: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_0036674E: ;
    xmm6 = (float)(int32_t)MEM32(edi + 8); /* cvtsi2ss */
    xmm5 = (float)(int32_t)MEM32(edi + 0xC); /* cvtsi2ss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00366767: ;
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0036677B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00366786: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    eax = esp + 0x34;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esi;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AC560(); /* call 0x000AC560 */

loc_003667D1: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003667D9: ;
    if (CMP_LE(MEM32(eax + 0x8004), 4)) goto loc_00366B68; /* jle: less or equal (signed <=) */

loc_003667E6: ;
    edx = MEM32(0x847024);
    edx = MEM32(edx + 0x40);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_003667FC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366807: ;
    PUSH32(esp, 0); sub_001710A0(); /* call 0x001710A0 */

loc_0036680C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366817: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(edi + 4));
    MEM8(esp + 0x17) = LO8(ebx);
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00366826: ;
    ecx = MEM32(edi + 8);
    SET_LO16(edi, MEM16(edi + 0xC));
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esp + ecx + 0x23));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C7E80(); /* call 0x000C7E80 */

loc_00366848: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366856: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0011E2D0(); /* call 0x0011E2D0 */

loc_00366869: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366877: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0); sub_0014A4D0(); /* call 0x0014A4D0 */

loc_00366882: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0036688D: ;
    PUSH32(esp, 0x1F);
    ecx = 0; /* xor self */
    SET_LO8(eax, 0x16);
    PUSH32(esp, 0); sub_0011F6D0(); /* call 0x0011F6D0 */

loc_00366898: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003668A6: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 8));
    PUSH32(esp, 0xFF);
    esi = esi & 0xFFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_003668C3: ;
    PUSH32(esp, 0); sub_001148C0(); /* call 0x001148C0 */

loc_003668C8: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003668D6: ;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(edx + 4);
    PUSH32(esp, 0); sub_0015FA90(); /* call 0x0015FA90 */

loc_003668E1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003668ED: ;
    MEM8(0x774C33) = 1;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003668FF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_001BD110(); /* call 0x001BD110 */

loc_0036690A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366915: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x20);
    eax = MEM32(edx + 0x1C);
    esi = MEM32(edx + 0x10);
    edi = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, 0); sub_000C2560(); /* call 0x000C2560 */

loc_00366939: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_00366948: ;
    ecx = eax;
    ecx = ecx << 6;
    ecx = ecx | 0xE004;
    MEM32(esp + 0x10) = ecx;
    eax = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366960: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x10);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366971: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_00366979: ;
    edx = MEM32(edi + 0xC);
    xmm0 = (float)(int32_t)MEM32(edi + 0x1C); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x14);
    PUSH32(esp, 0); sub_000C2620(); /* call 0x000C2620 */

loc_00366998: ;
    esp = esp + 0x10;

loc_0036699B: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_003669A7: ;
    eax = eax << 6;
    eax = eax | 0xE004;
    MEM32(esp + 0x10) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003669BA: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = (float)(int32_t)MEM32(eax + 0x20); /* cvtsi2ss */
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C26B0(); /* call 0x000C26B0 */

loc_003669F3: ;
    esp = esp + 0x24;
    goto loc_0036699B;

loc_003669F8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003669FD: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(eax + 4), 0x3E7 - flags set for next jcc */
    PUSH32(esp, 0xFF);
    if (CMP_NE(MEM32(eax + 4), 0x3E7)) goto loc_00366A46; /* jne: not equal / not zero */

loc_00366A0E: ;
    xmm0 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 0x10); /* cvtsi2ss */
    eax = esp + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00112FE0(); /* call 0x00112FE0 */

loc_00366A38: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366A46: ;
    SET_LO8(eax, MEM8(eax + 4));
    PUSH32(esp, 0); sub_00188060(); /* call 0x00188060 */

loc_00366A4E: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366A5C: ;
    PUSH32(esp, 0); sub_001886B0(); /* call 0x001886B0 */

loc_00366A61: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366A6C: ;
    ecx = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0014A340(); /* call 0x0014A340 */

loc_00366A7B: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366A89: ;
    PUSH32(esp, 0x27);
    ecx = 0; /* xor self */
    SET_LO8(eax, 0x23);
    PUSH32(esp, 0); sub_0011F6D0(); /* call 0x0011F6D0 */

loc_00366A94: ;
    PUSH32(esp, 0x27);
    ecx = 0; /* xor self */
    SET_LO8(eax, 0x24);
    PUSH32(esp, 0); sub_0011F6D0(); /* call 0x0011F6D0 */

loc_00366A9F: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366AAD: ;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax + 4));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00366AB8: ;
    if (CMP_EQ(eax, ebx)) goto loc_00366B68; /* je: equal / zero */

loc_00366AC0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00366AC5: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366AD0: ;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 4);
    PUSH32(esp, 0xFF);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366AE6: ;
    edi = eax;
    PUSH32(esp, 0); sub_00118080(); /* call 0x00118080 */

loc_00366AED: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366AFB: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366B00: ;
    (void)0; /* cmp MEM32(eax + 0x8004), 2 - flags set for next jcc */
    esi = 3;
    if (CMP_EQ(MEM32(eax + 0x8004), 2)) goto loc_00366B1B; /* je: equal / zero */

loc_00366B0E: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366B13: ;
    if (CMP_NE(MEM32(eax + 0x8004), esi)) goto loc_00366B68; /* jne: not equal / not zero */

loc_00366B1B: ;
    edi = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00366B25: ;
    (void)0; /* cmp MEM32(eax + 0x8004), esi - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(eax + 0x8004), esi)) goto loc_00366B33; /* jne: not equal / not zero */

loc_00366B30: ;
    edi = MEM32(eax + 8);

loc_00366B33: ;
    esi = MEM32(eax + 4);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00366B41: ;
    if (TEST_Z(eax, eax)) goto loc_00366B68; /* je: equal / zero */

loc_00366B45: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_00366B4B: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00366B59: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00136C00(); /* call 0x00136C00 */

loc_00366B65: ;
    esp = esp + 4;

loc_00366B68: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00367310
 * Original: 0x00367310 - 0x0036734C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367310(void)
{

loc_00367310: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7FFF);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 8));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 4));
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0017CC60(); /* call 0x0017CC60 */

loc_00367343: ;
    esp = esp + 0x20;
    eax = 0x8000;
    esp += 4; return; /* ret */

}

/**
 * sub_00367350
 * Original: 0x00367350 - 0x00367379 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00367350: ;
    eax = MEM32(0x7715E4);
    if (TEST_Z(eax, eax)) goto loc_00367376; /* je: equal / zero */

loc_00367359: ;
    SET_LO8(ecx, MEM8(esp + 4));
    /* nop */

loc_00367360: ;
    if (CMP_EQ(MEM8(eax + 0x58), LO8(ecx))) goto loc_0036736D; /* je: equal / zero */

loc_00367365: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00367360; /* jne: not equal / not zero */

loc_0036736C: ;
    esp += 4; return; /* ret */

loc_0036736D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0017D860(); /* call 0x0017D860 */

loc_00367373: ;
    esp = esp + 4;

loc_00367376: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00367380
 * Original: 0x00367380 - 0x003673B6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00367380: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) { sub_003673B6(); return; } /* je: equal / zero */

loc_00367389: ;
    eax--;
    if ((eax == 0)) goto loc_0036738F; /* je: equal / zero */

loc_0036738C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0036738F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x14));
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    PUSH32(esp, 0); sub_0017D790(); /* call 0x0017D790 */

loc_003673AD: ;
    esp = esp + 8;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00367410
 * Original: 0x00367410 - 0x00367442 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367410: ;
    eax = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) { sub_00367442(); return; } /* jne: not equal / not zero */

loc_00367418: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi = esi & 0xFFFFDFFFu;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_0036742B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_00367442(); return; } /* je: equal / zero */

loc_00367430: ;
    ecx = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_00367442(); return; } /* je: equal / zero */

loc_00367439: ;
    SET_LO8(edx, MEM8(esp + 4));
    g_seh_ebp = ebp; sub_0017D7D0(); return; /* tail jmp 0x0017D7D0 */

}

/**
 * sub_00367450
 * Original: 0x00367450 - 0x003674A9 (89 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367450(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00367450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(esi + 4), 1)) goto loc_003674A5; /* jne: not equal / not zero */

loc_0036745B: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00367460: ;
    if (CMP_NE(MEM32(eax + 0x8004), 3)) goto loc_003674A5; /* jne: not equal / not zero */

loc_00367469: ;
    xmm1 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    eax = MEM32(esi + 8);
    xmm0 = MEMF(0x648D48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax * 4 + 0x801ADC) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    ecx = MEM32(esi + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x801AC8) = xmm1; /* movss */
    edx = MEM32(esi + 8);
    MEM8(edx + 0x801AC0) = 1;

loc_003674A5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003674B0
 * Original: 0x003674B0 - 0x00368C66 (6070 bytes, 1839 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003674B0(void)
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

loc_003674B0: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x298;
    (void)0; /* cmp ecx, 0x63 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx, 0x63)) goto loc_00368C59; /* ja: above (unsigned >) */

loc_003674C7: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x368C68); /* switch: 100 entries, 84 targets */
    if (_jt == 0x003674CEu) goto loc_003674CE;
    if (_jt == 0x003674E2u) goto loc_003674E2;
    if (_jt == 0x00367549u) goto loc_00367549;
    if (_jt == 0x00367565u) goto loc_00367565;
    if (_jt == 0x00367581u) goto loc_00367581;
    if (_jt == 0x00367591u) goto loc_00367591;
    if (_jt == 0x003675A1u) goto loc_003675A1;
    if (_jt == 0x003675B1u) goto loc_003675B1;
    if (_jt == 0x003675CEu) goto loc_003675CE;
    if (_jt == 0x00367629u) goto loc_00367629;
    if (_jt == 0x00367650u) goto loc_00367650;
    if (_jt == 0x00367679u) goto loc_00367679;
    if (_jt == 0x00367698u) goto loc_00367698;
    if (_jt == 0x003676BBu) goto loc_003676BB;
    if (_jt == 0x003676DEu) goto loc_003676DE;
    if (_jt == 0x003676FFu) goto loc_003676FF;
    if (_jt == 0x0036771Bu) goto loc_0036771B;
    if (_jt == 0x0036779Eu) goto loc_0036779E;
    if (_jt == 0x00367820u) goto loc_00367820;
    if (_jt == 0x00367851u) goto loc_00367851;
    if (_jt == 0x00367881u) goto loc_00367881;
    if (_jt == 0x003678D0u) goto loc_003678D0;
    if (_jt == 0x00367951u) goto loc_00367951;
    if (_jt == 0x003679BFu) goto loc_003679BF;
    if (_jt == 0x003679F0u) goto loc_003679F0;
    if (_jt == 0x00367A10u) goto loc_00367A10;
    if (_jt == 0x00367A3Cu) goto loc_00367A3C;
    if (_jt == 0x00367A6Du) goto loc_00367A6D;
    if (_jt == 0x00367A90u) goto loc_00367A90;
    if (_jt == 0x00367ABBu) goto loc_00367ABB;
    if (_jt == 0x00367AD3u) goto loc_00367AD3;
    if (_jt == 0x00367B25u) goto loc_00367B25;
    if (_jt == 0x00367B8Fu) goto loc_00367B8F;
    if (_jt == 0x00367C06u) goto loc_00367C06;
    if (_jt == 0x00367C18u) goto loc_00367C18;
    if (_jt == 0x00367C2Au) goto loc_00367C2A;
    if (_jt == 0x00367C5Cu) goto loc_00367C5C;
    if (_jt == 0x00367C87u) goto loc_00367C87;
    if (_jt == 0x00367CA8u) goto loc_00367CA8;
    if (_jt == 0x00367CDBu) goto loc_00367CDB;
    if (_jt == 0x00367D04u) goto loc_00367D04;
    if (_jt == 0x00367D4Cu) goto loc_00367D4C;
    if (_jt == 0x00367D8Au) goto loc_00367D8A;
    if (_jt == 0x00367EE4u) goto loc_00367EE4;
    if (_jt == 0x00367F08u) goto loc_00367F08;
    if (_jt == 0x00367F24u) goto loc_00367F24;
    if (_jt == 0x00367F5Au) goto loc_00367F5A;
    if (_jt == 0x00367F8Cu) goto loc_00367F8C;
    if (_jt == 0x00367FC2u) goto loc_00367FC2;
    if (_jt == 0x00367FF9u) goto loc_00367FF9;
    if (_jt == 0x00368027u) goto loc_00368027;
    if (_jt == 0x00368049u) goto loc_00368049;
    if (_jt == 0x0036806Bu) goto loc_0036806B;
    if (_jt == 0x00368095u) goto loc_00368095;
    if (_jt == 0x003680B8u) goto loc_003680B8;
    if (_jt == 0x003680DBu) goto loc_003680DB;
    if (_jt == 0x003680F9u) goto loc_003680F9;
    if (_jt == 0x00368351u) goto loc_00368351;
    if (_jt == 0x00368392u) goto loc_00368392;
    if (_jt == 0x003683AFu) goto loc_003683AF;
    if (_jt == 0x003683CBu) goto loc_003683CB;
    if (_jt == 0x003683F4u) goto loc_003683F4;
    if (_jt == 0x00368414u) goto loc_00368414;
    if (_jt == 0x0036846Du) goto loc_0036846D;
    if (_jt == 0x003684E2u) goto loc_003684E2;
    if (_jt == 0x0036854Fu) goto loc_0036854F;
    if (_jt == 0x00368590u) goto loc_00368590;
    if (_jt == 0x003685C4u) goto loc_003685C4;
    if (_jt == 0x003685F4u) goto loc_003685F4;
    if (_jt == 0x00368625u) goto loc_00368625;
    if (_jt == 0x0036867Eu) goto loc_0036867E;
    if (_jt == 0x003686AAu) goto loc_003686AA;
    if (_jt == 0x00368717u) goto loc_00368717;
    if (_jt == 0x0036879Au) goto loc_0036879A;
    if (_jt == 0x003689F6u) goto loc_003689F6;
    if (_jt == 0x00368A0Au) goto loc_00368A0A;
    if (_jt == 0x00368A1Eu) goto loc_00368A1E;
    if (_jt == 0x00368A55u) goto loc_00368A55;
    if (_jt == 0x00368B33u) goto loc_00368B33;
    if (_jt == 0x00368B54u) goto loc_00368B54;
    if (_jt == 0x00368B6Eu) goto loc_00368B6E;
    if (_jt == 0x00368BC2u) goto loc_00368BC2;
    if (_jt == 0x00368C45u) goto loc_00368C45;
    if (_jt == 0x00368C59u) goto loc_00368C59;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003674CE: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000FE580(); /* call 0x000FE580 */

loc_003674D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003674E2: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 8);
    ecx = ecx + 0x3B;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x96);
    SET_LO8(ecx, 0x21);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00367532: ;
    MEM8(0x849818) = MEM8(0x849818) | 0x80;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367549: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x7FFF98) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367565: ;
    ecx = MEM32(esp + 0x2B4);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_00318DD0(); /* call 0x00318DD0 */

loc_00367574: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367581: ;
    PUSH32(esp, 0); sub_0035F100(); /* call 0x0035F100 */

loc_00367586: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367591: ;
    PUSH32(esp, 0); sub_0035F370(); /* call 0x0035F370 */

loc_00367596: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003675A1: ;
    PUSH32(esp, 0); sub_0035F420(); /* call 0x0035F420 */

loc_003675A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003675B1: ;
    ecx = MEM32(esp + 0x2B4);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_0035F640(); /* call 0x0035F640 */

loc_003675C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003675CE: ;
    edi = MEM32(esp + 0x2B4);
    esi = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034B300(); /* call 0x0034B300 */

loc_003675DD: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_00368C59; /* je: equal / zero */

loc_003675E8: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0034B2A0(); /* call 0x0034B2A0 */

loc_003675FA: ;
    xmm0 = (float)(int32_t)MEM32(edi + 0xC); /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00376550(); /* call 0x00376550 */

loc_00367619: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367629: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034BB10(); /* call 0x0034BB10 */

loc_00367640: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367650: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034BE10(); /* call 0x0034BE10 */

loc_00367669: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367679: ;
    eax = MEM32(esp + 0x2B4);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_0034CE10(); /* call 0x0034CE10 */

loc_0036768B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367698: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034CFF0(); /* call 0x0034CFF0 */

loc_003676AB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003676BB: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0034CFD0(); /* call 0x0034CFD0 */

loc_003676CE: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003676DE: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034D0B0(); /* call 0x0034D0B0 */

loc_003676F1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003676FF: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 8);
    PUSH32(esp, 0); sub_0035F350(); /* call 0x0035F350 */

loc_0036770E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036771B: ;
    esi = MEM32(esp + 0x2B4);
    xmm0 = MEMF(0x648D48); /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    eax = MEM32(esi + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    eax = eax << 2;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    ecx = eax + 0x801ADC;
    edx = eax + 0x801AC8;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00367778: ;
    eax = MEM32(esi + 8);
    xmm0 = MEMF(eax * 4 + 0x801AC8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D4C); /* mulss */
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = (int32_t)xmm0; /* cvttss2si */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036779E: ;
    esi = MEM32(esp + 0x2B4);
    ecx = MEM32(0x7FA21C);
    xmm0 = MEMF(0x648D48); /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    eax = MEM32(esi + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    eax = eax << 2;
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = eax + 0x801ADC;
    ecx = eax + 0x801AC8;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_003677FA: ;
    edx = MEM32(esi + 8);
    xmm0 = MEMF(edx * 4 + 0x801AC8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D4C); /* mulss */
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = (int32_t)xmm0; /* cvttss2si */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367820: ;
    eax = MEM32(esp + 0x2B4);
    SET_LO8(edx, MEM8(eax + 8));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0036782F: ;
    if (TEST_Z(eax, eax)) goto loc_00368C59; /* je: equal / zero */

loc_00367837: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00367841: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367851: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x18);
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    xmm1 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0); sub_0010A270(); /* call 0x0010A270 */

loc_00367871: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367881: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 8);
    if (TEST_S(edx, edx)) goto loc_00368C59; /* jl: less (signed <) */

loc_00367893: ;
    if (CMP_GE(edx, 0x29)) goto loc_00368C59; /* jge: greater or equal (signed >=) */

loc_0036789C: ;
    eax = MEM32(eax + 0xC);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0); sub_00019A60(); /* call 0x00019A60 */

loc_003678C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003678D0: ;
    ecx = MEM32(esp + 0x2B4);
    edx = MEM32(ecx + 8);
    if (TEST_S(edx, edx)) goto loc_00368C59; /* jl: less (signed <) */

loc_003678E2: ;
    if (CMP_GE(edx, 0x29)) goto loc_00368C59; /* jge: greater or equal (signed >=) */

loc_003678EB: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0xC);
    xmm0 = MEMF(0x648D48); /* movss */
    esi = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    esi = esi & 0xFFFF;
    eax = ecx;
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00015DD0(); /* call 0x00015DD0 */

loc_00367941: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367951: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 0xC);
    xmm1 = MEMF(0x648D48); /* movss */
    ecx = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x847024);
    ecx = ecx & 0xFFFF;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(edx + 8);
    edx = eax;
    POP32(esp, edi);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    edx = edx & 0xFFFF;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    POP32(esp, esi);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    POP32(esp, ebp);
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(ecx + 0x24) = xmm2; /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    MEM8(ecx + 0x2C) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003679BF: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003679C6: ;
    esi = eax;
    eax = MEM32(esp + 0x2B8);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    esp = esp + 4;
    MEM32(0x84702C) = esi;
    PUSH32(esp, 0); sub_00018E60(); /* call 0x00018E60 */

loc_003679E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003679F0: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 8);
    edx = MEM32(0x84702C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 8) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367A10: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 8);
    ecx = MEM32(0x84702C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0x10);
    POP32(esp, ebp);
    MEM32(ecx + 0x14) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367A3C: ;
    eax = MEM32(esp + 0x2B4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x10));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0xC));
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(0x84702C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00018F80(); /* call 0x00018F80 */

loc_00367A60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367A6D: ;
    ecx = MEM32(esp + 0x2B4);
    edx = MEM32(ecx + 8);
    ecx = MEM32(0x84702C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00018FE0(); /* call 0x00018FE0 */

loc_00367A83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367A90: ;
    eax = MEM32(0x84702C);
    edi = MEM32(0x847024);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00018560(); /* call 0x00018560 */

loc_00367AA3: ;
    edi = MEM32(0x847024);
    PUSH32(esp, 0); sub_00017C30(); /* call 0x00017C30 */

loc_00367AAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367ABB: ;
    ecx = MEM32(0x847024);
    PUSH32(esp, 0); sub_00017C80(); /* call 0x00017C80 */

loc_00367AC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367AD3: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x2B4);
    if (TEST_Z(eax, eax)) goto loc_00367AEF; /* je: equal / zero */

loc_00367AE7: ;
    esi = MEM32(ecx + 8);
    eax = MEM32(eax + esi * 4);
    goto loc_00367AF1;

loc_00367AEF: ;
    eax = 0; /* xor self */

loc_00367AF1: ;
    ecx = MEM32(ecx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00368C59; /* je: equal / zero */

loc_00367AFC: ;
    edx = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00367B18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367B25: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(eax + 8);
    edi = MEM32(eax + 0x14);
    ebp = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00367B4E: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax + edi * 4 + 0x58) = ebp;
    esp = esp + 0xC;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + edi * 4 + 0x64) = ecx;
    POP32(esp, edi);
    MEM32(eax + esi * 4 + 0x6C) = edx;
    MEMF(eax + esi * 4 + 0x74) = xmm0; /* movss */
    MEM32(eax + esi * 4 + 0x84) = ecx;
    MEMF(eax + esi * 4 + 0x8C) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367B8F: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00368C59; /* je: equal / zero */

loc_00367B9C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00368C59; /* je: equal / zero */

loc_00367BA9: ;
    eax = MEM32(esp + 0x2B4);
    eax = MEM32(eax + 0xC);
    if (CMP_LE(eax, 1)) goto loc_00368C59; /* jle: less or equal (signed <=) */

loc_00367BBC: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_GE(eax, ecx)) goto loc_00368C59; /* jge: greater or equal (signed >=) */

loc_00367BCB: ;
    ecx = MEM32(0x84A5F8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    esi = MEM32(edx + ecx + 0x568);
    if (TEST_Z(esi, esi)) goto loc_00368C59; /* je: equal / zero */

loc_00367BE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_00367BF6: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367C06: ;
    PUSH32(esp, 0); sub_003692F0(); /* call 0x003692F0 */

loc_00367C0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367C18: ;
    PUSH32(esp, 0); sub_00369590(); /* call 0x00369590 */

loc_00367C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367C2A: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_00063FF0(); /* call 0x00063FF0 */

loc_00367C4C: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367C5C: ;
    eax = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00073CF0(); /* call 0x00073CF0 */

loc_00367C77: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367C87: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 8);
    xmm1 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    PUSH32(esp, 0); sub_00073D20(); /* call 0x00073D20 */

loc_00367C9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367CA8: ;
    eax = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000739A0(); /* call 0x000739A0 */

loc_00367CCB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367CDB: ;
    eax = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    eax = MEM32(eax + 8);
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, 0); sub_000739D0(); /* call 0x000739D0 */

loc_00367CF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367D04: ;
    ecx = MEM32(esp + 0x2B4);
    eax = MEM32(ecx + 0xC);
    edx = eax;
    edx = edx & 0xFFFF;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 8);
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000739A0(); /* call 0x000739A0 */

loc_00367D3C: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367D4C: ;
    ecx = MEM32(esp + 0x2B4);
    eax = MEM32(ecx + 0xC);
    edx = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    edx = edx & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0); sub_000739D0(); /* call 0x000739D0 */

loc_00367D7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367D8A: ;
    ebx = MEM32(esp + 0x2B4);
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = 4;
    if (TEST_NZ(eax, eax)) goto loc_00367E3A; /* jne: not equal / not zero */

loc_00367DA1: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00367DA6: ;
    if (CMP_LE(MEM32(eax + 0x8004), ebp)) goto loc_00368C59; /* jle: less or equal (signed <=) */

loc_00367DB2: ;
    eax = MEM32(0x76FE00);
    edi = MEM32(eax + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(0x76FE08);
    if (TEST_Z(edi, edi)) goto loc_00367DFD; /* je: equal / zero */

loc_00367DC4: ;
    edx = MEM32(ebx + ebp * 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_00367DD2: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00367DFD; /* je: equal / zero */

loc_00367DDE: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(esi + 0xC);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);

loc_00367DFD: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00367E1F; /* jne: not equal / not zero */

loc_00367E04: ;
    eax = MEM32(esp + 0x2B4);
    ebx = MEM32(eax + ebp * 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_00367E15: ;
    ebx = MEM32(esp + 0x2B8);
    esp = esp + 4;

loc_00367E1F: ;
    ebp++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00367E25: ;
    if (CMP_L(ebp, MEM32(eax + 0x8004))) goto loc_00367DB2; /* jl: less (signed <) */

loc_00367E2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367E3A: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00367E3F: ;
    if (CMP_LE(MEM32(eax + 0x8004), ebp)) goto loc_00368C59; /* jle: less or equal (signed <=) */

loc_00367E4B: ;
    goto loc_00367E50;

    /* nop */

loc_00367E50: ;
    ecx = MEM32(0x76FE00);
    edi = MEM32(ecx + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(0x76FE08);
    if (TEST_Z(edi, edi)) goto loc_00367EA3; /* je: equal / zero */

loc_00367E63: ;
    eax = MEM32(ebx + ebp * 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_00367E71: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00367EA3; /* je: equal / zero */

loc_00367E7D: ;
    edx = MEM32(edi + 4);
    esi = MEM32(esi + 0xC);
    ecx = eax + eax * 4;
    ecx = MEM32(edx + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);

loc_00367EA3: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00367EC5; /* jne: not equal / not zero */

loc_00367EAA: ;
    eax = MEM32(esp + 0x2B4);
    ebx = MEM32(eax + ebp * 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_00367EBB: ;
    ebx = MEM32(esp + 0x2B8);
    esp = esp + 4;

loc_00367EC5: ;
    ebp++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00367ECB: ;
    if (CMP_L(ebp, MEM32(eax + 0x8004))) goto loc_00367E50; /* jl: less (signed <) */

loc_00367ED7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367EE4: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B76A0(); /* call 0x002B76A0 */

loc_00367EF8: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367F08: ;
    eax = MEM32(esp + 0x2B4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_00341330(); /* call 0x00341330 */

loc_00367F17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367F24: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F83A0(); /* call 0x002F83A0 */

loc_00367F4A: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367F5A: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F8330(); /* call 0x002F8330 */

loc_00367F7C: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367F8C: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x20);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F8500(); /* call 0x002F8500 */

loc_00367FB2: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367FC2: ;
    eax = MEM32(esp + 0x2B4);
    ebx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F8490(); /* call 0x002F8490 */

loc_00367FE9: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00367FF9: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F8420(); /* call 0x002F8420 */

loc_00368017: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368027: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0xC);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F8650(); /* call 0x002F8650 */

loc_0036803C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368049: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0xC);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F8620(); /* call 0x002F8620 */

loc_0036805E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036806B: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002F8580(); /* call 0x002F8580 */

loc_00368085: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368095: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00076400(); /* call 0x00076400 */

loc_003680A8: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003680B8: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00076440(); /* call 0x00076440 */

loc_003680CB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003680DB: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00076470(); /* call 0x00076470 */

loc_003680EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003680F9: ;
    (void)0; /* cmp ecx, 0x45 - flags set for next jcc */
    eax = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(eax + 0x10); /* cvtsi2ss */
    edx = MEM32(eax + 0x20);
    xmm1 = (float)(int32_t)MEM32(eax + 0x18); /* cvtsi2ss */
    esi = MEM32(eax + 8);
    ebx = MEM32(eax + 0xC);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 0x14); /* cvtsi2ss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x24);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(ecx, 0x45)) goto loc_00368169; /* jne: not equal / not zero */

loc_00368163: ;
    esi = esi + 0x269;

loc_00368169: ;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00368172: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = 1;
    ebp = edx;
    MEM32(esp + 0x74) = edx;
    MEM16(esp + 0x50) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM8(esp + 0x5A) = LO8(edx);
    edx = MEM32(0x84A148);
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    eax = 2;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 4;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0xA0) = eax;
    SET_LO8(eax, MEM8(esp + 0x30));
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x98) = ecx;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = ebx + 0xB;
    ebp = ebp << LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(esp + 0x59) = LO8(eax);
    eax = MEM32(0x84A13C);
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(eax + edx + 0x224); /* subss */
    eax = eax + edx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x228); /* subss */
    ebp = ebp | 0x100C1;
    MEM32(esp + 0x4C) = ebp;
    SET_LO8(eax, MEM8(esp + 0x4C));
    MEM32(esp + 0x78) = esi;
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM8(esp + 0x5B) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x62) = LO8(ebx);
    ebx = MEM32(0x7F9F60);
    MEM32(esp + 0x94) = esi;
    MEM32(esp + 0xA4) = esi;
    MEM16(esp + 0x52) = 0xFF;
    MEM8(esp + 0x58) = 0;
    MEM8(esp + 0x5C) = LO8(ecx);
    MEM8(esp + 0x61) = 0xFF;
    MEMF(esp + 0x54) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_003682A4; /* je: equal / zero */

loc_0036829D: ;
    eax = 0x72;
    goto loc_003682DF;

loc_003682A4: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_003682B3; /* je: equal / zero */

loc_003682AC: ;
    eax = 0x86;
    goto loc_003682DF;

loc_003682B3: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_003682C2; /* je: equal / zero */

loc_003682BB: ;
    eax = 0x80;
    goto loc_003682DF;

loc_003682C2: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_003682D1; /* je: equal / zero */

loc_003682CA: ;
    eax = 0x7A;
    goto loc_003682DF;

loc_003682D1: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_003682DF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_003682EF: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_00368C59; /* je: equal / zero */

loc_003682FA: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x16;
    if (TEST_NZ(ebp, 0x10000)) goto loc_0036833E; /* jne: not equal / not zero */

loc_00368317: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_00368338; /* je: equal / zero */

loc_0036831F: ;
    POP32(esp, edi);
    ecx = ecx & 0xFFFFFFFBu;
    POP32(esp, esi);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x180) = ebx;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368338: ;
    ecx = ecx | 4;
    MEM32(eax + 0x40) = ecx;

loc_0036833E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x180) = ebx;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368351: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00368367; /* je: equal / zero */

loc_0036835A: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00368C59; /* je: equal / zero */

loc_00368367: ;
    esi = MEM32(esp + 0x2B4);
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_00368373: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0); sub_00266040(); /* call 0x00266040 */

loc_0036837B: ;
    ebx = MEM32(esi + 8);
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_002438D0(); /* call 0x002438D0 */

loc_00368385: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368392: ;
    ecx = MEM32(esp + 0x2B4);
    SET_LO8(edx, MEM8(ecx + 8));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x776BC4) = LO8(edx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003683AF: ;
    eax = MEM32(esp + 0x2B4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_00243870(); /* call 0x00243870 */

loc_003683BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003683CB: ;
    ecx = MEM32(esp + 0x2B4);
    esi = MEM32(ecx + 8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0); sub_001DD550(); /* call 0x001DD550 */

loc_003683E4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003683F4: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_00368404: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368414: ;
    edx = MEM32(0x84A5F8);
    esi = MEM32(esp + 0x2B4);
    edi = MEM32(0x84A5FC);
    eax = 0; /* xor self */
    edx = edx + 0x238;
    SET_LO8(ebx, 0xA);

loc_00368431: ;
    ecx = ZX8(MEM8(eax + edi));
    if (CMP_NE(ecx, MEM32(esi + 8))) goto loc_00368454; /* jne: not equal / not zero */

loc_0036843A: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_00368454; /* je: equal / zero */

loc_00368440: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, MEM32(esi + 0xC))) goto loc_00368454; /* jne: not equal / not zero */

loc_00368447: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00368454; /* je: equal / zero */

loc_0036844E: ;
    MEM8(edx + -183) = LO8(ebx);

loc_00368454: ;
    eax++;
    edx = edx + 0x6D0;
    if (CMP_L(eax, 0x10)) goto loc_00368431; /* jl: less (signed <) */

loc_00368460: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036846D: ;
    ecx = MEM32(0x84A5F8);
    esi = MEM32(esp + 0x2B4);
    edi = MEM32(0x84A5FC);
    xmm0 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    ecx = ecx + 0x568;

loc_00368490: ;
    eax = ZX8(MEM8(edx + edi));
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_003684C9; /* jne: not equal / not zero */

loc_00368499: ;
    eax = MEM32(ecx + -816);
    if (TEST_Z(eax, eax)) goto loc_003684C9; /* je: equal / zero */

loc_003684A3: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, MEM32(esi + 0xC))) goto loc_003684C9; /* jne: not equal / not zero */

loc_003684AA: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003684C9; /* je: equal / zero */

loc_003684B1: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_003684C9; /* je: equal / zero */

loc_003684B7: ;
    ebx = MEM32(eax + 0x444);
    if (TEST_Z(ebx, ebx)) goto loc_003684C9; /* je: equal / zero */

loc_003684C1: ;
    MEMF(eax + 0x668) = xmm0; /* movss */

loc_003684C9: ;
    edx++;
    ecx = ecx + 0x6D0;
    if (CMP_L(edx, 0x10)) goto loc_00368490; /* jl: less (signed <) */

loc_003684D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003684E2: ;
    eax = MEM32(0x84A5F8);
    esi = MEM32(esp + 0x2B4);
    edi = MEM32(0x84A5FC);
    edx = 0; /* xor self */
    eax = eax + 0x568;
    SET_LO8(ebx, 0xA);
    /* nop */

loc_00368500: ;
    ecx = ZX8(MEM8(edx + edi));
    if (CMP_NE(ecx, MEM32(esi + 8))) goto loc_00368537; /* jne: not equal / not zero */

loc_00368509: ;
    ecx = MEM32(eax + -816);
    if (TEST_Z(ecx, ecx)) goto loc_00368537; /* je: equal / zero */

loc_00368513: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, MEM32(esi + 0xC))) goto loc_00368537; /* jne: not equal / not zero */

loc_0036851A: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00368537; /* je: equal / zero */

loc_00368521: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00368537; /* je: equal / zero */

loc_00368527: ;
    ebp = MEM32(ecx + 0x444);
    if (TEST_Z(ebp, ebp)) goto loc_00368537; /* je: equal / zero */

loc_00368531: ;
    MEM8(eax + -820) = LO8(ebx);

loc_00368537: ;
    edx++;
    eax = eax + 0x6D0;
    if (CMP_L(edx, 0x10)) goto loc_00368500; /* jl: less (signed <) */

loc_00368542: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036854F: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00368554: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(eax + 0x8004);
    ecx = edx + 0xC;
    edx = MEM32(edx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2D98);
    eax = eax - 3;
    PUSH32(esp, eax);
    eax = MEM32(0x84B330);
    edx = edx + eax + 0x8F54;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0033A540(); /* call 0x0033A540 */

loc_00368583: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368590: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00368595: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 8);
    edx = MEM32(0x84B330);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2D98);
    edi = ecx + edx + 0x8F54;
    PUSH32(esp, 0); sub_0033A890(); /* call 0x0033A890 */

loc_003685B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003685C4: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003685C9: ;
    ecx = MEM32(esp + 0x2B4);
    esi = MEM32(ecx + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_0034B580(); /* call 0x0034B580 */

loc_003685E4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003685F4: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003685F9: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2D98);
    eax = MEM32(0x84B330);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + eax + 0xBCE8) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368625: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0036862A: ;
    edx = MEM32(eax + 0x8004);
    ecx = MEM32(esp + 0x2B4);
    eax = MEM32(ecx + 8);
    esi = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2D98);
    edi = eax + esi + 0x8F54;
    eax = MEM32(ecx + 0xC);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0036865C; /* jne: not equal / not zero */

loc_00368655: ;
    eax = MEM32(edi + 0x2D80);
    eax--;

loc_0036865C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    esi = ecx + 0x10;
    edx = edx + 0xFFFFFFFCu;
    ecx = eax + edi + 0x30;
    PUSH32(esp, 0); sub_003376B0(); /* call 0x003376B0 */

loc_00368671: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036867E: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00368683: ;
    eax = MEM32(esp + 0x2B4);
    ecx = MEM32(eax + 0xC);
    SET_LO16(ebx, MEM16(eax + 0x10));
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034B7A0(); /* call 0x0034B7A0 */

loc_0036869A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003686AA: ;
    PUSH32(esp, 0); sub_003D2A20(); /* call 0x003D2A20 */

loc_003686AF: ;
    ecx = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_003686C8: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    SET_LO8(eax, MEM8(ecx + 0x10));
    MEM8(0x776171) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x14));
    MEM8(0x776170) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x18));
    MEM8(0x77616F) = LO8(edx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00368702: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_003D30B0(); /* call 0x003D30B0 */

loc_0036870A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368717: ;
    PUSH32(esp, 0); sub_002201E0(); /* call 0x002201E0 */

loc_0036871C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00368C59; /* jne: not equal / not zero */

loc_00368724: ;
    PUSH32(esp, 0); sub_003D2A20(); /* call 0x003D2A20 */

loc_00368729: ;
    ecx = MEM32(esp + 0x2B4);
    xmm0 = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_00368742: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    SET_LO8(edx, MEM8(ecx + 0xC));
    MEM8(0x776170) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x18));
    MEM8(0x776171) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x14));
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(ecx + 0x24);
    MEM8(0x77616F) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x63D6C4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00368785: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_003D30B0(); /* call 0x003D30B0 */

loc_0036878D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_0036879A: ;
    esi = MEM32(esp + 0x2B4);
    xmm2 = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648E54); /* mulss */
    xmm1 = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    xmm0 = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x20);
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A7A50(); /* call 0x002A7A50 */

loc_00368816: ;
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(0x7F9F5C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = (int32_t)xmm0; /* cvttss2si */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00368869: ;
    ebx = eax;
    ebx = ebx + MEM32(esi + 0x28);
    if (((int32_t)ebx >= 0)) goto loc_00368874; /* jns: not sign (positive) */

loc_00368870: ;
    ebx = 0; /* xor self */
    goto loc_00368881;

loc_00368874: ;
    if (CMP_LE(ebx, 0xFF)) goto loc_00368881; /* jle: less or equal (signed <=) */

loc_0036887C: ;
    ebx = 0xFF;

loc_00368881: ;
    edx = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = esp + 0x38;
    MEM8(esp + 0x1F) = (CMP_NE(edx, edi)) ? 1 : 0; /* setne */
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00368896: ;
    SET_LO8(ecx, MEM8(esp + 0x1F));
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = 2;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xA4) = eax;
    SET_LO8(eax, MEM8(esp + 0x2C));
    edx = 0; /* xor self */
    MEM8(esp + 0x5B) = LO8(eax);
    eax = MEM32(0x84A148);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM8(esp + 0x5A) = LO8(ecx);
    ecx = MEM32(0x84A13C);
    xmm0 = xmm0 - MEMF(eax + ecx + 0x224); /* subss */
    eax = eax + ecx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x228); /* subss */
    ebp = 0xFF;
    edx = edx + edx + 2;
    MEM32(esp + 0x98) = edx;
    SET_LO8(edx, MEM8(esp + 0x18));
    esi = 1;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    MEM8(esp + 0x60) = LO8(ebx);
    ebx = MEM32(0x7F9F60);
    PUSH32(esp, 0x86);
    eax = 0x184;
    MEM32(esp + 0x7C) = esi;
    MEM32(esp + 0x80) = ebp;
    MEM32(esp + 0x98) = edi;
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0x54) = 0x108C1;
    MEM16(esp + 0x58) = LO16(esi);
    MEM16(esp + 0x5A) = LO16(ebp);
    MEM8(esp + 0x60) = 0;
    MEM8(esp + 0x61) = LO8(edx);
    MEM8(esp + 0x69) = 0xFF;
    MEM8(esp + 0x6A) = 0;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_003689C3: ;
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) goto loc_00368C59; /* je: equal / zero */

loc_003689CE: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x17C) = 0x16;
    MEM32(eax + 0x180) = ebx;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_003689F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x6B99D8) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368A0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x74E3A0) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368A1E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00368C59; /* je: equal / zero */

loc_00368A2B: ;
    eax = MEM32(esp + 0x2B4);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edi = MEM32(eax + 0x14);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001EC4A0(); /* call 0x001EC4A0 */

loc_00368A45: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368A55: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00368C59; /* je: equal / zero */

loc_00368A64: ;
    edx = MEM32(esp + 0x2B4);
    edx = MEM32(edx + 8);
    eax = edx;
    esi = eax + 1;

loc_00368A73: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00368A73; /* jne: not equal / not zero */

loc_00368A7A: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x22C;
    PUSH32(esp, ecx);
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E4);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_00368A93: ;
    ecx = MEM32(0x7FA1F8);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x69CF90);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_001F5750(); /* call 0x001F5750 */

loc_00368AB9: ;
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x24);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x238;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00368AD8: ;
    esp = esp + 0x18;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, 0x50);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00368AF6; /* jne: not equal / not zero */

loc_00368AE2: ;
    edx = esp + 0x18C;
    PUSH32(esp, 0x5F3804);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00368AF4: ;
    goto loc_00368B10;

loc_00368AF6: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x190;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00368B08: ;
    MEM16(esp + 0x232) = LO16(ebx);

loc_00368B10: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    ebx = esp + 0x194;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_00368B23: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368B33: ;
    edx = MEM32(esp + 0x2B4);
    esi = MEM32(edx + 8);
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_00368B42: ;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_00368B47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368B54: ;
    PUSH32(esp, 0x5D5174);
    PUSH32(esp, 0); sub_001DD6D0(); /* call 0x001DD6D0 */

loc_00368B5E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368B6E: ;
    ebx = MEM32(esp + 0x2B4);
    edi = MEM32(ebx + 8);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_00368B80: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00368C59; /* je: equal / zero */

loc_00368B8A: ;
    edx = esi;
    PUSH32(esp, 0); sub_003433A0(); /* call 0x003433A0 */

loc_00368B91: ;
    if (TEST_Z(eax, eax)) goto loc_00368BAA; /* je: equal / zero */

loc_00368B95: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 0); sub_00343130(); /* call 0x00343130 */

loc_00368B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368BAA: ;
    eax = MEM32(esi + 0x238);
    ecx = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368BC2: ;
    esi = MEM32(0x84A5F8);
    edi = MEM32(esp + 0x2B4);
    ecx = MEM32(0x84A5FC);
    eax = 0x10;
    esi = esi + 0x6D00;

loc_00368BE0: ;
    if (CMP_NE(MEM8(eax + ecx), 0x35)) goto loc_00368BF2; /* jne: not equal / not zero */

loc_00368BE6: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    if (CMP_EQ(edx, MEM32(edi + 8))) goto loc_00368C0D; /* je: equal / zero */

loc_00368BF2: ;
    eax++;
    esi = esi + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_00368BE0; /* jl: less (signed <) */

loc_00368C00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368C0D: ;
    edx = esi;
    PUSH32(esp, 0); sub_003433A0(); /* call 0x003433A0 */

loc_00368C14: ;
    if (TEST_Z(eax, eax)) goto loc_00368C2D; /* je: equal / zero */

loc_00368C18: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_00343130(); /* call 0x00343130 */

loc_00368C20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368C2D: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x238);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

loc_00368C45: ;
    edx = MEM32(esp + 0x2B4);
    eax = MEM32(edx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(0x849870) = LO8(eax);

loc_00368C59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00369290
 * Original: 0x00369290 - 0x0036929A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00369290: ;
    if (CMP_EQ(MEM32(esp + 8), 3)) { sub_0036929A(); return; } /* je: equal / zero */

loc_00369297: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003692F0
 * Original: 0x003692F0 - 0x00369498 (424 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003692F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003692F0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003692FE; /* jne: not equal / not zero */

loc_003692F9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003692FE: ;
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
    if (TEST_Z(esi, esi)) goto loc_00369350; /* je: equal / zero */

loc_00369326: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14E70)) goto loc_00369350; /* jb: below (unsigned <) */

loc_00369332: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0036933C: ;
    PUSH32(esp, 0x14E70);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00369347: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_00369372; /* jne: not equal / not zero */

loc_00369350: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00369362: ;
    PUSH32(esp, 0x14E70);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0036936D: ;
    esp = esp + 8;
    edi = eax;

loc_00369372: ;
    eax = 0; /* xor self */
    ecx = 0x539C;
    MEM32(0x84B330) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(0x776563));
    if (CMP_GE(LO8(eax), 4)) goto loc_0036948E; /* jge: greater or equal (signed >=) */

loc_0036938E: ;
    eax = SX8(LO8(eax));
    if (CMP_G(eax & eax, 0)) goto loc_00369397; /* jg: greater (signed >) */

loc_00369395: ;
    eax = 0; /* xor self */

loc_00369397: ;
    ecx = MEM32(0x84B330);
    MEM8(ecx) = LO8(eax);
    eax = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(edx * 4 + 0x74D8A8);
    MEM32(eax + 0x20) = ecx;
    PUSH32(esp, 0); sub_0036FC80(); /* call 0x0036FC80 */

loc_003693B6: ;
    PUSH32(esp, 0); sub_00371630(); /* call 0x00371630 */

loc_003693BB: ;
    PUSH32(esp, 0); sub_0035A850(); /* call 0x0035A850 */

loc_003693C0: ;
    PUSH32(esp, 0); sub_00374270(); /* call 0x00374270 */

loc_003693C5: ;
    eax = MEM32(0x863D04);
    esi = 1;
    if (CMP_NE(eax, esi)) goto loc_003693D8; /* jne: not equal / not zero */

loc_003693D3: ;
    PUSH32(esp, 0); sub_00341880(); /* call 0x00341880 */

loc_003693D8: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D8);
    edx = edx << 1;
    PUSH32(esp, 0x63D7B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003693F3: ;
    ecx = MEM32(0x84B330);
    MEM32(ecx + 0x145C0) = eax;
    edx = MEM32(0x84B330);
    edi = MEM32(edx + 0x145C0);
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx << 1;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(0x84B330);
    MEM32(eax + 0x14E60) = 0;
    ecx = MEM32(0x84B330);
    MEM16(ecx + 0x14E58) = 0;
    edx = MEM32(0x84B330);
    esp = esp + 0x10;
    MEMF(edx + 0x14E5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00371770(); /* call 0x00371770 */

loc_0036945B: ;
    PUSH32(esp, 0); sub_0035F100(); /* call 0x0035F100 */

loc_00369460: ;
    eax = MEM32(0x84B30C);
    MEM32(eax + 0xB0) = 0xF0;
    PUSH32(esp, 0); sub_00369BD0(); /* call 0x00369BD0 */

loc_00369474: ;
    PUSH32(esp, 0); sub_0035F370(); /* call 0x0035F370 */

loc_00369479: ;
    PUSH32(esp, 0); sub_0035F730(); /* call 0x0035F730 */

loc_0036947E: ;
    eax = MEM32(0x863D04);
    POP32(esp, edi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, esi)) { sub_00369498(); return; } /* jne: not equal / not zero */

loc_00369489: ;
    g_seh_ebp = ebp; sub_0036B940(); return; /* tail jmp 0x0036B940 */

loc_0036948E: ;
    eax = 4;
    goto loc_00369397;

}

/**
 * sub_003694A0
 * Original: 0x003694A0 - 0x0036958E (238 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003694A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003694A0: ;
    eax = MEM32(0x84B330);
    if (TEST_Z(eax, eax)) goto loc_0036958D; /* je: equal / zero */

loc_003694AD: ;
    eax = MEM32(0x84B274);
    if (TEST_Z(eax, eax)) goto loc_003694D7; /* je: equal / zero */

loc_003694B6: ;
    PUSH32(esp, 0x84B274);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003694C0: ;
    esp = esp + 4;
    MEM32(0x84B274) = 0;
    MEM32(0x84B278) = 0;

loc_003694D7: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x8DF8);
    eax = eax + 0x8DF8;
    if (TEST_Z(ecx, ecx)) goto loc_003694F4; /* je: equal / zero */

loc_003694EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003694F1: ;
    esp = esp + 4;

loc_003694F4: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x145B8);
    eax = eax + 0x145B8;
    if (TEST_Z(ecx, ecx)) goto loc_00369511; /* je: equal / zero */

loc_00369508: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0036950E: ;
    esp = esp + 4;

loc_00369511: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x145C0);
    eax = eax + 0x145C0;
    if (TEST_Z(ecx, ecx)) goto loc_0036952E; /* je: equal / zero */

loc_00369525: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0036952B: ;
    esp = esp + 4;

loc_0036952E: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14E4C);
    eax = eax + 0x14E4C;
    if (TEST_Z(ecx, ecx)) goto loc_0036954B; /* je: equal / zero */

loc_00369542: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00369548: ;
    esp = esp + 4;

loc_0036954B: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14E48);
    eax = eax + 0x14E48;
    if (TEST_Z(ecx, ecx)) goto loc_00369568; /* je: equal / zero */

loc_0036955F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00369565: ;
    esp = esp + 4;

loc_00369568: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_00369576; /* jne: not equal / not zero */

loc_00369571: ;
    PUSH32(esp, 0); sub_003418D0(); /* call 0x003418D0 */

loc_00369576: ;
    PUSH32(esp, 0x84B330);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00369580: ;
    esp = esp + 4;
    MEM32(0x84B330) = 0;

loc_0036958D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00369590
 * Original: 0x00369590 - 0x003697D1 (577 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369590(void)
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

loc_00369590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003695A2: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003695AB: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(0x84725D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003695DC; /* je: equal / zero */

loc_003695B8: ;
    eax = MEM32(0x847104);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0x3000;
    if (CMP_NE(ecx, 0x3000)) goto loc_003695DC; /* jne: not equal / not zero */

loc_003695CE: ;
    SET_LO8(eax, MEM8(0x84B32C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x84B32C) = (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0; /* sete */

loc_003695DC: ;
    SET_LO8(eax, MEM8(0x84B32C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003697D1(); return; } /* je: equal / zero */

loc_003695E9: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D40); /* movss */
    edi = 0x14;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00369617; /* je: equal / zero */

loc_00369607: ;
    xmm0 = MEMF(0x649678); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00369617: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    esi = 0x801C7C;

loc_00369632: ;
    fp_push(MEMF(esi + -4)); /* fld float */
    esp = esp - 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esi + -260;
    edi = edi + 0x23;
    SET_LO8(ecx, 0); /* xor self */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D79C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0036965A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x10;
    SET_LO8(ecx, 0); /* xor self */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x63D784);
    PUSH32(esp, edi);
    PUSH32(esp, 0x140);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0036967B: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0xC;
    edi = edi + 0x19;
    SET_LO8(ecx, 0); /* xor self */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x63D76C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0036969C: ;
    xmm0 = MEMF(esi + -4); /* movss */
    esp = esp + 0x14;
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi))) goto loc_003696AE; /* jbe: below or equal (unsigned <=) */

loc_003696A9: ;
    eax = MEM32(esi + -4);
    MEM32(esi) = eax;

loc_003696AE: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 + MEMF(esi + -4); /* addss */
    edx = MEM32(esi + 0x10);
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx++;
    MEM32(esi + 0x10) = edx;
    MEMF(esi + -4) = xmm0; /* movss */
    esi = esi + 0x118;
    if (CMP_L(esi, 0x801FC4)) goto loc_00369632; /* jl: less (signed <) */

loc_003696DE: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x84B328); /* subss */
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE0))) { sub_003697D1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003696FC: ;
    xmm2 = (float)(int32_t)MEM32(0x801C8C); /* cvtsi2ss */
    xmm3 = MEMF(0x801C84); /* movss */
    xmm0 = MEMF(0x801C7C); /* movss */
    xmm3 = xmm3 / xmm2; /* divss */
    xmm2 = MEMF(0x801D94); /* movss */
    MEMF(0x801C88) = xmm3; /* movss */
    xmm3 = MEMF(0x801D9C); /* movss */
    MEMF(0x801D98) = xmm2; /* movss */
    xmm2 = (float)(int32_t)MEM32(0x801DA4); /* cvtsi2ss */
    xmm3 = xmm3 / xmm2; /* divss */
    xmm2 = MEMF(0x801EAC); /* movss */
    edi = 0; /* xor self */
    MEMF(0x801DA0) = xmm3; /* movss */
    xmm3 = MEMF(0x801EB4); /* movss */
    MEMF(0x801EB0) = xmm2; /* movss */
    xmm2 = (float)(int32_t)MEM32(0x801EBC); /* cvtsi2ss */
    MEMF(0x801C80) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 / xmm2; /* divss */
    MEMF(0x801C7C) = xmm0; /* movss */
    MEMF(0x801C84) = xmm0; /* movss */
    MEM32(0x801C8C) = edi;
    MEMF(0x801D94) = xmm0; /* movss */
    MEMF(0x801D9C) = xmm0; /* movss */
    MEM32(0x801DA4) = edi;
    MEMF(0x801EAC) = xmm0; /* movss */
    MEMF(0x801EB8) = xmm3; /* movss */
    MEMF(0x801EB4) = xmm0; /* movss */
    MEM32(0x801EBC) = edi;
    MEMF(0x84B328) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_003697D6(); return; /* tail jmp 0x003697D6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00369BD0
 * Original: 0x00369BD0 - 0x00369CB2 (226 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00369BD0: ;
    eax = MEM32(0x84B330);
    MEM8(eax + 0x10) = 0;
    ecx = MEM32(0x84B330);
    SET_LO8(eax, MEM8(ecx + 0xD));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00369CB0; /* jle: less or equal (signed <=) */

loc_00369BED: ;
    PUSH32(esp, esi);
    edi = edi;

loc_00369BF0: ;
    edx = MEM32(0x84A5F8);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + edx;
    if (TEST_S(edi, edi)) goto loc_00369C2C; /* jl: less (signed <) */

loc_00369C04: ;
    if (CMP_GE(edi, 0x10)) goto loc_00369C2C; /* jge: greater or equal (signed >=) */

loc_00369C09: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00369C23; /* jne: not equal / not zero */

loc_00369C12: ;
    if (TEST_NZ(edi, edi)) goto loc_00369C1A; /* jne: not equal / not zero */

loc_00369C16: ;
    eax = 0; /* xor self */
    goto loc_00369C31;

loc_00369C1A: ;
    eax = MEM32(0x776574);
    if (TEST_Z(eax, eax)) goto loc_00369C2C; /* je: equal / zero */

loc_00369C23: ;
    eax = MEM32(edi * 4 + 0x7761A0);
    goto loc_00369C31;

loc_00369C2C: ;
    eax = 2;

loc_00369C31: ;
    SET_LO8(eax, LO8(eax) << 1);
    MEM8(ecx + edi + 0x28) = LO8(eax);
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + edi + 0x28));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + 0x10) = MEM8(eax + 0x10) | LO8(edx);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00369C9C; /* je: equal / zero */

loc_00369C51: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00369C9C; /* je: equal / zero */

loc_00369C5A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_002B7380(); /* call 0x002B7380 */

loc_00369C63: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    MEM8(esi + 0x540) = MEM8(esi + 0x540) & 0xEF;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00369C84; /* jne: not equal / not zero */

loc_00369C76: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00369C84; /* je: equal / zero */

loc_00369C80: ;
    MEM8(eax + 0x6E) = 3;

loc_00369C84: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + edi + 0x28));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    ecx = ecx + ecx + 1;
    MEM8(esi + 0x57C) = LO8(ecx);

loc_00369C9C: ;
    ecx = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    edi++;
    if (CMP_L(edi, edx)) goto loc_00369BF0; /* jl: less (signed <) */

loc_00369CAF: ;
    POP32(esp, esi);

loc_00369CB0: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00369CC0
 * Original: 0x00369CC0 - 0x00369CF3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369CC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    eax = MEM32(ecx + 8);
    eax = eax - 5;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax == 0)) { sub_00369CF3(); return; } /* je: equal / zero */

loc_00369CDC: ;
    eax--;
    if ((eax == 0)) goto loc_00369CE9; /* je: equal / zero */

loc_00369CDF: ;
    MEM32(esp + 0x14) = 1;
    g_seh_ebp = ebp; sub_00369CFB(); return; /* tail jmp 0x00369CFB */

loc_00369CE9: ;
    MEM32(esp + 0x14) = 2;
    g_seh_ebp = ebp; sub_00369CFB(); return; /* tail jmp 0x00369CFB */

}

/**
 * sub_00369D80
 * Original: 0x00369D80 - 0x00369DA1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369D80: ;
    eax = MEM32(eax + 0x68);
    eax = eax + 0xFFFFFF22u;
    if (CMP_A(eax, 0x51)) { sub_00369DA1(); return; } /* ja: above (unsigned >) */

loc_00369D8D: ;
    ecx = ZX8(MEM8(eax + 0x369DB0));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x369DA4)); return; /* indirect tail jmp */

    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

}

/**
 * sub_00369E10
 * Original: 0x00369E10 - 0x00369E40 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00369E10: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(eax + ecx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00369E3D; /* je: equal / zero */

loc_00369E27: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (CMP_EQ(MEM32(eax + 0x64), 0x35)) { sub_00369E40(); return; } /* je: equal / zero */

loc_00369E3D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00369E50
 * Original: 0x00369E50 - 0x00369F05 (181 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369E50: ;
    PUSH32(esp, ecx);
    xmm3 = MEMF(0x6494DC); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebx + ebp;
    edi = 0x10;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    ebp = ebp + 0x6D78;

loc_00369E82: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + edi), 0x35)) goto loc_00369EE5; /* jne: not equal / not zero */

loc_00369E8D: ;
    eax = MEM32(ebp + 0x4F8);
    if (TEST_NZ(eax, eax)) goto loc_00369E9C; /* jne: not equal / not zero */

loc_00369E97: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00369EBF;

loc_00369E9C: ;
    SET_LO8(ecx, MEM8(0x863D11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00369EBC; /* je: equal / zero */

loc_00369EA6: ;
    esi = MEM32(eax + 0x34);
    SET_LO16(eax, MEM16(eax + 0x32));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00369EB2: ;
    if (TEST_Z(eax, eax)) goto loc_00369E97; /* je: equal / zero */

loc_00369EB6: ;
    eax = ZX16(MEM16(eax + 0x60));
    goto loc_00369EBF;

loc_00369EBC: ;
    eax = MEM32(eax + 0x34);

loc_00369EBF: ;
    if (CMP_NE(eax, MEM32(esp + 0x18))) goto loc_00369EE5; /* jne: not equal / not zero */

loc_00369EC5: ;
    ecx = ebx + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00369ECF: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00369EDE; /* ja: above (unsigned >) */

loc_00369ED7: ;
    if (CMP_NE(MEM32(esp + 0x10), 0xFFFFFFFFu)) goto loc_00369EE5; /* jne: not equal / not zero */

loc_00369EDE: ;
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 0x10) = edi;

loc_00369EE5: ;
    ebp = ebp + 0x6D0;
    edi++;
    if (CMP_L(edi, 0x80)) goto loc_00369E82; /* jl: less (signed <) */

loc_00369EF4: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00369F05(); return; } /* jne: not equal / not zero */

loc_00369F01: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00369F20
 * Original: 0x00369F20 - 0x0036A005 (229 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369F20: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00394E70(); /* call 0x00394E70 */

loc_00369F40: ;
    ebx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_00369F58; /* jne: not equal / not zero */

loc_00369F4C: ;
    eax = MEM32(esp + 0xC);
    ebx = ebx | 1;
    eax++;
    MEM32(esp + 0xC) = eax;

loc_00369F58: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1E);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00369FC7; /* jle: less or equal (signed <=) */

loc_00369F66: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B330);
    /* nop */

loc_00369F70: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    (void)0; /* cmp MEM16(eax + ebp + 0x3A), 0x28 - flags set for next jcc */
    eax = eax + ebp + 0x38;
    if (CMP_NE(MEM16(eax + ebp + 0x3A), 0x28)) goto loc_00369FBD; /* jne: not equal / not zero */

loc_00369F87: ;
    edx = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA2);
    edx = ZX16(MEM16(edx + 0x60));
    if (CMP_NE(ecx, edx)) goto loc_00369FBD; /* jne: not equal / not zero */

loc_00369F9A: ;
    SET_LO8(ecx, MEM8(eax + 0x9E));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(ebx, edx)) goto loc_00369FBD; /* jne: not equal / not zero */

loc_00369FAB: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    if (CMP_G(MEM8(eax + 0xEA), LO8(ecx))) goto loc_00369FBD; /* jg: greater (signed >) */

loc_00369FB7: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    ebx = ebx | edx;

loc_00369FBD: ;
    eax = MEM32(esp + 0x14);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00369F70; /* jl: less (signed <) */

loc_00369FC6: ;
    POP32(esp, ebp);

loc_00369FC7: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    eax = esi;
    eax = eax - edx;
    edx = MEM32(esp + 0x20);
    if (TEST_Z(edx, edx)) goto loc_00369FFE; /* je: equal / zero */

loc_00369FDB: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00369FFE; /* jle: less or equal (signed <=) */

loc_00369FDF: ;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00369FFE; /* jle: less or equal (signed <=) */

loc_00369FE5: ;
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_Z(ebx, edi)) goto loc_00369FFC; /* je: equal / zero */

loc_00369FF0: ;
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_00369FE5; /* jl: less (signed <) */

loc_00369FF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00369FFC: ;
    MEM32(edx) = ecx;

loc_00369FFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A010
 * Original: 0x0036A010 - 0x0036A066 (86 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A010(void)
{
    uint32_t ebp;
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A010: ;
    esp = esp - 0xC;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = ZX16(MEM16(ebp + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = MEM32(ecx + eax + 0x238);
    ecx = MEM32(edx);
    edx = MEM32(0x84B330);
    ebx = 0; /* xor self */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2D98);
    PUSH32(esp, esi);
    ecx = ecx + edx + 0x8F54;
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, edi);
    xmm3 = xmm3 * xmm0; /* mulss */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x20) = xmm3; /* movss */
    esi = eax + 0x6D00;
    edi = 0x10;
    g_seh_ebp = ebp; sub_0036A070(); return; /* tail jmp 0x0036A070 */

}

/**
 * sub_0036A160
 * Original: 0x0036A160 - 0x0036A1E4 (132 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A160: ;
    esp = esp - 0x10;
    ecx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + ecx + 0x38;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ebx;
    eax = ZX16(MEM16(eax + 0x410));
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x2C) = esi;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0036A1B3; /* je: equal / zero */

loc_0036A1A3: ;
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    if (CMP_EQ(MEM8(eax + edx + 0x33), 0x31)) goto loc_0036A1DA; /* je: equal / zero */

loc_0036A1B3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00394E70(); /* call 0x00394E70 */

loc_0036A1CB: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    if (CMP_NE(eax, ecx)) { sub_0036A1E4(); return; } /* jne: not equal / not zero */

loc_0036A1DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A320
 * Original: 0x0036A320 - 0x0036A338 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036A320: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0036A32D: ;
    ecx = eax;
    esp = esp + 4;
    if (TEST_NZ(ecx, ecx)) { sub_0036A338(); return; } /* jne: not equal / not zero */

loc_0036A336: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A360
 * Original: 0x0036A360 - 0x0036A378 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A360(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036A360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0036A3D0(); /* call 0x0036A3D0 */

loc_0036A36A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0036A378(); return; } /* je: equal / zero */

loc_0036A371: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A3D0
 * Original: 0x0036A3D0 - 0x0036A53E (366 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A3D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A3D0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx + 0xF2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    MEM8(esp + 0x27) = 0xFF;
    MEM8(esp + 0x30) = 0xFF;
    PUSH32(esp, 0); sub_00376370(); /* call 0x00376370 */

loc_0036A40F: ;
    ebx = MEM32(0x84A5F8);
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 0x1E));
    esp = esp + 0x14;
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0036A521; /* jle: less or equal (signed <=) */

loc_0036A427: ;
    xmm3 = MEMF(0x649804); /* movss */
    /* nop */

loc_0036A430: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ebx;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036A477; /* je: equal / zero */

loc_0036A447: ;
    ecx = MEM32(0x84B0E0);
    eax = ZX8(LO8(eax));
    edx = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + ecx;
    PUSH32(esp, edx);
    ecx = eax + ebx + -1624;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0036A46B: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_0036A534; /* ja: above (unsigned >) */

loc_0036A477: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x1E);
    esi++;
    if (CMP_L(esi, edx)) goto loc_0036A430; /* jl: less (signed <) */

loc_0036A480: ;
    SET_LO8(eax, MEM8(ebp + 0x1E));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0036A521; /* jle: less or equal (signed <=) */

loc_0036A48B: ;
    xmm3 = MEMF(0x6493C0); /* movss */
    eax = 0xFFFFFFE0u;
    eax = eax - ebp;
    edi = ebp + 0x20;
    MEM32(esp + 0x14) = eax;

loc_0036A4A1: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    edx = MEM32(0x84B330);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    esi = ecx + edx + 0x38;
    eax = eax + ebx;
    if (CMP_NE(MEM16(esi + 2), 0x27)) goto loc_0036A512; /* jne: not equal / not zero */

loc_0036A4C5: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0036A512; /* je: equal / zero */

loc_0036A4CF: ;
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_0036A512; /* jne: not equal / not zero */

loc_0036A4D8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xBA);
    edx = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0036A4F4: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0036A512; /* jbe: below or equal (unsigned <=) */

loc_0036A4FC: ;
    SET_LO8(eax, MEM8(esi + 0xEA));
    if (CMP_LE(LO8(eax), MEM8(esp + 0x1C))) goto loc_0036A512; /* jle: less or equal (signed <=) */

loc_0036A508: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x13) = LO8(edx);

loc_0036A512: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x1E);
    edi++;
    eax = eax + edi;
    if (CMP_L(eax, ecx)) goto loc_0036A4A1; /* jl: less (signed <) */

loc_0036A521: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x20);
    edx = SX8(LO8(eax));
    if (CMP_EQ(edx, ecx)) { sub_0036A53E(); return; } /* je: equal / zero */

loc_0036A530: ;
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_0036A53E(); return; } /* je: equal / zero */

loc_0036A534: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A550
 * Original: 0x0036A550 - 0x0036A586 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036A550: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x570);
    ecx = MEM32(ecx + 0x1F0);
    if (TEST_Z(ecx, ecx)) goto loc_0036A56C; /* je: equal / zero */

loc_0036A563: ;
    ecx = ZX16(MEM16(ecx + 0x60));
    if (CMP_NE(ecx, 0xFFFFFFFFu)) { sub_0036A586(); return; } /* jne: not equal / not zero */

loc_0036A56C: ;
    esi = esi + 0x78;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM16(edx) = 0xFFFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A610
 * Original: 0x0036A610 - 0x0036A677 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A610: ;
    edx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0036A671; /* jle: less or equal (signed <=) */

loc_0036A623: ;
    ecx = MEM32(0x84A5F8);
    edx = edx + 0xDA;
    /* nop */

loc_0036A630: ;
    if (CMP_EQ(ecx, edi)) goto loc_0036A660; /* je: equal / zero */

loc_0036A634: ;
    ebx = MEM32(ecx + 0x238);
    ebp = MEM32(edi + 0x238);
    ebx = MEM32(ebx);
    if (CMP_NE(ebx, MEM32(ebp))) goto loc_0036A660; /* jne: not equal / not zero */

loc_0036A647: ;
    if (CMP_NE(MEM16(edx + -160), 0x20)) goto loc_0036A660; /* jne: not equal / not zero */

loc_0036A651: ;
    ebx = MEM32(esp + 0x10);
    ebx = ZX16(MEM16(ebx + 0x60));
    ebp = (uint32_t)(int32_t)SMEM16(edx);
    if (CMP_EQ(ebp, ebx)) { sub_0036A677(); return; } /* je: equal / zero */

loc_0036A660: ;
    eax++;
    ecx = ecx + 0x6D0;
    edx = edx + 0x8CC;
    if (CMP_L(eax, esi)) goto loc_0036A630; /* jl: less (signed <) */

loc_0036A671: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A680
 * Original: 0x0036A680 - 0x0036A720 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A680: ;
    ecx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    xmm3 = MEMF(0x648E98); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = eax + ecx;
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ebx = eax;
    esi = 0; /* xor self */

loc_0036A6A5: ;
    eax = MEM32(edi + 0x64);
    if (CMP_NE(eax, 1)) goto loc_0036A6EE; /* jne: not equal / not zero */

loc_0036A6AD: ;
    if (CMP_EQ(edi, ebp)) goto loc_0036A705; /* je: equal / zero */

loc_0036A6B1: ;
    eax = MEM32(edi + 0x238);
    ecx = MEM32(ebp + 0x238);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_0036A705; /* jne: not equal / not zero */

loc_0036A6C3: ;
    ecx = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x3A);
    if (CMP_L(eax, 0x2A)) goto loc_0036A705; /* jl: less (signed <) */

loc_0036A6D3: ;
    if (CMP_G(eax, 0x2C)) goto loc_0036A705; /* jg: greater (signed >) */

loc_0036A6D8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx + 0xF0);
    ecx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ecx;
    PUSH32(esp, eax);
    goto loc_0036A6F7;

loc_0036A6EE: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0036A705; /* jne: not equal / not zero */

loc_0036A6F3: ;
    ecx = edi + 0x78;
    PUSH32(esp, ecx);

loc_0036A6F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0036A6FD: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) { sub_0036A720(); return; } /* ja: above (unsigned >) */

loc_0036A705: ;
    esi = esi + 0x8CC;
    edi = edi + 0x6D0;
    if (CMP_L(esi, 0x46600)) goto loc_0036A6A5; /* jl: less (signed <) */

loc_0036A719: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A730
 * Original: 0x0036A730 - 0x0036A769 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A730(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A730: ;
    esp = esp - 0xC;
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    xmm1 = xmm0; /* movaps */
    esi = 0x10;
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    ebp = ebp + 0x6D00;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x18) = esi;
    g_seh_ebp = ebp; sub_0036A770(); return; /* tail jmp 0x0036A770 */

}

/**
 * sub_0036A930
 * Original: 0x0036A930 - 0x0036A9C0 (144 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A930(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036A930: ;
    if (CMP_NE(MEM16(esi + 0xFE), 0)) goto loc_0036A97D; /* jne: not equal / not zero */

loc_0036A93A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = edi + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0036A950: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    MEM16(esi + 0xFE) = LO16(eax);
    eax = MEM32(0x84B0E0);
    esp = esp + 0x18;
    ecx = ecx + eax;
    eax = MEM32(ecx);
    edx = esi + 0xF0;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;

loc_0036A97D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x459C4000);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0036A98B: ;
    edx = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xFE);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00376370(); /* call 0x00376370 */

loc_0036A99F: ;
    esp = esp + 0x14;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM16(esi + 0xB4) = LO16(eax);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0036A9BF; /* je: equal / zero */

loc_0036A9AF: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(esi + 2) = LO16(eax);
    MEM8(esi + 0xEC) = 0;

loc_0036A9BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A9C0
 * Original: 0x0036A9C0 - 0x0036A9E3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036A9C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    SET_LO16(eax, MEM16(ecx + 0x498));
    esp = esp - 8;
    if (CMP_NE(LO16(eax), 0xFFFF)) { sub_0036A9E3(); return; } /* jne: not equal / not zero */

loc_0036A9DA: ;
    eax = 0xFFFFFFFFu;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AB20
 * Original: 0x0036AB20 - 0x0036AFED (1229 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AB20: ;
    esp = esp - 0x68;
    xmm0 = MEMF(0x648D34); /* movss */
    xmm7 = MEMF(0x648D80); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_0036AB4B: ;
    edx = MEM32(esp + 0x84);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x34) = esi;
    if (TEST_Z(edx, edx)) goto loc_0036AB8C; /* je: equal / zero */

loc_0036AB5A: ;
    eax = MEM32(edx + esi * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0036AB90; /* je: equal / zero */

loc_0036AB62: ;
    edi = MEM32(0x84B330);
    ecx = MEM32(edi + 0x145B8);
    edi = MEM32(edi + 0x145B4);
    eax = SX16(LO16(eax));
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 2));
    edi = edi + ecx * 2;
    MEM32(esp + 0x24) = edi;
    eax = eax - ecx;
    goto loc_0036ABB5;

loc_0036AB8C: ;
    if (TEST_Z(esi, esi)) goto loc_0036ABAE; /* je: equal / zero */

loc_0036AB90: ;
    eax = MEM32(esp + 0x7C);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | 0xFFFFFFFFu;
    (void)0; /* cmp MEM16(eax + 0x410), LO16(ecx) - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(MEM16(eax + 0x410), LO16(ecx))) { sub_0036AFED(); return; } /* jne: not equal / not zero */

loc_0036ABA8: ;
    eax = ecx;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_0036ABAE: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);

loc_0036ABB5: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0036AFE7; /* jle: less or equal (signed <=) */

loc_0036ABC7: ;
    goto loc_0036ABD0;

loc_0036ABC9: ;
    edx = MEM32(esp + 0x84);

loc_0036ABD0: ;
    if (TEST_Z(edx, edx)) goto loc_0036ABEA; /* je: equal / zero */

loc_0036ABD4: ;
    edx = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edx + ecx * 2));
    esi = esi & 0x7FFF;
    MEM32(esp + 0x18) = esi;
    goto loc_0036ABF0;

loc_0036ABEA: ;
    MEM32(esp + 0x18) = ecx;
    esi = ecx;

loc_0036ABF0: ;
    edi = MEM32(0x84B0E0);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x38);
    SET_LO8(eax, MEM8(ebp + edi + 0x33));
    ebp = ebp + edi;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036AC15; /* je: equal / zero */

loc_0036AC09: ;
    if (CMP_EQ(LO8(eax), 0x2B)) goto loc_0036AC15; /* je: equal / zero */

loc_0036AC0D: ;
    if (CMP_NE(LO8(eax), 0x3A)) goto loc_0036AFD2; /* jne: not equal / not zero */

loc_0036AC15: ;
    ebx = MEM32(esp + 0x7C);
    eax = ebx + 0x78;
    ecx = esp + 0x54;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x54;
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x38);
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
    SET_LO8(eax, MEM8(ebx + 0x135));
    xmm1 = MEMF(esp + 0x2C); /* movss */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = (int32_t)xmm1; /* cvttss2si */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036ACD8; /* je: equal / zero */

loc_0036AC98: ;
    if (CMP_G(eax, 0x4B0)) goto loc_0036ACA7; /* jg: greater (signed >) */

loc_0036AC9F: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_0036AD4B;

loc_0036ACA7: ;
    if (CMP_L(eax, 0xBB8)) goto loc_0036ACBB; /* jl: less (signed <) */

loc_0036ACAE: ;
    xmm5 = MEMF(0x648D3C); /* movss */
    goto loc_0036AD4B;

loc_0036ACBB: ;
    eax = eax + 0xFFFFFB50u;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649998); /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    goto loc_0036AD10;

loc_0036ACD8: ;
    if (CMP_G(eax, 0x2BC)) goto loc_0036ACE4; /* jg: greater (signed >) */

loc_0036ACDF: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_0036AD4B;

loc_0036ACE4: ;
    if (CMP_L(eax, 0x9C4)) goto loc_0036ACF5; /* jl: less (signed <) */

loc_0036ACEB: ;
    xmm5 = MEMF(0x648D3C); /* movss */
    goto loc_0036AD4B;

loc_0036ACF5: ;
    eax = eax + 0xFFFFFD44u;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649998); /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */

loc_0036AD10: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(0x648D10); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    /* FPU: fcos  */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5 = MEMF(esp + 0x28); /* movss */
    if ((xmm2 > xmm0)) goto loc_0036AD4B; /* ja: above (unsigned >) */

loc_0036AD3B: ;
    xmm5 = xmm5 * MEMF(0x648D40); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D3C); /* addss */

loc_0036AD4B: ;
    eax = MEM32(esp + 0x88);
    if (TEST_Z(eax, eax)) goto loc_0036AD66; /* je: equal / zero */

loc_0036AD56: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0036AD66; /* jbe: below or equal (unsigned <=) */

loc_0036AD63: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_0036AD66: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0036AD6B: ;
    eax = MEM32(esp + 0x80);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xB6);
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm6 = xmm6 * xmm5; /* mulss */
    if (CMP_NE(esi, ecx)) goto loc_0036AD98; /* jne: not equal / not zero */

loc_0036AD94: ;
    xmm6 = xmm6 * xmm7; /* mulss */

loc_0036AD98: ;
    edx = MEM32(0x84B330);
    SET_LO8(eax, MEM8(edx + 0xD));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0036AF60; /* jle: less or equal (signed <=) */

loc_0036ADAB: ;
    esi = MEM32(0x84A5F8);
    esi = esi + 0x568;
    goto loc_0036ADC0;

    /* nop */

loc_0036ADC0: ;
    eax = MEM32(esi + -816);
    ecx = MEM32(ebx + 0x238);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_0036AF48; /* jne: not equal / not zero */

loc_0036ADD6: ;
    eax = ZX16(MEM16(ebx + 0x60));
    if (CMP_EQ(edi, eax)) goto loc_0036AF48; /* je: equal / zero */

loc_0036ADE2: ;
    ecx = MEM32(esi);
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_0036AE78; /* jne: not equal / not zero */

loc_0036ADF1: ;
    xmm0 = MEMF(ecx + 0x4CC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0036AE78; /* jnp: not parity */

loc_0036AE06: ;
    ecx = ecx + 0x4AC;
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x60;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x60;
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x38);
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
    xmm0 = MEMF(esp + 0x44); /* movss */
    goto loc_0036AEE8;

loc_0036AE78: ;
    eax = esi + -1264;
    ecx = esp + 0x6C;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x6C;
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */

loc_0036AEE8: ;
    xmm1 = MEMF(0x6493B4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036AF48; /* jbe: below or equal (unsigned <=) */

loc_0036AEF5: ;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x4C)); /* sqrtss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0036AF1A; /* jb: below (unsigned <) */

loc_0036AF15: ;
    xmm0 = xmm7; /* movaps */
    goto loc_0036AF41;

loc_0036AF1A: ;
    /* comiss xmm0, MEMF(0x6493C0) - sets EFLAGS */
    if ((xmm0 < MEMF(0x6493C0))) goto loc_0036AF2D; /* jb: below (unsigned <) */

loc_0036AF23: ;
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_0036AF41;

loc_0036AF2D: ;
    xmm0 = xmm0 * MEMF(0x6493B8); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */

loc_0036AF41: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = xmm0; /* movaps */

loc_0036AF48: ;
    eax = MEM32(0x84B330);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    edi++;
    esi = esi + 0x6D0;
    if (CMP_L(edi, ecx)) goto loc_0036ADC0; /* jl: less (signed <) */

loc_0036AF60: ;
    edx = MEM32(ebx + 0x238);
    ebx = MEM32(edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00341750(); /* call 0x00341750 */

loc_0036AF6E: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    esp = esp + 4;
    xmm0 = xmm0 * xmm6; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0036AF95; /* ja: above (unsigned >) */

loc_0036AF88: ;
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036AFCE; /* jp: parity */

loc_0036AF95: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(eax + 0x238);
    ebp = MEM32(ecx);
    esi = MEM32(esp + 0x18);
    eax = ZX16(MEM16(eax + 0x410));
    ebx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    ebx = ebx + ebx + 2;
    PUSH32(esp, 0); sub_0034B830(); /* call 0x0034B830 */

loc_0036AFBD: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036AFCE; /* je: equal / zero */

loc_0036AFC4: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x10) = esi;

loc_0036AFCE: ;
    ecx = MEM32(esp + 0x1C);

loc_0036AFD2: ;
    eax = MEM32(esp + 0x20);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(ecx, eax)) goto loc_0036ABC9; /* jl: less (signed <) */

loc_0036AFE3: ;
    esi = MEM32(esp + 0x34);

loc_0036AFE7: ;
    esi++;
    goto loc_0036AB4B;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0036B010
 * Original: 0x0036B010 - 0x0036B0A7 (151 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B010: ;
    ecx = MEM32(eax + 0x568);
    eax = eax | 0xFFFFFFFFu;
    esp = esp - 0x64;
    if (CMP_EQ(MEM16(ecx + 0x498), LO16(eax))) goto loc_0036B0A3; /* je: equal / zero */

loc_0036B025: ;
    xmm3 = MEMF(0x6493BC); /* movss */
    xmm4 = MEMF(0x648EC4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    esi = MEM32(esp + 0x7C);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(esi, esi)) goto loc_0036B07F; /* je: equal / zero */

loc_0036B051: ;
    eax = MEM32(esi + edx * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0036B083; /* je: equal / zero */

loc_0036B059: ;
    edi = MEM32(0x84B330);
    ecx = MEM32(edi + 0x145B8);
    edi = MEM32(edi + 0x145B4);
    eax = SX16(LO16(eax));
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    ebp = edi + ecx * 2;
    edi = ZX16(MEM16(eax + 2));
    edi = edi - ecx;
    g_seh_ebp = ebp; sub_0036B0AE(); return; /* tail jmp 0x0036B0AE */

loc_0036B07F: ;
    if (TEST_Z(edx, edx)) { sub_0036B0A7(); return; } /* je: equal / zero */

loc_0036B083: ;
    esi = MEM32(esp + 0x10);
    if (CMP_LE(esi & esi, 0)) goto loc_0036B09B; /* jle: less or equal (signed <=) */

loc_0036B08B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0036B090: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + edx * 4 + 0x34);
    MEM32(esp + 0x14) = ecx;

loc_0036B09B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0036B0A3: ;
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B1A0
 * Original: 0x0036B1A0 - 0x0036B507 (871 bytes, 241 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B1A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B1A0: ;
    esp = esp - 0x50;
    xmm4 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    ecx = MEM32(edi + 0x568);
    MEM32(esp + 0x14) = eax;
    (void)0; /* cmp MEM32(ecx + 0xBC), 1 - flags set for next jcc */
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0x10) = xmm3; /* movss */
    if (CMP_EQ(MEM32(ecx + 0xBC), 1)) goto loc_0036B264; /* je: equal / zero */

loc_0036B1D9: ;
    ebp = MEM32(esp + 0x6C);
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0036B4FB; /* jle: less or equal (signed <=) */

loc_0036B1E7: ;
    edi = edi + 0x78;
    goto loc_0036B1F2;

loc_0036B1EC: ;
    xmm3 = MEMF(esp + 0x10); /* movss */

loc_0036B1F2: ;
    eax = MEM32(ebx + esi * 4);
    edx = eax + eax * 2;
    eax = MEM32(0x84A220);
    ecx = (uint32_t)(int32_t)SMEM16(eax + edx * 8);
    eax = eax + edx * 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0036B235: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_0036B246; /* ja: above (unsigned >) */

loc_0036B23D: ;
    /* ucomiss xmm3, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036B253; /* jp: parity */

loc_0036B246: ;
    edx = MEM32(ebx + esi * 4);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;

loc_0036B253: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_0036B1EC; /* jl: less (signed <) */

loc_0036B258: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_0036B264: ;
    eax = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    esi = eax + ecx + 0x38;
    eax = MEM32(esp + 0x6C);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(eax & eax, 0)) goto loc_0036B4FB; /* jle: less or equal (signed <=) */

loc_0036B28A: ;
    goto loc_0036B2A0;

loc_0036B28C: ;
    edi = MEM32(esp + 0x64);
    ebx = MEM32(esp + 0x68);
    esi = MEM32(esp + 0x1C);
    goto loc_0036B2A0;

    /* nop */

loc_0036B2A0: ;
    eax = MEM32(ebx + ebp * 4);
    edx = eax + eax * 2;
    eax = MEM32(0x84A220);
    ecx = (uint32_t)(int32_t)SMEM16(eax + edx * 8);
    eax = eax + edx * 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = edi + 0x78;
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0036B2E6: ;
    eax = MEM32(esi + 0x7AC);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0036B31E; /* je: equal / zero */

loc_0036B2F9: ;
    ecx = esp + 0x54;
    edx = edi;
    PUSH32(esp, 0); sub_00338D80(); /* call 0x00338D80 */

loc_0036B304: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036B31E; /* je: equal / zero */

loc_0036B308: ;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0036B315: ;
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0036B31E: ;
    SET_LO8(eax, MEM8(esi + 0x100));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036B387; /* je: equal / zero */

loc_0036B328: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x2D);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034A860(); /* call 0x0034A860 */

loc_0036B33E: ;
    esp = esp + 0x10;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0036B369; /* je: equal / zero */

loc_0036B348: ;
    edx = MEM32(0x84B0E0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x44) = ecx;

loc_0036B369: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0036B387; /* je: equal / zero */

loc_0036B36F: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0036B37E: ;
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0036B387: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xD));
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0036B462; /* jle: less or equal (signed <=) */

loc_0036B39B: ;
    edi = MEM32(0x84A5F8);
    edi = edi + 0x78;
    goto loc_0036B3B0;

    /* nop */
    /* nop */

loc_0036B3B0: ;
    edx = MEM32(esp + 0x64);
    ecx = MEM32(edi + 0x1C0);
    eax = MEM32(edx + 0x238);
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_0036B44A; /* jne: not equal / not zero */

loc_0036B3CA: ;
    edx = esp + 0x30;
    eax = esp + 0x48;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x48;
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(esp + 0x28);
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
    xmm0 = MEMF(0x59D944); /* movss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x2C))) goto loc_0036B44A; /* jb: below (unsigned <) */

loc_0036B449: ;
    ebx++;

loc_0036B44A: ;
    eax = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esi++;
    edi = edi + 0x6D0;
    if (CMP_L(esi, edx)) goto loc_0036B3B0; /* jl: less (signed <) */

loc_0036B462: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm2 < xmm0)) goto loc_0036B480; /* jb: below (unsigned <) */

loc_0036B476: ;
    xmm5 = MEMF(0x648D14); /* movss */
    goto loc_0036B4A6;

loc_0036B480: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0036B48F; /* jb: below (unsigned <) */

loc_0036B485: ;
    xmm5 = MEMF(0x648CE4); /* movss */
    goto loc_0036B4A6;

loc_0036B48F: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x649278); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm5 = xmm0; /* movaps */

loc_0036B4A6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0036B4AB: ;
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0036B4DD; /* ja: above (unsigned >) */

loc_0036B4D0: ;
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036B4EE; /* jp: parity */

loc_0036B4DD: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(ecx + ebp * 4);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;

loc_0036B4EE: ;
    eax = MEM32(esp + 0x6C);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_0036B28C; /* jl: less (signed <) */

loc_0036B4FB: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B510
 * Original: 0x0036B510 - 0x0036B56B (91 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B510(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036B510: ;
    ecx = ZX16(MEM16(eax + 0x60));
    edx = MEM32(0x84B330);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    eax = ecx + edx + 0x38;
    edx = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA2);
    edx = ZX16(MEM16(edx + 0x60));
    if (CMP_NE(ecx, edx)) { sub_0036B56B(); return; } /* jne: not equal / not zero */

loc_0036B537: ;
    SET_LO8(ecx, MEM8(eax + 0x9E));
    if (CMP_NE(LO8(ecx), MEM8(esp + 8))) { sub_0036B56B(); return; } /* jne: not equal / not zero */

loc_0036B543: ;
    SET_LO16(eax, MEM16(eax + 2));
    if (CMP_EQ(LO16(eax), 7)) goto loc_0036B565; /* je: equal / zero */

loc_0036B54D: ;
    if (CMP_EQ(LO16(eax), 0x28)) goto loc_0036B565; /* je: equal / zero */

loc_0036B553: ;
    if (CMP_EQ(LO16(eax), 6)) goto loc_0036B565; /* je: equal / zero */

loc_0036B559: ;
    if (CMP_EQ(LO16(eax), 0x19)) goto loc_0036B565; /* je: equal / zero */

loc_0036B55F: ;
    if (CMP_NE(LO16(eax), 0x20)) { sub_0036B56B(); return; } /* jne: not equal / not zero */

loc_0036B565: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B570
 * Original: 0x0036B570 - 0x0036B596 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B570: ;
    SET_LO8(ecx, MEM8(eax + 0xA0));
    esp = esp - 0xC;
    (void)0; /* cmp LO8(ecx), 7 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(ecx), 7)) { sub_0036B596(); return; } /* jne: not equal / not zero */

loc_0036B586: ;
    eax = MEM32(eax + 0x570);
    if (CMP_NE(MEM32(eax + 8), 2)) { sub_0036B596(); return; } /* jne: not equal / not zero */

loc_0036B592: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_0036B598(); return; /* tail jmp 0x0036B598 */

}

/**
 * sub_0036B650
 * Original: 0x0036B650 - 0x0036B6A2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036B650: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_0036B6A2(); return; } /* je: equal / zero */

loc_0036B65A: ;
    if (CMP_NE(MEM32(eax + 0xBC), 1)) { sub_0036B6A2(); return; } /* jne: not equal / not zero */

loc_0036B663: ;
    eax = ZX16(MEM16(ecx + 0x60));
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    eax = eax + ecx + 0x38;
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_EQ(LO16(ecx), 0x28)) goto loc_0036B687; /* je: equal / zero */

loc_0036B681: ;
    if (CMP_NE(LO16(ecx), 0x20)) { sub_0036B6A2(); return; } /* jne: not equal / not zero */

loc_0036B687: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA2);
    ecx = ZX16(MEM16(ecx + 0x60));
    if (CMP_NE(edx, ecx)) { sub_0036B6A2(); return; } /* jne: not equal / not zero */

loc_0036B69A: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x9E);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B6B0
 * Original: 0x0036B6B0 - 0x0036B6F9 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036B6B0: ;
    esp = esp - 0x3C;
    if (TEST_Z(esi, esi)) goto loc_0036B6F3; /* je: equal / zero */

loc_0036B6B7: ;
    ecx = MEM32(edi + 0x568);
    edx = MEM32(ecx + 0x444);
    ecx = MEM32(edx + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_0036B6D8: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 0xC;
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0036B6F3; /* jle: less or equal (signed <=) */

loc_0036B6E5: ;
    edx = MEM32(esp + eax * 4 + 4);
    if (CMP_EQ(MEM32(edx + 4), esi)) { sub_0036B6F9(); return; } /* je: equal / zero */

loc_0036B6EE: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0036B6E5; /* jl: less (signed <) */

loc_0036B6F3: ;
    eax = 0; /* xor self */
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B730
 * Original: 0x0036B730 - 0x0036B7A5 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B730: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0x10;
    esi = 0x6D00;
    /* nop */

loc_0036B750: ;
    ecx = MEM32(0x84A5FC);
    edx = ZX8(MEM8(ecx + edi));
    if (CMP_NE(edx, ebp)) goto loc_0036B78F; /* jne: not equal / not zero */

loc_0036B75E: ;
    eax = MEM32(esi + eax + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0036B76A: ;
    (void)0; /* cmp eax, MEM32(esp + 0x14) - flags set for next jcc */
    eax = MEM32(0x84A5F8);
    if (CMP_NE(eax, MEM32(esp + 0x14))) goto loc_0036B78F; /* jne: not equal / not zero */

loc_0036B775: ;
    if (CMP_EQ(MEM16(esi + eax + 0x3AE), 0)) goto loc_0036B78F; /* je: equal / zero */

loc_0036B780: ;
    ecx = MEM32(esi + eax + 0x570);
    SET_LO8(edx, MEM8(ecx + 0x42));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0036B78F; /* jne: not equal / not zero */

loc_0036B78E: ;
    ebx++;

loc_0036B78F: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_0036B750; /* jl: less (signed <) */

loc_0036B79E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B7B0
 * Original: 0x0036B7B0 - 0x0036B842 (146 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036B7B0: ;
    ecx = ZX16(MEM16(eax + 0x60));
    edx = MEM32(0x84B330);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = ecx + edx + 0x38;
    edx = MEM32(eax + 0x568);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x444);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_0036B7E9: ;
    esp = esp + 0xC;
    if (CMP_NE(MEM16(esi + 2), 0x2A)) goto loc_0036B82E; /* jne: not equal / not zero */

loc_0036B7F3: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0036B810; /* jle: less or equal (signed <=) */

loc_0036B7FD: ;
    edx = 6;

loc_0036B802: ;
    esi = MEM32(esp + eax * 4 + 8);
    if (CMP_EQ(MEM32(esi + 4), edx)) goto loc_0036B838; /* je: equal / zero */

loc_0036B80B: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0036B802; /* jl: less (signed <) */

loc_0036B810: ;
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0036B82E; /* jle: less or equal (signed <=) */

loc_0036B816: ;
    edx = 7;
    goto loc_0036B820;

    /* nop */

loc_0036B820: ;
    esi = MEM32(esp + eax * 4 + 8);
    if (CMP_EQ(MEM32(esi + 4), edx)) { sub_0036B842(); return; } /* je: equal / zero */

loc_0036B829: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0036B820; /* jl: less (signed <) */

loc_0036B82E: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_0036B838: ;
    eax = 2;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B850
 * Original: 0x0036B850 - 0x0036B936 (230 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0036B867: ;
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00376370(); /* call 0x00376370 */

loc_0036B872: ;
    esp = esp + 0x14;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0036B8A2; /* jne: not equal / not zero */

loc_0036B87B: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0036B885: ;
    ecx = ZX16(MEM16(edi + 0x410));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00376370(); /* call 0x00376370 */

loc_0036B895: ;
    esp = esp + 0x14;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0036B932; /* je: equal / zero */

loc_0036B8A2: ;
    edx = SX16(LO16(eax));
    ecx = edx;
    MEM16(esi + 0x116) = LO16(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    MEM16(esi + 0x104) = LO16(eax);
    ebx = MEM32(0x84B0E0);
    ebx = ebx + ecx;
    ebp = MEM32(ebx);
    edi = esi + 0x108;
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(edi + 8) = ebx;
    edi = MEM32(0x84B330);
    edi = MEM32(edi + 0x8DF8);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edi + edx));
    MEM16(esi + 0x106) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(esi + 0x114) = LO8(edx);
    edx = MEM32(0x84B0E0);
    if (CMP_NE(MEM16(ecx + edx + 0x12), 0xFFFF)) goto loc_0036B92B; /* jne: not equal / not zero */

loc_0036B907: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x106));
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0036B928: ;
    esp = esp + 0x18;

loc_0036B92B: ;
    MEM16(esi + 0x102) = LO16(eax);

loc_0036B932: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B940
 * Original: 0x0036B940 - 0x0036BC19 (729 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B940: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F86A4);
    PUSH32(esp, 0x801B78);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0036B956: ;
    PUSH32(esp, 0x63D754);
    PUSH32(esp, 0x801C90);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0036B965: ;
    PUSH32(esp, 0x63D748);
    PUSH32(esp, 0x801DA8);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0036B974: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(0x84A5F8);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E78); /* movss */
    xmm2 = MEMF(0x648E74); /* movss */
    esi = 0x10;
    esp = esp + 0x18;
    eax = eax + 0x3C;
    ecx = ecx + 0x568;
    MEM32(esp + 0x10) = esi;
    edi = 0x1E;
    /* nop */

loc_0036B9B0: ;
    edx = MEM32(0x84B330);
    SET_LO8(edx, MEM8(edx));
    MEM8(eax) = LO8(edx);
    edx = SX8(LO8(edx));
    MEM8(eax + 0x60) = 0xFF;
    MEM8(eax + 1) = 0xFF;
    edx = MEM32(edx * 4 + 0x74D984);
    MEM32(eax + 0x34) = edx;
    edx = edx | 0xFFFFFFFFu;
    MEM16(eax + 0x16C) = LO16(edx);
    MEM16(eax + 0x16E) = LO16(edx);
    MEM16(eax + 0xB2) = LO16(edx);
    MEM16(eax + 0x144) = LO16(edx);
    MEM16(eax + 0x146) = LO16(edx);
    if (CMP_NE(MEM32(ecx + -1284), 1)) goto loc_0036BA16; /* jne: not equal / not zero */

loc_0036B9FE: ;
    ebx = MEM32(ecx);
    if (TEST_Z(ebx, ebx)) goto loc_0036BA16; /* je: equal / zero */

loc_0036BA04: ;
    MEMF(ebx + 0x4CC) = xmm0; /* movss */
    ebx = MEM32(ecx);
    MEMF(ebx + 0xD0) = xmm0; /* movss */

loc_0036BA16: ;
    ebx = 0; /* xor self */
    MEM16(eax + 0x114) = LO16(ebx);
    MEM16(eax + 0x7C2) = LO16(ebx);
    MEM16(eax + 0x100) = LO16(edx);
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0xA8) = xmm0; /* movss */
    MEMF(eax + 0x7AC) = xmm0; /* movss */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    MEMF(eax + 0xA4) = xmm0; /* movss */
    MEMF(eax + 0x7F4) = xmm0; /* movss */
    MEM16(eax + 0x7C0) = 0xFFFF;
    MEMF(eax + 0x19C) = xmm0; /* movss */
    MEM16(eax + -2) = LO16(edi);
    MEM8(eax + 0xE8) = 1;
    MEMF(eax + 0x118) = xmm1; /* movss */
    MEMF(eax + 0x11C) = xmm0; /* movss */
    MEMF(eax + 0x120) = xmm2; /* movss */
    edx = ecx + -1264;
    ebp = MEM32(edx);
    ebx = eax + 0xEC;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    edx = MEM32(edx + 8);
    eax = eax + 0x8CC;
    ecx = ecx + 0x6D0;
    esi--;
    MEM32(ebx + 8) = edx;
    if ((esi != 0)) goto loc_0036B9B0; /* jne: not equal / not zero */

loc_0036BAC9: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(esp + 0x10);
    edx = edx + 0x7110;
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_0036BAE0: ;
    eax = MEM32(0x84A5FC);
    SET_LO8(eax, MEM8(eax + ecx));
    if (CMP_EQ(LO8(eax), 0x36)) goto loc_0036BAF4; /* je: equal / zero */

loc_0036BAEC: ;
    if (CMP_NE(LO8(eax), 0x37)) goto loc_0036BBCD; /* jne: not equal / not zero */

loc_0036BAF4: ;
    SET_LO16(eax, MEM16(edx));
    esi = ZX16(LO16(eax));
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_EQ(esi, ebx)) goto loc_0036BB10; /* je: equal / zero */

loc_0036BB01: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0036BB10; /* je: equal / zero */

loc_0036BB06: ;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0036BBCD; /* jne: not equal / not zero */

loc_0036BB10: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x145B4);
    eax = MEM32(eax + 0x145B8);
    xmm7 = MEMF(0x6493D4); /* movss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x84B264);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    edi = ZX16(MEM16(eax + ecx * 2));
    esi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    ebp = edx + -920;
    MEM32(0x84B338) = esi;
    MEM32(0x84B33C) = esi;
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x1C) = xmm7; /* movss */
    if (CMP_LE(edi & edi, 0)) goto loc_0036BBC2; /* jle: less or equal (signed <=) */

loc_0036BB5D: ;
    /* nop */

loc_0036BB60: ;
    ecx = MEM32(esp + 0x24);
    eax = ZX16(MEM16(ecx + esi * 2));
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0036BBB4; /* js: sign (negative) */

loc_0036BB6C: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0036BBB4; /* je: equal / zero */

loc_0036BB73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003744E0(); /* call 0x003744E0 */

loc_0036BB8E: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x14;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0036BB9F; /* jbe: below or equal (unsigned <=) */

loc_0036BB9A: ;
    xmm7 = xmm0; /* movaps */
    ebx = eax;

loc_0036BB9F: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036BBB4; /* jbe: below or equal (unsigned <=) */

loc_0036BBAA: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;

loc_0036BBB4: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_0036BB60; /* jl: less (signed <) */

loc_0036BBB9: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0036BBC6; /* jne: not equal / not zero */

loc_0036BBC2: ;
    ebx = MEM32(esp + 0x20);

loc_0036BBC6: ;
    ecx = MEM32(esp + 0x10);
    MEM16(edx) = LO16(ebx);

loc_0036BBCD: ;
    ecx++;
    edx = edx + 0x6D0;
    (void)0; /* cmp ecx, 0x80 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(ecx, 0x80)) goto loc_0036BAE0; /* jl: less (signed <) */

loc_0036BBE8: ;
    esi = MEM32(0x84B330);
    esi = esi + 0x8F54;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00336FC0(); /* call 0x00336FC0 */

loc_0036BBFB: ;
    esi = MEM32(0x84B330);
    esi = esi + 0xBCEC;
    eax = 1;
    PUSH32(esp, 0); sub_00336FC0(); /* call 0x00336FC0 */

loc_0036BC11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0036BC20
 * Original: 0x0036BC20 - 0x0036BFB0 (912 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036BC20: ;
    SET_LO8(eax, MEM8(0x84B31B));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x84B330);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036BC88; /* je: equal / zero */

loc_0036BC32: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    esi = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0036BC81; /* jle: less or equal (signed <=) */

loc_0036BC3B: ;
    edi = MEM32(0x84A5F8);
    SET_LO8(edx, MEM8(0x84B31A));
    SET_LO8(ebx, MEM8(0x84B319));
    ecx = 0; /* xor self */
    edi = edi + 0x238;

loc_0036BC55: ;
    ebp = MEM32(edi);
    if (CMP_NE(MEM32(ebp), 0)) goto loc_0036BC63; /* jne: not equal / not zero */

loc_0036BC5D: ;
    MEM8(ecx + eax + 0x3C) = LO8(edx);
    goto loc_0036BC67;

loc_0036BC63: ;
    MEM8(ecx + eax + 0x3C) = LO8(ebx);

loc_0036BC67: ;
    eax = MEM32(0x84B330);
    ebp = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esi++;
    edi = edi + 0x6D0;
    ecx = ecx + 0x8CC;
    if (CMP_L(esi, ebp)) goto loc_0036BC55; /* jl: less (signed <) */

loc_0036BC81: ;
    MEM8(0x84B31B) = 0;

loc_0036BC88: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x75ED5C); /* addss */
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    MEMF(0x75ED5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CE0))) goto loc_0036BCD5; /* jbe: below or equal (unsigned <=) */

loc_0036BCA9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = eax + 0x8F54;
    MEMF(0x75ED5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00337340(); /* call 0x00337340 */

loc_0036BCBF: ;
    ebx = MEM32(0x84B330);
    ebx = ebx + 0xBCEC;
    PUSH32(esp, 0); sub_00337340(); /* call 0x00337340 */

loc_0036BCD0: ;
    eax = MEM32(0x84B330);

loc_0036BCD5: ;
    ecx = MEM32(eax + 0x14E3C);
    edi = MEM32(eax + 0x8F54);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648EBC); /* movss */
    xmm2 = MEMF(0x59D948); /* movss */
    xmm3 = MEMF(0x6493F8); /* movss */
    xmm4 = MEMF(0x649AA8); /* movss */
    ebp = 0x1E;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    esi = eax + 0x8F60;
    if (CMP_GE(ecx, ebp)) goto loc_0036BD5E; /* jge: greater or equal (signed >=) */

loc_0036BD18: ;
    edx = ecx;
    ecx = edx + edx * 8;
    ecx = eax + ecx * 4 + 0x14A04;
    edx++;
    MEM32(eax + 0x14E3C) = edx;
    eax = MEM32(esi);
    edx = ecx;
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm1; /* movss */
    MEMF(ecx + 0x14) = xmm2; /* movss */
    MEMF(ecx + 0x18) = xmm3; /* movss */
    MEMF(ecx + 0x1C) = xmm4; /* movss */
    MEM32(ecx + 0x20) = edi;
    eax = MEM32(0x84B330);

loc_0036BD5E: ;
    ecx = MEM32(eax + 0x14E3C);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    edi = MEM32(eax + 0xBCEC);
    esi = eax + 0xBCF8;
    if (CMP_GE(ecx, ebp)) goto loc_0036BDBA; /* jge: greater or equal (signed >=) */

loc_0036BD74: ;
    edx = ecx;
    ecx = edx + edx * 8;
    ecx = eax + ecx * 4 + 0x14A04;
    edx++;
    MEM32(eax + 0x14E3C) = edx;
    eax = MEM32(esi);
    edx = ecx;
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm1; /* movss */
    MEMF(ecx + 0x14) = xmm2; /* movss */
    MEMF(ecx + 0x18) = xmm3; /* movss */
    MEMF(ecx + 0x1C) = xmm4; /* movss */
    MEM32(ecx + 0x20) = edi;
    eax = MEM32(0x84B330);

loc_0036BDBA: ;
    SET_LO8(edx, MEM8(eax + 0xD));
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0036BDFA; /* jle: less or equal (signed <=) */

loc_0036BDC5: ;
    esi = MEM32(0x84A5F8);
    esi = esi + 0x568;

loc_0036BDD1: ;
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_0036BDEB; /* je: equal / zero */

loc_0036BDD5: ;
    edi = MEM32(eax + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(edx, edi)) goto loc_0036BDEB; /* jne: not equal / not zero */

loc_0036BDE3: ;
    MEM32(eax + 8) = MEM32(eax + 8) | edx;
    eax = MEM32(0x84B330);

loc_0036BDEB: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    ecx++;
    esi = esi + 0x6D0;
    if (CMP_L(ecx, edx)) goto loc_0036BDD1; /* jl: less (signed <) */

loc_0036BDFA: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0036BE8D; /* jne: not equal / not zero */

loc_0036BE07: ;
    (void)0; /* cmp MEM8(eax + 0xC), 1 - flags set for next jcc */
    PUSH32(esp, 3);
    if (CMP_LE(MEM8(eax + 0xC), 1)) goto loc_0036BE13; /* jle: less or equal (signed <=) */

loc_0036BE0F: ;
    PUSH32(esp, 3);
    goto loc_0036BE15;

loc_0036BE13: ;
    PUSH32(esp, 2);

loc_0036BE15: ;
    PUSH32(esp, 0); sub_00371160(); /* call 0x00371160 */

loc_0036BE1A: ;
    SET_LO8(eax, MEM8(0x84B314));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036BE6A; /* je: equal / zero */

loc_0036BE26: ;
    eax = MEM32(0x84A5F8);
    SET_LO16(ecx, MEM16(eax + 0x3B0));
    edx = MEM32(eax + 0x568);
    MEM16(eax + 0x3AE) = LO16(ecx);
    MEM8(edx + 0x2D2) = 8;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0036BE6A; /* je: equal / zero */

loc_0036BE50: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    SET_LO16(edx, MEM16(eax + ecx + -800));
    eax = eax + ecx;
    MEM16(eax + -802) = LO16(edx);

loc_0036BE6A: ;
    eax = MEM32(0x84B330);
    eax = eax + 0x8F54;
    PUSH32(esp, 0); sub_003371F0(); /* call 0x003371F0 */

loc_0036BE79: ;
    eax = MEM32(0x84B330);
    eax = eax + 0xBCEC;
    PUSH32(esp, 0); sub_003371F0(); /* call 0x003371F0 */

loc_0036BE88: ;
    eax = MEM32(0x84B330);

loc_0036BE8D: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    esi = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0036BED8; /* jle: less or equal (signed <=) */

loc_0036BE96: ;
    edi = 0; /* xor self */
    goto loc_0036BEA0;

    /* nop */

loc_0036BEA0: ;
    ecx = MEM32(0x84A5F8);
    if (CMP_EQ(MEM32(edi + ecx + 0x568), ebx)) goto loc_0036BEC9; /* je: equal / zero */

loc_0036BEAF: ;
    edx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(edx + esi), 1)) goto loc_0036BEC9; /* jne: not equal / not zero */

loc_0036BEBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0036EC20(); /* call 0x0036EC20 */

loc_0036BEC1: ;
    eax = MEM32(0x84B330);
    esp = esp + 4;

loc_0036BEC9: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esi++;
    edi = edi + 0x6D0;
    if (CMP_L(esi, ecx)) goto loc_0036BEA0; /* jl: less (signed <) */

loc_0036BED8: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    if (CMP_GE(esi, edx)) goto loc_0036BF4F; /* jge: greater or equal (signed >=) */

loc_0036BEE4: ;
    ebp = esi;
    edi = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x8CC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    goto loc_0036BF00;

    /* nop */
    /* nop */

loc_0036BF00: ;
    ecx = MEM32(0x84A5F8);
    ecx = MEM32(edi + ecx + 0x568);
    if (CMP_EQ(ecx, ebx)) goto loc_0036BF3A; /* je: equal / zero */

loc_0036BF11: ;
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_0036BF3A; /* jne: not equal / not zero */

loc_0036BF1A: ;
    SET_LO8(ecx, MEM8(0x84B318));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0036BF3A; /* jne: not equal / not zero */

loc_0036BF24: ;
    SET_LO8(ecx, MEM8(eax + ebp + 0x43));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0036BF3A; /* jne: not equal / not zero */

loc_0036BF2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0036D6D0(); /* call 0x0036D6D0 */

loc_0036BF32: ;
    eax = MEM32(0x84B330);
    esp = esp + 4;

loc_0036BF3A: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esi++;
    edi = edi + 0x6D0;
    ebp = ebp + 0x8CC;
    if (CMP_L(esi, edx)) goto loc_0036BF00; /* jl: less (signed <) */

loc_0036BF4F: ;
    MEM32(eax + 0x14894) = ebx;
    eax = MEM32(0x84B330);
    MEM32(eax + 0x14A00) = ebx;
    ecx = MEM32(0x84B330);
    MEM32(ecx + 0x14E3C) = ebx;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xD));
    edx = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0036BFAB; /* jle: less or equal (signed <=) */

loc_0036BF7A: ;
    ecx = 0; /* xor self */
    esi = 0xFFBFFFFFu;
    goto loc_0036BF90;

    /* nop */
    /* nop */

loc_0036BF90: ;
    MEM32(ecx + eax + 0xD0) = MEM32(ecx + eax + 0xD0) & esi;
    eax = MEM32(0x84B330);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    edx++;
    ecx = ecx + 0x8CC;
    if (CMP_L(edx, edi)) goto loc_0036BF90; /* jl: less (signed <) */

loc_0036BFAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036BFB0
 * Original: 0x0036BFB0 - 0x0036BFD9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BFB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0036BFB0: ;
    esp = esp - 0x24;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x135));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 7) = 1;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0036BFD9(); return; } /* je: equal / zero */

loc_0036BFCC: ;
    xmm0 = MEMF(0x649864); /* movss */
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0036C100
 * Original: 0x0036C100 - 0x0036C61F (1311 bytes, 339 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C100: ;
    esp = esp - 0x10;
    xmm3 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD8);
    MEMF(edi) = xmm3; /* movss */
    eax = MEM32(ecx + 0x1C);
    eax = MEM32(esi + eax + 0x14);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp eax, 0x17 - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_L(eax, 0x17)) goto loc_0036C23B; /* jl: less (signed <) */

loc_0036C133: ;
    if (CMP_G(eax, 0x1D)) goto loc_0036C23B; /* jg: greater (signed >) */

loc_0036C13C: ;
    edx = MEM32(esp + 0x30);
    if (TEST_Z(edx, edx)) goto loc_0036C1E8; /* je: equal / zero */

loc_0036C148: ;
    eax = MEM32(edx + 0x568);
    if (TEST_NZ(eax, eax)) goto loc_0036C1E8; /* jne: not equal / not zero */

loc_0036C156: ;
    if (CMP_NE(MEM32(edx + 0x64), 0x2D)) goto loc_0036C5D2; /* jne: not equal / not zero */

loc_0036C160: ;
    eax = MEM32(edx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_0036C1E8; /* je: equal / zero */

loc_0036C16A: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0036C171: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036C1DD; /* je: equal / zero */

loc_0036C175: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x1C);
    if (CMP_NE(MEM32(esi + ecx + 0x14), 0x1A)) goto loc_0036C1DD; /* jne: not equal / not zero */

loc_0036C183: ;
    eax = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(eax + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0036C1A1; /* jb: below (unsigned <) */

loc_0036C197: ;
    xmm0 = MEMF(0x648D10); /* movss */
    goto loc_0036C1C4;

loc_0036C1A1: ;
    /* comiss xmm0, MEMF(0x648D18) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D18))) goto loc_0036C1B4; /* jb: below (unsigned <) */

loc_0036C1AA: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    goto loc_0036C1C4;

loc_0036C1B4: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */

loc_0036C1C4: ;
    xmm1 = MEMF(edi); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x20);
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi) = xmm1; /* movss */
    goto loc_0036C1EC;

loc_0036C1DD: ;
    xmm3 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x20);

loc_0036C1E8: ;
    eax = MEM32(esp + 0x34);

loc_0036C1EC: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0036C243; /* jbe: below or equal (unsigned <=) */

loc_0036C1F6: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x7C))) goto loc_0036C5D2; /* jbe: below or equal (unsigned <=) */

loc_0036C208: ;
    if (TEST_Z(ebp, ebp)) goto loc_0036C5D2; /* je: equal / zero */

loc_0036C210: ;
    if (TEST_Z(MEM8(ebp + 0x14), 1)) goto loc_0036C5D2; /* je: equal / zero */

loc_0036C21A: ;
    ebp = MEM32(esp + 0x2C);
    ebp = MEM32(ebp + 0x568);
    ebp = MEM32(ebp + 0x444);
    if (CMP_NE(MEM32(ebp + 8), 6)) goto loc_0036C5D2; /* jne: not equal / not zero */

loc_0036C234: ;
    MEM8(esp + 0xF) = 1;
    goto loc_0036C243;

loc_0036C23B: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);

loc_0036C243: ;
    xmm0 = MEMF(eax + 0xB0); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_0036C5D2; /* ja: above (unsigned >) */

loc_0036C254: ;
    xmm0 = MEMF(eax + 0x178); /* movss */
    xmm4 = MEMF(0x648E64); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 >= xmm4)) goto loc_0036C275; /* jae: above or equal (unsigned >=) */

loc_0036C269: ;
    if (TEST_Z(MEM32(eax + 0x98), 0x1000000)) goto loc_0036C29F; /* je: equal / zero */

loc_0036C275: ;
    ebp = MEM32(ecx + 0x1C);
    if (CMP_EQ(MEM8(esi + ebp + 0xCD), 0)) goto loc_0036C29F; /* je: equal / zero */

loc_0036C282: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    POP32(esp, esi);
    MEMF(edi) = xmm3; /* movss */
    POP32(esp, ebp);
    MEMF(eax + 0xB0) = xmm0; /* movss */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0036C29F: ;
    eax = MEM32(ecx + 0x1C);
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = eax + esi;
    /* comiss xmm0, MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x18))) goto loc_0036C5D2; /* ja: above (unsigned >) */

loc_0036C2B4: ;
    /* comiss xmm0, MEMF(eax + 0x1C) - sets EFLAGS */
    xmm5 = MEMF(0x648D80); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(edi); /* movss */
    if ((xmm0 < MEMF(eax + 0x1C))) goto loc_0036C2D4; /* jb: below (unsigned <) */

loc_0036C2CE: ;
    xmm1 = xmm1 + xmm2; /* addss */
    goto loc_0036C2DA;

loc_0036C2D4: ;
    xmm1 = xmm1 + xmm5; /* addss */
    SET_LO8(ebx, 1);

loc_0036C2DA: ;
    eax = MEM32(esp + 0x28);
    MEMF(edi) = xmm1; /* movss */
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(ecx + 0x1C);
    ebp = MEM32(esi + eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0036C2F4; /* je: equal / zero */

loc_0036C2ED: ;
    if (CMP_EQ(ebp, 1)) goto loc_0036C2F8; /* je: equal / zero */

loc_0036C2F2: ;
    goto loc_0036C304;

loc_0036C2F4: ;
    if (TEST_NZ(ebp, ebp)) goto loc_0036C304; /* jne: not equal / not zero */

loc_0036C2F8: ;
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(edi) = xmm1; /* movss */

loc_0036C304: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0036C336; /* jne: not equal / not zero */

loc_0036C308: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0036C31F; /* jb: below (unsigned <) */

loc_0036C315: ;
    eax = MEM32(ecx + 0x1C);
    if (CMP_EQ(MEM32(esi + eax + 0x20), 1)) goto loc_0036C32A; /* je: equal / zero */

loc_0036C31F: ;
    eax = MEM32(ecx + 0x1C);
    ebx = MEM32(esi + eax + 0x20);
    if (TEST_NZ(ebx, ebx)) goto loc_0036C336; /* jne: not equal / not zero */

loc_0036C32A: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(edi) = xmm0; /* movss */

loc_0036C336: ;
    eax = MEM32(esp + 0x34);
    if (CMP_NE(MEM8(eax + 0x64), 0xFF)) goto loc_0036C365; /* jne: not equal / not zero */

loc_0036C340: ;
    if (TEST_Z(MEM32(eax + 0x98), 0x104000)) goto loc_0036C365; /* je: equal / zero */

loc_0036C34C: ;
    eax = MEM32(ecx + 0x1C);
    if (CMP_EQ(MEM32(eax), 0x1E)) goto loc_0036C365; /* je: equal / zero */

loc_0036C354: ;
    xmm0 = MEMF(eax + esi + 0xD0); /* movss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(edi) = xmm0; /* movss */

loc_0036C365: ;
    eax = MEM32(ecx + 0x1C);
    ebx = esi + eax + 0x50;
    SET_LO8(eax, MEM8(ebx + 6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036C530; /* je: equal / zero */

loc_0036C37B: ;
    if (TEST_Z(edx, edx)) goto loc_0036C530; /* je: equal / zero */

loc_0036C383: ;
    eax = MEM32(0x84B330);
    xmm6 = MEMF(0x648D10); /* movss */
    ecx = 0; /* xor self */
    if (CMP_LE(MEM8(eax + 0xD), LO8(ecx))) goto loc_0036C444; /* jle: less or equal (signed <=) */

loc_0036C39B: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x78;

loc_0036C3A3: ;
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(edx + 0x80); /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x78); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebp = eax + -120;
    if (CMP_EQ(edx, ebp)) goto loc_0036C42C; /* je: equal / zero */

loc_0036C3E4: ;
    xmm0 = MEMF(ebx + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x14))) goto loc_0036C42C; /* jb: below (unsigned <) */

loc_0036C3F0: ;
    edx = MEM32(eax + 0x1C0);
    ebp = MEM32(esp + 0x2C);
    ebp = MEM32(ebp + 0x238);
    edx = MEM32(edx);
    (void)0; /* cmp edx, MEM32(ebp) - flags set for next jcc */
    xmm0 = MEMF(edi); /* movss */
    if (CMP_NE(edx, MEM32(ebp))) goto loc_0036C420; /* jne: not equal / not zero */

loc_0036C40B: ;
    (void)0; /* cmp MEM32(ebx), 0x1B - flags set for next jcc */
    edx = MEM32(esp + 0x30);
    if (CMP_NE(MEM32(ebx), 0x1B)) goto loc_0036C41A; /* jne: not equal / not zero */

loc_0036C414: ;
    xmm0 = xmm0 - xmm6; /* subss */
    goto loc_0036C428;

loc_0036C41A: ;
    xmm0 = xmm0 - xmm2; /* subss */
    goto loc_0036C428;

loc_0036C420: ;
    edx = MEM32(esp + 0x30);
    xmm0 = xmm0 + xmm6; /* addss */

loc_0036C428: ;
    MEMF(edi) = xmm0; /* movss */

loc_0036C42C: ;
    ebp = MEM32(0x84B330);
    ebp = (uint32_t)(int32_t)SMEM8(ebp + 0xD);
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, ebp)) goto loc_0036C3A3; /* jl: less (signed <) */

loc_0036C444: ;
    if (CMP_NE(MEM32(ebx), 0x1B)) goto loc_0036C50B; /* jne: not equal / not zero */

loc_0036C44D: ;
    if (CMP_GE(ecx, 0x80)) goto loc_0036C50B; /* jge: greater or equal (signed >=) */

loc_0036C459: ;
    ebx = MEM32(0x84A5F8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ebx + 0x78;
    ebx = MEM32(0x84A5FC);

loc_0036C471: ;
    if (CMP_NE(MEM8(ebx + ecx), 0x2D)) goto loc_0036C4F9; /* jne: not equal / not zero */

loc_0036C47B: ;
    ebp = eax + -120;
    if (CMP_EQ(edx, ebp)) goto loc_0036C4F9; /* je: equal / zero */

loc_0036C482: ;
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(edx + 0x80); /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x78); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ebp = MEM32(esp + 0x18);
    xmm0 = MEMF(ebp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x10))) goto loc_0036C4F9; /* jb: below (unsigned <) */

loc_0036C4CC: ;
    edx = MEM32(eax + 0x1C0);
    ebp = MEM32(esp + 0x2C);
    edx = MEM32(edx);
    ebp = MEM32(ebp + 0x238);
    (void)0; /* cmp edx, MEM32(ebp) - flags set for next jcc */
    xmm0 = MEMF(edi); /* movss */
    edx = MEM32(esp + 0x30);
    if (CMP_NE(edx, MEM32(ebp))) goto loc_0036C4F1; /* jne: not equal / not zero */

loc_0036C4EB: ;
    xmm0 = xmm0 - xmm5; /* subss */
    goto loc_0036C4F5;

loc_0036C4F1: ;
    xmm0 = xmm0 + xmm2; /* addss */

loc_0036C4F5: ;
    MEMF(edi) = xmm0; /* movss */

loc_0036C4F9: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x80)) goto loc_0036C471; /* jl: less (signed <) */

loc_0036C50B: ;
    ecx = MEM32(esp + 0x20);

loc_0036C50F: ;
    eax = MEM32(ecx + 0x1C);
    esi = MEM32(esi + eax + 0x14);
    eax = esi + -6;
    if (CMP_A(eax, 0x4B)) goto loc_0036C607; /* ja: above (unsigned >) */

loc_0036C522: ;
    ecx = ZX8(MEM8(eax + 0x36C638));
    { uint32_t _jt = MEM32(ecx * 4 + 0x36C620); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0036C53Au) goto loc_0036C53A;
    if (_jt == 0x0036C5D2u) goto loc_0036C5D2;
    if (_jt == 0x0036C5DFu) goto loc_0036C5DF;
    if (_jt == 0x0036C5E9u) goto loc_0036C5E9;
    if (_jt == 0x0036C5FBu) goto loc_0036C5FB;
    if (_jt == 0x0036C607u) goto loc_0036C607;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036C530: ;
    xmm6 = MEMF(0x648D10); /* movss */
    goto loc_0036C50F;

loc_0036C53A: ;
    eax = MEM32(esp + 0x34);
    if (CMP_EQ(MEM8(eax + 0x64), 0xFF)) goto loc_0036C5D2; /* je: equal / zero */

loc_0036C548: ;
    esi = MEM32(edx + 0x64);
    if (CMP_NE(esi, 1)) goto loc_0036C55F; /* jne: not equal / not zero */

loc_0036C550: ;
    ecx = edx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0036C557: ;
    if (CMP_EQ(LO8(eax), 3)) goto loc_0036C56F; /* je: equal / zero */

loc_0036C55B: ;
    edx = MEM32(esp + 0x30);

loc_0036C55F: ;
    if (CMP_NE(esi, 0x35)) goto loc_0036C5D2; /* jne: not equal / not zero */

loc_0036C564: ;
    eax = edx;
    PUSH32(esp, 0); sub_00369D80(); /* call 0x00369D80 */

loc_0036C56B: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0036C5D2; /* jne: not equal / not zero */

loc_0036C56F: ;
    ecx = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_0036C596; /* jb: below (unsigned <) */

loc_0036C580: ;
    xmm1 = MEMF(edi); /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi) = xmm1; /* movss */
    goto loc_0036C607;

loc_0036C596: ;
    /* comiss xmm0, MEMF(0x648D18) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D18))) goto loc_0036C5B0; /* jb: below (unsigned <) */

loc_0036C59F: ;
    xmm1 = MEMF(edi); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi) = xmm1; /* movss */
    goto loc_0036C607;

loc_0036C5B0: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi) = xmm1; /* movss */
    goto loc_0036C607;

loc_0036C5D2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(edi) = xmm3; /* movss */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0036C5DF: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    goto loc_0036C603;

loc_0036C5E9: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_0036C5FB; /* je: equal / zero */

loc_0036C5F1: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    goto loc_0036C603;

loc_0036C5FB: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */

loc_0036C603: ;
    MEMF(edi) = xmm0; /* movss */

loc_0036C607: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036C613; /* je: equal / zero */

loc_0036C60F: ;
    MEMF(edi) = xmm5; /* movss */

loc_0036C613: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0036C690
 * Original: 0x0036C690 - 0x0036C6BD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C690: ;
    eax = ZX16(MEM16(esi + 0x60));
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    edx = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    ebx = eax + ecx + 0x38;
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_0036C6BD(); return; } /* je: equal / zero */

loc_0036C6B9: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0036C6C7(); return; /* tail jmp 0x0036C6C7 */

}

/**
 * sub_0036C740
 * Original: 0x0036C740 - 0x0036C757 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C740: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0036C757(); return; } /* je: equal / zero */

loc_0036C753: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0036C761(); return; /* tail jmp 0x0036C761 */

}

/**
 * sub_0036C860
 * Original: 0x0036C860 - 0x0036C877 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C860: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0036C877(); return; } /* je: equal / zero */

loc_0036C873: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0036C881(); return; /* tail jmp 0x0036C881 */

}

/**
 * sub_0036C8B0
 * Original: 0x0036C8B0 - 0x0036C90A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C8B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036C8B0: ;
    eax = esi;
    PUSH32(esp, 0); sub_0036C860(); /* call 0x0036C860 */

loc_0036C8B7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036C907; /* jne: not equal / not zero */

loc_0036C8BB: ;
    eax = MEM32(edi + 0x98);
    if (TEST_NZ(eax, 0x4000000)) goto loc_0036C907; /* jne: not equal / not zero */

loc_0036C8C8: ;
    if (TEST_Z(eax, 0x100000)) goto loc_0036C8D2; /* je: equal / zero */

loc_0036C8CF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0036C8D2: ;
    if (CMP_NE(MEM8(edi + 0x64), 0xFF)) goto loc_0036C8DD; /* jne: not equal / not zero */

loc_0036C8D8: ;
    if (TEST_Z(HI8(eax), 0x40)) goto loc_0036C907; /* je: equal / zero */

loc_0036C8DD: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0036C90A(); return; } /* je: equal / zero */

loc_0036C8E7: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + -1644);
    if (CMP_EQ(eax, 0x34)) { sub_0036C90A(); return; } /* je: equal / zero */

loc_0036C902: ;
    if (CMP_EQ(eax, 0x2D)) { sub_0036C90A(); return; } /* je: equal / zero */

loc_0036C907: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0036C920
 * Original: 0x0036C920 - 0x0036CBFB (731 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C920: ;
    esp = esp - 0x108;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648F08); /* movss */
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm5 = xmm3; /* movaps */
    if (CMP_LE(eax & eax, 0)) goto loc_0036CBCA; /* jle: less or equal (signed <=) */

loc_0036C95C: ;
    xmm4 = MEMF(0x649228); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_0036C970;

    /* nop */

loc_0036C970: ;
    eax = MEM32(esp + 0x120);
    edx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    xmm0 = xmm3; /* movaps */
    if (CMP_L(eax, 4)) goto loc_0036CA97; /* jl: less (signed <) */

loc_0036C987: ;
    ecx = MEM32(esp + 0x11C);
    MEM32(esp + 0x10) = 3;
    ebx = 2;
    ebp = 1;
    ecx = ecx + 0x14;

loc_0036C9A3: ;
    SET_LO8(eax, MEM8(esp + ebp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036C9D6; /* jne: not equal / not zero */

loc_0036C9AB: ;
    xmm1 = MEMF(ecx + -16); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036C9C3; /* jbe: below or equal (unsigned <=) */

loc_0036C9B5: ;
    MEM32(esp + 0x28) = edi;
    edx = 1;
    xmm0 = xmm1; /* movaps */
    goto loc_0036C9D6;

loc_0036C9C3: ;
    xmm1 = MEMF(ecx + -16); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036C9D6; /* jp: parity */

loc_0036C9D1: ;
    MEM32(esp + edx * 4 + 0x28) = edi;
    edx++;

loc_0036C9D6: ;
    SET_LO8(eax, MEM8(esp + ebp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036CA07; /* jne: not equal / not zero */

loc_0036C9DE: ;
    xmm1 = MEMF(ecx); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036C9F5; /* jbe: below or equal (unsigned <=) */

loc_0036C9E7: ;
    MEM32(esp + 0x28) = ebp;
    edx = 1;
    xmm0 = xmm1; /* movaps */
    goto loc_0036CA07;

loc_0036C9F5: ;
    xmm1 = MEMF(ecx); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036CA07; /* jp: parity */

loc_0036CA02: ;
    MEM32(esp + edx * 4 + 0x28) = ebp;
    edx++;

loc_0036CA07: ;
    SET_LO8(eax, MEM8(esp + ebx + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036CA3A; /* jne: not equal / not zero */

loc_0036CA0F: ;
    xmm1 = MEMF(ecx + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036CA27; /* jbe: below or equal (unsigned <=) */

loc_0036CA19: ;
    MEM32(esp + 0x28) = ebx;
    edx = 1;
    xmm0 = xmm1; /* movaps */
    goto loc_0036CA3A;

loc_0036CA27: ;
    xmm1 = MEMF(ecx + 0x10); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036CA3A; /* jp: parity */

loc_0036CA35: ;
    MEM32(esp + edx * 4 + 0x28) = ebx;
    edx++;

loc_0036CA3A: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(MEM8(esp + eax + 0x14), 0)) goto loc_0036CA74; /* jne: not equal / not zero */

loc_0036CA45: ;
    xmm1 = MEMF(ecx + 0x20); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036CA5D; /* jbe: below or equal (unsigned <=) */

loc_0036CA4F: ;
    MEM32(esp + 0x28) = eax;
    edx = 1;
    xmm0 = xmm1; /* movaps */
    goto loc_0036CA74;

loc_0036CA5D: ;
    xmm1 = MEMF(ecx + 0x20); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036CA74; /* jp: parity */

loc_0036CA6B: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + edx * 4 + 0x28) = eax;
    edx++;

loc_0036CA74: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    eax = MEM32(esp + 0x120);
    edi = edi + 4;
    eax = eax + 0xFFFFFFFDu;
    ebp = ebp + 4;
    ebx = ebx + 4;
    ecx = ecx + 0x40;
    if (CMP_L(edi, eax)) goto loc_0036C9A3; /* jl: less (signed <) */

loc_0036CA97: ;
    if (CMP_GE(edi, MEM32(esp + 0x120))) goto loc_0036CAF0; /* jge: greater or equal (signed >=) */

loc_0036CAA0: ;
    eax = MEM32(esp + 0x11C);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + eax + 4;

loc_0036CAB0: ;
    SET_LO8(eax, MEM8(esp + edi + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036CAE1; /* jne: not equal / not zero */

loc_0036CAB8: ;
    xmm1 = MEMF(ecx); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0036CACF; /* jbe: below or equal (unsigned <=) */

loc_0036CAC1: ;
    MEM32(esp + 0x28) = edi;
    edx = 1;
    xmm0 = xmm1; /* movaps */
    goto loc_0036CAE1;

loc_0036CACF: ;
    xmm1 = MEMF(ecx); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036CAE1; /* jp: parity */

loc_0036CADC: ;
    MEM32(esp + edx * 4 + 0x28) = edi;
    edx++;

loc_0036CAE1: ;
    eax = MEM32(esp + 0x120);
    edi++;
    ecx = ecx + 0x10;
    if (CMP_L(edi, eax)) goto loc_0036CAB0; /* jl: less (signed <) */

loc_0036CAF0: ;
    eax = 0; /* xor self */
    if (CMP_L(edx, 4)) goto loc_0036CB86; /* jl: less (signed <) */

loc_0036CAFB: ;
    edi = edx + -3;
    edi = edi;

loc_0036CB00: ;
    ecx = MEM32(esp + eax * 4 + 0x28);
    MEM32(esp + esi * 4 + 0xC8) = ecx;
    MEM8(esp + ecx + 0x14) = 1;
    ecx = MEM32(esp + eax * 4 + 0x2C);
    esi++;
    MEM32(esp + esi * 4 + 0xC8) = ecx;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + esi * 4 + 0x74) = xmm0; /* movss */
    MEM8(esp + ecx + 0x14) = 1;
    ecx = MEM32(esp + eax * 4 + 0x30);
    esi++;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + esi * 4 + 0x74) = xmm1; /* movss */
    MEM32(esp + esi * 4 + 0xC8) = ecx;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + esi * 4 + 0x78) = xmm0; /* movss */
    esi++;
    MEM8(esp + ecx + 0x14) = 1;
    ecx = MEM32(esp + eax * 4 + 0x34);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(esp + esi * 4 + 0xC8) = ecx;
    MEMF(esp + esi * 4 + 0x78) = xmm1; /* movss */
    eax = eax + 4;
    esi++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(esp + ecx + 0x14) = 1;
    xmm5 = xmm1; /* movaps */
    if (CMP_L(eax, edi)) goto loc_0036CB00; /* jl: less (signed <) */

loc_0036CB86: ;
    if (CMP_GE(eax, edx)) goto loc_0036CBB6; /* jge: greater or equal (signed >=) */

loc_0036CB8A: ;
    /* nop */

loc_0036CB90: ;
    ecx = MEM32(esp + eax * 4 + 0x28);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    MEM32(esp + esi * 4 + 0xC8) = ecx;
    MEMF(esp + esi * 4 + 0x78) = xmm0; /* movss */
    esi++;
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(esp + ecx + 0x14) = 1;
    xmm5 = xmm0; /* movaps */
    if (CMP_L(eax, edx)) goto loc_0036CB90; /* jl: less (signed <) */

loc_0036CBB6: ;
    (void)0; /* cmp esi, MEM32(esp + 0x120) - flags set for next jcc */
    xmm2 = xmm2 * xmm4; /* mulss */
    if (CMP_L(esi, MEM32(esp + 0x120))) goto loc_0036C970; /* jl: less (signed <) */

loc_0036CBC7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0036CBCA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0036CBCF: ;
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = xmm0 * xmm5; /* mulss */
    if (CMP_LE(esi & esi, 0)) goto loc_0036CBF0; /* jle: less or equal (signed <=) */

loc_0036CBD9: ;
    /* nop */

loc_0036CBE0: ;
    xmm1 = MEMF(esp + eax * 4 + 0x6C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_0036CBFB(); return; } /* ja: above (unsigned >) */

loc_0036CBEB: ;
    eax++;
    if (CMP_L(eax, esi)) goto loc_0036CBE0; /* jl: less (signed <) */

loc_0036CBF0: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_0036CC10
 * Original: 0x0036CC10 - 0x0036CC4B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CC10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_0036CC10: ;
    esp = esp - 0x1F0;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1FC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x6C);
    esi = ebx;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0036CC2B: ;
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEM32(esp + 0x30) = eax;
    if ((xmm0 <= xmm6)) { sub_0036CC4B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0036CC3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036D310
 * Original: 0x0036D310 - 0x0036D4D6 (454 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D310: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xD));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm4 = xmm6; /* movaps */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0036D4CD; /* jle: less or equal (signed <=) */

loc_0036D32F: ;
    ecx = MEM32(esp + 0x34);
    xmm5 = MEMF(0x6493B8); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    ecx = ecx + 0x78;
    eax = edx;
    ebx = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = eax;
    ebp = ebp + 0x135;

loc_0036D370: ;
    ecx = ebp + -189;
    MEM32(esp + 0x14) = ecx;
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
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0, MEMF(0x6493B4) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x6493B4))) goto loc_0036D4AC; /* jae: above or equal (unsigned >=) */

loc_0036D3DD: ;
    edx = MEM32(0x84B330);
    SET_LO8(eax, MEM8(ebx + edx + 0x43));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036D4AC; /* jne: not equal / not zero */

loc_0036D3EF: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 >= xmm0)) goto loc_0036D4AC; /* jae: above or equal (unsigned >=) */

loc_0036D41B: ;
    SET_LO8(eax, MEM8(ebp));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm3; /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036D46C; /* je: equal / zero */

loc_0036D425: ;
    ecx = MEM32(0x84A5FC);
    eax = ZX8(LO8(eax));
    if (CMP_NE(MEM8(eax + ecx + -1), 0x35)) goto loc_0036D46C; /* jne: not equal / not zero */

loc_0036D435: ;
    edx = MEM32(0x84A600);
    eax = ZX16(MEM16(edx + eax * 2 + -2));
    eax = eax + 0xFFFFFF23u;
    if (CMP_A(eax, 0xBC)) goto loc_0036D46C; /* ja: above (unsigned >) */

loc_0036D44C: ;
    eax = ZX8(MEM8(eax + 0x36D4E8));
    { uint32_t _jt = MEM32(eax * 4 + 0x36D4D8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0036D45Au) goto loc_0036D45A;
    if (_jt == 0x0036D45Fu) goto loc_0036D45F;
    if (_jt == 0x0036D469u) goto loc_0036D469;
    if (_jt == 0x0036D46Cu) goto loc_0036D46C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036D45A: ;
    xmm1 = xmm3; /* movaps */
    goto loc_0036D46C;

loc_0036D45F: ;
    xmm1 = MEMF(0x648D18); /* movss */
    goto loc_0036D46C;

loc_0036D469: ;
    xmm1 = xmm7; /* movaps */

loc_0036D46C: ;
    eax = MEM32(esp + 0x3C);
    ecx = ZX16(MEM16(eax + 0x60));
    if (CMP_NE(edi, ecx)) goto loc_0036D47C; /* jne: not equal / not zero */

loc_0036D478: ;
    xmm1 = xmm1 - xmm3; /* subss */

loc_0036D47C: ;
    edx = MEM32(ebp + 0x103);
    eax = MEM32(eax + 0x238);
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_0036D498; /* jne: not equal / not zero */

loc_0036D48E: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    goto loc_0036D4AC;

loc_0036D498: ;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0036D49D: ;
    if (TEST_Z(eax, eax)) goto loc_0036D4AC; /* je: equal / zero */

loc_0036D4A1: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */

loc_0036D4AC: ;
    edx = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    edi++;
    ebp = ebp + 0x6D0;
    ebx = ebx + 0x8CC;
    if (CMP_L(edi, eax)) goto loc_0036D370; /* jl: less (signed <) */

loc_0036D4CB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0036D4CD: ;
    POP32(esp, edi);
    xmm0 = xmm4; /* movaps */
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0036D5B0
 * Original: 0x0036D5B0 - 0x0036D5DE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036D5B0: ;
    if (TEST_S(ecx, ecx)) goto loc_0036D5DD; /* jl: less (signed <) */

loc_0036D5B4: ;
    if (CMP_GE(ecx, 0x11)) goto loc_0036D5DD; /* jge: greater or equal (signed >=) */

loc_0036D5B9: ;
    if (TEST_S(eax, eax)) goto loc_0036D5DD; /* jl: less (signed <) */

loc_0036D5BD: ;
    ecx = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    if (CMP_GE(eax, edx)) goto loc_0036D5DD; /* jge: greater or equal (signed >=) */

loc_0036D5CB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    MEM16(eax + ecx + 0x150) = MEM16(eax + ecx + 0x150) + 1;
    eax = eax + ecx + 0x38;

loc_0036D5DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036D5E0
 * Original: 0x0036D5E0 - 0x0036D6C4 (228 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D5E0(void)
{
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

loc_0036D5E0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0036D5ED: ;
    if (CMP_NE(LO8(eax), 2)) { sub_0036D6C4(); return; } /* jne: not equal / not zero */

loc_0036D5F5: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x64);
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0036D5FF: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x78); /* subss */
    xmm1 = MEMF(eax + 0x20); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(ebx + 0x80); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    POP32(esp, edi);
    if (1 /* jp after test - parity */) goto loc_0036D63C; /* jp: parity */

loc_0036D62F: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0036D6C4(); return; } /* jnp: not parity */

loc_0036D63C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm3 = MEMF(ebx + 0x114); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0xC) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0036D659: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    xmm1 = xmm0; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 < MEMF(0x648E6C))) goto loc_0036D68A; /* jb: below (unsigned <) */

loc_0036D67A: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    goto loc_0036D6A5;

loc_0036D68A: ;
    xmm0 = MEMF(0x648F64); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0036D6A5; /* jb: below (unsigned <) */

loc_0036D697: ;
    xmm3 = xmm3 - MEMF(0x648F60); /* subss */
    MEMF(esp + 4) = xmm3; /* movss */

loc_0036D6A5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64908C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0036D6C4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0036D6BD: ;
    SET_LO8(eax, 0); /* xor self */
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
 * sub_0036D6D0
 * Original: 0x0036D6D0 - 0x0036D731 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D6D0: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    ebx = eax + ebp;
    eax = MEM32(0x84B330);
    PUSH32(esp, esi);
    esi = edx + eax + 0x38;
    edx = MEM32(ebx + 0x238);
    edx = MEM32(edx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2D98);
    eax = edx + eax + 0x8F54;
    edx = MEM32(0x84A5FC);
    MEM32(esp + 0x14) = eax;
    (void)0; /* cmp MEM8(edx + ecx), 1 - flags set for next jcc */
    MEM8(esp + 0x10) = 1;
    if (CMP_EQ(MEM8(edx + ecx), 1)) { sub_0036D731(); return; } /* je: equal / zero */

loc_0036D726: ;
    MEM8(esi + 0xB) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0036E810
 * Original: 0x0036E810 - 0x0036E98E (382 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E810: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEM16(esi + 2) = 0x1E;
    MEM16(esi + 0x7C4) = 0xFFFF;
    MEMF(esi + 0xE0) = xmm0; /* movss */
    MEMF(esi + 0xDC) = xmm0; /* movss */
    MEMF(esi + 0x800) = xmm0; /* movss */
    xmm1 = MEMF(0x648E70); /* movss */
    eax = 0; /* xor self */
    MEM8(esi + 7) = LO8(eax);
    MEM8(esi + 0xEC) = LO8(eax);
    MEM16(esi + 0x118) = LO16(eax);
    MEM16(esi + 0x7C6) = LO16(eax);
    edx = edx | 0xFFFFFFFFu;
    MEM8(esi + 5) = LO8(edx);
    MEM16(esi + 0x172) = LO16(edx);
    MEM16(esi + 0x148) = LO16(edx);
    MEM16(esi + 0x14A) = LO16(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x568);
    eax = ecx + 0x78;
    ebx = ebx + 0x49C;
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ecx + 0x568);
    eax = eax + 0x4AC;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esi + 0x14C) = xmm0; /* movss */
    MEMF(esi + 0x150) = xmm0; /* movss */
    MEMF(esi + 0x154) = xmm0; /* movss */
    MEMF(esi + 0x138) = xmm1; /* movss */
    MEMF(esi + 0x13C) = xmm1; /* movss */
    MEMF(esi + 0x140) = xmm1; /* movss */
    eax = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    ebx = 0; /* xor self */
    if (CMP_L(edi, eax)) goto loc_0036E92B; /* jl: less (signed <) */

loc_0036E8F4: ;
    SET_LO16(eax, MEM16(esi + 0xB4));
    MEM8(esi + 0xEC) = LO8(ebx);
    MEM16(esi + 0xB6) = LO16(eax);
    MEMF(esi + 0xC4) = xmm0; /* movss */
    MEM16(esi + 2) = 0x1E;
    MEM16(esi + 0xB4) = LO16(edx);
    MEM16(esi + 0x102) = LO16(edx);
    MEM16(esi + 0x116) = LO16(edx);

loc_0036E92B: ;
    edx = MEM32(ecx + 0x568);
    xmm1 = MEMF(0x648E78); /* movss */
    MEMF(edx + 0x4CC) = xmm0; /* movss */
    eax = MEM32(ecx + 0x568);
    MEMF(eax + 0xD0) = xmm0; /* movss */
    MEMF(esi + 0x11C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E74); /* movss */
    MEMF(esi + 0x120) = xmm0; /* movss */
    MEMF(esi + 0x124) = xmm1; /* movss */
    ecx = MEM32(ecx + 0x568);
    edx = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(edx + 8), 5)) { sub_0036E98E(); return; } /* jne: not equal / not zero */

loc_0036E981: ;
    eax = MEM32(esi + 0x98);
    eax = eax | 0x400;
    g_seh_ebp = ebp; sub_0036E9B5(); return; /* tail jmp 0x0036E9B5 */

}

/**
 * sub_0036EA10
 * Original: 0x0036EA10 - 0x0036EB9B (395 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EA10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0036EA10: ;
    xmm4 = MEMF(0x6490B0); /* movss */
    xmm5 = MEMF(0x6493A8); /* movss */
    xmm6 = MEMF(0x648E38); /* movss */
    xmm3 = MEMF(0x649294); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x568);
    ebx = MEM32(ecx + 0xA0);
    (void)0; /* cmp ebx, 0x52 - flags set for next jcc */
    xmm2 = xmm4; /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm1 = xmm6; /* movaps */
    if (CMP_EQ(ebx, 0x52)) goto loc_0036EB22; /* je: equal / zero */

loc_0036EA52: ;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036EA75; /* je: equal / zero */

loc_0036EA5C: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A600);
    if (CMP_NE(MEM16(eax + edx * 2 + -2), 0x12C)) goto loc_0036EA75; /* jne: not equal / not zero */

loc_0036EA6D: ;
    xmm3 = MEMF(0x648F50); /* movss */

loc_0036EA75: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0036EB22; /* je: equal / zero */

loc_0036EA80: ;
    PUSH32(esp, edi);
    edi = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0036EA89: ;
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm2 = xmm2 / xmm3; /* divss */
    POP32(esp, edi);
    if ((xmm1 < xmm0)) goto loc_0036EAAA; /* jb: below (unsigned <) */

loc_0036EAA5: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0036EAD5;

loc_0036EAAA: ;
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CE4))) goto loc_0036EABD; /* jb: below (unsigned <) */

loc_0036EAB3: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    goto loc_0036EAD5;

loc_0036EABD: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x6491E8); /* mulss */
    xmm0 = xmm0 * MEMF(0x6493B0); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */

loc_0036EAD5: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0036EAEB; /* jbe: below or equal (unsigned <=) */

loc_0036EADE: ;
    xmm2 = MEMF(0x648D1C); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0036EAF5; /* jbe: below or equal (unsigned <=) */

loc_0036EAEB: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0036EAF8; /* ja: above (unsigned >) */

loc_0036EAF0: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0036EAF8;

loc_0036EAF5: ;
    xmm0 = xmm2; /* movaps */

loc_0036EAF8: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm2 = xmm3; /* movaps */
    if ((xmm3 > xmm1)) goto loc_0036EB0E; /* ja: above (unsigned >) */

loc_0036EB0B: ;
    xmm2 = xmm1; /* movaps */

loc_0036EB0E: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    if ((xmm3 <= xmm1)) goto loc_0036EB1E; /* jbe: below or equal (unsigned <=) */

loc_0036EB1B: ;
    xmm1 = xmm3; /* movaps */

loc_0036EB1E: ;
    xmm1 = xmm1 * xmm6; /* mulss */

loc_0036EB22: ;
    if (CMP_EQ(ebx, 0x53)) goto loc_0036EB31; /* je: equal / zero */

loc_0036EB27: ;
    if (CMP_LE(ebx, 0x5B)) goto loc_0036EB45; /* jle: less or equal (signed <=) */

loc_0036EB2C: ;
    if (CMP_G(ebx, 0x64)) goto loc_0036EB45; /* jg: greater (signed >) */

loc_0036EB31: ;
    xmm3 = MEMF(0x6493AC); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */

loc_0036EB45: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 4);
    xmm3 = MEMF(eax * 4 + 0x74D970); /* movss */
    edx = MEM32(esp + 0xC);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(eax * 4 + 0x74D970); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax * 4 + 0x74D970); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = (int32_t)xmm3; /* cvttss2si */
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM32(edx) = 0;
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036EBA0
 * Original: 0x0036EBA0 - 0x0036EC12 (114 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EBA0: ;
    ecx = MEM32(0x84B330);
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0036EC0B; /* jle: less or equal (signed <=) */

loc_0036EBB9: ;
    esi = eax + 0x568;
    ecx = ecx + 0x3A;
    eax = 1;
    goto loc_0036EBD0;

    /* nop */

loc_0036EBD0: ;
    ebx = MEM32(esi);
    if (CMP_NE(MEM32(ebx + 0xBC), eax)) goto loc_0036EBFA; /* jne: not equal / not zero */

loc_0036EBDA: ;
    SET_LO8(ebx, MEM8(ecx + 9));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0036EBFA; /* jne: not equal / not zero */

loc_0036EBE1: ;
    if (CMP_NE(MEM16(ecx), 0x33)) goto loc_0036EBFA; /* jne: not equal / not zero */

loc_0036EBE7: ;
    ebp = MEM32(esp + 0x14);
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x9B);
    ebp = ZX16(MEM16(ebp + 0x60));
    if (CMP_EQ(ebx, ebp)) goto loc_0036EC0D; /* je: equal / zero */

loc_0036EBFA: ;
    edx++;
    esi = esi + 0x6D0;
    ecx = ecx + 0x8CC;
    if (CMP_L(edx, edi)) goto loc_0036EBD0; /* jl: less (signed <) */

loc_0036EC0B: ;
    SET_LO8(eax, 0); /* xor self */

loc_0036EC0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036EC20
 * Original: 0x0036EC20 - 0x0036EFEB (971 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EC20: ;
    esp = esp - 0x28;
    ecx = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    PUSH32(esp, ebx);
    xmm4 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ebx = ebx + esi;
    ebp = eax + ecx + 0x38;
    eax = ZX16(MEM16(ebx + 0x60));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    if (CMP_L(eax, edx)) goto loc_0036EC73; /* jl: less (signed <) */

loc_0036EC6E: ;
    eax = 0x14;

loc_0036EC73: ;
    xmm2 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    MEM32(ebp + 0x88) = eax;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036ECE1; /* je: equal / zero */

loc_0036EC91: ;
    xmm0 = MEMF(ebp + 0x7EC); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036ECE1; /* jp: parity */

loc_0036ECA2: ;
    xmm0 = MEMF(ebp + 0x7F0); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036ECE1; /* jp: parity */

loc_0036ECB3: ;
    xmm0 = MEMF(ebp + 0x7F4); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036ECE1; /* jp: parity */

loc_0036ECC4: ;
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    MEM32(ebp + 0x7EC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + 0x7F0) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebp + 0x7F4) = eax;

loc_0036ECE1: ;
    eax = MEM32(ebx + 0x568);
    (void)0; /* cmp MEM32(eax + 0xBC), 1 - flags set for next jcc */
    xmm6 = MEMF(0x7FA21C); /* movss */
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_0036ED17; /* jne: not equal / not zero */

loc_0036ECF8: ;
    MEM8(eax + 0xD4) = 0;
    xmm0 = MEMF(ebp + 0x18); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 + MEMF(ebp + 0x18); /* addss */
    MEMF(ebp + 0x18) = xmm0; /* movss */

loc_0036ED17: ;
    SET_LO8(ecx, MEM8(edi + 0x776548));
    xmm5 = MEMF(0x648EA4); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    MEM8(ebp + 0xA) = LO8(ecx);
    MEM8(edi + 0x776548) = MEM8(edi + 0x776548) & 0x7F;
    edx = MEM32(ebx + 0x568);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x2D8);
    if (CMP_EQ(eax, MEM32(ebp + 0x7FC))) goto loc_0036EDAB; /* je: equal / zero */

loc_0036ED4C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0036C740(); /* call 0x0036C740 */

loc_0036ED53: ;
    xmm1 = MEMF(ebp + 0x7F8); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_0036ED6A; /* jb: below (unsigned <) */

loc_0036ED60: ;
    xmm1 = MEMF(0x648D14); /* movss */
    goto loc_0036ED84;

loc_0036ED6A: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 < xmm5)) goto loc_0036ED74; /* jb: below (unsigned <) */

loc_0036ED6F: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0036ED84;

loc_0036ED74: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */

loc_0036ED84: ;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x7F8); /* addss */
    MEMF(ebp + 0x7F8) = xmm1; /* movss */
    ecx = MEM32(ebx + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x2D8);
    MEM32(ebp + 0x7FC) = edx;

loc_0036EDAB: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x52F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0036EE0B; /* je: equal / zero */

loc_0036EDBB: ;
    xmm0 = MEMF(ebp + 0x7F8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * MEMF(0x6490F4); /* mulss */
    if ((xmm2 < xmm0)) goto loc_0036EDDD; /* jb: below (unsigned <) */

loc_0036EDD3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_0036EDF7;

loc_0036EDDD: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 < xmm5)) goto loc_0036EDE7; /* jb: below (unsigned <) */

loc_0036EDE2: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0036EDF7;

loc_0036EDE7: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_0036EDF7: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x7F8); /* addss */
    MEMF(ebp + 0x7F8) = xmm0; /* movss */

loc_0036EE0B: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036EE1A; /* je: equal / zero */

loc_0036EE12: ;
    MEMF(ebp + 0x7F8) = xmm2; /* movss */

loc_0036EE1A: ;
    xmm0 = MEMF(ebp + 0x7F8); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0036EE50; /* jnp: not parity */

loc_0036EE2B: ;
    xmm1 = MEMF(0x74BA14); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x7F8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0036EE50; /* jbe: below or equal (unsigned <=) */

loc_0036EE48: ;
    MEMF(ebp + 0x7F8) = xmm2; /* movss */

loc_0036EE50: ;
    ecx = MEM32(ebx + 0x568);
    xmm0 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 < MEMF(ecx))) goto loc_0036EE90; /* jb: below (unsigned <) */

loc_0036EE63: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0036EE90; /* jne: not equal / not zero */

loc_0036EE6D: ;
    xmm0 = MEMF(0x648F08); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x60));
    ecx = ebx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0); sub_0035B9A0(); /* call 0x0035B9A0 */

loc_0036EE8D: ;
    esp = esp + 0xC;

loc_0036EE90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00335490(); /* call 0x00335490 */

loc_0036EE97: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0036EEB8; /* je: equal / zero */

loc_0036EEAA: ;
    (void)0; /* cmp MEM32(eax + 8), 6 - flags set for next jcc */
    xmm0 = MEMF(0x648E74); /* movss */
    if (CMP_EQ(MEM32(eax + 8), 6)) goto loc_0036EEC0; /* je: equal / zero */

loc_0036EEB8: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_0036EEC0: ;
    MEMF(ebp + 0x190) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax--;
    if ((eax == 0)) goto loc_0036EEE4; /* je: equal / zero */

loc_0036EED7: ;
    eax--;
    if ((eax != 0)) goto loc_0036EEFC; /* jne: not equal / not zero */

loc_0036EEDA: ;
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    goto loc_0036EEF4;

loc_0036EEE4: ;
    xmm0 = MEMF(ebp + 0x190); /* movss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */

loc_0036EEF4: ;
    MEMF(ebp + 0x190) = xmm0; /* movss */

loc_0036EEFC: ;
    SET_LO8(eax, MEM8(ebx + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036EF31; /* je: equal / zero */

loc_0036EF06: ;
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    if (CMP_NE(MEM32(edx + esi + -1644), 0x34)) goto loc_0036EF31; /* jne: not equal / not zero */

loc_0036EF19: ;
    xmm0 = MEMF(ebp + 0x190); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(ebp + 0x190) = xmm0; /* movss */

loc_0036EF31: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036EF53; /* je: equal / zero */

loc_0036EF3B: ;
    xmm0 = MEMF(ebp + 0x190); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(ebp + 0x190) = xmm0; /* movss */

loc_0036EF53: ;
    if (TEST_Z(MEM32(ebp + 0x98), 0x400000)) goto loc_0036EF77; /* je: equal / zero */

loc_0036EF5F: ;
    xmm0 = MEMF(ebp + 0x190); /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEMF(ebp + 0x190) = xmm0; /* movss */

loc_0036EF77: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0036EFAC; /* je: equal / zero */

loc_0036EF87: ;
    ecx = MEM32(eax + 0x280);
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036EFAC; /* je: equal / zero */

loc_0036EF94: ;
    xmm0 = MEMF(ebp + 0x190); /* movss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    MEMF(ebp + 0x190) = xmm0; /* movss */

loc_0036EFAC: ;
    edx = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    xmm5 = 0.0f; /* xorps self = zero */
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm2 = MEMF(eax + 0x74D8BC); /* movss */
    xmm3 = MEMF(eax + 0x74D8C4); /* movss */
    xmm1 = MEMF(eax + 0x74D8C0); /* movss */
    eax = ZX16(MEM16(ebp + 0x118));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) { sub_0036EFEB(); return; } /* jb: below (unsigned <) */

loc_0036EFE6: ;
    xmm0 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_0036F005(); return; /* tail jmp 0x0036F005 */

}

/**
 * sub_0036F700
 * Original: 0x0036F700 - 0x0036F75F (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0036F700: ;
    xmm0 = MEMF(eax); /* movss */
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EA6000);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x1C;
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_0036F72D: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0036F75B; /* je: equal / zero */

loc_0036F736: ;
    SET_LO8(eax, MEM8(0x84B312));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0036F75B; /* je: equal / zero */

loc_0036F73F: ;
    eax = MEM32(esp + 0x14);
    ecx = (int32_t)MEMF(esp); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 4); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0036F758: ;
    esp = esp + 0xC;

loc_0036F75B: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F760
 * Original: 0x0036F760 - 0x0036F7E8 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F760: ;
    eax = MEM32(edi + 0x7A8);
    ecx = MEM32(eax);
    xmm5 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0036F7B6; /* je: equal / zero */

loc_0036F77F: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */

loc_0036F784: ;
    if (CMP_NE(MEM32(esi + eax), ebp)) goto loc_0036F78E; /* jne: not equal / not zero */

loc_0036F789: ;
    xmm0 = xmm6; /* movaps */
    goto loc_0036F793;

loc_0036F78E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0036F793: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_0036F7A4; /* jbe: below or equal (unsigned <=) */

loc_0036F798: ;
    eax = MEM32(edi + 0x7A8);
    ebx = MEM32(esi + eax);
    xmm5 = xmm0; /* movaps */

loc_0036F7A4: ;
    eax = MEM32(edi + 0x7A8);
    ecx = MEM32(esi + eax + 4);
    esi = esi + 4;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0036F784; /* jne: not equal / not zero */

loc_0036F7B6: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0036F7DF; /* jle: less or equal (signed <=) */

loc_0036F7C3: ;
    ecx = MEM32(0x84B0E0);
    ecx = ecx + 0x10;
    /* nop */

loc_0036F7D0: ;
    esi = ZX16(MEM16(ecx));
    if (CMP_EQ(esi, ebx)) goto loc_0036F7E4; /* je: equal / zero */

loc_0036F7D7: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, edx)) goto loc_0036F7D0; /* jl: less (signed <) */

loc_0036F7DF: ;
    eax = 0xFFFF;

loc_0036F7E4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F7F0
 * Original: 0x0036F7F0 - 0x0036F8A8 (184 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F7F0: ;
    ecx = MEM32(0x84B330);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = ZX16(MEM16(edi + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* cmp MEM16(esp + 0x24), LO16(ebx) - flags set for next jcc */
    esi = eax + ecx + 0x38;
    if (CMP_NE(MEM16(esp + 0x24), LO16(ebx))) goto loc_0036F82B; /* jne: not equal / not zero */

loc_0036F81B: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0036F824: ;
    esp = esp + 0xC;
    MEM32(esp + 0x24) = eax;

loc_0036F82B: ;
    edx = MEM32(esi + 0x98);
    ecx = MEM32(esp + 0x2C);
    edx = edx & 0xFDFFCFFFu;
    edx = edx | ecx;
    MEM32(esi + 0x98) = edx;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(ecx + 0x4AC); /* movss */
    ecx = ecx + 0x4AC;
    /* ucomiss xmm0, MEMF(ebp) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036F87F; /* jp: parity */

loc_0036F861: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0036F87F; /* jp: parity */

loc_0036F870: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0036F886; /* jnp: not parity */

loc_0036F87F: ;
    MEM8(esi + 0xEC) = 0;

loc_0036F886: ;
    if (CMP_NE(MEM8(esp + 0x28), 3)) { sub_0036F8A8(); return; } /* jne: not equal / not zero */

loc_0036F88D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x42C80000);
    eax = ebp;
    PUSH32(esp, 0); sub_0036FB50(); /* call 0x0036FB50 */

loc_0036F89B: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0036FAB0
 * Original: 0x0036FAB0 - 0x0036FB08 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FAB0: ;
    edx = ZX16(MEM16(eax + 0x60));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(0x84B330);
    MEM16(edx + esi + 0x1A6) = LO16(ecx);
    ecx = SX16(LO16(ecx));
    if (TEST_S(ecx, ecx)) { sub_0036FB08(); return; } /* jl: less (signed <) */

loc_0036FAD3: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    if (CMP_GE(ecx, edx)) { sub_0036FB08(); return; } /* jge: greater or equal (signed >=) */

loc_0036FADE: ;
    esi = MEM32(0x84B0E0);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    xmm0 = MEMF(edx + esi); /* movss */
    edx = edx + esi;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    g_seh_ebp = ebp; sub_0036FB17(); return; /* tail jmp 0x0036FB17 */

}

/**
 * sub_0036FB50
 * Original: 0x0036FB50 - 0x0036FBB2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FB50: ;
    esp = esp - 0x18;
    ecx = edi + 0x78;
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 4) = ecx;
    ecx = ZX16(MEM16(edi + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x84B330);
    PUSH32(esp, esi);
    esi = ecx + edx + 0x38;
    SET_LO8(ecx, MEM8(esp + 0x24));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0036FBB2(); return; } /* je: equal / zero */

loc_0036FB9C: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_0036FBFC(); return; /* tail jmp 0x0036FBFC */

}

/**
 * sub_0036FC80
 * Original: 0x0036FC80 - 0x0036FCD1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FC80: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x6BCFEB));
    edx = SX8(LO8(ebx));
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0036FCAB; /* jle: less or equal (signed <=) */

loc_0036FC92: ;
    PUSH32(esp, esi);

loc_0036FC93: ;
    if (CMP_EQ(MEM8(ecx + 0x800488), 5)) goto loc_0036FCA5; /* je: equal / zero */

loc_0036FC9C: ;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = eax | esi;

loc_0036FCA5: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0036FC93; /* jl: less (signed <) */

loc_0036FCAA: ;
    POP32(esp, esi);

loc_0036FCAB: ;
    ecx = MEM32(0x7FCB54);
    edx = MEM32(0x84B330);
    ecx = ~ecx;
    ecx = ecx & eax;
    MEM32(edx + 4) = ecx;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0036FCD1(); return; } /* je: equal / zero */

loc_0036FCC7: ;
    eax = MEM32(0x84B330);
    MEM8(eax + 0xC) = LO8(ebx);
    g_seh_ebp = ebp; sub_0036FCE0(); return; /* tail jmp 0x0036FCE0 */

}

/**
 * sub_0036FD40
 * Original: 0x0036FD40 - 0x0036FD5C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FD40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0036FD40: ;
    eax = MEM32(eax + 0x7AC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(eax, eax)) { sub_0036FD5C(); return; } /* je: equal / zero */

loc_0036FD4D: ;
    if (CMP_NE(MEM32(eax + 4), 0xA)) { sub_0036FD5C(); return; } /* jne: not equal / not zero */

loc_0036FD53: ;
    if (CMP_NE(MEM32(eax + 0xC), edi)) { sub_0036FD5C(); return; } /* jne: not equal / not zero */

loc_0036FD58: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FE60
 * Original: 0x0036FE60 - 0x0036FE79 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FE60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0036FE60: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    /* comiss xmm0, MEMF(eax + 0xC) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = edx;
    if ((xmm0 <= MEMF(eax + 0xC))) { sub_0036FE79(); return; } /* jbe: below or equal (unsigned <=) */

loc_0036FE74: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FF40
 * Original: 0x0036FF40 - 0x0036FF92 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0036FF40: ;
    edx = MEM32(0x84B330);
    eax = ZX16(MEM16(ecx + 0x60));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    if (CMP_GE(eax, edi)) goto loc_0036FF76; /* jge: greater or equal (signed >=) */

loc_0036FF53: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    xmm0 = MEMF(eax + edx + 0x830); /* movss */
    ebx = ZX8(LO8(ebx));
    edi = ebx + edi * 2;
    /* comiss xmm0, MEMF(edi * 4 + 0x59FCD4) - sets EFLAGS */
    if ((xmm0 > MEMF(edi * 4 + 0x59FCD4))) goto loc_0036FF8E; /* ja: above (unsigned >) */

loc_0036FF76: ;
    eax = MEM32(esi + 0x7AC);
    if (TEST_Z(eax, eax)) { sub_0036FF92(); return; } /* je: equal / zero */

loc_0036FF80: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00337620(); /* call 0x00337620 */

loc_0036FF8A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0036FF92(); return; } /* je: equal / zero */

loc_0036FF8E: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FFA0
 * Original: 0x0036FFA0 - 0x00370084 (228 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FFA0: ;
    esp = esp - 0x50;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(0x84B330);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    PUSH32(esp, ebx);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebp);
    ebp = edx + ecx + 0x38;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    ecx = edx + ecx + 0x8E00;
    edx = MEM32(0x84A5F8);
    eax = eax + edx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    (void)0; /* cmp MEM32(esi + 8), 4 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (CMP_NE(MEM32(esi + 8), 4)) goto loc_00370005; /* jne: not equal / not zero */

loc_0036FFFD: ;
    xmm0 = MEMF(0x648CE0); /* movss */

loc_00370005: ;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037005D; /* je: equal / zero */

loc_0037000F: ;
    esi = MEM32(0x84A600);
    eax = ZX8(LO8(eax));
    eax = ZX16(MEM16(esi + eax * 2 + -2));
    eax = eax + 0xFFFFFF21u;
    if (CMP_A(eax, 0x4D)) goto loc_0037005D; /* ja: above (unsigned >) */

loc_00370027: ;
    eax = ZX8(MEM8(eax + 0x370B74));
    { uint32_t _jt = MEM32(eax * 4 + 0x370B68); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00370035u) goto loc_00370035;
    if (_jt == 0x00370047u) goto loc_00370047;
    if (_jt == 0x0037005Du) goto loc_0037005D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00370035: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    goto loc_00370057;

loc_00370047: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */

loc_00370057: ;
    MEMF(esp + 0x30) = xmm1; /* movss */

loc_0037005D: ;
    xmm3 = MEMF(ecx + 0x3C); /* movss */
    eax = 0; /* xor self */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = eax;
    g_seh_ebp = ebp; sub_00370090(); return; /* tail jmp 0x00370090 */

}

/**
 * sub_00370BD0
 * Original: 0x00370BD0 - 0x00370C2D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00370BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_00370C2D(); return; } /* je: equal / zero */

loc_00370BD9: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    if (CMP_AE(LO16(edx), 0x10)) { sub_00370C2D(); return; } /* jae: above or equal (unsigned >=) */

loc_00370BE3: ;
    edi = MEM32(0x84B330);
    edx = ZX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    edx = edx + edi + 0x38;
    edx = MEM32(edx + 0x7AC);
    if (TEST_Z(edx, edx)) { sub_00370C2D(); return; } /* je: equal / zero */

loc_00370C00: ;
    edi = ZX16(MEM16(eax + 0x60));
    if (CMP_NE(MEM32(edx + 0xC), edi)) { sub_00370C2D(); return; } /* jne: not equal / not zero */

loc_00370C09: ;
    SET_LO8(ebx, MEM8(edx + 0x448));
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00370C2D(); return; } /* je: equal / zero */

loc_00370C13: ;
    edx = edx + 0x44C;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00370D80
 * Original: 0x00370D80 - 0x003710AC (812 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370D80(void)
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

loc_00370D80: ;
    esp = esp - 0x88;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    esi = ebp;
    eax = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebx = 0; /* xor self */
    eax = eax + ecx;
    esi = esi + ecx;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    ecx = 3;
    edx = 1;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x3C) = 0x5D4C44;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = 0x35;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = eax;
    if (CMP_EQ(esi, ebx)) goto loc_003710A2; /* je: equal / zero */

loc_00370E05: ;
    if (CMP_EQ(eax, ebx)) goto loc_003710A2; /* je: equal / zero */

loc_00370E0D: ;
    if (CMP_EQ(MEM32(esi + 0x568), ebx)) goto loc_003710A2; /* je: equal / zero */

loc_00370E19: ;
    ecx = esi + 0x78;
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x568);
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(MEM32(ecx + 0xBC), ebx)) goto loc_00370E81; /* je: equal / zero */

loc_00370E3E: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1F0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = ZX8(MEM8(ecx + 0x97));
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_EQ(ecx, 9)) goto loc_00370E77; /* je: equal / zero */

loc_00370E6E: ;
    if (CMP_NE(ecx, 0x51)) goto loc_00370EF9; /* jne: not equal / not zero */

loc_00370E77: ;
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    goto loc_00370EF3;

loc_00370E81: ;
    if (CMP_NE(MEM32(esi + 0x64), 0x1F)) goto loc_00370E96; /* jne: not equal / not zero */

loc_00370E87: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    goto loc_00370EF3;

loc_00370E96: ;
    ecx = MEM32(eax + 0x568);
    if (CMP_EQ(ecx, ebx)) goto loc_00370EE6; /* je: equal / zero */

loc_00370EA0: ;
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_00370EE6; /* jne: not equal / not zero */

loc_00370EA9: ;
    if (CMP_EQ(MEM32(esi + 0x3C8), ebx)) goto loc_00370EE6; /* je: equal / zero */

loc_00370EB1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x38C);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x38E);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x390);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_00370EF9;

loc_00370EE6: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */

loc_00370EF3: ;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_00370EF9: ;
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    edx = esi;
    PUSH32(esp, 0); sub_00370BD0(); /* call 0x00370BD0 */

loc_00370F06: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 4;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0037101F; /* jbe: below or equal (unsigned <=) */

loc_00370F5F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    PUSH32(esp, 0x200000);
    ecx = 0x181B;
    eax = 0x63D7B0;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_00370FAB: ;
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_00370FE1: ;
    esp = esp + 0x34;
    if (TEST_Z(eax, eax)) goto loc_00370FF5; /* je: equal / zero */

loc_00370FE8: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x18))) goto loc_00370FF9; /* jbe: below or equal (unsigned <=) */

loc_00370FF5: ;
    MEM32(esp + 0x28) = esi;

loc_00370FF9: ;
    (void)0; /* cmp MEM32(esp + 0x28), ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_EQ(MEM32(esp + 0x28), ebx)) goto loc_003710A2; /* je: equal / zero */

loc_0037101F: ;
    edx = 0; /* xor self */
    if (CMP_L(edi, 0x40)) goto loc_00371037; /* jl: less (signed <) */

loc_00371026: ;
    eax = MEM32(0x84B330);
    esi = eax + ebp * 8 + 0x8D78;
    ecx = edi + -64;
    goto loc_00371046;

loc_00371037: ;
    ecx = MEM32(0x84B330);
    esi = ecx + ebp * 8 + 0x8CF8;
    ecx = edi;

loc_00371046: ;
    eax = 1;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371050: ;
    ecx = MEM32(esi);
    ecx = ecx | eax;
    eax = MEM32(esi + 4);
    eax = eax | edx;
    (void)0; /* cmp edi, 0x10 - flags set for next jcc */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;
    if (CMP_GE(edi, 0x10)) goto loc_003710A2; /* jge: greater or equal (signed >=) */

loc_00371063: ;
    if (CMP_L(ebp, 0x40)) goto loc_0037107A; /* jl: less (signed <) */

loc_00371068: ;
    edx = MEM32(0x84B330);
    esi = edx + edi * 8 + 0x8D78;
    ecx = ebp + -64;
    goto loc_00371088;

loc_0037107A: ;
    eax = MEM32(0x84B330);
    esi = eax + edi * 8 + 0x8CF8;
    ecx = ebp;

loc_00371088: ;
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371094: ;
    ecx = MEM32(esi);
    ecx = ecx | eax;
    eax = MEM32(esi + 4);
    eax = eax | edx;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;

loc_003710A2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003710B0
 * Original: 0x003710B0 - 0x00371158 (168 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003710B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84B330);
    eax = MEM32(esi + 0xBCE8);
    if (TEST_Z(eax, eax)) goto loc_003710E1; /* je: equal / zero */

loc_003710C2: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8F72);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003710E1; /* jle: less or equal (signed <=) */

loc_003710CF: ;
    /* nop */

loc_003710D0: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + eax + 0x8F74);
    if (CMP_EQ(ebx, ecx)) goto loc_00371150; /* je: equal / zero */

loc_003710DC: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_003710D0; /* jl: less (signed <) */

loc_003710E1: ;
    eax = MEM32(esi + 0xEA80);
    if (TEST_Z(eax, eax)) goto loc_00371111; /* je: equal / zero */

loc_003710EB: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xBD0A);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00371111; /* jle: less or equal (signed <=) */

loc_003710F8: ;
    goto loc_00371100;

    /* nop */

loc_00371100: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + eax + 0xBD0C);
    if (CMP_EQ(ebx, ecx)) goto loc_00371150; /* je: equal / zero */

loc_0037110C: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_00371100; /* jl: less (signed <) */

loc_00371111: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, 0x40 - flags set for next jcc */
    eax = 1;
    if (CMP_GE(ecx, 0x40)) goto loc_00371132; /* jge: greater or equal (signed >=) */

loc_0037111D: ;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371122: ;
    ecx = MEM32(esi + edi * 8 + 0x8CF8);
    ebx = MEM32(esi + edi * 8 + 0x8CFC);
    goto loc_00371148;

loc_00371132: ;
    ecx = ecx + 0xFFFFFFC0u;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_0037113A: ;
    ecx = MEM32(esi + edi * 8 + 0x8D78);
    ebx = MEM32(esi + edi * 8 + 0x8D7C);

loc_00371148: ;
    eax = eax & ecx;
    edx = edx & ebx;
    eax = eax | edx;
    if ((eax == 0)) { sub_00371158(); return; } /* je: equal / zero */

loc_00371150: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00371160
 * Original: 0x00371160 - 0x00371503 (931 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371160: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xC));
    SET_LO8(edx, MEM8(eax + 0xD));
    esp = esp - 0x10;
    (void)0; /* cmp LO8(ecx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_003714FE; /* je: equal / zero */

loc_0037117B: ;
    edx = SX8(LO8(edx));
    ecx = SX8(LO8(ecx));
    edx--;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0037118E; /* jl: less (signed <) */

loc_0037118A: ;
    MEM32(esp + 8) = edx;

loc_0037118E: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(ebp & ebp, 0)) goto loc_003712CD; /* jle: less or equal (signed <=) */

loc_00371199: ;
    /* nop */

loc_003711A0: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1A);
    edx = MEM32(0x84A5F8);
    ebx = (uint32_t)(int32_t)SMEM8(eax + esi + 0x1B);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = MEM32(ecx + edx + 0x238);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = ebx;
    edi = 0; /* xor self */
    /* nop */

loc_003711D0: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    ebx++;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    if (CMP_GE(ebx, ecx)) ebx = MEM32(esp + 0x14); /* cmovge */
    ecx = MEM32(0x84A5F8);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = MEM32(edx + ecx + 0x238);
    ecx = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(edx), ecx)) goto loc_00371298; /* je: equal / zero */

loc_003711FD: ;
    edx = 0; /* xor self */
    if (CMP_L(ebx, 0x40)) goto loc_00371210; /* jl: less (signed <) */

loc_00371204: ;
    edi = eax + esi * 8 + 0x8D78;
    ecx = ebx + -64;
    goto loc_00371219;

loc_00371210: ;
    edi = eax + esi * 8 + 0x8CF8;
    ecx = ebx;

loc_00371219: ;
    eax = 1;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371223: ;
    ecx = MEM32(edi);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(edi + 4);
    edx = ~edx;
    eax = eax & edx;
    (void)0; /* cmp esi, 0x40 - flags set for next jcc */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = eax;
    if (CMP_L(esi, 0x40)) goto loc_0037124C; /* jl: less (signed <) */

loc_0037123A: ;
    edx = MEM32(0x84B330);
    edi = edx + ebx * 8 + 0x8D78;
    ecx = esi + -64;
    goto loc_0037125A;

loc_0037124C: ;
    eax = MEM32(0x84B330);
    edi = eax + ebx * 8 + 0x8CF8;
    ecx = esi;

loc_0037125A: ;
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371266: ;
    ecx = MEM32(edi);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(edi + 4);
    edx = ~edx;
    eax = eax & edx;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = eax;
    PUSH32(esp, esi);
    edi = ebx;
    PUSH32(esp, 0); sub_00370D80(); /* call 0x00370D80 */

loc_00371280: ;
    ecx = MEM32(0x84B330);
    esp = esp + 4;
    MEM8(ecx + esi + 0x1B) = LO8(ebx);
    eax = MEM32(0x84B330);
    ebp--;
    edi = 1;

loc_00371298: ;
    if (CMP_NE(MEM32(esp + 0x18), ebx)) goto loc_003712A4; /* jne: not equal / not zero */

loc_0037129E: ;
    ebp--;
    edi = 1;

loc_003712A4: ;
    MEM8(eax + 0x1A) = MEM8(eax + 0x1A) + 1;
    eax = MEM32(0x84B330);
    SET_LO8(edx, MEM8(eax + 0x1A));
    if (CMP_L(LO8(edx), MEM8(eax + 0xC))) goto loc_003712BD; /* jl: less (signed <) */

loc_003712B4: ;
    MEM8(eax + 0x1A) = 0;
    eax = MEM32(0x84B330);

loc_003712BD: ;
    if (TEST_Z(edi, edi)) goto loc_003711D0; /* je: equal / zero */

loc_003712C5: ;
    if (CMP_G(ebp & ebp, 0)) goto loc_003711A0; /* jg: greater (signed >) */

loc_003712CD: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1D);
    edx = MEM32(esp + 0x28);
    (void)0; /* test edx, edx - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x1E);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_003714F0; /* jle: less or equal (signed <=) */

loc_003712E5: ;
    goto loc_003712F0;

    /* nop */
    edi = edi;

loc_003712F0: ;
    esi = MEM32(0x84A5F8);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = MEM32(edx + esi + 0x238);
    edx = MEM32(edx);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = 0;

loc_00371313: ;
    ebx++;
    if (CMP_L(ebx, 0x80)) goto loc_0037135E; /* jl: less (signed <) */

loc_0037131C: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0037133C; /* jl: less (signed <) */

loc_0037132C: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    ecx = MEM32(esp + 0x10);

loc_0037133C: ;
    esi = MEM32(0x84A5F8);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = MEM32(edx + esi + 0x238);
    if (TEST_Z(edx, edx)) goto loc_0037135B; /* je: equal / zero */

loc_00371355: ;
    edx = MEM32(edx);
    MEM32(esp + 0x1C) = edx;

loc_0037135B: ;
    ebx = ecx + 1;

loc_0037135E: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    ebp = edx + eax + 0x38;
    edi = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_L(ebx, 0x40)) goto loc_0037137F; /* jl: less (signed <) */

loc_00371373: ;
    esi = eax + ecx * 8 + 0x8D78;
    ecx = ebx + -64;
    goto loc_00371388;

loc_0037137F: ;
    esi = eax + ecx * 8 + 0x8CF8;
    ecx = ebx;

loc_00371388: ;
    eax = 1;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_00371392: ;
    ecx = MEM32(esi);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(esi + 4);
    edx = ~edx;
    eax = eax & edx;
    (void)0; /* cmp ebx, 0x10 - flags set for next jcc */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;
    if (CMP_GE(ebx, 0x10)) goto loc_003713EE; /* jge: greater or equal (signed >=) */

loc_003713A9: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_L(ecx, 0x40)) goto loc_003713C3; /* jl: less (signed <) */

loc_003713B2: ;
    eax = MEM32(0x84B330);
    esi = eax + ebx * 8 + 0x8D78;
    ecx = ecx + 0xFFFFFFC0u;
    goto loc_003713D0;

loc_003713C3: ;
    edx = MEM32(0x84B330);
    esi = edx + ebx * 8 + 0x8CF8;

loc_003713D0: ;
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_003713DC: ;
    ecx = MEM32(esi);
    eax = ~eax;
    ecx = ecx & eax;
    eax = MEM32(esi + 4);
    edx = ~edx;
    eax = eax & edx;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;

loc_003713EE: ;
    esi = MEM32(0x84A5F8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + esi + 0x238);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_00371499; /* je: equal / zero */

loc_0037140D: ;
    edx = MEM32(esp + 0x1C);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00371499; /* je: equal / zero */

loc_00371419: ;
    ecx = MEM32(eax + 0x64);
    if (CMP_NE(ecx, 1)) goto loc_00371436; /* jne: not equal / not zero */

loc_00371421: ;
    edx = MEM32(0x7FCB54);
    edi = ecx;
    ecx = ebx;
    edi = edi << LO8(ecx);
    edi = edi & edx;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi++;
    goto loc_00371499;

loc_00371436: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_0037146B; /* jne: not equal / not zero */

loc_0037143B: ;
    edx = MEM32(eax + 0x68);
    if (CMP_EQ(edx, 0x132)) goto loc_0037144E; /* je: equal / zero */

loc_00371446: ;
    if (CMP_NE(edx, 0xC6)) goto loc_0037146B; /* jne: not equal / not zero */

loc_0037144E: ;
    eax = MEM32(eax + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_0037145C; /* jne: not equal / not zero */

loc_00371458: ;
    edi = 0; /* xor self */
    goto loc_00371499;

loc_0037145C: ;
    edx = MEM32(eax + 0x30);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, 3 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, 3)) ? 1 : 0); /* sete */
    edi = ecx;
    goto loc_00371499;

loc_0037146B: ;
    if (CMP_EQ(ecx, 0x36)) goto loc_00371494; /* je: equal / zero */

loc_00371470: ;
    if (CMP_EQ(ecx, 0x37)) goto loc_00371494; /* je: equal / zero */

loc_00371475: ;
    eax = MEM32(ebp + 0x7AC);
    if (TEST_Z(eax, eax)) goto loc_0037148A; /* je: equal / zero */

loc_0037147F: ;
    if (CMP_NE(MEM32(eax + 4), 0xA)) goto loc_0037148A; /* jne: not equal / not zero */

loc_00371485: ;
    if (CMP_EQ(MEM32(eax + 0xC), ebx)) goto loc_00371494; /* je: equal / zero */

loc_0037148A: ;
    if (CMP_EQ(ecx, 0x35)) goto loc_00371494; /* je: equal / zero */

loc_0037148F: ;
    if (CMP_NE(ecx, 0x3D)) goto loc_00371499; /* jne: not equal / not zero */

loc_00371494: ;
    edi = 1;

loc_00371499: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_G(MEM32(esp + 0x18), eax)) goto loc_003714B8; /* jg: greater (signed >) */

loc_003714A6: ;
    if (TEST_NZ(edi, edi)) goto loc_003714C2; /* jne: not equal / not zero */

loc_003714AA: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(esp + 0x10);
    goto loc_00371313;

loc_003714B8: ;
    MEM32(esp + 0x28) = 0;
    goto loc_003714D6;

loc_003714C2: ;
    if (CMP_NE(edi, 1)) goto loc_003714D6; /* jne: not equal / not zero */

loc_003714C7: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edi = ebx;
    PUSH32(esp, 0); sub_00370D80(); /* call 0x00370D80 */

loc_003714D3: ;
    esp = esp + 4;

loc_003714D6: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x10);
    eax--;
    MEM32(esp + 0x28) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84B330);
    if (CMP_G(eax & eax, 0)) goto loc_003712F0; /* jg: greater (signed >) */

loc_003714F0: ;
    MEM8(eax + 0x1D) = LO8(ecx);
    eax = MEM32(0x84B330);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x1E) = LO8(ebx);
    POP32(esp, ebx);

loc_003714FE: ;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00371510
 * Original: 0x00371510 - 0x00371549 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371510: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_00371549(); return; } /* jp: parity */

loc_0037153C: ;
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00371549(); return; } /* jp: parity */

loc_00371545: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00371577(); return; /* tail jmp 0x00371577 */

}

/**
 * sub_00371630
 * Original: 0x00371630 - 0x00371753 (291 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371630: ;
    esp = esp - 0x10;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1977);
    PUSH32(esp, 0x63D7B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0037164D: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1978);
    esi = eax;
    PUSH32(esp, 0x63D7B0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0037166C: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    esp = esp + 0x20;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ecx & ecx, 0)) { sub_00371753(); return; } /* jle: less or equal (signed <=) */

loc_00371682: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    esi = esi - eax;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = ecx;

loc_00371693: ;
    edx = MEM32(0x84B0E0);
    PUSH32(esp, 0x33);
    eax = edx + ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_003716A6: ;
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(esi + edi) = LO8(eax);
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_003716B7; /* jne: not equal / not zero */

loc_003716B0: ;
    MEM8(esi + edi) = 0;
    MEM8(edi) = 0;

loc_003716B7: ;
    ecx = MEM32(0x84B264);
    ebx = 0; /* xor self */
    MEM8(edi) = 0;
    if (CMP_LE(MEM16(ecx + 4), LO16(ebx))) goto loc_00371719; /* jle: less or equal (signed <=) */

loc_003716C8: ;
    goto loc_003716D0;

    /* nop */

loc_003716D0: ;
    edx = MEM32(0x84B264);
    eax = MEM32(edx);
    ecx = MEM32(0x84B0E0);
    esi = MEM32(eax + ebx * 4);
    edx = ecx + ebp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_003716EC: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00371706; /* je: equal / zero */

loc_003716F3: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_00371706; /* jne: not equal / not zero */

loc_003716F8: ;
    eax = MEM32(0x84B264);
    ecx = MEM32(eax);
    edx = MEM32(ecx + ebx * 4);
    SET_LO8(eax, MEM8(edx));
    MEM8(edi) = LO8(eax);

loc_00371706: ;
    ecx = MEM32(0x84B264);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_003716D0; /* jl: less (signed <) */

loc_00371715: ;
    esi = MEM32(esp + 0x14);

loc_00371719: ;
    eax = MEM32(esp + 0x10);
    ebp = ebp + 0x38;
    edi++;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00371693; /* jne: not equal / not zero */

loc_0037172C: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax + 0x8DF8) = ecx;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x84B330);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx + 0x8DFC) = eax;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00371770
 * Original: 0x00371770 - 0x003719E5 (629 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00371770: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E14); /* movss */
    ecx = 0; /* xor self */
    /* nop */

loc_00371780: ;
    xmm1 = MEMF(0x74D820); /* movss */
    eax = MEM32(0x84B330);
    xmm3 = MEMF(0x74D864); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + eax + 0x8E00) = xmm3; /* movss */
    xmm1 = MEMF(0x74D824); /* movss */
    xmm3 = MEMF(0x74D868); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + eax + 0x8E04) = xmm3; /* movss */
    xmm1 = MEMF(0x74D828); /* movss */
    xmm3 = MEMF(0x74D86C); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + eax + 0x8E08) = xmm3; /* movss */
    xmm1 = MEMF(0x74D82C); /* movss */
    xmm3 = MEMF(0x74D870); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + eax + 0x8E0C) = xmm3; /* movss */
    xmm1 = MEMF(0x74D830); /* movss */
    xmm3 = MEMF(0x74D874); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + eax + 0x8E10) = xmm3; /* movss */
    xmm1 = MEMF(0x74D834); /* movss */
    xmm3 = MEMF(0x74D878); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    eax = ecx + eax + 0x8E00;
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x14) = xmm3; /* movss */
    xmm1 = MEMF(0x74D838); /* movss */
    xmm3 = MEMF(0x74D87C); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x18) = xmm3; /* movss */
    xmm1 = MEMF(0x74D83C); /* movss */
    xmm3 = MEMF(0x74D880); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x1C) = xmm3; /* movss */
    xmm1 = MEMF(0x74D840); /* movss */
    xmm3 = MEMF(0x74D884); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x20) = xmm3; /* movss */
    xmm1 = MEMF(0x74D844); /* movss */
    xmm3 = MEMF(0x74D888); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x24) = xmm3; /* movss */
    xmm1 = MEMF(0x74D84C); /* movss */
    xmm3 = MEMF(0x74D890); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x2C) = xmm3; /* movss */
    xmm1 = MEMF(0x74D848); /* movss */
    xmm3 = MEMF(0x74D88C); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x28) = xmm3; /* movss */
    xmm1 = MEMF(0x74D850); /* movss */
    xmm3 = MEMF(0x74D894); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    xmm3 = MEMF(0x74D898); /* movss */
    xmm1 = MEMF(0x74D854); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x34) = xmm3; /* movss */
    xmm1 = MEMF(0x74D858); /* movss */
    xmm3 = MEMF(0x74D89C); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x38) = xmm3; /* movss */
    xmm1 = MEMF(0x74D85C); /* movss */
    xmm3 = MEMF(0x74D8A0); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x3C) = xmm3; /* movss */
    xmm1 = MEMF(0x74D860); /* movss */
    xmm3 = MEMF(0x74D8A4); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    ecx = ecx + 0x44;
    (void)0; /* cmp ecx, 0x154 - flags set for next jcc */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    if (CMP_L(ecx, 0x154)) goto loc_00371780; /* jl: less (signed <) */

loc_003719E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003719F0
 * Original: 0x003719F0 - 0x00371B01 (273 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003719F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003719F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = ZX16(MEM16(ebp + esi + 0x60));
    ebp = ebp + esi;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(eax, ecx)) goto loc_00371A1E; /* jl: less (signed <) */

loc_00371A19: ;
    eax = 0x14;

loc_00371A1E: ;
    edx = MEM32(esp + 0x54);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    eax = eax + 0x763260;
    esi = eax;
    eax = MEM32(0x84B330);
    ebx = edx + eax + 0x38;
    eax = ebp + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edi = 0; /* xor self */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00371A68: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00371AC3; /* jbe: below or equal (unsigned <=) */

loc_00371A76: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = MEM32(ecx + edx + -1640);
    (void)0; /* cmp eax, 0xDF - flags set for next jcc */
    edi = ecx + edx + -1744;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(eax, 0xDF)) goto loc_00371ABB; /* je: equal / zero */

loc_00371A9E: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_00371ABB; /* je: equal / zero */

loc_00371AA5: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_00371ABB; /* je: equal / zero */

loc_00371AAC: ;
    (void)0; /* cmp eax, 0xEC - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(eax, 0xEC)) goto loc_00371AC3; /* jne: not equal / not zero */

loc_00371ABB: ;
    MEM32(esp + 0x14) = 1;

loc_00371AC3: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x4CC);
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0xD0) = ecx;
    edx = MEM32(ebp + 0x468);
    eax = MEM32(ebp + 0x568);
    edx = edx & 0xFFFFD7FFu;
    MEM32(ebp + 0x468) = edx;
    if (CMP_EQ(MEM16(eax + 8), 0)) { sub_00371B01(); return; } /* je: equal / zero */

loc_00371AF7: ;
    MEMF(eax + 0xD0) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00371B16(); return; /* tail jmp 0x00371B16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00372450
 * Original: 0x00372450 - 0x003724E2 (146 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372450(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x568);
    SET_LO16(edx, MEM16(ecx + 0x498));
    MEM16(eax + 0x14A) = LO16(edx);
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, edi);
    ecx = ecx + 0x49C;
    edi = ecx;
    ebp = MEM32(edi);
    edx = eax + 0x138;
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    ebx = MEM32(ecx);
    xmm0 = MEMF(0x648E70); /* movss */
    edi = eax + 0x158;
    MEM32(edi) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esi + 0x568);
    SET_LO16(ecx, MEM16(ecx + 0x498));
    esi = MEM32(edx);
    MEM16(eax + 0x164) = LO16(ecx);
    eax = eax + 0x14C;
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003724F0
 * Original: 0x003724F0 - 0x00373065 (2933 bytes, 697 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003724F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003724F0: ;
    esp = esp - 0xA8;
    xmm3 = 0.0f; /* xorps self = zero */
    eax = edi + 0x11C;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB4);
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(ebp + 0x568);
    MEM32(esp + 0x5C) = ecx;
    SET_LO16(eax, MEM16(edx + 0x498));
    (void)0; /* cmp MEM16(edi + 0x14A), LO16(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(esp + 0x6B) = 0;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x80) = 0;
    MEM8(esp + 0x3C) = 0;
    if (CMP_EQ(MEM16(edi + 0x14A), LO16(eax))) goto loc_00372596; /* je: equal / zero */

loc_0037255D: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00372596; /* je: equal / zero */

loc_00372563: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00372450(); /* call 0x00372450 */

loc_0037256C: ;
    xmm0 = MEMF(0x648E70); /* movss */
    eax = edi + 0x14C;
    ecx = edi + 0x138;
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = ecx;
    MEMF(eax) = xmm0; /* movss */

loc_00372596: ;
    (void)0; /* cmp MEM16(edi + 0x14A), 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x18C); /* addss */
    MEMF(edi + 0x18C) = xmm0; /* movss */
    if (CMP_EQ(MEM16(edi + 0x14A), 0xFFFFFFFFu)) goto loc_0037305E; /* je: equal / zero */

loc_003725BC: ;
    if (TEST_NZ(MEM8(edi + 0x134), 8)) goto loc_0037269F; /* jne: not equal / not zero */

loc_003725C9: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO16(eax, MEM16(ecx + 0x498));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ebx = ecx + 0x49C;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_0037269F; /* jl: less (signed <) */

loc_003725E5: ;
    ecx = MEM32(0x84B264);
    if (CMP_GE(LO16(eax), MEM16(ecx + 4))) goto loc_0037269F; /* jge: greater or equal (signed >=) */

loc_003725F5: ;
    edx = SX16(LO16(eax));
    eax = MEM32(ecx);
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = edi + 0x138;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_0037260F: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0037269F; /* je: equal / zero */

loc_0037261A: ;
    edx = MEM32(ebp + 0x568);
    ecx = ebp + 0x78;
    PUSH32(esp, ecx);
    edx = edx + 0x49C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00372630: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x648EC0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EC0))) goto loc_0037266A; /* jbe: below or equal (unsigned <=) */

loc_0037263C: ;
    eax = MEM32(ebp + 0x568);
    ecx = eax + 0x49C;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x44) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = ecx;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    MEM8(esp + 0x12) = 0;
    goto loc_003726D0;

loc_0037266A: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00372450(); /* call 0x00372450 */

loc_00372673: ;
    eax = MEM32(ebp + 0x568);
    edx = eax + 0x4AC;
    ecx = MEM32(edx);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x48) = edx;
    MEM8(esp + 0x12) = 1;
    MEM8(esp + 0x13) = 1;
    goto loc_003726C9;

loc_0037269F: ;
    eax = MEM32(ebp + 0x568);
    ecx = eax + 0x4AC;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x44) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = ecx;
    SET_LO8(ecx, 1);
    MEM8(esp + 0x12) = LO8(ecx);
    MEM8(esp + 0x13) = LO8(ecx);

loc_003726C9: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x4B8);

loc_003726D0: ;
    if (TEST_Z(MEM8(edi + 0x134), 8)) goto loc_003726F1; /* je: equal / zero */

loc_003726D9: ;
    edx = ebp + 0x78;
    ecx = MEM32(edx);
    eax = eax + 0x49C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_003726F1: ;
    PUSH32(esp, 0x63D740);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_003726FF: ;
    eax = edi + 0x138;
    PUSH32(esp, 0x63D738);
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_0037270F: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    esi = edi + 0x14C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00372720: ;
    esp = esp + 0x10;
    /* comiss xmm0, MEMF(0x648E98) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E98))) goto loc_00372821; /* jbe: below or equal (unsigned <=) */

loc_00372730: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, MEMF(0x648E70) - sets EFLAGS */
    SET_LO16(ecx, MEM16(edi + 0x7C8));
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM16(esp + 0xC) = LO16(ecx);
    if (1 /* jnp after test - parity */) goto loc_0037277B; /* jnp: not parity */

loc_0037274D: ;
    if (TEST_NZ(MEM32(edi + 0x98), 0x2000000)) goto loc_0037277B; /* jne: not equal / not zero */

loc_00372759: ;
    edx = MEM32(ebp + 0x568);
    edx = edx + 0x49C;
    ecx = MEM32(edx);
    eax = edi + 0x138;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0037277B: ;
    edx = ZX16(MEM16(ebp + 0x60));
    eax = MEM32(ebp + 0x568);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax + 0x4C8;
    ecx = edi + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + 0x4BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x14A));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = edi + 0x138;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003751C0(); /* call 0x003751C0 */

loc_003727BF: ;
    edx = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    SET_LO16(eax, MEM16(esp + 0x68));
    esp = esp + 0x2C;
    MEM16(edi + 0x134) = LO16(eax);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = MEM32(edi + 0x98);
    MEM32(esi + 8) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_003727F3; /* je: equal / zero */

loc_003727EC: ;
    eax = eax | 0x800;
    goto loc_003727F8;

loc_003727F3: ;
    eax = eax & 0xFFFFF7FFu;

loc_003727F8: ;
    SET_LO16(edx, MEM16(esp + 0xC));
    (void)0; /* cmp MEM16(edi + 0x7C8), LO16(edx) - flags set for next jcc */
    MEM32(edi + 0x98) = eax;
    if (CMP_EQ(MEM16(edi + 0x7C8), LO16(edx))) goto loc_00372821; /* je: equal / zero */

loc_0037280C: ;
    if (CMP_BE(MEM16(edi + 0x7C6), 0)) goto loc_00372821; /* jbe: below or equal (unsigned <=) */

loc_00372816: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x18C) = xmm0; /* movss */

loc_00372821: ;
    eax = MEM32(edi + 0x98);
    if (TEST_Z(HI8(eax), 8)) goto loc_00372837; /* je: equal / zero */

loc_0037282C: ;
    eax = eax | 0x1000000;
    MEM32(edi + 0x98) = eax;

loc_00372837: ;
    eax = MEM32(ebp + 0x568);
    eax = eax + 0x4AC;
    PUSH32(esp, eax);
    esi = edi + 0x138;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0037284F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x3C) = 1;
    if ((xmm1 > xmm0)) goto loc_00372869; /* ja: above (unsigned >) */

loc_00372864: ;
    MEM8(esp + 0x3C) = 0;

loc_00372869: ;
    if (TEST_Z(MEM8(edi + 0x134), 8)) goto loc_00372877; /* je: equal / zero */

loc_00372872: ;
    MEM8(esp + 0x12) = 0;

loc_00372877: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003728A5; /* je: equal / zero */

loc_0037287F: ;
    eax = MEM32(edi + 0x98);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_003728A5; /* je: equal / zero */

loc_0037288A: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    goto loc_00372929;

loc_003728A5: ;
    xmm0 = MEMF(edi + 0x128); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = esp + 0x58;
    eax = esp + 0x1C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x1C;
    edx = ecx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00372929: ;
    eax = MEM32(ebp + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x4C8));
    if (CMP_EQ(LO16(ecx), MEM16(edi + 0x14A))) goto loc_003729FD; /* je: equal / zero */

loc_00372943: ;
    ebx = ebp + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0037294D: ;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, 0x5F6744);
    eax = eax + 0x49C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_00372968: ;
    edx = MEM32(ebp + 0x568);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x4C8);
    ecx = MEM32(0x84B264);
    edx = MEM32(ecx);
    xmm0 = MEMF(0x6493EC); /* movss */
    esi = MEM32(edx + eax * 4);
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) goto loc_003729FD; /* jbe: below or equal (unsigned <=) */

loc_00372992: ;
    eax = edi + 0x138;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_003729A0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003729FD; /* je: equal / zero */

loc_003729A7: ;
    eax = MEM32(ebp + 0x568);
    eax = eax + 0x49C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_003729BA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003729FD; /* je: equal / zero */

loc_003729C1: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO16(eax, MEM16(ecx + 0x4C8));
    MEM16(edi + 0x14A) = LO16(eax);
    edx = MEM32(ebp + 0x568);
    MEM16(edx + 0x498) = LO16(eax);
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(ebx);
    eax = eax + 0x49C;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;

loc_003729FD: ;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, 0x5F13B4);
    eax = eax + 0x4BC;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_00372A12: ;
    edx = MEM32(ebp + 0x568);
    esi = edi + 0x138;
    edx = edx + 0x4BC;
    eax = esp + 0x2C;
    esp = esp + 4;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x28;
    MEM32(esp + 0x14) = ecx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_00373012; /* jbe: below or equal (unsigned <=) */

loc_00372AB0: ;
    xmm0 = MEMF(0x648F78); /* movss */
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    ecx = ebp + 0x78;
    edx = esi;
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_00372AD0: ;
    ecx = MEM32(eax);
    xmm3 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x78) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x7C) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x78;
    esp = esp + 4;
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x78) = xmm3; /* movss */
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
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm0 = MEMF(0x64A594); /* movss */
    /* comiss xmm0, MEMF(esp + 0x6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x6C))) goto loc_00372B36; /* jbe: below or equal (unsigned <=) */

loc_00372B30: ;
    MEMF(esp + 0x70) = xmm3; /* movss */

loc_00372B36: ;
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00372B4F; /* jbe: below or equal (unsigned <=) */

loc_00372B49: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00372B4F: ;
    eax = esp + 0x28;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00372B5A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = ebx;
    eax = ebx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi + 0x138;
    ecx = ebx;
    edx = esp + 0x4C;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00372FE0; /* je: equal / zero */

loc_00372BE2: ;
    xmm0 = MEMF(0x649234); /* movss */
    /* comiss xmm0, MEMF(esp + 0x6C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x6C))) goto loc_00372C5B; /* ja: above (unsigned >) */

loc_00372BF1: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO16(eax, MEM16(ecx + 0x498));
    ecx = ecx + 0x49C;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00372C5B; /* jl: less (signed <) */

loc_00372C0D: ;
    ecx = MEM32(0x84B264);
    if (CMP_GE(LO16(eax), MEM16(ecx + 4))) goto loc_00372C5B; /* jge: greater or equal (signed >=) */

loc_00372C19: ;
    xmm0 = MEMF(esp + 0x70); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    edx = SX16(LO16(eax));
    eax = ecx;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + edx * 4);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (1 /* jp after test - parity */) goto loc_00372CF0; /* jp: parity */

loc_00372C3E: ;
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    esi = esp + 0x5C;
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_00372C54: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00372C9D; /* jne: not equal / not zero */

loc_00372C5B: ;
    xmm0 = MEMF(0x648E98); /* movss */
    /* comiss xmm0, MEMF(esp + 0x6C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x6C))) goto loc_00372FE0; /* ja: above (unsigned >) */

loc_00372C6E: ;
    eax = MEM32(ebp + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    edx = MEM32(0x84B264);
    eax = MEM32(edx);
    esi = MEM32(eax + ecx * 4);
    edx = esp + 0x4C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00372C92: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00372FE0; /* jne: not equal / not zero */

loc_00372C9D: ;
    xmm0 = MEMF(0x6493EC); /* movss */
    /* comiss xmm0, MEMF(esp + 0x6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x6C))) goto loc_00372CB1; /* jbe: below or equal (unsigned <=) */

loc_00372CAC: ;
    MEM8(esp + 0x6B) = 1;

loc_00372CB1: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00373065(); return; } /* je: equal / zero */

loc_00372CBD: ;
    eax = MEM32(edi + 0x98);
    if (TEST_Z(HI8(eax), 0x10)) { sub_00373065(); return; } /* je: equal / zero */

loc_00372CCC: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esi = edi + 0x138;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    g_seh_ebp = ebp; sub_003730F2(); return; /* tail jmp 0x003730F2 */

loc_00372CF0: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0xA8) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0xB0) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x9C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xA0) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    eax++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xA4) = edx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00372FBC; /* jle: less or equal (signed <=) */

loc_00372D4B: ;
    goto loc_00372D50;

    /* nop */

loc_00372D50: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00372D61; /* jne: not equal / not zero */

loc_00372D58: ;
    esi = MEM32(esp + 0x14);
    esi = esi + 4;
    goto loc_00372D70;

loc_00372D61: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x18);
    esi = ecx + edx * 8 + -8;

loc_00372D70: ;
    if (CMP_LE(MEM16(esi + 4), 0)) goto loc_00372D90; /* jle: less or equal (signed <=) */

loc_00372D77: ;
    eax = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_00372D8D: ;
    esp = esp + 8;

loc_00372D90: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00372FA7; /* jle: less or equal (signed <=) */

loc_00372D9E: ;
    edi = edi;

loc_00372DA0: ;
    eax--;
    if (CMP_NE(ebx, eax)) goto loc_00372DB6; /* jne: not equal / not zero */

loc_00372DA5: ;
    edx = MEM32(esp + 0x70);
    eax = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    goto loc_00372DC6;

loc_00372DB6: ;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = ebx + 1;

loc_00372DC6: ;
    edx = esi;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_00372DCD: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm1 = MEMF(esp + 0xA0); /* movss */
    xmm4 = MEMF(esp + 0x8C); /* movss */
    xmm2 = MEMF(esp + 0x94); /* movss */
    xmm7 = MEMF(esp + 0xA4); /* movss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xAC); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    esp = esp + 8;
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    if ((xmm0 < xmm6)) goto loc_00372F70; /* jb: below (unsigned <) */

loc_00372E6C: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_00372F70; /* jbe: below or equal (unsigned <=) */

loc_00372E75: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm4 = MEMF(esp + 0x9C); /* movss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0xA4); /* movss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x64)); /* sqrtss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x34); /* divss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x90); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x98); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x8C); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x84); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    /* comiss xmm2, MEMF(0x649354) - sets EFLAGS */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    if ((xmm2 < MEMF(0x649354))) goto loc_00372F70; /* jb: below (unsigned <) */

loc_00372F53: ;
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00372C9D; /* ja: above (unsigned >) */

loc_00372F64: ;
    goto loc_00372F70;

    /* nop */
    /* nop */

loc_00372F70: ;
    eax = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x8C);
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00372DA0; /* jl: less (signed <) */

loc_00372FA7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x38);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00372D50; /* jl: less (signed <) */

loc_00372FBC: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(esp + 0x9C); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_00372C5B;

loc_00372FE0: ;
    xmm0 = MEMF(0x6493E8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x6C))) goto loc_00372CB1; /* jbe: below or equal (unsigned <=) */

loc_00372FF3: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    eax = edi + 0x138;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    goto loc_00372CB1;

loc_00373012: ;
    edx = esp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0037301D: ;
    esp = esp + 8;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00372CB1; /* jbe: below or equal (unsigned <=) */

loc_00373029: ;
    xmm0 = MEMF(edi + 0x18C); /* movss */
    /* comiss xmm0, MEMF(0x648D80) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D80))) goto loc_00372CB1; /* jbe: below or equal (unsigned <=) */

loc_0037303E: ;
    xmm0 = MEMF(0x648E70); /* movss */
    MEMF(edi + 0x14C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x18C) = xmm0; /* movss */
    goto loc_00372CB1;

loc_0037305E: ;
    MEM8(esp + 0x13) = 1;
    g_seh_ebp = ebp; sub_00373068(); return; /* tail jmp 0x00373068 */

}

/**
 * sub_00373480
 * Original: 0x00373480 - 0x00373F4C (2764 bytes, 645 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373480: ;
    esp = esp - 0x68;
    eax = MEM32(esp + 0x74);
    eax = MEM32(eax + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xDF - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x7C);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(eax, 0xDF)) goto loc_003734BC; /* je: equal / zero */

loc_003734A3: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_003734BC; /* je: equal / zero */

loc_003734AA: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_003734BC; /* je: equal / zero */

loc_003734B1: ;
    (void)0; /* cmp eax, 0xEC - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(eax, 0xEC)) goto loc_003734C4; /* jne: not equal / not zero */

loc_003734BC: ;
    MEM32(esp + 0x18) = 1;

loc_003734C4: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_003734CB: ;
    ecx = edi + 0x78;
    edx = MEM32(ecx);
    MEM8(esp + 0x80) = LO8(eax);
    eax = MEM32(ecx + 4);
    esi = MEM32(ecx + 8);
    MEM32(esp + 0x34) = eax;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(0x6490B8); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x144); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    ebx = MEM32(esp + 0x34);
    xmm0 = MEMF(0x648EC0); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = esi;
    if (1 /* jp after test - parity */) goto loc_00373548; /* jp: parity */

loc_0037351E: ;
    ecx = ebp + 0x138;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = esi;
    MEMF(ebp + 0x144) = xmm0; /* movss */
    eax = MEM32(edi + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x498));
    MEM16(ebp + 0x148) = LO16(ecx);

loc_00373548: ;
    eax = MEM32(edi + 0x568);
    SET_LO16(ecx, MEM16(ebp + 0x148));
    if (CMP_EQ(LO16(ecx), MEM16(eax + 0x4C8))) goto loc_003735AB; /* je: equal / zero */

loc_0037355E: ;
    SET_LO16(eax, MEM16(eax + 0x498));
    if (CMP_EQ(LO16(ecx), LO16(eax))) goto loc_003735AB; /* je: equal / zero */

loc_0037356A: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003735AB; /* je: equal / zero */

loc_00373570: ;
    eax = ebp + 0x138;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = esi;
    eax = MEM32(ebp + 0x98);
    MEMF(ebp + 0x144) = xmm0; /* movss */
    ecx = MEM32(edi + 0x568);
    SET_LO16(edx, MEM16(ecx + 0x498));
    eax = eax | 0x200000;
    MEM16(ebp + 0x148) = LO16(edx);
    MEM32(ebp + 0x98) = eax;

loc_003735AB: ;
    eax = MEM32(edi + 0x568);
    PUSH32(esp, 0x63D720);
    eax = eax + 0x4BC;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_003735C0: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_00373F4C(); return; } /* jne: not equal / not zero */

loc_003735CF: ;
    (void)0; /* cmp MEM16(ebp + 2), 0xC - flags set for next jcc */
    SET_LO16(eax, MEM16(ebp + 0x148));
    xmm0 = MEMF(ebp + 0x144); /* movss */
    MEM16(esp + 0x18) = LO16(eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM16(ebp + 2), 0xC)) goto loc_003735FE; /* jne: not equal / not zero */

loc_003735F0: ;
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003735FE: ;
    ecx = MEM32(edi + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x4C8);
    eax = MEM32(0x84B264);
    ecx = MEM32(eax);
    esi = MEM32(ecx + edx * 4);
    ebx = ebp + 0x138;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00373623: ;
    edx = MEM32(esp + 0x8C);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 3);
    if (TEST_Z(eax, eax)) goto loc_00373652; /* je: equal / zero */

loc_00373633: ;
    ecx = ZX16(MEM16(edx + 0x60));
    eax = MEM32(edi + 0x568);
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x4C8));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    goto loc_0037366A;

loc_00373652: ;
    eax = ZX16(MEM16(edx + 0x60));
    ecx = MEM32(esp + 0x8C);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x568);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0037366A: ;
    eax = eax + 0x4BC;
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0035BB10(); /* call 0x0035BB10 */

loc_0037367B: ;
    ecx = esp + 0x40;
    esp = esp + 0x1C;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(esp + 0x88);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x84);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x24;
    MEM32(esp + 0x84) = edx;
    edx = MEM32(esp + 0x84);
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00373C46; /* jbe: below or equal (unsigned <=) */

loc_00373708: ;
    eax = esp + 0x24;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00373713: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(ebp + 0x138); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ebp + 0x140); /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    eax = ebp + 0x138;
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ebp + 0x13C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm3 = xmm3 - MEMF(esp + 0x14); /* subss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_00373BEA; /* jbe: below or equal (unsigned <=) */

loc_003737A4: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x8C) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003737B8: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    esp = esp + 8;
    xmm4 = xmm4 - xmm3; /* subss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm4 <= xmm1)) goto loc_003737D3; /* jbe: below or equal (unsigned <=) */

loc_003737D0: ;
    xmm4 = xmm1; /* movaps */

loc_003737D3: ;
    xmm1 = MEMF(0x6490B4); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_003737E3; /* jbe: below or equal (unsigned <=) */

loc_003737E0: ;
    xmm4 = xmm1; /* movaps */

loc_003737E3: ;
    /* comiss xmm0, MEMF(0x648E98) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E98))) goto loc_00373815; /* jbe: below or equal (unsigned <=) */

loc_003737EC: ;
    eax = ZX8(MEM8(esp + 0x80));
    eax--;
    if ((eax == 0)) goto loc_00373804; /* je: equal / zero */

loc_003737F7: ;
    eax--;
    if ((eax != 0)) goto loc_00373815; /* jne: not equal / not zero */

loc_003737FA: ;
    xmm0 = MEMF(0x648F08); /* movss */
    goto loc_0037380C;

loc_00373804: ;
    xmm0 = MEMF(0x648EA4); /* movss */

loc_0037380C: ;
    MEMF(esp + 0x84) = xmm0; /* movss */

loc_00373815: ;
    eax = ebp + 0x138;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(edi + 0x568);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(0x84B264);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x40) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x4C8);
    eax = MEM32(edx);
    esi = MEM32(eax + ecx * 4);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm4 = xmm4 + MEMF(esp + 0x44); /* addss */
    edx = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_0037388F: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003738A5; /* je: equal / zero */

loc_0037389C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x4C8);
    goto loc_003738AC;

loc_003738A5: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x498);

loc_003738AC: ;
    if (CMP_NE(MEM16(eax + 0x4AA), 0xFFFFFFFFu)) goto loc_003738C5; /* jne: not equal / not zero */

loc_003738B6: ;
    xmm0 = MEMF(0x648E98); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x14))) goto loc_0037391F; /* ja: above (unsigned >) */

loc_003738C5: ;
    if (TEST_S(LO16(ecx), LO16(ecx))) goto loc_0037391F; /* jl: less (signed <) */

loc_003738CA: ;
    eax = MEM32(0x84B264);
    if (CMP_GE(LO16(ecx), MEM16(eax + 4))) goto loc_0037391F; /* jge: greater or equal (signed >=) */

loc_003738D5: ;
    xmm0 = MEMF(esp + 0x84); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    edx = eax;
    eax = MEM32(edx);
    ecx = SX16(LO16(ecx));
    ecx = MEM32(eax + ecx * 4);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x80) = ecx;
    if (1 /* jp after test - parity */) goto loc_0037393E; /* jp: parity */

loc_003738FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ebx = esp + 0x4C;
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_00373910: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00373BCB; /* jne: not equal / not zero */

loc_0037391B: ;
    edi = MEM32(esp + 0x7C);

loc_0037391F: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    eax = ebp + 0x138;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    goto loc_00373BCF;

loc_0037393E: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x68) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esp + 0x38);
    eax++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00373BAE; /* jle: less or equal (signed <=) */

loc_00373987: ;
    ebx = MEM32(esp + 0x84);
    edi = edi;

loc_00373990: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_003739A4; /* jne: not equal / not zero */

loc_00373998: ;
    esi = MEM32(esp + 0x80);
    esi = esi + 4;
    goto loc_003739B2;

loc_003739A4: ;
    ecx = MEM32(esp + 0x80);
    edx = MEM32(ecx + 0xC);
    esi = edx + eax * 8 + -8;

loc_003739B2: ;
    if (CMP_LE(MEM16(esi + 4), 0)) goto loc_003739CB; /* jle: less or equal (signed <=) */

loc_003739B9: ;
    eax = esp + 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_003739C8: ;
    esp = esp + 8;

loc_003739CB: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00373B95; /* jle: less or equal (signed <=) */

loc_003739D9: ;
    /* nop */

loc_003739E0: ;
    eax--;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(edi, eax)) goto loc_003739EF; /* jne: not equal / not zero */

loc_003739E6: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_003739F7;

loc_003739EF: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = edi + 1;

loc_003739F7: ;
    edx = esi;
    PUSH32(esp, 0); sub_0035A9F0(); /* call 0x0035A9F0 */

loc_003739FE: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm4 = MEMF(esp + 0x50); /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm7 = MEMF(esp + 0x68); /* movss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    esp = esp + 8;
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    if ((xmm0 < xmm6)) goto loc_00373B70; /* jb: below (unsigned <) */

loc_00373A85: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_00373B70; /* jbe: below or equal (unsigned <=) */

loc_00373A8E: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x68); /* movss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x84)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x1C); /* divss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x54); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x5C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x50); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    /* comiss xmm2, MEMF(0x649354) - sets EFLAGS */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    if ((xmm2 < MEMF(0x649354))) goto loc_00373B70; /* jb: below (unsigned <) */

loc_00373B5D: ;
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00373BCB; /* ja: above (unsigned >) */

loc_00373B6A: ;
    /* nop */

loc_00373B70: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003739E0; /* jl: less (signed <) */

loc_00373B95: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_00373990; /* jl: less (signed <) */

loc_00373BAA: ;
    edi = MEM32(esp + 0x7C);

loc_00373BAE: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    goto loc_0037391F;

loc_00373BCB: ;
    edi = MEM32(esp + 0x7C);

loc_00373BCF: ;
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */

loc_00373BEA: ;
    xmm7 = MEMF(ebp + 0x138); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x2C); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ebp + 0x13C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 * MEMF(ebp + 0x140); /* mulss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x7C) = xmm3; /* movss */
    goto loc_00373C75;

loc_00373C46: ;
    esi = MEM32(ebp + 0x98);
    edx = esp + 0x30;
    PUSH32(esp, ebx);
    esi = esi | 0x200000;
    PUSH32(esp, edx);
    MEM32(ebp + 0x98) = esi;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00373C63: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm4 = xmm0; /* movaps */

loc_00373C75: ;
    SET_LO8(eax, MEM8(ebp + 0x12C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00373D1F; /* je: equal / zero */

loc_00373C83: ;
    eax = MEM32(edi + 0x568);
    eax = eax + 0x4BC;
    ecx = esp + 0x30;
    edx = esp + 0x24;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x7C) = edx;
    ecx = MEM32(esp + 0x80);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x84);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x7C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00373CDF: ;
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00373CED: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00373D85; /* jbe: below or equal (unsigned <=) */

loc_00373D01: ;
    edx = MEM32(edi + 0x568);
    SET_LO16(eax, MEM16(edx + 0x4C8));
    MEM32(esp + 0x10) = 1;
    MEM16(ebp + 0x148) = LO16(eax);
    goto loc_00373D85;

loc_00373D1F: ;
    ecx = MEM32(edi + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x4C8);
    eax = MEM32(0x84B264);
    ecx = MEM32(eax);
    esi = MEM32(ecx + edx * 4);
    eax = ebp + 0x138;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00373D44: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00373D5F; /* je: equal / zero */

loc_00373D4B: ;
    edx = MEM32(edi + 0x568);
    SET_LO16(eax, MEM16(edx + 0x4C8));
    MEM16(ebp + 0x148) = LO16(eax);

loc_00373D5F: ;
    if (CMP_NE(MEM16(ebp + 2), 0xC)) goto loc_00373D7C; /* jne: not equal / not zero */

loc_00373D66: ;
    xmm0 = MEMF(0x5A005C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x18))) goto loc_00373D7C; /* jbe: below or equal (unsigned <=) */

loc_00373D75: ;
    MEM32(ebp + 0x98) = MEM32(ebp + 0x98) | 0x40;

loc_00373D7C: ;
    xmm3 = MEMF(esp + 0x7C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */

loc_00373D85: ;
    xmm3 = xmm3 / MEMF(ebp + 0x144); /* divss */
    xmm3 = xmm3 - MEMF(0x648E64); /* subss */
    xmm0 = MEMF(0x648F58); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_00373DAB; /* jbe: below or equal (unsigned <=) */

loc_00373DA6: ;
    xmm3 = xmm4; /* movaps */
    goto loc_00373DB3;

loc_00373DAB: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00373DB3; /* jbe: below or equal (unsigned <=) */

loc_00373DB0: ;
    xmm3 = xmm0; /* movaps */

loc_00373DB3: ;
    eax = ebp + 0x138;
    ecx = esp + 0x30;
    edx = esp + 0x24;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x7C) = edx;
    ecx = MEM32(esp + 0x80);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x84);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x7C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEM32(esp + 0x7C) = eax;
    edx = MEM32(esp + 0x7C);
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
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    xmm0 = xmm0 / MEMF(ebp + 0x144); /* divss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00373E61; /* jbe: below or equal (unsigned <=) */

loc_00373E5C: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00373E71;

loc_00373E61: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00373E71; /* jbe: below or equal (unsigned <=) */

loc_00373E6E: ;
    xmm0 = xmm1; /* movaps */

loc_00373E71: ;
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(edi + 0x568);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(ecx + 0xD0) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00373EA4; /* je: equal / zero */

loc_00373E8B: ;
    edx = MEM32(edi + 0x568);
    xmm0 = MEMF(edx + 0xD0); /* movss */
    /* comiss xmm0, MEMF(0x64909C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64909C))) goto loc_00373EA4; /* jbe: below or equal (unsigned <=) */

loc_00373EA2: ;
    esi = 0; /* xor self */

loc_00373EA4: ;
    if (TEST_Z(MEM8(ebp + 0x16C), 4)) goto loc_00373ECB; /* je: equal / zero */

loc_00373EAD: ;
    eax = MEM32(edi + 0x568);
    xmm0 = MEMF(eax + 0xD0); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(eax + 0xD0) = xmm0; /* movss */

loc_00373ECB: ;
    ebx = MEM32(esp + 0x88);
    PUSH32(esp, 0x63D710);
    eax = ebx;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_00373EDE: ;
    esp = esp + 4;
    if (CMP_NE(MEM16(ebp + 2), 0xD)) goto loc_00373F1A; /* jne: not equal / not zero */

loc_00373EE8: ;
    edi = MEM32(edi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(edi + 0xD0) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 0xD0))) goto loc_00373F12; /* ja: above (unsigned >) */

loc_00373EFA: ;
    xmm1 = MEMF(edi + 0xD0); /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00373F12; /* ja: above (unsigned >) */

loc_00373F0F: ;
    xmm0 = xmm1; /* movaps */

loc_00373F12: ;
    MEMF(edi + 0xD0) = xmm0; /* movss */

loc_00373F1A: ;
    PUSH32(esp, 0x63D738);
    eax = ebp + 0x138;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_00373F2A: ;
    PUSH32(esp, 0x63D728);
    eax = ebx;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_00373F36: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM16(ebp + 0x14A) = 0xFFFF;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00374270
 * Original: 0x00374270 - 0x00374417 (423 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00374270: ;
    edx = MEM32(0x84B264);
    esp = esp - 8;
    if (TEST_Z(edx, edx)) goto loc_00374413; /* je: equal / zero */

loc_00374281: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    goto loc_00374290;

    /* nop */

loc_00374290: ;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM16(edx + 4), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(MEM16(edx + 4), LO16(ecx))) goto loc_0037439D; /* jle: less or equal (signed <=) */

loc_003742A2: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    /* nop */

loc_003742B0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(edx);
    esi = MEM32(esi + ecx * 4);
    if (TEST_Z(edi, edi)) goto loc_003742C9; /* je: equal / zero */

loc_003742B9: ;
    edi = MEM32(0x84B330);
    edi = MEM32(edi + 0x145B8);
    MEM16(edi + ecx * 2) = LO16(ebp);

loc_003742C9: ;
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00374321; /* jle: less or equal (signed <=) */

loc_003742CF: ;
    ebx = 0; /* xor self */

loc_003742D1: ;
    eax = MEM32(0x84B0E0);
    eax = eax + ebx;
    if (CMP_EQ(MEM16(eax + 0x12), 0xFFFF)) goto loc_00374308; /* je: equal / zero */

loc_003742E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_003742E8: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00374308; /* je: equal / zero */

loc_003742EF: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00374307; /* je: equal / zero */

loc_003742F7: ;
    ecx = MEM32(0x84B330);
    edx = MEM32(ecx + 0x145B4);
    MEM16(edx + ebp * 2) = LO16(edi);

loc_00374307: ;
    ebp++;

loc_00374308: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    edi++;
    ebx = ebx + 0x38;
    if (CMP_L(edi, eax)) goto loc_003742D1; /* jl: less (signed <) */

loc_00374317: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x84B264);

loc_00374321: ;
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00374388; /* jle: less or equal (signed <=) */

loc_00374327: ;
    ebx = 0; /* xor self */
    /* nop */

loc_00374330: ;
    eax = MEM32(0x84B0E0);
    eax = eax + ebx;
    if (CMP_NE(MEM16(eax + 0x12), 0xFFFF)) goto loc_0037436F; /* jne: not equal / not zero */

loc_0037433F: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00374347: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0037436F; /* je: equal / zero */

loc_0037434E: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0037436E; /* je: equal / zero */

loc_00374356: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B4);
    ecx = edi;
    ecx = ecx | 0x8000;
    MEM16(eax + ebp * 2) = LO16(ecx);

loc_0037436E: ;
    ebp++;

loc_0037436F: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    edi++;
    ebx = ebx + 0x38;
    if (CMP_L(edi, eax)) goto loc_00374330; /* jl: less (signed <) */

loc_0037437E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x84B264);

loc_00374388: ;
    esi = (uint32_t)(int32_t)SMEM16(edx + 4);
    edi = MEM32(esp + 0x10);
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, esi)) goto loc_003742B0; /* jl: less (signed <) */

loc_0037439D: ;
    if (TEST_NZ(edi, edi)) goto loc_003743ED; /* jne: not equal / not zero */

loc_003743A1: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EFD);
    ecx = ecx + ebp;
    edx = ecx + ecx + 2;
    PUSH32(esp, 0x63D7B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003743BD: ;
    ecx = MEM32(0x84B330);
    edx = MEM32(0x84B264);
    MEM32(ecx + 0x145B8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    eax = MEM32(0x84B330);
    esi = MEM32(eax + 0x145B8);
    ecx = esi + ecx * 2 + 2;
    esp = esp + 0x10;
    MEM32(eax + 0x145B4) = ecx;
    goto loc_00374401;

loc_003743ED: ;
    ecx = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = MEM32(ecx + 0x145B8);
    MEM16(ecx + eax * 2) = LO16(ebp);

loc_00374401: ;
    edi++;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, 2)) goto loc_00374290; /* jl: less (signed <) */

loc_0037440F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00374413: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00374420
 * Original: 0x00374420 - 0x003744DD (189 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00374420: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84B330);
    eax = MEM32(eax + 0x8DFC);
    eax = (uint32_t)(int32_t)SMEM8(eax + edi);
    eax--;
    SET_LO8(ecx, MEM8(esp + 8));
    if ((eax == 0)) goto loc_003744C8; /* je: equal / zero */

loc_0037443B: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_003744BD; /* je: equal / zero */

loc_00374440: ;
    eax--;
    if ((eax != 0)) goto loc_0037444C; /* jne: not equal / not zero */

loc_00374443: ;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_003744CC; /* je: equal / zero */

loc_0037444C: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84B0E0);
    SET_LO8(ebx, MEM8(eax + esi + 0x33));
    eax = eax + esi;
    (void)0; /* cmp LO8(ebx), 0x3E - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ebx);
    if (CMP_EQ(LO8(ebx), 0x3E)) goto loc_00374482; /* je: equal / zero */

loc_00374468: ;
    SET_LO8(eax, MEM8(eax + 0x35));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00374482; /* je: equal / zero */

loc_0037446F: ;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(ebx))) goto loc_003744D7; /* jne: not equal / not zero */

loc_0037447A: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(ebx, MEM8(esp + 0xB));

loc_00374482: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003744B7; /* je: equal / zero */

loc_00374486: ;
    if (CMP_EQ(LO8(ebx), 0x2A)) goto loc_003744D7; /* je: equal / zero */

loc_0037448B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00374498; /* jne: not equal / not zero */

loc_00374493: ;
    if (CMP_EQ(LO8(ebx), 0x31)) goto loc_003744D7; /* je: equal / zero */

loc_00374498: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_003744B7; /* je: equal / zero */

loc_0037449D: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + esi;
    eax = 0; /* xor self */
    ecx = edx + 0x12;

loc_003744A7: ;
    esi = ZX16(MEM16(ecx));
    if (CMP_EQ(esi, edi)) goto loc_003744D0; /* je: equal / zero */

loc_003744AE: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 8)) goto loc_003744A7; /* jl: less (signed <) */

loc_003744B7: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003744BD: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0037444C; /* je: equal / zero */

loc_003744C1: ;
    if (CMP_NE(LO8(ecx), 2)) goto loc_003744CC; /* jne: not equal / not zero */

loc_003744C6: ;
    goto loc_0037444C;

loc_003744C8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0037444C; /* je: equal / zero */

loc_003744CC: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003744D0: ;
    if (TEST_Z(MEM8(edx + eax * 4 + 0x14), 1)) goto loc_003744B7; /* je: equal / zero */

loc_003744D7: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003744E0
 * Original: 0x003744E0 - 0x00374532 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003744E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003744E0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x84B0E0);
    xmm5 = 0.0f; /* xorps self = zero */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + ecx;
    eax = MEM32(esp + 0x54);
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 8); /* subss */
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 - MEMF(ebp); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm4 = xmm0; /* movaps */
    if ((xmm1 <= xmm2)) { sub_00374532(); return; } /* jbe: below or equal (unsigned <=) */

loc_0037452B: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00374540(); return; /* tail jmp 0x00374540 */

}

/**
 * sub_003748D0
 * Original: 0x003748D0 - 0x00374983 (179 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003748D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003748D0: ;
    esp = esp - 0x68;
    SET_LO8(ecx, MEM8(esp + 0x80));
    xmm0 = MEMF(0x6493D4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0037492C; /* je: equal / zero */

loc_003748F7: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x80);
    edx = MEM32(0x84B264);
    edx = MEM32(edx);
    eax = MEM32(edx + eax * 4);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    eax--;
    if ((eax == 0)) goto loc_00374924; /* je: equal / zero */

loc_00374910: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0037491F; /* je: equal / zero */

loc_00374915: ;
    eax--;
    if ((eax != 0)) goto loc_0037492C; /* jne: not equal / not zero */

loc_00374918: ;
    if (CMP_NE(LO8(ecx), 3)) goto loc_0037492C; /* jne: not equal / not zero */

loc_0037491D: ;
    goto loc_00374924;

loc_0037491F: ;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0037492C; /* je: equal / zero */

loc_00374924: ;
    MEM8(esp + 0x90) = 0;

loc_0037492C: ;
    SET_LO16(esi, MEM16(esp + 0x80));
    ebp = MEM32(0x84B264);
    eax = 0; /* xor self */
    (void)0; /* cmp LO16(esi), LO16(edi) - flags set for next jcc */
    MEM32(0x84B338) = eax;
    MEM32(0x84B33C) = eax;
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_EQ(LO16(esi), LO16(edi))) { sub_00374983(); return; } /* je: equal / zero */

loc_00374955: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B8);
    edx = MEM32(edx + 0x145B4);
    ecx = SX16(LO16(esi));
    eax = eax + ecx * 2;
    ecx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 2));
    edx = edx + ecx * 2;
    eax = eax - ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    g_seh_ebp = ebp; sub_003749A4(); return; /* tail jmp 0x003749A4 */

}

/**
 * sub_00375080
 * Original: 0x00375080 - 0x003750C1 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00375080: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B8);
    edx = MEM32(edx + 0x145B4);
    eax = eax + ecx * 2;
    ecx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 2));
    eax = eax - ecx;
    edx = edx + ecx * 2;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_003750BD; /* jle: less or equal (signed <=) */

loc_003750A8: ;
    esi = SX16(LO16(esi));
    goto loc_003750B0;

    /* nop */

loc_003750B0: ;
    edi = ZX16(MEM16(edx + ecx * 2));
    if (CMP_EQ(edi, esi)) { sub_003750C1(); return; } /* je: equal / zero */

loc_003750B8: ;
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_003750B0; /* jl: less (signed <) */

loc_003750BD: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003750D0
 * Original: 0x003750D0 - 0x003750FA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003750D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003750D0: ;
    PUSH32(esp, ecx);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) { sub_003750FA(); return; } /* je: equal / zero */

loc_003750D6: ;
    ecx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x238);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    eax = eax + eax + 2;
    g_seh_ebp = ebp; sub_003750FC(); return; /* tail jmp 0x003750FC */

}
