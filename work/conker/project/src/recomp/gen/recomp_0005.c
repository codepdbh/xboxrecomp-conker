/**
 * Burnout 3 - Recompiled code chunk 5
 * Functions: 250 (0x000658A0 - 0x0007E3B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000658A0
 * Original: 0x000658A0 - 0x000658E8 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000658A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000658A0: ;
    edx = ZX8(MEM8(0x76FC34));
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_000658E7; /* jle: less or equal (signed <=) */

loc_000658AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x7FA20C);
    PUSH32(esp, edi);
    goto loc_000658C0;

    /* nop */
    /* nop */

loc_000658C0: ;
    eax = MEM32(ecx * 4 + 0x76FC30);
    SET_LO8(ebx, MEM8(eax + 0xC));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000658DF; /* jne: not equal / not zero */

loc_000658CE: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_000658DF; /* je: equal / zero */

loc_000658D3: ;
    SET_LO16(edi, MEM16(eax + 0x10));
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) * (int32_t)LO16(esi)));
    MEM16(eax + 0xE) = MEM16(eax + 0xE) + LO16(edi);

loc_000658DF: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_000658C0; /* jl: less (signed <) */

loc_000658E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000658E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000658F0
 * Original: 0x000658F0 - 0x0006593C (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000658F0(void)
{

loc_000658F0: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00065938: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00065940
 * Original: 0x00065940 - 0x00065971 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065940: ;
    eax = MEM32(0x7FA1F4);
    if (CMP_EQ(eax, 0x32)) { sub_00065971(); return; } /* je: equal / zero */

loc_0006594A: ;
    if (CMP_EQ(eax, 0x33)) { sub_00065971(); return; } /* je: equal / zero */

loc_0006594F: ;
    if (CMP_EQ(eax, 0x37)) goto loc_00065967; /* je: equal / zero */

loc_00065954: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00065967; /* je: equal / zero */

loc_0006595D: ;
    xmm0 = MEMF(0x64935C); /* movss */
    g_seh_ebp = ebp; sub_00065979(); return; /* tail jmp 0x00065979 */

loc_00065967: ;
    xmm0 = MEMF(0x648F08); /* movss */
    g_seh_ebp = ebp; sub_00065979(); return; /* tail jmp 0x00065979 */

}

/**
 * sub_00065A00
 * Original: 0x00065A00 - 0x00065AC3 (195 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00065A00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x847198);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00065A0D: ;
    if (TEST_NZ(eax, eax)) goto loc_00065A47; /* jne: not equal / not zero */

loc_00065A11: ;
    eax = MEM32(0x847198);
    if (TEST_Z(eax, eax)) goto loc_00065A47; /* je: equal / zero */

loc_00065A1A: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00065A3A: ;
    esp = esp + 4;
    MEM32(0x847198) = 0;

loc_00065A47: ;
    ecx = MEM32(0x84719C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00065A53: ;
    if (TEST_NZ(eax, eax)) goto loc_00065A8D; /* jne: not equal / not zero */

loc_00065A57: ;
    eax = MEM32(0x84719C);
    if (TEST_Z(eax, eax)) goto loc_00065A8D; /* je: equal / zero */

loc_00065A60: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00065A80: ;
    esp = esp + 4;
    MEM32(0x84719C) = 0;

loc_00065A8D: ;
    edi = 0x84DAF0;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00065A97: ;
    edx = MEM32(0x84DAF4);
    MEM32(esp + 4) = edx;
    PUSH32(esp, 9);
    eax = esp + 8;
    edx = 0x84DAFC;
    PUSH32(esp, 0); sub_001DE460(); /* call 0x001DE460 */

loc_00065AB1: ;
    eax = 1;
    MEM32(0x84DB0C) = eax;
    MEM32(0x84DB10) = eax;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00065AD0
 * Original: 0x00065AD0 - 0x00065C9A (458 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065AD0: ;
    esp = esp - 0x18;
    edx = MEM32(0x7FA098);
    xmm1 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(esp + 0x24);
    xmm2 = MEMF(0x648E60); /* movss */
    xmm3 = xmm3 + MEMF(0x648F08); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx++;
    PUSH32(esp, edi);
    MEM32(0x7FA098) = edx;
    MEMF(0x76FC6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    edx = esp + 0x1C;
    edi = 0x870EE0;
    MEMF(0x76FC70) = xmm0; /* movss */
    MEMF(0x76FC68) = xmm1; /* movss */
    MEM16(0x76FC78) = LO16(ebx);
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEM32(0x84B568) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00066DB0(); /* call 0x00066DB0 */

loc_00065B67: ;
    ebp = eax;
    ecx = MEM32(ebp);
    if (CMP_EQ(ecx, ebx)) goto loc_00065C79; /* je: equal / zero */

loc_00065B74: ;
    PUSH32(esp, esi);

loc_00065B75: ;
    SET_LO8(eax, MEM8(ecx + 0xC2));
    ebp = ebp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00065C6D; /* jne: not equal / not zero */

loc_00065B86: ;
    SET_LO8(eax, MEM8(ecx + 0x9F));
    SET_LO8(eax, LO8(eax) & 0x60);
    if ((LO8(eax) == 0)) goto loc_00065C6D; /* je: equal / zero */

loc_00065B94: ;
    if (CMP_EQ(LO8(eax), 0x20)) goto loc_00065C6D; /* je: equal / zero */

loc_00065B9C: ;
    eax = MEM32(ecx + 0x60);
    if (CMP_EQ(eax, ebx)) goto loc_00065C6D; /* je: equal / zero */

loc_00065BA7: ;
    edx = MEM32(eax + 0x24);
    eax = MEM32(edx + 0x18);
    if (CMP_EQ(MEM32(eax + 0x14), ebx)) goto loc_00065C6D; /* je: equal / zero */

loc_00065BB6: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    edx = MEM32(ecx + 0x140);
    MEM32(0x812A18) = edx;
    MEM32(0x819B24) = 1;
    eax = ecx + 0x20;
    ecx = MEM32(ecx + 0x60);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(0x84B568) = ebx;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_00065C2A: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00065C5B; /* je: equal / zero */

loc_00065C31: ;
    xmm0 = MEMF(0x76FC44); /* movss */
    /* comiss xmm0, MEMF(esp + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x38))) goto loc_00065C5B; /* jbe: below or equal (unsigned <=) */

loc_00065C40: ;
    edi = MEM32(esp + 0x2C);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_EQ(edi, ebx)) goto loc_00065C5B; /* je: equal / zero */

loc_00065C4E: ;
    esi = MEM32(0x76FC4C);
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00065C5B: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEM32(0x84B568) = ebx;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00065C6D: ;
    ecx = MEM32(ebp);
    if (CMP_NE(ecx, ebx)) goto loc_00065B75; /* jne: not equal / not zero */

loc_00065C78: ;
    POP32(esp, esi);

loc_00065C79: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    if ((xmm0 < MEMF(esp + 0x30))) { sub_00065C9A(); return; } /* jb: below (unsigned <) */

loc_00065C8E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00065CB0
 * Original: 0x00065CB0 - 0x00066029 (889 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00065CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    edx = MEM32(0x7FA098);
    ecx = MEM32(ebp + 0x3C);
    eax = MEM32(ebp + 0x2C);
    xmm3 = MEMF(ebp + 0x28); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    edx++;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x76FC60) = eax;
    MEMF(0x76FC5C) = xmm3; /* movss */
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x16) = LO8(ebx);
    MEM32(0x7FA098) = edx;
    edi = 1;
    MEM8(esp + 0x17) = 1;
    if (CMP_NE(ecx, ebx)) goto loc_00065D0A; /* jne: not equal / not zero */

loc_00065CFC: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00065D0A; /* je: equal / zero */

loc_00065D06: ;
    MEM8(esp + 0x17) = LO8(ebx);

loc_00065D0A: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = MEMF(0x76FC74); /* movss */
    if (CMP_NE(eax, ebx)) goto loc_00065D19; /* jne: not equal / not zero */

loc_00065D16: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00065D19: ;
    eax = MEM32(ebp + 0x10);
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    xmm2 = MEMF(ebp + 0x24); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x20); /* movss */
    MEMF(0x76FC6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(eax) = xmm0; /* movss */
    (void)0; /* cmp MEM32(ebp + 0x18), ebx - flags set for next jcc */
    MEMF(0x76FC70) = xmm1; /* movss */
    MEMF(0x76FC68) = xmm2; /* movss */
    if (CMP_NE(MEM32(ebp + 0x18), ebx)) goto loc_00065D61; /* jne: not equal / not zero */

loc_00065D5A: ;
    ecx = esp + 0x44;
    MEM32(ebp + 0x18) = ecx;

loc_00065D61: ;
    eax = MEM32(0x76FE14);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm4 = MEMF(0x649430); /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(0x76FC80) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm4; /* movss */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    MEM16(0x76FC78) = LO16(ebx);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(0x84B568) = edi;
    if (CMP_EQ(eax, ebx)) goto loc_0006601F; /* je: equal / zero */

loc_00065DAB: ;
    if (CMP_EQ(MEM32(eax + 0x10), ebx)) goto loc_0006601F; /* je: equal / zero */

loc_00065DB4: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    SET_LO8(ecx, MEM8(0x75DB01));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(0x76FE0C);
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    MEM32(0x812A18) = edx;
    MEM32(0x819B24) = edi;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00065EA1; /* je: equal / zero */

loc_00065E3A: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = 0x76FE20;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_00065E57: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00065E92; /* je: equal / zero */

loc_00065E5E: ;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = MEMF(0x76FC44); /* movss */
    MEMF(0x76FC80) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00065E89; /* je: equal / zero */

loc_00065E75: ;
    esi = MEM32(0x76FC4C);
    ecx = 0x24;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 1;

loc_00065E89: ;
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, eax);
    goto loc_00065F48;

loc_00065E92: ;
    eax = MEM32(0x76FE14);
    xmm2 = MEMF(ebp + 0x24); /* movss */
    xmm1 = MEMF(ebp + 0x1C); /* movss */

loc_00065EA1: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    MEM32(0x819B24) = edi;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = 0x76FE20;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_00065F12: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00065F59; /* je: equal / zero */

loc_00065F19: ;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = MEMF(0x76FC44); /* movss */
    MEMF(0x76FC80) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00065F44; /* je: equal / zero */

loc_00065F30: ;
    esi = MEM32(0x76FC4C);
    ecx = 0x24;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 1;

loc_00065F44: ;
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, ecx);

loc_00065F48: ;
    eax = 0x76FC38;
    PUSH32(esp, 0); sub_00067D70(); /* call 0x00067D70 */

loc_00065F52: ;
    esp = esp + 4;
    MEM8(esp + 0x16) = LO8(eax);

loc_00065F59: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00066029(); return; } /* je: equal / zero */

loc_00065F65: ;
    xmm0 = MEMF(0x649430); /* movss */
    edx = MEM32(0x76FE14);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    MEM32(0x819B24) = edi;
    eax = MEM32(edx + 0x10);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = 0x76FE20;
    MEM32(0x84B568) = edi;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_00065FD6: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_00066029(); return; } /* je: equal / zero */

loc_00065FDD: ;
    xmm0 = MEMF(0x76FC44); /* movss */
    xmm1 = MEMF(0x649430); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00066029(); return; } /* jbe: below or equal (unsigned <=) */

loc_00065FF2: ;
    eax = MEM32(0x76FC4C);
    eax = MEM32(eax + 0x88);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    xmm2 = MEMF(ebp + 0x24); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00066019; /* je: equal / zero */

loc_00066011: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    g_seh_ebp = ebp; sub_00066033(); return; /* tail jmp 0x00066033 */

loc_00066019: ;
    MEM32(esp + 0x3C) = ebx;
    g_seh_ebp = ebp; sub_00066033(); return; /* tail jmp 0x00066033 */

loc_0006601F: ;
    MEMF(0x76FC80) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_00066033(); return; /* tail jmp 0x00066033 */

}

/**
 * sub_00066AC0
 * Original: 0x00066AC0 - 0x00066AFC (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066AC0(void)
{
    float xmm0;

loc_00066AC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00066AF2: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00066B00
 * Original: 0x00066B00 - 0x00066B7A (122 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066B00(void)
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

loc_00066B00: ;
    esp = esp - 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000759D0(); /* call 0x000759D0 */

loc_00066B12: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(edx) = xmm1; /* movss */
    MEMF(eax) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00066B7A(); return; } /* jp: parity */

loc_00066B6B: ;
    MEMF(edi) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00066BA0
 * Original: 0x00066BA0 - 0x00066BEB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066BA0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00066BA0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    xmm0 = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00066BE1: ;
    eax = (int32_t)MEMF(esp + 0x40); /* cvttss2si */
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00066BF0
 * Original: 0x00066BF0 - 0x00066C22 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00066BF0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = eax;
    xmm0 = MEMF(esi + 0x44); /* movss */
    /* comiss xmm0, MEMF(esi + 0x50) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x50))) goto loc_00066C12; /* jbe: below or equal (unsigned <=) */

loc_00066C07: ;
    /* comiss xmm0, MEMF(esi + 0x5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x5C))) { sub_00066C22(); return; } /* jbe: below or equal (unsigned <=) */

loc_00066C0D: ;
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00066C27(); return; /* tail jmp 0x00066C27 */

loc_00066C12: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    /* comiss xmm0, MEMF(esi + 0x5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x5C))) { sub_00066C22(); return; } /* jbe: below or equal (unsigned <=) */

loc_00066C1D: ;
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00066C27(); return; /* tail jmp 0x00066C27 */

}

/**
 * sub_00066D60
 * Original: 0x00066D60 - 0x00066DAC (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00066D60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x76FE14);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x76FE0C);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00066D85: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00066DAA; /* je: equal / zero */

loc_00066D8C: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_00066DAA; /* je: equal / zero */

loc_00066D93: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_00066DAA; /* je: equal / zero */

loc_00066D9A: ;
    ecx = ZX8(MEM8(esp + 8));
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x812A18);
    MEM32(eax + edx) = ecx;

loc_00066DAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00066DB0
 * Original: 0x00066DB0 - 0x00066DC2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00066DB0: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_00066DC2(); return; } /* jne: not equal / not zero */

loc_00066DB9: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00066E90
 * Original: 0x00066E90 - 0x00066EA2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00066E90: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_00066EA2(); return; } /* jne: not equal / not zero */

loc_00066E99: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00066F70
 * Original: 0x00066F70 - 0x00066F82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00066F70: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_00066F82(); return; } /* jne: not equal / not zero */

loc_00066F79: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067050
 * Original: 0x00067050 - 0x000671A5 (341 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067050: ;
    esp = esp - 0x424;
    eax = MEM32(esp + 0x430);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x430);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00067079; /* je: equal / zero */

loc_00067073: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00067079: ;
    MEM32(esp + 0x34) = 0;
    ebx = 1;

loc_00067086: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_0006712F; /* jne: not equal / not zero */

loc_00067099: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00067179; /* jbe: below or equal (unsigned <=) */

loc_000670A1: ;
    esi = esi + 0x10;

loc_000670A4: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x440);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x43C);
    eax = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_000670E1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006711D; /* je: equal / zero */

loc_000670E5: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0006711D; /* jne: not equal / not zero */

loc_000670F1: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if ((LO8(ecx) == 0)) goto loc_0006711D; /* je: equal / zero */

loc_000670FC: ;
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_0006711D; /* je: equal / zero */

loc_00067101: ;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_0006711D; /* je: equal / zero */

loc_00067108: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0006711D; /* je: equal / zero */

loc_00067115: ;
    MEM32(esp + 0x440) = MEM32(esp + 0x440) + 4;

loc_0006711D: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_000670A4; /* jl: less (signed <) */

loc_0006712D: ;
    goto loc_00067179;

loc_0006712F: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00067179; /* jbe: below or equal (unsigned <=) */

loc_00067133: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x43C);
    eax = esp + 0x24;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + ebx * 4 + 0x3C) = esi;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_00067168: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006716D; /* je: equal / zero */

loc_0006716C: ;
    ebx++;

loc_0006716D: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_00067133; /* jl: less (signed <) */

loc_00067179: ;
    ebp = MEM32(esp + ebx * 4 + 0x30);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_00067086; /* jne: not equal / not zero */

loc_00067186: ;
    eax = MEM32(esp + 0x440);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x424;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000671B0
 * Original: 0x000671B0 - 0x00067303 (339 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000671B0: ;
    esp = esp - 0x424;
    eax = MEM32(esp + 0x430);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x430);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000671D9; /* je: equal / zero */

loc_000671D3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_000671D9: ;
    MEM32(esp + 0x34) = 0;
    ebx = 1;

loc_000671E6: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_0006728D; /* jne: not equal / not zero */

loc_000671F9: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000672D7; /* jbe: below or equal (unsigned <=) */

loc_00067201: ;
    esi = esi + 0x10;

loc_00067204: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x440);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x43C);
    eax = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_00067241: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006727B; /* je: equal / zero */

loc_00067245: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0006727B; /* jne: not equal / not zero */

loc_00067251: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_0006727B; /* je: equal / zero */

loc_0006725F: ;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_0006727B; /* je: equal / zero */

loc_00067266: ;
    edx = MEM32(eax + 0x24);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0006727B; /* je: equal / zero */

loc_00067273: ;
    MEM32(esp + 0x440) = MEM32(esp + 0x440) + 4;

loc_0006727B: ;
    ecx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, ecx)) goto loc_00067204; /* jl: less (signed <) */

loc_0006728B: ;
    goto loc_000672D7;

loc_0006728D: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000672D7; /* jbe: below or equal (unsigned <=) */

loc_00067291: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x43C);
    edx = esp + 0x24;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + ebx * 4 + 0x3C) = esi;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_000672C6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000672CB; /* je: equal / zero */

loc_000672CA: ;
    ebx++;

loc_000672CB: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_00067291; /* jl: less (signed <) */

loc_000672D7: ;
    ebp = MEM32(esp + ebx * 4 + 0x30);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_000671E6; /* jne: not equal / not zero */

loc_000672E4: ;
    eax = MEM32(esp + 0x440);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x424;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00067310
 * Original: 0x00067310 - 0x00067438 (296 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067310: ;
    esp = esp - 0x424;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x438);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00067334; /* je: equal / zero */

loc_0006732E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00067334: ;
    MEM32(esp + 0x34) = 0;
    ebx = 1;

loc_00067341: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    edi = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_000673C2; /* jne: not equal / not zero */

loc_00067350: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0006740C; /* jbe: below or equal (unsigned <=) */

loc_00067358: ;
    edi = edi + 0x10;
    goto loc_00067360;

    /* nop */

loc_00067360: ;
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x43C);
    MEM32(edx) = ecx;
    eax = edi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x438);
    eax = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_0006739D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000673B4; /* je: equal / zero */

loc_000673A1: ;
    eax = MEM32(edi);
    PUSH32(esp, 0); sub_002E4F60(); /* call 0x002E4F60 */

loc_000673A8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000673B4; /* je: equal / zero */

loc_000673AC: ;
    MEM32(esp + 0x43C) = MEM32(esp + 0x43C) + 4;

loc_000673B4: ;
    eax = ZX8(MEM8(esi + 0x14));
    ebp++;
    edi = edi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_00067360; /* jl: less (signed <) */

loc_000673C0: ;
    goto loc_0006740C;

loc_000673C2: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0006740C; /* jbe: below or equal (unsigned <=) */

loc_000673C6: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x438);
    ecx = esp + 0x24;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + ebx * 4 + 0x3C) = edi;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_000673FB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00067400; /* je: equal / zero */

loc_000673FF: ;
    ebx++;

loc_00067400: ;
    ecx = ZX8(MEM8(esi + 0x14));
    ebp++;
    edi = edi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_000673C6; /* jl: less (signed <) */

loc_0006740C: ;
    esi = MEM32(esp + ebx * 4 + 0x30);
    ebx--;
    if (TEST_NZ(esi, esi)) goto loc_00067341; /* jne: not equal / not zero */

loc_00067419: ;
    eax = MEM32(esp + 0x43C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x424;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00067440
 * Original: 0x00067440 - 0x0006748F (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = esi + 4;
    edx = edi;
    MEM32(esi) = ebp;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x188) = ebx;
    MEM8(esi + 0x1A0) = 1;
    edx = edx - eax;

loc_00067465: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00067465; /* jne: not equal / not zero */

loc_0006746F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F235(); /* call 0x0046F235 */

loc_00067475: ;
    eax = MEM32(ebp + 0x10);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) { sub_0006748F(); return; } /* je: equal / zero */

loc_0006747F: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x190) = eax;
    eax = esi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000674A0
 * Original: 0x000674A0 - 0x000675A8 (264 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000674A0: ;
    eax = MEM32(esi + 0x184);
    (void)0; /* cmp eax, MEM32(esi + 0x190) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(eax, MEM32(esi + 0x190))) goto loc_000675A2; /* jge: greater or equal (signed >=) */

loc_000674B5: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x184);
    if (TEST_Z(ecx, ecx)) goto loc_000674E0; /* je: equal / zero */

loc_000674C4: ;
    if (TEST_S(eax, eax)) goto loc_000674E0; /* jl: less (signed <) */

loc_000674C8: ;
    if (CMP_AE(eax, MEM32(ecx))) goto loc_000674E0; /* jae: above or equal (unsigned >=) */

loc_000674CC: ;
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    eax = eax + edx * 4;
    if (TEST_Z(eax, eax)) goto loc_000674E0; /* je: equal / zero */

loc_000674D9: ;
    edi = MEM32(eax);
    ebp = MEM32(eax + 8);
    goto loc_000674E4;

loc_000674E0: ;
    edi = 0; /* xor self */
    ebp = 0; /* xor self */

loc_000674E4: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x5DF8E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_000674F1: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00067589; /* jne: not equal / not zero */

loc_000674FC: ;
    ecx = MEM32(esi + 0x188);
    edi = edi + 7;
    MEM32(esi + 0x19C) = edi;
    ebx = MEM32(ebp + 0x30);
    if (CMP_AE(ecx, MEM32(ebx + 0x2C))) goto loc_0006757F; /* jae: above or equal (unsigned >=) */

loc_00067513: ;
    goto loc_00067520;

    /* nop */
    /* nop */

loc_00067520: ;
    edi = MEM32(esi + 0x188);
    ecx = MEM32(ebx + 0x28);
    SET_LO8(eax, MEM8(esi + 0x1A0));
    edi = edi << 4;
    edi = edi + ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00067569; /* je: equal / zero */

loc_00067538: ;
    ecx = MEM32(edi);
    ebp = esi + 0x84;
    edx = ebp;

loc_00067542: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    MEM8(edx) = LO8(eax);
    edx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00067542; /* jne: not equal / not zero */

loc_0006754C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F235(); /* call 0x0046F235 */

loc_00067552: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ebp = esi + 0x8A;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00067562: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_000675A8(); return; } /* jne: not equal / not zero */

loc_00067569: ;
    edx = MEM32(esi + 0x188);
    edx++;
    MEM32(esi + 0x188) = edx;
    ecx = MEM32(ebx + 0x2C);
    eax = edx;
    if (CMP_B(eax, ecx)) goto loc_00067520; /* jb: below (unsigned <) */

loc_0006757F: ;
    MEM32(esi + 0x188) = 0;

loc_00067589: ;
    ecx = MEM32(esi + 0x184);
    ecx++;
    MEM32(esi + 0x184) = ecx;
    if (CMP_L(ecx, MEM32(esi + 0x190))) goto loc_000674B5; /* jl: less (signed <) */

loc_000675A2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000675E0
 * Original: 0x000675E0 - 0x00067704 (292 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000675E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x244;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000676FD; /* je: equal / zero */

loc_000675F7: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000676FD; /* je: equal / zero */

loc_00067602: ;
    PUSH32(esp, eax);
    eax = 0x5DF8D8;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_00067440(); /* call 0x00067440 */

loc_00067611: ;
    PUSH32(esp, 0); sub_000674A0(); /* call 0x000674A0 */

loc_00067616: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000676FD; /* je: equal / zero */

loc_0006761E: ;
    edi = edi;

loc_00067620: ;
    eax = MEM32(esp + 0x1C0);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0006762C: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0xC;
    eax = esp + 0x14;
    esi = 0x84DAEC;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_00067642: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, MEM32(0x84DAF4))) goto loc_00067659; /* je: equal / zero */

loc_0006764E: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_NZ(ecx, ecx)) goto loc_000676EC; /* jne: not equal / not zero */

loc_00067659: ;
    PUSH32(esp, 0x7F);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x1D8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00067670: ;
    PUSH32(esp, 2);
    edx = esp + 0x1D4;
    PUSH32(esp, 0x5DF8D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_00067684: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000676EC; /* je: equal / zero */

loc_0006768B: ;
    eax = MEM32(esp + 0x1B4);
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x1C0);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000676A4: ;
    edi = eax;
    ecx = esp + 0xC;
    eax = esp + 0x10;
    esi = 0x84DAEC;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_000676BC: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(eax, MEM32(0x84DAF4))) goto loc_000676E9; /* jne: not equal / not zero */

loc_000676C8: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_0034F380(); /* call 0x0034F380 */

loc_000676E3: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;

loc_000676E9: ;
    MEM32(eax + 0xC) = ebx;

loc_000676EC: ;
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_000674A0(); /* call 0x000674A0 */

loc_000676F5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00067620; /* jne: not equal / not zero */

loc_000676FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00067710
 * Original: 0x00067710 - 0x00067720 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00067710: ;
    eax = MEM32(ecx);
    esp = esp - 0x2C;
    if (TEST_NZ(eax, eax)) { sub_00067720(); return; } /* jne: not equal / not zero */

loc_00067719: ;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067830
 * Original: 0x00067830 - 0x0006793E (270 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067830(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067830: ;
    esp = esp - 0x28;
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    edi = esi + 0x18;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    PUSH32(esp, edi);
    ebx = esi + 0xC;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_0006788F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_000678A9: ;
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_000678BD: ;
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_000678D1: ;
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x5C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x60); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x54); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x58); /* mulss */
    esp = esp + 0x30;
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    POP32(esp, edi);
    xmm0 = xmm0 + xmm2; /* addss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    POP32(esp, ebp);
    MEMF(esp + 0xC) = xmm3; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = MEM32(esp + 0x10);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00067940
 * Original: 0x00067940 - 0x00067A3C (252 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067940(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00067940: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = esp + 4;
    eax = esp + 8;
    esi = 0x84DAEC;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0006795A: ;
    eax = MEM32(esp + 8);
    if (CMP_EQ(eax, MEM32(0x84DAF4))) { sub_00067A3C(); return; } /* je: equal / zero */

loc_0006796A: ;
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) { sub_00067A3C(); return; } /* je: equal / zero */

loc_00067975: ;
    ecx = MEM32(edi);
    edx = ZX8(MEM8(ecx));
    ecx = ZX8(MEM8(ecx + 1));
    xmm3 = MEMF(0x648CEC); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x2C); /* subss */
    xmm2 = xmm2 - MEMF(esp + 0x30); /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx));
    ecx = ZX8(MEM8(ecx + 1));
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 8);
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx));
    ecx = ZX8(MEM8(ecx + 1));
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    edx = esp + 8;
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm1 = xmm1 + xmm7; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00067A70(); /* call 0x00067A70 */

loc_00067A2D: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0); sub_00068950(); /* call 0x00068950 */

loc_00067A37: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00067A70
 * Original: 0x00067A70 - 0x00067A94 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00067A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5C;
    ecx = MEM32(eax + 4);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx, 4)) { sub_00067A94(); return; } /* ja: above (unsigned >) */

loc_00067A81: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x67D1C)); return; /* indirect tail jmp */

    edi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_00067A96(); return; /* tail jmp 0x00067A96 */

    eax = MEM32(eax + 0x1C);
    edi = MEM32(eax);
    g_seh_ebp = ebp; sub_00067A96(); return; /* tail jmp 0x00067A96 */

}

/**
 * sub_00067D70
 * Original: 0x00067D70 - 0x00067D81 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00067D70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(ebx, ebx)) { sub_00067D81(); return; } /* jne: not equal / not zero */

loc_00067D7C: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00067DC0
 * Original: 0x00067DC0 - 0x00067E8A (202 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DC0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067DC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    ebp = edi + 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_00067DD3: ;
    eax = MEM32(esp + 0x24);
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_00067DF1: ;
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_00067E09: ;
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067E90(); /* call 0x00067E90 */

loc_00067E1D: ;
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm3 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm4 = MEMF(esi); /* movss */
    eax = MEM32(esp + 0x4C);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(eax) = xmm3; /* movss */
    xmm3 = MEMF(esi + 0x14); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esi + 4); /* movss */
    esp = esp + 0x30;
    xmm0 = xmm0 * xmm1; /* mulss */
    POP32(esp, ebp);
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(eax + 4) = xmm3; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067E90
 * Original: 0x00067E90 - 0x00067F29 (153 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00067E90: ;
    esp = esp - 0x48;
    eax = esp + 0x18;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x54);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00067F29(); return; } /* jp: parity */

loc_00067EFF: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00067F29(); return; } /* jp: parity */

loc_00067F0E: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00067F29(); return; } /* jp: parity */

loc_00067F1D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00068060
 * Original: 0x00068060 - 0x0006826B (523 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068060: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x28));
    eax = eax & 3;
    eax = ZX8(MEM8(eax + esi + 4));
    SET_LO8(ecx, LO8(ecx) & 3);
    SET_LO8(ecx, LO8(ecx) << 1);
    eax = eax >> LO8(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 2));
    eax = eax & 3;
    if (CMP_BE(LO16(edx), LO16(edi))) { sub_0006826B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00068091: ;
    if (CMP_A(eax, 3)) goto loc_000680A8; /* ja: above (unsigned >) */

loc_00068096: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x68368)); return; /* indirect tail jmp */

    esi = esp + 8;
    edx = edi;
    PUSH32(esp, 0); sub_00068390(); /* call 0x00068390 */

loc_000680A8: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    esi = esp + 8;
    edx = edi;
    PUSH32(esp, 0); sub_00068390(); /* call 0x00068390 */

loc_000680ED: ;
    xmm0 = MEMF(0x648F94); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm7 = MEMF(0x6492A4); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x14); /* addss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm2; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_000680A8;

    esi = esp + 0x18;
    PUSH32(esp, 0); sub_00068390(); /* call 0x00068390 */

loc_000681AB: ;
    esi = esp + 8;
    edx = edi;
    PUSH32(esp, 0); sub_00068390(); /* call 0x00068390 */

loc_000681B6: ;
    xmm0 = MEMF(0x6492A4); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm7 = MEMF(0x648F94); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x14); /* addss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm2; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    goto loc_000680A8;

}

/**
 * sub_00068390
 * Original: 0x00068390 - 0x00068401 (113 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068390(void)
{
    float xmm0, xmm1;

loc_00068390: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO16(eax, LO16(edx));
    SET_LO16(eax, LO16(eax) >> 0xB);
    SET_LO8(eax, LO8(eax) << 3);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) >> 5);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    ecx = edx;
    eax = ZX8(LO8(ebx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = ecx >> 5;
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 6);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    ecx = ZX8(LO8(eax));
    SET_LO8(edx, LO8(edx) << 3);
    SET_LO8(eax, LO8(edx));
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CEC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi) = xmm1; /* movss */
    SET_LO8(eax, LO8(eax) >> 5);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = ZX8(LO8(eax));
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00068410
 * Original: 0x00068410 - 0x00068467 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068410(void)
{
    int _flags = 0; /* fallback flag var */

loc_00068410: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 8) = 0;
    if (CMP_EQ(esi, MEM32(edi + 4))) goto loc_00068465; /* je: equal / zero */

loc_0006842A: ;
    PUSH32(esp, ebx);
    goto loc_00068430;

    /* nop */

loc_00068430: ;
    ebx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00068438: ;
    if (TEST_NZ(eax, eax)) goto loc_0006845D; /* jne: not equal / not zero */

loc_0006843C: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006845A: ;
    esp = esp + 4;

loc_0006845D: ;
    (void)0; /* cmp ebx, MEM32(edi + 4) - flags set for next jcc */
    esi = ebx;
    if (CMP_NE(ebx, MEM32(edi + 4))) goto loc_00068430; /* jne: not equal / not zero */

loc_00068464: ;
    POP32(esp, ebx);

loc_00068465: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068470
 * Original: 0x00068470 - 0x000684CA (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00068470: ;
    edx = MEM32(esi + 0x20);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ecx = edi;
    ecx = ecx ^ 0xDEADBEEFu;
    ecx = ecx & edx;
    if (CMP_A(ebx, ecx)) goto loc_00068494; /* ja: above (unsigned >) */

loc_0006848B: ;
    edx = edx >> 1;
    ebx = ebx | 0xFFFFFFFFu;
    ebx = ebx - edx;
    ecx = ecx + ebx;

loc_00068494: ;
    edx = MEM32(esi + 0x14);
    ebx = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    ecx = MEM32(edx);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000684BF; /* je: equal / zero */

loc_000684A8: ;
    edx = ebx;
    /* nop */

loc_000684B0: ;
    if (CMP_AE(MEM32(ecx + 8), edi)) { sub_000684CA(); return; } /* jae: above or equal (unsigned >=) */

loc_000684B5: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, edx)) goto loc_000684B0; /* jne: not equal / not zero */

loc_000684BB: ;
    MEM32(esp + 8) = ecx;

loc_000684BF: ;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00068500
 * Original: 0x00068500 - 0x0006850D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068500: ;
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0006850D(); return; } /* jne: not equal / not zero */

loc_00068509: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00068515(); return; /* tail jmp 0x00068515 */

}

/**
 * sub_00068580
 * Original: 0x00068580 - 0x000685B8 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00068580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F830);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    esi = edx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(esi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_000685B8(); return; } /* jne: not equal / not zero */

loc_000685B4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000685C0(); return; /* tail jmp 0x000685C0 */

}

/**
 * sub_000687F0
 * Original: 0x000687F0 - 0x0006883B (75 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000687F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_00068800: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00068800; /* jne: not equal / not zero */

loc_00068807: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00068811: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00068811; /* jne: not equal / not zero */

loc_00068818: ;
    eax = eax - esi;
    ecx = 0x3FF;
    ecx = ecx - eax;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(edx, ecx)) { sub_0006883B(); return; } /* jae: above or equal (unsigned >=) */

loc_00068826: ;
    eax = ebx;
    edx = eax + 1;
    goto loc_00068830;

    /* nop */

loc_00068830: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00068830; /* jne: not equal / not zero */

loc_00068837: ;
    eax = eax - edx;
    g_seh_ebp = ebp; sub_00068852(); return; /* tail jmp 0x00068852 */

}

/**
 * sub_00068870
 * Original: 0x00068870 - 0x00068899 (41 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00068870: ;
    edx = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    ecx = 1;
    eax = 0; /* xor self */
    if (CMP_B(edx, ecx)) goto loc_00068897; /* jb: below (unsigned <) */

loc_00068881: ;
    PUSH32(esp, edi);

loc_00068882: ;
    if (TEST_Z(ecx, edx)) goto loc_0006888E; /* je: equal / zero */

loc_00068886: ;
    edi = ecx;
    edi = edi & esi;
    eax = eax | edi;
    goto loc_00068890;

loc_0006888E: ;
    esi = esi << 1;

loc_00068890: ;
    ecx = ecx << 1;
    if (CMP_BE(ecx, edx)) goto loc_00068882; /* jbe: below or equal (unsigned <=) */

loc_00068896: ;
    POP32(esp, edi);

loc_00068897: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000688A0
 * Original: 0x000688A0 - 0x000688C9 (41 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000688A0: ;
    edx = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    ecx = 1;
    eax = 0; /* xor self */
    if (CMP_B(edx, ecx)) goto loc_000688C7; /* jb: below (unsigned <) */

loc_000688B1: ;
    PUSH32(esp, edi);

loc_000688B2: ;
    if (TEST_Z(ecx, edx)) goto loc_000688BE; /* je: equal / zero */

loc_000688B6: ;
    edi = ecx;
    edi = edi & esi;
    eax = eax | edi;
    goto loc_000688C0;

loc_000688BE: ;
    esi = esi << 1;

loc_000688C0: ;
    ecx = ecx << 1;
    if (CMP_BE(ecx, edx)) goto loc_000688B2; /* jbe: below or equal (unsigned <=) */

loc_000688C6: ;
    POP32(esp, edi);

loc_000688C7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000688D0
 * Original: 0x000688D0 - 0x00068942 (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000688D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x20) = edi;
    ecx = esi;
    edi = edi;

loc_00068900: ;
    edx = 0; /* xor self */
    if (CMP_AE(esi, ebx)) goto loc_00068912; /* jae: above or equal (unsigned >=) */

loc_00068906: ;
    edx = MEM32(eax + 0xC);
    edx = edx | ecx;
    ecx = ecx << 1;
    MEM32(eax + 0xC) = edx;
    edx = ecx;

loc_00068912: ;
    if (CMP_AE(esi, MEM32(esp + 0x10))) goto loc_00068924; /* jae: above or equal (unsigned >=) */

loc_00068918: ;
    ebp = MEM32(eax + 0x10);
    ebp = ebp | ecx;
    ecx = ecx << 1;
    MEM32(eax + 0x10) = ebp;
    edx = ecx;

loc_00068924: ;
    if (CMP_AE(esi, MEM32(esp + 0x14))) goto loc_00068936; /* jae: above or equal (unsigned >=) */

loc_0006892A: ;
    ebp = MEM32(eax + 0x14);
    ebp = ebp | ecx;
    ecx = ecx << 1;
    MEM32(eax + 0x14) = ebp;
    edx = ecx;

loc_00068936: ;
    esi = esi << 1;
    if (CMP_NE(edx, edi)) goto loc_00068900; /* jne: not equal / not zero */

loc_0006893C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068950
 * Original: 0x00068950 - 0x00068967 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068950: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if ((xmm0 < MEMF(0x648D14))) { sub_00068967(); return; } /* jb: below (unsigned <) */

loc_00068960: ;
    ebp = 0xFF;
    g_seh_ebp = ebp; sub_00068988(); return; /* tail jmp 0x00068988 */

}

/**
 * sub_00068A70
 * Original: 0x00068A70 - 0x00068ACC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00068A70: ;
    if (CMP_GE(eax, 0x4B)) { sub_00068ACC(); return; } /* jge: greater or equal (signed >=) */

loc_00068A75: ;
    if (CMP_NE(eax, 6)) goto loc_00068AAC; /* jne: not equal / not zero */

loc_00068A7A: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_S(LO8(edx), LO8(edx))) goto loc_00068AA6; /* js: sign (negative) */

loc_00068A87: ;
    edx = ZX8(MEM8(0x76F0B6));
    edx--;
    if (CMP_EQ(edx, 0x14)) goto loc_00068AA6; /* je: equal / zero */

loc_00068A94: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00068AC4; /* jne: not equal / not zero */

loc_00068A9D: ;
    if (CMP_NE(MEM8(0x76F0DC), 0x14)) goto loc_00068AC4; /* jne: not equal / not zero */

loc_00068AA6: ;
    eax = MEM32(0x69D364);
    esp += 4; return; /* ret */

loc_00068AAC: ;
    if (CMP_NE(eax, 0x39)) goto loc_00068AC4; /* jne: not equal / not zero */

loc_00068AB1: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + 4));
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_00068AC4; /* jns: not sign (positive) */

loc_00068ABE: ;
    eax = MEM32(0x69D368);
    esp += 4; return; /* ret */

loc_00068AC4: ;
    eax = MEM32(eax * 4 + 0x69D240);
    esp += 4; return; /* ret */

}

/**
 * sub_00068AE0
 * Original: 0x00068AE0 - 0x00068B03 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068AE0: ;
    (void)0; /* cmp eax, 0x4B - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(eax, 0x4B)) { sub_00068B03(); return; } /* jge: greater or equal (signed >=) */

loc_00068AE8: ;
    PUSH32(esp, 0); sub_00068A70(); /* call 0x00068A70 */

loc_00068AED: ;
    ecx = 0x14;
    esi = eax;
    edi = 0x76FC88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(0x76FC98);
    g_seh_ebp = ebp; sub_00068B30(); return; /* tail jmp 0x00068B30 */

}

/**
 * sub_00068BF0
 * Original: 0x00068BF0 - 0x00068C66 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068BF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00068C01: ;
    edi = MEM32(esi);
    ebp = eax;
    eax = MEM32(esi + 4);
    eax = eax + eax * 2;
    ecx = esp + 0x14;
    esi = edi + eax * 4;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_00068C20: ;
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_00068C2B; /* je: equal / zero */

loc_00068C27: ;
    if (CMP_AE(ebp, MEM32(eax))) { sub_00068C66(); return; } /* jae: above or equal (unsigned >=) */

loc_00068C2B: ;
    edx = ebx;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_00068C32: ;
    ebx = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi;
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_00068C46: ;
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_00068C5D; /* je: equal / zero */

loc_00068C4D: ;
    if (CMP_B(ebx, MEM32(eax))) goto loc_00068C5D; /* jb: below (unsigned <) */

loc_00068C51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00068C5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068C70
 * Original: 0x00068C70 - 0x00068D08 (152 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068C70: ;
    esp = esp - 0xC;
    ecx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_LE(ecx, eax)) goto loc_00068CFB; /* jle: less or equal (signed <=) */

loc_00068C83: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    goto loc_00068C90;

    /* nop */

loc_00068C90: ;
    eax = MEM32(0x8471B8);
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + eax + 0x68);
    if (TEST_Z(edi, edi)) goto loc_00068CD6; /* je: equal / zero */

loc_00068CA1: ;
    eax = MEM32(edi);
    xmm0 = MEMF(0x7FA21C); /* movss */
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_00068CD6; /* jle: less or equal (signed <=) */

loc_00068CB7: ;
    ebp = MEM32(esp + 0x18);
    goto loc_00068CC0;

    /* nop */

loc_00068CC0: ;
    edx = MEM32(edi + 4);
    esi = MEM32(edx + ebx * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003F9540(); /* call 0x003F9540 */

loc_00068CCC: ;
    eax = MEM32(edi);
    esp = esp + 4;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00068CC0; /* jl: less (signed <) */

loc_00068CD6: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(0x76FD10);
    eax++;
    edx = edx + 0x150;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(eax, ecx)) goto loc_00068C90; /* jl: less (signed <) */

loc_00068CF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00068CFB: ;
    PUSH32(esp, 0); sub_0006A390(); /* call 0x0006A390 */

loc_00068D00: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00069440(); return; /* tail jmp 0x00069440 */

}

/**
 * sub_00068D10
 * Original: 0x00068D10 - 0x000693C6 (1718 bytes, 466 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068D10: ;
    eax = MEM32(0x84A144);
    esp = esp - 0x80;
    if (TEST_S(eax, eax)) goto loc_000693BF; /* jl: less (signed <) */

loc_00068D23: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0xEF;
    esi = 0x69D488;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x38) = 0x148;
    MEM32(esp + 0x34) = 0x3E4;
    ebp = 0x76FD00;
    edi = edi;

loc_00068D50: ;
    edi = ebx + -239;
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00068D5F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0006937D; /* je: equal / zero */

loc_00068D6A: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = 0; /* xor self */
    MEM16(ebp) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    eax = ~eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x76FD10);
    if (CMP_LE(eax & eax, 0)) goto loc_0006937D; /* jle: less or equal (signed <=) */

loc_00068D96: ;
    goto loc_00068DA0;

    /* nop */
    /* nop */

loc_00068DA0: ;
    edx = MEM32(0x8471B8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    edx = ZX8(MEM8(eax + edx + 0xC4));
    edx = edx >> 5;
    edx = edx + ecx;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x40) = ecx;
    if (CMP_G(ecx, edx)) goto loc_00069369; /* jg: greater (signed >) */

loc_00068DD3: ;
    ebx = eax;
    eax = esp + 0x70;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x2C) = eax;

loc_00068DE1: ;
    edx = MEM32(0x8471B8);
    SET_LO8(eax, MEM8(esp + 0x44));
    ebx = ebx + edx;
    SET_LO8(edx, MEM8(ebx + 0xC3));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    eax = MEM32(0x8472A0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ebx + 0xC3) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_00068E25; /* je: equal / zero */

loc_00068E04: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_00068E25; /* je: equal / zero */

loc_00068E0D: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00068E3F; /* je: equal / zero */

loc_00068E16: ;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000540C0(); /* call 0x000540C0 */

loc_00068E1E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00068E3F; /* jne: not equal / not zero */

loc_00068E25: ;
    if (CMP_EQ(MEM8(ebx + 0xC2), 1)) goto loc_0006915F; /* je: equal / zero */

loc_00068E32: ;
    if (TEST_NZ(MEM8(ebx + 0xC4), 8)) goto loc_0006915F; /* jne: not equal / not zero */

loc_00068E3F: ;
    eax = MEM32(0x8472A0);
    if (TEST_Z(eax, eax)) goto loc_00068E5A; /* je: equal / zero */

loc_00068E48: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00068E5A; /* jne: not equal / not zero */

loc_00068E51: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00068E67; /* jne: not equal / not zero */

loc_00068E5A: ;
    if (TEST_Z(MEM8(ebx + 0x9F), 1)) goto loc_0006915F; /* je: equal / zero */

loc_00068E67: ;
    SET_LO8(eax, MEM8(ebx + 0xEE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006915F; /* je: equal / zero */

loc_00068E75: ;
    edi = MEM32(esp + 0x94);
    SET_LO8(eax, MEM8(edi + 0x76F0CC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00068EA4; /* jne: not equal / not zero */

loc_00068E86: ;
    if (CMP_NE(MEM8(edi + 0x76F0E0), 1)) goto loc_00068EA4; /* jne: not equal / not zero */

loc_00068E8F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000540C0(); /* call 0x000540C0 */

loc_00068E99: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0006915F; /* je: equal / zero */

loc_00068EA4: ;
    ecx = MEM32(ebx + 0x60);
    if (TEST_Z(ecx, ecx)) goto loc_0006915F; /* je: equal / zero */

loc_00068EAF: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00068EE6; /* jp: parity */

loc_00068EC0: ;
    xmm0 = MEMF(ebx + 0x80); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00068EE6; /* jp: parity */

loc_00068ED1: ;
    xmm0 = MEMF(ebx + 0x84); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006915F; /* jnp: not parity */

loc_00068EE6: ;
    edx = MEM32(0x8470DC);
    eax = MEM32(esp + 0x34);
    eax = MEM32(eax + edx);
    if (TEST_Z(eax, eax)) goto loc_00068F0B; /* je: equal / zero */

loc_00068EF7: ;
    edx = MEM32(eax + 0x2B0);
    if (TEST_Z(edx, edx)) goto loc_00068F0B; /* je: equal / zero */

loc_00068F01: ;
    edx = (int32_t)MEMF(0x76F7B0); /* cvttss2si */
    goto loc_00068F38;

loc_00068F0B: ;
    SET_LO16(eax, MEM16(ebx + 0xF4));
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_00068F25; /* jne: not equal / not zero */

loc_00068F17: ;
    eax = (int32_t)MEMF(0x76F7B0); /* cvttss2si */
    MEM32(esp + 0x24) = eax;
    goto loc_00068F3C;

loc_00068F25: ;
    if (CMP_NE(LO16(eax), 1)) goto loc_00068F35; /* jne: not equal / not zero */

loc_00068F2B: ;
    MEM32(esp + 0x24) = 0x9C40;
    goto loc_00068F3C;

loc_00068F35: ;
    edx = ZX16(LO16(eax));

loc_00068F38: ;
    MEM32(esp + 0x24) = edx;

loc_00068F3C: ;
    eax = MEM32(ecx + 0x24);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm1 = MEMF(eax + 0x28); /* movss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x1C); /* addss */
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00068F7B: ;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm2 = MEMF(edx + 0x1C); /* movss */
    ecx = MEM32(0x84A13C);
    edx = MEM32(esp + 0x38);
    xmm2 = xmm2 * MEMF(ebx + 0x80); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    eax = esp + 0x13;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    PUSH32(esp, eax);
    edi = edx + ecx;
    esi = esp + 0x50;
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_00068FDB: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00068FE7; /* jne: not equal / not zero */

loc_00068FE2: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00069002;

loc_00068FE7: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    eax = eax + 0xFFFFFF11u;
    PUSH32(esp, 0); sub_0006B180(); /* call 0x0006B180 */

loc_00068FFF: ;
    esp = esp + 8;

loc_00069002: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    ecx = MEM32(esp + 0x2C);
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm4 <= xmm0)) goto loc_0006901A; /* jbe: below or equal (unsigned <=) */

loc_0006900F: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx) = xmm1; /* movss */

loc_0006901A: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00069034; /* jp: parity */

loc_00069027: ;
    edx = MEM32(esp + 0x14);
    MEM8(edx + ebx) = 0;
    goto loc_0006915B;

loc_00069034: ;
    eax = MEM32(esp + 0x24);
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00069052; /* jbe: below or equal (unsigned <=) */

loc_00069045: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + ebx) = 0;
    goto loc_0006915B;

loc_00069052: ;
    edx = eax + -200;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx))) goto loc_000690D1; /* jbe: below or equal (unsigned <=) */

loc_00069061: ;
    eax = MEM32(0x7FA20C);
    SET_LO16(edx, MEM16(ebx + 0xEC));
    eax = eax + eax * 4;
    eax = eax << 1;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_000690C7; /* je: equal / zero */

loc_00069077: ;
    edx = ZX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x14);
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    SET_LO8(ecx, MEM8(edx + ebx));
    if ((xmm0 <= MEMF(ecx))) goto loc_0006909E; /* jbe: below or equal (unsigned <=) */

loc_0006908A: ;
    esi = ZX8(LO8(ecx));
    if (CMP_LE(esi, eax)) goto loc_00069098; /* jle: less or equal (signed <=) */

loc_00069091: ;
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(edx + ebx) = LO8(ecx);
    goto loc_000690BB;

loc_00069098: ;
    MEM8(edx + ebx) = 0;
    goto loc_000690BB;

loc_0006909E: ;
    esi = 0xFF;
    edi = ZX8(LO8(ecx));
    esi = esi - eax;
    if (CMP_GE(edi, esi)) goto loc_000690B3; /* jge: greater or equal (signed >=) */

loc_000690AC: ;
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(edx + ebx) = LO8(ecx);
    goto loc_000690B7;

loc_000690B3: ;
    MEM8(edx + ebx) = 0xFF;

loc_000690B7: ;
    edx = MEM32(esp + 0x14);

loc_000690BB: ;
    if (CMP_EQ(MEM8(edx + ebx), 0)) goto loc_0006915B; /* je: equal / zero */

loc_000690C5: ;
    goto loc_00069103;

loc_000690C7: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + ebx) = 0xFF;
    goto loc_00069103;

loc_000690D1: ;
    ecx = (int32_t)MEMF(ecx); /* cvttss2si */
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFF);
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 0xFF)) goto loc_000690FC; /* jle: less or equal (signed <=) */

loc_000690F7: ;
    eax = 0xFF;

loc_000690FC: ;
    edx = MEM32(esp + 0x14);
    MEM8(edx + ebx) = LO8(eax);

loc_00069103: ;
    eax = MEM32(0x76FCEC);
    if (TEST_NZ(eax, eax)) goto loc_0006914D; /* jne: not equal / not zero */

loc_0006910C: ;
    if (TEST_NZ(MEM8(ebx + 0xC4), 0x10)) goto loc_0006914D; /* jne: not equal / not zero */

loc_00069115: ;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ebx = ebx + 0x110;
    PUSH32(esp, ebx);
    eax = eax + 0xFFFFFF11u;
    PUSH32(esp, 0); sub_00313C20(); /* call 0x00313C20 */

loc_00069146: ;
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006915B; /* je: equal / zero */

loc_0006914D: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x1C);
    eax = eax | ecx;
    MEM32(esp + 0x30) = eax;

loc_0006915B: ;
    esi = MEM32(esp + 0x20);

loc_0006915F: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x28);
    ecx++;
    edi = edi + 4;
    ebx = ebx + 0x150;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x3C) = ebx;
    if (CMP_LE(ecx, edx)) goto loc_00068DE1; /* jle: less or equal (signed <=) */

loc_0006918D: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00069369; /* je: equal / zero */

loc_00069199: ;
    eax = MEM32(esp + 0x40);
    edx = edx - eax;
    edx++;
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    ecx = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(edx, 4)) goto loc_000692E2; /* jl: less (signed <) */

loc_000691AF: ;
    edx = esp + 0x74;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_000691C0: ;
    edi = MEM32(0x8471B8);
    SET_LO8(ebx, MEM8(eax + edi + 0xC3));
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax + edi + 0xC3) = LO8(ebx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    MEM16(edi + edx * 8) = LO16(ecx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    ebx = MEM32(esp + 0x18);
    ebx = MEM32(ebx + -4);
    MEM32(edi + edx * 8 + 4) = ebx;
    MEM16(ebp) = MEM16(ebp) + 1;
    edi = MEM32(0x8471B8);
    SET_LO8(ebx, MEM8(eax + edi + 0x213));
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax + edi + 0x213) = LO8(ebx);
    edi = ZX16(MEM16(ebp));
    ebx = MEM32(esi);
    ebx = MEM32(ebx);
    edx = ecx + 1;
    MEM16(ebx + edi * 8) = LO16(edx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    ebx = MEM32(esp + 0x18);
    ebx = MEM32(ebx);
    MEM32(edi + edx * 8 + 4) = ebx;
    MEM16(ebp) = MEM16(ebp) + 1;
    edi = MEM32(0x8471B8);
    SET_LO8(ebx, MEM8(eax + edi + 0x363));
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax + edi + 0x363) = LO8(ebx);
    edi = ZX16(MEM16(ebp));
    ebx = MEM32(esi);
    ebx = MEM32(ebx);
    edx = ecx + 2;
    MEM16(ebx + edi * 8) = LO16(edx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    ebx = MEM32(esp + 0x18);
    ebx = MEM32(ebx + 4);
    MEM32(edi + edx * 8 + 4) = ebx;
    MEM16(ebp) = MEM16(ebp) + 1;
    edi = MEM32(0x8471B8);
    SET_LO8(ebx, MEM8(eax + edi + 0x4B3));
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax + edi + 0x4B3) = LO8(ebx);
    edi = ZX16(MEM16(ebp));
    ebx = MEM32(esi);
    ebx = MEM32(ebx);
    edx = ecx + 3;
    MEM16(ebx + edi * 8) = LO16(edx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(edi);
    ebx = MEM32(ebx + 8);
    MEM32(edi + edx * 8 + 4) = ebx;
    edx = MEM32(esp + 0x18);
    MEM16(ebp) = MEM16(ebp) + 1;
    edx = edx + 0x10;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    ecx = ecx + 4;
    edx = edx + 0xFFFFFFFDu;
    eax = eax + 0x540;
    if (CMP_LE(ecx, edx)) goto loc_000691C0; /* jle: less or equal (signed <=) */

loc_000692DE: ;
    MEM32(esp + 0x18) = ecx;

loc_000692E2: ;
    if (CMP_G(ecx, MEM32(esp + 0x28))) goto loc_00069369; /* jg: greater (signed >) */

loc_000692EC: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x40);
    eax = ecx;
    edx = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    edx = edx - edi;
    edx = esp + edx * 4 + 0x70;
    MEM32(esp + 0x30) = edx;
    goto loc_00069310;

    /* nop */

loc_00069310: ;
    edi = MEM32(0x8471B8);
    SET_LO8(ebx, MEM8(eax + edi + 0xC3));
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax + edi + 0xC3) = LO8(ebx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    ebx = MEM32(esp + 0x30);
    ebx = MEM32(ebx);
    MEM16(edi + edx * 8) = LO16(ecx);
    edx = ZX16(MEM16(ebp));
    edi = MEM32(esi);
    edi = MEM32(edi);
    MEM32(edi + edx * 8 + 4) = ebx;
    MEM16(ebp) = MEM16(ebp) + 1;
    ebx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x28);
    ecx++;
    ebx = ebx + 4;
    eax = eax + 0x150;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = ebx;
    if (CMP_LE(ecx, edx)) goto loc_00069310; /* jle: less or equal (signed <=) */

loc_00069365: ;
    MEM32(esp + 0x18) = ecx;

loc_00069369: ;
    ecx = MEM32(esp + 0x18);
    if (CMP_L(ecx, MEM32(0x76FD10))) goto loc_00068DA0; /* jl: less (signed <) */

loc_00069379: ;
    ebx = MEM32(esp + 0x14);

loc_0006937D: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = ecx + 0x770;
    eax = eax + 0x2B0;
    ebp = ebp + 2;
    ebx++;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(0x84A144);
    MEM32(esp + 0x38) = eax;
    esi = esi + 4;
    eax = ebx + -239;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x20) = esi;
    if (CMP_LE(eax, ecx)) goto loc_00068D50; /* jle: less or equal (signed <=) */

loc_000693BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000693BF: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_000693D0
 * Original: 0x000693D0 - 0x00069438 (104 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000693D0: ;
    ecx = MEM32(0x76FD10);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00069437; /* jle: less or equal (signed <=) */

loc_000693DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8471B8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    goto loc_000693F0;

    /* nop */
    /* nop */

loc_000693F0: ;
    MEM8(eax + ecx + 0xC3) = MEM8(eax + ecx + 0xC3) & 0xBF;
    ecx = MEM32(0x8471B8);
    (void)0; /* test MEM8(eax + ecx + 0xC3), 0xF - flags set for next jcc */
    edx = eax + ecx + 0xC3;
    if (TEST_NZ(MEM8(eax + ecx + 0xC3), 0xF)) goto loc_00069419; /* jne: not equal / not zero */

loc_0006940F: ;
    if (TEST_Z(MEM8(eax + ecx + 0xC4), 4)) goto loc_0006942D; /* je: equal / zero */

loc_00069419: ;
    edi = MEM32(eax + ecx + 0x88);
    if (TEST_Z(edi, edi)) goto loc_0006942D; /* je: equal / zero */

loc_00069424: ;
    MEM8(edx) = MEM8(edx) | 0x40;
    ecx = MEM32(0x8471B8);

loc_0006942D: ;
    eax = eax + 0x150;
    esi--;
    if ((esi != 0)) goto loc_000693F0; /* jne: not equal / not zero */

loc_00069435: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00069437: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069440
 * Original: 0x00069440 - 0x000695EF (431 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00069440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    eax = MEM32(0x76FD10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_000695E8; /* jle: less or equal (signed <=) */

loc_00069459: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = eax;
    goto loc_00069470;

    /* nop */
    /* nop */

loc_00069470: ;
    eax = MEM32(0x8471B8);
    ebx = ebx + eax;
    if (CMP_EQ(MEM8(ebx + 0xC2), 1)) goto loc_000695CB; /* je: equal / zero */

loc_00069484: ;
    SET_LO8(eax, MEM8(ebx + 0x9E));
    if (CMP_EQ(LO8(eax), 3)) goto loc_000695CB; /* je: equal / zero */

loc_00069492: ;
    if (CMP_AE(LO8(eax), 3)) goto loc_000694A4; /* jae: above or equal (unsigned >=) */

loc_00069494: ;
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    edx = ebx;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_0006949F: ;
    goto loc_000695C8;

loc_000694A4: ;
    if (CMP_BE(LO8(eax), 0x64)) goto loc_000695CB; /* jbe: below or equal (unsigned <=) */

loc_000694AC: ;
    if (CMP_AE(LO8(eax), 0xE4)) goto loc_000695CB; /* jae: above or equal (unsigned >=) */

loc_000694B4: ;
    edx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = eax - 0x64;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    edx = MEM32(eax + 0x3C8);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = 0x5A0350;
    ecx = 0x10;
    if (TEST_NZ(edx, edx)) goto loc_00069535; /* jne: not equal / not zero */

loc_000694DC: ;
    xmm0 = MEMF(ebx + 0x84); /* movss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm2 = MEMF(ebx + 0x7C); /* movss */
    ebx = ebx + 0x20;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx) = xmm2; /* movss */
    MEMF(ebx + 0x14) = xmm1; /* movss */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    edx = MEM32(eax + 0x78);
    xmm0 = MEMF(eax + 0x80); /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    MEM32(ebx + 0x30) = edx;
    MEMF(ebx + 0x34) = xmm1; /* movss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    goto loc_000695CB;

loc_00069535: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x196);
    xmm1 = MEMF(ebx + 0x84); /* movss */
    xmm2 = MEMF(ebx + 0x80); /* movss */
    xmm3 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ebx + 0x20;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(eax + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 0x14) = xmm2; /* movss */
    xmm1 = MEMF(edx + 0x30); /* movss */
    xmm2 = MEMF(edx + 0x34); /* movss */
    xmm3 = MEMF(edx + 0x38); /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    ecx = eax;
    MEMF(eax + 0x34) = xmm2; /* movss */
    MEMF(eax + 0x38) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_000695A1: ;
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm1 = MEMF(eax + 0x34); /* movss */
    xmm2 = MEMF(eax + 0x38); /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = (int32_t)xmm2; /* cvttss2si */
    MEM16(ebx + 0x14) = LO16(ecx);
    MEM16(ebx + 0x16) = LO16(edx);
    MEM16(ebx + 0x18) = LO16(eax);

loc_000695C8: ;
    esp = esp + 4;

loc_000695CB: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ebx = ebx + 0x150;
    eax--;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_00069470; /* jne: not equal / not zero */

loc_000695E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000695F0
 * Original: 0x000695F0 - 0x00069615 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000695F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000695F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(eax, ecx)) { sub_00069615(); return; } /* jne: not equal / not zero */

loc_0006960C: ;
    ebx = 0x400;
    ebp = ebx;
    g_seh_ebp = ebp; sub_0006963B(); return; /* tail jmp 0x0006963B */

}

/**
 * sub_000696D0
 * Original: 0x000696D0 - 0x000696EB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000696D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000696D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ebx, ebx)) { sub_000696EB(); return; } /* jne: not equal / not zero */

loc_000696E1: ;
    MEM32(esp + 8) = 0x10;
    g_seh_ebp = ebp; sub_000696F9(); return; /* tail jmp 0x000696F9 */

}

/**
 * sub_00069850
 * Original: 0x00069850 - 0x0006A388 (2872 bytes, 708 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00069850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00069866: ;
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0xEE));
    if (CMP_AE(LO8(eax), 0xFF)) goto loc_0006987D; /* jae: above or equal (unsigned >=) */

loc_00069873: ;
    if (CMP_NE(MEM32(ebp + 0x14), 3)) goto loc_0006A381; /* jne: not equal / not zero */

loc_0006987D: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(esi + edi + 0xEF));
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_0006989A; /* jne: not equal / not zero */

loc_0006988C: ;
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_0006989A; /* jne: not equal / not zero */

loc_00069890: ;
    MEM32(esp + 0x10) = 0xFF;
    goto loc_000698C0;

loc_0006989A: ;
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x80808081u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_0006A381; /* je: equal / zero */

loc_000698C0: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x18);
    ebx = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    eax = ZX16(MEM16(eax + 0xC));
    MEM32(esp + 0x18) = edx;
    (void)0; /* cmp MEM32(esi + 0x60), ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esp + 0xF) = LO8(ebx);
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(MEM32(esi + 0x60), ebx)) goto loc_0006A381; /* je: equal / zero */

loc_000698F7: ;
    edx = MEM32(ebp + 0x14);
    if (CMP_NE(edx, 2)) goto loc_0006993B; /* jne: not equal / not zero */

loc_000698FF: ;
    PUSH32(esp, 0x5E0650);
    eax = ecx + 0x1C;
    PUSH32(esp, 0); sub_00068BF0(); /* call 0x00068BF0 */

loc_0006990C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00069923; /* je: equal / zero */

loc_00069910: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(0x8471B0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    eax = eax + ecx;
    MEM32(0x849478) = eax;

loc_00069923: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), 1)) goto loc_00069930; /* je: equal / zero */

loc_0006992B: ;
    MEM8(esp + 0xC) = 1;

loc_00069930: ;
    if (TEST_Z(LO8(eax), 0x22)) goto loc_0006998C; /* je: equal / zero */

loc_00069934: ;
    MEM8(esp + 0xF) = 1;
    goto loc_00069987;

loc_0006993B: ;
    if (CMP_NE(MEM32(esp + 0x10), 0xFF)) goto loc_00069971; /* jne: not equal / not zero */

loc_00069945: ;
    if (CMP_EQ(edx, 3)) goto loc_0006A381; /* je: equal / zero */

loc_0006994E: ;
    if (CMP_NE(MEM32(ebp + 0x10), ebx)) goto loc_00069962; /* jne: not equal / not zero */

loc_00069953: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0006A381; /* je: equal / zero */

loc_0006995B: ;
    MEM8(esp + 0xC) = 1;
    goto loc_0006999F;

loc_00069962: ;
    if (TEST_Z(LO8(eax), 0x22)) goto loc_0006A381; /* je: equal / zero */

loc_0006996A: ;
    MEM8(esp + 0xD) = 1;
    goto loc_0006999F;

loc_00069971: ;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_0006A381; /* je: equal / zero */

loc_0006997A: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00069983; /* je: equal / zero */

loc_0006997E: ;
    MEM8(esp + 0xC) = 1;

loc_00069983: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0006998C; /* je: equal / zero */

loc_00069987: ;
    MEM8(esp + 0xD) = 1;

loc_0006998C: ;
    if (CMP_NE(MEM8(esp + 0xC), LO8(ebx))) goto loc_0006999C; /* jne: not equal / not zero */

loc_00069992: ;
    if (CMP_EQ(MEM8(esp + 0xD), LO8(ebx))) goto loc_0006A381; /* je: equal / zero */

loc_0006999C: ;
    edx = MEM32(ebp + 0x14);

loc_0006999F: ;
    if (CMP_NE(edx, 3)) goto loc_000699FC; /* jne: not equal / not zero */

loc_000699A4: ;
    ecx = MEM32(0x7F9F60);
    ecx++;
    MEM32(0x7FDD50) = ecx;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000699C0: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000699D9: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000699F2: ;
    MEM32(0x549AF4) = 0x303;

loc_000699FC: ;
    (void)0; /* test MEM8(esi + 0x9F), 2 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x76FD09));
    if (TEST_Z(MEM8(esi + 0x9F), 2)) goto loc_00069A4D; /* je: equal / zero */

loc_00069A0A: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00069A16; /* je: equal / zero */

loc_00069A0E: ;
    if (CMP_EQ(MEM8(0x76FD08), LO8(ebx))) goto loc_00069A77; /* je: equal / zero */

loc_00069A16: ;
    edx = edi + edi * 2;
    eax = edx * 4 + 0x76F6F8;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x76F614));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x76F615));
    PUSH32(esp, eax);
    eax = MEM32(edi * 4 + 0x76F728);
    MEM8(0x76FD09) = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00128530(); /* call 0x00128530 */

loc_00069A48: ;
    esp = esp + 0x14;
    goto loc_00069A77;

loc_00069A4D: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00069A59; /* je: equal / zero */

loc_00069A51: ;
    if (CMP_EQ(MEM8(0x76FD08), LO8(ebx))) goto loc_00069A77; /* je: equal / zero */

loc_00069A59: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = edi;
    MEM8(0x76FD09) = LO8(ebx);
    xmm5 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_00128930(); /* call 0x00128930 */

loc_00069A77: ;
    ecx = MEM32(0x6B888C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00069A83: ;
    eax = MEM32(esp + 0x1C);
    edx = esp + 0xE;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E063C);
    eax = eax + 0x1C;
    MEM8(esp + 0x16) = LO8(ebx);
    PUSH32(esp, 0); sub_0006B440(); /* call 0x0006B440 */

loc_00069A9D: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 2)) goto loc_00069B60; /* je: equal / zero */

loc_00069AA7: ;
    if (CMP_NE(MEM8(esp + 0xE), LO8(ebx))) goto loc_00069B60; /* jne: not equal / not zero */

loc_00069AB1: ;
    eax = MEM32(0x81B7C0);
    eax = eax & 0x80000000u;
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    MEM32(0x81B7C0) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax++;
    MEM8(esp + 0x12) = 1;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_00130DF0(); /* call 0x00130DF0 */

loc_00069B0D: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00069DA0; /* jne: not equal / not zero */

loc_00069B18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    PUSH32(esp, ebx);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esp = esp - 0xC;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001254A0(); /* call 0x001254A0 */

loc_00069B58: ;
    esp = esp + 0x44;
    goto loc_00069DA5;

loc_00069B60: ;
    MEM8(esp + 0xE) = LO8(ebx);
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_00069B69: ;
    eax = MEM32(0x81B7C0);
    ecx = MEM32(0x5A02CC);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x5A02D0);
    xmm1 = MEMF(0x648D14); /* movss */
    eax = eax & 0x80000000u;
    MEM32(0x81B7C0) = eax;
    eax = MEM32(0x5A02D4);
    MEM32(esp + 0x68) = ecx;
    ecx = esp + 0x40;
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEM32(esp + 0x48) = 0xA;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00069BE7: ;
    PUSH32(esp, 0); sub_00124840(); /* call 0x00124840 */

loc_00069BEC: ;
    edx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x76F618);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    PUSH32(esp, 5);
    eax = ecx + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x76F614);
    ecx = edi + edi * 2;
    edx = ecx * 4 + 0x76F6F8;
    ecx = ZX8(MEM8(0x76F615));
    PUSH32(esp, edx);
    edx = MEM32(edi * 4 + 0x76F728);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x338);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x334);
    eax = MEM32(eax + 0x330);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00127B60(); /* call 0x00127B60 */

loc_00069C44: ;
    esp = esp + 0x38;

loc_00069C47: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F5384);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00069C5B: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 8;
    MEM32(edx + 0x50) = 0x6B8ED4;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_00069C6E: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(0x74FB30) = xmm0; /* movss */
    MEMF(0x74FB34) = xmm0; /* movss */
    MEMF(0x74FB38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x74FB3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_00069CA3: ;
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_00069CA8: ;
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_00069CCB: ;
    if (CMP_NE(MEM8(esp + 0xE), LO8(ebx))) goto loc_00069CED; /* jne: not equal / not zero */

loc_00069CD1: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_00069CEA: ;
    esp = esp + 4;

loc_00069CED: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0x10)) goto loc_00069CFD; /* jne: not equal / not zero */

loc_00069CF3: ;
    eax = MEM32(0x847194);
    MEM32(0x84B7D0) = eax;

loc_00069CFD: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esi + 0x64);
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0x10) = eax;
    (void)0; /* cmp MEM8(esp + 0xC), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(MEM8(esp + 0xC), LO8(ebx))) goto loc_0006A038; /* je: equal / zero */

loc_00069D1E: ;
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_00069D2D: ;
    edx = MEM32(0x81B7C0);
    ecx = MEM32(0x5499F0);
    edx = edx & 0x80000000u;
    ecx = ecx | 0x2000;
    MEM32(0x81B7C0) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x5499F0) = ecx;
    ecx = esp + 0xC;
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    MEM32(0x549B68) = ebx;
    MEM32(0x81BE48) = ebx;
    eax = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = 2;
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0); sub_00084260(); /* call 0x00084260 */

loc_00069D87: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00069DF7; /* je: equal / zero */

loc_00069D8E: ;
    eax = MEM32(esp + 0x10);
    MEM8(0x76FFFE) = 1;
    MEM32(0x770000) = eax;
    goto loc_00069DFD;

loc_00069DA0: ;
    PUSH32(esp, 0); sub_00124F90(); /* call 0x00124F90 */

loc_00069DA5: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA0));
    SET_LO16(esi, MEM16(esi + 0xA2));
    (void)0; /* cmp LO16(eax), LO16(esi) - flags set for next jcc */
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x34);
    if (CMP_BE(LO16(eax), LO16(esi))) eax = esi; /* cmovbe */
    edx = ZX16(LO16(eax));
    eax = esp + 0x38;
    PUSH32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_00069DEF: ;
    esp = esp + 0x10;
    goto loc_00069C47;

loc_00069DF7: ;
    MEM8(0x76FFFE) = LO8(ebx);

loc_00069DFD: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0012E2C0(); /* call 0x0012E2C0 */

loc_00069E05: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00069EBF; /* je: equal / zero */

loc_00069E0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00069E13: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069E34: ;
    MEM32(0x7FA020) = MEM32(0x7FA020) + 1;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x549AE8) = ebx;
    MEM8(0x819FE8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069E56: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = edi;
    ecx = MEM32(edi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_00069E84; /* je: equal / zero */

loc_00069E7F: ;
    MEM32(0x84B854) = eax;

loc_00069E84: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + -16);
    PUSH32(esp, 4);
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE50) = ebx;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_00069E9D: ;
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00069EAE: ;
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00069EB9: ;
    MEM8(0x819FE8) = LO8(ebx);

loc_00069EBF: ;
    if (CMP_EQ(MEM8(esp + 0xC), LO8(ebx))) goto loc_00069ED1; /* je: equal / zero */

loc_00069EC5: ;
    MEM32(0x84B824) = ebx;
    MEM32(0x84B828) = ebx;

loc_00069ED1: ;
    edx = MEM32(0x76FCE8);
    ecx = MEM32(0x76FCE4);
    SET_LO8(eax, MEM8(esp + 0xE));
    edx++;
    ecx++;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x76FCE8) = edx;
    MEM32(0x76FCE4) = ecx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00069F6D; /* je: equal / zero */

loc_00069EF3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA0));
    SET_LO16(esi, MEM16(esi + 0xA2));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x28);
    (void)0; /* cmp LO16(eax), LO16(esi) - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (CMP_BE(LO16(eax), LO16(esi))) eax = esi; /* cmovbe */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = edx;
    edx = ZX16(LO16(eax));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_00069F6A: ;
    esp = esp + 0x10;

loc_00069F6D: ;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069F83: ;
    PUSH32(esp, 1);
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00069F90: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069F9F: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069FB8: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00069FD1: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    ecx = 0; /* xor self */
    MEM32(0x549B1C) = 0xFF;
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0); sub_0006B400(); /* call 0x0006B400 */

loc_00069FF3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    esi = edi;
    edi = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0006A002: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esp = esp + 0x10;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0006A019; /* je: equal / zero */

loc_0006A00D: ;
    MEM32(0x84B824) = ebx;
    MEM32(0x84B828) = ebx;

loc_0006A019: ;
    ecx = MEM32(0x76FCE8);
    eax = MEM32(0x76FCDC);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    ecx++;
    eax++;
    MEM32(0x76FCE8) = ecx;
    MEM32(0x76FCDC) = eax;

loc_0006A038: ;
    if (CMP_EQ(MEM8(esp + 0xD), LO8(ebx))) goto loc_0006A2D8; /* je: equal / zero */

loc_0006A042: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + 0x24);
    if (TEST_NZ(MEM8(ecx + 0xC), 1)) goto loc_0006A180; /* jne: not equal / not zero */

loc_0006A052: ;
    edx = MEM32(0x6B888C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0006A05E: ;
    eax = 0; /* xor self */
    ecx = 0x75DB04;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_0006A06A: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_0006A077: ;
    eax = MEM32(0x6B888C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0006A082: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0006A08E: ;
    PUSH32(esp, esi);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0006A099: ;
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0006A0A4: ;
    PUSH32(esp, esi);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0006A0AF: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    ecx = ecx | 4;
    MEM32(0x547430) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547434) = eax;
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_0006A0DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0006A0E2: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A106: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esp + 0x12;
    ecx = 2;
    MEM32(0x549AE8) = ebx;
    MEM8(esp + 0x12) = LO8(ebx);
    PUSH32(esp, 0); sub_0006B400(); /* call 0x0006B400 */

loc_0006A127: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    esi = edi;
    edi = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    MEM8(0x819FE8) = 1;
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0006A13D: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    esp = esp + 0x10;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x819FE8) = LO8(ebx);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0006A15A; /* je: equal / zero */

loc_0006A14E: ;
    MEM32(0x84B824) = ebx;
    MEM32(0x84B828) = ebx;

loc_0006A15A: ;
    ecx = MEM32(0x76FCE8);
    eax = MEM32(0x76FCE4);
    edi = MEM32(esp + 0x1C);
    ecx++;
    eax++;
    MEM32(0x81BD70) = 0x3F0270;
    MEM32(0x76FCE8) = ecx;
    MEM32(0x76FCE4) = eax;

loc_0006A180: ;
    MEM32(0x81B7C0) = MEM32(0x81B7C0) & 0x80000000u;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A1A2: ;
    PUSH32(esp, 1);
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0006A1AF: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A1BE: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A1D7: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A1F0: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x11;
    ecx = 1;
    MEM32(0x549B1C) = 0xF;
    MEM8(esp + 0x11) = LO8(ebx);
    PUSH32(esp, 0); sub_0006B400(); /* call 0x0006B400 */

loc_0006A215: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    esp = esp + 4;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0006A239; /* je: equal / zero */

loc_0006A220: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006A22F: ;
    MEM32(0x549AF8) = 1;

loc_0006A239: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    esi = edi;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0006A249: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0006A260; /* je: equal / zero */

loc_0006A254: ;
    MEM32(0x84B824) = ebx;
    MEM32(0x84B828) = ebx;

loc_0006A260: ;
    esi = MEM32(0x76FCE8);
    edx = MEM32(0x76FCE0);
    eax = MEM32(esp + 0x20);
    esi++;
    edx++;
    PUSH32(esp, eax);
    MEM32(0x76FCE8) = esi;
    esi = MEM32(esp + 0x14);
    eax = esp + 0x11;
    ecx = 4;
    MEM32(0x76FCE0) = edx;
    MEM8(esp + 0x11) = LO8(ebx);
    PUSH32(esp, 0); sub_0006B400(); /* call 0x0006B400 */

loc_0006A295: ;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_0006A2A6: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    esp = esp + 0x10;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0006A2BD; /* je: equal / zero */

loc_0006A2B1: ;
    MEM32(0x84B824) = ebx;
    MEM32(0x84B828) = ebx;

loc_0006A2BD: ;
    ecx = MEM32(0x76FCE8);
    eax = MEM32(0x76FCE0);
    esi = MEM32(ebp + 8);
    ecx++;
    eax++;
    MEM32(0x76FCE8) = ecx;
    MEM32(0x76FCE0) = eax;

loc_0006A2D8: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x2000;
    MEM32(0x84B7D0) = ebx;
    MEM32(0x7502EC) = ebx;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_0006A301: ;
    (void)0; /* cmp MEM32(0x76FCD8), ebx - flags set for next jcc */
    MEM32(0x81BE44) = ebx;
    if (CMP_EQ(MEM32(0x76FCD8), ebx)) goto loc_0006A376; /* je: equal / zero */

loc_0006A30F: ;
    SET_LO8(ecx, MEM8(esi + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_0006A376; /* je: equal / zero */

loc_0006A31D: ;
    edx = MEM32(esi + 0x60);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(MEM32(ecx + 0x14), ebx)) goto loc_0006A376; /* je: equal / zero */

loc_0006A32B: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + edx + 0x40;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006A34D: ;
    edx = MEM32(esi + 0x140);
    MEM32(0x812A18) = edx;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, 0x5A0350);
    edx = esp + 0x44;
    PUSH32(esp, 0); sub_003D67F0(); /* call 0x003D67F0 */

loc_0006A373: ;
    esp = esp + 4;

loc_0006A376: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0006A37C: ;
    PUSH32(esp, 0); sub_001C6D90(); /* call 0x001C6D90 */

loc_0006A381: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A390
 * Original: 0x0006A390 - 0x0006A552 (450 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A390: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(0x76FD10);
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(edi, esi)) goto loc_0006A404; /* jle: less or equal (signed <=) */

loc_0006A3B3: ;
    goto loc_0006A3C0;

    /* nop */
    /* nop */

loc_0006A3C0: ;
    eax = MEM32(0x8471B8);
    ebx = esi + eax;
    if (TEST_Z(MEM8(ebx + 0xC3), 0x40)) goto loc_0006A3E7; /* je: equal / zero */

loc_0006A3D1: ;
    SET_LO8(eax, MEM8(ebx + 0xC2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006A3E7; /* jne: not equal / not zero */

loc_0006A3DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x88), _icall_esp); /* indirect call */
    }

loc_0006A3E2: ;
    esp = esp + 4;
    goto loc_0006A3F1;

loc_0006A3E7: ;
    SET_LO8(eax, MEM8(ebx + 0xC9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006A3FB; /* je: equal / zero */

loc_0006A3F1: ;
    PUSH32(esp, 0x870EE0);
    PUSH32(esp, 0); sub_0006B4B0(); /* call 0x0006B4B0 */

loc_0006A3FB: ;
    esi = esi + 0x150;
    edi--;
    if ((edi != 0)) goto loc_0006A3C0; /* jne: not equal / not zero */

loc_0006A404: ;
    eax = MEM32(0x84B104);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0006A546; /* jle: less or equal (signed <=) */

loc_0006A419: ;
    eax = MEM32(0x84B100);
    ebx = 0; /* xor self */
    ebp = 4;
    goto loc_0006A430;

    /* nop */
    edi = edi;

loc_0006A430: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + eax + 8));
    ecx = ecx & 0xF000;
    if (CMP_NE(ecx, 0x2000)) goto loc_0006A529; /* jne: not equal / not zero */

loc_0006A449: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + eax + 2), LO16(edi))) goto loc_0006A529; /* jbe: below or equal (unsigned <=) */

loc_0006A456: ;
    esi = 0; /* xor self */
    edx = edi + ebp;
    SET_LO16(esi, MEM16(eax + edx * 2));
    ecx = esi;
    ecx = ecx & 0xF000;
    if (CMP_NE(ecx, 0x2000)) goto loc_0006A51B; /* jne: not equal / not zero */

loc_0006A473: ;
    ecx = MEM32(0x76FD10);
    esi = esi & 0xFFF;
    if (CMP_GE(esi, ecx)) goto loc_0006A550; /* jge: greater or equal (signed >=) */

loc_0006A487: ;
    edx = MEM32(0x8471B8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x150);
    SET_LO8(ecx, MEM8(esi + edx + 0xC3));
    esi = esi + edx;
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_0006A4EC; /* je: equal / zero */

loc_0006A4A1: ;
    SET_LO8(ecx, MEM8(esi + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0006A4EC; /* jne: not equal / not zero */

loc_0006A4AB: ;
    if (TEST_Z(edi, edi)) goto loc_0006A4DD; /* je: equal / zero */

loc_0006A4AF: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    SET_LO16(eax, MEM16(esp + 0x14));
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(esi + 0xAC) = LO16(edx);
    edx = MEM32(esp + 0x1C);
    MEM16(esi + 0xAE) = LO16(eax);
    MEM16(esi + 0xB0) = LO16(ecx);
    MEM32(esi + 0xDC) = edx;

loc_0006A4DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x88), _icall_esp); /* indirect call */
    }

loc_0006A4E4: ;
    eax = MEM32(0x84B100);
    esp = esp + 4;

loc_0006A4EC: ;
    if (TEST_NZ(edi, edi)) goto loc_0006A51B; /* jne: not equal / not zero */

loc_0006A4F0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xAE);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xB0);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0xDC);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_0006A51B: ;
    ecx = ZX16(MEM16(ebx + eax + 2));
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0006A456; /* jl: less (signed <) */

loc_0006A529: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(0x84B104);
    ecx++;
    ebp = ebp + 0xC;
    ebx = ebx + 0x18;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0006A430; /* jl: less (signed <) */

loc_0006A546: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0006A550: ;
    goto loc_0006A550;

}

/**
 * sub_0006A560
 * Original: 0x0006A560 - 0x0006A5A0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A560(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006A560: ;
    SET_LO8(edx, MEM8(eax + 0x9F));
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) { sub_0006A5A0(); return; } /* jns: not sign (positive) */

loc_0006A56A: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0006A59A; /* je: equal / zero */

loc_0006A56F: ;
    eax = eax - MEM32(0x8471B8);
    edx = eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(0x8471B4);
    if (TEST_Z(MEM32(ecx + eax * 4), edx)) { sub_0006A5A0(); return; } /* je: equal / zero */

loc_0006A59A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A5B0
 * Original: 0x0006A5B0 - 0x0006A5F4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006A5B0: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_0006A5F1; /* jns: not sign (positive) */

loc_0006A5BA: ;
    eax = eax - MEM32(0x8471B8);
    edx = eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    ecx = 0; /* xor self */
    eax = eax + edx;
    edx = MEM32(0x8471B4);
    eax = MEM32(edx + eax * 4);
    edi = edi;

loc_0006A5E0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(eax, edx)) { sub_0006A5F4(); return; } /* jne: not equal / not zero */

loc_0006A5EB: ;
    ecx++;
    if (CMP_L(ecx, 0x20)) goto loc_0006A5E0; /* jl: less (signed <) */

loc_0006A5F1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A600
 * Original: 0x0006A600 - 0x0006A71E (286 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A600: ;
    ecx = MEM32(0x76FD10);
    esp = esp - 8;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx, eax)) goto loc_0006A719; /* jle: less or equal (signed <=) */

loc_0006A616: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8471B4);
    ebx = 0xD4;

loc_0006A624: ;
    if (CMP_EQ(MEM32(esi + edi * 4), eax)) goto loc_0006A701; /* je: equal / zero */

loc_0006A62D: ;
    edx = MEM32(0x8471B8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    goto loc_0006A640;

    /* nop */

loc_0006A640: ;
    ebp = MEM32(esi + edi * 4);
    if (TEST_Z(ebp, ebp)) goto loc_0006A6F4; /* je: equal / zero */

loc_0006A64B: ;
    ecx = MEM32(esp + 0x14);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(eax, ebp)) goto loc_0006A6D8; /* je: equal / zero */

loc_0006A65A: ;
    edx = ebp;
    edx = edx ^ eax;
    MEM32(esi + edi * 4) = edx;
    edx = MEM32(0x8471B8);
    eax = MEM32(ebx + edx);
    if (TEST_Z(eax, eax)) goto loc_0006A6AA; /* je: equal / zero */

loc_0006A66E: ;
    SET_LO8(ecx, MEM8(ebx + edx + 0x22));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0006A68A; /* jne: not equal / not zero */

loc_0006A676: ;
    ecx = MEM32(0x84A5F8);
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(MEM8(esi + ecx + 0x236), 0xFF)) goto loc_0006A6AA; /* je: equal / zero */

loc_0006A68A: ;
    esi = MEM32(0x84A5F8);
    ecx = MEM32(esp + 0x10);
    ecx = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ebx + edx + -212;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0006A6A1: ;
    edx = MEM32(0x8471B8);
    esp = esp + 8;

loc_0006A6AA: ;
    SET_LO8(eax, MEM8(ebx + edx + -53));
    if (TEST_Z(LO8(eax), 4)) goto loc_0006A6D2; /* je: equal / zero */

loc_0006A6B2: ;
    if (TEST_NZ(LO8(eax), 8)) goto loc_0006A6D2; /* jne: not equal / not zero */

loc_0006A6B6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    esi = eax + ecx;
    PUSH32(esp, 0); sub_0006ABC0(); /* call 0x0006ABC0 */

loc_0006A6C9: ;
    edx = MEM32(0x8471B8);
    esp = esp + 4;

loc_0006A6D2: ;
    esi = MEM32(0x8471B4);

loc_0006A6D8: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x6D0;
    (void)0; /* cmp eax, 0xDA00 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 0xDA00)) goto loc_0006A640; /* jl: less (signed <) */

loc_0006A6F4: ;
    MEM8(ebx + edx + -53) = MEM8(ebx + edx + -53) & 0x73;
    esi = MEM32(0x8471B4);
    eax = 0; /* xor self */

loc_0006A701: ;
    ecx = MEM32(0x76FD10);
    edi++;
    ebx = ebx + 0x150;
    if (CMP_L(edi, ecx)) goto loc_0006A624; /* jl: less (signed <) */

loc_0006A716: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006A719: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A720
 * Original: 0x0006A720 - 0x0006ABC0 (1184 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0006A720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    ecx = MEM32(0x8471B8);
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x150);
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x18);
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx + 0x16);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    edx = esi + ecx + 4;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0006A891; /* jnp: not parity */

loc_0006A7D9: ;
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = esp + 0x54;
    xmm5 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006A7E8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006A81A: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006A864: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(0x8471B8);
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */

loc_0006A891: ;
    xmm0 = MEMF(esi + ecx + 0xC); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006A97F; /* jnp: not parity */

loc_0006A8A4: ;
    ecx = MEM32(esi + ecx + 0xC);
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006A8C4: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 4;
    edx = eax;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006A8FD: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006A952: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(0x8471B8);
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */

loc_0006A97F: ;
    xmm0 = MEMF(esi + ecx + 8); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006AA6F; /* jnp: not parity */

loc_0006A992: ;
    edx = MEM32(esi + ecx + 8);
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006A9B2: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    esp = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006A9E9: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006AA45: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(0x8471B8);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */

loc_0006AA6F: ;
    eax = MEM32(esi + ecx + 0xB4);
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006AA92: ;
    ecx = MEM32(0x8471B8);
    edx = MEM32(esi + ecx + 0xBC);
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006AABE: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006AACF: ;
    eax = MEM32(0x8471B8);
    ecx = MEM32(esi + eax + 0xB8);
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x94;
    PUSH32(esp, 0); sub_0029C040(); /* call 0x0029C040 */

loc_0006AAFA: ;
    esp = esp + 4;
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006AB0D: ;
    xmm4 = MEMF(esp + 0x48); /* movss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0006AB45: ;
    eax = MEM32(0x8471B8);
    edx = (uint32_t)(int32_t)SMEM16(esi + eax + 0xAE);
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax + 0xB0);
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(esp + 8); /* movss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + eax + 0xAC);
    eax = MEM32(ebp + 8);
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(ebx); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(ebx) = xmm2; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006ABC0
 * Original: 0x0006ABC0 - 0x0006AC8D (205 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ABC0(void)
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

loc_0006ABC0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_0006AC8B; /* je: equal / zero */

loc_0006ABCD: ;
    if (CMP_GE(ebp, MEM32(0x76FD10))) goto loc_0006AC8B; /* jge: greater or equal (signed >=) */

loc_0006ABD9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x78;
    PUSH32(esp, eax);
    edi = esi + 0x80;
    ebx = esi + 0x7C;
    eax = ebp;
    PUSH32(esp, 0); sub_0006A720(); /* call 0x0006A720 */

loc_0006ABEF: ;
    xmm0 = MEMF(0x648F40); /* movss */
    xmm1 = MEMF(0x648F3C); /* movss */
    esp = esp + 4;
    (void)0; /* cmp MEM16(esi + 0x60), 0 - flags set for next jcc */
    POP32(esp, edi);
    MEMF(esi + 0x2E0) = xmm0; /* movss */
    MEMF(esi + 0x2E4) = xmm0; /* movss */
    MEMF(esi + 0x2E8) = xmm0; /* movss */
    MEMF(esi + 0x2EC) = xmm1; /* movss */
    MEMF(esi + 0x2F0) = xmm0; /* movss */
    MEMF(esi + 0x2F4) = xmm0; /* movss */
    MEMF(esi + 0x2F8) = xmm1; /* movss */
    MEMF(esi + 0x2FC) = xmm0; /* movss */
    MEMF(esi + 0x300) = xmm1; /* movss */
    POP32(esp, ebx);
    if (CMP_NE(MEM16(esi + 0x60), 0)) goto loc_0006AC66; /* jne: not equal / not zero */

loc_0006AC53: ;
    eax = MEM32(0x8496E8);
    if (TEST_Z(eax, eax)) goto loc_0006AC66; /* je: equal / zero */

loc_0006AC5C: ;
    MEM32(eax + 0xC08) = 1;

loc_0006AC66: ;
    ecx = MEM32(0x8471B8);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x150);
    fp_push(MEMF(ecx + ebp + 0xB8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0006AC84: ;
    MEM16(esi + 0x170) = MEM16(esi + 0x170) + LO16(eax);

loc_0006AC8B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006AC90
 * Original: 0x0006AC90 - 0x0006AD26 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC90(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm5;

loc_0006AC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    xmm0 = MEMF(edx + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0006ACCE: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0006AD13: ;
    esp = esp + 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006AD22: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AD30
 * Original: 0x0006AD30 - 0x0006ADCA (154 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD30(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2;

loc_0006AD30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_0006AC90(); /* call 0x0006AC90 */

loc_0006AD46: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x16);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edx + 0x1C); /* addss */
    MEMF(ebx + 0x34) = xmm0; /* movss */
    MEMF(ebx + 0x38) = xmm1; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0x30) = xmm2; /* movss */
    xmm0 = MEMF(edx + 0x7C); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x84); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006ADC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006ADD0
 * Original: 0x0006ADD0 - 0x0006AE04 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ADD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006ADD0: ;
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0006AE03; /* je: equal / zero */

loc_0006ADD6: ;
    PUSH32(esp, esi);
    esi = MEM32(0x76FD10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_0006ADFF; /* jle: less or equal (signed <=) */

loc_0006ADE2: ;
    edi = MEM32(0x8471B8);
    ecx = edi + 0xC6;
    edi = edi;

loc_0006ADF0: ;
    if (CMP_EQ(MEM8(ecx), LO8(edx))) { sub_0006AE04(); return; } /* je: equal / zero */

loc_0006ADF4: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, esi)) goto loc_0006ADF0; /* jl: less (signed <) */

loc_0006ADFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */

loc_0006AE03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006AE10
 * Original: 0x0006AE10 - 0x0006AEBD (173 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006AE10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x76FD10);
    if (CMP_AE(edi, eax)) goto loc_0006AE6A; /* jae: above or equal (unsigned >=) */

loc_0006AE1D: ;
    ecx = MEM32(0x8471B8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x150);
    esi = MEM32(edi + ecx + 0xF8);
    if (TEST_Z(esi, esi)) goto loc_0006AE54; /* je: equal / zero */

loc_0006AE34: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0006AE39: ;
    eax = MEM32(0x8471B8);
    MEM32(edi + eax + 0xF8) = 0;
    eax = MEM32(0x76FD10);
    ecx = MEM32(0x8471B8);

loc_0006AE54: ;
    MEM8(edi + ecx + 0xC4) = MEM8(edi + ecx + 0xC4) | 8;
    ecx = MEM32(0x8471B8);
    MEM8(edi + ecx + 0xC2) = 1;

loc_0006AE6A: ;
    edi = MEM32(0x76FD0C);
    esi = eax;
    esi = esi - edi;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax + -1;
    if (TEST_Z(eax, eax)) goto loc_0006AEBA; /* je: equal / zero */

loc_0006AE7B: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x150);
    PUSH32(esp, ebx);
    ebx = MEM32(0x8471B8);
    edx = edx + ebx + 0xC4;

loc_0006AE91: ;
    if (TEST_Z(MEM8(edx), 8)) goto loc_0006AEAE; /* je: equal / zero */

loc_0006AE96: ;
    if (CMP_B(ecx, esi)) goto loc_0006AEA1; /* jb: below (unsigned <) */

loc_0006AE9A: ;
    if (TEST_Z(edi, edi)) goto loc_0006AEA1; /* je: equal / zero */

loc_0006AE9E: ;
    edi--;
    goto loc_0006AEA2;

loc_0006AEA1: ;
    esi--;

loc_0006AEA2: ;
    eax--;
    ecx--;
    edx = edx - 0x150;
    if (TEST_NZ(eax, eax)) goto loc_0006AE91; /* jne: not equal / not zero */

loc_0006AEAE: ;
    MEM32(0x76FD10) = eax;
    MEM32(0x76FD0C) = edi;
    POP32(esp, ebx);

loc_0006AEBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AEC0
 * Original: 0x0006AEC0 - 0x0006B0F0 (560 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AEC0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x30);
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x847024);
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 1)) goto loc_0006AF35; /* je: equal / zero */

loc_0006AF07: ;
    eax = MEM32(ebp + 0xCC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0006AF35; /* je: equal / zero */

loc_0006AF12: ;
    if (TEST_S(eax, eax)) goto loc_0006AF2A; /* jl: less (signed <) */

loc_0006AF16: ;
    esi = MEM32(edx + 0x40);
    esi = MEM32(esi + 4);
    esi = MEM32(esi);
    eax = MEM32(esi + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0006AF2A; /* je: equal / zero */

loc_0006AF25: ;
    eax = MEM32(eax + 0x2C);
    goto loc_0006AF2D;

loc_0006AF2A: ;
    eax = eax | 0xFFFFFFFFu;

loc_0006AF2D: ;
    if (CMP_EQ(eax, ebx)) goto loc_0006B0E9; /* je: equal / zero */

loc_0006AF35: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(ebx & ebx, 0)) goto loc_0006AF8D; /* jg: greater (signed >) */

loc_0006AF3A: ;
    eax = MEM32(ebp + 0xCC);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebp + 0xCC;
    if (TEST_S(eax, eax)) goto loc_0006B0E8; /* jl: less (signed <) */

loc_0006AF4E: ;
    ecx = MEM32(edx + 0x40);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0006B0E8; /* je: equal / zero */

loc_0006AF61: ;
    esi = eax;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0006AF68: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006B0E8; /* je: equal / zero */

loc_0006AF70: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebp + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006AF85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0006AF8D: ;
    esi = ecx;
    esi = esi & 8;
    MEM32(esp + 0x10) = esi;
    if ((esi == 0)) goto loc_0006AFA2; /* je: equal / zero */

loc_0006AF98: ;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    goto loc_0006AFAC;

loc_0006AFA2: ;
    eax = MEM32(ebp + 0xCC);
    MEM32(esp + 0x30) = eax;

loc_0006AFAC: ;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    edi = esp + 0x30;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0006B013; /* je: equal / zero */

loc_0006AFB5: ;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0006AFDC; /* je: equal / zero */

loc_0006AFBA: ;
    ecx = MEM32(edx + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xD0);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006AFC9: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00024EB0(); /* call 0x00024EB0 */

loc_0006AFDA: ;
    goto loc_0006AFF3;

loc_0006AFDC: ;
    esi = MEM32(edx + 0x40);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xD0);
    PUSH32(esp, 0); sub_00024F20(); /* call 0x00024F20 */

loc_0006AFEF: ;
    esi = MEM32(esp + 0x10);

loc_0006AFF3: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 0xD0) = ebx;
    if (TEST_NZ(esi, esi)) goto loc_0006B0E8; /* jne: not equal / not zero */

loc_0006B001: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xCC) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0006B013: ;
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    edx = MEM32(edx + 0x40);
    if (TEST_Z(LO8(ecx), 2)) goto loc_0006B076; /* je: equal / zero */

loc_0006B01B: ;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0006B050; /* je: equal / zero */

loc_0006B020: ;
    ecx = MEM32(ebp + 0xD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006B02C: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00024EB0(); /* call 0x00024EB0 */

loc_0006B03C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xD0) = ebx;
    MEM32(ebp + 0xCC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0006B050: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xD0);
    esi = edx;
    PUSH32(esp, 0); sub_00024F20(); /* call 0x00024F20 */

loc_0006B062: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xD0) = ebx;
    MEM32(ebp + 0xCC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0006B076: ;
    ecx = MEM32(ebp + 0xD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006B082: ;
    if (TEST_NZ(MEM8(esp + 0x38), 0x10)) goto loc_0006B02C; /* jne: not equal / not zero */

loc_0006B089: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = ebp;
    ecx = ebx;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0006B0DC: ;
    MEM32(ebp + 0xCC) = eax;
    MEM32(ebp + 0xD0) = ebx;

loc_0006B0E8: ;
    POP32(esp, edi);

loc_0006B0E9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0006B0F0
 * Original: 0x0006B0F0 - 0x0006B15A (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B0F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;

loc_0006B0F0: ;
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x14) = 0;
    if (TEST_NZ(eax, eax)) goto loc_0006B122; /* jne: not equal / not zero */

loc_0006B11E: ;
    eax = esp + 0x14;

loc_0006B122: ;
    ecx = MEM32(0x84A13C);
    xmm2 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edi = eax + ecx + 0x148;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_0006B149: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_0006B15A(); return; } /* jne: not equal / not zero */

loc_0006B152: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0006B180
 * Original: 0x0006B180 - 0x0006B24B (203 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B180(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0006B180: ;
    esp = esp - 0x20;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(eax + ecx + 0xB8); /* movss */
    xmm1 = MEMF(eax + ecx + 0xB4); /* movss */
    xmm2 = MEMF(eax + ecx + 0xB0); /* movss */
    eax = eax + ecx + 0x80;
    edx = esp + 8;
    eax = esp + 0x14;
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
    MEM32(esp + 4) = ecx;
    edx = MEM32(esp + 4);
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
    MEMF(esp) = xmm1; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    xmm1 = MEMF(0x648D24); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0006B247; /* ja: above (unsigned >) */

loc_0006B244: ;
    xmm0 = xmm1; /* movaps */

loc_0006B247: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0006B250
 * Original: 0x0006B250 - 0x0006B26C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B250(void)
{

loc_0006B250: ;
    edx = MEM32(eax + 0x60);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x24);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x64);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_00081E60(); /* call 0x00081E60 */

loc_0006B267: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B270
 * Original: 0x0006B270 - 0x0006B2C1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B270(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B270: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x60);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x140);
    MEM32(0x812A18) = edx;
    eax = MEM32(ecx + 0x10);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0006B299: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0006B2BF; /* je: equal / zero */

loc_0006B2A0: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_0006B2BF; /* je: equal / zero */

loc_0006B2A7: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0006B2BF; /* je: equal / zero */

loc_0006B2AE: ;
    edx = ZX8(MEM8(esp + 8));
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x812A18);
    MEM32(ecx + eax) = edx;

loc_0006B2BF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B2D0
 * Original: 0x0006B2D0 - 0x0006B3A3 (211 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B2D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x60);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 0x18);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x14);
    esi = MEM32(edi + 0x88);
    PUSH32(esp, 0x5E0650);
    eax = eax + 0x1C;
    ebp = edi + 0x64;
    PUSH32(esp, 0); sub_00068BF0(); /* call 0x00068BF0 */

loc_0006B301: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0006B3A3(); return; } /* je: equal / zero */

loc_0006B309: ;
    if (TEST_Z(esi, esi)) { sub_0006B3A3(); return; } /* je: equal / zero */

loc_0006B311: ;
    if (CMP_EQ(MEM32(ebp), 0)) { sub_0006B3A3(); return; } /* je: equal / zero */

loc_0006B31B: ;
    ebx = ebx + 8;
    esi = edi + 0x40;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_00067830(); /* call 0x00067830 */

loc_0006B329: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp);
    ecx = ZX8(MEM8(eax + 8));
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x30);
    eax = ZX16(MEM16(edx));
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    ecx = MEM32(0x8471B0);
    edi = edi + 0x70;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = eax + ecx;
    edi = esp + 0x1C;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_001C6E40(); /* call 0x001C6E40 */

loc_0006B381: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0006B3D0
 * Original: 0x0006B3D0 - 0x0006B3F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B3D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B3D0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0006B3E1; /* je: equal / zero */

loc_0006B3D7: ;
    PUSH32(esp, 0x870EE0);
    PUSH32(esp, 0); sub_0006B4B0(); /* call 0x0006B4B0 */

loc_0006B3E1: ;
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    edx = ebx;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_0006B3EC: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B400
 * Original: 0x0006B400 - 0x0006B42E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B400(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B400: ;
    edx = MEM32(esp + 4);
    MEM32(0x81BE48) = 0;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    edx = esi;
    PUSH32(esp, 0); sub_00084260(); /* call 0x00084260 */

loc_0006B419: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0006B42E(); return; } /* je: equal / zero */

loc_0006B420: ;
    MEM8(0x76FFFE) = 1;
    MEM32(0x770000) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0006B440
 * Original: 0x0006B440 - 0x0006B4A2 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B440: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_0006B510(); /* call 0x0006B510 */

loc_0006B45B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006B499; /* jne: not equal / not zero */

loc_0006B45F: ;
    edx = ebx;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_0006B466: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esi + 4);
    eax = eax + eax * 2;
    esi = ecx + eax * 4;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_0006B483: ;
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) { sub_0006B4A2(); return; } /* je: equal / zero */

loc_0006B48A: ;
    if (CMP_NE(MEM32(eax), edi)) { sub_0006B4A2(); return; } /* jne: not equal / not zero */

loc_0006B48E: ;
    ecx = MEM32(eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM8(ebp) = LO8(eax);

loc_0006B499: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006B4B0
 * Original: 0x0006B4B0 - 0x0006B508 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B4B0: ;
    eax = MEM32(ebx + 0x144);
    esp = esp - 0x20;
    if (TEST_Z(eax, eax)) goto loc_0006B502; /* je: equal / zero */

loc_0006B4BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    esi = esp + 8;
    PUSH32(esp, 0); sub_003540B0(); /* call 0x003540B0 */

loc_0006B4CA: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebx + 0x144);
    PUSH32(esp, edx);
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_0006B500: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0006B502: ;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B510
 * Original: 0x0006B510 - 0x0006B555 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B510(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0006B51A: ;
    ebx = eax;
    eax = esi + esi * 2;
    ecx = esp + 8;
    esi = edi + eax * 4;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_0006B534: ;
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) { sub_0006B555(); return; } /* je: equal / zero */

loc_0006B53B: ;
    if (CMP_NE(MEM32(eax), ebx)) { sub_0006B555(); return; } /* jne: not equal / not zero */

loc_0006B53F: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B560
 * Original: 0x0006B560 - 0x0006B5AF (79 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B560(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006B560: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax - esi;
    ecx = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0006B5AB; /* jle: less or equal (signed <=) */

loc_0006B57B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);

loc_0006B583: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    edx = eax + eax * 2;
    ebx = MEM32(esi + edx * 4);
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    edx = esi + edx * 4;
    if (CMP_AE(ebx, edi)) goto loc_0006B5A3; /* jae: above or equal (unsigned >=) */

loc_0006B597: ;
    esi = edx + 0xC;
    edx = edx | 0xFFFFFFFFu;
    edx = edx - eax;
    ecx = ecx + edx;
    goto loc_0006B5A5;

loc_0006B5A3: ;
    ecx = eax;

loc_0006B5A5: ;
    if (CMP_G(ecx & ecx, 0)) goto loc_0006B583; /* jg: greater (signed >) */

loc_0006B5A9: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0006B5AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B5B0
 * Original: 0x0006B5B0 - 0x0006B6B5 (261 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0006B5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_0006B5C7: ;
    MEM32(edi + 0x60) = eax;
    eax = MEM32(eax + 0x24);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0006B659; /* je: equal / zero */

loc_0006B5D8: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x5E06EC);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_0006B5E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0006B5EF: ;
    MEM32(edi + 0x64) = eax;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x60);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_0006B602: ;
    eax = MEM32(edi + 0x64);
    ecx = MEM32(edi + 0x60);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    ebx = edi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9110(); /* call 0x003F9110 */

loc_0006B618: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0x20;
    if (CMP_NE(eax, 0x36)) goto loc_0006B659; /* jne: not equal / not zero */

loc_0006B625: ;
    PUSH32(esp, 0x5E06D4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_0006B630: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0006B659; /* je: equal / zero */

loc_0006B637: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_0006B659; /* je: equal / zero */

loc_0006B63D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6CAF0);
    eax = 0; /* xor self */
    ecx = 0x5E06CC;
    edx = 0x5E06BC;
    PUSH32(esp, 0); sub_003F87A0(); /* call 0x003F87A0 */

loc_0006B656: ;
    esp = esp + 0xC;

loc_0006B659: ;
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_0006B664: ;
    esp = esp + 4;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003551E0(); /* call 0x003551E0 */

loc_0006B670: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0006B6A6; /* je: equal / zero */

loc_0006B678: ;
    eax = 0x5D5174;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0006B682: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(0x8496B8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_0006B6A6: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_0006B6AF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B6C0
 * Original: 0x0006B6C0 - 0x0006B701 (65 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B6C0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    (void)0; /* cmp ebp, 0x4B - flags set for next jcc */
    MEM32(0x8471D8) = ebx;
    MEM32(0x8471DC) = ebx;
    MEM8(0x76FD14) = 0xFF;
    MEM16(0x76FDA4) = LO16(ebx);
    MEM16(0x76FDA8) = LO16(ebx);
    MEM16(0x76FDAC) = LO16(ebx);
    if (CMP_GE(ebp, 0x4B)) { sub_0006B701(); return; } /* jge: greater or equal (signed >=) */

loc_0006B6F8: ;
    eax = MEM32(ebp * 4 + 0x69D0E8);
    g_seh_ebp = ebp; sub_0006B703(); return; /* tail jmp 0x0006B703 */

}

/**
 * sub_0006C010
 * Original: 0x0006C010 - 0x0006C0BE (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = 0x76FD20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = 0x76FD60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x76FD10);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0006C0BB; /* jle: less or equal (signed <=) */

loc_0006C03E: ;
    SET_LO8(edx, MEM8(0x7819D5));
    esi = MEM32(0x8471B8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ebp = ecx;

loc_0006C050: ;
    ecx = MEM32(eax + esi + 0x88);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = eax + esi + 0x88;
    if (TEST_Z(ecx, ecx)) goto loc_0006C072; /* je: equal / zero */

loc_0006C062: ;
    if (CMP_EQ(ecx, 0x6D7B0)) goto loc_0006C072; /* je: equal / zero */

loc_0006C06A: ;
    if (CMP_NE(ecx, 0x6D830)) goto loc_0006C09D; /* jne: not equal / not zero */

loc_0006C072: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0006C08F; /* jne: not equal / not zero */

loc_0006C076: ;
    SET_LO8(ebx, MEM8(eax + esi + 0x9F));
    SET_LO8(ebx, LO8(ebx) & 0x60);
    if (CMP_EQ(LO8(ebx), 0x40)) goto loc_0006C09D; /* je: equal / zero */

loc_0006C085: ;
    if (TEST_NZ(MEM8(eax + esi + 0xC1), 0xC)) goto loc_0006C09D; /* jne: not equal / not zero */

loc_0006C08F: ;
    MEM8(eax + esi + 0x9E) = 3;
    esi = MEM32(0x8471B8);

loc_0006C09D: ;
    if (CMP_NE(ecx, 0xCF570)) goto loc_0006C0B1; /* jne: not equal / not zero */

loc_0006C0A5: ;
    MEM32(edi) = 0;
    esi = MEM32(0x8471B8);

loc_0006C0B1: ;
    eax = eax + 0x150;
    ebp--;
    if ((ebp != 0)) goto loc_0006C050; /* jne: not equal / not zero */

loc_0006C0B9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006C0BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C0C0
 * Original: 0x0006C0C0 - 0x0006C17B (187 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006C0C0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0006C121; /* jne: not equal / not zero */

loc_0006C0C7: ;
    edx = ZX8(MEM8(0x76FD0A));
    edi = MEM32(0x76FD10);
    ecx = edx;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = 1;
    if (CMP_GE(ecx, edi)) goto loc_0006C177; /* jge: greater or equal (signed >=) */

loc_0006C0E3: ;
    esi = MEM32(0x8471B8);
    /* nop */

loc_0006C0F0: ;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x150);
    ebx = ZX8(MEM8(ebx + esi + 0xC6));
    if (CMP_NE(ebx, eax)) goto loc_0006C108; /* jne: not equal / not zero */

loc_0006C104: ;
    eax++;
    ecx = edx + -1;

loc_0006C108: ;
    if (CMP_G(eax, 0xFF)) goto loc_0006C118; /* jg: greater (signed >) */

loc_0006C10F: ;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_0006C0F0; /* jl: less (signed <) */

loc_0006C114: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006C118: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006C121: ;
    eax = ZX8(MEM8(0x76FD0A));
    esi = MEM32(0x76FD10);
    edx = 0xFF;
    edx = edx - eax;
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edx;
    if (CMP_LE(esi & esi, 0)) goto loc_0006C177; /* jle: less or equal (signed <=) */

loc_0006C13D: ;
    edi = MEM32(0x8471B8);
    goto loc_0006C150;

    /* nop */
    /* nop */

loc_0006C150: ;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x150);
    ebx = ZX8(MEM8(ebx + edi + 0xC6));
    if (CMP_NE(ebx, eax)) goto loc_0006C168; /* jne: not equal / not zero */

loc_0006C164: ;
    eax--;
    ecx = ecx | 0xFFFFFFFFu;

loc_0006C168: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0006C175; /* jle: less or equal (signed <=) */

loc_0006C16C: ;
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_0006C150; /* jl: less (signed <) */

loc_0006C171: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006C175: ;
    eax = edx;

loc_0006C177: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C180
 * Original: 0x0006C180 - 0x0006C6DC (1372 bytes, 388 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0006C180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    eax = MEM32(0x76FD10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0006C479; /* jle: less or equal (signed <=) */

loc_0006C1A4: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x64;

loc_0006C1B4: ;
    eax = MEM32(0x8471B8);
    esi = MEM32(esp + 0x18);
    edx = esi + eax;
    eax = MEM32(edx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0006C353; /* je: equal / zero */

loc_0006C1CB: ;
    edi = MEM32(0x8496B8);
    if (TEST_Z(edi, edi)) goto loc_0006C1F3; /* je: equal / zero */

loc_0006C1D5: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_003551E0(); /* call 0x003551E0 */

loc_0006C1DE: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_0006C1EA: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_0006C1F3: ;
    edx = MEM32(0x8471B8);
    ebx = MEM32(esi + edx + 0x68);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi + edx + 0x68;
    if (TEST_Z(ebx, ebx)) goto loc_0006C210; /* je: equal / zero */

loc_0006C205: ;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_0006C20A: ;
    MEM32(edi) = 0;

loc_0006C210: ;
    ecx = MEM32(0x8471B8);
    eax = MEM32(esi + ecx + 0x60);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0006C234; /* je: equal / zero */

loc_0006C221: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(eax + 8);
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_0006C231: ;
    esp = esp + 8;

loc_0006C234: ;
    ecx = MEM32(0x8471B8);
    ebx = MEM32(esi + ecx + 0x60);
    SET_LO8(eax, MEM8(ebx + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 8);
    if (CMP_BE(eax, 1)) goto loc_0006C254; /* jbe: below or equal (unsigned <=) */

loc_0006C24B: ;
    eax--;
    MEM32(ebx + 8) = eax;
    goto loc_0006C2FA;

loc_0006C254: ;
    SET_LO8(eax, MEM8(0x770FA8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0006C2FA; /* jne: not equal / not zero */

loc_0006C261: ;
    edi = MEM32(ebx + 0x24);
    if (TEST_Z(edi, edi)) goto loc_0006C274; /* je: equal / zero */

loc_0006C268: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_0006C26D: ;
    MEM32(ebx + 0x24) = 0;

loc_0006C274: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C27D: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C2B2; /* jne: not equal / not zero */

loc_0006C281: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0006C2B2; /* je: equal / zero */

loc_0006C288: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C2A8: ;
    esp = esp + 4;
    MEM32(ebx + 0x10) = 0;

loc_0006C2B2: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0006C2C0; /* je: equal / zero */

loc_0006C2BE: ;
    MEM32(eax) = ecx;

loc_0006C2C0: ;
    PUSH32(esp, ebx);
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C2D3: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C2FA; /* jne: not equal / not zero */

loc_0006C2D7: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C2F7: ;
    esp = esp + 4;

loc_0006C2FA: ;
    edx = MEM32(0x8471B8);
    MEM32(esi + edx + 0x60) = 0;
    eax = MEM32(0x8471B8);
    edi = esi + eax + 0x140;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0006C353; /* je: equal / zero */

loc_0006C31A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C320: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C353; /* jne: not equal / not zero */

loc_0006C324: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0006C353; /* je: equal / zero */

loc_0006C32A: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C34A: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0006C353: ;
    ecx = MEM32(0x8471B8);
    eax = esi + ecx;
    ecx = MEM32(eax + 0x104);
    if (TEST_Z(ecx, ecx)) goto loc_0006C36C; /* je: equal / zero */

loc_0006C366: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0006C369: ;
    esp = esp + 4;

loc_0006C36C: ;
    eax = MEM32(0x8471B8);
    edx = MEM32(esp + 0x18);
    edi = MEM32(0x870EE0);
    ebx = MEM32(edx + eax + 0x144);
    esi = edx + eax + 0x144;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0006C396; /* je: equal / zero */

loc_0006C390: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_0006C396: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_0006C39E: ;
    MEM32(ebx) = 0;
    eax = MEM32(edi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0006C3B4; /* je: equal / zero */

loc_0006C3AB: ;
    ecx = MEM32(edi + 0x24);
    MEM32(eax + ecx * 4) = ebx;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;

loc_0006C3B4: ;
    ebx = MEM32(esp + 0x18);
    MEM32(esi) = 0;
    esi = 2;
    goto loc_0006C3D0;

    /* nop */
    /* nop */

loc_0006C3D0: ;
    edx = MEM32(0x8471B8);
    ecx = MEM32(ebx + edx + 0x110);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + edx + 0x110;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0006C420; /* je: equal / zero */

loc_0006C3E9: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 5);
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_0006C401; /* jns: not sign (positive) */

loc_0006C3FC: ;
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_0006C401: ;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax * 4 + 0x7FDD58);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax * 4 + 0x7FDD58) = ecx;
    MEM32(0x7FDD44) = MEM32(0x7FDD44) - 1;

loc_0006C420: ;
    eax = edi + 8;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM8(edi + 4) = 0;
    MEM16(edi + 6) = 0;
    ecx = 1;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ebx = ebx + 0x18;
    esi--;
    MEM32(eax + 0xC) = ecx;
    if ((esi != 0)) goto loc_0006C3D0; /* jne: not equal / not zero */

loc_0006C449: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = 0x150;
    esi = esi + ecx;
    edx = edx + ecx;
    ecx = MEM32(0x76FD10);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_0006C1B4; /* jl: less (signed <) */

loc_0006C479: ;
    eax = MEM32(0x8471B8);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0006C5F1; /* je: equal / zero */

loc_0006C488: ;
    (void)0; /* cmp MEM32(0x76FD10), esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(MEM32(0x76FD10), esi)) goto loc_0006C520; /* jle: less or equal (signed <=) */

loc_0006C498: ;
    goto loc_0006C4A0;

    /* nop */

loc_0006C4A0: ;
    SET_LO8(ecx, MEM8(esi + eax + 0x148));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ebx = esi + eax + 0x148;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0006C507; /* je: equal / zero */

loc_0006C4B2: ;
    ecx = MEM32(esi + eax + 0xD8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = esi + eax + 0xD8;
    if (TEST_Z(ecx, ecx)) goto loc_0006C507; /* je: equal / zero */

loc_0006C4C4: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C4CC: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C4FF; /* jne: not equal / not zero */

loc_0006C4D0: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0006C4FF; /* je: equal / zero */

loc_0006C4D6: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C4F6: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0006C4FF: ;
    MEM8(ebx) = 0;
    eax = MEM32(0x8471B8);

loc_0006C507: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x76FD10);
    ecx++;
    esi = esi + 0x150;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0006C4A0; /* jl: less (signed <) */

loc_0006C520: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C526: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C556; /* jne: not equal / not zero */

loc_0006C52A: ;
    eax = MEM32(0x8471B8);
    if (TEST_Z(eax, eax)) goto loc_0006C556; /* je: equal / zero */

loc_0006C533: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C553: ;
    esp = esp + 4;

loc_0006C556: ;
    MEM32(0x8471B8) = 0;
    edi = 0x76FCF0;

loc_0006C565: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C56D: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C5A0; /* jne: not equal / not zero */

loc_0006C571: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0006C5A0; /* je: equal / zero */

loc_0006C577: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C597: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0006C5A0: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x76FD00)) goto loc_0006C565; /* jl: less (signed <) */

loc_0006C5AB: ;
    edx = MEM32(0x8471B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C5B7: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C5F1; /* jne: not equal / not zero */

loc_0006C5BB: ;
    eax = MEM32(0x8471B4);
    if (TEST_Z(eax, eax)) goto loc_0006C5F1; /* je: equal / zero */

loc_0006C5C4: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C5E4: ;
    esp = esp + 4;
    MEM32(0x8471B4) = 0;

loc_0006C5F1: ;
    eax = MEM32(0x8471D4);
    if (TEST_Z(eax, eax)) goto loc_0006C63A; /* je: equal / zero */

loc_0006C5FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C600: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C63A; /* jne: not equal / not zero */

loc_0006C604: ;
    eax = MEM32(0x8471D4);
    if (TEST_Z(eax, eax)) goto loc_0006C63A; /* je: equal / zero */

loc_0006C60D: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C62D: ;
    esp = esp + 4;
    MEM32(0x8471D4) = 0;

loc_0006C63A: ;
    ecx = MEM32(0x8471E4);
    ebx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0006C6BC; /* je: equal / zero */

loc_0006C646: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (CMP_EQ(edx, ebx)) goto loc_0006C671; /* je: equal / zero */

loc_0006C65B: ;
    goto loc_0006C660;

    /* nop */

loc_0006C660: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_0006C6DC(); return; } /* je: equal / zero */

loc_0006C66A: ;
    edx = MEM32(edx + 4);
    if (CMP_NE(edx, ebx)) goto loc_0006C660; /* jne: not equal / not zero */

loc_0006C671: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_0006C68E; /* jae: above or equal (unsigned >=) */

loc_0006C680: ;
    edx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_0006C690; /* je: equal / zero */

loc_0006C687: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_0006C680; /* jb: below (unsigned <) */

loc_0006C68E: ;
    edx = 0; /* xor self */

loc_0006C690: ;
    edi = edx;
    if (CMP_EQ(edi, ebx)) goto loc_0006C6B6; /* je: equal / zero */

loc_0006C696: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_0006C69F; /* je: equal / zero */

loc_0006C69B: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0006C69F: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_0006C6B6; /* jne: not equal / not zero */

loc_0006C6A5: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0006C6AC: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0006C6B6: ;
    MEM32(0x8471E4) = ebx;

loc_0006C6BC: ;
    eax = MEM32(0x8471B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0006C6C7: ;
    esp = esp + 4;
    MEM32(0x8471B0) = ebx;
    PUSH32(esp, 0); sub_0006C810(); /* call 0x0006C810 */

loc_0006C6D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C720
 * Original: 0x0006C720 - 0x0006C7DE (190 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006C720: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0006C72E; /* jne: not equal / not zero */

loc_0006C729: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0006C72E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0006C778; /* je: equal / zero */

loc_0006C756: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0006C778; /* jb: below (unsigned <) */

loc_0006C75F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0006C769: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0006C771: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0006C795; /* jne: not equal / not zero */

loc_0006C778: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0006C78A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0006C792: ;
    esp = esp + 8;

loc_0006C795: ;
    (void)0; /* cmp ebx, 0x54 - flags set for next jcc */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ebx;
    ecx = 0x8471D8;
    if (CMP_NE(ebx, 0x54)) { sub_0006C7DE(); return; } /* jne: not equal / not zero */

loc_0006C7A9: ;
    edx = MEM32(0x8471DC);
    if (TEST_Z(edx, edx)) goto loc_0006C7C4; /* je: equal / zero */

loc_0006C7B3: ;
    edx = 0x8471DC;

loc_0006C7B8: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(esi, esi)) goto loc_0006C7B8; /* jne: not equal / not zero */

loc_0006C7C4: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    eax = MEM32(0x76FDB4);
    eax++;
    POP32(esp, edi);
    MEM32(0x76FDB4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C810
 * Original: 0x0006C810 - 0x0006C85D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C810(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006C810: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471DC);
    if (TEST_Z(esi, esi)) goto loc_0006C85B; /* je: equal / zero */

loc_0006C81B: ;
    PUSH32(esp, edi);
    /* nop */

loc_0006C820: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0006C82F: ;
    if (TEST_NZ(eax, eax)) goto loc_0006C854; /* jne: not equal / not zero */

loc_0006C833: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0006C851: ;
    esp = esp + 4;

loc_0006C854: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0006C820; /* jne: not equal / not zero */

loc_0006C85A: ;
    POP32(esp, edi);

loc_0006C85B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C860
 * Original: 0x0006C860 - 0x0006C967 (263 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C860: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x8471E0);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0006C888; /* je: equal / zero */

loc_0006C875: ;
    PUSH32(esp, 0x8471E0);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0006C87F: ;
    esp = esp + 4;
    MEM32(0x8471E0) = ebx;

loc_0006C888: ;
    if (CMP_EQ(MEM32(esi * 4 + 0x69CF90), ebx)) goto loc_0006C95C; /* je: equal / zero */

loc_0006C895: ;
    eax = esi;
    MEM32(0x8471E4) = ebx;
    PUSH32(esp, 0); sub_00064070(); /* call 0x00064070 */

loc_0006C8A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 9);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0006C8B3: ;
    esp = esp + 0xC;
    eax = esp + 0x10;
    MEM32(esp + 0x120) = 9;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0006C8D6: ;
    goto loc_0006C8E0;

    /* nop */
    /* nop */

loc_0006C8E0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0006C8FC; /* jl: less (signed <) */

loc_0006C8EE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0006C8FC; /* jg: greater (signed >) */

loc_0006C8F5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0006C8FA: ;
    goto loc_0006C8E0;

loc_0006C8FC: ;
    eax = MEM32(ecx + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0006C916; /* je: equal / zero */

loc_0006C903: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x8471E4) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_0006C92D; /* jne: not equal / not zero */

loc_0006C911: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_0006C916: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_0006C924; /* je: equal / zero */

loc_0006C920: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_0006C924: ;
    eax = MEM32(eax);
    MEM32(0x8471E4) = eax;
    goto loc_0006C93C;

loc_0006C92D: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_0006C93C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0006C945: ;
    esi = MEM32(0x8471E4);
    if (CMP_AE(MEM32(esi + -16), 2)) { sub_0006C967(); return; } /* jae: above or equal (unsigned >=) */

loc_0006C951: ;
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_0006C956: ;
    MEM32(0x8471E4) = ebx;

loc_0006C95C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_0006CAF0
 * Original: 0x0006CAF0 - 0x0006CB93 (163 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CAF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006CAF0: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0006CB92; /* jne: not equal / not zero */

loc_0006CB02: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(eax + 0x50); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x1C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0xC); /* addss */
    /* comiss xmm0, MEMF(eax + 0x4C) - sets EFLAGS */
    MEMF(eax + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(eax + 0x4C))) goto loc_0006CB2E; /* jbe: below or equal (unsigned <=) */

loc_0006CB26: ;
    ecx = MEM32(eax + 0x4C);
    MEM32(eax + 0xC) = ecx;
    goto loc_0006CB44;

loc_0006CB2E: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0006CB44; /* jbe: below or equal (unsigned <=) */

loc_0006CB36: ;
    xmm1 = MEMF(eax + 0x4C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0xC) = xmm1; /* movss */

loc_0006CB44: ;
    xmm0 = (float)(int32_t)MEM32(eax + 0x48); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    edx = MEM32(eax + 0x44);
    ecx = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 0x5C) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0006CB74; /* jl: less (signed <) */

loc_0006CB5C: ;
    ecx = MEM32(eax + 8);
    edx--;
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0006CB73: ;
    esp += 4; return; /* ret */

loc_0006CB74: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0006CB7F; /* jge: greater or equal (signed >=) */

loc_0006CB78: ;
    MEM32(eax + 0x5C) = 0;

loc_0006CB7F: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0006CB92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006CBA0
 * Original: 0x0006CBA0 - 0x0006CBEA (74 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006CBA0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E90); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + 0xBC) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0xC) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0006CBEA(); return; } /* jbe: below or equal (unsigned <=) */

loc_0006CBDC: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006CC10
 * Original: 0x0006CC10 - 0x0006CC5A (74 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006CC10: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E90); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + 0xB8) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0006CC5A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0006CC4C: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(eax + 8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006CC80
 * Original: 0x0006CC80 - 0x0006CDBF (319 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC80(void)
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

loc_0006CC80: ;
    esp = esp - 0xC;
    xmm1 = MEMF(0x648D80); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA23C));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x8C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = ZX8(LO8(ecx));
    ecx = eax;
    eax = (uint32_t)((int32_t)eax >> 0x18);
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = ZX8(LO8(eax));
    edx = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(esi + 0x8C));
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0006CD3D; /* jnp: not parity */

loc_0006CCF0: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0006CCFC; /* je: equal / zero */

loc_0006CCF4: ;
    MEMF(esp + 0x18) = xmm1; /* movss */
    goto loc_0006CD0A;

loc_0006CCFC: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0006CD0A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMD(0x6497A8)); /* fld double */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_0006CD19: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0xC); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0006CD3D: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006CDB9; /* jnp: not parity */

loc_0006CD46: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x6497A0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006CD77; /* jp: parity */

loc_0006CD69: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_0006CD77: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0006CD83; /* je: equal / zero */

loc_0006CD7B: ;
    MEMF(esp + 0x18) = xmm1; /* movss */
    goto loc_0006CD91;

loc_0006CD83: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0006CD91: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMD(0x6497A8)); /* fld double */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_0006CDA0: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_0006CDB9: ;
    POP32(esp, esi);
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
 * sub_0006CDC0
 * Original: 0x0006CDC0 - 0x0006CE0A (74 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CDC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006CDC0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    xmm0 = MEMF(eax + 4); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E90); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + 0xB4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 4) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0006CE0A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0006CDFC: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006CE30
 * Original: 0x0006CE30 - 0x0006CEAB (123 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CE30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006CE30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xD8);
    if (TEST_NZ(ecx, ecx)) goto loc_0006CE48; /* jne: not equal / not zero */

loc_0006CE3E: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    MEM32(eax + 0xD8) = ecx;

loc_0006CE48: ;
    (void)0; /* test MEM8(eax + 0x9F), 4 - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax + 0x16));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xD8);
    edx = SX16(LO16(ecx));
    if (TEST_Z(MEM8(eax + 0x9F), 4)) goto loc_0006CE85; /* je: equal / zero */

loc_0006CE5F: ;
    esi = esi - edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x8C);
    if (CMP_GE(esi, edx)) goto loc_0006CEA9; /* jge: greater or equal (signed >=) */

loc_0006CE6C: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x8E));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)MEM16(0x7FA20C)));
    POP32(esp, esi);
    ecx = ecx - edx;
    MEM16(eax + 0x16) = LO16(ecx);
    esp += 4; return; /* ret */

loc_0006CE85: ;
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    esi = esi - edx;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D58); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx - edx;
    MEM16(eax + 0x16) = LO16(ecx);

loc_0006CEA9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CEB0
 * Original: 0x0006CEB0 - 0x0006D066 (438 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CEB0(void)
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

loc_0006CEB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x8C);
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 8);
    ebp = SX8(LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x9F));
    ecx = esi;
    SET_LO8(ebx, LO8(edx));
    ecx = (uint32_t)((int32_t)ecx >> 0x18);
    SET_LO8(ebx, LO8(ebx) & 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    if ((LO8(ebx) == 0)) goto loc_0006CEE8; /* je: equal / zero */

loc_0006CEDC: ;
    edi = MEM32(0x7FA20C);
    MEM32(eax + 0xDC) = MEM32(eax + 0xDC) + edi;

loc_0006CEE8: ;
    edi = MEM32(eax + 0xDC);
    if (CMP_G(edi, ecx)) goto loc_0006CF0D; /* jg: greater (signed >) */

loc_0006CEF2: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0006D061; /* jne: not equal / not zero */

loc_0006CEFA: ;
    if (TEST_Z(edi, edi)) goto loc_0006D061; /* je: equal / zero */

loc_0006CF02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0xDC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CF0D: ;
    ebp = ebp + ecx;
    if (CMP_G(edi, ebp)) goto loc_0006CF26; /* jg: greater (signed >) */

loc_0006CF13: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0006D061; /* jne: not equal / not zero */

loc_0006CF1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0xDC) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CF26: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0006CF38; /* jne: not equal / not zero */

loc_0006CF2A: ;
    ebx = MEM32(0x7FA20C);
    edi = edi + ebx;
    MEM32(eax + 0xDC) = edi;

loc_0006CF38: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(eax + 0xDC);
    edi = edi - ebp;
    edi = edi - ecx;
    ecx = MEM32(eax + 0xE0);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(ecx, edi)) goto loc_0006CFF2; /* jne: not equal / not zero */

loc_0006CF60: ;
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= MEMF(0x648CE4))) goto loc_0006D061; /* jbe: below or equal (unsigned <=) */

loc_0006CF93: ;
    if (CMP_NE(MEM32(eax + 0xD8), edi)) goto loc_0006CFA5; /* jne: not equal / not zero */

loc_0006CF9B: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    MEM32(eax + 0xD8) = ecx;

loc_0006CFA5: ;
    ecx = esi;
    esi = MEM32(eax + 0xD8);
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    SET_LO16(ecx, SX8(LO8(ecx)));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    MEM16(eax + 0x16) = MEM16(eax + 0x16) - LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    esi = esi - ecx;
    ecx = ZX8(MEM8(eax + 0x8C));
    ecx = ecx << 4;
    if (CMP_LE(esi, ecx)) goto loc_0006D061; /* jle: less or equal (signed <=) */

loc_0006CFD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(edx, LO8(edx) & 0xBE);
    SET_LO8(edx, LO8(edx) | 0x20);
    POP32(esp, ebp);
    MEM8(eax + 0x9F) = LO8(edx);
    MEM32(eax + 0xE0) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CFF2: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x84A5F8);
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x80); /* movss */
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm2, MEMF(0x6493E4) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x6493E4))) goto loc_0006D061; /* jbe: below or equal (unsigned <=) */

loc_0006D038: ;
    SET_LO8(edx, LO8(edx) & 0x9F);
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 0x9F) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 0xD8));
    MEM16(eax + 0x16) = LO16(edx);
    MEM32(eax + 0xE0) = edi;
    MEM32(eax + 0xDC) = edi;
    MEM32(eax + 0xD8) = edi;

loc_0006D061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006D070
 * Original: 0x0006D070 - 0x0006D19F (303 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D070: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 0x18);
    ebp = ZX8(LO8(eax));
    edx = esi;
    SET_LO16(eax, LO16(esi));
    SET_LO16(esi, MEM16(ecx + 0x16));
    PUSH32(esp, edi);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    ebx = 0; /* xor self */
    edi = SX16(LO16(esi));
    ebp++;
    (void)0; /* test MEM8(ecx + 0x9F), 4 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x20) = LO8(ebx);
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(MEM8(ecx + 0x9F), 4)) goto loc_0006D0B5; /* je: equal / zero */

loc_0006D0B0: ;
    MEM8(esp + 0x13) = 1;

loc_0006D0B5: ;
    if (CMP_NE(MEM32(ecx + 0xD8), ebx)) goto loc_0006D0C3; /* jne: not equal / not zero */

loc_0006D0BD: ;
    MEM32(ecx + 0xD8) = edi;

loc_0006D0C3: ;
    edi = MEM32(ecx + 0xD8);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x14) = eax;
    eax = eax - edi;
    ebx = ZX8(LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx = MEM32(ecx + 0xDC);
    if (TEST_NZ(edx, edx)) goto loc_0006D11E; /* jne: not equal / not zero */

loc_0006D0E2: ;
    if (CMP_NE(MEM32(esp + 0x18), edi)) goto loc_0006D0F8; /* jne: not equal / not zero */

loc_0006D0E8: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0006D11E; /* je: equal / zero */

loc_0006D0F0: ;
    MEM32(ecx + 0xDC) = ebp;
    goto loc_0006D11E;

loc_0006D0F8: ;
    edx = MEM32(esp + 0x14);
    esi = esi - eax;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    edx = SX16(LO16(esi));
    if (CMP_LE(edx, edi)) goto loc_0006D143; /* jle: less or equal (signed <=) */

loc_0006D105: ;
    if (CMP_G(edx, edi)) goto loc_0006D147; /* jg: greater (signed >) */

loc_0006D109: ;
    SET_LO16(edx, MEM16(ecx + 0xD8));
    MEM16(ecx + 0x16) = LO16(edx);
    edx = ebp;
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(ecx + 0xDC) = edx;

loc_0006D11E: ;
    ebx = MEM32(ecx + 0xDC);
    if (CMP_LE(ebx & ebx, 0)) goto loc_0006D176; /* jle: less or equal (signed <=) */

loc_0006D128: ;
    SET_LO16(edx, MEM16(ecx + 0x16));
    SET_LO16(esi, MEM16(ecx + 0x8C));
    SET_LO16(edx, LO16(edx) + LO16(eax));
    if (CMP_LE(MEM32(esp + 0x14), edi)) goto loc_0006D152; /* jle: less or equal (signed <=) */

loc_0006D13C: ;
    if (CMP_L(LO16(edx), LO16(esi))) goto loc_0006D15F; /* jl: less (signed <) */

loc_0006D141: ;
    goto loc_0006D157;

loc_0006D143: ;
    if (CMP_GE(edx, edi)) goto loc_0006D109; /* jge: greater or equal (signed >=) */

loc_0006D147: ;
    MEM8(esp + 0x20) = 1;
    MEM16(ecx + 0x16) = LO16(esi);
    goto loc_0006D11E;

loc_0006D152: ;
    if (CMP_G(LO16(edx), LO16(esi))) goto loc_0006D15F; /* jg: greater (signed >) */

loc_0006D157: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006D16B; /* je: equal / zero */

loc_0006D15F: ;
    MEM16(ecx + 0x16) = LO16(edx);
    MEM32(ecx + 0xDC) = ebp;
    goto loc_0006D176;

loc_0006D16B: ;
    ebx--;
    MEM16(ecx + 0x16) = LO16(esi);
    MEM32(ecx + 0xDC) = ebx;

loc_0006D176: ;
    eax = MEM32(ecx + 0xDC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_GE(eax & eax, 0)) goto loc_0006D18B; /* jge: greater or equal (signed >=) */

loc_0006D184: ;
    eax++;
    MEM32(ecx + 0xDC) = eax;

loc_0006D18B: ;
    SET_LO16(eax, MEM16(ecx + 0x16));
    SET_LO16(eax, LO16(eax) - MEM16(esp + 8));
    MEM16(ecx + 0xAE) = LO16(eax);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D1A0
 * Original: 0x0006D1A0 - 0x0006D5E5 (1093 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D1A0(void)
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

loc_0006D1A0: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    eax = MEM32(esi + 0x8C);
    ecx = eax;
    edx = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    ecx = (uint32_t)((int32_t)ecx >> 0x18);
    eax = ZX8(LO8(eax));
    SET_LO16(ecx, SX8(LO8(ecx)));
    MEM32(esp + 0x28) = eax;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    SET_LO16(ebp, MEM16(esi + 0x16));
    edx = (uint32_t)((int32_t)edx >> 8);
    /* FPU: fdivr dword ptr [0x648eec] */
    ecx = ecx << 6;
    MEM32(esp + 0x24) = ecx;
    SET_LO16(ecx, SX8(LO8(edx)));
    PUSH32(esp, edi);
    SET_LO16(edi, (uint32_t)(int32_t)SMEM8(esi + 0x8C));
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x50) = 0;
    MEM32(esp + 0x34) = ebx;
    ecx = ecx << 6;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0xE0);
    ecx = ecx & 0xFFFF;
    MEM32(esp + 0x14) = ecx;
    ecx = LO16(ebp);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(esp + 0x38) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    edi = edi << 6;
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0006D243: ;
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x9F), 4)) goto loc_0006D255; /* je: equal / zero */

loc_0006D250: ;
    MEM8(esp + 0x50) = 1;

loc_0006D255: ;
    eax = MEM32(esi + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_0006D277; /* jne: not equal / not zero */

loc_0006D25F: ;
    edx = ZX16(MEM16(esi + 0x18));
    ecx = ZX16(LO16(ebp));
    ebx = ebx << 0x10;
    ebx = ebx | ecx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = edx;

loc_0006D277: ;
    SET_LO16(eax, MEM16(esi + 0xDC));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0xDA));
    MEM16(esp + 0x18) = LO16(eax);
    eax = MEM32(esi + 0xDC);
    ebx = eax;
    eax = (uint32_t)((int32_t)eax >> 0x18);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0xD8));
    ebp = ZX8(LO8(eax));
    eax = ecx + edi;
    edi = MEM32(esp + 0x30);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x28);
    eax = eax + edx;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    SET_LO16(ebx, SX8(LO8(ebx)));
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    edi = edi + eax;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x2C) = edi;
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_0006D43E; /* jne: not equal / not zero */

loc_0006D2DA: ;
    if (CMP_NE(MEM16(esi + 0x14), LO16(ecx))) goto loc_0006D306; /* jne: not equal / not zero */

loc_0006D2E0: ;
    if (CMP_NE(MEM16(esi + 0x16), LO16(edx))) goto loc_0006D306; /* jne: not equal / not zero */

loc_0006D2E6: ;
    if (CMP_NE(MEM16(esi + 0x18), LO16(eax))) goto loc_0006D306; /* jne: not equal / not zero */

loc_0006D2EC: ;
    SET_LO8(eax, MEM8(esp + 0x50));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0006D588; /* je: equal / zero */

loc_0006D2F8: ;
    edi = MEM32(esp + 0x14);
    ebx = 0x64;
    goto loc_0006D44B;

loc_0006D306: ;
    ecx = ZX8(MEM8(esp + 0x13));
    ebp = ebp - ecx;
    if (CMP_G(ebp & ebp, 0)) goto loc_0006D3EA; /* jg: greater (signed >) */

loc_0006D315: ;
    eax = MEM32(esi + 0xE4);
    edi = esi + 0xE4;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ebx = 0xFFFFFF9Cu;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0006D36C; /* je: equal / zero */

loc_0006D32D: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006D342: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 8);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = esi;
    ecx = 0x83;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0006D36C: ;
    edi = MEM32(esp + 0x14);

loc_0006D370: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEM16(esi + 0x14) = LO16(edx);
    edx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM16(esi + 0x16) = LO16(edx);
    xmm1 = xmm1 + xmm0; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 0x18) = LO16(edx);
    goto loc_0006D442;

loc_0006D3EA: ;
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0006D370; /* je: equal / zero */

loc_0006D3F6: ;
    if (CMP_NE(MEM32(esi + 0xE4), 0xFFFFFFFFu)) goto loc_0006D370; /* jne: not equal / not zero */

loc_0006D403: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 8);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0006D42D: ;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = edi;
    goto loc_0006D370;

loc_0006D43E: ;
    edi = MEM32(esp + 0x14);

loc_0006D442: ;
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_0006D585; /* jle: less or equal (signed <=) */

loc_0006D44B: ;
    if (CMP_GE(ebp, 0xFF)) goto loc_0006D4B1; /* jge: greater or equal (signed >=) */

loc_0006D453: ;
    eax = ZX8(MEM8(esp + 0x13));
    ebp = ebp + eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = 0x64;
    if (TEST_Z(edi, edi)) goto loc_0006D4A2; /* je: equal / zero */

loc_0006D463: ;
    eax = MEM32(esi + 0xE4);
    edx = edx | 0xFFFFFFFFu;
    if (CMP_NE(eax, edx)) goto loc_0006D4A2; /* jne: not equal / not zero */

loc_0006D470: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0006D496: ;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = edi;

loc_0006D4A2: ;
    if (CMP_LE(ebp, 0xFF)) goto loc_0006D50A; /* jle: less or equal (signed <=) */

loc_0006D4AA: ;
    ebp = 0xFF;
    goto loc_0006D50A;

loc_0006D4B1: ;
    eax = MEM32(esi + 0xE4);
    edi = esi + 0xE4;
    ebx--;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ebp = 0xFF;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0006D50A; /* je: equal / zero */

loc_0006D4C8: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0006D4DD: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 8);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = esi;
    ecx = 0x83;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0006D50A: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    ecx = ecx - eax;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEM16(esi + 0x14) = LO16(edx);
    edx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM16(esi + 0x16) = LO16(edx);
    xmm1 = xmm1 + xmm0; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 0x18) = LO16(edx);
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */

loc_0006D585: ;
    if (CMP_GE(LO16(ebx) & LO16(ebx), 0)) goto loc_0006D588; /* jge: greater or equal (signed >=) */

loc_0006D587: ;
    ebx++;

loc_0006D588: ;
    SET_LO16(eax, MEM16(esi + 0x14));
    SET_LO16(ecx, MEM16(esi + 0x16));
    SET_LO16(edx, MEM16(esi + 0x18));
    SET_LO16(eax, LO16(eax) - MEM16(esp + 0x34));
    SET_LO16(ecx, LO16(ecx) - MEM16(esp + 0x38));
    ebp = ebp << 8;
    ebx = ebx & 0xFF;
    ebx = ebx | ebp;
    MEM16(esi + 0xDE) = 0;
    ebp = MEM32(esi + 0xDC);
    ebx = ebx << 0x10;
    ebp = ebp | ebx;
    SET_LO16(edx, LO16(edx) - MEM16(esp + 0x3C));
    POP32(esp, edi);
    MEM32(esi + 0xDC) = ebp;
    MEM16(esi + 0xAC) = LO16(eax);
    MEM16(esi + 0xAE) = LO16(ecx);
    MEM16(esi + 0xB0) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006D5F0
 * Original: 0x0006D5F0 - 0x0006D68B (155 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D5F0(void)
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

loc_0006D5F0: ;
    esp = esp - 8;
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(ecx + 0x78); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    /* fld st(0) */
    xmm1 = xmm1 - xmm0; /* subss */
    /* FPU: fcos  */
    xmm0 = MEMF(ecx + 0x80); /* movss */
    (void)0; /* test MEM8(eax + 0x9F), 4 - flags set for next jcc */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(MEM8(eax + 0x9F), 4)) goto loc_0006D687; /* je: equal / zero */

loc_0006D637: ;
    xmm2 = MEMF(esp); /* movss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 + MEMF(eax + 0xD8); /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(eax + 0xDC); /* addss */
    MEMF(eax + 0xD8) = xmm4; /* movss */
    MEMF(eax + 0xDC) = xmm1; /* movss */

loc_0006D687: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006D690
 * Original: 0x0006D690 - 0x0006D6FF (111 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D690(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6, xmm7;

loc_0006D690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm6 = MEMF(eax + 0xD8); /* movss */
    xmm7 = MEMF(eax + 0xDC); /* movss */
    PUSH32(esp, 0); sub_0006D5F0(); /* call 0x0006D5F0 */

loc_0006D6AD: ;
    if (CMP_NE(MEM32(ecx + 0xA4), 0x4B)) goto loc_0006D6FE; /* jne: not equal / not zero */

loc_0006D6B6: ;
    xmm1 = MEMF(eax + 0xD8); /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xD8); /* addss */
    MEMF(eax + 0xD8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xDC); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xDC); /* addss */
    MEMF(eax + 0xDC) = xmm1; /* movss */

loc_0006D6FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D700
 * Original: 0x0006D700 - 0x0006D750 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D700: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x8C);
    PUSH32(esp, ebx);
    edx = ecx;
    ebx = ecx;
    ecx = (uint32_t)((int32_t)ecx >> 0x18);
    MEM8(esp + 8) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x8C));
    edx = (uint32_t)((int32_t)edx >> 0x10);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0006D750(); return; } /* je: equal / zero */

loc_0006D726: ;
    xmm1 = MEMF(eax + 0xD8); /* movss */
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_0006D768(); return; /* tail jmp 0x0006D768 */

}

/**
 * sub_0006D7B0
 * Original: 0x0006D7B0 - 0x0006D82C (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D7B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0006D7B0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x8E));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x8C));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 0x1A), LO16(edi))) goto loc_0006D829; /* jbe: below or equal (unsigned <=) */

loc_0006D7CC: ;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(0x7FA230));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    esi = SX16(LO16(esi));
    eax = SX8(LO8(eax));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = ecx + eax * 4 + 0x70;
    edx = ecx + edx * 4 + 0x70;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);

loc_0006D7F4: ;
    ebx = MEM32(edx);
    xmm2 = MEMF(ebx + eax + 0x10); /* movss */
    ebx = MEM32(esi);
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + ebx + 0x10) = xmm2; /* movss */
    ebx = MEM32(edx);
    xmm2 = MEMF(ebx + eax + 0x14); /* movss */
    ebx = MEM32(esi);
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + ebx + 0x14) = xmm2; /* movss */
    ebx = ZX16(MEM16(ecx + 0x1A));
    edi++;
    eax = eax + 0x1C;
    if (CMP_L(edi, ebx)) goto loc_0006D7F4; /* jl: less (signed <) */

loc_0006D828: ;
    POP32(esp, ebx);

loc_0006D829: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D830
 * Original: 0x0006D830 - 0x0006D84D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006D830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xD8);
    ecx = 0; /* xor self */
    if (CMP_NE(edx, ecx)) goto loc_0006D84C; /* jne: not equal / not zero */

loc_0006D840: ;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0x8C) = ecx;

loc_0006D84C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D850
 * Original: 0x0006D850 - 0x0006D90D (189 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D850(void)
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

loc_0006D850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x16));
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = SX16(LO16(edi));
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_0006D8AB: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x40) = edx;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    esp = esp + 0x38;
    MEMF(esi + 0xD8) = xmm0; /* movss */
    /* FPU: fsubr dword ptr [esp + 0x10] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x5A005C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0006D8E6; /* jbe: below or equal (unsigned <=) */

loc_0006D8DC: ;
    MEM32(esi + 0x8C) = 0;

loc_0006D8E6: ;
    if (TEST_NZ(MEM8(esi + 0x9F), 4)) { sub_0006D90D(); return; } /* jne: not equal / not zero */

loc_0006D8EF: ;
    eax = MEM32(esi + 0x8C);
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x64A60C); /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = eax - edx;
    g_seh_ebp = ebp; sub_0006D93F(); return; /* tail jmp 0x0006D93F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006D970
 * Original: 0x0006D970 - 0x0006D9E2 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D970(void)
{
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0006D970: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xD8);
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    xmm1 = MEMF(eax + 0x1C); /* movss */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x8C);
    MEM32(esp + 8) = esi;
    /* FPU: fcos  */
    esi = ZX16(MEM16(eax + 0x8E));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x7FA20C));
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    esi = esi + edx;
    MEM32(eax + 0xD8) = esi;
    POP32(esp, esi);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = edx - ecx;
    MEM16(eax + 0xAE) = LO16(edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006D9F0
 * Original: 0x0006D9F0 - 0x0006DAA6 (182 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D9F0(void)
{
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0006D9F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xD8);
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = MEM32(eax + 0x8C);
    edx = ecx;
    edx = edx & 0xFF;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xDC);
    /* FPU: fcos  */
    xmm0 = MEMF(eax + 4); /* movss */
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 8);
    edx = ZX8(LO8(edx));
    MEM16(eax + 0xAE) = 0;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edi;
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    edx = ecx;
    ecx = (uint32_t)((int32_t)ecx >> 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    ecx = ZX8(LO8(ecx));
    ebx = ZX8(LO8(edx));
    /* FPU: fcos  */
    edx = MEM32(0x7FA20C);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    ecx = ecx + edi;
    ebx = ebx + esi;
    POP32(esp, edi);
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(eax + 4); /* movss */
    POP32(esp, esi);
    MEM32(eax + 0xD8) = ebx;
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(eax + 0xDC) = ecx;
    MEMF(eax + 0xB4) = xmm1; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006DAB0
 * Original: 0x0006DAB0 - 0x0006DAF0 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DAB0: ;
    esp = esp - 0xC;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, ebx);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x9F));
    PUSH32(esp, ebp);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), 4)) { sub_0006DAF0(); return; } /* jne: not equal / not zero */

loc_0006DAEC: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0006DB00(); return; /* tail jmp 0x0006DB00 */

}

/**
 * sub_0006DCF0
 * Original: 0x0006DCF0 - 0x0006DDA9 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DCF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0006DCF0: ;
    esp = esp - 0xC;
    eax = (int32_t)MEMF(edi + 0x78); /* cvttss2si */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = (int32_t)MEMF(edi + 0x80); /* cvttss2si */
    eax = eax - esi;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = ecx - edx;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esi = esp + 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0D50(); /* call 0x002B0D50 */

loc_0006DD24: ;
    SET_LO8(eax, LO8(eax) + MEM8(edi + 0x171));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    (void)0; /* cmp LO8(eax), 0x40 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_BE(LO8(eax), 0x40)) { sub_0006DDA9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0006DD31: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_0006DD81; /* jbe: below or equal (unsigned <=) */

loc_0006DD35: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_0006DD5E; /* jbe: below or equal (unsigned <=) */

loc_0006DD39: ;
    xmm1 = MEMF(edi + 0x110); /* movss */
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743490;
    eax = eax - edx;
    xmm0 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0006DD5E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(edi + 0x110); /* movss */
    ecx = ZX8(LO8(eax));
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x742E90); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0006DD81: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(edi + 0x110); /* movss */
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743290;
    eax = eax - edx;
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DDD0
 * Original: 0x0006DDD0 - 0x0006DE02 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006DDD0: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(MEM8(ecx + 0x9F), 4)) goto loc_0006DE01; /* je: equal / zero */

loc_0006DDDD: ;
    SET_LO8(eax, MEM8(ecx + 0xC7));
    if (TEST_NZ(LO8(eax), 7)) goto loc_0006DE01; /* jne: not equal / not zero */

loc_0006DDE7: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 0x568);
    if (CMP_NE(MEM8(edx + 0x6F), 1)) goto loc_0006DE01; /* jne: not equal / not zero */

loc_0006DDF7: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(ecx + 0xC7) = LO8(eax);

loc_0006DE01: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DE10
 * Original: 0x0006DE10 - 0x0006DE26 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DE10: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0xC7), 2)) { sub_0006DE26(); return; } /* je: equal / zero */

loc_0006DE1D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0006DE30(); return; /* tail jmp 0x0006DE30 */

}

/**
 * sub_0006DE30
 * Original: 0x0006DE30 - 0x0006E048 (536 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006DE30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x8C);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xD8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0xA);
    if (CMP_NE(edx, edi)) goto loc_0006DEC1; /* jne: not equal / not zero */

loc_0006DE4F: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    if (CMP_NE(edx, MEM32(esi + 0xDC))) goto loc_0006DEC1; /* jne: not equal / not zero */

loc_0006DE5B: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    if (CMP_NE(edx, MEM32(esi + 0xE0))) goto loc_0006DEC1; /* jne: not equal / not zero */

loc_0006DE67: ;
    ecx = MEM32(esi + 0xCC);
    edx = 0; /* xor self */
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM16(esi + 0xB0) = LO16(edx);
    MEM16(esi + 0xAE) = LO16(edx);
    MEM16(esi + 0xAC) = LO16(edx);
    if (CMP_EQ(ecx, edi)) goto loc_0006E045; /* je: equal / zero */

loc_0006DE8F: ;
    if (CMP_EQ(eax, edx)) goto loc_0006DEB2; /* je: equal / zero */

loc_0006DE93: ;
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(eax * 4 + 0x69D4DC));
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_0006DEB2; /* je: equal / zero */

loc_0006DEA3: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006DEAF: ;
    esp = esp + 0xC;

loc_0006DEB2: ;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DEC1: ;
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0006DEDC; /* je: equal / zero */

loc_0006DEC7: ;
    edi = eax + eax * 2;
    if (CMP_EQ(MEM16(edi * 4 + 0x69D4E0), LO16(edx))) goto loc_0006DEDC; /* je: equal / zero */

loc_0006DED4: ;
    PUSH32(esp, 0); sub_0006E050(); /* call 0x0006E050 */

loc_0006DED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DEDC: ;
    ecx = ecx & 0xFFFF03FFu;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edi = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0006DF0F; /* je: equal / zero */

loc_0006DEE8: ;
    if (CMP_NE(MEM32(esi + 0xCC), 0xFFFFFFFFu)) goto loc_0006DF0F; /* jne: not equal / not zero */

loc_0006DEF1: ;
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(eax * 4 + 0x69D4D8));
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_0006DF0F; /* je: equal / zero */

loc_0006DF01: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006DF0C: ;
    esp = esp + 0xC;

loc_0006DF0F: ;
    eax = MEM32(0x7FA20C);
    SET_LO16(edx, MEM16(esi + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM16(esi + 0xAC) = LO16(edx);
    edi = MEM32(esi + 0xD8);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x14));
    edx = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_EQ(edx, edi)) goto loc_0006DF6C; /* je: equal / zero */

loc_0006DF37: ;
    if (CMP_LE(edx, edi)) goto loc_0006DF4E; /* jle: less or equal (signed <=) */

loc_0006DF39: ;
    ecx = ecx - eax;
    MEM16(esi + 0x14) = LO16(ecx);
    edx = MEM32(esi + 0xD8);
    ecx = SX16(LO16(ecx));
    if (CMP_GE(ecx, edx)) goto loc_0006DF6C; /* jge: greater or equal (signed >=) */

loc_0006DF4C: ;
    goto loc_0006DF61;

loc_0006DF4E: ;
    ecx = ecx + eax;
    MEM16(esi + 0x14) = LO16(ecx);
    edx = MEM32(esi + 0xD8);
    ecx = SX16(LO16(ecx));
    if (CMP_LE(ecx, edx)) goto loc_0006DF6C; /* jle: less or equal (signed <=) */

loc_0006DF61: ;
    SET_LO16(edx, MEM16(esi + 0xD8));
    MEM16(esi + 0x14) = LO16(edx);

loc_0006DF6C: ;
    SET_LO16(ecx, MEM16(esi + 0x14));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xAC));
    MEM16(esi + 0xAC) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x16));
    MEM16(esi + 0xAE) = LO16(edx);
    edi = MEM32(esi + 0xDC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x16));
    edx = SX16(LO16(ecx));
    if (CMP_EQ(edx, edi)) goto loc_0006DFD1; /* je: equal / zero */

loc_0006DF9C: ;
    if (CMP_LE(edx, edi)) goto loc_0006DFB3; /* jle: less or equal (signed <=) */

loc_0006DF9E: ;
    ecx = ecx - eax;
    MEM16(esi + 0x16) = LO16(ecx);
    edx = MEM32(esi + 0xDC);
    ecx = SX16(LO16(ecx));
    if (CMP_GE(ecx, edx)) goto loc_0006DFD1; /* jge: greater or equal (signed >=) */

loc_0006DFB1: ;
    goto loc_0006DFC6;

loc_0006DFB3: ;
    ecx = ecx + eax;
    MEM16(esi + 0x16) = LO16(ecx);
    edx = MEM32(esi + 0xDC);
    ecx = SX16(LO16(ecx));
    if (CMP_LE(ecx, edx)) goto loc_0006DFD1; /* jle: less or equal (signed <=) */

loc_0006DFC6: ;
    SET_LO16(edx, MEM16(esi + 0xDC));
    MEM16(esi + 0x16) = LO16(edx);

loc_0006DFD1: ;
    SET_LO16(ecx, MEM16(esi + 0x16));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xAE));
    MEM16(esi + 0xAE) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x18));
    MEM16(esi + 0xB0) = LO16(edx);
    edi = MEM32(esi + 0xE0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x18));
    edx = SX16(LO16(ecx));
    if (CMP_EQ(edx, edi)) goto loc_0006E033; /* je: equal / zero */

loc_0006E001: ;
    if (CMP_LE(edx, edi)) goto loc_0006E01C; /* jle: less or equal (signed <=) */

loc_0006E003: ;
    ecx = ecx - eax;
    eax = SX16(LO16(ecx));
    MEM16(esi + 0x18) = LO16(ecx);
    ecx = MEM32(esi + 0xE0);
    if (CMP_GE(eax, ecx)) goto loc_0006E033; /* jge: greater or equal (signed >=) */

loc_0006E016: ;
    MEM16(esi + 0x18) = LO16(ecx);
    goto loc_0006E033;

loc_0006E01C: ;
    eax = eax + ecx;
    edx = SX16(LO16(eax));
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(esi + 0xE0);
    if (CMP_LE(edx, eax)) goto loc_0006E033; /* jle: less or equal (signed <=) */

loc_0006E02F: ;
    MEM16(esi + 0x18) = LO16(eax);

loc_0006E033: ;
    SET_LO16(ecx, MEM16(esi + 0x18));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xB0));
    MEM16(esi + 0xB0) = LO16(ecx);

loc_0006E045: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E050
 * Original: 0x0006E050 - 0x0006E232 (482 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E050: ;
    esp = esp - 8;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = eax & 0xFFFF03FFu;
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = (uint32_t)((int32_t)ebx >> 0xA);
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    edi = eax;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(ebx, ebp)) goto loc_0006E0A5; /* je: equal / zero */

loc_0006E076: ;
    if (CMP_NE(MEM32(esi + 0xCC), 0xFFFFFFFFu)) goto loc_0006E0A5; /* jne: not equal / not zero */

loc_0006E07F: ;
    eax = ebx + ebx * 2;
    SET_LO16(eax, MEM16(eax * 4 + 0x69D4D8));
    if (CMP_EQ(LO16(eax), LO16(ebp))) goto loc_0006E0A5; /* je: equal / zero */

loc_0006E08F: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006E09A: ;
    esp = esp + 0xC;
    MEM32(esp + 0xC) = 1;

loc_0006E0A5: ;
    eax = MEM32(0x7FA20C);
    SET_LO16(edx, MEM16(esi + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM16(esi + 0xAC) = LO16(edx);
    edi = MEM32(esi + 0xD8);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x14));
    edx = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_EQ(edx, edi)) goto loc_0006E104; /* je: equal / zero */

loc_0006E0CD: ;
    if (CMP_LE(edx, edi)) goto loc_0006E0E0; /* jle: less or equal (signed <=) */

loc_0006E0CF: ;
    ecx = ecx - eax;
    MEM16(esi + 0x14) = LO16(ecx);
    edx = MEM32(esi + 0xD8);
    ecx = SX16(LO16(ecx));
    goto loc_0006E0EF;

loc_0006E0E0: ;
    ecx = ecx + eax;
    MEM16(esi + 0x14) = LO16(ecx);
    edx = SX16(LO16(ecx));
    ecx = MEM32(esi + 0xD8);

loc_0006E0EF: ;
    ecx = ecx - edx;
    if (((int32_t)ecx >= 0)) goto loc_0006E0FE; /* jns: not sign (positive) */

loc_0006E0F3: ;
    SET_LO16(edx, MEM16(esi + 0xD8));
    MEM16(esi + 0x14) = LO16(edx);

loc_0006E0FE: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0006E104; /* jle: less or equal (signed <=) */

loc_0006E102: ;
    ebp = ecx;

loc_0006E104: ;
    SET_LO16(ecx, MEM16(esi + 0x14));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xAC));
    MEM16(esi + 0xAC) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x16));
    MEM16(esi + 0xAE) = LO16(edx);
    edi = MEM32(esi + 0xDC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x16));
    edx = SX16(LO16(ecx));
    if (CMP_EQ(edx, edi)) goto loc_0006E16B; /* je: equal / zero */

loc_0006E134: ;
    if (CMP_LE(edx, edi)) goto loc_0006E147; /* jle: less or equal (signed <=) */

loc_0006E136: ;
    ecx = ecx - eax;
    MEM16(esi + 0x16) = LO16(ecx);
    edx = MEM32(esi + 0xDC);
    ecx = SX16(LO16(ecx));
    goto loc_0006E156;

loc_0006E147: ;
    ecx = ecx + eax;
    MEM16(esi + 0x16) = LO16(ecx);
    edx = SX16(LO16(ecx));
    ecx = MEM32(esi + 0xDC);

loc_0006E156: ;
    ecx = ecx - edx;
    if (((int32_t)ecx >= 0)) goto loc_0006E165; /* jns: not sign (positive) */

loc_0006E15A: ;
    SET_LO16(edx, MEM16(esi + 0xDC));
    MEM16(esi + 0x16) = LO16(edx);

loc_0006E165: ;
    if (CMP_LE(ecx, ebp)) goto loc_0006E16B; /* jle: less or equal (signed <=) */

loc_0006E169: ;
    ebp = ecx;

loc_0006E16B: ;
    SET_LO16(ecx, MEM16(esi + 0x16));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xAE));
    MEM16(esi + 0xAE) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x18));
    MEM16(esi + 0xB0) = LO16(edx);
    edi = MEM32(esi + 0xE0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x18));
    edx = SX16(LO16(ecx));
    if (CMP_EQ(edx, edi)) goto loc_0006E1D2; /* je: equal / zero */

loc_0006E19B: ;
    if (CMP_LE(edx, edi)) goto loc_0006E1AE; /* jle: less or equal (signed <=) */

loc_0006E19D: ;
    ecx = ecx - eax;
    MEM16(esi + 0x18) = LO16(ecx);
    edx = MEM32(esi + 0xE0);
    ecx = SX16(LO16(ecx));
    goto loc_0006E1BD;

loc_0006E1AE: ;
    ecx = ecx + eax;
    MEM16(esi + 0x18) = LO16(ecx);
    edx = SX16(LO16(ecx));
    ecx = MEM32(esi + 0xE0);

loc_0006E1BD: ;
    ecx = ecx - edx;
    if (((int32_t)ecx >= 0)) goto loc_0006E1CC; /* jns: not sign (positive) */

loc_0006E1C1: ;
    SET_LO16(edx, MEM16(esi + 0xE0));
    MEM16(esi + 0x18) = LO16(edx);

loc_0006E1CC: ;
    if (CMP_LE(ecx, ebp)) goto loc_0006E1D2; /* jle: less or equal (signed <=) */

loc_0006E1D0: ;
    ebp = ecx;

loc_0006E1D2: ;
    SET_LO16(ecx, MEM16(esi + 0x18));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0xB0));
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM16(esi + 0xB0) = LO16(ecx);
    if (TEST_Z(ebx, ebx)) goto loc_0006E22B; /* je: equal / zero */

loc_0006E1E8: ;
    ecx = ebx + ebx * 2;
    ecx = ecx << 2;
    SET_LO16(edx, MEM16(ecx + 0x69D4E0));
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0006E22B; /* je: equal / zero */

loc_0006E1FA: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x69D4E2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ebp = ebp - ecx;
    if (CMP_G(ebp & ebp, 0)) goto loc_0006E22B; /* jg: greater (signed >) */

loc_0006E20E: ;
    eax = (uint32_t)(-(int32_t)eax);
    if (CMP_G(ebp, eax)) goto loc_0006E21C; /* jg: greater (signed >) */

loc_0006E214: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0006E22B; /* je: equal / zero */

loc_0006E21C: ;
    edx = SX16(LO16(edx));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006E228: ;
    esp = esp + 0xC;

loc_0006E22B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E240
 * Original: 0x0006E240 - 0x0006E2EE (174 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E240: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0xB4); /* movss */
    /* ucomiss xmm0, MEMF(ecx + 0xD8) - sets EFLAGS */
    xmm2 = (float)(int32_t)MEM32(ecx + 0x8C); /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648E90); /* mulss */
    xmm4 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006E2C2; /* jnp: not parity */

loc_0006E271: ;
    /* comiss xmm0, MEMF(ecx + 0xD8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xD8))) goto loc_0006E2A1; /* jbe: below or equal (unsigned <=) */

loc_0006E27A: ;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(ecx + 0xB4) = xmm0; /* movss */
    xmm1 = MEMF(ecx + 0xD8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0006E2C2; /* jbe: below or equal (unsigned <=) */

loc_0006E293: ;
    eax = MEM32(ecx + 0xD8);
    MEM32(ecx + 0xB4) = eax;
    goto loc_0006E2C2;

loc_0006E2A1: ;
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(ecx + 0xB4) = xmm0; /* movss */
    /* comiss xmm0, MEMF(ecx + 0xD8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xD8))) goto loc_0006E2C2; /* jbe: below or equal (unsigned <=) */

loc_0006E2B6: ;
    edx = MEM32(ecx + 0xD8);
    MEM32(ecx + 0xB4) = edx;

loc_0006E2C2: ;
    xmm0 = MEMF(ecx + 0xB4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(ecx + 4) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) { sub_0006E2EE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0006E2E8: ;
    xmm0 = xmm0 + xmm1; /* addss */
    g_seh_ebp = ebp; sub_0006E2F7(); return; /* tail jmp 0x0006E2F7 */

}

/**
 * sub_0006E430
 * Original: 0x0006E430 - 0x0006E4EC (188 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E430: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x8C);
    ecx = eax;
    eax = eax & 0xFFFF;
    ebp = ZX8(MEM8(eax * 2 + 0x8471E9));
    eax = MEM32(esi + 0xDC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xE0);
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edi;
    if (TEST_NZ(eax, eax)) goto loc_0006E487; /* jne: not equal / not zero */

loc_0006E46B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x7F4);
    PUSH32(esp, 0x5E0798);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0006E47E: ;
    esp = esp + 0x10;
    MEM32(esi + 0xDC) = eax;

loc_0006E487: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    if (CMP_NE(edi, ebp)) goto loc_0006E4B4; /* jne: not equal / not zero */

loc_0006E4AB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edi--;

loc_0006E4B4: ;
    eax = 0; /* xor self */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebx = MEM32(esi + 0xDC);
    ecx = eax;
    ecx = ecx & 0xFFFFFFFEu;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = edx >> 2;
    eax = eax + ebx;
    ebp--;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(edi, ebp)) { sub_0006E4EC(); return; } /* je: equal / zero */

loc_0006E4E2: ;
    ebp = edi + 1;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    ebp = ebp + ebx;
    g_seh_ebp = ebp; sub_0006E4EE(); return; /* tail jmp 0x0006E4EE */

}

/**
 * sub_0006E8C0
 * Original: 0x0006E8C0 - 0x0006EA82 (450 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E8C0(void)
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

loc_0006E8C0: ;
    esp = esp - 0x10;
    ecx = MEM32(esi + 0x8C);
    xmm0 = MEMF(esi + 0xD8); /* movss */
    xmm5 = MEMF(esi + 0xE0); /* movss */
    eax = ecx;
    eax = eax << 0x16;
    eax = (uint32_t)((int32_t)eax >> 0x16);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xDC); /* movss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm5; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_0006E926; /* jp: parity */

loc_0006E913: ;
    /* ucomiss xmm5, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006EA50; /* jnp: not parity */

loc_0006E924: ;
    goto loc_0006E96B;

loc_0006E926: ;
    /* ucomiss xmm5, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006E96B; /* jp: parity */

loc_0006E933: ;
    ecx = (uint32_t)((int32_t)ecx >> 0xA);
    if (TEST_Z(ecx, ecx)) goto loc_0006E96B; /* je: equal / zero */

loc_0006E93A: ;
    ecx = ecx + ecx * 2;
    SET_LO16(eax, MEM16(ecx * 4 + 0x69D4D8));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0006E96B; /* je: equal / zero */

loc_0006E94A: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006E956: ;
    xmm3 = MEMF(esp + 0x14); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0xC;

loc_0006E96B: ;
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm6 = MEMF(0x648F60); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm4 = xmm1; /* movaps */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_0006E9A5; /* jb: below (unsigned <) */

loc_0006E99F: ;
    xmm4 = xmm4 - xmm6; /* subss */
    goto loc_0006E9B9;

loc_0006E9A5: ;
    xmm7 = MEMF(0x648F64); /* movss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_0006E9B9; /* jb: below (unsigned <) */

loc_0006E9B2: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */

loc_0006E9B9: ;
    xmm2 = xmm2 - xmm4; /* subss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    MEMF(esp + 8) = xmm2; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm2 <= xmm4)) goto loc_0006E9E9; /* jbe: below or equal (unsigned <=) */

loc_0006E9DD: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    goto loc_0006E9F2;

loc_0006E9E9: ;
    xmm5 = xmm5 - MEMF(esp + 4); /* subss */
    xmm0 = xmm5; /* movaps */

loc_0006E9F2: ;
    xmm2 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, MEMF(esp + 8) - sets EFLAGS */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm2 <= MEMF(esp + 8))) goto loc_0006EA28; /* jbe: below or equal (unsigned <=) */

loc_0006EA0C: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0006EA28; /* jbe: below or equal (unsigned <=) */

loc_0006EA1D: ;
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm0 = xmm4; /* movaps */
    goto loc_0006EA42;

loc_0006EA28: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0006EA33; /* jbe: below or equal (unsigned <=) */

loc_0006EA2D: ;
    xmm1 = xmm1 + xmm6; /* addss */
    goto loc_0006EA3C;

loc_0006EA33: ;
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 < xmm6)) goto loc_0006EA42; /* jb: below (unsigned <) */

loc_0006EA38: ;
    xmm1 = xmm1 - xmm6; /* subss */

loc_0006EA3C: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0006EA42: ;
    MEMF(esi + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */

loc_0006EA50: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1B)) goto loc_0006EA5F; /* je: equal / zero */

loc_0006EA5A: ;
    if (CMP_NE(eax, 0x1E)) goto loc_0006EA7E; /* jne: not equal / not zero */

loc_0006EA5F: ;
    SET_LO8(eax, MEM8(esi + 0x9F));
    SET_LO8(eax, LO8(eax) & 0x9F);
    /* comiss xmm0, MEMF(0x648E38) - sets EFLAGS */
    MEM8(esi + 0x9F) = LO8(eax);
    if ((xmm0 > MEMF(0x648E38))) goto loc_0006EA78; /* ja: above (unsigned >) */

loc_0006EA76: ;
    SET_LO8(eax, LO8(eax) | 0x20);

loc_0006EA78: ;
    MEM8(esi + 0x9F) = LO8(eax);

loc_0006EA7E: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006EA90
 * Original: 0x0006EA90 - 0x0006EAA8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA90(void)
{
    float xmm0;

loc_0006EA90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0006E8C0(); /* call 0x0006E8C0 */

loc_0006EA9E: ;
    esp = esp + 4;
    MEMF(esi + 0xC) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EAB0
 * Original: 0x0006EAB0 - 0x0006EAC8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EAB0(void)
{
    float xmm0;

loc_0006EAB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0006E8C0(); /* call 0x0006E8C0 */

loc_0006EABE: ;
    esp = esp + 4;
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EAD0
 * Original: 0x0006EAD0 - 0x0006EAE8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EAD0(void)
{
    float xmm0;

loc_0006EAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0006E8C0(); /* call 0x0006E8C0 */

loc_0006EADE: ;
    esp = esp + 4;
    MEMF(esi + 4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EAF0
 * Original: 0x0006EAF0 - 0x0006ED17 (551 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EAF0(void)
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

loc_0006EAF0: ;
    esp = esp - 0x10;
    ecx = MEM32(esi + 0x8C);
    xmm0 = MEMF(esi + 0xD8); /* movss */
    xmm3 = MEMF(esi + 0xE0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0xDC); /* mulss */
    eax = ecx;
    eax = eax << 0x16;
    eax = (uint32_t)((int32_t)eax >> 0x16);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm3; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0006EB5E; /* jp: parity */

loc_0006EB4B: ;
    /* ucomiss xmm3, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0006ECE5; /* jnp: not parity */

loc_0006EB5C: ;
    goto loc_0006EBA3;

loc_0006EB5E: ;
    /* ucomiss xmm3, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006EBA3; /* jp: parity */

loc_0006EB6B: ;
    ecx = (uint32_t)((int32_t)ecx >> 0xA);
    if (TEST_Z(ecx, ecx)) goto loc_0006EBA3; /* je: equal / zero */

loc_0006EB72: ;
    ecx = ecx + ecx * 2;
    SET_LO16(eax, MEM16(ecx * 4 + 0x69D4D8));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0006EBA3; /* je: equal / zero */

loc_0006EB82: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0006EB8E: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0xC;

loc_0006EBA3: ;
    xmm7 = MEMF(0x648E6C); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    if ((xmm4 < xmm7)) goto loc_0006EBC7; /* jb: below (unsigned <) */

loc_0006EBBD: ;
    xmm5 = xmm5 - MEMF(0x648F60); /* subss */
    goto loc_0006EBDF;

loc_0006EBC7: ;
    xmm6 = MEMF(0x648F64); /* movss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 < xmm4)) goto loc_0006EBDF; /* jb: below (unsigned <) */

loc_0006EBD4: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */

loc_0006EBDF: ;
    xmm4 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    xmm2 = xmm2 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm6 = xmm4; /* movaps */
    if ((xmm0 < xmm7)) goto loc_0006EC19; /* jb: below (unsigned <) */

loc_0006EC0B: ;
    xmm7 = MEMF(0x648F60); /* movss */
    xmm6 = xmm6 - xmm7; /* subss */
    goto loc_0006EC35;

loc_0006EC19: ;
    xmm7 = MEMF(0x648F64); /* movss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    xmm7 = MEMF(0x648F60); /* movss */
    if ((xmm7 < xmm0)) goto loc_0006EC35; /* jb: below (unsigned <) */

loc_0006EC2E: ;
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm7; /* subss */

loc_0006EC35: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, xmm5 - sets EFLAGS */
    MEMF(esp + 8) = xmm5; /* movss */
    if ((xmm6 < xmm5)) goto loc_0006EC4C; /* jb: below (unsigned <) */

loc_0006EC47: ;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 > xmm6)) goto loc_0006EC56; /* ja: above (unsigned >) */

loc_0006EC4C: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 < xmm6)) goto loc_0006EC74; /* jb: below (unsigned <) */

loc_0006EC51: ;
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_0006EC74; /* jbe: below or equal (unsigned <=) */

loc_0006EC56: ;
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm6; /* movaps */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 8) = xmm6; /* movss */
    xmm4 = xmm1; /* movaps */
    goto loc_0006EC8A;

loc_0006EC74: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 <= xmm6)) goto loc_0006EC81; /* jbe: below or equal (unsigned <=) */

loc_0006EC79: ;
    xmm3 = xmm3 + MEMF(esp + 4); /* addss */
    goto loc_0006EC87;

loc_0006EC81: ;
    xmm3 = xmm3 - MEMF(esp + 4); /* subss */

loc_0006EC87: ;
    xmm0 = xmm3; /* movaps */

loc_0006EC8A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esp) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0006ECBD; /* jbe: below or equal (unsigned <=) */

loc_0006ECA1: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0006ECBD; /* jbe: below or equal (unsigned <=) */

loc_0006ECB2: ;
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = xmm6; /* movaps */
    goto loc_0006ECD7;

loc_0006ECBD: ;
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_0006ECC8; /* jbe: below or equal (unsigned <=) */

loc_0006ECC2: ;
    xmm4 = xmm4 + xmm7; /* addss */
    goto loc_0006ECD1;

loc_0006ECC8: ;
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 < xmm7)) goto loc_0006ECD7; /* jb: below (unsigned <) */

loc_0006ECCD: ;
    xmm4 = xmm4 - xmm7; /* subss */

loc_0006ECD1: ;
    MEMF(esp + 0x14) = xmm4; /* movss */

loc_0006ECD7: ;
    MEMF(esi + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */

loc_0006ECE5: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1B)) goto loc_0006ECF4; /* je: equal / zero */

loc_0006ECEF: ;
    if (CMP_NE(eax, 0x1E)) goto loc_0006ED13; /* jne: not equal / not zero */

loc_0006ECF4: ;
    SET_LO8(eax, MEM8(esi + 0x9F));
    SET_LO8(eax, LO8(eax) & 0x9F);
    /* comiss xmm0, MEMF(0x648E38) - sets EFLAGS */
    MEM8(esi + 0x9F) = LO8(eax);
    if ((xmm0 > MEMF(0x648E38))) goto loc_0006ED0D; /* ja: above (unsigned >) */

loc_0006ED0B: ;
    SET_LO8(eax, LO8(eax) | 0x20);

loc_0006ED0D: ;
    MEM8(esi + 0x9F) = LO8(eax);

loc_0006ED13: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0006ED20
 * Original: 0x0006ED20 - 0x0006ED38 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ED20(void)
{
    float xmm0;

loc_0006ED20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0006EAF0(); /* call 0x0006EAF0 */

loc_0006ED2E: ;
    esp = esp + 4;
    MEMF(esi + 4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006ED40
 * Original: 0x0006ED40 - 0x0006ED8D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ED40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006ED40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(esi + 0xC7));
    ecx = MEM32(esi + 0xA4);
    ebx = eax;
    eax = eax & 4;
    MEM32(esp + 0xC) = eax;
    ebx = ebx & 3;
    ebp = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x800B - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x7FA1F8);
    edx = 0x28;
    MEM32(esp + 0x18) = 3;
    if (CMP_NE(ecx, 0x800B)) { sub_0006ED8D(); return; } /* jne: not equal / not zero */

loc_0006ED81: ;
    if (CMP_NE(edi, 0xC)) { sub_0006ED8D(); return; } /* jne: not equal / not zero */

loc_0006ED86: ;
    edx = 0x22;
    g_seh_ebp = ebp; sub_0006EDD7(); return; /* tail jmp 0x0006EDD7 */

}

/**
 * sub_0006EE90
 * Original: 0x0006EE90 - 0x0006EF28 (152 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EE90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006EE90: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x8C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(ecx + 0xC7));
    PUSH32(esp, ebp);
    ebp = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 0xDC);
    ebx = ebx & 3;
    ebp = ebp & 0xFFFF;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_NZ(eax, eax)) goto loc_0006EEE9; /* jne: not equal / not zero */

loc_0006EEC7: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x16);
    edx = ZX16(MEM16(ecx + 0x14));
    eax = eax << 0x10;
    eax = eax | edx;
    MEM32(ecx + 0xD8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x18);
    eax = eax | 0x80000000u;
    MEM32(ecx + 0xDC) = eax;

loc_0006EEE9: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0xD8));
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ecx + 0xDA));
    edx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO16(edx, MEM16(ecx + 0xDC));
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x2C) = edx;
    if (TEST_NZ(ebx, ebx)) { sub_0006EF28(); return; } /* jne: not equal / not zero */

loc_0006EF14: ;
    POP32(esp, edi);
    MEM16(ecx + 0x16) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ecx + 0x14) = LO16(eax);
    MEM16(ecx + 0x18) = LO16(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F140
 * Original: 0x0006F140 - 0x0006F1BB (123 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FA1F8);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(esi + 0xA4), 0x8006 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x76FD10);
    if (CMP_NE(MEM32(esi + 0xA4), 0x8006)) { sub_0006F1BB(); return; } /* jne: not equal / not zero */

loc_0006F15E: ;
    if (CMP_NE(ebp, 0x35)) { sub_0006F1BB(); return; } /* jne: not equal / not zero */

loc_0006F163: ;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0006F185; /* jle: less or equal (signed <=) */

loc_0006F169: ;
    edx = MEM32(0x8471B8);
    ecx = edx + 0xC6;

loc_0006F175: ;
    if (CMP_EQ(MEM8(ecx), 0xFD)) goto loc_0006F1AF; /* je: equal / zero */

loc_0006F17A: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edi)) goto loc_0006F175; /* jl: less (signed <) */

loc_0006F185: ;
    esi = 0; /* xor self */

loc_0006F187: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00073350(); /* call 0x00073350 */

loc_0006F18D: ;
    xmm2 = MEMF(0x649984); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    esp = esp + 4;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_0006F1CA(); return; /* tail jmp 0x0006F1CA */

loc_0006F1AF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + edx;
    esi = eax;
    goto loc_0006F187;

}

/**
 * sub_0006FBF0
 * Original: 0x0006FBF0 - 0x0006FE48 (600 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FBF0: ;
    esp = esp - 0xA0;
    if (TEST_Z(esi, esi)) goto loc_0006FE41; /* je: equal / zero */

loc_0006FBFE: ;
    PUSH32(esp, 0x14);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xB4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_0006FC21: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0006FE41; /* je: equal / zero */

loc_0006FC2C: ;
    xmm1 = MEMF(esp + 0xA4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(eax, 4)) goto loc_0006FDD2; /* jl: less (signed <) */

loc_0006FC56: ;
    goto loc_0006FC60;

    /* nop */
    /* nop */

loc_0006FC60: ;
    edx = MEM32(esp + ecx * 4 + 0x5C);
    edi = MEM32(esp + ecx * 4 + 0xC);
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(ebx + ebp + 0x1C) = xmm3; /* movss */
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = MEM32(ebx + edx + 0x44);
    if (TEST_Z(ebp, ebp)) goto loc_0006FCB9; /* je: equal / zero */

loc_0006FC90: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(ebx + edi * 4);
    edi = MEM32(edi + 4);
    xmm5 = (float)(int32_t)MEM32(edx + edi + 0x48); /* cvtsi2ss */
    edx = edx + edi;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_0006FCB9: ;
    edx = MEM32(esp + ecx * 4 + 0x60);
    edi = MEM32(esp + ecx * 4 + 0x10);
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(ebx + ebp + 0x1C) = xmm3; /* movss */
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = MEM32(ebx + edx + 0x44);
    if (TEST_Z(ebp, ebp)) goto loc_0006FD12; /* je: equal / zero */

loc_0006FCE9: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(ebx + edi * 4);
    edi = MEM32(edi + 4);
    xmm5 = (float)(int32_t)MEM32(edx + edi + 0x48); /* cvtsi2ss */
    edx = edx + edi;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_0006FD12: ;
    edx = MEM32(esp + ecx * 4 + 0x64);
    edi = MEM32(esp + ecx * 4 + 0x14);
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(ebx + ebp + 0x1C) = xmm3; /* movss */
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = MEM32(ebx + edx + 0x44);
    if (TEST_Z(ebp, ebp)) goto loc_0006FD6B; /* je: equal / zero */

loc_0006FD42: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(ebx + edi * 4);
    edi = MEM32(edi + 4);
    xmm5 = (float)(int32_t)MEM32(edx + edi + 0x48); /* cvtsi2ss */
    edx = edx + edi;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_0006FD6B: ;
    edx = MEM32(esp + ecx * 4 + 0x68);
    edi = MEM32(esp + ecx * 4 + 0x18);
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(ebx + ebp + 0x1C) = xmm3; /* movss */
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = MEM32(ebx + edx + 0x44);
    if (TEST_Z(ebp, ebp)) goto loc_0006FDC4; /* je: equal / zero */

loc_0006FD9B: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(ebx + edi * 4);
    edi = MEM32(edi + 4);
    xmm5 = (float)(int32_t)MEM32(edx + edi + 0x48); /* cvtsi2ss */
    edx = edx + edi;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_0006FDC4: ;
    ecx = ecx + 4;
    edx = eax + -3;
    if (CMP_L(ecx, edx)) goto loc_0006FC60; /* jl: less (signed <) */

loc_0006FDD2: ;
    if (CMP_GE(ecx, eax)) goto loc_0006FE3E; /* jge: greater or equal (signed >=) */

loc_0006FDD6: ;
    goto loc_0006FDE0;

    /* nop */
    /* nop */

loc_0006FDE0: ;
    edx = MEM32(esp + ecx * 4 + 0x5C);
    edi = MEM32(esp + ecx * 4 + 0xC);
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(ebx + ebp + 0x1C) = xmm3; /* movss */
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + edi * 4);
    ebx = MEM32(ebx + 4);
    ebp = MEM32(ebx + edx + 0x44);
    if (TEST_Z(ebp, ebp)) goto loc_0006FE39; /* je: equal / zero */

loc_0006FE10: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(ebx + edi * 4);
    edi = MEM32(edi + 4);
    xmm5 = (float)(int32_t)MEM32(edx + edi + 0x48); /* cvtsi2ss */
    edx = edx + edi;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_0006FE39: ;
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0006FDE0; /* jl: less (signed <) */

loc_0006FE3E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006FE41: ;
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0006FE50
 * Original: 0x0006FE50 - 0x0006FE77 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE50(void)
{

loc_0006FE50: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x76FE18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0006FBF0(); /* call 0x0006FBF0 */

loc_0006FE72: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FE80
 * Original: 0x0006FE80 - 0x00070304 (1156 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE80(void)
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

loc_0006FE80: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0); sub_000640D0(); /* call 0x000640D0 */

loc_0006FE95: ;
    SET_LO8(ecx, MEM8(esi + 0xC7));
    eax = MEM32(esi + 0x8C);
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(ecx));
    edi = eax;
    eax = eax << 0x16;
    edi = (uint32_t)((int32_t)edi >> 0xA);
    eax = (uint32_t)((int32_t)eax >> 0x16);
    esp = esp + 4;
    edi = edi & 0x3F;
    ebx = ebx & 3;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ecx);
    MEM32(esp + 0x20) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0006FED1; /* jne: not equal / not zero */

loc_0006FEC5: ;
    MEM32(esp + 0x20) = 1;
    eax = MEM32(esp + 0x20);

loc_0006FED1: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm2 = MEMF(esi + 0xE0); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_0006FF00; /* je: equal / zero */

loc_0006FEFB: ;
    if (CMP_NE(ebx, 1)) goto loc_0006FF11; /* jne: not equal / not zero */

loc_0006FF00: ;
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    xmm6 = xmm5; /* movaps */
    if (CMP_NE(ebx, 1)) goto loc_0006FF11; /* jne: not equal / not zero */

loc_0006FF08: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0006FF2C; /* je: equal / zero */

loc_0006FF0D: ;
    edx = ebx;
    goto loc_0006FF30;

loc_0006FF11: ;
    if (TEST_Z(ebx, ebx)) goto loc_0006FF1A; /* je: equal / zero */

loc_0006FF15: ;
    if (CMP_NE(ebx, 3)) goto loc_0006FF2C; /* jne: not equal / not zero */

loc_0006FF1A: ;
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm5; /* movaps */

loc_0006FF2C: ;
    edx = MEM32(esp + 0x1C);

loc_0006FF30: ;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006FF46; /* jp: parity */

loc_0006FF39: ;
    /* ucomiss xmm2, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000701E9; /* jnp: not parity */

loc_0006FF46: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x648F78); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 / MEMF(0x7FA21C); /* divss */
    xmm4 = xmm4 / xmm1; /* divss */
    xmm1 = MEMF(esi + 0xD8); /* movss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006FF86; /* jp: parity */

loc_0006FF76: ;
    xmm1 = MEMF(0x648D3C); /* movss */
    MEMF(esi + 0xD8) = xmm1; /* movss */

loc_0006FF86: ;
    xmm1 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006FFA7; /* jp: parity */

loc_0006FF97: ;
    xmm1 = MEMF(0x6496F4); /* movss */
    MEMF(esi + 0xDC) = xmm1; /* movss */

loc_0006FFA7: ;
    xmm1 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm2, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0006FFDF; /* jp: parity */

loc_0006FFBE: ;
    /* ucomiss xmm6, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006FFD4; /* jp: parity */

loc_0006FFC7: ;
    eax = edi + edi * 2;
    ebp = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x69D4DA);
    goto loc_0006FFDF;

loc_0006FFD4: ;
    edx = edi + edi * 2;
    ebp = (uint32_t)(int32_t)SMEM16(edx * 4 + 0x69D4D8);

loc_0006FFDF: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_0007001B; /* jb: below (unsigned <) */

loc_00070008: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_00070039;

loc_0007001B: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_00070039; /* jb: below (unsigned <) */

loc_00070028: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00070039: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00070115; /* jbe: below or equal (unsigned <=) */

loc_0007005B: ;
    xmm0 = MEMF(esi + 0xD8); /* movss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_000700AF; /* jb: below (unsigned <) */

loc_00070068: ;
    esp = esp - 8;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 / xmm4; /* divss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_00070089: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x1B));
    xmm7 = xmm7 - xmm0; /* subss */
    xmm7 = xmm7 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    esp = esp + 8;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_000700B5;

loc_000700AF: ;
    MEMF(esp + 0x14) = xmm5; /* movss */

loc_000700B5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00070103; /* jbe: below or equal (unsigned <=) */

loc_000700CD: ;
    /* ucomiss xmm6, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    if (1 /* jp after test - parity */) goto loc_000700F1; /* jp: parity */

loc_000700E2: ;
    eax = edi + edi * 2;
    ebp = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x69D4DE);
    ebx = 0; /* xor self */
    goto loc_00070163;

loc_000700F1: ;
    edx = edi + edi * 2;
    ebp = (uint32_t)(int32_t)SMEM16(edx * 4 + 0x69D4DC);
    ebx = 3;
    goto loc_00070163;

loc_00070103: ;
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    MEMF(esi + 0xDC) = xmm1; /* movss */
    goto loc_00070163;

loc_00070115: ;
    xmm3 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm3, xmm5 - sets EFLAGS */
    xmm1 = xmm1 * xmm4; /* mulss */
    if ((xmm3 <= xmm5)) goto loc_00070143; /* jbe: below or equal (unsigned <=) */

loc_00070124: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00070163; /* jbe: below or equal (unsigned <=) */

loc_0007013B: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_00070163;

loc_00070143: ;
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x649354); /* movss */
    xmm0 = xmm2; /* movaps */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00070163; /* jbe: below or equal (unsigned <=) */

loc_0007015D: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_00070163: ;
    /* comiss xmm5, xmm3 - sets EFLAGS */
    if ((xmm5 <= xmm3)) goto loc_00070171; /* jbe: below or equal (unsigned <=) */

loc_00070168: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_00070174;

loc_00070171: ;
    xmm0 = xmm3; /* movaps */

loc_00070174: ;
    /* comiss xmm0, MEMF(0x648E5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E5C))) goto loc_0007018E; /* jbe: below or equal (unsigned <=) */

loc_0007017D: ;
    xmm3 = xmm3 * MEMF(esp + 0x14); /* mulss */
    /* comiss xmm5, xmm3 - sets EFLAGS */
    if ((xmm5 <= xmm3)) goto loc_0007018E; /* jbe: below or equal (unsigned <=) */

loc_00070188: ;
    MEMF(esp + 0x14) = xmm5; /* movss */

loc_0007018E: ;
    xmm1 = MEMF(0x648F64); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000701AB; /* jbe: below or equal (unsigned <=) */

loc_000701A1: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    goto loc_000701BC;

loc_000701AB: ;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_000701C2; /* jb: below (unsigned <) */

loc_000701B4: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_000701BC: ;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_000701C2: ;
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(esi + 0xC7) = LO8(ecx);
    if (TEST_Z(ebp, ebp)) goto loc_000701DD; /* je: equal / zero */

loc_000701D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_000701DA: ;
    esp = esp + 0xC;

loc_000701DD: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */

loc_000701E9: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(0x7FA1F8);
    MEMF(esi + 0xE0) = xmm2; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00070217; /* jne: not equal / not zero */

loc_00070200: ;
    xmm1 = MEMF(esi + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00070217; /* jp: parity */

loc_0007020E: ;
    if (CMP_NE(ebx, 1)) goto loc_000702FC; /* jne: not equal / not zero */

loc_00070217: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00070257; /* jne: not equal / not zero */

loc_00070220: ;
    ebp = MEM32(0x8471B8);
    ecx = esi;
    ecx = ecx - ebp;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000540C0(); /* call 0x000540C0 */

loc_00070243: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00070257; /* je: equal / zero */

loc_0007024A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_0007025C;

loc_00070257: ;
    MEMF(esi + 8) = xmm0; /* movss */

loc_0007025C: ;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    eax = ZX8(MEM8(esi + 0x8F));
    if (CMP_NE(ebx, 2)) goto loc_00070274; /* jne: not equal / not zero */

loc_00070268: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    g_seh_ebp = ebp; sub_0001B470(); return; /* tail jmp 0x0001B470 */

loc_00070274: ;
    if (TEST_Z(eax, eax)) goto loc_000702FC; /* je: equal / zero */

loc_0007027C: ;
    eax = MEM32(esp + 0x20);
    if (CMP_GE(eax & eax, 0)) goto loc_00070286; /* jge: greater or equal (signed >=) */

loc_00070284: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_00070286: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x24) = eax;
    fp_top() = fabs(fp_top()); /* fabs */
    eax = ebx;
    eax--;
    /* FPU: fisub dword ptr [esp + 0x24] */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    if ((eax != 0)) goto loc_000702FC; /* jne: not equal / not zero */

loc_000702A9: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5E0780);
    PUSH32(esp, 0); sub_0006FE50(); /* call 0x0006FE50 */

loc_000702B8: ;
    SET_LO8(edx, 0xF8);
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_000702BF: ;
    edi = eax;
    edx = MEM32(edi + 0x60);
    ecx = MEM32(edi + 0x64);
    eax = MEM32(edx + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = 0x5E0768;
    PUSH32(esp, 0); sub_0006FBF0(); /* call 0x0006FBF0 */

loc_000702DD: ;
    edx = MEM32(edi + 0x64);
    eax = MEM32(edi + 0x60);
    ecx = MEM32(eax + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = 0x5E0748;
    PUSH32(esp, 0); sub_0006FBF0(); /* call 0x0006FBF0 */

loc_000702F9: ;
    esp = esp + 0x20;

loc_000702FC: ;
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
 * sub_00070310
 * Original: 0x00070310 - 0x000703A2 (146 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070310: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, esi);
    eax = 1;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000640D0(); /* call 0x000640D0 */

loc_0007034F: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x8C);
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm4 = MEMF(esi + 0xE0); /* movss */
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(esi + 0xC7));
    esp = esp + 4;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    ebx = ebx & 3;
    if ((ebx == 0)) goto loc_00070394; /* je: equal / zero */

loc_0007038F: ;
    if (CMP_NE(ebx, 1)) { sub_000703A2(); return; } /* jne: not equal / not zero */

loc_00070394: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm1 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_000703A5(); return; /* tail jmp 0x000703A5 */

}

/**
 * sub_00070700
 * Original: 0x00070700 - 0x0007072D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070700(void)
{
    int _flags = 0; /* fallback flag var */

loc_00070700: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_0007072C; /* jne: not equal / not zero */

loc_0007070A: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007072C; /* jne: not equal / not zero */

loc_00070714: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0xC7));
    if (TEST_NZ(LO8(eax), 7)) goto loc_0007072C; /* jne: not equal / not zero */

loc_00070722: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(ecx + 0xC7) = LO8(eax);

loc_0007072C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070730
 * Original: 0x00070730 - 0x000707E6 (182 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00070730: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xE0);
    if (TEST_NZ(eax, eax)) goto loc_0007074D; /* jne: not equal / not zero */

loc_0007073E: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x16);
    eax = eax | 0x80000000u;
    MEM32(ecx + 0xE0) = eax;

loc_0007074D: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xD8);
    if (TEST_Z(edi, edi)) goto loc_000707E4; /* je: equal / zero */

loc_0007075C: ;
    eax = ZX16(MEM16(ecx + 0x8E));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xDC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xE0);
    eax = (uint32_t)((int32_t)eax >> 8);
    eax = eax + edx;
    SET_LO8(edx, MEM8(ecx + 0xC7));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) & 0xFC);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x16));
    MEM8(ecx + 0xC7) = LO8(edx);
    SET_LO8(ebx, LO8(edx));
    edx = SX16(LO16(esi));
    if (CMP_EQ(edx, eax)) goto loc_000707D9; /* je: equal / zero */

loc_0007079D: ;
    edx = edx - eax;
    if (((int32_t)edx >= 0)) goto loc_000707C5; /* jns: not sign (positive) */

loc_000707A1: ;
    edx = (uint32_t)(-(int32_t)edx);
    if (CMP_GE(edx, edi)) goto loc_000707B5; /* jge: greater or equal (signed >=) */

loc_000707A7: ;
    POP32(esp, esi);
    MEM8(ecx + 0xC7) = LO8(ebx);
    POP32(esp, ebx);
    MEM16(ecx + 0x16) = LO16(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000707B5: ;
    esi = esi + edi;
    MEM16(ecx + 0x16) = LO16(esi);
    POP32(esp, esi);
    MEM8(ecx + 0xC7) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000707C5: ;
    if (CMP_L(edx, edi)) goto loc_000707A7; /* jl: less (signed <) */

loc_000707C9: ;
    esi = esi - edi;
    MEM16(ecx + 0x16) = LO16(esi);
    POP32(esp, esi);
    MEM8(ecx + 0xC7) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000707D9: ;
    SET_LO8(ebx, LO8(ebx) | 3);
    POP32(esp, esi);
    MEM8(ecx + 0xC7) = LO8(ebx);
    POP32(esp, ebx);

loc_000707E4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000707F0
 * Original: 0x000707F0 - 0x00070B0F (799 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000707F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000707F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi + 0xE0);
    if (CMP_GE(esi, 0x20)) goto loc_00070AD5; /* jge: greater or equal (signed >=) */

loc_0007080A: ;
    eax = MEM32(edi + 0xDC);
    if (TEST_NZ(eax, eax)) goto loc_0007081E; /* jne: not equal / not zero */

loc_00070814: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x16);
    MEM32(edi + 0xDC) = eax;

loc_0007081E: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    xmm0 = MEMF(edi + 0xD8); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm0 * MEMF(0x64AE44); /* mulss */
    xmm1 = MEMF(0x64AE40); /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x64AE3C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xD8); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    MEMF(edi + 0xD8) = xmm0; /* movss */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 < xmm1)) goto loc_0007088E; /* jb: below (unsigned <) */

loc_00070882: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edi + 0xD8) = xmm0; /* movss */

loc_0007088E: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000708A3: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0xDC));
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    ecx = ecx + 0xA;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM16(edi + 0x16) = LO16(ecx);
    if (TEST_NZ(esi, esi)) goto loc_00070ABD; /* jne: not equal / not zero */

loc_000708BE: ;
    ebx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebp = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00070AD5; /* jle: less or equal (signed <=) */

loc_000708CF: ;
    esi = MEM32(0x84A5F8);
    xmm6 = MEMF(0x64A594); /* movss */
    xmm7 = MEMF(0x6493A8); /* movss */
    esi = esi + 0x236;
    goto loc_000708F0;

    /* nop */

loc_000708F0: ;
    eax = MEM32(esi + -466);
    if (TEST_Z(eax, eax)) goto loc_00070A13; /* je: equal / zero */

loc_000708FE: ;
    if (CMP_EQ(MEM8(esi), 0xFF)) goto loc_00070A13; /* je: equal / zero */

loc_00070907: ;
    eax = MEM32(edi + 0x8C);
    if (TEST_S(eax, eax)) goto loc_00070A13; /* jl: less (signed <) */

loc_00070915: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + -438); /* subss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(esi + -446); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if ((xmm6 <= xmm1)) goto loc_00070A05; /* jbe: below or equal (unsigned <=) */

loc_00070953: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi + -566;
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_0007096D: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    esp = esp + 0xC;
    MEM8(edi + 0x9F) = 0x31;
    xmm1 = xmm1 + xmm7; /* addss */
    /* comiss xmm1, MEMF(esi + -442) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + -442))) goto loc_00070A13; /* jbe: below or equal (unsigned <=) */

loc_00070993: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(esi + -442); /* addss */
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00070A13; /* jbe: below or equal (unsigned <=) */

loc_000709AD: ;
    if (CMP_BE(MEM16(esi + 0x178), 0)) goto loc_00070A13; /* jbe: below or equal (unsigned <=) */

loc_000709B7: ;
    eax = MEM32(0x84A5F8);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = esi + eax;
    edx = 1;
    PUSH32(esp, 0); sub_002F4FF0(); /* call 0x002F4FF0 */

loc_000709D1: ;
    if (TEST_Z(eax, eax)) goto loc_00070A93; /* je: equal / zero */

loc_000709D9: ;
    eax = MEM32(edi + 0x8C);
    if (TEST_Z(eax, eax)) goto loc_00070A27; /* je: equal / zero */

loc_000709E3: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax >> 0x10);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(edi + 0xE0) = eax;
    MEM8(edi + 0xC4) = MEM8(edi + 0xC4) | 4;
    goto loc_00070A52;

loc_00070A05: ;
    MEM8(edi + 0xEE) = 0xFF;
    MEM8(edi + 0x9F) = 0x21;

loc_00070A13: ;
    ebp++;
    esi = esi + 0x6D0;
    if (CMP_L(ebp, ebx)) goto loc_000708F0; /* jl: less (signed <) */

loc_00070A22: ;
    goto loc_00070AD5;

loc_00070A27: ;
    MEM8(edi + 0xC2) = 1;
    eax = MEM32(0x8471B8);
    ecx = edi;
    ecx = ecx - eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = 2;
    PUSH32(esp, 0); sub_0034ECB0(); /* call 0x0034ECB0 */

loc_00070A52: ;
    MEM8(edi + 0x9F) = 0x20;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (CMP_EQ(LO8(eax), 1)) goto loc_00070A8C; /* je: equal / zero */

loc_00070A62: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_00070A8C; /* je: equal / zero */

loc_00070A66: ;
    edx = MEM32(0x84A5F8);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    esi = esi + edx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CF);
    PUSH32(esp, ecx);
    eax = 0x80000001u;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00070A8C: ;
    PUSH32(esp, 0); sub_00144EC0(); /* call 0x00144EC0 */

loc_00070A91: ;
    goto loc_00070AD5;

loc_00070A93: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM8(edi + 0x9F) = 0x31;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00070AB5: ;
    MEM8(edi + 0xEE) = LO8(eax);
    goto loc_00070AD5;

loc_00070ABD: ;
    SET_LO8(edx, MEM8(edi + 0xE0));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    SET_LO8(edx, LO8(edx) << 3);
    MEM8(edi + 0x9F) = 0x31;
    MEM8(edi + 0xEE) = LO8(edx);

loc_00070AD5: ;
    eax = MEM32(edi + 0xE0);
    if (CMP_LE(eax & eax, 0)) goto loc_00070B07; /* jle: less or equal (signed <=) */

loc_00070ADF: ;
    eax = eax - MEM32(0x7FA20C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0xE0) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_00070B07; /* jg: greater (signed >) */

loc_00070AEF: ;
    MEM32(edi + 0xE0) = 0;
    MEM8(edi + 0xEE) = 0xFF;
    MEM8(edi + 0x9F) = 0x21;

loc_00070B07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00070B10
 * Original: 0x00070B10 - 0x00070B35 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00070B10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x8C);
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) goto loc_00070B34; /* je: equal / zero */

loc_00070B20: ;
    if (CMP_NE(MEM32(eax + 0xD8), ecx)) goto loc_00070B34; /* jne: not equal / not zero */

loc_00070B28: ;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0x8C) = ecx;

loc_00070B34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070B40
 * Original: 0x00070B40 - 0x00070BAF (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00070B40: ;
    SET_LO8(eax, MEM8(0x76EC82));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00070B60; /* je: equal / zero */

loc_00070B51: ;
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEM32(esi + 0xD8) = 0;

loc_00070B60: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00070BA4; /* jne: not equal / not zero */

loc_00070B69: ;
    edx = MEM32(0x8471B8);
    ecx = esi;
    ecx = ecx - edx;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000540C0(); /* call 0x000540C0 */

loc_00070B8D: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00070BA4; /* je: equal / zero */

loc_00070B95: ;
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEM32(esi + 0xD8) = 0;

loc_00070BA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006D970(); /* call 0x0006D970 */

loc_00070BAA: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070BB0
 * Original: 0x00070BB0 - 0x00070C35 (133 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070BB0(void)
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

loc_00070BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm1 = (float)(int32_t)MEM32(esi + 0x8C); /* cvtsi2ss */
    xmm2 = MEMF(esi + 0xD8); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x649550); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) { sub_00070C35(); return; } /* jnp: not parity */

loc_00070BE7: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm1 = 0.0f; /* xorps self = zero */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00070C23; /* ja: above (unsigned >) */

loc_00070C06: ;
    /* comiss xmm1, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(esp + 8))) goto loc_00070C12; /* jbe: below or equal (unsigned <=) */

loc_00070C0D: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00070C17;

loc_00070C12: ;
    eax = 1;

loc_00070C17: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0xD8); /* addss */

loc_00070C23: ;
    MEMF(esi + 0xD8) = xmm0; /* movss */
    MEMF(esi + 0xDC) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00070C92(); return; /* tail jmp 0x00070C92 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00070CB0
 * Original: 0x00070CB0 - 0x0007103F (911 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070CB0: ;
    esp = esp - 0x14;
    SET_LO8(eax, MEM8(0x76F0E0));
    xmm1 = MEMF(0x648F98); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(LO8(eax), 1)) goto loc_00070D0E; /* jne: not equal / not zero */

loc_00070CE0: ;
    ebp = MEM32(0x8471B8);
    ecx = esi;
    ecx = ecx - ebp;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000540C0(); /* call 0x000540C0 */

loc_00070D03: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00071037; /* jne: not equal / not zero */

loc_00070D0E: ;
    if (CMP_NE(MEM32(esi + 0xD8), ebx)) goto loc_00070D30; /* jne: not equal / not zero */

loc_00070D16: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    ecx = ecx | 0x80000000u;
    MEM32(esi + 0xD8) = ecx;
    MEM32(esi + 0xDC) = edx;

loc_00070D30: ;
    edx = MEM32(esi + 0x8C);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xD8);
    ebx = MEM32(esi + 0xDC);
    edx = edx & 0x3FF;
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (CMP_L(edx, 4)) goto loc_00070D69; /* jl: less (signed <) */

loc_00070D52: ;
    if (CMP_G(edx, 6)) goto loc_00070D69; /* jg: greater (signed >) */

loc_00070D57: ;
    PUSH32(esp, esi);
    eax = 1;
    PUSH32(esp, 0); sub_000640D0(); /* call 0x000640D0 */

loc_00070D62: ;
    edx = MEM32(esp + 0x24);
    esp = esp + 4;

loc_00070D69: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0xC7));
    eax = eax & 3;
    edi = eax;
    eax = 0; /* xor self */
    if (CMP_EQ(edi, 3)) goto loc_00070DB4; /* je: equal / zero */

loc_00070D7D: ;
    if (CMP_EQ(edi, 2)) goto loc_00070DB4; /* je: equal / zero */

loc_00070D82: ;
    if (CMP_EQ(edx, 4)) goto loc_00070DA4; /* je: equal / zero */

loc_00070D87: ;
    if (CMP_NE(edx, 7)) goto loc_00070E03; /* jne: not equal / not zero */

loc_00070D8C: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM32(esp + 0x1C) = 1;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    goto loc_00070F35;

loc_00070DA4: ;
    MEM32(esp + 0x18) = 1;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    goto loc_00070F2D;

loc_00070DB4: ;
    if (CMP_A(edx, 7)) goto loc_00070E03; /* ja: above (unsigned >) */

loc_00070DB9: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x71048); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00070DC0u) goto loc_00070DC0;
    if (_jt == 0x00070EA1u) goto loc_00070EA1;
    if (_jt == 0x00070EB8u) goto loc_00070EB8;
    if (_jt == 0x00070ED3u) goto loc_00070ED3;
    if (_jt == 0x00070EDAu) goto loc_00070EDA;
    if (_jt == 0x00070EEEu) goto loc_00070EEE;
    if (_jt == 0x00070F0Eu) goto loc_00070F0E;
    if (_jt == 0x00070F18u) goto loc_00070F18;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00070DC0: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    ebp = 0xFFFFFFBBu;
    ebx = 0xFFFFFF88u;
    if (CMP_NE(edi, 2)) goto loc_00070DD7; /* jne: not equal / not zero */

loc_00070DCF: ;
    MEM32(esp + 0x10) = 0x4E;

loc_00070DD7: ;
    ecx = MEM32(esp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_00070E03; /* je: equal / zero */

loc_00070DE7: ;
    ecx = MEM32(esp + 0x10);
    eax = eax | 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00070DF6: ;
    edx = MEM32(esp + 0x2C);
    esp = esp + 0xC;

loc_00070DFD: ;
    xmm1 = MEMF(esp + 0x14); /* movss */

loc_00070E03: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = MEMF(esi + 0xE0); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_00070E1D; /* je: equal / zero */

loc_00070E18: ;
    if (CMP_NE(edi, 3)) goto loc_00070E2E; /* jne: not equal / not zero */

loc_00070E1D: ;
    MEM16(esi + 0x14) = LO16(ebp);
    MEM16(esi + 0x18) = LO16(ebx);
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = xmm2; /* movaps */

loc_00070E2E: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00070E4C; /* jbe: below or equal (unsigned <=) */

loc_00070E33: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x6496F0); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00070E4C: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00070E60; /* jne: not equal / not zero */

loc_00070E54: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    if (CMP_NE(eax, ebx)) goto loc_00070F7E; /* jne: not equal / not zero */

loc_00070E60: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    if (CMP_EQ(ebp, ecx)) goto loc_00070F7E; /* je: equal / zero */

loc_00070E6C: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00070E80; /* je: equal / zero */

loc_00070E74: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    if (CMP_NE(eax, ebx)) goto loc_00070F7E; /* jne: not equal / not zero */

loc_00070E80: ;
    eax = ebp;
    eax = eax - ecx;
    xmm1 = xmm2; /* movaps */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00070F4E; /* jbe: below or equal (unsigned <=) */

loc_00070E98: ;
    eax = (int32_t)xmm1; /* cvttss2si */
    goto loc_00070F57;

loc_00070EA1: ;
    ebp = 0xFFFFFFBBu;
    ebx = 0x78;
    MEM32(esp + 0x18) = 1;
    goto loc_00070E03;

loc_00070EB8: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    ebp = 0x64;
    if (CMP_NE(edi, 2)) goto loc_00070E03; /* jne: not equal / not zero */

loc_00070EC6: ;
    MEM32(esp + 0x10) = 0x4E;
    goto loc_00070DE7;

loc_00070ED3: ;
    ebp = 0; /* xor self */
    goto loc_00070E03;

loc_00070EDA: ;
    ebp = 0x10E;
    ebx = 0xFFFFF84Au;
    MEM32(esp + 0x1C) = 1;
    goto loc_00070F2A;

loc_00070EEE: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    ebx = 0x8C;
    if (CMP_NE(edi, 2)) goto loc_00070E03; /* jne: not equal / not zero */

loc_00070EFC: ;
    MEM32(esp + 0x10) = 0xB95;
    eax = 0x10;
    goto loc_00070DE7;

loc_00070F0E: ;
    ebx = 0xFFFFFF74u;
    goto loc_00070E03;

loc_00070F18: ;
    ebp = 0xFFFFEFFCu;
    ebx = 0x1A6;
    MEM32(esp + 0x18) = 1;

loc_00070F2A: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */

loc_00070F2D: ;
    xmm0 = MEMF(0x648F38); /* movss */

loc_00070F35: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(edi, 2)) goto loc_00070DFD; /* jne: not equal / not zero */

loc_00070F41: ;
    MEM32(esp + 0x10) = 0x4E;
    goto loc_00070DE7;

loc_00070F4E: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00070F57; /* jbe: below or equal (unsigned <=) */

loc_00070F53: ;
    eax = (int32_t)xmm0; /* cvttss2si */

loc_00070F57: ;
    MEM16(esi + 0x14) = MEM16(esi + 0x14) + LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    if (CMP_NE(ecx, ebp)) goto loc_0007102F; /* jne: not equal / not zero */

loc_00070F67: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if (TEST_NZ(edx, edx)) goto loc_00071029; /* jne: not equal / not zero */

loc_00070F75: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4E);
    goto loc_00071020;

loc_00070F7E: ;
    SET_LO16(ecx, MEM16(esi + 0x18));
    eax = SX16(LO16(ecx));
    if (CMP_EQ(eax, ebx)) goto loc_00070FD1; /* je: equal / zero */

loc_00070F89: ;
    ebx = ebx - eax;
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00070FB2; /* jbe: below or equal (unsigned <=) */

loc_00070F98: ;
    ebx = (int32_t)xmm2; /* cvttss2si */
    ecx = ecx + ebx;
    POP32(esp, edi);
    MEM16(esi + 0x18) = LO16(ecx);
    MEMF(esi + 0xE0) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00070FB2: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00070FBB; /* jbe: below or equal (unsigned <=) */

loc_00070FB7: ;
    ebx = (int32_t)xmm0; /* cvttss2si */

loc_00070FBB: ;
    ecx = ecx + ebx;
    POP32(esp, edi);
    MEM16(esi + 0x18) = LO16(ecx);
    MEMF(esi + 0xE0) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00070FD1: ;
    if (CMP_EQ(edi, 2)) { sub_0007103F(); return; } /* je: equal / zero */

loc_00070FD6: ;
    if (CMP_NE(edi, 1)) goto loc_0007102F; /* jne: not equal / not zero */

loc_00070FDB: ;
    eax = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xC7));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    eax = MEM32(esi + 0xCC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi + 0xCC;
    MEM8(esi + 0xC7) = LO8(ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0007102F; /* je: equal / zero */

loc_00070FFF: ;
    if (CMP_EQ(edx, 5)) goto loc_0007102F; /* je: equal / zero */

loc_00071004: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00071019: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C8);

loc_00071020: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00071026: ;
    esp = esp + 0xC;

loc_00071029: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_0007102F: ;
    MEMF(esi + 0xE0) = xmm0; /* movss */

loc_00071037: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00071070
 * Original: 0x00071070 - 0x000712DF (623 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071070(void)
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

loc_00071070: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(ecx + 0xC); /* movss */
    xmm2 = MEMF(ecx + 0xE0); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xC7));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x8C);
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    edx = edx & 3;
    if ((edx == 0)) goto loc_000710B6; /* je: equal / zero */

loc_000710B1: ;
    if (CMP_NE(edx, 1)) goto loc_000710B9; /* jne: not equal / not zero */

loc_000710B6: ;
    xmm1 = xmm5; /* movaps */

loc_000710B9: ;
    if (TEST_Z(edx, edx)) goto loc_000710C2; /* je: equal / zero */

loc_000710BD: ;
    if (CMP_NE(edx, 3)) goto loc_000710D4; /* jne: not equal / not zero */

loc_000710C2: ;
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm5; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */

loc_000710D4: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000710EA; /* jp: parity */

loc_000710DD: ;
    /* ucomiss xmm2, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00071249; /* jnp: not parity */

loc_000710EA: ;
    xmm3 = MEMF(ecx + 0xD8); /* movss */
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_0007110F; /* jp: parity */

loc_00071101: ;
    xmm3 = MEMF(0x648EAC); /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */

loc_0007110F: ;
    xmm3 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_00071134; /* jp: parity */

loc_00071126: ;
    xmm3 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */

loc_00071134: ;
    xmm6 = MEMF(0x648F60); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    /* comiss xmm4, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm4 < MEMF(0x648E6C))) goto loc_00071174; /* jb: below (unsigned <) */

loc_00071165: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    goto loc_0007118E;

loc_00071174: ;
    xmm7 = MEMF(0x648F64); /* movss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 < xmm4)) goto loc_0007118E; /* jb: below (unsigned <) */

loc_00071181: ;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x10) = xmm4; /* movss */

loc_0007118E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000711EC; /* jbe: below or equal (unsigned <=) */

loc_000711AC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0007121E; /* jbe: below or equal (unsigned <=) */

loc_000711CC: ;
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm2 = xmm5; /* movaps */
    if (1 /* jp after test - parity */) goto loc_000711E5; /* jp: parity */

loc_000711E1: ;
    edx = 0; /* xor self */
    goto loc_00071224;

loc_000711E5: ;
    edx = 3;
    goto loc_00071224;

loc_000711EC: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_0007120C; /* jbe: below or equal (unsigned <=) */

loc_000711F7: ;
    xmm3 = xmm3 - xmm2; /* subss */
    xmm3 = xmm3 * MEMF(0x648E54); /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm2 = xmm3; /* movaps */
    goto loc_00071224;

loc_0007120C: ;
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 * MEMF(0x648E54); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    goto loc_00071224;

loc_0007121E: ;
    xmm2 = MEMF(esp + 8); /* movss */

loc_00071224: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_0007122F; /* jbe: below or equal (unsigned <=) */

loc_00071229: ;
    xmm0 = xmm0 + xmm6; /* addss */
    goto loc_00071238;

loc_0007122F: ;
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 < xmm6)) goto loc_0007123E; /* jb: below (unsigned <) */

loc_00071234: ;
    xmm0 = xmm0 - xmm6; /* subss */

loc_00071238: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0007123E: ;
    SET_LO8(ebx, LO8(ebx) & 0xFC);
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(ecx + 0xC7) = LO8(ebx);

loc_00071249: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ecx + 0xE0) = xmm2; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00071268; /* jne: not equal / not zero */

loc_0007125A: ;
    xmm1 = MEMF(ecx + 0xC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000712D9; /* jnp: not parity */

loc_00071268: ;
    eax = ZX8(MEM8(ecx + 0x8F));
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000712D9; /* je: equal / zero */

loc_00071278: ;
    if (TEST_Z(esi, esi)) goto loc_000712D9; /* je: equal / zero */

loc_0007127C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(0x773F94);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax--;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_GE(eax, ecx)) goto loc_000712D9; /* jge: greater or equal (signed >=) */

loc_00071299: ;
    if (TEST_S(eax, eax)) goto loc_000712D9; /* jl: less (signed <) */

loc_0007129D: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000712C5; /* jbe: below or equal (unsigned <=) */

loc_000712B0: ;
    eax = eax + eax * 8;
    POP32(esp, esi);
    xmm0 = xmm1; /* movaps */
    MEMF(eax * 4 + 0x773FA4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_000712C5: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_000712CD; /* jbe: below or equal (unsigned <=) */

loc_000712CA: ;
    xmm0 = xmm5; /* movaps */

loc_000712CD: ;
    eax = eax + eax * 8;
    MEMF(eax * 4 + 0x773FA4) = xmm0; /* movss */

loc_000712D9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000712E0
 * Original: 0x000712E0 - 0x00071338 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000712E0(void)
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

loc_000712E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x773F94);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x8C);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_GE(eax, ecx)) goto loc_00071315; /* jge: greater or equal (signed >=) */

loc_000712FF: ;
    if (TEST_S(eax, eax)) goto loc_00071315; /* jl: less (signed <) */

loc_00071303: ;
    eax = eax + eax * 8;
    xmm0 = MEMF(eax * 4 + 0x773FA4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_00071315: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00071324: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0xEE) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00071335; /* jne: not equal / not zero */

loc_0007132E: ;
    MEM8(esi + 0xEE) = 1;

loc_00071335: ;
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
 * sub_00071340
 * Original: 0x00071340 - 0x00071542 (514 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071340: ;
    eax = MEM32(ebx + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0007144F; /* jne: not equal / not zero */

loc_00071350: ;
    eax = ZX16(MEM16(ebx + 0x1A));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x14E6);
    eax = eax << 2;
    PUSH32(esp, 0x5E0798);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0007136A: ;
    ebp = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp MEM16(ebx + 0x1A), LO16(ebp) - flags set for next jcc */
    MEM32(ebx + 0xD8) = eax;
    if (CMP_BE(MEM16(ebx + 0x1A), LO16(ebp))) goto loc_0007144E; /* jbe: below or equal (unsigned <=) */

loc_0007137F: ;
    edx = 0; /* xor self */

loc_00071381: ;
    ecx = MEM32(ebx + 0x78);
    ecx = MEM32(edx + ecx + 0x10);
    MEM32(eax + ebp * 8) = ecx;
    ecx = MEM32(ebx + 0x78);
    ecx = MEM32(edx + ecx + 0x14);
    MEM32(eax + ebp * 8 + 4) = ecx;
    esi = MEM32(ebx + 0x78);
    edi = MEM32(ebx + 0x70);
    esi = esi + edx;
    edi = edi + edx;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebx + 0x78);
    edi = MEM32(ebx + 0x74);
    esi = esi + edx;
    edi = edi + edx;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x14);
    ecx = MEM32(ebx + 0x70);
    ecx = ecx + edx;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x16);
    ecx = MEM32(ebx + 0x70);
    ecx = edx + ecx + 4;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x18);
    ecx = MEM32(ebx + 0x70);
    ecx = edx + ecx + 8;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x14);
    ecx = MEM32(ebx + 0x74);
    ecx = ecx + edx;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x16);
    ecx = MEM32(ebx + 0x74);
    ecx = edx + ecx + 4;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x18);
    ecx = MEM32(ebx + 0x74);
    ecx = edx + ecx + 8;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    ecx = ZX16(MEM16(ebx + 0x1A));
    ebp++;
    edx = edx + 0x1C;
    if (CMP_L(ebp, ecx)) goto loc_00071381; /* jl: less (signed <) */

loc_0007144E: ;
    POP32(esp, ebp);

loc_0007144F: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x18);
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(0x649ADC); /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(0x6490AC); /* movss */
    esi = MEM32(ebx + 0xD8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x649AD8); /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 - MEMF(0x649AD4); /* subss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm5, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm4 = xmm2; /* movaps */
    if (1 /* jnp after test - parity */) goto loc_000714CE; /* jnp: not parity */

loc_000714CA: ;
    xmm4 = xmm4 / xmm5; /* divss */

loc_000714CE: ;
    xmm5 = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm5, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000714E1; /* jnp: not parity */

loc_000714DD: ;
    xmm2 = xmm2 / xmm5; /* divss */

loc_000714E1: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 0x1A), LO16(eax))) goto loc_0007153F; /* jbe: below or equal (unsigned <=) */

loc_000714E9: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = ebx + ecx * 4 + 0x70;
    ecx = 0; /* xor self */
    goto loc_00071500;

    /* nop */
    /* nop */

loc_00071500: ;
    xmm5 = MEMF(esi + eax * 8); /* movss */
    edi = MEM32(edx);
    xmm5 = xmm5 + xmm0; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    MEMF(ecx + edi + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(esi + eax * 8 + 4); /* movss */
    edi = MEM32(edx);
    xmm5 = xmm5 + xmm1; /* addss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    MEMF(ecx + edi + 0x14) = xmm5; /* movss */
    edi = ZX16(MEM16(ebx + 0x1A));
    eax++;
    ecx = ecx + 0x1C;
    if (CMP_L(eax, edi)) goto loc_00071500; /* jl: less (signed <) */

loc_0007153F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071550
 * Original: 0x00071550 - 0x0007158D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00071550: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xDC);
    if (TEST_NZ(eax, eax)) goto loc_0007156E; /* jne: not equal / not zero */

loc_0007155F: ;
    SET_LO8(edx, MEM8(ebx + 0x8C));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0007156A: ;
    if (TEST_Z(eax, eax)) goto loc_0007158B; /* je: equal / zero */

loc_0007156E: ;
    ecx = MEM32(eax + 0x80);
    edx = MEM32(eax + 0x78);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00071340(); /* call 0x00071340 */

loc_00071588: ;
    esp = esp + 0x10;

loc_0007158B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00071590
 * Original: 0x00071590 - 0x00071B12 (1410 bytes, 340 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071590: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x8470DC);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp - 8;
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x338); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x330); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000715F1: ;
    eax = ZX8(MEM8(esi + 0xC7));
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    ebx = eax;
    ecx = eax;
    eax = eax & 8;
    ecx = ecx & 4;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x7FA1F8);
    ebx = ebx & 3;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0xDC);
    esp = esp + 8;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xE0); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(eax, 0xA)) goto loc_00071B0C; /* jne: not equal / not zero */

loc_00071647: ;
    eax = MEM32(esi + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = MEMF(esi + 0x84); /* movss */
    xmm4 = xmm4 * MEMF(0x648EA4); /* mulss */
    xmm4 = xmm4 * xmm4; /* mulss */
    if (TEST_NZ(eax, eax)) goto loc_0007167C; /* jne: not equal / not zero */

loc_00071665: ;
    if (CMP_NE(MEM16(esi + 0x16), 0)) goto loc_00071672; /* jne: not equal / not zero */

loc_0007166C: ;
    MEM16(esi + 0x16) = 1;

loc_00071672: ;
    edx = ZX16(MEM16(esi + 0x16));
    MEM32(esi + 0xD8) = edx;

loc_0007167C: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xDA);
    SET_LO16(eax, MEM16(esi + 0xD8));
    xmm6 = xmm3; /* movaps */
    PUSH32(esp, ebp);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 - MEMF(0x64ACB0); /* subss */
    ebp = 0; /* xor self */
    (void)0; /* cmp ebx, 3 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM16(esp + 0x1C) = LO16(eax);
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    if (CMP_EQ(ebx, 3)) goto loc_00071777; /* je: equal / zero */

loc_000716C5: ;
    if (CMP_EQ(ebx, 1)) goto loc_00071777; /* je: equal / zero */

loc_000716CE: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00071777; /* jle: less or equal (signed <=) */

loc_000716DF: ;
    ecx = MEM32(0x8470DC);
    xmm5 = MEMF(0x6490B8); /* movss */
    ecx = ecx + 0x3E0;

loc_000716F3: ;
    edx = MEM32(ecx + 4);
    if (CMP_A(MEM8(edx + 0x8D), 3)) goto loc_00071760; /* ja: above (unsigned >) */

loc_000716FF: ;
    edx = MEM32(ecx);
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00071760; /* jbe: below or equal (unsigned <=) */

loc_0007170F: ;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x1EE);
    xmm2 = MEMF(edx + 0x78); /* movss */
    xmm1 = MEMF(edx + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edx + 0x7C); /* addss */
    ebx = MEM32(esp + 0x18);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 > xmm7)) goto loc_0007176D; /* ja: above (unsigned >) */

loc_00071760: ;
    edi++;
    ecx = ecx + 0x770;
    if (CMP_L(edi, eax)) goto loc_000716F3; /* jl: less (signed <) */

loc_0007176B: ;
    goto loc_00071777;

loc_0007176D: ;
    ebp = MEM32(ecx);
    if (TEST_NZ(ebp, ebp)) goto loc_00071844; /* jne: not equal / not zero */

loc_00071777: ;
    if (CMP_EQ(ebx, 2)) goto loc_00071781; /* je: equal / zero */

loc_0007177C: ;
    if (CMP_NE(ebx, 1)) goto loc_000717C9; /* jne: not equal / not zero */

loc_00071781: ;
    edi = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_000717C9; /* jle: less or equal (signed <=) */

loc_0007178E: ;
    edx = MEM32(0x84A5F8);
    edx = edx + 0x568;
    /* nop */

loc_000717A0: ;
    eax = MEM32(edx);
    if (CMP_NE(MEM8(eax + 0x8D), 0)) goto loc_000717B8; /* jne: not equal / not zero */

loc_000717AB: ;
    ecx++;
    edx = edx + 0x6D0;
    if (CMP_L(ecx, edi)) goto loc_000717A0; /* jl: less (signed <) */

loc_000717B6: ;
    goto loc_000717C9;

loc_000717B8: ;
    eax = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx != 0)) goto loc_00071844; /* jne: not equal / not zero */

loc_000717C9: ;
    if (CMP_EQ(ebx, 2)) goto loc_00071896; /* je: equal / zero */

loc_000717D2: ;
    eax = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_000717E5; /* je: equal / zero */

loc_000717DC: ;
    if (CMP_NE(ebx, 1)) goto loc_00071AC5; /* jne: not equal / not zero */

loc_000717E5: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_GE(MEM16(esi + 0x16), LO16(eax))) goto loc_00071AC5; /* jge: greater or equal (signed >=) */

loc_000717F3: ;
    if (CMP_NE(MEM32(esp + 0x10), ecx)) goto loc_00071801; /* jne: not equal / not zero */

loc_000717F9: ;
    MEM32(esp + 0x10) = 1;

loc_00071801: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648F24); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x16) = MEM16(esi + 0x16) + LO16(edx);
    (void)0; /* cmp MEM16(esi + 0x16), LO16(eax) - flags set for next jcc */
    ebx = 1;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_L(MEM16(esi + 0x16), LO16(eax))) goto loc_00071AC5; /* jl: less (signed <) */

loc_0007182C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esi + 0x16) = LO16(eax);
    MEM32(esp + 0x10) = ecx;
    ebx = 0; /* xor self */
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_00071AC5;

loc_00071844: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00071896; /* jne: not equal / not zero */

loc_0007184C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00071896; /* jne: not equal / not zero */

loc_00071855: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_NZ(eax, eax)) goto loc_0007187F; /* jne: not equal / not zero */

loc_0007185F: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x16B);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0007187D: ;
    goto loc_00071890;

loc_0007187F: ;
    PUSH32(esp, 1);
    eax = ebp;
    ecx = 0x16B;
    PUSH32(esp, 0); sub_002F4E60(); /* call 0x002F4E60 */

loc_0007188D: ;
    esp = esp + 4;

loc_00071890: ;
    xmm3 = MEMF(esp + 0x2C); /* movss */

loc_00071896: ;
    eax = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    if (CMP_NE(eax, ecx)) goto loc_00071A16; /* jne: not equal / not zero */

loc_000718A4: ;
    (void)0; /* cmp MEM32(esp + 0x10), ecx - flags set for next jcc */
    ebx = 2;
    if (CMP_NE(MEM32(esp + 0x10), ecx)) goto loc_000718D7; /* jne: not equal / not zero */

loc_000718AF: ;
    edx = 0x109EA0;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x44) = 0x32;
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(edx, edx)) goto loc_000718D7; /* je: equal / zero */

loc_000718C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00109EA0(); /* call 0x00109EA0 */

loc_000718CE: ;
    xmm3 = MEMF(esp + 0x30); /* movss */
    esp = esp + 4;

loc_000718D7: ;
    ecx = MEM32(esp + 0x44);
    edx = 0; /* xor self */
    if (CMP_EQ(ebp, edx)) goto loc_000718F2; /* je: equal / zero */

loc_000718E1: ;
    if (CMP_EQ(ecx, edx)) goto loc_0007190E; /* je: equal / zero */

loc_000718E5: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x8D) = 1;

loc_000718F2: ;
    if (CMP_EQ(ecx, edx)) goto loc_0007191B; /* je: equal / zero */

loc_000718F6: ;
    eax = MEM32(0x7FA20C);
    if (CMP_LE(ecx, eax)) goto loc_000719F9; /* jle: less or equal (signed <=) */

loc_00071903: ;
    ecx = ecx - eax;
    MEM32(esp + 0x44) = ecx;
    goto loc_000719B3;

loc_0007190E: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x8D) = 2;

loc_0007191B: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x16) = MEM16(esi + 0x16) - LO16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x1C);
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(0x64925C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_000719B3; /* jb: below (unsigned <) */

loc_00071957: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 0xFFFFFED4u;
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    MEM16(esi + 0x16) = LO16(eax);
    ebx = 3;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(ebp, edx)) goto loc_00071983; /* je: equal / zero */

loc_00071976: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x8D) = 0;

loc_00071983: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x1A5;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000719AD: ;
    xmm3 = MEMF(esp + 0x2C); /* movss */

loc_000719B3: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(ebp, ecx)) goto loc_00071AC5; /* je: equal / zero */

loc_000719BD: ;
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    MEM16(eax + 0x8E) = LO16(edx);
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)xmm3; /* cvttss2si */
    MEM16(eax + 0x90) = LO16(edx);
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    MEM16(eax + 0x92) = LO16(edx);
    goto loc_00071A8E;

loc_000719F9: ;
    eax = MEM32(0x847024);
    MEM32(esp + 0x44) = edx;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    ecx = 0x1A4;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_00071A14: ;
    goto loc_000719AD;

loc_00071A16: ;
    if (CMP_EQ(ebp, ecx)) goto loc_00071AC5; /* je: equal / zero */

loc_00071A1E: ;
    if (CMP_NE(MEM32(esp + 0x10), ecx)) goto loc_00071A46; /* jne: not equal / not zero */

loc_00071A24: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edx + 0x8D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00071A46; /* jne: not equal / not zero */

loc_00071A34: ;
    MEM32(esp + 0x44) = 0x32;
    MEM32(esp + 0x10) = 1;
    goto loc_00071A4C;

loc_00071A46: ;
    if (CMP_EQ(MEM32(esp + 0x44), ecx)) goto loc_00071A6E; /* je: equal / zero */

loc_00071A4C: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(esp + 0x44);
    MEM8(eax + 0x8D) = 3;
    eax = MEM32(0x7FA20C);
    if (CMP_LE(edx, eax)) goto loc_00071A8A; /* jle: less or equal (signed <=) */

loc_00071A66: ;
    edx = edx - eax;
    MEM32(esp + 0x44) = edx;
    goto loc_00071A8E;

loc_00071A6E: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM8(eax + 0x8D), 3)) goto loc_00071A8E; /* jne: not equal / not zero */

loc_00071A7D: ;
    MEM8(eax + 0x8D) = 4;
    MEM32(esp + 0x10) = ecx;
    goto loc_00071A8E;

loc_00071A8A: ;
    MEM32(esp + 0x44) = ecx;

loc_00071A8E: ;
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    MEM16(eax + 0x8E) = LO16(edx);
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)xmm3; /* cvttss2si */
    MEM16(eax + 0x90) = LO16(edx);
    eax = MEM32(ebp + 0x568);
    edx = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    MEM16(eax + 0x92) = LO16(edx);

loc_00071AC5: ;
    SET_LO8(edx, MEM8(esi + 0xC7));
    eax = MEM32(esp + 0x44);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM16(esi + 0xDA) = LO16(ecx);
    ecx = MEM32(esi + 0xD8);
    SET_LO8(edx, LO8(edx) & 0xFC);
    eax = eax << 0x10;
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    ecx = ecx | eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM8(esi + 0xC7) = LO8(edx);
    MEM32(esi + 0xD8) = ecx;
    MEM32(esi + 0xDC) = eax;
    MEMF(esi + 0xE0) = xmm0; /* movss */
    POP32(esp, ebp);

loc_00071B0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00071B20
 * Original: 0x00071B20 - 0x00071C13 (243 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B20(void)
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

loc_00071B20: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xDC)); /* fld float */
    xmm1 = MEMF(0x7FA24C); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E44); /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0xE0); /* addss */
    xmm0 = xmm0 * MEMF(0x64978C); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0xDC); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ecx + 0xDC) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    MEMF(ecx + 0xE0) = xmm3; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm1)) goto loc_00071B9A; /* jbe: below or equal (unsigned <=) */

loc_00071B91: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00071B91; /* ja: above (unsigned >) */

loc_00071B9A: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00071BAB; /* jbe: below or equal (unsigned <=) */

loc_00071BA2: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00071BA2; /* ja: above (unsigned >) */

loc_00071BAB: ;
    MEMF(ecx + 0xDC) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00071BC9; /* jbe: below or equal (unsigned <=) */

loc_00071BBB: ;
    goto loc_00071BC0;

    /* nop */

loc_00071BC0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00071BC0; /* ja: above (unsigned >) */

loc_00071BC9: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00071BD9; /* jbe: below or equal (unsigned <=) */

loc_00071BCE: ;
    edi = edi;

loc_00071BD0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00071BD0; /* ja: above (unsigned >) */

loc_00071BD9: ;
    xmm1 = MEMF(ecx + 0xC); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0xE0) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00071C12; /* jp: parity */

loc_00071BEF: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00071C12; /* jp: parity */

loc_00071BF8: ;
    xmm0 = MEMF(0x649788); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_00071C12: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00071C20
 * Original: 0x00071C20 - 0x00071C59 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071C20: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FA1F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0xC7));
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edx = esi + 0x150;
    eax = eax & 3;
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (CMP_NE(ebp, 4)) { sub_00071C59(); return; } /* jne: not equal / not zero */

loc_00071C4D: ;
    edi = esi + 0x2A0;
    MEM32(esp + 0x10) = edi;
    g_seh_ebp = ebp; sub_00071C5F(); return; /* tail jmp 0x00071C5F */

}

/**
 * sub_00071FC0
 * Original: 0x00071FC0 - 0x000722BB (763 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071FC0(void)
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

loc_00071FC0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebx = MEM32(edi + 0x8C);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00071FD6: ;
    if (TEST_Z(eax, eax)) goto loc_000722B5; /* je: equal / zero */

loc_00071FDE: ;
    ecx = MEM32(eax + 0xD8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_000722B5; /* je: equal / zero */

loc_00071FF0: ;
    eax = ZX8(HI8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    eax = ZX16(MEM16(esi * 4 + 0x69D5C6));
    edx = ZX16(MEM16(esi * 4 + 0x69D5C4));
    xmm0 = MEMF(esi * 4 + 0x69D5BC); /* movss */
    xmm3 = MEMF(esi * 4 + 0x69D5C0); /* movss */
    SET_LO8(ebx, MEM8(esi * 4 + 0x69D5C8));
    esi = esi * 4 + 0x69D5BC;
    MEM32(esp + 0x1C) = eax;
    eax = ZX16(MEM16(esi + 0xE));
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00072085; /* jne: not equal / not zero */

loc_0007204E: ;
    ecx = ZX16(MEM16(edi + 0x1A));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A65);
    ecx = ecx << 2;
    PUSH32(esp, 0x5E0798);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00072067: ;
    xmm3 = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(edi + 0xD8) = eax;
    esp = esp + 0x10;
    MEM8(esi + 0x11) = 0;
    ebp = 1;
    goto loc_00072087;

loc_00072085: ;
    ebp = 0; /* xor self */

loc_00072087: ;
    xmm4 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x2C) = eax;
    SET_LO8(eax, MEM8(ecx + 5));
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    if (CMP_BE(LO8(eax), 0x40)) goto loc_000720D6; /* jbe: below or equal (unsigned <=) */

loc_00072097: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000720C0; /* jbe: below or equal (unsigned <=) */

loc_0007209B: ;
    (void)0; /* cmp LO8(eax), 0xC0 - flags set for next jcc */
    edx = ZX8(LO8(eax));
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000720B2; /* jbe: below or equal (unsigned <=) */

loc_000720A2: ;
    edx = edx << 2;
    ecx = 0x743490;
    ecx = ecx - edx;
    xmm0 = MEMF(ecx); /* movss */
    goto loc_000720E2;

loc_000720B2: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_000720E2;

loc_000720C0: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 2;
    edx = 0x743290;
    edx = edx - ecx;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    goto loc_000720E2;

loc_000720D6: ;
    ecx = ZX8(LO8(eax));
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000720E2: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm2 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000720FE: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    if (TEST_Z(ebp, ebp)) goto loc_00072114; /* je: equal / zero */

loc_0007210A: ;
    MEMF(edi + 0xDC) = xmm4; /* movss */
    goto loc_00072168;

loc_00072114: ;
    xmm1 = xmm1 - MEMF(edi + 0xE0); /* subss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_00072137; /* jbe: below or equal (unsigned <=) */

loc_00072127: ;
    xmm3 = xmm3 + MEMF(edi + 0xDC); /* addss */
    xmm2 = xmm3; /* movaps */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    goto loc_00072146;

loc_00072137: ;
    xmm2 = MEMF(edi + 0xDC); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */

loc_00072146: ;
    MEMF(edi + 0xDC) = xmm2; /* movss */
    if ((xmm1 <= xmm2)) goto loc_00072158; /* jbe: below or equal (unsigned <=) */

loc_00072150: ;
    MEMF(edi + 0xDC) = xmm1; /* movss */

loc_00072158: ;
    xmm1 = MEMF(edi + 0xE0); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0xDC); /* addss */

loc_00072168: ;
    ecx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(0x7FA230));
    MEMF(edi + 0xE0) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(edi + 0xE0); /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    eax = eax + ecx;
    ecx = SX8(LO8(edx));
    ebp = edi + ecx * 4 + 0x70;
    ecx = MEM32(ebp);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x649924) - sets EFLAGS */
    ebx = (int32_t)xmm1; /* cvttss2si */
    if ((xmm0 <= MEMF(0x649924))) goto loc_000721BA; /* jbe: below or equal (unsigned <=) */

loc_000721B4: ;
    ebx = ebx - 0x800;

loc_000721BA: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0x1A), LO16(ecx))) goto loc_00072217; /* jbe: below or equal (unsigned <=) */

loc_000721C2: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    edx = edi + eax * 4 + 0x70;
    eax = 0; /* xor self */
    goto loc_000721E0;

    /* nop */

loc_000721E0: ;
    ebx = MEM32(esp + 0x2C);
    xmm2 = MEMF(ebx + ecx * 4); /* movss */
    ebx = MEM32(ebp);
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(eax + ebx + 0x10) = xmm2; /* movss */
    ebx = MEM32(edx);
    xmm2 = MEMF(eax + ebx + 0x14); /* movss */
    ebx = MEM32(ebp);
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + ebx + 0x14) = xmm2; /* movss */
    ebx = ZX16(MEM16(edi + 0x1A));
    ecx++;
    eax = eax + 0x1C;
    if (CMP_L(ecx, ebx)) goto loc_000721E0; /* jl: less (signed <) */

loc_00072217: ;
    SET_LO8(ecx, MEM8(0x7FA20C));
    SET_LO8(ebx, MEM8(esi + 0x11));
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    SET_LO8(ecx, LO8(ebx));
    MEM8(esi + 0x11) = LO8(ebx);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    (void)0; /* cmp LO8(eax), 0x40 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_BE(LO8(eax), 0x40)) goto loc_0007227C; /* jbe: below or equal (unsigned <=) */

loc_00072234: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_00072263; /* jbe: below or equal (unsigned <=) */

loc_00072238: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_0007224F; /* jbe: below or equal (unsigned <=) */

loc_0007223C: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743490;
    eax = eax - edx;
    xmm0 = MEMF(eax); /* movss */
    goto loc_00072288;

loc_0007224F: ;
    ecx = ZX8(LO8(eax));
    xmm4 = xmm4 - MEMF(ecx * 4 + 0x742E90); /* subss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    goto loc_0007228E;

loc_00072263: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743290;
    eax = eax - edx;
    xmm4 = xmm4 - MEMF(eax); /* subss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    goto loc_0007228E;

loc_0007227C: ;
    ecx = ZX8(LO8(eax));
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00072288: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0007228E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000722AF: ;
    MEM8(edi + 0xEE) = LO8(eax);

loc_000722B5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000722C0
 * Original: 0x000722C0 - 0x00072372 (178 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000722C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000722C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = MEM32(edi + 0xD8);
    if (TEST_NZ(ecx, ecx)) { sub_00072372(); return; } /* jne: not equal / not zero */

loc_000722D3: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000722E1; /* jne: not equal / not zero */

loc_000722DC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000722E1: ;
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
    if (TEST_Z(esi, esi)) goto loc_0007232B; /* je: equal / zero */

loc_00072309: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0007232B; /* jb: below (unsigned <) */

loc_00072312: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0007231C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00072324: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00072348; /* jne: not equal / not zero */

loc_0007232B: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0007233D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00072345: ;
    esp = esp + 8;

loc_00072348: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648EF4); /* movss */
    MEM32(edi + 0xD8) = eax;
    POP32(esp, esi);
    ecx = eax;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00072375(); return; /* tail jmp 0x00072375 */

}

/**
 * sub_00072480
 * Original: 0x00072480 - 0x0007249C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072480: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xD8);
    eax = eax + 0xD8;
    if (TEST_Z(ecx, ecx)) { sub_0007249C(); return; } /* je: equal / zero */

loc_00072493: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002AF1C0(); return; /* tail jmp 0x002AF1C0 */

}

/**
 * sub_000724A0
 * Original: 0x000724A0 - 0x00072559 (185 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000724A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000724A0: ;
    eax = MEM32(ebx + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_00072558; /* jne: not equal / not zero */

loc_000724AE: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000724BC; /* jne: not equal / not zero */

loc_000724B7: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000724BC: ;
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
    if (TEST_Z(esi, esi)) goto loc_00072506; /* je: equal / zero */

loc_000724E4: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_00072506; /* jb: below (unsigned <) */

loc_000724ED: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000724F7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000724FF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00072523; /* jne: not equal / not zero */

loc_00072506: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00072518: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00072520: ;
    esp = esp + 8;

loc_00072523: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebx + 0xD8) = eax;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(ebx + 0x7C);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, edi);
    MEMF(ebx + 0x84) = xmm0; /* movss */
    MEMF(ebx + 0x80) = xmm0; /* movss */
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    POP32(esp, esi);

loc_00072558: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00072560
 * Original: 0x00072560 - 0x0007259A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00072560: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_000724A0(); /* call 0x000724A0 */

loc_00072568: ;
    ecx = ZX8(MEM8(esi + 0x10B));
    MEM32(ebx + 0xDC) = ecx;
    MEM16(eax + 4) = 3;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 0x32 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, 0x32)) goto loc_0007258B; /* je: equal / zero */

loc_00072586: ;
    if (CMP_NE(eax, 0x33)) goto loc_00072599; /* jne: not equal / not zero */

loc_0007258B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001181F0(); /* call 0x001181F0 */

loc_00072596: ;
    esp = esp + 8;

loc_00072599: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000725A0
 * Original: 0x000725A0 - 0x00072608 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000725A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000725A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_000724A0(); /* call 0x000724A0 */

loc_000725A9: ;
    ecx = MEM32(ebx + 0xA4);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, 0x54)) goto loc_000725F5; /* jne: not equal / not zero */

loc_000725B6: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(ebx, MEM8(ecx + 0x10B));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000725F4; /* je: equal / zero */

loc_000725C7: ;
    ecx = MEM32(0x847200);
    if (TEST_Z(ecx, ecx)) goto loc_000725F4; /* je: equal / zero */

loc_000725D1: ;
    (void)0; /* cmp MEM8(ecx), LO8(ebx) - flags set for next jcc */
    edx = MEM32(ecx + 0xE0);
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_000725E7; /* jne: not equal / not zero */

loc_000725DB: ;
    if (CMP_NE(MEM16(ecx + 0xA), 0x17)) goto loc_000725E7; /* jne: not equal / not zero */

loc_000725E2: ;
    if (TEST_Z(esi, esi)) goto loc_000725EF; /* je: equal / zero */

loc_000725E6: ;
    esi--;

loc_000725E7: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = edx;
    if (TEST_NZ(edx, edx)) goto loc_000725D1; /* jne: not equal / not zero */

loc_000725ED: ;
    goto loc_000725F4;

loc_000725EF: ;
    edi = 1;

loc_000725F4: ;
    POP32(esp, esi);

loc_000725F5: ;
    if (CMP_A(MEM16(eax + 4), 2)) { sub_00072608(); return; } /* ja: above (unsigned >) */

loc_000725FC: ;
    if (TEST_NZ(edi, edi)) { sub_00072608(); return; } /* jne: not equal / not zero */

loc_00072600: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00072610
 * Original: 0x00072610 - 0x00072A85 (1141 bytes, 271 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072610: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(0x64B1EC); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA58); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    (void)0; /* cmp MEM32(esi + 0xA4), 0xD73122E - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA6C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(MEM32(esi + 0xA4), 0xD73122E)) goto loc_0007268D; /* je: equal / zero */

loc_0007266C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_0007268D: ;
    ebx = esi;
    PUSH32(esp, 0); sub_000724A0(); /* call 0x000724A0 */

loc_00072694: ;
    ebp = eax;
    eax = MEM32(esi + 0xA4);
    (void)0; /* cmp eax, 0x54 - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_EQ(eax, 0x54)) goto loc_000726B9; /* je: equal / zero */

loc_000726AD: ;
    if (CMP_BE(eax, 0x58)) goto loc_000726C1; /* jbe: below or equal (unsigned <=) */

loc_000726B2: ;
    if (CMP_A(eax, 0x5A)) goto loc_000726C1; /* ja: above (unsigned >) */

loc_000726B7: ;
    goto loc_00072737;

loc_000726B9: ;
    MEM32(esp + 0x14) = 0x17;

loc_000726C1: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    eax = ZX16(MEM16(ebp));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ZX16(MEM16(ebp + 2));
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00072722: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp) = MEM16(ebp) + LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00072733: ;
    MEM16(ebp + 2) = MEM16(ebp + 2) + LO16(eax);

loc_00072737: ;
    if (CMP_A(MEM16(ebp + 4), 2)) goto loc_00072935; /* ja: above (unsigned >) */

loc_00072742: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00072935; /* jle: less or equal (signed <=) */

loc_00072759: ;
    ebx = MEM32(0x84A5F8);
    xmm7 = MEMF(0x648E7C); /* movss */
    ebx = ebx + 0x568;
    PUSH32(esp, edi);
    edi = edi;

loc_00072770: ;
    eax = MEM32(ebx);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebx + -1384;
    if (TEST_Z(eax, eax)) goto loc_0007298E; /* je: equal / zero */

loc_00072780: ;
    SET_LO8(ecx, MEM8(eax + 0x38D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007298E; /* jne: not equal / not zero */

loc_0007278E: ;
    eax = MEM32(ebx + -1284);
    if (TEST_Z(eax, eax)) goto loc_0007298E; /* je: equal / zero */

loc_0007279C: ;
    if (CMP_BE(MEM16(ebx + -442), 0)) goto loc_0007298E; /* jbe: below or equal (unsigned <=) */

loc_000727AA: ;
    if (CMP_EQ(MEM8(ebx + -818), 0xFF)) goto loc_0007298E; /* je: equal / zero */

loc_000727B7: ;
    eax = MEM32(esi + 0xE0);
    if (CMP_NE(eax, 1)) goto loc_000727D1; /* jne: not equal / not zero */

loc_000727C2: ;
    edx = MEM32(ebx + -816);
    if (CMP_NE(MEM32(edx), 0)) goto loc_0007298E; /* jne: not equal / not zero */

loc_000727D1: ;
    if (CMP_NE(eax, 2)) goto loc_000727E5; /* jne: not equal / not zero */

loc_000727D6: ;
    eax = MEM32(ebx + -816);
    if (CMP_NE(MEM32(eax), 1)) goto loc_0007298E; /* jne: not equal / not zero */

loc_000727E5: ;
    if (CMP_EQ(MEM32(esp + 0x18), 0xFFFFFFFFu)) goto loc_0007282E; /* je: equal / zero */

loc_000727EC: ;
    SET_LO8(eax, MEM8(ebx + -1117));
    ebp = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007282A; /* je: equal / zero */

loc_000727F8: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0007282A; /* je: equal / zero */

loc_00072801: ;
    SET_LO8(edx, MEM8(ebx + -1117));
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_00072824; /* jne: not equal / not zero */

loc_00072811: ;
    edx = ZX16(MEM16(eax + 0xA));
    if (CMP_NE(edx, MEM32(esp + 0x18))) goto loc_00072824; /* jne: not equal / not zero */

loc_0007281B: ;
    if (TEST_Z(ebp, ebp)) goto loc_0007298A; /* je: equal / zero */

loc_00072823: ;
    ebp--;

loc_00072824: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00072801; /* jne: not equal / not zero */

loc_0007282A: ;
    ebp = MEM32(esp + 0x1C);

loc_0007282E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi + 0x568);
    xmm0 = xmm0 - MEMF(edi + 0x80); /* subss */
    edx = ZX8(MEM8(eax + 0x2E3));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(edi + 0x78); /* subss */
    ecx = MEM32(eax + 0xBC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    if (TEST_Z(ecx, ecx)) goto loc_00072881; /* je: equal / zero */

loc_00072879: ;
    xmm0 = xmm0 * MEMF(0x649D7C); /* mulss */

loc_00072881: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0007298E; /* jbe: below or equal (unsigned <=) */

loc_00072899: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_000728AF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    xmm1 = MEMF(edi + 0x290); /* movss */
    esp = esp + 0xC;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0007298E; /* jbe: below or equal (unsigned <=) */

loc_000728CB: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm6; /* addss */
    /* comiss xmm1, MEMF(edi + 0x7C) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + 0x7C))) goto loc_0007298E; /* jbe: below or equal (unsigned <=) */

loc_000728DC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(edi + 0x7C); /* addss */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0007298E; /* jbe: below or equal (unsigned <=) */

loc_000728F7: ;
    eax = edi;
    PUSH32(esp, 0); sub_002FABB0(); /* call 0x002FABB0 */

loc_000728FE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00072934; /* jne: not equal / not zero */

loc_00072902: ;
    edx = ZX8(MEM8(esi + 0xC6));
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, edx);
    edi = edi - ebx;
    ecx = edi;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00282F20(); /* call 0x00282F20 */

loc_00072931: ;
    esp = esp + 0xC;

loc_00072934: ;
    POP32(esp, edi);

loc_00072935: ;
    SET_LO16(eax, MEM16(ebp + 4));
    ecx = 0; /* xor self */
    if (CMP_NE(LO16(eax), LO16(ecx))) goto loc_000729AE; /* jne: not equal / not zero */

loc_00072940: ;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64B1E8); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x84); /* addss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    /* comiss xmm0, MEMF(ebp + 0xC) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0xC))) goto loc_00072A69; /* jb: below (unsigned <) */

loc_00072967: ;
    edx = MEM32(ebp + 0xC);
    xmm0 = MEMF(0x648D3C); /* movss */
    MEM32(esi + 0x84) = edx;
    MEM16(ebp + 4) = MEM16(ebp + 4) + 1;
    MEM16(ebp + 6) = LO16(ecx);
    MEMF(ebp + 8) = xmm0; /* movss */
    goto loc_00072A69;

loc_0007298A: ;
    ebp = MEM32(esp + 0x1C);

loc_0007298E: ;
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx++;
    ebx = ebx + 0x6D0;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00072770; /* jl: less (signed <) */

loc_000729AC: ;
    goto loc_00072934;

loc_000729AE: ;
    if (CMP_NE(LO16(eax), 1)) goto loc_00072A21; /* jne: not equal / not zero */

loc_000729B4: ;
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(0x649418); /* mulss */
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 8) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_000729E2; /* jb: below (unsigned <) */

loc_000729D7: ;
    MEMF(ebp + 8) = xmm1; /* movss */
    MEM16(ebp + 4) = 2;

loc_000729E2: ;
    eax = ZX16(MEM16(ebp + 6));
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x7FA20C);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1613);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x80) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(ebp + 6) = MEM16(ebp + 6) + LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00072A21: ;
    if (CMP_EQ(LO16(eax), 2)) goto loc_00072A7E; /* je: equal / zero */

loc_00072A27: ;
    if (CMP_NE(LO16(eax), 3)) goto loc_00072A7E; /* jne: not equal / not zero */

loc_00072A2D: ;
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(0x64B1E8); /* mulss */
    xmm0 = MEMF(esi + 0x84); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x84) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00072A69; /* jb: below (unsigned <) */

loc_00072A56: ;
    MEM16(ebp + 4) = LO16(ecx);
    MEM8(esi + 0xC2) = 1;
    MEMF(esi + 0x84) = xmm1; /* movss */

loc_00072A69: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */

loc_00072A7E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00072A90
 * Original: 0x00072A90 - 0x00072DFC (876 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072A90(void)
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

loc_00072A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xDC);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(esi + 0xC7));
    ecx = ecx | 0xFFFFFFFFu;
    ebx = ebx & 3;
    if (CMP_NE(eax, 1)) goto loc_00072B4C; /* jne: not equal / not zero */

loc_00072AB3: ;
    if (TEST_Z(ebx, ebx)) goto loc_00072ABB; /* je: equal / zero */

loc_00072AB7: ;
    if (CMP_NE(ebx, eax)) goto loc_00072AC2; /* jne: not equal / not zero */

loc_00072ABB: ;
    ebx = 2;
    ecx = 0; /* xor self */

loc_00072AC2: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00072ACA: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00072AFE; /* je: equal / zero */

loc_00072AD5: ;
    eax = MEM32(esi + 0x8C);
    eax = eax & 0xFFFF;
    eax = eax + eax * 2;
    ecx = ecx + eax * 2;
    eax = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x69D4D8);
    if (CMP_LE(eax & eax, 0)) goto loc_00072AFE; /* jle: less or equal (signed <=) */

loc_00072AF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00072AFB: ;
    esp = esp + 0xC;

loc_00072AFE: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x8E);
    xmm2 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm3 = MEMF(0x6490B4); /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    xmm4 = MEMF(0x648D20); /* movss */
    eax = ecx;
    eax = eax - 2;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    if ((eax == 0)) goto loc_00072B7E; /* je: equal / zero */

loc_00072B35: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00072B7E; /* je: equal / zero */

loc_00072B3A: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00072B86; /* jne: not equal / not zero */

loc_00072B3F: ;
    xmm3 = MEMF(0x6490BC); /* movss */
    xmm0 = xmm4; /* movaps */
    goto loc_00072B86;

loc_00072B4C: ;
    if (TEST_NZ(eax, eax)) goto loc_00072B6E; /* jne: not equal / not zero */

loc_00072B50: ;
    if (CMP_EQ(ebx, 3)) goto loc_00072B5A; /* je: equal / zero */

loc_00072B55: ;
    if (CMP_NE(ebx, 2)) goto loc_00072B61; /* jne: not equal / not zero */

loc_00072B5A: ;
    ebx = 1;
    ecx = ebx;

loc_00072B61: ;
    xmm0 = MEMF(0x648D34); /* movss */
    goto loc_00072ACA;

loc_00072B6E: ;
    xmm0 = MEMF(0x648E3C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_00072AFE;

loc_00072B7E: ;
    xmm3 = MEMF(0x6493A8); /* movss */

loc_00072B86: ;
    if (CMP_A(ecx, 0xD)) goto loc_00072DDE; /* ja: above (unsigned >) */

loc_00072B8F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x72DFC); /* switch: 14 entries, 9 targets */
    if (_jt == 0x00072B96u) goto loc_00072B96;
    if (_jt == 0x00072BF0u) goto loc_00072BF0;
    if (_jt == 0x00072C4Eu) goto loc_00072C4E;
    if (_jt == 0x00072CA8u) goto loc_00072CA8;
    if (_jt == 0x00072D06u) goto loc_00072D06;
    if (_jt == 0x00072D1Eu) goto loc_00072D1E;
    if (_jt == 0x00072D93u) goto loc_00072D93;
    if (_jt == 0x00072DABu) goto loc_00072DAB;
    if (_jt == 0x00072DDEu) goto loc_00072DDE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00072B96: ;
    eax = MEM32(esi + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_00072BA9; /* jne: not equal / not zero */

loc_00072BA0: ;
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0xE0) = edx;

loc_00072BA9: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, MEMF(esi + 0xE0) - sets EFLAGS */
    MEMF(esi + 0xC) = xmm1; /* movss */
    if ((xmm1 <= MEMF(esi + 0xE0))) goto loc_00072BCF; /* jbe: below or equal (unsigned <=) */

loc_00072BC4: ;
    eax = MEM32(esi + 0xE0);
    MEM32(esi + 0xC) = eax;
    ebx = 0; /* xor self */

loc_00072BCF: ;
    xmm0 = MEMF(0x6496D4); /* movss */
    /* comiss xmm0, MEMF(esi + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0xC))) goto loc_00072DDE; /* jbe: below or equal (unsigned <=) */

loc_00072BE1: ;
    MEMF(esi + 0xC) = xmm0; /* movss */
    ebx = 3;
    goto loc_00072DDE;

loc_00072BF0: ;
    eax = MEM32(esi + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_00072C03; /* jne: not equal / not zero */

loc_00072BFA: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0xE0) = ecx;

loc_00072C03: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x649298); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00072C2C; /* jbe: below or equal (unsigned <=) */

loc_00072C22: ;
    MEMF(esi + 8) = xmm1; /* movss */
    ebx = 3;

loc_00072C2C: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 0xE0) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0xE0))) goto loc_00072DDE; /* jbe: below or equal (unsigned <=) */

loc_00072C3E: ;
    edx = MEM32(esi + 0xE0);
    MEM32(esi + 8) = edx;
    ebx = 0; /* xor self */
    goto loc_00072DDE;

loc_00072C4E: ;
    eax = MEM32(esi + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_00072C61; /* jne: not equal / not zero */

loc_00072C58: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0xE0) = eax;

loc_00072C61: ;
    xmm3 = xmm3 + MEMF(esi + 0xE0); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esi + 8) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_00072C86; /* jbe: below or equal (unsigned <=) */

loc_00072C7C: ;
    MEMF(esi + 8) = xmm3; /* movss */
    ebx = 3;

loc_00072C86: ;
    xmm0 = MEMF(esi + 0xE0); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_00072DDE; /* jbe: below or equal (unsigned <=) */

loc_00072C98: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(esi + 8) = ecx;
    ebx = 0; /* xor self */
    goto loc_00072DDE;

loc_00072CA8: ;
    eax = MEM32(esi + 0xD8);
    if (TEST_NZ(eax, eax)) goto loc_00072CBB; /* jne: not equal / not zero */

loc_00072CB2: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 0xE0) = edx;

loc_00072CBB: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, MEMF(esi + 0xE0) - sets EFLAGS */
    MEMF(esi + 8) = xmm1; /* movss */
    if ((xmm1 <= MEMF(esi + 0xE0))) goto loc_00072CE1; /* jbe: below or equal (unsigned <=) */

loc_00072CD6: ;
    eax = MEM32(esi + 0xE0);
    MEM32(esi + 8) = eax;
    ebx = 0; /* xor self */

loc_00072CE1: ;
    xmm0 = MEMF(esi + 0xE0); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 8))) goto loc_00072DDE; /* jbe: below or equal (unsigned <=) */

loc_00072CF7: ;
    MEMF(esi + 8) = xmm0; /* movss */
    ebx = 3;
    goto loc_00072DDE;

loc_00072D06: ;
    xmm0 = MEMF(esi + 0xE0); /* movss */
    xmm0 = xmm0 + MEMF(0x648E54); /* addss */
    MEMF(esi + 0xE0) = xmm0; /* movss */

loc_00072D1E: ;
    xmm2 = xmm2 * MEMF(0x59D950); /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0xE0); /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = MEMF(0x64AAD4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    /* FPU: fsin  */
    MEMF(esi + 0xE0) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm2 <= xmm0)) goto loc_00072DDE; /* jbe: below or equal (unsigned <=) */

loc_00072D5C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00072D61: ;
    eax = eax & 4;
    eax++;
    PUSH32(esp, 0);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0xE0); /* movss */
    PUSH32(esp, 0x503);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, esi);
    MEMF(esi + 0xE0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00072D8E: ;
    esp = esp + 0xC;
    goto loc_00072DDE;

loc_00072D93: ;
    xmm0 = MEMF(esi + 0xE0); /* movss */
    xmm0 = xmm0 + MEMF(0x648E54); /* addss */
    MEMF(esi + 0xE0) = xmm0; /* movss */

loc_00072DAB: ;
    xmm2 = xmm2 * MEMF(0x59D950); /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0xE0); /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0xE0) = xmm2; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648e6c] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_00072DDE: ;
    SET_LO8(ecx, MEM8(esi + 0xC7));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    MEM32(esi + 0xD8) = 1;
    MEM8(esi + 0xC7) = LO8(ecx);
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
 * sub_00072F10
 * Original: 0x00072F10 - 0x00072FF7 (231 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072F10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00072F10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xD8);
    if (TEST_NZ(ecx, ecx)) goto loc_00072F2E; /* jne: not equal / not zero */

loc_00072F1E: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0xE0) = xmm0; /* movss */

loc_00072F2E: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(eax + 0xC6));
    edx = 1;
    ecx = edx;
    MEM32(eax + 0xD8) = edx;
    ebx = ebx & edx;
    ecx = ecx - ebx;
    ebx = MEM32(eax + 0xDC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(ebx, ebx)) goto loc_00072FA6; /* je: equal / zero */

loc_00072F63: ;
    (void)0; /* test LO8(edx), LO8(ecx) - flags set for next jcc */
    ecx = (int32_t)xmm0; /* cvttss2si */
    if (TEST_Z(LO8(edx), LO8(ecx))) goto loc_00072F8D; /* je: equal / zero */

loc_00072F6B: ;
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax + 0xE0) - sets EFLAGS */

loc_00072F7E: ;
    if ((xmm0 <= MEMF(eax + 0xE0))) goto loc_00072FF6; /* jbe: below or equal (unsigned <=) */

loc_00072F80: ;
    ecx = (int32_t)MEMF(eax + 0xE0); /* cvttss2si */
    MEM16(eax + 0x18) = LO16(ecx);
    esp += 4; return; /* ret */

loc_00072F8D: ;
    MEM16(eax + 0x18) = MEM16(eax + 0x18) - LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm1 = MEMF(eax + 0xE0); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_00072F7E;

loc_00072FA6: ;
    (void)0; /* test LO8(edx), LO8(ecx) - flags set for next jcc */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(eax + 0xE0); /* movss */
    if (TEST_Z(LO8(edx), LO8(ecx))) goto loc_00072FD2; /* je: equal / zero */

loc_00072FB6: ;
    MEM16(eax + 0x18) = MEM16(eax + 0x18) - LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x18));
    xmm0 = xmm0 - MEMF(0x649294); /* subss */
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_00072FEC;

loc_00072FD2: ;
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x18));
    xmm0 = xmm0 + MEMF(0x649294); /* addss */
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_00072FEC: ;
    if ((xmm1 <= xmm0)) goto loc_00072FF6; /* jbe: below or equal (unsigned <=) */

loc_00072FEE: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x18) = LO16(ecx);

loc_00072FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00073000
 * Original: 0x00073000 - 0x000731F1 (497 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073000(void)
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

loc_00073000: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(edi + 0xD8);
    ebp = 0; /* xor self */
    if (TEST_NZ(ebx, ebx)) goto loc_000730B2; /* jne: not equal / not zero */

loc_0007301B: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00073029; /* jne: not equal / not zero */

loc_00073024: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00073029: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_00073071; /* je: equal / zero */

loc_0007304F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x24)) goto loc_00073071; /* jb: below (unsigned <) */

loc_00073058: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00073062: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0007306A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0007308E; /* jne: not equal / not zero */

loc_00073071: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00073083: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0007308B: ;
    esp = esp + 8;

loc_0007308E: ;
    MEM32(edi + 0xD8) = eax;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ebx = eax;
    MEM32(eax + 0x20) = ecx;

loc_000730B2: ;
    esi = MEM32(0x7FA20C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_000730F1; /* jle: less or equal (signed <=) */

loc_000730C3: ;
    eax = eax - esi;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(ebx + 0x1C) = LO16(eax);
    if (CMP_G(LO16(eax) & LO16(eax), 0)) goto loc_000730F1; /* jg: greater (signed >) */

loc_000730CE: ;
    ebp = MEM32(edi + 0xE0);
    eax = MEM32(0x8470DC);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x770);
    ebp = ebp + eax;
    edi = 0xA;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_000730ED: ;
    edi = MEM32(esp + 0x1C);

loc_000730F1: ;
    eax = MEM32(edi + 0xDC);
    if (CMP_NE(eax, 1)) { sub_000731F1(); return; } /* jne: not equal / not zero */

loc_00073100: ;
    ebp = MEM32(edi + 0xE0);
    esi = MEM32(0x84A5F8);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    edx = (int32_t)MEMF(ebp + esi + 0x78); /* cvttss2si */
    ebp = ebp + esi;
    MEM16(edi + 0x14) = LO16(edx);
    eax = (int32_t)MEMF(ebp + 0x7C); /* cvttss2si */
    eax = eax + 0x64;
    edx = esp + 0x1C;
    MEM16(edi + 0x16) = LO16(eax);
    ecx = (int32_t)MEMF(ebp + 0x80); /* cvttss2si */
    PUSH32(esp, edx);
    esi = 0x28;
    MEM16(edi + 0x18) = LO16(ecx);
    PUSH32(esp, 0); sub_0034B300(); /* call 0x0034B300 */

loc_00073145: ;
    ecx = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0034B2A0(); /* call 0x0034B2A0 */

loc_00073152: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x78); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x80); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x18) = xmm1; /* movss */
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    /* fld st(1) */
    xmm0 = xmm0 + MEMF(ebx + 0x14); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    /* fld st(0) */
    MEMF(ebx + 4) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(ebp + 0x80); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebx + 8) = xmm0; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(0x6492BC); /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    esp = esp + 4;
    MEMF(ebx + 0x10) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi + 0xDC) = 2;
    POP32(esp, edi);
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
 * sub_00073350
 * Original: 0x00073350 - 0x000733F5 (165 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00073350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (CMP_NE(MEM32(esi + 0xA4), 0x8005)) goto loc_000733F0; /* jne: not equal / not zero */

loc_0007336D: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x35)) goto loc_000733F0; /* jne: not equal / not zero */

loc_00073376: ;
    SET_LO8(edx, MEM8(esi + 0x8C));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00073381: ;
    if (TEST_Z(eax, eax)) goto loc_000733F0; /* je: equal / zero */

loc_00073385: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_00073391: ;
    xmm0 = MEMF(0x64927C); /* movss */
    esp = esp + 4;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64997C); /* movss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649978); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000733D2: ;
    edx = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    MEM16(esi + 0x14) = LO16(edx);
    MEM16(esi + 0x16) = LO16(eax);
    MEM16(esi + 0x18) = LO16(ecx);

loc_000733F0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00073400
 * Original: 0x00073400 - 0x00073478 (120 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073400(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00073400: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x7F9F5C); /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00073434; /* jne: not equal / not zero */

loc_00073416: ;
    eax = ZX16(MEM16(ecx + 0x8E));
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xD8) = 1;

loc_00073434: ;
    edx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    esi = esi & 0xFFFF;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    eax = MEM32(ecx + 0xDC);
    if (TEST_Z(eax, eax)) { sub_00073478(); return; } /* je: equal / zero */

loc_00073458: ;
    if (CMP_LE(eax, edx)) goto loc_00073466; /* jle: less or equal (signed <=) */

loc_0007345C: ;
    eax = eax - edx;
    MEM32(ecx + 0xDC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00073466: ;
    MEM32(ecx + 0xE0) = esi;
    MEM32(ecx + 0xDC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000734B0
 * Original: 0x000734B0 - 0x0007370A (602 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000734B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000734B0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(ebp + 0xC7));
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebx & 3;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    MEM32(esp + 0x28) = ebx;
    if (TEST_Z(LO8(eax), 4)) goto loc_000734F0; /* je: equal / zero */

loc_000734D0: ;
    if (CMP_NE(ebx, 2)) goto loc_000734DF; /* jne: not equal / not zero */

loc_000734D5: ;
    MEM32(esp + 0x28) = 0;
    goto loc_000734EC;

loc_000734DF: ;
    if (CMP_NE(ebx, 1)) goto loc_000734F0; /* jne: not equal / not zero */

loc_000734E4: ;
    MEM32(esp + 0x28) = 3;

loc_000734EC: ;
    ebx = MEM32(esp + 0x28);

loc_000734F0: ;
    edi = MEM32(ebp + 0xE0);
    xmm0 = (float)(int32_t)MEM32(ebp + 0x8C); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp + 0x80); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x7F9F5C); /* movss */
    ecx = edi;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 0xD8);
    ecx = ecx & 0xFFFF;
    edi = edi & 0xFFFF;
    if (TEST_NZ(eax, eax)) goto loc_00073571; /* jne: not equal / not zero */

loc_00073531: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    edx = ZX16(MEM16(ebp + 0x14));
    ecx = ecx << 0x10;
    ecx = ecx | edx;
    (void)0; /* cmp ebx, 3 - flags set for next jcc */
    MEM32(ebp + 0xD8) = ecx;
    if (CMP_NE(ebx, 3)) goto loc_0007356D; /* jne: not equal / not zero */

loc_00073549: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edi = ecx;
    goto loc_00073571;

loc_0007356D: ;
    edi = 0; /* xor self */
    ecx = 0; /* xor self */

loc_00073571: ;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xD8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xDA);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(ebx, 2)) goto loc_000735F6; /* jne: not equal / not zero */

loc_0007358C: ;
    eax = MEM32(0x7FA20C);
    ebx = (int32_t)xmm0; /* cvttss2si */
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD00);
    ecx = ecx + eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    esi = (uint32_t)((int32_t)esi >> 8);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    if (CMP_GE(ecx, esi)) ecx = esi; /* cmovge */
    ebx = ebx + ebx * 8;
    ebx = ebx << 8;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    if (CMP_L(ecx, eax)) goto loc_00073667; /* jl: less (signed <) */

loc_000735DE: ;
    edx = MEM32(0x7FA20C);
    edi = edi + edx;
    if (CMP_L(edi, esi)) goto loc_00073667; /* jl: less (signed <) */

loc_000735EA: ;
    edi = esi;
    MEM32(esp + 0x28) = 3;
    goto loc_00073667;

loc_000735F6: ;
    if (CMP_NE(ebx, 1)) goto loc_00073667; /* jne: not equal / not zero */

loc_000735FB: ;
    edi = edi - MEM32(0x7FA20C);
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(edi & edi, 0)) ? 1 : 0); /* setle */
    ebx = (int32_t)xmm0; /* cvttss2si */
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD00);
    eax--;
    edi = edi & eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x14) = eax;
    esi = ebx + ebx * 8;
    esi = esi << 8;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = edx - eax;
    if (CMP_GE(edi, edx)) goto loc_00073667; /* jge: greater or equal (signed >=) */

loc_00073657: ;
    ecx = ecx - MEM32(0x7FA20C);
    if (CMP_G(ecx & ecx, 0)) goto loc_00073667; /* jg: greater (signed >) */

loc_00073661: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x28) = ecx;

loc_00073667: ;
    esi = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = (uint32_t)((int32_t)esi >> 8);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = eax + MEM32(esp + 0x1C);
    MEM16(ebp + 0x16) = LO16(eax);
    eax = MEM32(esp + 0x10);
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(esp + 0x1C);
    ebx = ebp + 0x150;
    ebx = ebx + 0x150;
    ecx = ecx & 0xFFFF;
    edx = edx - eax;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    MEM16(ebx + -314) = LO16(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(esp + 0x18);
    esi = edx;
    edi = edi << 0x10;
    edi = edi | ecx;
    esi = esi - eax;
    MEM16(ebx + 0x14) = LO16(esi);
    edx = edx + eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    MEM16(ebx + 0x164) = LO16(edx);
    SET_LO8(ecx, MEM8(ebp + 0xC7));
    MEM32(ebp + 0xE0) = edi;
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    POP32(esp, esi);
    MEM8(ebp + 0xC7) = LO8(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00073710
 * Original: 0x00073710 - 0x00073729 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00073710: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xDC);
    if (TEST_NZ(ecx, ecx)) goto loc_00073728; /* jne: not equal / not zero */

loc_0007371E: ;
    MEM32(eax + 0xDC) = 1;

loc_00073728: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00073730
 * Original: 0x00073730 - 0x0007381E (238 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073730(void)
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

loc_00073730: ;
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x8C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x7FA23C));
    edi = (uint32_t)((int32_t)edi >> 8);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = (int32_t)xmm0; /* cvttss2si */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007378D; /* je: equal / zero */

loc_0007377D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00073782: ;
    eax = eax & 0xFFFF;
    MEM32(esi + 0xD8) = eax;

loc_0007378D: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = MEM32(0x7FA20C);
    edx = eax + eax * 4;
    ecx = ecx + edx * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0xD8) = ecx;
    ecx = MEM32(esi + 0xDC);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(ecx, 1)) goto loc_000737E8; /* jne: not equal / not zero */

loc_000737C8: ;
    ecx = MEM32(esi + 0xE0);
    ecx = ecx + eax;
    eax = ecx;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0xE0) = ecx;
    if (CMP_LE(eax, edi)) goto loc_00073800; /* jle: less or equal (signed <=) */

loc_000737DC: ;
    MEM32(esi + 0xDC) = 2;
    goto loc_00073800;

loc_000737E8: ;
    if (CMP_NE(ecx, 2)) goto loc_00073800; /* jne: not equal / not zero */

loc_000737ED: ;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) - LO16(eax);
    if (CMP_GE(MEM16(esi + 0x16), 0xD8F0)) goto loc_00073800; /* jge: greater or equal (signed >=) */

loc_000737F9: ;
    MEM8(esi + 0xC2) = 1;

loc_00073800: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax - ebx;
    POP32(esp, edi);
    MEM16(esi + 0xAE) = LO16(eax);
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
 * sub_00073820
 * Original: 0x00073820 - 0x0007384E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00073820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x8C));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00073830: ;
    if (TEST_Z(eax, eax)) goto loc_0007384C; /* je: equal / zero */

loc_00073834: ;
    SET_LO16(ecx, MEM16(eax + 0x14));
    MEM16(esi + 0x14) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0x16));
    MEM16(esi + 0x16) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 0x18));
    MEM16(esi + 0x18) = LO16(eax);

loc_0007384C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00073850
 * Original: 0x00073850 - 0x00073895 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00073850: ;
    esp = esp - 0xA0;
    if (TEST_Z(eax, eax)) goto loc_0007388B; /* je: equal / zero */

loc_0007385A: ;
    PUSH32(esp, 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_00073884: ;
    esp = esp + 0x1C;
    if (CMP_L(esi, eax)) { sub_00073895(); return; } /* jl: less (signed <) */

loc_0007388B: ;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_000738B0
 * Original: 0x000738B0 - 0x0007399C (236 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000738B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000738B0: ;
    esp = esp - 0xA0;
    if (TEST_Z(esi, esi)) goto loc_00073995; /* je: equal / zero */

loc_000738BE: ;
    PUSH32(esp, 0x14);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xB4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_000738E1: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00073995; /* je: equal / zero */

loc_000738EC: ;
    xmm0 = MEMF(esp + 0xA4); /* movss */
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(eax, 4)) goto loc_00073971; /* jl: less (signed <) */

loc_000738FD: ;
    edx = eax + -3;
    PUSH32(esp, ebx);

loc_00073901: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(esp + ecx * 4 + 8);
    edi = MEM32(ebx + edi * 4);
    ebx = MEM32(esp + ecx * 4 + 0x58);
    edi = MEM32(edi + 4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    MEMF(edi + ebx + 0x1C) = xmm0; /* movss */
    ebx = MEM32(esi + 4);
    edi = MEM32(esp + ecx * 4 + 0xC);
    edi = MEM32(ebx + edi * 4);
    ebx = MEM32(esp + ecx * 4 + 0x5C);
    edi = MEM32(edi + 4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    MEMF(edi + ebx + 0x1C) = xmm0; /* movss */
    ebx = MEM32(esi + 4);
    edi = MEM32(esp + ecx * 4 + 0x10);
    edi = MEM32(ebx + edi * 4);
    ebx = MEM32(esp + ecx * 4 + 0x60);
    edi = MEM32(edi + 4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    MEMF(edi + ebx + 0x1C) = xmm0; /* movss */
    ebx = MEM32(esi + 4);
    edi = MEM32(esp + ecx * 4 + 0x14);
    edi = MEM32(ebx + edi * 4);
    ebx = MEM32(esp + ecx * 4 + 0x64);
    edi = MEM32(edi + 4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    ecx = ecx + 4;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEMF(edi + ebx + 0x1C) = xmm0; /* movss */
    if (CMP_L(ecx, edx)) goto loc_00073901; /* jl: less (signed <) */

loc_00073970: ;
    POP32(esp, ebx);

loc_00073971: ;
    if (CMP_GE(ecx, eax)) goto loc_00073994; /* jge: greater or equal (signed >=) */

loc_00073975: ;
    edi = MEM32(esi + 4);
    edx = MEM32(esp + ecx * 4 + 4);
    edx = MEM32(edi + edx * 4);
    edi = MEM32(esp + ecx * 4 + 0x54);
    edx = MEM32(edx + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(edx + edi + 0x1C) = xmm0; /* movss */
    if (CMP_L(ecx, eax)) goto loc_00073975; /* jl: less (signed <) */

loc_00073994: ;
    POP32(esp, edi);

loc_00073995: ;
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_000739A0
 * Original: 0x000739A0 - 0x000739C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000739A0(void)
{

loc_000739A0: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x76FE18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_000738B0(); /* call 0x000738B0 */

loc_000739C2: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000739D0
 * Original: 0x000739D0 - 0x000739FD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000739D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000739D0: ;
    ecx = MEM32(0x76FE18);
    if (TEST_Z(ecx, ecx)) goto loc_000739FC; /* je: equal / zero */

loc_000739DA: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000739FC; /* je: equal / zero */

loc_000739DF: ;
    ecx = MEM32(ecx + 4);
    edx = eax;
    edx = edx & 0xFFFF;
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 4);
    eax = eax >> 0x10;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    MEMF(ecx + eax + 0x1C) = xmm0; /* movss */

loc_000739FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00073A00
 * Original: 0x00073A00 - 0x00073A19 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00073A00: ;
    eax = MEM32(0x76FE18);
    esp = esp - 0xA0;
    if (TEST_NZ(eax, eax)) { sub_00073A19(); return; } /* jne: not equal / not zero */

loc_00073A0F: ;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00073A50
 * Original: 0x00073A50 - 0x00073A6C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073A50(void)
{

loc_00073A50: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    PUSH32(esp, eax);
    eax = MEM32(0x76FE18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00073850(); /* call 0x00073850 */

loc_00073A68: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00073A70
 * Original: 0x00073A70 - 0x00073CBC (588 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00073A70: ;
    esp = esp - 0xA4;
    if (TEST_Z(esi, esi)) goto loc_00073CB5; /* je: equal / zero */

loc_00073A7E: ;
    PUSH32(esp, 0x14);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xB8);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_00073AA1: ;
    esp = esp + 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_00073CB5; /* je: equal / zero */

loc_00073AAF: ;
    xmm1 = MEMF(esp + 0xA8); /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(eax, 4)) goto loc_00073C4F; /* jl: less (signed <) */

loc_00073AD9: ;
    ebp = eax + -3;
    /* nop */

loc_00073AE0: ;
    edx = MEM32(esp + ecx * 4 + 0x10);
    ebx = MEM32(esp + ecx * 4 + 0x60);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    if (CMP_EQ(MEM32(eax + edi + 0x44), 0)) goto loc_00073B26; /* je: equal / zero */

loc_00073AFD: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    xmm5 = (float)(int32_t)MEM32(edi + eax + 0x48); /* cvtsi2ss */
    edi = edi + eax;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edi + 0xC) = xmm4; /* movss */

loc_00073B26: ;
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    ebx = MEM32(esp + ecx * 4 + 0x64);
    MEMF(eax + edx + 0x1C) = xmm3; /* movss */
    edx = MEM32(esp + ecx * 4 + 0x14);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    if (CMP_EQ(MEM32(eax + edi + 0x44), 0)) goto loc_00073B7E; /* je: equal / zero */

loc_00073B55: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    xmm5 = (float)(int32_t)MEM32(edi + eax + 0x48); /* cvtsi2ss */
    edi = edi + eax;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edi + 0xC) = xmm4; /* movss */

loc_00073B7E: ;
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    ebx = MEM32(esp + ecx * 4 + 0x68);
    MEMF(eax + edx + 0x1C) = xmm3; /* movss */
    edx = MEM32(esp + ecx * 4 + 0x18);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    if (CMP_EQ(MEM32(eax + edi + 0x44), 0)) goto loc_00073BD6; /* je: equal / zero */

loc_00073BAD: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    xmm5 = (float)(int32_t)MEM32(edi + eax + 0x48); /* cvtsi2ss */
    edi = edi + eax;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edi + 0xC) = xmm4; /* movss */

loc_00073BD6: ;
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    edi = MEM32(esp + ecx * 4 + 0x1C);
    ebx = MEM32(esp + ecx * 4 + 0x6C);
    MEMF(eax + edx + 0x1C) = xmm3; /* movss */
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    if (CMP_EQ(MEM32(eax + edx + 0x44), 0)) goto loc_00073C2E; /* je: equal / zero */

loc_00073C05: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebx * 4);
    eax = MEM32(eax + 4);
    xmm5 = (float)(int32_t)MEM32(edx + eax + 0x48); /* cvtsi2ss */
    edx = edx + eax;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_00073C2E: ;
    edx = MEM32(esi + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    eax = MEM32(edx + ebx * 4);
    edx = MEM32(eax + 4);
    ecx = ecx + 4;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEMF(edx + edi + 0x1C) = xmm3; /* movss */
    if (CMP_L(ecx, ebp)) goto loc_00073AE0; /* jl: less (signed <) */

loc_00073C4B: ;
    eax = MEM32(esp + 0xC);

loc_00073C4F: ;
    if (CMP_GE(ecx, eax)) goto loc_00073CB2; /* jge: greater or equal (signed >=) */

loc_00073C53: ;
    edi = MEM32(esp + ecx * 4 + 0x10);
    ebx = MEM32(esp + ecx * 4 + 0x60);
    ebp = MEM32(esi + 4);
    ebp = MEM32(ebp + ebx * 4);
    ebp = MEM32(ebp + 4);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    if (CMP_EQ(MEM32(edx + ebp + 0x44), 0)) goto loc_00073C9B; /* je: equal / zero */

loc_00073C71: ;
    ebp = MEM32(esi + 4);
    ebp = MEM32(ebp + ebx * 4);
    ebp = MEM32(ebp + 4);
    xmm5 = (float)(int32_t)MEM32(edx + ebp + 0x48); /* cvtsi2ss */
    edx = edx + ebp;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(edx + 0xC) = xmm4; /* movss */

loc_00073C9B: ;
    edx = MEM32(esi + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    edx = MEM32(edx + ebx * 4);
    edx = MEM32(edx + 4);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(edx + edi + 0x1C) = xmm3; /* movss */
    if (CMP_L(ecx, eax)) goto loc_00073C53; /* jl: less (signed <) */

loc_00073CB2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00073CB5: ;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_00073CC0
 * Original: 0x00073CC0 - 0x00073CE5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073CC0(void)
{

loc_00073CC0: ;
    ecx = MEM32(eax + 0x64);
    edx = MEM32(eax + 0x60);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00073CE0: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00073CF0
 * Original: 0x00073CF0 - 0x00073D17 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073CF0(void)
{

loc_00073CF0: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x76FE18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00073D12: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00073D20
 * Original: 0x00073D20 - 0x00073D85 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00073D20: ;
    edx = MEM32(0x76FE18);
    if (TEST_Z(edx, edx)) goto loc_00073D84; /* je: equal / zero */

loc_00073D2A: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00073D84; /* je: equal / zero */

loc_00073D2F: ;
    eax = ecx;
    ecx = ecx >> 0x10;
    PUSH32(esp, esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    esi = MEM32(edx + 4);
    eax = eax & 0xFFFF;
    esi = MEM32(esi + eax * 4);
    esi = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + ecx + 0x44);
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_00073D84; /* je: equal / zero */

loc_00073D51: ;
    edx = MEM32(edx + 4);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax + 4);
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = (float)(int32_t)MEM32(edx + ecx + 0x48); /* cvtsi2ss */
    eax = edx + ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(eax + 0xC) = xmm1; /* movss */

loc_00073D84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00073D90
 * Original: 0x00073D90 - 0x00073F6E (478 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00073D90: ;
    SET_LO8(eax, MEM8(esi + 0xC2));
    esp = esp - 0x28;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    if (CMP_EQ(LO8(eax), 1)) goto loc_00073F69; /* je: equal / zero */

loc_00073DA6: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00073DBE; /* jne: not equal / not zero */

loc_00073DAF: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    MEM8(esi + 0xEE) = LO8(eax);
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_00073DBE: ;
    ecx = MEM32(0x8470DC);
    ecx = ecx + 0x330;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebp);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0xF) = LO8(ebx);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_00073F0C; /* je: equal / zero */

loc_00073DF1: ;
    edi = esi + 0x20;

loc_00073DF4: ;
    edx = ecx + 0x78;
    eax = MEM32(edx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_00073E1F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEM32(0x76FC50) = ebx;
    MEM32(0x76FC58) = ebx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x76FC3C) = xmm0; /* movss */
    edx = MEM32(esi + 0x140);
    MEM32(0x812A18) = edx;
    MEM32(0x819B24) = 1;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = edi;
    MEM32(0x780AB0) = 0x5E0798;
    MEM32(0x6C0210) = 0x2276;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0xF6000;
    MEM32(0x84B568) = ebx;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_00073ED4: ;
    esp = esp + 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x74FA2C) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM32(0x780AB0) = ebx;
    if (TEST_NZ(eax, eax)) goto loc_00073F07; /* jne: not equal / not zero */

loc_00073EF7: ;
    ecx = MEM32(ebp + 4);
    ebp = ebp + 4;
    if (CMP_NE(ecx, ebx)) goto loc_00073DF4; /* jne: not equal / not zero */

loc_00073F05: ;
    goto loc_00073F0C;

loc_00073F07: ;
    MEM8(esp + 0xF) = 1;

loc_00073F0C: ;
    (void)0; /* cmp MEM8(esp + 0xF), 1 - flags set for next jcc */
    edi = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    ecx = edi;
    if (CMP_NE(MEM8(esp + 0xF), 1)) goto loc_00073F1F; /* jne: not equal / not zero */

loc_00073F1D: ;
    ecx = edx;

loc_00073F1F: ;
    eax = ZX8(MEM8(esi + 0xEE));
    if (CMP_EQ(ecx, eax)) goto loc_00073F61; /* je: equal / zero */

loc_00073F2A: ;
    if (CMP_LE(ecx, eax)) goto loc_00073F39; /* jle: less or equal (signed <=) */

loc_00073F2C: ;
    ecx = MEM32(0x7FA20C);
    eax = eax + ecx;
    eax = eax + ecx * 4;
    goto loc_00073F48;

loc_00073F39: ;
    if (CMP_GE(ecx, eax)) goto loc_00073F48; /* jge: greater or equal (signed >=) */

loc_00073F3D: ;
    ecx = MEM32(0x7FA20C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFFFFFFFBu);
    eax = eax + ecx;

loc_00073F48: ;
    if (CMP_GE(eax, edx)) goto loc_00073F5B; /* jge: greater or equal (signed >=) */

loc_00073F4C: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, ebx);
    MEM8(esi + 0xEE) = LO8(eax);
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_00073F5B: ;
    if (CMP_LE(eax, edi)) goto loc_00073F61; /* jle: less or equal (signed <=) */

loc_00073F5F: ;
    eax = edi;

loc_00073F61: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi + 0xEE) = LO8(eax);

loc_00073F69: ;
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00073F70
 * Original: 0x00073F70 - 0x00073F8E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00073F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0x2E)) { sub_00073F8E(); return; } /* jne: not equal / not zero */

loc_00073F85: ;
    MEM32(ebp + -44) = 0x8C;
    g_seh_ebp = ebp; sub_00073F9A(); return; /* tail jmp 0x00073F9A */

}

/**
 * sub_00074050
 * Original: 0x00074050 - 0x00074082 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074050(void)
{

loc_00074050: ;
    esp = esp - 8;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0xFF);
    ecx = esp + 8;
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00073D90(); /* call 0x00073D90 */

loc_0007407A: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00074090
 * Original: 0x00074090 - 0x0007414E (190 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074090(void)
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

loc_00074090: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00074148; /* ja: above (unsigned >) */

loc_000740DA: ;
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x18))) goto loc_00074148; /* ja: above (unsigned >) */

loc_000740E1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00074148; /* ja: above (unsigned >) */

loc_00074114: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0007414E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00074148: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00074190
 * Original: 0x00074190 - 0x000741F2 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00074190: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    edx = 0x100;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_000741B7: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000741C5: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_000741E5; /* je: equal / zero */

loc_000741CB: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000741D6: ;
    if (TEST_NZ(eax, eax)) { sub_000741F2(); return; } /* jne: not equal / not zero */

loc_000741DA: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_000741E5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x847194) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00074230
 * Original: 0x00074230 - 0x000744C0 (656 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00074230: ;
    eax = MEM32(0x76FE14);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_000742B6; /* je: equal / zero */

loc_0007423E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x76FE18);
    if (CMP_EQ(ebx, ebp)) goto loc_0007424E; /* je: equal / zero */

loc_00074249: ;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_0007424E: ;
    eax = MEM32(0x76FE00);
    PUSH32(esp, 0x76FE08);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_0007425E: ;
    PUSH32(esp, 0x76FE64);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00074268: ;
    PUSH32(esp, 0x76FE0C);
    MEM32(0x76FE64) = ebp;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00074278: ;
    ecx = MEM32(0x76FE14);
    esp = esp + 0x10;
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0007428D: ;
    edi = eax;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(edi, ebp)) goto loc_000742B6; /* je: equal / zero */

loc_00074294: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_0007429D; /* je: equal / zero */

loc_00074299: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0007429D: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_000742B6; /* jne: not equal / not zero */

loc_000742A3: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_000742AC: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_000742B6: ;
    ecx = MEM32(0x76FE68);
    if (CMP_EQ(ecx, ebp)) goto loc_000742F4; /* je: equal / zero */

loc_000742C0: ;
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_000742CC: ;
    edi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_000742F4; /* je: equal / zero */

loc_000742D2: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_000742DB; /* je: equal / zero */

loc_000742D7: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_000742DB: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_000742F4; /* jne: not equal / not zero */

loc_000742E1: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_000742EA: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_000742F4: ;
    ecx = MEM32(0x8471EC);
    if (CMP_EQ(ecx, ebp)) goto loc_00074338; /* je: equal / zero */

loc_000742FE: ;
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0007430A: ;
    edi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_00074332; /* je: equal / zero */

loc_00074310: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_00074319; /* je: equal / zero */

loc_00074315: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00074319: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_00074332; /* jne: not equal / not zero */

loc_0007431F: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00074328: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00074332: ;
    MEM32(0x8471EC) = ebp;

loc_00074338: ;
    ecx = MEM32(0x8471F0);
    if (CMP_EQ(ecx, ebp)) goto loc_0007437C; /* je: equal / zero */

loc_00074342: ;
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0007434E: ;
    edi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_00074376; /* je: equal / zero */

loc_00074354: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_0007435D; /* je: equal / zero */

loc_00074359: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0007435D: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_00074376; /* jne: not equal / not zero */

loc_00074363: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0007436C: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00074376: ;
    MEM32(0x8471F0) = ebp;

loc_0007437C: ;
    esi = 0x76FE6C;

loc_00074381: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_000743BC; /* je: equal / zero */

loc_00074387: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0007438D: ;
    if (TEST_NZ(eax, eax)) goto loc_000743BC; /* jne: not equal / not zero */

loc_00074391: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_000743BC; /* je: equal / zero */

loc_00074397: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000743B7: ;
    esp = esp + 4;
    MEM32(esi) = ebp;

loc_000743BC: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x76FE74)) goto loc_00074381; /* jl: less (signed <) */

loc_000743C7: ;
    eax = MEM32(0x847194);
    if (CMP_EQ(eax, ebp)) goto loc_00074413; /* je: equal / zero */

loc_000743D0: ;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0xFFFF;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    edi = eax;
    if (CMP_NE(edx, 1)) goto loc_0007440B; /* jne: not equal / not zero */

loc_000743E1: ;
    ecx = ecx & 0x70000;
    if (CMP_NE(ecx, 0x50000)) goto loc_000743FC; /* jne: not equal / not zero */

loc_000743EF: ;
    eax = MEM32(eax + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_000743FC; /* je: equal / zero */

loc_000743F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000743FC: ;
    if (TEST_NZ(MEM32(edi), 0x780000)) goto loc_0007440B; /* jne: not equal / not zero */

loc_00074404: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_00074409: ;
    goto loc_0007440D;

loc_0007440B: ;
    MEM32(edi) = MEM32(edi) - 1;

loc_0007440D: ;
    MEM32(0x847194) = ebp;

loc_00074413: ;
    eax = MEM32(0x84A144);
    esi = 0; /* xor self */
    if (CMP_L(eax, ebp)) goto loc_000744BC; /* jl: less (signed <) */

loc_00074422: ;
    eax = MEM32(esi * 4 + 0x76F728);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0007442F: ;
    if (TEST_NZ(eax, eax)) goto loc_00074468; /* jne: not equal / not zero */

loc_00074433: ;
    eax = MEM32(esi * 4 + 0x76F728);
    if (CMP_EQ(eax, ebp)) goto loc_00074468; /* je: equal / zero */

loc_0007443E: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0007445E: ;
    esp = esp + 4;
    MEM32(esi * 4 + 0x76F728) = ebp;

loc_00074468: ;
    eax = MEM32(esi * 4 + 0x76FDE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00074475: ;
    if (TEST_NZ(eax, eax)) goto loc_000744AE; /* jne: not equal / not zero */

loc_00074479: ;
    eax = MEM32(esi * 4 + 0x76FDE4);
    if (CMP_EQ(eax, ebp)) goto loc_000744AE; /* je: equal / zero */

loc_00074484: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000744A4: ;
    esp = esp + 4;
    MEM32(esi * 4 + 0x76FDE4) = ebp;

loc_000744AE: ;
    eax = MEM32(0x84A144);
    esi++;
    if (CMP_LE(esi, eax)) goto loc_00074422; /* jle: less or equal (signed <=) */

loc_000744BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000744C0
 * Original: 0x000744C0 - 0x00074599 (217 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000744C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000744C0: ;
    esp = esp - 0x218;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_GE(eax, 0x4B)) { sub_00074599(); return; } /* jge: greater or equal (signed >=) */

loc_000744D2: ;
    if (CMP_EQ(eax, 0x48)) { sub_00074599(); return; } /* je: equal / zero */

loc_000744DB: ;
    eax = MEM32(eax * 4 + 0x68C358);
    if (CMP_EQ(eax, edi)) { sub_00074599(); return; } /* je: equal / zero */

loc_000744EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x120;
    PUSH32(esp, 0x5E082C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000744FE: ;
    ecx = esp + 0x128;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0xE);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00074516: ;
    esp = esp + 0x18;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0xE;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00074539: ;
    esi = esp + 8;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_00074542: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp MEM32(eax + 4), edi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(eax + 4), edi)) goto loc_00074572; /* je: equal / zero */

loc_0007454C: ;
    ecx = esp + 4;
    MEM32(0x8471EC) = edi;
    PUSH32(esp, 0); sub_00063780(); /* call 0x00063780 */

loc_0007455B: ;
    ecx = esp + 4;
    MEM32(0x8471EC) = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0007456A: ;
    POP32(esp, edi);
    esp = esp + 0x218;
    esp += 4; return; /* ret */

loc_00074572: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_00074580; /* je: equal / zero */

loc_0007457C: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_00074580: ;
    edx = MEM32(ecx);
    ecx = esp + 4;
    MEM32(0x8471EC) = edx;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00074591: ;
    POP32(esp, edi);
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_000745B0
 * Original: 0x000745B0 - 0x0007461D (109 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000745B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000745B0: ;
    esp = esp - 0x234;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x23C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x20;
    edi = 0x76FE00;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebx;
    PUSH32(esp, 0); sub_00064070(); /* call 0x00064070 */

loc_000745D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 7);
    eax = esp + 0x148;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000745EA: ;
    ebp = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 0x130;
    MEM32(esp + 0x240) = 7;
    MEM32(esp + 0x130) = ebp;
    MEM32(esp + 0x138) = ebp;
    MEM32(esp + 0x134) = ebp;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0007461B: ;
    g_seh_ebp = ebp; sub_00074620(); return; /* tail jmp 0x00074620 */

}

/**
 * sub_00075050
 * Original: 0x00075050 - 0x000750F4 (164 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075050: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00075094; /* jbe: below or equal (unsigned <=) */

loc_0007505F: ;
    /* nop */

loc_00075060: ;
    eax = MEM32(ebx + 8);
    esi = MEM32(eax + edi * 4);
    ecx = esi + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0007506F: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0007508D; /* jge: greater or equal (signed >=) */

loc_0007507C: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0007508D; /* je: equal / zero */

loc_00075087: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0007508A: ;
    esp = esp + 4;

loc_0007508D: ;
    eax = MEM32(ebx);
    edi++;
    if (CMP_B(edi, eax)) goto loc_00075060; /* jb: below (unsigned <) */

loc_00075094: ;
    esi = MEM32(ebx + 0xC);
    if (TEST_Z(esi, esi)) goto loc_000750C2; /* je: equal / zero */

loc_0007509B: ;
    edx = esi + -32;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_000750A4: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_000750C2; /* jge: greater or equal (signed >=) */

loc_000750B1: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_000750C2; /* je: equal / zero */

loc_000750BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000750BF: ;
    esp = esp + 4;

loc_000750C2: ;
    ebx = MEM32(ebx + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_000750F0; /* je: equal / zero */

loc_000750C9: ;
    eax = ebx + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_000750D2: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_000750F0; /* jge: greater or equal (signed >=) */

loc_000750DF: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_000750F0; /* je: equal / zero */

loc_000750EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000750ED: ;
    esp = esp + 4;

loc_000750F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00075100
 * Original: 0x00075100 - 0x0007518B (139 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075100(void)
{
    int _cf = 0; /* carry flag */

loc_00075100: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x30);
    MEM32(eax + 8) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x40);
    MEM32(eax + 0x30) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0x40) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x18);
    MEM32(eax + 0x10) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x38);
    MEM32(eax + 0x18) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x28);
    MEM32(eax + 0x38) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    edx = MEM32(eax + 0x20);
    MEM32(eax + 0x28) = esi;
    esi = edx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    esi = esi + edx;
    MEM32(eax + 0x20) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075190
 * Original: 0x00075190 - 0x000751AB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075190(void)
{
    int _cf = 0; /* carry flag */

loc_00075190: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xB0);
    edx = MEM32(esp + 8);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edx;
    MEM32(eax + 0xB4) = MEM32(eax + 0xB4) + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000751B0
 * Original: 0x000751B0 - 0x000752A3 (243 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000751B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000751B0: ;
    eax = 0; /* xor self */
    MEM32(0x76FDE4) = eax;
    MEM32(0x76FDE8) = eax;
    MEM32(0x76FDEC) = eax;
    PUSH32(esp, ebp);
    MEM32(0x76FDF0) = eax;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(eax, eax)) goto loc_00075283; /* jl: less (signed <) */

loc_000751D8: ;
    goto loc_000751E0;

    /* nop */

loc_000751E0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000751EE; /* jne: not equal / not zero */

loc_000751E9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000751EE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00075238; /* je: equal / zero */

loc_00075214: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7C)) goto loc_00075238; /* jb: below (unsigned <) */

loc_0007521D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00075227: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0007522F: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_00075257; /* jne: not equal / not zero */

loc_00075238: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0007524A: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00075252: ;
    esp = esp + 8;
    edi = eax;

loc_00075257: ;
    eax = 0; /* xor self */
    MEM32(ebp * 4 + 0x76FDE4) = edi;
    ecx = 0x1F;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp * 4 + 0x76FDE4);
    eax = MEM32(0x84A144);
    ebp++;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(ecx + 8) = 1;
    if (CMP_LE(ebp, eax)) goto loc_000751E0; /* jle: less or equal (signed <=) */

loc_00075283: ;
    eax = MEM32(0x8471F0);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) { sub_000752A3(); return; } /* je: equal / zero */

loc_0007528E: ;
    edx = MEM32(eax + 0xB8);
    eax = MEM32(eax + 0xB0);
    esi = edx + eax + 0xA0;
    g_seh_ebp = ebp; sub_000752A8(); return; /* tail jmp 0x000752A8 */

}

/**
 * sub_00075490
 * Original: 0x00075490 - 0x000754A7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075490: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x76FE00);
    esi = ecx;
    PUSH32(esp, 0); sub_003ECD90(); /* call 0x003ECD90 */

loc_0007549E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_000754A7(); return; } /* jne: not equal / not zero */

loc_000754A5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000754C0
 * Original: 0x000754C0 - 0x00075520 (96 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000754C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000754C0: ;
    esp = esp - 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E07E8);
    PUSH32(esp, 0x14);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000754D7: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0x14;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00075504: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_00075520(); return; } /* jl: less (signed <) */

loc_00075512: ;
    if (CMP_G(eax, 0x3E5)) { sub_00075520(); return; } /* jg: greater (signed >) */

loc_00075519: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0007551E: ;
    goto loc_00075504;

}

/**
 * sub_00075580
 * Original: 0x00075580 - 0x000755DD (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075580: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5D8A04);
    PUSH32(esp, 0x5E07C8);
    PUSH32(esp, 0x14);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0007559C: ;
    esi = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x14;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_000755C1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_000755DD(); return; } /* jl: less (signed <) */

loc_000755CF: ;
    if (CMP_G(eax, 0x3E5)) { sub_000755DD(); return; } /* jg: greater (signed >) */

loc_000755D6: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_000755DB: ;
    goto loc_000755C1;

}

/**
 * sub_00075640
 * Original: 0x00075640 - 0x00075679 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075640: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5DF8C0;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00075665: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00075679(); return; } /* je: equal / zero */

loc_0007566C: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_00075679(); return; } /* je: equal / zero */

loc_00075674: ;
    ebx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0007567B(); return; /* tail jmp 0x0007567B */

}

/**
 * sub_00075760
 * Original: 0x00075760 - 0x000759C6 (614 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075760(void)
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

loc_00075760: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ZX8(MEM8(ebp + 0x1A0));
    eax = eax - 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + 0x1A3) = 0;
    if ((eax == 0)) goto loc_00075854; /* je: equal / zero */

loc_00075781: ;
    eax--;
    if ((eax == 0)) goto loc_00075786; /* je: equal / zero */

loc_00075784: ;
    goto loc_00075784;

loc_00075786: ;
    esi = MEM32(ebp + 0x190);
    if (CMP_EQ(MEM8(esi + 0xC2), 1)) goto loc_000759BF; /* je: equal / zero */

loc_00075799: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edi = MEM32(esi + 0xF8);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    edi = edi + 0x1B0;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = edi;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_000757D1: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00075828; /* jne: not equal / not zero */

loc_000757D8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00075825: ;
    esp = esp + 0x38;

loc_00075828: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_000758C7;

loc_00075854: ;
    eax = MEM32(ebp + 0x190);
    xmm0 = MEMF(eax + 0x78); /* movss */
    ecx = MEM32(eax + 0x68);
    (void)0; /* cmp ecx, 0x25 - flags set for next jcc */
    xmm1 = MEMF(eax + 0x294); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_NE(ecx, 0x25)) goto loc_0007589A; /* jne: not equal / not zero */

loc_00075894: ;
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_0007589A: ;
    edx = ZX16(MEM16(eax + 0x274));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x260); /* mulss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    edi = eax + 0x2A0;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000758CD; /* jp: parity */

loc_000758C0: ;
    eax = ecx;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_000758C7: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */

loc_000758CD: ;
    /* comiss xmm1, MEMF(esp + 0xC) - sets EFLAGS */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ebp + 0x194) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ebp + 0x198) = xmm0; /* movss */
    MEMF(ebp + 0x19C) = xmm1; /* movss */
    if ((xmm1 > MEMF(esp + 0xC))) goto loc_000759BF; /* ja: above (unsigned >) */

loc_000758FC: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_000759D0(); /* call 0x000759D0 */

loc_0007590D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000759BF; /* je: equal / zero */

loc_00075918: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00075943; /* jp: parity */

loc_00075939: ;
    xmm0 = MEMF(0x648D54); /* movss */
    goto loc_00075953;

loc_00075943: ;
    xmm1 = MEMF(0x648EBC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00075953; /* jbe: below or equal (unsigned <=) */

loc_00075950: ;
    xmm0 = xmm1; /* movaps */

loc_00075953: ;
    if (TEST_Z(MEM8(ebp + 0x1A4), 1)) goto loc_00075996; /* je: equal / zero */

loc_0007595C: ;
    eax = ZX8(MEM8(ebp + 0x1A2));
    if (CMP_EQ(eax, 0xFF)) goto loc_000759B2; /* je: equal / zero */

loc_0007596A: ;
    ecx = MEM32(0x7FA20C);
    edx = ecx + eax;
    eax = edx + ecx * 4;
    if (CMP_LE(eax, 0xFF)) goto loc_000759B2; /* jle: less or equal (signed <=) */

loc_0007597D: ;
    POP32(esp, edi);
    eax = 0xFF;
    POP32(esp, esi);
    MEM8(ebp + 0x1A2) = LO8(eax);
    MEM8(ebp + 0x1A3) = 1;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00075996: ;
    xmm1 = MEMF(0x648FD0); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    eax = (int32_t)xmm1; /* cvttss2si */
    if (CMP_LE(eax, 0xA0)) goto loc_000759B2; /* jle: less or equal (signed <=) */

loc_000759AD: ;
    eax = 0xA0;

loc_000759B2: ;
    MEM8(ebp + 0x1A2) = LO8(eax);
    MEM8(ebp + 0x1A3) = 1;

loc_000759BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000759D0
 * Original: 0x000759D0 - 0x000759EC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000759D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000759D0: ;
    PUSH32(esp, ecx);
    if (TEST_NZ(edx, edx)) { sub_000759EC(); return; } /* jne: not equal / not zero */

loc_000759D5: ;
    eax = MEM32(esp + 0xC);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00075B50
 * Original: 0x00075B50 - 0x00075BB4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075B50: ;
    eax = MEM32(0x8471FC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_00075B95; /* jne: not equal / not zero */

loc_00075B5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_000765B0(); /* call 0x000765B0 */

loc_00075B64: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_00075B8E; /* je: equal / zero */

loc_00075B6D: ;
    PUSH32(esp, 0x1000);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0x400;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00075B81: ;
    esp = esp + 4;
    MEM32(esi) = eax;
    MEM32(0x8471FC) = esi;
    goto loc_00075B94;

loc_00075B8E: ;
    MEM32(0x8471FC) = edi;

loc_00075B94: ;
    POP32(esp, esi);

loc_00075B95: ;
    MEM32(0x8471F4) = edi;
    eax = 0x84E368;

loc_00075BA0: ;
    MEM32(eax + -2056) = edi;
    MEM32(eax) = edi;
    eax = eax + 8;
    if (CMP_L(eax, 0x84EB70)) goto loc_00075BA0; /* jl: less (signed <) */

loc_00075BB2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075BC0
 * Original: 0x00075BC0 - 0x00075D45 (389 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075BC0: ;
    esp = esp - 0xC;
    eax = MEM32(0x8471FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ecx, ebx)) goto loc_00075C84; /* jle: less or equal (signed <=) */

loc_00075BDF: ;
    goto loc_00075BE5;

loc_00075BE1: ;
    eax = MEM32(esp + 0x14);

loc_00075BE5: ;
    eax = MEM32(eax);
    eax = MEM32(eax + ebp * 4);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_00075C25; /* je: equal / zero */

loc_00075BF4: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (CMP_EQ(edx, ebx)) goto loc_00075C25; /* je: equal / zero */

loc_00075C09: ;
    /* nop */

loc_00075C10: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_00075D45(); return; } /* je: equal / zero */

loc_00075C1E: ;
    edx = MEM32(edx + 4);
    if (CMP_NE(edx, ebx)) goto loc_00075C10; /* jne: not equal / not zero */

loc_00075C25: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_00075C46; /* jae: above or equal (unsigned >=) */

loc_00075C34: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_00075C3F; /* je: equal / zero */

loc_00075C3A: ;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_00075C48; /* je: equal / zero */

loc_00075C3F: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_00075C34; /* jb: below (unsigned <) */

loc_00075C46: ;
    edx = 0; /* xor self */

loc_00075C48: ;
    edi = edx;
    if (CMP_EQ(edi, ebx)) goto loc_00075C6E; /* je: equal / zero */

loc_00075C4E: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_00075C57; /* je: equal / zero */

loc_00075C53: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00075C57: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_00075C6E; /* jne: not equal / not zero */

loc_00075C5D: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00075C64: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00075C6E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(ecx) = ebx;
    eax = MEM32(edx + 4);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00075BE1; /* jl: less (signed <) */

loc_00075C84: ;
    ecx = MEM32(0x8471F8);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = MEM32(0x8471FC);
    MEM32(eax + 4) = ebx;
    MEM32(0x8471F4) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_00075CD6; /* je: equal / zero */

loc_00075C9C: ;
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00075CA8: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00075CD0; /* je: equal / zero */

loc_00075CAE: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_00075CB7; /* je: equal / zero */

loc_00075CB3: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00075CB7: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_00075CD0; /* jne: not equal / not zero */

loc_00075CBD: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00075CC6: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00075CD0: ;
    MEM32(0x8471F8) = ebx;

loc_00075CD6: ;
    eax = 0x75B954;
    goto loc_00075CE0;

    /* nop */

loc_00075CE0: ;
    if (CMP_EQ(MEM32(eax + -4), ebx)) goto loc_00075D33; /* je: equal / zero */

loc_00075CE5: ;
    SET_LO8(ecx, MEM8(eax));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(ecx), LO8(ebx))) goto loc_00075D33; /* jbe: below or equal (unsigned <=) */

loc_00075CED: ;
    ecx = 0; /* xor self */
    /* nop */

loc_00075CF0: ;
    if (CMP_L(eax, 0x75B954)) goto loc_00075D21; /* jl: less (signed <) */

loc_00075CF7: ;
    if (CMP_GE(eax, 0x75CFE4)) goto loc_00075D21; /* jge: greater or equal (signed >=) */

loc_00075CFE: ;
    edx = ZX8(MEM8(eax));
    if (CMP_AE(esi, edx)) goto loc_00075D21; /* jae: above or equal (unsigned >=) */

loc_00075D05: ;
    edx = MEM32(eax + -4);
    if (CMP_EQ(edx, ebx)) goto loc_00075D21; /* je: equal / zero */

loc_00075D0C: ;
    if (CMP_EQ(MEM32(ecx + edx + 0xC), ebx)) goto loc_00075D21; /* je: equal / zero */

loc_00075D12: ;
    edi = MEM32(edx + ecx + 0xC);
    edx = edx + ecx;
    MEM32(edx) = edi;
    edx = MEM32(eax + -4);
    MEM32(ecx + edx + 0xC) = ebx;

loc_00075D21: ;
    edx = MEM32(eax + -4);
    MEM32(ecx + edx + 0x10) = ebx;
    edx = ZX8(MEM8(eax));
    esi++;
    ecx = ecx + 0x14;
    if (CMP_L(esi, edx)) goto loc_00075CF0; /* jl: less (signed <) */

loc_00075D33: ;
    eax = eax + 8;
    if (CMP_L(eax, 0x75CFE4)) goto loc_00075CE0; /* jl: less (signed <) */

loc_00075D3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00075D90
 * Original: 0x00075D90 - 0x00075DCC (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075D90: ;
    esp = esp - 0x100;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x108);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00075DA6: ;
    edx = 0; /* xor self */
    edi = 0x101;
    ecx = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    if (CMP_NE(MEM32(edx * 8 + 0x84DB60), ecx)) { sub_00075DCC(); return; } /* jne: not equal / not zero */

loc_00075DBA: ;
    eax = MEM32(edx * 8 + 0x84DB64);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00075E90
 * Original: 0x00075E90 - 0x00075F83 (243 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075E90: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x114;
    if (TEST_Z(eax, eax)) goto loc_00075F7C; /* je: equal / zero */

loc_00075EA2: ;
    (void)0; /* cmp MEM8(eax), 0x2E - flags set for next jcc */
    ecx = 0x587BE4;
    if (CMP_NE(MEM8(eax), 0x2E)) goto loc_00075EB1; /* jne: not equal / not zero */

loc_00075EAC: ;
    eax = eax + 3;
    goto loc_00075EB6;

loc_00075EB1: ;
    ecx = 0x5E0D08;

loc_00075EB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00075EC3: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0x14;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00075EF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_00075F0C; /* jl: less (signed <) */

loc_00075EFE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_00075F0C; /* jg: greater (signed >) */

loc_00075F05: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00075F0A: ;
    goto loc_00075EF0;

loc_00075F0C: ;
    eax = MEM32(ecx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00075F45; /* je: equal / zero */

loc_00075F14: ;
    esi = MEM32(esp + 0x120);
    MEM32(esi) = 0;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_00075F26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5DF878);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00075F31: ;
    esp = esp + 8;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00075F3D: ;
    POP32(esp, esi);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_00075F45: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = ecx + 0x18;
    if (TEST_Z(edx, edx)) goto loc_00075F53; /* je: equal / zero */

loc_00075F4F: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_00075F53: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x120);
    MEM32(edx) = eax;
    eax = MEM32(0x8471FC);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00075F72; /* je: equal / zero */

loc_00075F69: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + esi * 4) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00075F72: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00075F7B: ;
    POP32(esp, esi);

loc_00075F7C: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00075F90
 * Original: 0x00075F90 - 0x00076060 (208 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00075F90: ;
    esp = esp - 0x114;
    if (TEST_Z(eax, eax)) goto loc_00076059; /* je: equal / zero */

loc_00075F9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0CF8);
    PUSH32(esp, 0x14);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00075FAF: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0x14;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00075FDC: ;
    /* nop */

loc_00075FE0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_00075FFC; /* jl: less (signed <) */

loc_00075FEE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_00075FFC; /* jg: greater (signed >) */

loc_00075FF5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00075FFA: ;
    goto loc_00075FE0;

loc_00075FFC: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_0007602B; /* je: equal / zero */

loc_00076003: ;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_0007600E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5DF878);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00076019: ;
    esp = esp + 8;
    ecx = esp;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00076024: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0007602B: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = ecx + 0x18;
    if (TEST_Z(edx, edx)) goto loc_00076039; /* je: equal / zero */

loc_00076035: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_00076039: ;
    eax = MEM32(eax);
    MEM32(edi) = eax;
    eax = MEM32(0x8471FC);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00076051; /* je: equal / zero */

loc_00076048: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + edx * 4) = edi;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00076051: ;
    ecx = esp;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00076059: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00076060
 * Original: 0x00076060 - 0x00076128 (200 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076060: ;
    esp = esp - 0x114;
    if (TEST_Z(eax, eax)) goto loc_00076121; /* je: equal / zero */

loc_0007606E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x14);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0007607F: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0x14;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_000760AC: ;
    /* nop */

loc_000760B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_000760CC; /* jl: less (signed <) */

loc_000760BE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_000760CC; /* jg: greater (signed >) */

loc_000760C5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_000760CA: ;
    goto loc_000760B0;

loc_000760CC: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_000760F3; /* je: equal / zero */

loc_000760D3: ;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_000760DE: ;
    ecx = esp;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000760EC: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_000760F3: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = ecx + 0x18;
    if (TEST_Z(edx, edx)) goto loc_00076101; /* je: equal / zero */

loc_000760FD: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_00076101: ;
    eax = MEM32(eax);
    MEM32(edi) = eax;
    eax = MEM32(0x8471FC);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00076119; /* je: equal / zero */

loc_00076110: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + edx * 4) = edi;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00076119: ;
    ecx = esp;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00076121: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00076130
 * Original: 0x00076130 - 0x000761C3 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076130: ;
    esp = esp - 0x114;
    if (TEST_Z(eax, eax)) goto loc_000761BC; /* je: equal / zero */

loc_0007613E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0CEC);
    PUSH32(esp, 0x14);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0007614F: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0x14;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0007617C: ;
    /* nop */

loc_00076180: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0007619C; /* jl: less (signed <) */

loc_0007618E: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0007619C; /* jg: greater (signed >) */

loc_00076195: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0007619A: ;
    goto loc_00076180;

loc_0007619C: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_000761C3(); return; } /* je: equal / zero */

loc_000761A3: ;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_000761AE: ;
    ecx = esp;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000761BC: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_000761F0
 * Original: 0x000761F0 - 0x000762D6 (230 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000761F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000761F0: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_000762D6(); return; } /* je: equal / zero */

loc_000761FE: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) { sub_000762D6(); return; } /* je: equal / zero */

loc_00076207: ;
    if (TEST_S(eax, eax)) { sub_000762D6(); return; } /* jl: less (signed <) */

loc_0007620F: ;
    if (CMP_GE(eax, 0x2D2)) { sub_000762D6(); return; } /* jge: greater or equal (signed >=) */

loc_0007621A: ;
    edx = ZX8(MEM8(eax * 8 + 0x75B954));
    if (CMP_AE(ecx, edx)) { sub_000762D6(); return; } /* jae: above or equal (unsigned >=) */

loc_0007622A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax * 8 + 0x75B950;
    eax = MEM32(edi);
    esi = ecx + ecx * 4;
    esi = esi << 2;
    ecx = MEM32(eax + esi + 8);
    eax = eax + esi;
    if (TEST_NZ(ecx, ecx)) goto loc_00076264; /* jne: not equal / not zero */

loc_00076245: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00076256: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007625E: ;
    edx = MEM32(edi);
    MEM32(edx + esi + 8) = eax;

loc_00076264: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi + 0x10);
    eax = eax + esi;
    if (TEST_NZ(ecx, ecx)) goto loc_00076292; /* jne: not equal / not zero */

loc_00076270: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00076278: ;
    ecx = MEM32(edi);
    MEM32(ecx + esi + 0x10) = eax;
    edx = MEM32(edi);
    eax = MEM32(edx + esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00076292; /* jne: not equal / not zero */

loc_00076288: ;
    eax = edx;
    MEM32(eax + esi + 0x10) = 0xFFFFFFFFu;

loc_00076292: ;
    ecx = MEM32(edi);
    eax = ecx + esi;
    ecx = MEM32(eax + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_000762C4; /* jne: not equal / not zero */

loc_0007629F: ;
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_000762BA; /* jne: not equal / not zero */

loc_000762A6: ;
    edx = MEM32(edi);
    eax = edx + esi;
    edx = MEM32(eax);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000762B7: ;
    esp = esp + 8;

loc_000762BA: ;
    eax = MEM32(edi);
    eax = MEM32(eax + esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000762C4: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_000762C9: ;
    if (TEST_Z(ebx, ebx)) goto loc_000762CF; /* je: equal / zero */

loc_000762CD: ;
    MEM32(ebx) = ecx;

loc_000762CF: ;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000762E0
 * Original: 0x000762E0 - 0x00076301 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000762E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000762E0: ;
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000762FD; /* jne: not equal / not zero */

loc_000762F1: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000762FA: ;
    esp = esp + 8;

loc_000762FD: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076310
 * Original: 0x00076310 - 0x0007635D (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076310: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 4;
    if (TEST_NZ(eax, eax)) goto loc_00076352; /* jne: not equal / not zero */

loc_00076328: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5E0D18);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0007633A: ;
    ebx = MEM32(edi);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00076345: ;
    eax = edi;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0007634E: ;
    esp = esp + 8;
    POP32(esp, ebx);

loc_00076352: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00076360
 * Original: 0x00076360 - 0x00076372 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076360: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_00076372(); return; } /* je: equal / zero */

loc_00076365: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) { sub_00076372(); return; } /* je: equal / zero */

loc_0007636A: ;
    SET_LO8(eax, MEM8(eax * 8 + 0x75B954));
    esp += 4; return; /* ret */

}

/**
 * sub_00076380
 * Original: 0x00076380 - 0x000763F6 (118 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076380: ;
    eax = MEM32(0x8471FC);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0007639E; /* jle: less or equal (signed <=) */

loc_00076390: ;
    esi = MEM32(eax);

loc_00076392: ;
    if (CMP_EQ(ebx, MEM32(esi))) goto loc_000763A3; /* je: equal / zero */

loc_00076396: ;
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, edx)) goto loc_00076392; /* jl: less (signed <) */

loc_0007639E: ;
    eax = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;

loc_000763A3: ;
    esi = MEM32(eax + 4);
    edx = ecx;
    ecx = MEM32(eax);
    esi = MEM32(ecx + esi * 4 + -4);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    esi = MEM32(ebx);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_000763C2: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_000763ED; /* je: equal / zero */

loc_000763C8: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000763D3; /* je: equal / zero */

loc_000763CF: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_000763D3: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_000763ED; /* jne: not equal / not zero */

loc_000763DA: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_000763E3: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_000763ED: ;
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076400
 * Original: 0x00076400 - 0x00076438 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076400: ;
    if (TEST_S(eax, eax)) goto loc_00076437; /* jl: less (signed <) */

loc_00076404: ;
    if (CMP_GE(eax, 0x1F)) goto loc_00076437; /* jge: greater or equal (signed >=) */

loc_00076409: ;
    eax = eax + 0x269;
    if (((int32_t)eax < 0)) goto loc_00076437; /* js: sign (negative) */

loc_00076410: ;
    if (CMP_GE(eax, 0x2D2)) goto loc_00076437; /* jge: greater or equal (signed >=) */

loc_00076417: ;
    ecx = MEM32(eax * 8 + 0x75B950);
    edx = MEM32(ecx + 0xC);
    if (TEST_NZ(edx, edx)) goto loc_00076437; /* jne: not equal / not zero */

loc_00076425: ;
    edx = MEM32(ecx);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax * 8 + 0x75B950);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;

loc_00076437: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00076440
 * Original: 0x00076440 - 0x0007646C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076440: ;
    if (TEST_S(eax, eax)) goto loc_0007646B; /* jl: less (signed <) */

loc_00076444: ;
    if (CMP_GE(eax, 0x2D2)) goto loc_0007646B; /* jge: greater or equal (signed >=) */

loc_0007644B: ;
    ecx = MEM32(eax * 8 + 0x75B950);
    edx = MEM32(ecx + 0xC);
    if (TEST_NZ(edx, edx)) goto loc_0007646B; /* jne: not equal / not zero */

loc_00076459: ;
    edx = MEM32(ecx);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax * 8 + 0x75B950);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;

loc_0007646B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00076470
 * Original: 0x00076470 - 0x000764BE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076470: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_S(eax, eax)) goto loc_000764BC; /* jl: less (signed <) */

loc_00076477: ;
    if (CMP_GE(eax, 0x2D2)) goto loc_000764BC; /* jge: greater or equal (signed >=) */

loc_0007647E: ;
    ecx = ZX8(MEM8(eax * 8 + 0x75B954));
    if (CMP_AE(esi, ecx)) goto loc_000764BC; /* jae: above or equal (unsigned >=) */

loc_0007648A: ;
    edx = MEM32(eax * 8 + 0x75B950);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax * 8 + 0x75B950;
    if (TEST_Z(edx, edx)) goto loc_000764BC; /* je: equal / zero */

loc_0007649C: ;
    eax = esi + esi * 4;
    eax = eax << 2;
    esi = MEM32(eax + edx + 0xC);
    if (TEST_Z(esi, esi)) goto loc_000764BC; /* je: equal / zero */

loc_000764AA: ;
    esi = MEM32(edx + eax + 0xC);
    edx = edx + eax;
    MEM32(edx) = esi;
    ecx = MEM32(ecx);
    MEM32(eax + ecx + 0xC) = 0;

loc_000764BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000764C0
 * Original: 0x000764C0 - 0x00076511 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000764C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000764C0: ;
    PUSH32(esp, edi);
    ecx = eax;
    edx = 0x101;
    edi = 0; /* xor self */
    /* nop */

loc_000764D0: ;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edi;
    ecx = ecx + 8;
    edx--;
    if ((edx != 0)) goto loc_000764D0; /* jne: not equal / not zero */

loc_000764DB: ;
    edx = eax + 0x808;
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0x101;
    /* nop */

loc_000764F0: ;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edi;
    ecx = ecx + 8;
    esi--;
    if ((esi != 0)) goto loc_000764F0; /* jne: not equal / not zero */

loc_000764FB: ;
    ecx = 0; /* xor self */
    POP32(esp, esi);
    edi = edi;

loc_00076500: ;
    MEM32(eax + ecx * 8) = edi;
    MEM32(edx + ecx * 8) = edi;
    ecx++;
    if (CMP_L(ecx, 0x101)) goto loc_00076500; /* jl: less (signed <) */

loc_0007650F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076520
 * Original: 0x00076520 - 0x00076595 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    esi = 0x101;
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = edx;
    ebx = MEM32(ecx + esi * 8);
    if (TEST_Z(ebx, ebx)) goto loc_00076583; /* je: equal / zero */

loc_00076536: ;
    if (CMP_EQ(ebx, edi)) goto loc_00076583; /* je: equal / zero */

loc_0007653A: ;
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    ebp = 0x101;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    POP32(esp, ebp);
    eax = ecx + edx * 8 + 0x808;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) { sub_00076595(); return; } /* je: equal / zero */

loc_00076552: ;
    if (CMP_EQ(edx, edi)) { sub_00076595(); return; } /* je: equal / zero */

loc_00076556: ;
    eax = 0xFF00FF01u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 8;
    edx = 0; /* xor self */
    ebx = 0x101;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = ecx + edx * 8 + 0x808;
    if (CMP_NE(MEM32(eax), 0)) goto loc_00076583; /* jne: not equal / not zero */

loc_00076577: ;
    edx = MEM32(ecx + esi * 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + esi * 8 + 4);
    MEM32(eax + 4) = edx;

loc_00076583: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + esi * 8) = edi;
    edx = MEM32(eax);
    MEM32(ecx + esi * 8 + 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000765B0
 * Original: 0x000765B0 - 0x00076634 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000765B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000765B0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00076634(); return; } /* je: equal / zero */

loc_000765CB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000765DF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00076614; /* je: equal / zero */

loc_000765EA: ;
    ecx = 0x75DB18;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000765F4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00076611: ;
    esp = esp + 0x14;

loc_00076614: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0007662D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00076660
 * Original: 0x00076660 - 0x000767ED (397 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076660: ;
    edx = MEM32(0x8470DC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    eax = MEM32(eax + edx + 4);
    SET_LO8(edx, MEM8(eax + 0x8C2));
    esp = esp - 0xC;
    if (CMP_NE(LO8(edx), 1)) goto loc_000767E9; /* jne: not equal / not zero */

loc_00076684: ;
    eax = ZX8(MEM8(ecx + ecx * 2 + 0x76FE90));
    xmm1 = 0.0f; /* xorps self = zero */
    edx = ecx + ecx * 2 + 0x76FE90;
    MEM32(esp + 4) = eax;
    eax = MEM32(0x7FA20C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax + eax;
    ebp = ecx + ecx * 2;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    ecx = edx;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    ebp = ebp * 2 + 0x76FEC4;
    ecx = ecx - 0x76FE90;

loc_000766C1: ;
    edx = MEM32(esp + 0x14);
    (void)0; /* test edx, edx - flags set for next jcc */
    ebx = ZX8(MEM8(ecx + eax + 0x76FEA0));
    if (TEST_Z(edx, edx)) goto loc_000766DB; /* je: equal / zero */

loc_000766D1: ;
    edi = ZX8(MEM8(ecx + eax + 0x76FE90));
    goto loc_000766E2;

loc_000766DB: ;
    edi = ZX8(MEM8(eax + 0x76FE9C));

loc_000766E2: ;
    esi = edi;
    esi = esi - ebx;
    if ((esi == 0)) goto loc_0007670F; /* je: equal / zero */

loc_000766E8: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = esi;
    if (CMP_GE(esi & esi, 0)) goto loc_000766F0; /* jge: greater or equal (signed >=) */

loc_000766EE: ;
    edx = (uint32_t)(-(int32_t)edx);

loc_000766F0: ;
    if (CMP_GE(edx, MEM32(esp + 0x10))) goto loc_000766FA; /* jge: greater or equal (signed >=) */

loc_000766F6: ;
    ebx = edi;
    goto loc_00076708;

loc_000766FA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (CMP_GE(esi & esi, 0)) goto loc_00076706; /* jge: greater or equal (signed >=) */

loc_00076702: ;
    ebx = ebx - edx;
    goto loc_00076708;

loc_00076706: ;
    ebx = ebx + edx;

loc_00076708: ;
    MEM8(ecx + eax + 0x76FEA0) = LO8(ebx);

loc_0007670F: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ebp));
    edx = esi;
    edx = edx >> 4;
    if (CMP_BE(LO8(edx), 0x40)) goto loc_00076760; /* jbe: below or equal (unsigned <=) */

loc_0007671F: ;
    if (CMP_BE(LO8(edx), 0x80)) goto loc_0007674A; /* jbe: below or equal (unsigned <=) */

loc_00076724: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    edx = ZX8(LO8(edx));
    if (CMP_BE(LO8(edx), 0xC0)) goto loc_0007673C; /* jbe: below or equal (unsigned <=) */

loc_0007672C: ;
    edx = edx << 2;
    edi = 0x743490;
    edi = edi - edx;
    xmm0 = MEMF(edi); /* movss */
    goto loc_0007676C;

loc_0007673C: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_0007676C;

loc_0007674A: ;
    edx = ZX8(LO8(edx));
    edx = edx << 2;
    edi = 0x743290;
    edi = edi - edx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    goto loc_0007676C;

loc_00076760: ;
    edx = ZX8(LO8(edx));
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0007676C: ;
    edx = ZX8(MEM8(ecx + eax + 0x76FEAC));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = edx + ebx + -127;
    if (TEST_S(edx, edx)) goto loc_00076791; /* jl: less (signed <) */

loc_00076788: ;
    MEM8(ecx + eax + 0x76F9D8) = MEM8(ecx + eax + 0x76F9D8) + LO8(edx);
    goto loc_00076798;

loc_00076791: ;
    MEM8(ecx + eax + 0x76F9CC) = MEM8(ecx + eax + 0x76F9CC) - LO8(edx);

loc_00076798: ;
    if (CMP_BE(MEM8(ecx + eax + 0x76F9D8), 0x7F)) goto loc_000767AA; /* jbe: below or equal (unsigned <=) */

loc_000767A2: ;
    MEM8(ecx + eax + 0x76F9D8) = 0x7F;

loc_000767AA: ;
    if (CMP_BE(MEM8(ecx + eax + 0x76F9CC), 0x7F)) goto loc_000767BC; /* jbe: below or equal (unsigned <=) */

loc_000767B4: ;
    MEM8(ecx + eax + 0x76F9CC) = 0x7F;

loc_000767BC: ;
    SET_LO16(edx, ZX8(MEM8(ecx + eax + 0x76FEB8)));
    ebp = ebp + 2;
    edx = edx + esi;
    edx = edx & 0xFFF;
    MEM16(ebp + -2) = LO16(edx);
    eax++;
    if (CMP_L(eax, 3)) goto loc_000766C1; /* jl: less (signed <) */

loc_000767DE: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = 0;
    POP32(esp, ebx);

loc_000767E9: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000767F0
 * Original: 0x000767F0 - 0x000768C6 (214 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000767F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000767F0: ;
    esp = esp - 8;
    eax = MEM32(0x8471A4);
    eax = ZX8(MEM8(eax + 0x3F));
    ecx = ZX8(MEM8(eax + eax * 2 + 0x58DF36));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + ecx * 2 + 0x58DF68;
    ecx = ZX8(MEM8(eax + eax * 2 + 0x58DF35));
    eax = ZX8(MEM8(eax + eax * 2 + 0x58DF34));
    edx = eax + eax * 2 + 0x58DF4C;
    eax = 0; /* xor self */
    MEM32(0x76FEC4) = eax;
    ecx = ecx + ecx * 2 + 0x58DF50;
    MEM32(0x76FEC8) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(0x76FECC) = eax;
    ecx = 0; /* xor self */
    MEM32(0x76FED0) = eax;
    MEM32(0x76FE90) = ecx;
    MEM32(0x76FED4) = eax;
    MEM32(0x76FE94) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(0x76FED8) = eax;
    MEM32(0x76FE98) = ecx;
    /* nop */

loc_00076870: ;
    edx = MEM32(esp + 0x10);
    SET_LO16(ebp, MEM16(edx));
    SET_LO8(edx, MEM8(edx + 2));
    ebx = ecx + 0x76FEAC;
    MEM16(ebx) = LO16(ebp);
    MEM8(ebx + 2) = LO8(edx);
    edx = MEM32(esp + 0x14);
    SET_LO16(ebp, MEM16(edx));
    SET_LO8(edx, MEM8(edx + 2));
    ebx = ecx + 0x76FEB8;
    MEM16(ebx) = LO16(ebp);
    eax = 0; /* xor self */
    esi = edi;
    MEM8(ebx + 2) = LO8(edx);

loc_000768A0: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax + 0x76FE9C) = LO8(edx);
    MEM8(ecx + eax + 0x76FEA0) = LO8(edx);
    eax++;
    esi++;
    if (CMP_L(eax, 3)) goto loc_000768A0; /* jl: less (signed <) */

loc_000768B6: ;
    ecx = ecx + 3;
    if (CMP_L(ecx, 0xC)) goto loc_00076870; /* jl: less (signed <) */

loc_000768BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000768D0
 * Original: 0x000768D0 - 0x000768E6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000768D0(void)
{

loc_000768D0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x115);
    PUSH32(esp, 0x5E9968);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000768E2: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000768F0
 * Original: 0x000768F0 - 0x000768FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000768F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000768F0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00076900
 * Original: 0x00076900 - 0x00076941 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076900: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5E71FC;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0007693B; /* je: equal / zero */

loc_00076910: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076916: ;
    if (TEST_NZ(eax, eax)) goto loc_0007693B; /* jne: not equal / not zero */

loc_0007691A: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076938: ;
    esp = esp + 4;

loc_0007693B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076950
 * Original: 0x00076950 - 0x00076969 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076950(void)
{

loc_00076950: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_00076965: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00076970
 * Original: 0x00076970 - 0x00076A63 (243 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x6A6108);
    (void)0; /* cmp MEM32(0x7FA1F8), 0x46 - flags set for next jcc */
    PUSH32(esp, 3);
    PUSH32(esp, 0x5E9964);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_000769A5; /* jne: not equal / not zero */

loc_0007698F: ;
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_00076994: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x5E9954;
    if (TEST_NZ(eax, eax)) goto loc_000769C0; /* jne: not equal / not zero */

loc_000769A0: ;
    esi = esi + 0xE;
    goto loc_000769C0;

loc_000769A5: ;
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_000769AA: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_000769BB; /* jne: not equal / not zero */

loc_000769B1: ;
    ecx = 0x587BE4;
    esi = esi + 3;
    goto loc_000769C0;

loc_000769BB: ;
    ecx = 0x5E994C;

loc_000769C0: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_000769C9: ;
    ebx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_EQ(eax, ecx)) { sub_00076A63(); return; } /* je: equal / zero */

loc_000769DC: ;
    esi = 0x24;
    goto loc_000769E5;

loc_000769E3: ;
    ecx = 0; /* xor self */

loc_000769E5: ;
    edx = MEM32(ebx);
    eax = MEM32(esi + edx);
    if (CMP_EQ(eax, ecx)) goto loc_00076A49; /* je: equal / zero */

loc_000769EE: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x139);
    PUSH32(esp, 0x5E9928);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_00076A02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00076A08: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + ebp + -36) = eax;
    if (TEST_Z(eax, eax)) { sub_00076A63(); return; } /* je: equal / zero */

loc_00076A13: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_00076A22: ;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_00076A55; /* je: equal / zero */

loc_00076A29: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi + ebp + -36);
    edx = MEM32(ecx + esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    ebx = edi + esi + -36;
    PUSH32(esp, 0); sub_003F9110(); /* call 0x003F9110 */

loc_00076A40: ;
    ebx = MEM32(esp + 0x18);
    esp = esp + 8;
    goto loc_00076A55;

loc_00076A49: ;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esi + ebp + -36) = ecx;
    if (CMP_EQ(edi, ecx)) goto loc_00076A55; /* je: equal / zero */

loc_00076A51: ;
    MEM32(edi + esi + -36) = ecx;

loc_00076A55: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x28)) goto loc_000769E3; /* jl: less (signed <) */

loc_00076A5D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00076A70
 * Original: 0x00076A70 - 0x00076AC4 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076A70: ;
    ecx = MEM32(esi + 0x54);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x54;
    if (TEST_NZ(ecx, ecx)) { sub_00076AC4(); return; } /* jne: not equal / not zero */

loc_00076A7A: ;
    (void)0; /* cmp MEM8(esi + 0x1F), 0xFF - flags set for next jcc */
    ecx = esi + 0x58;
    if (CMP_NE(MEM8(esi + 0x1F), 0xFF)) goto loc_00076AA0; /* jne: not equal / not zero */

loc_00076A83: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 2));
    edi = esi + 0x5C;
    PUSH32(esp, 0); sub_00076970(); /* call 0x00076970 */

loc_00076A92: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00076AC4(); return; } /* je: equal / zero */

loc_00076A9A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00076AA0: ;
    edx = esi + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 2));
    edx = esi + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00087380(); /* call 0x00087380 */

loc_00076AB7: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) { sub_00076AC4(); return; } /* je: equal / zero */

loc_00076ABE: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00076AD0
 * Original: 0x00076AD0 - 0x00076E32 (866 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00076AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xB0);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_00076B1E; /* je: equal / zero */

loc_00076AEE: ;
    eax = MEM32(esi + 0xB8);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(eax, edi)) goto loc_00076B1E; /* je: equal / zero */

loc_00076AFB: ;
    SET_LO8(edx, MEM8(esi));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00076B02: ;
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = 0xF;
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00076B18: ;
    MEM32(esi + 0xB8) = edi;

loc_00076B1E: ;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) goto loc_00076B2A; /* jne: not equal / not zero */

loc_00076B23: ;
    edi = esi;
    PUSH32(esp, 0); sub_00078D40(); /* call 0x00078D40 */

loc_00076B2A: ;
    edi = MEM32(0x8496B8);
    if (CMP_EQ(edi, ebx)) goto loc_00076B54; /* je: equal / zero */

loc_00076B34: ;
    edx = esi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003550C0(); /* call 0x003550C0 */

loc_00076B3F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_00076B4B: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_00076B54: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00076C65; /* je: equal / zero */

loc_00076B5F: ;
    eax = MEM32(esi + 0x5C);
    if (CMP_EQ(eax, ebx)) goto loc_00076B76; /* je: equal / zero */

loc_00076B66: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_00076B6D: ;
    MEM32(esi + 0x5C) = 0;
    ebx = 0; /* xor self */

loc_00076B76: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_00076B90; /* je: equal / zero */

loc_00076B80: ;
    edx = MEM32(eax + 8);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_00076B8D: ;
    esp = esp + 8;

loc_00076B90: ;
    ebx = MEM32(esi + 0x54);
    SET_LO8(eax, MEM8(ebx + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 8);
    if (CMP_BE(eax, 1)) goto loc_00076BA9; /* jbe: below or equal (unsigned <=) */

loc_00076BA0: ;
    eax--;
    MEM32(ebx + 8) = eax;
    goto loc_00076C4F;

loc_00076BA9: ;
    SET_LO8(eax, MEM8(0x770FA8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00076C4F; /* jne: not equal / not zero */

loc_00076BB6: ;
    edi = MEM32(ebx + 0x24);
    if (TEST_Z(edi, edi)) goto loc_00076BC9; /* je: equal / zero */

loc_00076BBD: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_00076BC2: ;
    MEM32(ebx + 0x24) = 0;

loc_00076BC9: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076BD2: ;
    if (TEST_NZ(eax, eax)) goto loc_00076C07; /* jne: not equal / not zero */

loc_00076BD6: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00076C07; /* je: equal / zero */

loc_00076BDD: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076BFD: ;
    esp = esp + 4;
    MEM32(ebx + 0x10) = 0;

loc_00076C07: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00076C15; /* je: equal / zero */

loc_00076C13: ;
    MEM32(eax) = ecx;

loc_00076C15: ;
    PUSH32(esp, ebx);
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076C28: ;
    if (TEST_NZ(eax, eax)) goto loc_00076C4F; /* jne: not equal / not zero */

loc_00076C2C: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076C4C: ;
    esp = esp + 4;

loc_00076C4F: ;
    eax = MEM32(esi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_00076C63; /* je: equal / zero */

loc_00076C59: ;
    esi = eax;
    PUSH32(esp, 0); sub_00087490(); /* call 0x00087490 */

loc_00076C60: ;
    esi = MEM32(ebp + 8);

loc_00076C63: ;
    ebx = 0; /* xor self */

loc_00076C65: ;
    eax = MEM32(esi + 0x60);
    if (CMP_EQ(eax, ebx)) goto loc_00076CA3; /* je: equal / zero */

loc_00076C6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076C72: ;
    if (TEST_NZ(eax, eax)) goto loc_00076CA3; /* jne: not equal / not zero */

loc_00076C76: ;
    eax = MEM32(esi + 0x60);
    if (CMP_EQ(eax, ebx)) goto loc_00076CA3; /* je: equal / zero */

loc_00076C7D: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076C9D: ;
    esp = esp + 4;
    MEM32(esi + 0x60) = ebx;

loc_00076CA3: ;
    eax = MEM32(esi + 0xC0);
    if (CMP_EQ(eax, ebx)) goto loc_00076CEA; /* je: equal / zero */

loc_00076CAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076CB3: ;
    if (TEST_NZ(eax, eax)) goto loc_00076CEA; /* jne: not equal / not zero */

loc_00076CB7: ;
    eax = MEM32(esi + 0xC0);
    if (CMP_EQ(eax, ebx)) goto loc_00076CEA; /* je: equal / zero */

loc_00076CC1: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076CE1: ;
    esp = esp + 4;
    MEM32(esi + 0xC0) = ebx;

loc_00076CEA: ;
    eax = MEM32(esi + 0xC8);
    if (CMP_EQ(eax, ebx)) goto loc_00076D31; /* je: equal / zero */

loc_00076CF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076CFA: ;
    if (TEST_NZ(eax, eax)) goto loc_00076D31; /* jne: not equal / not zero */

loc_00076CFE: ;
    eax = MEM32(esi + 0xC8);
    if (CMP_EQ(eax, ebx)) goto loc_00076D31; /* je: equal / zero */

loc_00076D08: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076D28: ;
    esp = esp + 4;
    MEM32(esi + 0xC8) = ebx;

loc_00076D31: ;
    eax = MEM32(esi + 0xCC);
    if (CMP_EQ(eax, ebx)) goto loc_00076D78; /* je: equal / zero */

loc_00076D3B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076D41: ;
    if (TEST_NZ(eax, eax)) goto loc_00076D78; /* jne: not equal / not zero */

loc_00076D45: ;
    eax = MEM32(esi + 0xCC);
    if (CMP_EQ(eax, ebx)) goto loc_00076D78; /* je: equal / zero */

loc_00076D4F: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076D6F: ;
    esp = esp + 4;
    MEM32(esi + 0xCC) = ebx;

loc_00076D78: ;
    eax = MEM32(esi + 0xD8);
    if (CMP_EQ(eax, ebx)) goto loc_00076DBF; /* je: equal / zero */

loc_00076D82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076D88: ;
    if (TEST_NZ(eax, eax)) goto loc_00076DBF; /* jne: not equal / not zero */

loc_00076D8C: ;
    eax = MEM32(esi + 0xD8);
    if (CMP_EQ(eax, ebx)) goto loc_00076DBF; /* je: equal / zero */

loc_00076D96: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076DB6: ;
    esp = esp + 4;
    MEM32(esi + 0xD8) = ebx;

loc_00076DBF: ;
    if (CMP_NE(MEM32(0x847200), esi)) goto loc_00076DD2; /* jne: not equal / not zero */

loc_00076DC7: ;
    eax = MEM32(esi + 0xE0);
    MEM32(0x847200) = eax;

loc_00076DD2: ;
    eax = MEM32(esi + 0xE4);
    if (CMP_EQ(eax, ebx)) goto loc_00076DE8; /* je: equal / zero */

loc_00076DDC: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(eax + 0xE0) = ecx;

loc_00076DE8: ;
    eax = MEM32(esi + 0xE0);
    if (CMP_EQ(eax, ebx)) goto loc_00076DFE; /* je: equal / zero */

loc_00076DF2: ;
    edx = MEM32(esi + 0xE4);
    MEM32(eax + 0xE4) = edx;

loc_00076DFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00076E04: ;
    if (TEST_NZ(eax, eax)) goto loc_00076E2B; /* jne: not equal / not zero */

loc_00076E08: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00076E28: ;
    esp = esp + 4;

loc_00076E2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00076E40
 * Original: 0x00076E40 - 0x00076E57 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076E40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00076E57(); return; } /* jne: not equal / not zero */

loc_00076E52: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00076EC0
 * Original: 0x00076EC0 - 0x00076ECD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00076EC0: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00076ECD(); return; } /* jne: not equal / not zero */

loc_00076ECA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00076F10
 * Original: 0x00076F10 - 0x000776A7 (1943 bytes, 537 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00076F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x254;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x2C) = eax;
    /* nop */

loc_00076F30: ;
    if (CMP_NE(eax, 1)) goto loc_00076F41; /* jne: not equal / not zero */

loc_00076F35: ;
    ecx = MEM32(esp + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_000770EA; /* je: equal / zero */

loc_00076F41: ;
    ebx = MEM32(0x847200);
    if (TEST_Z(ebx, ebx)) goto loc_000770DC; /* je: equal / zero */

loc_00076F4F: ;
    /* nop */

loc_00076F50: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(ebx + 0xE0);
    MEM32(esp + 0x20) = edi;
    if (TEST_NZ(eax, eax)) goto loc_00076F73; /* jne: not equal / not zero */

loc_00076F5E: ;
    if (CMP_EQ(MEM16(ebx + 0x28), LO16(eax))) goto loc_00076F81; /* je: equal / zero */

loc_00076F64: ;
    MEM32(esp + 0x38) = 1;
    ebx = edi;
    goto loc_000770D0;

loc_00076F73: ;
    if (CMP_NE(MEM16(ebx + 0x28), 0)) goto loc_00076F81; /* jne: not equal / not zero */

loc_00076F7A: ;
    ebx = edi;
    goto loc_000770D0;

loc_00076F81: ;
    SET_LO8(ecx, MEM8(ebx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00076FAD; /* je: equal / zero */

loc_00076F87: ;
    eax = MEM32(0x84A5F8);
    esi = 0; /* xor self */
    edi = edi;

loc_00076F90: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00076F9F; /* je: equal / zero */

loc_00076F97: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(ecx))) goto loc_00076FAF; /* je: equal / zero */

loc_00076F9F: ;
    eax = eax + 0x6D0;
    esi++;
    if (CMP_L(esi, 0x81)) goto loc_00076F90; /* jl: less (signed <) */

loc_00076FAD: ;
    eax = 0; /* xor self */

loc_00076FAF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM8(ebx + 8) = 1;
    if (TEST_NZ(eax, eax)) goto loc_00076FCC; /* jne: not equal / not zero */

loc_00076FBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00076AD0(); /* call 0x00076AD0 */

loc_00076FC2: ;
    esp = esp + 8;
    ebx = edi;
    goto loc_000770D0;

loc_00076FCC: ;
    SET_LO8(ecx, MEM8(ebx + 0xC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00076FF8; /* je: equal / zero */

loc_00076FD3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x58DFA8), _icall_esp); /* indirect call */
    }

loc_00076FDF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00076FF8; /* je: equal / zero */

loc_00076FE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00076AD0(); /* call 0x00076AD0 */

loc_00076FEE: ;
    esp = esp + 8;
    ebx = edi;
    goto loc_000770D0;

loc_00076FF8: ;
    eax = MEM32(ebx + 0x5C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00077042; /* je: equal / zero */

loc_00077003: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    edx = eax;
    eax = MEM32(edx);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_00077042; /* jle: less or equal (signed <=) */

loc_0007701B: ;
    goto loc_00077020;

    /* nop */

loc_00077020: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x50);
    edx = MEM32(ecx + 4);
    esi = MEM32(edx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9540(); /* call 0x003F9540 */

loc_00077034: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00077020; /* jl: less (signed <) */

loc_00077042: ;
    eax = MEM32(ebx + 0x60);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = edx;
    if (CMP_NE(eax, edx)) goto loc_00077065; /* jne: not equal / not zero */

loc_00077053: ;
    if (CMP_NE(MEM32(ebx + 0xC4), edx)) goto loc_00077065; /* jne: not equal / not zero */

loc_0007705B: ;
    if (CMP_EQ(MEM16(ebx + 0x28), LO16(edx))) goto loc_000775B3; /* je: equal / zero */

loc_00077065: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x3C8);
    if (CMP_EQ(eax, edx)) goto loc_0007759A; /* je: equal / zero */

loc_00077077: ;
    if (CMP_EQ(MEM16(ebx + 0x28), LO16(edx))) goto loc_000771B4; /* je: equal / zero */

loc_00077081: ;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x4C) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    edi = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000770BF; /* je: equal / zero */

loc_00077095: ;
    esi = MEM32(0x847200);
    if (CMP_EQ(esi, edx)) goto loc_000770BF; /* je: equal / zero */

loc_0007709F: ;
    /* nop */

loc_000770A0: ;
    (void)0; /* cmp MEM8(esi), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esi + 0xE0);
    if (CMP_NE(MEM8(esi), LO8(ecx))) goto loc_000770B9; /* jne: not equal / not zero */

loc_000770AA: ;
    SET_LO16(edx, MEM16(esi + 0xA));
    if (CMP_NE(LO16(edx), MEM16(ebx + 0x28))) goto loc_000770B9; /* jne: not equal / not zero */

loc_000770B4: ;
    if (TEST_Z(edi, edi)) goto loc_000770F1; /* je: equal / zero */

loc_000770B8: ;
    edi--;

loc_000770B9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(eax, eax)) goto loc_000770A0; /* jne: not equal / not zero */

loc_000770BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00076AD0(); /* call 0x00076AD0 */

loc_000770C7: ;
    esp = esp + 8;
    ebx = MEM32(esp + 0x20);
    edi = ebx;

loc_000770D0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(esp + 0x2C);
    if (TEST_NZ(edi, edi)) goto loc_00076F50; /* jne: not equal / not zero */

loc_000770DC: ;
    eax++;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(eax, 2)) goto loc_00076F30; /* jl: less (signed <) */

loc_000770EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000770F1: ;
    edx = MEM32(esp + 0x14);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00077F70(); /* call 0x00077F70 */

loc_00077106: ;
    esi = MEM32(esi + 0xC4);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_000771AE; /* je: equal / zero */

loc_00077117: ;
    eax = MEM32(ebx + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_000771A4; /* je: equal / zero */

loc_00077125: ;
    if (TEST_Z(MEM8(ebx + 7), 0x40)) goto loc_000771A4; /* je: equal / zero */

loc_0007712B: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    esi = MEM32(esp + 0x24);
    ecx = 0x10;
    edi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ZX16(MEM16(ebx + 0x2A));
    esi = MEM32(esp + 0x24);
    ecx = eax;
    ecx = ecx << 6;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0); sub_00036970(); /* call 0x00036970 */

loc_00077167: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    edx = esp + 0xB0;
    esp = esp + 0x10;
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    goto loc_000771EB;

loc_000771A4: ;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = edx;
    goto loc_000771E7;

loc_000771AE: ;
    edx = MEM32(esp + 0x24);
    goto loc_000771E7;

loc_000771B4: ;
    if (CMP_EQ(MEM32(ebx + 0xC4), edx)) goto loc_000771DE; /* je: equal / zero */

loc_000771BC: ;
    if (TEST_Z(MEM8(ebx + 7), 0x40)) goto loc_000771DE; /* je: equal / zero */

loc_000771C2: ;
    eax = MEM32(esp + 0x14);
    edx = ZX16(MEM16(ebx + 4));
    PUSH32(esp, eax);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000771D7: ;
    esp = esp + 4;
    edx = eax;
    goto loc_000771E7;

loc_000771DE: ;
    edx = ZX16(MEM16(ebx + 4));
    edx = edx << 6;
    edx = edx + eax;

loc_000771E7: ;
    MEM32(esp + 0x10) = edx;

loc_000771EB: ;
    ecx = MEM32(ebx + 0x60);
    if (TEST_Z(ecx, ecx)) goto loc_000775B3; /* je: equal / zero */

loc_000771F6: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = eax << 6;
    eax = eax + ecx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0xC0);
    if (TEST_Z(eax, eax)) goto loc_0007739A; /* je: equal / zero */

loc_00077214: ;
    edi = esp + 0x60;
    edi = edi - edx;
    eax = esp + 0x64;
    MEM32(esp + 0x30) = edi;
    ecx = edx + 0x30;
    MEM32(esp + 0x28) = eax;
    edi = esp + 0x64;
    esi = 0; /* xor self */
    eax = edx + 8;
    edi = edi - edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = ecx;
    ecx = eax;
    MEM32(esp + 0x34) = edi;

loc_00077242: ;
    xmm2 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + -4); /* movss */
    xmm0 = MEMF(eax + -8); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x48)); /* sqrtss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm1 = MEMF(ecx + -8); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x40); /* divss */
    edi = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + -4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + ecx) = xmm1; /* movss */
    edi = MEM32(esp + 0x34);
    MEMF(edi + eax) = xmm0; /* movss */
    edi = MEM32(esp + 0x1C);
    edi = MEM32(edi);
    MEM32(esp + esi * 4 + 0x90) = edi;
    edi = MEM32(esp + 0x1C);
    esi++;
    edi = edi + 4;
    eax = eax + 0x10;
    edx = edx + 0x10;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(esi, 3)) goto loc_00077242; /* jl: less (signed <) */

loc_000772F0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0xE0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xBC);
    eax = MEM32(ebx + 0xC0);
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esp + 0xF8;
    PUSH32(esp, 0); sub_0029CBF0(); /* call 0x0029CBF0 */

loc_0007733D: ;
    eax = MEM32(ebx + 0xC0);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax); /* movss */
    esp = esp + 0x18;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x128;
    PUSH32(esp, edx);
    MEMF(esp + 0x11C) = xmm2; /* movss */
    MEMF(esp + 0x120) = xmm1; /* movss */
    MEMF(esp + 0x124) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00077384: ;
    edi = MEM32(esp + 0xC);
    esi = edx;
    edx = MEM32(esp + 0x10);
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775B3;

loc_0007739A: ;
    if (CMP_NE(MEM8(ebx + 0x1E), 4)) goto loc_0007752C; /* jne: not equal / not zero */

loc_000773A4: ;
    edi = esp + 0x60;
    edi = edi - edx;
    eax = edx + 0x30;
    MEM32(esp + 0x30) = edi;
    ecx = esp + 0x64;
    edi = esp + 0x64;
    esi = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = ecx;
    eax = edx + 8;
    edi = edi - edx;
    edx = MEM32(esp + 0x28);
    ecx = eax;
    MEM32(esp + 0x34) = edi;

loc_000773D2: ;
    xmm2 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + -4); /* movss */
    xmm0 = MEMF(eax + -8); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x44)); /* sqrtss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xBC); /* movss */
    xmm1 = MEMF(ecx + -8); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x3C); /* divss */
    edi = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + -4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + edi) = xmm1; /* movss */
    edi = MEM32(esp + 0x34);
    MEMF(eax + edi) = xmm0; /* movss */
    edi = MEM32(esp + 0x1C);
    edi = MEM32(edi);
    MEM32(esp + esi * 4 + 0x90) = edi;
    edi = MEM32(esp + 0x1C);
    esi++;
    edi = edi + 4;
    eax = eax + 0x10;
    edx = edx + 0x10;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(esi, 3)) goto loc_000773D2; /* jl: less (signed <) */

loc_00077480: ;
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x9C) = xmm5; /* movss */
    SET_LO16(eax, MEM16(ebx + 0x2C));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00077514; /* je: equal / zero */

loc_0007749E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = SX16(LO16(eax));
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x17C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000774DC: ;
    esp = esp + 0x24;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x164;
    PUSH32(esp, edx);
    eax = esp + 0x1E8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_000774F9: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = 0x10;
    esi = esp + 0x1E0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775B3;

loc_00077514: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = 0x10;
    esi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775B3;

loc_0007752C: ;
    SET_LO16(eax, MEM16(ebx + 0x2C));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00077585; /* je: equal / zero */

loc_00077535: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, 0);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648F48); /* mulss */
    PUSH32(esp, 0);
    eax = esp + 0x1A8;
    PUSH32(esp, 0); sub_0029BFE0(); /* call 0x0029BFE0 */

loc_00077554: ;
    edx = MEM32(esp + 0x18);
    esp = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x1A4;
    PUSH32(esp, eax);
    ecx = esp + 0x228;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00077571: ;
    edi = MEM32(esp + 0xC);
    ecx = 0x10;
    esi = esp + 0x220;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775B3;

loc_00077585: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775B3;

loc_0007759A: ;
    if (CMP_NE(MEM8(ecx + 0xA1), 5)) goto loc_000775AB; /* jne: not equal / not zero */

loc_000775A3: ;
    MEM32(esp + 0xC) = ecx;
    edx = ecx;
    goto loc_000775AF;

loc_000775AB: ;
    MEM32(esp + 0xC) = edx;

loc_000775AF: ;
    MEM32(esp + 0x10) = edx;

loc_000775B3: ;
    eax = MEM32(ebx + 0xC4);
    if (TEST_Z(eax, eax)) { sub_000776A7(); return; } /* je: equal / zero */

loc_000775C1: ;
    ecx = MEM32(ebx + 0x60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x18) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_000775E3; /* je: equal / zero */

loc_000775CD: ;
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000775F7; /* je: equal / zero */

loc_000775D5: ;
    esi = ecx;
    edi = ebx + 0x70;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775FC;

loc_000775E3: ;
    if (TEST_Z(edx, edx)) goto loc_000775F7; /* je: equal / zero */

loc_000775E7: ;
    esi = MEM32(esp + 0x10);
    edi = ebx + 0x70;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_000775FC;

loc_000775F7: ;
    MEM8(esp + 0x18) = 1;

loc_000775FC: ;
    edx = ebx + 0x70;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(MEM8(eax + 0x136), 0x40)) goto loc_00077624; /* jne: not equal / not zero */

loc_0007760F: ;
    SET_LO8(ecx, MEM8(ebx + 6));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00077637; /* je: equal / zero */

loc_00077616: ;
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_00077637; /* je: equal / zero */

loc_00077624: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_NZ(ecx, ecx)) goto loc_0007763C; /* jne: not equal / not zero */

loc_0007762E: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_0007763C; /* je: equal / zero */

loc_00077637: ;
    MEM8(esp + 0x18) = 1;

loc_0007763C: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007767B; /* je: equal / zero */

loc_00077646: ;
    ecx = MEM32(0x84A144);
    if (TEST_NZ(ecx, ecx)) goto loc_0007765E; /* jne: not equal / not zero */

loc_00077650: ;
    edx = ZX16(MEM16(eax + 0x60));
    (void)0; /* cmp MEM8(edx * 2 + 0x76FF0C), 1 - flags set for next jcc */
    goto loc_00077674;

loc_0007765E: ;
    eax = ZX16(MEM16(eax + 0x60));
    eax = eax << 1;
    if (CMP_BE(MEM8(eax + 0x76FF0C), 1)) goto loc_0007767B; /* jbe: below or equal (unsigned <=) */

loc_0007766D: ;
    (void)0; /* cmp MEM8(eax + 0x76FF0D), 1 - flags set for next jcc */

loc_00077674: ;
    if (CMP_BE(MEM8(eax + 0x76FF0D), 1)) goto loc_0007767B; /* jbe: below or equal (unsigned <=) */

loc_00077676: ;
    MEM8(esp + 0x18) = 1;

loc_0007767B: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x54);
    ecx = MEM32(ebx + 0xDC);
    esi = MEM32(ebx + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00086B30(); /* call 0x00086B30 */

loc_000776A2: ;
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_000776DE(); return; /* tail jmp 0x000776DE */

}

/**
 * sub_00077760
 * Original: 0x00077760 - 0x000777C5 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00077760: ;
    PUSH32(esp, ecx);
    (void)0; /* test MEM8(edi + 7), 0x20 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (TEST_Z(MEM8(edi + 7), 0x20)) goto loc_000777C0; /* je: equal / zero */

loc_0007776C: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_0007777B; /* jne: not equal / not zero */

loc_00077776: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007777B: ;
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000777C0; /* je: equal / zero */

loc_00077785: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_0007779E: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000777AA: ;
    ecx = MEM32(edi + 0x58);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    ecx = MEM32(ebx + 0x3C8);
    esp = esp + 0x10;
    MEM32(edx + eax + 4) = ecx;
    POP32(esp, esi);

loc_000777C0: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000777D0
 * Original: 0x000777D0 - 0x0007781E (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000777D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0007781E(); return; } /* jne: not equal / not zero */

loc_000777EE: ;
    eax = MEM32(ebp + 0x24);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00077815; /* je: equal / zero */

loc_000777F6: ;
    if (CMP_L(eax, 1)) goto loc_00077802; /* jl: less (signed <) */

loc_000777FB: ;
    if (CMP_L(eax, 0x11A)) goto loc_00077815; /* jl: less (signed <) */

loc_00077802: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x606A74);
    PUSH32(esp, 0x7FAA78);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00077812: ;
    esp = esp + 0xC;

loc_00077815: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00077BE0
 * Original: 0x00077BE0 - 0x00077CEE (270 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077BE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00077BE0: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00077BF3; /* jne: not equal / not zero */

loc_00077BEE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00077BF3: ;
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
    if (TEST_Z(esi, esi)) goto loc_00077C3D; /* je: equal / zero */

loc_00077C1B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_00077C3D; /* jb: below (unsigned <) */

loc_00077C24: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00077C2E: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00077C36: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00077C5A; /* jne: not equal / not zero */

loc_00077C3D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00077C4F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00077C57: ;
    esp = esp + 8;

loc_00077C5A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0xC0) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00077CEC; /* je: equal / zero */

loc_00077C6A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0xC0);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    ecx = MEM32(ebx + 0xC0);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    edx = MEM32(ebx + 0xC0);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    eax = MEM32(ebx + 0xC0);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = MEM32(ebx + 0xC0);
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    eax = MEM32(ebx + 0x60);
    if (TEST_NZ(eax, eax)) goto loc_00077CEC; /* jne: not equal / not zero */

loc_00077CD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4B1);
    PUSH32(esp, 0x5E9928);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00077CE6: ;
    esp = esp + 0x10;
    MEM32(ebx + 0x60) = eax;

loc_00077CEC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077CF0
 * Original: 0x00077CF0 - 0x00077E49 (345 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077CF0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x14;
    if (CMP_EQ(eax, 5)) goto loc_00077E45; /* je: equal / zero */

loc_00077D00: ;
    eax = 1;
    ecx = ebx;
    eax = eax << LO8(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x847200);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00077E44; /* je: equal / zero */

loc_00077D1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_00077D20: ;
    SET_LO8(eax, MEM8(ebp + 6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp + 0xE0);
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00077E38; /* je: equal / zero */

loc_00077D35: ;
    SET_LO8(eax, MEM8(ebp + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00077E38; /* jne: not equal / not zero */

loc_00077D40: ;
    SET_LO8(edx, MEM8(ebp));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00077D48: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00077E38; /* je: equal / zero */

loc_00077D52: ;
    ecx = ZX8(MEM8(edi + 0x16E));
    eax = MEM32(esp + 0xC);
    ecx = ecx & eax;
    if (CMP_EQ(ecx, eax)) goto loc_00077E38; /* je: equal / zero */

loc_00077D67: ;
    eax = MEM32(esp + 0x24);
    if (CMP_NE(eax, 2)) goto loc_00077D7E; /* jne: not equal / not zero */

loc_00077D70: ;
    if (CMP_EQ(MEM8(edi + 0xA1), 7)) goto loc_00077DEC; /* je: equal / zero */

loc_00077D79: ;
    goto loc_00077E38;

loc_00077D7E: ;
    if (CMP_NE(eax, 3)) goto loc_00077D93; /* jne: not equal / not zero */

loc_00077D83: ;
    eax = edi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_00077D8A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00077DEC; /* jne: not equal / not zero */

loc_00077D8E: ;
    goto loc_00077E38;

loc_00077D93: ;
    if (CMP_NE(eax, 4)) goto loc_00077DA6; /* jne: not equal / not zero */

loc_00077D98: ;
    if (CMP_EQ(MEM8(edi + 0xA1), 9)) goto loc_00077DEC; /* je: equal / zero */

loc_00077DA1: ;
    goto loc_00077E38;

loc_00077DA6: ;
    eax = edi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_00077DAD: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00077E38; /* je: equal / zero */

loc_00077DB5: ;
    (void)0; /* cmp MEM32(esp + 0x24), 1 - flags set for next jcc */
    eax = ZX8(MEM8(edi + ebx + 0xC7));
    if (CMP_NE(MEM32(esp + 0x24), 1)) goto loc_00077DDC; /* jne: not equal / not zero */

loc_00077DC4: ;
    if (TEST_NZ(MEM8(ebp + 7), 2)) goto loc_00077DEC; /* jne: not equal / not zero */

loc_00077DCA: ;
    if (CMP_NE(eax, 0xFF)) goto loc_00077DEC; /* jne: not equal / not zero */

loc_00077DD1: ;
    if (CMP_EQ(MEM8(edi + 0xA1), 1)) goto loc_00077DEC; /* je: equal / zero */

loc_00077DDA: ;
    goto loc_00077E38;

loc_00077DDC: ;
    if (CMP_L(eax, 0xFF)) goto loc_00077E38; /* jl: less (signed <) */

loc_00077DE3: ;
    if (CMP_EQ(MEM8(edi + 0xA1), 1)) goto loc_00077E38; /* je: equal / zero */

loc_00077DEC: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00077E01; /* je: equal / zero */

loc_00077DF6: ;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_00077DFB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00077E0A; /* je: equal / zero */

loc_00077DFF: ;
    goto loc_00077E38;

loc_00077E01: ;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_00077E06: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00077E38; /* je: equal / zero */

loc_00077E0A: ;
    eax = MEM32(esp + 0x24);
    if (CMP_NE(eax, 4)) { sub_00077E49(); return; } /* jne: not equal / not zero */

loc_00077E13: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM8(0x847204) = 1;
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_00077E24: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_00077E2E: ;
    esp = esp + 0x20;
    MEM8(0x847204) = 0;

loc_00077E38: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = esi;
    if (TEST_NZ(esi, esi)) goto loc_00077D20; /* jne: not equal / not zero */

loc_00077E42: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00077E44: ;
    POP32(esp, ebp);

loc_00077E45: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00077F10
 * Original: 0x00077F10 - 0x00077F6D (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077F10: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(edi, edi)) goto loc_00077F6A; /* je: equal / zero */

loc_00077F1E: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00077F6A; /* je: equal / zero */

loc_00077F28: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00077F6A; /* je: equal / zero */

loc_00077F32: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_00077F6A; /* je: equal / zero */

loc_00077F3B: ;
    PUSH32(esp, esi);
    /* nop */

loc_00077F40: ;
    SET_LO8(ecx, MEM8(eax));
    (void)0; /* cmp LO8(ecx), MEM8(edi + 0x10B) - flags set for next jcc */
    esi = MEM32(eax + 0xE0);
    if (CMP_NE(LO8(ecx), MEM8(edi + 0x10B))) goto loc_00077F63; /* jne: not equal / not zero */

loc_00077F50: ;
    SET_LO8(ecx, MEM8(eax + 6));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00077F63; /* je: equal / zero */

loc_00077F57: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_00077F60: ;
    esp = esp + 0x10;

loc_00077F63: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_00077F40; /* jne: not equal / not zero */

loc_00077F69: ;
    POP32(esp, esi);

loc_00077F6A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077F70
 * Original: 0x00077F70 - 0x00077F9C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_Z(MEM8(edi + 7), 0x20)) { sub_00077F9C(); return; } /* je: equal / zero */

loc_00077F7E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0x5A0350;
    POP32(esp, ebp);
    MEM32(ecx) = 0x5A0350;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000780E0
 * Original: 0x000780E0 - 0x00078A1F (2367 bytes, 593 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000780E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000780E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x38) = eax;
    SET_LO8(eax, MEM8(edi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078A18; /* je: equal / zero */

loc_00078107: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00078A18; /* jne: not equal / not zero */

loc_00078112: ;
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = ebx;
    PUSH32(esp, 0); sub_000822B0(); /* call 0x000822B0 */

loc_0007811F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078A18; /* je: equal / zero */

loc_00078127: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007813D; /* je: equal / zero */

loc_00078130: ;
    if (CMP_A(MEM8(ebx + 0x3A8), 1)) goto loc_00078A18; /* ja: above (unsigned >) */

loc_0007813D: ;
    SET_LO8(eax, MEM8(edi + 9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00078158; /* jne: not equal / not zero */

loc_00078144: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00077760(); /* call 0x00077760 */

loc_0007814A: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 9) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078A18; /* je: equal / zero */

loc_00078158: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX8(MEM8(ebx + eax + 0xC7));
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    esi = ZX16(MEM16(ebx + 0x60));
    ecx = ZX8(MEM8(edi + 6));
    if (CMP_EQ(eax, 0xFF)) goto loc_0007817C; /* je: equal / zero */

loc_00078172: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x1C) = eax;

loc_0007817C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_00078183: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00078A18; /* je: equal / zero */

loc_0007818B: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00077F70(); /* call 0x00077F70 */

loc_0007819C: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00078A18; /* je: equal / zero */

loc_000781A7: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(0x8471A4);
    (void)0; /* cmp MEM16(eax + 0x44), 0 - flags set for next jcc */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_EQ(MEM16(eax + 0x44), 0)) goto loc_000781EB; /* je: equal / zero */

loc_000781CD: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esi = esi + MEM32(0x84A5F8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00080690(); /* call 0x00080690 */

loc_000781E6: ;
    esp = esp + 4;
    goto loc_000781F1;

loc_000781EB: ;
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_000781F1: ;
    edi = MEM32(ebp + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    esi = esp + 0x6C;
    eax = edi;
    PUSH32(esp, 0); sub_0007F7A0(); /* call 0x0007F7A0 */

loc_00078232: ;
    eax = MEM32(ebx + 0x64);
    esp = esp + 0x2C;
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(eax, 0x21)) goto loc_00078266; /* jne: not equal / not zero */

loc_00078242: ;
    eax = MEM32(ebx + 0x80);
    ecx = MEM32(ebx + 0x7C);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_0007825B: ;
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    MEM8(esp + 0xF) = LO8(eax);
    goto loc_00078276;

loc_00078266: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0); sub_0012E360(); /* call 0x0012E360 */

loc_0007826F: ;
    MEM8(0x8493C8) = 1;

loc_00078276: ;
    ecx = MEM32(ebp + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_000782A7; /* je: equal / zero */

loc_0007827D: ;
    if (CMP_EQ(ecx, 1)) goto loc_000782A7; /* je: equal / zero */

loc_00078282: ;
    if (CMP_EQ(ecx, 3)) goto loc_000782A7; /* je: equal / zero */

loc_00078287: ;
    if (CMP_EQ(ecx, 4)) goto loc_000782A7; /* je: equal / zero */

loc_0007828C: ;
    eax = MEM32(ebp + 8);
    MEM8(0x847205) = 1;
    PUSH32(esp, 0); sub_0008E6C0(); /* call 0x0008E6C0 */

loc_0007829B: ;
    MEM8(0x847205) = 0;
    goto loc_00078A09;

loc_000782A7: ;
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    edx = MEM32(0x84B868);
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(ecx, 3)) goto loc_000782E3; /* jne: not equal / not zero */

loc_000782B6: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = edx + 0x10;
    ecx = 0x10;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000782D5; /* jne: not equal / not zero */

loc_000782C8: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_000782D2: ;
    esp = esp + 4;

loc_000782D5: ;
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    goto loc_0007833D;

loc_000782E3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00078306; /* jne: not equal / not zero */

loc_000782E7: ;
    ecx = MEM32(0x84A13C);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_000782FF: ;
    edx = MEM32(esp + 0x24);
    esp = esp + 4;

loc_00078306: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078317; /* je: equal / zero */

loc_0007830F: ;
    esi = edx + 0x90;
    goto loc_0007833D;

loc_00078317: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_0007832E; /* jne: not equal / not zero */

loc_00078320: ;
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    goto loc_0007833D;

loc_0007832E: ;
    eax = MEM32(0x84A13C);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    esi = esi + eax;

loc_0007833D: ;
    edi = 0x81B810;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_0007834E: ;
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_00078353: ;
    eax = MEM32(ebp + 0x14);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(eax, 3)) goto loc_00078388; /* jne: not equal / not zero */

loc_00078361: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x20);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000783E1; /* je: equal / zero */

loc_00078377: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    esi = ebx;
    PUSH32(esp, 0); sub_0012FBB0(); /* call 0x0012FBB0 */

loc_00078383: ;
    esp = esp + 4;
    goto loc_000783E1;

loc_00078388: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000783C9; /* je: equal / zero */

loc_00078390: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_000783C4: ;
    esp = esp + 0x10;
    goto loc_000783D8;

loc_000783C9: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0012FE60(); /* call 0x0012FE60 */

loc_000783D5: ;
    esp = esp + 8;

loc_000783D8: ;
    edi = MEM32(ebp + 8);
    MEM32(0x81BE48) = esi;

loc_000783E1: ;
    eax = MEM32(edi + 0xC4);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 0x5A0350;
    if (TEST_NZ(eax, eax)) goto loc_000783F4; /* jne: not equal / not zero */

loc_000783F0: ;
    eax = MEM32(esp + 0x24);

loc_000783F4: ;
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_000783F9: ;
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    esi = MEM32(edi + 0x58);
    edi = MEM32(ebp + 0x14);
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    eax = ZX16(MEM16(eax + 0xC));
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(edi, 4)) goto loc_000785CA; /* jne: not equal / not zero */

loc_00078421: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_000789F5; /* je: equal / zero */

loc_00078429: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00081FC0(); /* call 0x00081FC0 */

loc_00078447: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000789F5; /* je: equal / zero */

loc_00078452: ;
    xmm0 = MEMF(ebx + 0x260); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    edx = 0xA;
    ecx = 0x40340;
    MEM8(0x750340) = LO8(eax);
    MEM8(0x750354) = 1;
    MEMF(0x750358) = xmm0; /* movss */
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007848D: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AEC) = 0xA;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000784A3: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 1);
    MEM32(0x549AE8) = ebx;
    MEM8(0x84B7CD) = LO8(ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000784B8: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000784C7: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000784E0: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000784F9: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = 8;
    MEM32(0x549B1C) = 0xF;
    MEM8(esp + 0x1B) = LO8(ebx);
    PUSH32(esp, 0); sub_0007CEA0(); /* call 0x0007CEA0 */

loc_0007851F: ;
    edx = MEM32(0x7FA020);
    esp = esp + 0xC;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007853E: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    ecx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0007856C; /* je: equal / zero */

loc_00078567: ;
    MEM32(0x84B854) = eax;

loc_0007856C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + -16);
    MEM32(0x81BE64) = ecx;
    MEM32(0x81BE50) = ebx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(0x84B7CC) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00078593: ;
    esp = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(0x84B7CC) = 0;
    MEM8(0x750341) = 0xFF;
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_000785AC: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM8(0x84B7CD) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000785BF: ;
    MEM32(0x549AE8) = ebx;
    goto loc_000789E1;

loc_000785CA: ;
    edx = 0; /* xor self */
    if (CMP_NE(edi, edx)) goto loc_00078722; /* jne: not equal / not zero */

loc_000785D4: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_0012E2C0(); /* call 0x0012E2C0 */

loc_000785DC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078722; /* je: equal / zero */

loc_000785E4: ;
    MEM32(0x819FE0) = edx;
    MEM32(0x819FE4) = edx;
    MEM32(0x81B7C0) = MEM32(0x81B7C0) & 0x80000000u;
    PUSH32(esp, 0); sub_00124F90(); /* call 0x00124F90 */

loc_000785FF: ;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_00078604: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0007860C: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007862D: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x18);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, edx);
    edi = 4;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0); sub_0007CEA0(); /* call 0x0007CEA0 */

loc_00078650: ;
    edx = MEM32(0x7FA020);
    esp = esp + 0xC;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078679: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000786A6; /* je: equal / zero */

loc_000786A1: ;
    MEM32(0x84B854) = eax;

loc_000786A6: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(edi + -16);
    PUSH32(esp, 4);
    ecx = edi;
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_000786C6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_000786D4: ;
    esp = esp + 0x14;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_000786E1: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    MEM32(0x84B868) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000786FF; /* je: equal / zero */

loc_000786F3: ;
    MEM32(0x84B824) = edi;
    MEM32(0x84B828) = edi;

loc_000786FF: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(ecx, MEM8(0x87560C));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM8(0x8493C8) = 1;
    PUSH32(esp, 0); sub_0012FE60(); /* call 0x0012FE60 */

loc_00078716: ;
    MEM32(0x81BE48) = edi;
    edi = MEM32(ebp + 0x14);
    esp = esp + 8;

loc_00078722: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(0x81BD70) = 0x3F0270;
    if (TEST_Z(edi, edi)) goto loc_00078739; /* je: equal / zero */

loc_00078730: ;
    if (CMP_NE(edi, 3)) goto loc_00078891; /* jne: not equal / not zero */

loc_00078739: ;
    if (TEST_Z(MEM8(esp + 0x1C), 1)) goto loc_00078891; /* je: equal / zero */

loc_00078744: ;
    SET_LO8(eax, MEM8(0x847205));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000787A4; /* jne: not equal / not zero */

loc_0007874F: ;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00078754: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078763: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007877C: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078795: ;
    MEM32(0x549B1C) = 0xFF;
    goto loc_00078838;

loc_000787A4: ;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000787A9: ;
    edx = 0x205;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000787B8: ;
    edx = 0x1E00;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x205;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000787D1: ;
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0);
    MEM32(0x549B0C) = 0x1E00;
    PUSH32(esp, 0); sub_001DAFB0(); /* call 0x001DAFB0 */

loc_000787EA: ;
    ebx = ZX8(LO8(eax));
    esp = esp + 4;
    edx = ebx;
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000787FC: ;
    PUSH32(esp, 1);
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00078809: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078815: ;
    edx = 0x204;
    ecx = 0x40354;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007882E: ;
    MEM32(0x549ADC) = 0x204;

loc_00078838: ;
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(edi, 3)) goto loc_0007884D; /* jne: not equal / not zero */

loc_00078842: ;
    eax = MEM32(esp + 0x10);
    MEM32(0x81BE48) = eax;
    goto loc_00078868;

loc_0007884D: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0); sub_0007CEA0(); /* call 0x0007CEA0 */

loc_00078865: ;
    esp = esp + 0xC;

loc_00078868: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_00078877: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    edi = MEM32(ebp + 0x14);
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00078891; /* je: equal / zero */

loc_00078885: ;
    eax = 0; /* xor self */
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_00078891: ;
    if (CMP_EQ(edi, 1)) goto loc_0007889F; /* je: equal / zero */

loc_00078896: ;
    if (CMP_NE(edi, 3)) goto loc_000789F5; /* jne: not equal / not zero */

loc_0007889F: ;
    if (TEST_Z(MEM8(esp + 0x1C), 2)) goto loc_000789F5; /* je: equal / zero */

loc_000788AA: ;
    SET_LO8(eax, MEM8(0x847205));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007890A; /* jne: not equal / not zero */

loc_000788B5: ;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000788BA: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000788C9: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000788E2: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000788FB: ;
    MEM32(0x549B1C) = 0xF;
    goto loc_0007899E;

loc_0007890A: ;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0007890F: ;
    edx = 0x205;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007891E: ;
    edx = 0x1E00;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x205;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078937: ;
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0);
    MEM32(0x549B0C) = 0x1E00;
    PUSH32(esp, 0); sub_001DAFB0(); /* call 0x001DAFB0 */

loc_00078950: ;
    ebx = ZX8(LO8(eax));
    esp = esp + 4;
    edx = ebx;
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078962: ;
    PUSH32(esp, 1);
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0007896F: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0007897B: ;
    edx = 0x204;
    ecx = 0x40354;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00078994: ;
    MEM32(0x549ADC) = 0x204;

loc_0007899E: ;
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(edi, 3)) goto loc_000789B4; /* jne: not equal / not zero */

loc_000789A8: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x81BE48) = ecx;
    goto loc_000789CF;

loc_000789B4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = 2;
    PUSH32(esp, 0); sub_0007CEA0(); /* call 0x0007CEA0 */

loc_000789CC: ;
    esp = esp + 0xC;

loc_000789CF: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_000789DE: ;
    esp = esp + 0xC;

loc_000789E1: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000789F5; /* je: equal / zero */

loc_000789E9: ;
    eax = 0; /* xor self */
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_000789F5: ;
    PUSH32(esp, 0); sub_00124820(); /* call 0x00124820 */

loc_000789FA: ;
    PUSH32(esp, 0); sub_0010A420(); /* call 0x0010A420 */

loc_000789FF: ;
    MEM32(0x81BE44) = 0;

loc_00078A09: ;
    MEM32(0x81BE48) = 0;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_00078A18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00078A20
 * Original: 0x00078A20 - 0x00078A31 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00078A20: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00078A31(); return; } /* jne: not equal / not zero */

loc_00078A2D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078A70
 * Original: 0x00078A70 - 0x00078AC7 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00078A70: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847200);
    if (TEST_Z(ecx, ecx)) goto loc_00078AA8; /* je: equal / zero */

loc_00078A7C: ;
    eax = esi;
    if (TEST_Z(eax, eax)) goto loc_00078AA8; /* je: equal / zero */

loc_00078A82: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    goto loc_00078A90;

    /* nop */

loc_00078A90: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_00078AA2; /* jne: not equal / not zero */

loc_00078A9A: ;
    ebx = ZX16(MEM16(eax + 0xA));
    if (CMP_EQ(ebx, edi)) goto loc_00078AC4; /* je: equal / zero */

loc_00078AA2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00078A90; /* jne: not equal / not zero */

loc_00078AA8: ;
    eax = esi;
    if (TEST_Z(eax, eax)) goto loc_00078AC2; /* je: equal / zero */

loc_00078AAE: ;
    edi = edi;

loc_00078AB0: ;
    ecx = ZX16(MEM16(eax + 0xA));
    if (CMP_EQ(ecx, edi)) goto loc_00078AC4; /* je: equal / zero */

loc_00078AB8: ;
    eax = MEM32(eax + 0xE0);
    if (TEST_NZ(eax, eax)) goto loc_00078AB0; /* jne: not equal / not zero */

loc_00078AC2: ;
    eax = 0; /* xor self */

loc_00078AC4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00078AD0
 * Original: 0x00078AD0 - 0x00078CA8 (472 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078AD0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    eax = ZX16(MEM16(edi + 2));
    eax = eax + 0xFFFFFFD2u;
    if (CMP_A(eax, 0x62)) goto loc_00078CA2; /* ja: above (unsigned >) */

loc_00078AE9: ;
    eax = ZX8(MEM8(eax + 0x78CD4));
    { uint32_t _jt = MEM32(eax * 4 + 0x78CA8); /* switch: 11 entries, 11 targets */
    if (_jt == 0x00078AF7u) goto loc_00078AF7;
    if (_jt == 0x00078B02u) goto loc_00078B02;
    if (_jt == 0x00078B21u) goto loc_00078B21;
    if (_jt == 0x00078B36u) goto loc_00078B36;
    if (_jt == 0x00078B49u) goto loc_00078B49;
    if (_jt == 0x00078B65u) goto loc_00078B65;
    if (_jt == 0x00078B79u) goto loc_00078B79;
    if (_jt == 0x00078B9Au) goto loc_00078B9A;
    if (_jt == 0x00078BCDu) goto loc_00078BCD;
    if (_jt == 0x00078BE5u) goto loc_00078BE5;
    if (_jt == 0x00078CA2u) goto loc_00078CA2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078AF7: ;
    PUSH32(esp, 0); sub_0019BD00(); /* call 0x0019BD00 */

loc_00078AFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B02: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00078CA2; /* je: equal / zero */

loc_00078B10: ;
    esi = eax;
    MEM16(esi + 0x2D4) = MEM16(esi + 0x2D4) + 0xAA;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B21: ;
    PUSH32(esp, 0x5E990C);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00078B2D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B36: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_001209A0(); /* call 0x001209A0 */

loc_00078B40: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B49: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00118910(); /* call 0x00118910 */

loc_00078B54: ;
    esp = esp + 8;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_00117F60(); /* call 0x00117F60 */

loc_00078B5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B65: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0017F990(); /* call 0x0017F990 */

loc_00078B70: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B79: ;
    PUSH32(esp, 0x5E9900);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00078B85: ;
    PUSH32(esp, 0x5E98F8);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00078B91: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078B9A: ;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00078BA3: ;
    esp = esp + 4;
    if (CMP_GE(eax, 0x64)) goto loc_00078BBC; /* jge: greater or equal (signed >=) */

loc_00078BAB: ;
    SET_LO16(ecx, MEM16(0x69D9E0));
    MEM16(edi + 0x22) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078BBC: ;
    SET_LO16(edx, MEM16(0x69D9F4));
    MEM16(edi + 0x22) = LO16(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078BCD: ;
    PUSH32(esp, 0xFF);
    SET_LO8(edx, LO8(edx) | 0xFF);
    SET_LO8(ecx, 6);
    PUSH32(esp, 0); sub_001769C0(); /* call 0x001769C0 */

loc_00078BDC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00078BE5: ;
    if (TEST_Z(esi, esi)) goto loc_00078CA2; /* je: equal / zero */

loc_00078BED: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E98DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_00078C0B: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00078CA2; /* je: equal / zero */

loc_00078C16: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edi = MEM32(esp + 8);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649788); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00078C42: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00078CA2; /* je: equal / zero */

loc_00078C49: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x69;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esp + 0x14);
    ecx = eax + 0x4C;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x1D);
    edi = esi;
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_00078C9F: ;
    esp = esp + 4;

loc_00078CA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00078D40
 * Original: 0x00078D40 - 0x00078EDE (414 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00078D40: ;
    SET_LO8(edx, MEM8(edi));
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00078D4B: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00078ED9; /* je: equal / zero */

loc_00078D55: ;
    eax = ZX16(MEM16(edi + 2));
    eax = eax + 0xFFFFFFE6u;
    if (CMP_A(eax, 0x76)) goto loc_00078E60; /* ja: above (unsigned >) */

loc_00078D65: ;
    eax = ZX8(MEM8(eax + 0x78F08));
    { uint32_t _jt = MEM32(eax * 4 + 0x78EE0); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00078D73u) goto loc_00078D73;
    if (_jt == 0x00078D8Fu) goto loc_00078D8F;
    if (_jt == 0x00078DA3u) goto loc_00078DA3;
    if (_jt == 0x00078DD1u) goto loc_00078DD1;
    if (_jt == 0x00078DF1u) goto loc_00078DF1;
    if (_jt == 0x00078E2Au) goto loc_00078E2A;
    if (_jt == 0x00078E33u) goto loc_00078E33;
    if (_jt == 0x00078E3Cu) goto loc_00078E3C;
    if (_jt == 0x00078E45u) goto loc_00078E45;
    if (_jt == 0x00078E60u) goto loc_00078E60;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078D73: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00078E60; /* je: equal / zero */

loc_00078D81: ;
    MEM16(eax + 0x2D4) = MEM16(eax + 0x2D4) + 0xFF56;
    goto loc_00078E60;

loc_00078D8F: ;
    PUSH32(esp, 0x5E990C);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00078D9B: ;
    esp = esp + 4;
    goto loc_00078E60;

loc_00078DA3: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = edi;
    ecx = 0xF;
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00078DBA: ;
    if (CMP_NE(MEM16(edi + 2), 0x37)) goto loc_00078E60; /* jne: not equal / not zero */

loc_00078DC5: ;
    eax = esi;
    PUSH32(esp, 0); sub_0019BCD0(); /* call 0x0019BCD0 */

loc_00078DCC: ;
    goto loc_00078E60;

loc_00078DD1: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x29);
    ecx = esp + 0xC;
    SET_LO8(eax, 0x10);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_0011F6D0(); /* call 0x0011F6D0 */

loc_00078DEC: ;
    esp = esp + 4;
    goto loc_00078E60;

loc_00078DF1: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x2E);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0x1C) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00078E12: ;
    PUSH32(esp, 0x2F);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00078E25: ;
    esp = esp + 0x20;
    goto loc_00078E60;

loc_00078E2A: ;
    eax = esi;
    PUSH32(esp, 0); sub_0017F960(); /* call 0x0017F960 */

loc_00078E31: ;
    goto loc_00078E60;

loc_00078E33: ;
    eax = esi;
    PUSH32(esp, 0); sub_0019A7D0(); /* call 0x0019A7D0 */

loc_00078E3A: ;
    goto loc_00078E60;

loc_00078E3C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00176990(); /* call 0x00176990 */

loc_00078E43: ;
    goto loc_00078E60;

loc_00078E45: ;
    PUSH32(esp, 0x5E9900);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00078E51: ;
    PUSH32(esp, 0x5E98F8);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00078E5D: ;
    esp = esp + 8;

loc_00078E60: ;
    eax = ZX16(MEM16(edi + 0xA));
    eax = eax + 0xFFFFFF9Du;
    if (CMP_A(eax, 0x75)) goto loc_00078EBF; /* ja: above (unsigned >) */

loc_00078E6C: ;
    ecx = ZX8(MEM8(eax + 0x78F88));
    { uint32_t _jt = MEM32(ecx * 4 + 0x78F80); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00078E7Au) goto loc_00078E7A;
    if (_jt == 0x00078EBFu) goto loc_00078EBF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078E7A: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x1A);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00078E9B: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0x2C) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00078EBC: ;
    esp = esp + 0x20;

loc_00078EBF: ;
    PUSH32(esp, 0x68);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00078ED6: ;
    esp = esp + 0xC;

loc_00078ED9: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00079050
 * Original: 0x00079050 - 0x00079072 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079050: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    eax = MEM32(ebp + 0xC4);
    if (TEST_NZ(eax, eax)) { sub_00079072(); return; } /* jne: not equal / not zero */

loc_00079068: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C2B0
 * Original: 0x0007C2B0 - 0x0007C2E3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C2B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C2B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC4);
    if (TEST_Z(eax, eax)) { sub_0007C2E3(); return; } /* je: equal / zero */

loc_0007C2BE: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0007C2E3(); return; } /* je: equal / zero */

loc_0007C2C4: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007C2CE: ;
    if (TEST_Z(eax, eax)) { sub_0007C2E3(); return; } /* je: equal / zero */

loc_0007C2D2: ;
    eax = ZX16(MEM16(eax + 0x1D8));
    if (TEST_Z(eax, eax)) { sub_0007C2E3(); return; } /* je: equal / zero */

loc_0007C2DD: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C2F0
 * Original: 0x0007C2F0 - 0x0007C377 (135 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0007C2F0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0007C374; /* je: equal / zero */

loc_0007C2F9: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007C374; /* jne: not equal / not zero */

loc_0007C302: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x1B5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007C346; /* jne: not equal / not zero */

loc_0007C310: ;
    xmm0 = MEMF(eax + 0x294); /* movss */
    /* comiss xmm0, MEMF(eax + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x228))) goto loc_0007C346; /* jbe: below or equal (unsigned <=) */

loc_0007C321: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xB0);
    edx = MEM32(0x7FA20C);
    if (CMP_LE(eax, edx)) goto loc_0007C340; /* jle: less or equal (signed <=) */

loc_0007C335: ;
    eax = eax - edx;
    MEM32(ecx + 0xB0) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0007C340: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007C346: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(ecx + 0xB0) = eax;

loc_0007C374: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C380
 * Original: 0x0007C380 - 0x0007C3EE (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C380(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0007C380: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0007C3EB; /* je: equal / zero */

loc_0007C389: ;
    SET_LO8(eax, MEM8(0x76EC82));
    edx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_0007C3EB; /* jne: not equal / not zero */

loc_0007C394: ;
    ecx = MEM32(esp + 8);
    if (CMP_EQ(MEM8(ecx + 0x1B5), LO8(edx))) goto loc_0007C3B6; /* je: equal / zero */

loc_0007C3A0: ;
    eax = MEM32(ecx + 0x568);
    if (CMP_EQ(eax, edx)) goto loc_0007C3B0; /* je: equal / zero */

loc_0007C3AA: ;
    MEM32(eax + 0x1F8) = edx;

loc_0007C3B0: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0007C3B6: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0007C3E3; /* jnp: not parity */

loc_0007C3CB: ;
    xmm0 = xmm0 + MEMF(0x64925C); /* addss */
    /* comiss xmm0, MEMF(ecx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x7C))) goto loc_0007C3E3; /* jbe: below or equal (unsigned <=) */

loc_0007C3D9: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 6) = LO8(edx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0007C3E3: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 6) = 0xFF;

loc_0007C3EB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C3F0
 * Original: 0x0007C3F0 - 0x0007C42C (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C3F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C3F0: ;
    ecx = MEM32(esp + 4);
    eax = ZX16(MEM16(ecx + 2));
    eax = eax - 0x27;
    if ((eax == 0)) goto loc_0007C407; /* je: equal / zero */

loc_0007C3FD: ;
    eax = eax - 2;
    if ((eax == 0)) { sub_0007C42C(); return; } /* je: equal / zero */

loc_0007C402: ;
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_0007C429; /* jne: not equal / not zero */

loc_0007C407: ;
    edx = MEM32(esp + 8);
    if (CMP_NE(MEM8(edx + 0xA1), 5)) goto loc_0007C429; /* jne: not equal / not zero */

loc_0007C414: ;
    eax = MEM32(0x7FA20C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAAA);
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + LO16(eax);
    MEM16(ecx + 4) = 0;

loc_0007C429: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C450
 * Original: 0x0007C450 - 0x0007C697 (583 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0007C450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x128;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_0007C697(); return; } /* je: equal / zero */

loc_0007C470: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_0007C485: ;
    esp = esp + 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(eax, eax)) { sub_0007C697(); return; } /* je: equal / zero */

loc_0007C494: ;
    MEM16(eax + 4) = LO16(esi);
    ecx = MEM32(ebx + 0x260);
    MEM32(eax + 0xBC) = ecx;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x1E));
    if (TEST_Z(ecx, ecx)) goto loc_0007C4B3; /* je: equal / zero */

loc_0007C4AE: ;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    goto loc_0007C4B6;

loc_0007C4B3: ;
    SET_LO8(ecx, LO8(ecx) | 4);

loc_0007C4B6: ;
    MEM8(eax + 0x1E) = LO8(ecx);
    eax = MEM32(edi + 0x3C8);
    esi = esi << 6;
    esi = esi + eax;
    edx = esp + 0x70;
    ecx = 0x10;
    edi = esp + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_002AF9B0(); /* call 0x002AF9B0 */

loc_0007C4E3: ;
    eax = MEM32(ebx + 0x260);
    PUSH32(esp, eax);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x264);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x114);
    edx = eax;
    eax = MEM32(ebx + 0x1CC);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x1C0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esp + 0x4C;
    PUSH32(esp, 0); sub_0029CBF0(); /* call 0x0029CBF0 */

loc_0007C522: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    esp = esp + 0x1C;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    ecx = esi;
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    edx = esp + 0xF8;
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0007C55E: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_0007C596: ;
    eax = MEM32(ebp + 0x10);
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0007C5B5; /* je: equal / zero */

loc_0007C5A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0007C5B5: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0007C610; /* je: equal / zero */

loc_0007C5BC: ;
    xmm0 = MEMF(0x76FEE8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x76FEEC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x76FEF0); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x76FEDC); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x76FEE0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x76FEE4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_0007C610: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00077BE0(); /* call 0x00077BE0 */

loc_0007C638: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(0x76FEE8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(0x76FEEC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(0x76FEF0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(0x76FEDC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(0x76FEE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x1C;
    MEMF(0x76FEE4) = xmm0; /* movss */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C6A0
 * Original: 0x0007C6A0 - 0x0007C6DF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C6A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C6A0: ;
    ecx = MEM32(esp + 4);
    (void)0; /* cmp MEM16(ecx + 2), 0x11 - flags set for next jcc */
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0xA4);
    if (CMP_NE(MEM16(ecx + 2), 0x11)) goto loc_0007C6D9; /* jne: not equal / not zero */

loc_0007C6B5: ;
    if (CMP_EQ(eax, 0x3E)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6BA: ;
    if (CMP_EQ(eax, 0x3D)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6BF: ;
    if (CMP_EQ(eax, 0x41)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6C4: ;
    if (CMP_EQ(eax, 0xD9)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6CB: ;
    if (CMP_EQ(eax, 0x138)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6D2: ;
    if (CMP_EQ(eax, 0x139)) { sub_0007C6DF(); return; } /* je: equal / zero */

loc_0007C6D9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C6F0
 * Original: 0x0007C6F0 - 0x0007C738 (72 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C6F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C6F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FA20C);
    edx = MEM32(eax + 0xB0);
    edx = edx + ecx;
    ecx = edx;
    (void)0; /* cmp ecx, 0xF - flags set for next jcc */
    MEM32(eax + 0xB0) = edx;
    if (CMP_LE(ecx, 0xF)) goto loc_0007C720; /* jle: less or equal (signed <=) */

loc_0007C70F: ;
    MEM32(eax + 0xB4) = MEM32(eax + 0xB4) ^ 1;
    MEM32(eax + 0xB0) = 0;

loc_0007C720: ;
    ecx = MEM32(eax + 0xB4);
    edx = ecx + ecx * 4;
    SET_LO16(ecx, MEM16(edx * 4 + 0x69DE14));
    MEM16(eax + 0x22) = LO16(ecx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0007C740
 * Original: 0x0007C740 - 0x0007C8E5 (421 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0007C740: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = ZX16(MEM16(edi + 0x60));
    if (CMP_L(eax, ecx)) goto loc_0007C75E; /* jl: less (signed <) */

loc_0007C759: ;
    eax = 0x14;

loc_0007C75E: ;
    esi = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    edx = 0; /* xor self */
    if (CMP_NE(MEM16(esi + 0xA), 0x89)) goto loc_0007C7AC; /* jne: not equal / not zero */

loc_0007C777: ;
    ecx = MEM32(edi + 0xA4);
    (void)0; /* cmp ecx, 0x221 - flags set for next jcc */
    SET_LO8(ebx, 6);
    MEM8(esp + 0x1C) = LO8(ebx);
    if (CMP_EQ(ecx, 0x221)) goto loc_0007C79B; /* je: equal / zero */

loc_0007C78B: ;
    if (CMP_EQ(ecx, 0x223)) goto loc_0007C79B; /* je: equal / zero */

loc_0007C793: ;
    if (CMP_NE(ecx, 0x31B)) goto loc_0007C7C6; /* jne: not equal / not zero */

loc_0007C79B: ;
    ecx = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(ecx + 0x2B8), 2)) goto loc_0007C7C6; /* jne: not equal / not zero */

loc_0007C7AA: ;
    goto loc_0007C7C1;

loc_0007C7AC: ;
    ecx = MEM32(edi + 0x568);
    (void)0; /* cmp MEM32(ecx + 0x2B0), 0 - flags set for next jcc */
    SET_LO8(ebx, 5);
    MEM8(esp + 0x1C) = LO8(ebx);
    if (CMP_EQ(MEM32(ecx + 0x2B0), 0)) goto loc_0007C7C6; /* je: equal / zero */

loc_0007C7C1: ;
    edx = 1;

loc_0007C7C6: ;
    ecx = MEM32(esi + 0xB0);
    if (TEST_NZ(ecx, ecx)) goto loc_0007C86D; /* jne: not equal / not zero */

loc_0007C7D4: ;
    if (TEST_Z(edx, edx)) goto loc_0007C8DC; /* je: equal / zero */

loc_0007C7DC: ;
    ecx = MEM32(edi + 0x568);
    edx = MEM32(ecx + 0x2B0);
    if (TEST_NZ(edx, edx)) goto loc_0007C7F5; /* jne: not equal / not zero */

loc_0007C7EC: ;
    if (CMP_NE(LO8(ebx), 6)) goto loc_0007C8DC; /* jne: not equal / not zero */

loc_0007C7F5: ;
    edx = MEM32(eax + 0x28);
    if (TEST_NZ(edx, edx)) goto loc_0007C817; /* jne: not equal / not zero */

loc_0007C7FC: ;
    if (CMP_NE(MEM32(ecx + 0xBC), 2)) goto loc_0007C8DC; /* jne: not equal / not zero */

loc_0007C809: ;
    SET_LO8(eax, MEM8(ecx + 0x365));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007C8DC; /* je: equal / zero */

loc_0007C817: ;
    if (CMP_NE(MEM16(ecx + 0x2C8), 0)) goto loc_0007C8DC; /* jne: not equal / not zero */

loc_0007C825: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x50); /* addss */
    /* comiss xmm0, MEMF(0x648F58) - sets EFLAGS */
    MEMF(esi + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648F58))) goto loc_0007C8DC; /* jbe: below or equal (unsigned <=) */

loc_0007C844: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 0xB0) = 1;
    PUSH32(esp, 0); sub_000D73E0(); /* call 0x000D73E0 */

loc_0007C861: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0007C86D: ;
    if (TEST_Z(edx, edx)) goto loc_0007C8A6; /* je: equal / zero */

loc_0007C871: ;
    ecx = MEM32(edi + 0x568);
    edx = MEM32(ecx + 0xBC);
    if (CMP_EQ(edx, 2)) goto loc_0007C88D; /* je: equal / zero */

loc_0007C882: ;
    if (CMP_EQ(MEM32(eax + 0x28), 0)) goto loc_0007C8A6; /* je: equal / zero */

loc_0007C888: ;
    if (CMP_NE(edx, 2)) goto loc_0007C897; /* jne: not equal / not zero */

loc_0007C88D: ;
    SET_LO8(eax, MEM8(ecx + 0x365));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007C8A6; /* je: equal / zero */

loc_0007C897: ;
    eax = MEM32(ecx + 0x2B0);
    if (TEST_NZ(eax, eax)) goto loc_0007C8DC; /* jne: not equal / not zero */

loc_0007C8A1: ;
    if (CMP_EQ(LO8(ebx), 6)) goto loc_0007C8DC; /* je: equal / zero */

loc_0007C8A6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x1A);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esi + 0xB0) = 0;
    MEMF(esi + 0x50) = xmm0; /* movss */
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x1C) = edi;
    MEM8(esp + 0x20) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0007C8D9: ;
    esp = esp + 0x10;

loc_0007C8DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C8F0
 * Original: 0x0007C8F0 - 0x0007C9C4 (212 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C8F0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_0007C9C4(); return; } /* je: equal / zero */

loc_0007C8FD: ;
    SET_LO8(eax, MEM8(0x7FA204));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007C93D; /* je: equal / zero */

loc_0007C907: ;
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esi + 0xB8), 0xFFFFFFFFu)) goto loc_0007C92F; /* je: equal / zero */

loc_0007C914: ;
    ecx = MEM32(0x847024);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esi;
    ecx = 0xF;
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_0007C92F: ;
    MEM32(esi + 0xB8) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C93D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(ebx + 0xB8), 0xFFFFFFFFu)) goto loc_0007C9BF; /* jne: not equal / not zero */

loc_0007C94B: ;
    eax = MEM32(0x847024);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0007C95D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007C970; /* jne: not equal / not zero */

loc_0007C961: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    MEM32(ebx + 0xB8) = eax;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C970: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0007C98D; /* je: equal / zero */

loc_0007C97A: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0007C993;

loc_0007C98D: ;
    eax = MEM32(esi + 0x580);

loc_0007C993: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = esi;
    eax = ebx;
    ecx = 0x448;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0007C9B3: ;
    POP32(esp, edi);
    MEM32(ebx + 0xB8) = eax;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007C9BF: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C9D0
 * Original: 0x0007C9D0 - 0x0007C9E6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C9D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007C9D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) { sub_0007C9E6(); return; } /* jne: not equal / not zero */

loc_0007C9DF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CAD0
 * Original: 0x0007CAD0 - 0x0007CAE3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CAD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CAD0: ;
    ecx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx + 0xA1));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(edx), 3)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0007CAF0
 * Original: 0x0007CAF0 - 0x0007CAFC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CAF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CAF0: ;
    eax = MEM32(0x847200);
    if (TEST_NZ(eax, eax)) { sub_0007CAFC(); return; } /* jne: not equal / not zero */

loc_0007CAF9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0007CB20
 * Original: 0x0007CB20 - 0x0007CB37 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CB20: ;
    ecx = MEM32(0x847200);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_NZ(ecx, ecx)) { sub_0007CB37(); return; } /* jne: not equal / not zero */

loc_0007CB32: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CB60
 * Original: 0x0007CB60 - 0x0007CB95 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CB60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CB60: ;
    eax = MEM32(0x847200);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0007CB93; /* je: equal / zero */

loc_0007CB6E: ;
    PUSH32(esp, esi);
    goto loc_0007CB75;

loc_0007CB71: ;
    ebx = MEM32(esp + 0xC);

loc_0007CB75: ;
    ecx = ZX8(MEM8(eax));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = MEM32(eax + 0xE0);
    if (CMP_NE(ecx, edx)) goto loc_0007CB86; /* jne: not equal / not zero */

loc_0007CB82: ;
    MEM8(eax) = LO8(ebx);
    goto loc_0007CB8C;

loc_0007CB86: ;
    if (CMP_NE(ecx, ebx)) goto loc_0007CB8C; /* jne: not equal / not zero */

loc_0007CB8A: ;
    MEM8(eax) = LO8(edx);

loc_0007CB8C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_0007CB71; /* jne: not equal / not zero */

loc_0007CB92: ;
    POP32(esp, esi);

loc_0007CB93: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CBA0
 * Original: 0x0007CBA0 - 0x0007CBE6 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CBA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CBA0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_0007CBE6(); return; } /* je: equal / zero */

loc_0007CBA9: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_0007CBE6(); return; } /* je: equal / zero */

loc_0007CBB7: ;
    ecx = MEM32(eax + 0xA0);
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_EQ(ecx, 9)) { sub_0007CBE6(); return; } /* je: equal / zero */

loc_0007CBC8: ;
    if (CMP_EQ(ecx, 0x51)) { sub_0007CBE6(); return; } /* je: equal / zero */

loc_0007CBCD: ;
    if (CMP_EQ(MEM32(eax + 0x1F8), 3)) { sub_0007CBE6(); return; } /* je: equal / zero */

loc_0007CBD6: ;
    MEM32(eax + 0x1F8) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CBF0
 * Original: 0x0007CBF0 - 0x0007CC3A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CBF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CBF0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CBF9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CC07: ;
    eax = MEM32(ecx + 0xA0);
    if (CMP_EQ(eax, 0xC)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CC12: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x16)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CC1C: ;
    if (CMP_EQ(eax, 0x53)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CC21: ;
    if (CMP_EQ(MEM32(ecx + 0x1F8), 3)) { sub_0007CC3A(); return; } /* je: equal / zero */

loc_0007CC2A: ;
    MEM32(ecx + 0x1F8) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CC40
 * Original: 0x0007CC40 - 0x0007CC8A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CC40: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_0007CC8A(); return; } /* je: equal / zero */

loc_0007CC49: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0007CC8A(); return; } /* je: equal / zero */

loc_0007CC57: ;
    eax = MEM32(ecx + 0xA0);
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x24)) goto loc_0007CC71; /* je: equal / zero */

loc_0007CC67: ;
    if (CMP_EQ(eax, 0x52)) goto loc_0007CC71; /* je: equal / zero */

loc_0007CC6C: ;
    if (CMP_NE(eax, 0x74)) { sub_0007CC8A(); return; } /* jne: not equal / not zero */

loc_0007CC71: ;
    if (CMP_EQ(MEM32(ecx + 0x1F8), 3)) { sub_0007CC8A(); return; } /* je: equal / zero */

loc_0007CC7A: ;
    MEM32(ecx + 0x1F8) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CC90
 * Original: 0x0007CC90 - 0x0007CDFD (365 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CC90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_A(eax, 3)) goto loc_0007CDF0; /* ja: above (unsigned >) */

loc_0007CCA9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x7CE00); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0007CCB0u) goto loc_0007CCB0;
    if (_jt == 0x0007CD45u) goto loc_0007CD45;
    if (_jt == 0x0007CD8Eu) goto loc_0007CD8E;
    if (_jt == 0x0007CDAEu) goto loc_0007CDAE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007CCB0: ;
    if (CMP_NE(MEM32(edi + 0xA4), 0x77)) goto loc_0007CDF0; /* jne: not equal / not zero */

loc_0007CCBD: ;
    eax = MEM32(edi + 0x568);
    (void)0; /* cmp MEM16(eax + 0x2DE), 0 - flags set for next jcc */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    if (CMP_EQ(MEM16(eax + 0x2DE), 0)) goto loc_0007CD0F; /* je: equal / zero */

loc_0007CCD6: ;
    eax = 0x5E7264;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007CCE0: ;
    PUSH32(esp, eax);
    eax = 0x5E7264;

loc_0007CCE6: ;
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00086C60(); /* call 0x00086C60 */

loc_0007CCF2: ;
    eax = MEM32(esi + 0xB0);
    esp = esp + 0x14;
    eax++;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0); sub_0007CBF0(); /* call 0x0007CBF0 */

loc_0007CD09: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007CD0F: ;
    eax = 0x5E7248;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007CD19: ;
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 0x5E7248;
    PUSH32(esp, 0); sub_00086C60(); /* call 0x00086C60 */

loc_0007CD2B: ;
    esp = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0xB0) = 3;
    PUSH32(esp, 0); sub_0007CBF0(); /* call 0x0007CBF0 */

loc_0007CD3F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007CD45: ;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0007CDF0; /* je: equal / zero */

loc_0007CD55: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007CD5F: ;
    if (TEST_Z(eax, eax)) goto loc_0007CDF0; /* je: equal / zero */

loc_0007CD67: ;
    eax = ZX16(MEM16(eax + 0x1D8));
    if (TEST_Z(eax, eax)) goto loc_0007CDF0; /* je: equal / zero */

loc_0007CD72: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    eax = 0x5E7228;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007CD83: ;
    PUSH32(esp, eax);
    eax = 0x5E7228;
    goto loc_0007CCE6;

loc_0007CD8E: ;
    if (CMP_EQ(MEM32(edi + 0xA4), 0x77)) goto loc_0007CDF0; /* je: equal / zero */

loc_0007CD97: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0xB0) = 0;
    PUSH32(esp, 0); sub_0007CBF0(); /* call 0x0007CBF0 */

loc_0007CDA8: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007CDAE: ;
    edx = MEM32(edi + 0x568);
    if (CMP_EQ(MEM16(edx + 0x2DE), 0)) goto loc_0007CDF0; /* je: equal / zero */

loc_0007CDBE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = 0x5E7208;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007CDD1: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    eax = 0x5E7208;
    PUSH32(esp, 0); sub_00086C60(); /* call 0x00086C60 */

loc_0007CDE3: ;
    MEM32(esi + 0xB0) = 0;
    esp = esp + 0x14;

loc_0007CDF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0007CBF0(); /* call 0x0007CBF0 */

loc_0007CDF7: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007CE50
 * Original: 0x0007CE50 - 0x0007CE64 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007CE50: ;
    ecx = MEM32(esp + 8);
    if (CMP_NE(MEM16(ecx + 0x3AE), 0)) { sub_0007CE64(); return; } /* jne: not equal / not zero */

loc_0007CE5E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CEA0
 * Original: 0x0007CEA0 - 0x0007CECF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CEA0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x847204));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0007CECF(); return; } /* je: equal / zero */

loc_0007CEB4: ;
    MEM32(0x81BE48) = 0;
    POP32(esp, ebp);
    MEM8(ebx) = 1;
    MEM32(0x84B828) = 0x822F0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D060
 * Original: 0x0007D060 - 0x0007D0B7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D060(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007D060: ;
    ecx = MEM32(eax + 0xD0);
    if (TEST_Z(ecx, ecx)) { sub_0007D0B7(); return; } /* je: equal / zero */

loc_0007D06A: ;
    eax = MEM32(eax + 0xD4);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0007D078; /* jne: not equal / not zero */

loc_0007D075: ;
    eax = MEM32(ecx + 8);

loc_0007D078: ;
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = eax + ecx + 0x14;
    if (TEST_Z(eax, eax)) { sub_0007D0B7(); return; } /* je: equal / zero */

loc_0007D089: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(edx + 0x568);
    if (CMP_NE(MEM32(eax + 0x300), ecx)) goto loc_0007D0A3; /* jne: not equal / not zero */

loc_0007D09A: ;
    if (CMP_EQ(MEM32(eax + 0x1F8), 2)) goto loc_0007D0B4; /* je: equal / zero */

loc_0007D0A3: ;
    if (CMP_NE(MEM32(eax + 0x304), ecx)) { sub_0007D0B7(); return; } /* jne: not equal / not zero */

loc_0007D0AB: ;
    if (CMP_NE(MEM32(eax + 0x1F8), 3)) { sub_0007D0B7(); return; } /* jne: not equal / not zero */

loc_0007D0B4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D0C0
 * Original: 0x0007D0C0 - 0x0007DA29 (2409 bytes, 618 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D0C0(void)
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

loc_0007D0C0: ;
    esp = esp - 0x21C;
    edx = MEM32(esp + 0x220);
    eax = ZX16(MEM16(edx + 2));
    PUSH32(esp, esi);
    eax = eax + 0xFFFFFE01u;
    (void)0; /* cmp eax, 0x88 - flags set for next jcc */
    esi = 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0xA) = 0;
    MEM32(esp + 0x14) = 0;
    MEM8(esp + 0xB) = 0;
    if (CMP_A(eax, 0x88)) { sub_0007DA29(); return; } /* ja: above (unsigned >) */

loc_0007D0FE: ;
    edi = ZX8(MEM8(eax + 0x7DAB8));
    ecx = MEM32(esp + 0x22C);
    eax = MEM32(0x7FA1F8);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edi * 4 + 0x7DA34)); return; /* indirect tail jmp */

    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0007D13B; /* jne: not equal / not zero */

loc_0007D121: ;
    eax = MEM32(esp + 0x22C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00079050(); /* call 0x00079050 */

loc_0007D12F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

loc_0007D13B: ;
    if (CMP_NE(eax, 0x46)) goto loc_0007D154; /* jne: not equal / not zero */

loc_0007D140: ;
    edi = 0x5E9E3C;
    esi = 0x6A4030;
    eax = 0x140;
    goto loc_0007D506;

loc_0007D154: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007D176; /* jne: not equal / not zero */

loc_0007D15D: ;
    edi = 0x5E9E24;
    MEM8(esp + 0xB) = 1;
    esi = 0x6A4030;
    eax = 0x140;
    goto loc_0007D506;

loc_0007D176: ;
    edi = 0x5E9E10;
    esi = 0x6A4030;
    eax = 0x140;
    goto loc_0007D506;

    edi = 0x5E9DFC;
    esi = 0x6A4170;
    eax = 0x60;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9DE4;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D1AD; /* je: equal / zero */

loc_0007D1A8: ;
    edi = 0x5E9DD0;

loc_0007D1AD: ;
    esi = 0x6A41D0;
    eax = 0x1C0;
    goto loc_0007D506;

    if (CMP_NE(eax, 0x46)) goto loc_0007D1EB; /* jne: not equal / not zero */

loc_0007D1C1: ;
    ecx = MEM32(ecx + 0x568);
    edx = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(edx + 8), esi)) goto loc_0007D1EB; /* jne: not equal / not zero */

loc_0007D1D2: ;
    edi = 0x5E9DB4;
    MEM8(esp + 0xA) = 0;
    esi = 0x6A4B30;
    eax = 0xC0;
    goto loc_0007D506;

loc_0007D1EB: ;
    edi = 0x5E9DA0;
    MEM8(esp + 0xA) = 1;
    esi = 0x6A4AD0;
    eax = 0x60;
    goto loc_0007D506;

    edi = 0x5E9D8C;
    esi = 0x6A4AD0;
    eax = 0x60;
    MEM8(esp + 0xA) = 1;
    goto loc_0007D506;

    edi = 0x5E9D74;
    esi = 0x6A4AD0;
    eax = 0x60;
    MEM8(esp + 0xA) = 1;
    goto loc_0007D506;

    edi = 0x5E9D5C;
    esi = 0x6A4AD0;
    eax = 0x60;
    MEM8(esp + 0xA) = 1;
    goto loc_0007D506;

    edi = 0x5E9D48;
    esi = 0x6A4AD0;
    eax = 0x60;
    MEM8(esp + 0xA) = 1;
    goto loc_0007D506;

    edi = 0x5E9D30;
    esi = 0x6A4AD0;
    eax = 0x60;
    MEM8(esp + 0xA) = 1;
    goto loc_0007D506;

    edi = 0x5E9D20;
    esi = 0x6A4BF0;
    eax = 0x80;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9D04;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D2A4; /* je: equal / zero */

loc_0007D29F: ;
    edi = 0x5E9CF0;

loc_0007D2A4: ;
    esi = 0x6A4DE0;
    eax = 0x170;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9CD0;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D2C2; /* je: equal / zero */

loc_0007D2BD: ;
    edi = 0x5E9CF0;

loc_0007D2C2: ;
    esi = 0x6A4C70;
    eax = 0x170;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9CA8;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D2E0; /* je: equal / zero */

loc_0007D2DB: ;
    edi = 0x5E9C8C;

loc_0007D2E0: ;
    esi = 0x6A4F50;
    eax = 0xF0;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9C64;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D2FE; /* je: equal / zero */

loc_0007D2F9: ;
    edi = 0x5E9C44;

loc_0007D2FE: ;
    esi = 0x6A5040;
    eax = 0xF0;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9C24;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D31C; /* je: equal / zero */

loc_0007D317: ;
    edi = 0x5E9C0C;

loc_0007D31C: ;
    esi = 0x6A5130;
    eax = 0x160;
    goto loc_0007D506;

    edi = 0x5E9BF4;
    esi = 0x6A5290;
    eax = 0x60;
    goto loc_0007D506;

    edi = 0x5E9BE0;
    esi = 0x6A52F0;
    eax = 0x80;
    goto loc_0007D506;

    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    edi = 0x5E9BBC;
    if (CMP_EQ(eax, 0x46)) goto loc_0007D362; /* je: equal / zero */

loc_0007D35D: ;
    edi = 0x5E9BA0;

loc_0007D362: ;
    esi = 0x6A5370;
    eax = 0x100;
    goto loc_0007D506;

    edi = 0x5E9B84;
    esi = 0x6A5470;
    eax = 0x60;
    goto loc_0007D506;

    edi = 0x5E9B64;
    esi = 0x6A54D0;
    eax = 0x60;
    goto loc_0007D506;

    eax = MEM32(ecx + 0x568);
    ecx = MEM32(eax + 0x3F4);
    (void)0; /* cmp MEM32(ecx + 0x14), esi - flags set for next jcc */
    eax = 0x60;
    if (CMP_NE(MEM32(ecx + 0x14), esi)) goto loc_0007D3BE; /* jne: not equal / not zero */

loc_0007D3AF: ;
    edi = 0x5E9B44;
    esi = 0x6A5590;
    goto loc_0007D506;

loc_0007D3BE: ;
    edi = 0x5E9B24;
    esi = 0x6A5530;
    goto loc_0007D506;

    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x3F4);
    eax = MEM32(eax + 0x14);
    if (CMP_NE(eax, 2)) goto loc_0007D3F8; /* jne: not equal / not zero */

loc_0007D3E1: ;
    esi = 0x6A55F0;
    edi = 0x5E9B0C;
    MEM32(esp + 0x14) = 0x6A57B0;
    goto loc_0007D501;

loc_0007D3F8: ;
    if (CMP_NE(eax, 3)) goto loc_0007D414; /* jne: not equal / not zero */

loc_0007D3FD: ;
    esi = 0x6A5660;
    edi = 0x5E9AF0;
    MEM32(esp + 0x14) = 0x6A57B0;
    goto loc_0007D501;

loc_0007D414: ;
    esi = 0x6A56D0;
    edi = 0x5E9AD0;
    MEM32(esp + 0x14) = 0x6A57B0;
    goto loc_0007D501;

    edi = 0x5E9AB8;
    esi = 0x6A5740;
    MEM32(esp + 0x14) = 0x6A57C8;
    goto loc_0007D501;

    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0007D457; /* jne: not equal / not zero */

loc_0007D44B: ;
    if (CMP_EQ(MEM32(ecx + 0xA4), 0x8AC)) goto loc_0007D477; /* je: equal / zero */

loc_0007D457: ;
    edi = 0x5E9AA8;
    esi = 0x6A4390;
    eax = 0xA0;
    goto loc_0007D506;

    if (CMP_NE(MEM32(ecx + 0xA4), 0x84A)) goto loc_0007D48A; /* jne: not equal / not zero */

loc_0007D477: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00079050(); /* call 0x00079050 */

loc_0007D47E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

loc_0007D48A: ;
    edi = 0x5E9A98;
    esi = 0x6A4430;
    goto loc_0007D4FC;

    edi = 0x5E9A88;
    esi = 0x6A44A0;
    goto loc_0007D4FC;

    edi = 0x5E9A6C;
    esi = 0x6A4810;
    eax = 0x210;
    goto loc_0007D506;

    edi = 0x5E9A58;
    esi = 0x6A4A20;
    eax = 0xB0;
    goto loc_0007D506;

    edi = 0x5E9A48;
    esi = 0x6A4510;
    goto loc_0007D4FC;

    edi = 0x5E9A48;
    esi = 0x6A4580;
    goto loc_0007D4FC;

    edi = 0x5E9A34;
    esi = 0x6A45F0;
    eax = 0x1B0;
    MEM8(esp + 0xB) = 1;
    goto loc_0007D506;

    edi = 0x5E9A20;
    esi = 0x6A47A0;

loc_0007D4FC: ;
    MEM8(esp + 0xB) = 1;

loc_0007D501: ;
    eax = 0x70;

loc_0007D506: ;
    edx = MEM32(esp + 0x22C);
    PUSH32(esp, ebx);
    eax = eax >> 4;
    PUSH32(esp, ebp);
    ebp = eax;
    eax = MEM32(esp + 0x230);
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_0007D060(); /* call 0x0007D060 */

loc_0007D526: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007D533; /* je: equal / zero */

loc_0007D52A: ;
    ebx = 1;
    MEM32(esp + 0x14) = ebx;

loc_0007D533: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0007D542; /* je: equal / zero */

loc_0007D53D: ;
    if (CMP_NE(eax, 0x46)) goto loc_0007D56E; /* jne: not equal / not zero */

loc_0007D542: ;
    ecx = MEM32(esp + 0x230);
    eax = ZX16(MEM16(ecx + 2));
    eax = eax + 0xFFFFFDAEu;
    if (CMP_A(eax, 0x10)) goto loc_0007D565; /* ja: above (unsigned >) */

loc_0007D557: ;
    edx = ZX8(MEM8(eax + 0x7DB4C));
    { uint32_t _jt = MEM32(edx * 4 + 0x7DB44); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0007D565u) goto loc_0007D565;
    if (_jt == 0x0007D56Eu) goto loc_0007D56E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007D565: ;
    ebx = 1;
    MEM32(esp + 0x14) = ebx;

loc_0007D56E: ;
    eax = MEM32(esp + 0x234);
    eax = MEM32(eax + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_0007D590; /* je: equal / zero */

loc_0007D57F: ;
    eax = eax + 4;
    edx = 3;
    PUSH32(esp, 0); sub_00036930(); /* call 0x00036930 */

loc_0007D58C: ;
    if (TEST_NZ(eax, eax)) goto loc_0007D59A; /* jne: not equal / not zero */

loc_0007D590: ;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    goto loc_0007D5B1;

loc_0007D59A: ;
    ecx = MEM32(esp + 0x234);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x45C);
    MEM32(esp + 0x18) = eax;

loc_0007D5B1: ;
    eax = 2;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(ebp, eax)) goto loc_0007D5F8; /* jle: less or equal (signed <=) */

loc_0007D5C2: ;
    ecx = MEM32(esp + 0x234);
    ebx = MEM32(ecx + 0xA4);
    ecx = esi + 0x20;

loc_0007D5D2: ;
    edx = MEM32(ecx);
    if (CMP_EQ(ebx, edx)) goto loc_0007D5F0; /* je: equal / zero */

loc_0007D5D8: ;
    if (CMP_EQ(MEM32(esp + 0x18), edx)) goto loc_0007D5E8; /* je: equal / zero */

loc_0007D5DE: ;
    eax++;
    ecx = ecx + 0x10;
    if (CMP_L(eax, ebp)) goto loc_0007D5D2; /* jl: less (signed <) */

loc_0007D5E6: ;
    goto loc_0007D5F4;

loc_0007D5E8: ;
    MEM32(esp + 0x24) = 3;

loc_0007D5F0: ;
    MEM32(esp + 0x14) = eax;

loc_0007D5F4: ;
    ebx = MEM32(esp + 0x14);

loc_0007D5F8: ;
    if (CMP_GE(ebx, 2)) goto loc_0007D605; /* jge: greater or equal (signed >=) */

loc_0007D5FD: ;
    MEM32(esp + 0x20) = 0;

loc_0007D605: ;
    if (CMP_NE(ebx, 2)) goto loc_0007D624; /* jne: not equal / not zero */

loc_0007D607: ;
    edx = MEM32(esp + 0x234);
    eax = MEM32(edx + 0x568);
    if (CMP_NE(MEM32(eax + 0x1F8), 2)) goto loc_0007D64D; /* jne: not equal / not zero */

loc_0007D61D: ;
    ebx = 3;
    goto loc_0007D649;

loc_0007D624: ;
    if (CMP_NE(ebx, 4)) goto loc_0007D64D; /* jne: not equal / not zero */

loc_0007D629: ;
    ecx = MEM32(esp + 0x234);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0007D64D; /* je: equal / zero */

loc_0007D63A: ;
    ecx = MEM32(eax + 0x1F8);
    if (TEST_NZ(ecx, ecx)) goto loc_0007D64D; /* jne: not equal / not zero */

loc_0007D644: ;
    ebx = 5;

loc_0007D649: ;
    MEM32(esp + 0x14) = ebx;

loc_0007D64D: ;
    edx = ebx;
    edx = edx << 4;
    eax = MEM32(edx + esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = edx + esi;
    MEM32(esp + 0x28) = ebp;
    if (TEST_NZ(eax, eax)) goto loc_0007D6A7; /* jne: not equal / not zero */

loc_0007D661: ;
    eax = MEM32(esp + 0x234);
    edx = MEM32(eax + 0x4B0);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = ecx;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0007D68A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0007D69E; /* je: equal / zero */

loc_0007D691: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0007D69E; /* je: equal / zero */

loc_0007D699: ;
    eax = MEM32(eax + 8);
    goto loc_0007D6A0;

loc_0007D69E: ;
    eax = 0; /* xor self */

loc_0007D6A0: ;
    ebx = MEM32(esp + 0x14);
    MEM32(ebp + 0xC) = eax;

loc_0007D6A7: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    ecx = MEM32(esp + 0x230);
    xmm1 = 0.0f; /* xorps self = zero */
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(esp + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0007D73F; /* je: equal / zero */

loc_0007D6C7: ;
    edx = ecx;
    eax = MEM32(edx + 0xC4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0007D73F; /* je: equal / zero */

loc_0007D6D5: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007D6DF: ;
    if (TEST_Z(eax, eax)) goto loc_0007D73F; /* je: equal / zero */

loc_0007D6E3: ;
    esi = MEM32(eax + 0xC);
    if (TEST_Z(esi, esi)) goto loc_0007D73F; /* je: equal / zero */

loc_0007D6EA: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0007D73F; /* je: equal / zero */

loc_0007D6F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_0007D6FB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0007D71A; /* je: equal / zero */

loc_0007D702: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_0007D713: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0007D72D; /* je: equal / zero */

loc_0007D71A: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + 0xC;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) goto loc_0007D6F4; /* jne: not equal / not zero */

loc_0007D72B: ;
    goto loc_0007D73C;

loc_0007D72D: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(edx + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0007D73C: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_0007D73F: ;
    ecx = MEM32(esp + 0x230);
    eax = MEM32(ecx + 0xB4);
    esi = ebx + 1;
    if (CMP_NE(eax, esi)) goto loc_0007D779; /* jne: not equal / not zero */

loc_0007D753: ;
    eax = MEM32(ecx + 0xC4);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM8(eax + 9), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM8(eax + 9), LO8(edx))) ? 1 : 0); /* setne */
    if (CMP_NE(edx, MEM32(esp + 0x20))) goto loc_0007D779; /* jne: not equal / not zero */

loc_0007D767: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0007D7CE; /* jnp: not parity */

loc_0007D779: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x5AC810);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0007D78D: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x28);
    esp = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0007D7A8: ;
    edi = MEM32(esp + 0x23C);
    ecx = MEM32(edi + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00086C60(); /* call 0x00086C60 */

loc_0007D7C0: ;
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    MEM32(edi + 0xB4) = esi;
    ecx = edi;

loc_0007D7CE: ;
    if (TEST_Z(ebx, ebx)) goto loc_0007D8C8; /* je: equal / zero */

loc_0007D7D6: ;
    edx = MEM32(ecx + 0xC4);
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0007D83B; /* je: equal / zero */

loc_0007D7E2: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007D7EC: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0007D83B; /* je: equal / zero */

loc_0007D7F2: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = MEMF(eax); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(ecx + 0xE4) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0007D81A; /* jp: parity */

loc_0007D810: ;
    MEMF(ecx + 0xE8) = xmm1; /* movss */
    goto loc_0007D83B;

loc_0007D81A: ;
    /* comiss xmm1, MEMF(ecx + 0xE8) - sets EFLAGS */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if ((xmm1 <= MEMF(ecx + 0xE8))) goto loc_0007D833; /* jbe: below or equal (unsigned <=) */

loc_0007D82D: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0007D835;

loc_0007D833: ;
    fp_top() = fabs(fp_top()); /* fabs */

loc_0007D835: ;
    MEMF(ecx + 0xE8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0007D83B: ;
    ecx = MEM32(esp + 0x234);
    eax = MEM32(ecx + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_0007D866; /* je: equal / zero */

loc_0007D84C: ;
    edx = MEM32(esp + 0x24);
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007D858: ;
    if (TEST_Z(eax, eax)) goto loc_0007D866; /* je: equal / zero */

loc_0007D85C: ;
    xmm2 = MEMF(eax + 0xDC); /* movss */
    goto loc_0007D869;

loc_0007D866: ;
    xmm2 = xmm1; /* movaps */

loc_0007D869: ;
    edx = MEM32(esp + 0x230);
    eax = MEM32(edx + 0xC4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0007D8C8; /* je: equal / zero */

loc_0007D87C: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0007D886: ;
    if (TEST_Z(eax, eax)) goto loc_0007D8C8; /* je: equal / zero */

loc_0007D88A: ;
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm2; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_0007D8B8; /* ja: above (unsigned >) */

loc_0007D8AE: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    goto loc_0007D8C0;

loc_0007D8B8: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0007D8C0: ;
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_0007D8C8: ;
    esi = MEM32(esp + 0x234);
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 0xFF;
    if (TEST_Z(eax, eax)) goto loc_0007D917; /* je: equal / zero */

loc_0007D8DE: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0007D900; /* je: equal / zero */

loc_0007D8E8: ;
    edx = MEM32(eax + 0x280);
    SET_LO8(eax, MEM8(edx + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007D900; /* je: equal / zero */

loc_0007D8F5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_0007D8FC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007D90A; /* je: equal / zero */

loc_0007D900: ;
    eax = MEM32(esi + 0x3D8);
    if (TEST_Z(eax, eax)) goto loc_0007D917; /* je: equal / zero */

loc_0007D90A: ;
    ebp = MEM32(esp + 0x230);
    MEM8(ebp + 6) = 0;
    goto loc_0007D921;

loc_0007D917: ;
    ebp = MEM32(esp + 0x230);
    MEM8(ebp + 6) = LO8(ebx);

loc_0007D921: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007D940; /* je: equal / zero */

loc_0007D929: ;
    edx = MEM32(esp + 0x234);
    eax = ebp;
    PUSH32(esp, 0); sub_0007D060(); /* call 0x0007D060 */

loc_0007D937: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    eax = eax & ebx;
    MEM8(ebp + 6) = LO8(eax);

loc_0007D940: ;
    eax = MEM32(esp + 0x234);
    if (CMP_NE(MEM16(eax + 0x3AE), 0)) goto loc_0007D9B7; /* jne: not equal / not zero */

loc_0007D951: ;
    PUSH32(esp, 0x5E9A18);
    esi = eax;
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_0007D95D: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007D9B7; /* jne: not equal / not zero */

loc_0007D964: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx + 8);
    edi = 0x5D58BC;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0007D9B3; /* je: equal / zero */

loc_0007D97D: ;
    edi = 0x5D58C4;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0007D9B3; /* je: equal / zero */

loc_0007D98F: ;
    edi = 0x5D58D8;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0007D9B3; /* je: equal / zero */

loc_0007D9A1: ;
    esi = eax;
    edi = 0x5D5828;
    ecx = 5;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0007D9B7; /* jne: not equal / not zero */

loc_0007D9B3: ;
    MEM8(ebp + 6) = 0;

loc_0007D9B7: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 0x234);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007DA13; /* je: equal / zero */

loc_0007D9C6: ;
    eax = MEM32(edx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0007DA13; /* je: equal / zero */

loc_0007D9D0: ;
    SET_LO16(ecx, MEM16(ebp + 2));
    if (CMP_EQ(LO16(ecx), 0x280)) goto loc_0007DA05; /* je: equal / zero */

loc_0007D9DB: ;
    if (CMP_EQ(LO16(ecx), 0x281)) goto loc_0007DA05; /* je: equal / zero */

loc_0007D9E2: ;
    if (TEST_NZ(MEM8(eax + 0x97), 0x7F)) goto loc_0007DA13; /* jne: not equal / not zero */

loc_0007D9EB: ;
    ecx = MEM32(eax + 0xAC);
    if (TEST_NZ(ecx, ecx)) goto loc_0007DA13; /* jne: not equal / not zero */

loc_0007D9F5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

loc_0007DA05: ;
    SET_LO8(eax, MEM8(edx + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007DA13; /* je: equal / zero */

loc_0007DA0F: ;
    MEM8(ebp + 6) = 0;

loc_0007DA13: ;
    ecx = MEM32(edx + 0x64);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x42 - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(ecx, 0x42)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0007DC30
 * Original: 0x0007DC30 - 0x0007DC86 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DC30(void)
{
    uint32_t ebp;
    float xmm0;

loc_0007DC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x80;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0xD8);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x7A);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0007DC60: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0007DC72: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edx;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0007DC82: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DC90
 * Original: 0x0007DC90 - 0x0007DE1C (396 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007DC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0007DCCD; /* jne: not equal / not zero */

loc_0007DCA1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5BE);
    PUSH32(esp, 0x5E999C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0007DCB4: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0007DCC7; /* je: equal / zero */

loc_0007DCBB: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;

loc_0007DCC7: ;
    MEM32(esi + 0xD8) = eax;

loc_0007DCCD: ;
    edx = MEM32(esi + 0xD0);
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = MEM32(esi + 0xD8);
    edi = MEM32(esp + 0x14);
    eax = eax + edx + 0x14;
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0007DE0E; /* je: equal / zero */

loc_0007DCF7: ;
    edx = MEM32(edi + 0x568);
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0xA0);
    (void)0; /* cmp ebp, MEM32(eax + 0x14) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(ebp, MEM32(eax + 0x14))) goto loc_0007DD1C; /* jne: not equal / not zero */

loc_0007DD0D: ;
    xmm0 = MEMF(edx + 0x30C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0007DD1C; /* jbe: below or equal (unsigned <=) */

loc_0007DD1A: ;
    SET_LO8(ebx, 1);

loc_0007DD1C: ;
    (void)0; /* cmp MEM16(edi + 0x3AE), 0 - flags set for next jcc */
    xmm3 = MEMF(0x7FA21C); /* movss */
    if (CMP_EQ(MEM16(edi + 0x3AE), 0)) goto loc_0007DD55; /* je: equal / zero */

loc_0007DD2E: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007DD55; /* jne: not equal / not zero */

loc_0007DD38: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0007DD55; /* je: equal / zero */

loc_0007DD3C: ;
    xmm0 = MEMF(0x64AE40); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    MEM32(ecx + 8) = 1;
    goto loc_0007DDE3;

loc_0007DD55: ;
    eax = MEM32(ecx + 8);
    if (CMP_NE(eax, 1)) goto loc_0007DD8E; /* jne: not equal / not zero */

loc_0007DD5D: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0007DDE3; /* jbe: below or equal (unsigned <=) */

loc_0007DD67: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * MEMF(0x64AAD4); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(ecx + 4) = xmm0; /* movss */
    if ((xmm2 < xmm0)) goto loc_0007DDE3; /* jb: below (unsigned <) */

loc_0007DD80: ;
    MEMF(ecx + 4) = xmm2; /* movss */
    MEM32(ecx + 8) = 2;
    goto loc_0007DDE3;

loc_0007DD8E: ;
    if (CMP_NE(eax, 2)) goto loc_0007DDE3; /* jne: not equal / not zero */

loc_0007DD93: ;
    xmm4 = MEMF(ecx); /* movss */
    xmm0 = MEMF(0x649084); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm1 = xmm2; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0007DDB4; /* ja: above (unsigned >) */

loc_0007DDA7: ;
    xmm0 = MEMF(0x64B124); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0007DDB7; /* jbe: below or equal (unsigned <=) */

loc_0007DDB4: ;
    xmm1 = xmm0; /* movaps */

loc_0007DDB7: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0007DDE3; /* jb: below (unsigned <) */

loc_0007DDC0: ;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * MEMF(0x648D88); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0007DDE3; /* jb: below (unsigned <) */

loc_0007DDD8: ;
    MEMF(ecx) = xmm1; /* movss */
    MEM32(ecx + 8) = 0;

loc_0007DDE3: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0007DE0E; /* jbe: below or equal (unsigned <=) */

loc_0007DDED: ;
    xmm1 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0007DE0E; /* jbe: below or equal (unsigned <=) */

loc_0007DE06: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ecx) = xmm0; /* movss */

loc_0007DE0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007DE15: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DE20
 * Original: 0x0007DE20 - 0x0007DF96 (374 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007DE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xD8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0007DE5D; /* jne: not equal / not zero */

loc_0007DE31: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x647);
    PUSH32(esp, 0x5E999C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0007DE44: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0007DE57; /* je: equal / zero */

loc_0007DE4B: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;

loc_0007DE57: ;
    MEM32(esi + 0xD8) = eax;

loc_0007DE5D: ;
    edx = MEM32(esi + 0xD0);
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = MEM32(esi + 0xD8);
    edi = MEM32(esp + 0x14);
    eax = eax + edx + 0x14;
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0007DF88; /* je: equal / zero */

loc_0007DE87: ;
    edx = MEM32(edi + 0x568);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0xA0);
    (void)0; /* cmp ebp, MEM32(eax + 0x14) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(ebp, MEM32(eax + 0x14))) goto loc_0007DEAC; /* jne: not equal / not zero */

loc_0007DE9D: ;
    xmm0 = MEMF(edx + 0x30C); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0007DEAC; /* jbe: below or equal (unsigned <=) */

loc_0007DEAA: ;
    SET_LO8(ebx, 1);

loc_0007DEAC: ;
    (void)0; /* cmp MEM16(edi + 0x3AE), 0 - flags set for next jcc */
    xmm3 = MEMF(0x648D30); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    if (CMP_EQ(MEM16(edi + 0x3AE), 0)) goto loc_0007DEE3; /* je: equal / zero */

loc_0007DEC6: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0007DEE3; /* je: equal / zero */

loc_0007DECA: ;
    xmm0 = MEMF(0x64B120); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    MEM32(ecx + 8) = 1;
    goto loc_0007DF65;

loc_0007DEE3: ;
    eax = MEM32(ecx + 8);
    if (CMP_NE(eax, 1)) goto loc_0007DF18; /* jne: not equal / not zero */

loc_0007DEEB: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0007DF65; /* jbe: below or equal (unsigned <=) */

loc_0007DEF5: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEMF(ecx + 4) = xmm0; /* movss */
    if ((xmm4 < xmm0)) goto loc_0007DF65; /* jb: below (unsigned <) */

loc_0007DF0A: ;
    MEMF(ecx + 4) = xmm4; /* movss */
    MEM32(ecx + 8) = 2;
    goto loc_0007DF65;

loc_0007DF18: ;
    if (CMP_NE(eax, 2)) goto loc_0007DF65; /* jne: not equal / not zero */

loc_0007DF1D: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(0x64B118); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x6491F4); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0007DF65; /* jb: below (unsigned <) */

loc_0007DF42: ;
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * MEMF(0x648DE0); /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0007DF65; /* jb: below (unsigned <) */

loc_0007DF5A: ;
    MEMF(ecx) = xmm1; /* movss */
    MEM32(ecx + 8) = 0;

loc_0007DF65: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0007DF88; /* jbe: below or equal (unsigned <=) */

loc_0007DF6F: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_0007DF88; /* jbe: below or equal (unsigned <=) */

loc_0007DF80: ;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(ecx) = xmm0; /* movss */

loc_0007DF88: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007DF8F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DFA0
 * Original: 0x0007DFA0 - 0x0007E0BA (282 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DFA0(void)
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

loc_0007DFA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0xD0);
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xD8);
    PUSH32(esp, edi);
    edi = eax + ecx + 0x14;
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(edi, edi)) goto loc_0007E0A7; /* je: equal / zero */

loc_0007DFCE: ;
    if (TEST_NZ(esi, esi)) goto loc_0007E009; /* jne: not equal / not zero */

loc_0007DFD2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x6D1);
    PUSH32(esp, 0x5E999C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0007DFE5: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0007DFFB; /* je: equal / zero */

loc_0007DFEC: ;
    edx = 0; /* xor self */
    ecx = eax;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;

loc_0007DFFB: ;
    MEM32(ebp + 0xD8) = eax;
    edx = MEM32(edi + 0x24);
    esi = eax;
    MEM32(eax + 8) = edx;

loc_0007E009: ;
    edi = MEM32(edi + 0x24);
    (void)0; /* cmp MEM32(esi + 8), edi - flags set for next jcc */
    ecx = 1;
    if (CMP_LE(MEM32(esi + 8), edi)) goto loc_0007E018; /* jle: less or equal (signed <=) */

loc_0007E016: ;
    SET_LO8(ebx, LO8(ecx));

loc_0007E018: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = edi;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_0007E040; /* je: equal / zero */

loc_0007E029: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0007E040; /* je: equal / zero */

loc_0007E02D: ;
    eax = MEM32(esi + 4);
    eax++;
    edx = 0; /* xor self */
    edi = 6;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 4) = edx;

loc_0007E040: ;
    if (CMP_NE(MEM32(esi + 0xC), ecx)) goto loc_0007E0A7; /* jne: not equal / not zero */

loc_0007E045: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * MEMF(0x64B11C); /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_0007E072; /* jb: below (unsigned <) */

loc_0007E06A: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi) = xmm0; /* movss */

loc_0007E072: ;
    fp_push(MEMF(esi)); /* fld float */
    edi = MEM32(esi + 4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0007E082: ;
    if (CMP_NE(eax, edi)) goto loc_0007E0A7; /* jne: not equal / not zero */

loc_0007E086: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_0007E098; /* jge: greater or equal (signed >=) */

loc_0007E092: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0007E098: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0xC) = 0;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */

loc_0007E0A7: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007E0B2: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0007E0C0
 * Original: 0x0007E0C0 - 0x0007E193 (211 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E0C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x568);
    ebx = MEM32(edx + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(edi + 0xD0);
    ecx = MEM32(edi + 0xD4);
    eax = ebp;
    PUSH32(esp, 0); sub_0032F4C0(); /* call 0x0032F4C0 */

loc_0007E0EE: ;
    ecx = MEM32(esi + 0x568);
    (void)0; /* cmp MEM32(ecx + 0xA0), eax - flags set for next jcc */
    ebx = 1;
    if (CMP_NE(MEM32(ecx + 0xA0), eax)) goto loc_0007E127; /* jne: not equal / not zero */

loc_0007E101: ;
    eax = MEM32(edi + 0xB0);
    if (TEST_NZ(eax, eax)) goto loc_0007E127; /* jne: not equal / not zero */

loc_0007E10B: ;
    ecx = ebp;
    eax = esi;
    PUSH32(esp, 0); sub_00312060(); /* call 0x00312060 */

loc_0007E114: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007E127; /* je: equal / zero */

loc_0007E118: ;
    PUSH32(esp, edi);
    MEM32(edi + 0xB0) = ebx;
    PUSH32(esp, 0); sub_0019CA10(); /* call 0x0019CA10 */

loc_0007E124: ;
    esp = esp + 4;

loc_0007E127: ;
    if (CMP_NE(MEM32(edi + 0xB0), ebx)) goto loc_0007E181; /* jne: not equal / not zero */

loc_0007E12F: ;
    SET_LO8(eax, MEM8(edi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0007E181; /* jne: not equal / not zero */

loc_0007E136: ;
    eax = esp + 0x10;
    MEM32(edi + 0xB0) = 0;
    SET_LO8(edx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x5A);
    PUSH32(esp, eax);
    eax = 0x47;
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0007E15F: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    edx = esp + 0x18;
    PUSH32(esp, 0x5A);
    PUSH32(esp, edx);
    eax = 0x31;
    MEM32(esp + 0x20) = esi;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0007E17E: ;
    esp = esp + 0x10;

loc_0007E181: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007E188: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E1A0
 * Original: 0x0007E1A0 - 0x0007E271 (209 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E1A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0007E1A0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(MEM16(edi + 0x3AE), 0)) goto loc_0007E1B4; /* jne: not equal / not zero */

loc_0007E1B2: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007E1B4: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0007E1E4; /* je: equal / zero */

loc_0007E1BD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007E1E4; /* je: equal / zero */

loc_0007E1C1: ;
    eax = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0007E1D9; /* jne: not equal / not zero */

loc_0007E1D0: ;
    if (CMP_NE(MEM8(eax + 0x365), 0)) goto loc_0007E1E2; /* jne: not equal / not zero */

loc_0007E1D9: ;
    if (CMP_EQ(MEM8(eax + 0x52F), 0)) goto loc_0007E1E4; /* je: equal / zero */

loc_0007E1E2: ;
    SET_LO8(ecx, 1);

loc_0007E1E4: ;
    eax = MEM32(edx + 0xB0);
    if (TEST_NZ(eax, eax)) goto loc_0007E232; /* jne: not equal / not zero */

loc_0007E1EE: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0007E26C; /* je: equal / zero */

loc_0007E1F2: ;
    xmm0 = MEMF(edx + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(edx + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0007E26C; /* jbe: below or equal (unsigned <=) */

loc_0007E20D: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(edx + 0xB0) = 1;
    PUSH32(esp, 0); sub_000D73E0(); /* call 0x000D73E0 */

loc_0007E22A: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0007E232: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0007E26C; /* jne: not equal / not zero */

loc_0007E236: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx + 0xB0) = 0;
    MEMF(edx + 0x50) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(edi + 0x10B));
    PUSH32(esp, 0x1A);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0007E269: ;
    esp = esp + 0x10;

loc_0007E26C: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E280
 * Original: 0x0007E280 - 0x0007E2C7 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E280(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x568);
    ecx = MEM32(edx + 0xA0);
    (void)0; /* cmp ecx, 0x52 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    if (CMP_EQ(ecx, 0x52)) goto loc_0007E2A0; /* je: equal / zero */

loc_0007E299: ;
    if (CMP_EQ(ecx, 0x74)) goto loc_0007E2A0; /* je: equal / zero */

loc_0007E29E: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007E2A0: ;
    if (CMP_EQ(MEM32(edx + 0x2B0), 2)) goto loc_0007E2AB; /* je: equal / zero */

loc_0007E2A9: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007E2AB: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 5);
    ecx = esi;
    edx = edi;
    PUSH32(esp, 0); sub_0007E1A0(); /* call 0x0007E1A0 */

loc_0007E2BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007E2C1: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E2D0
 * Original: 0x0007E2D0 - 0x0007E31D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E2D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E2D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x568);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    if (TEST_Z(ecx, ecx)) goto loc_0007E310; /* je: equal / zero */

loc_0007E2E6: ;
    ecx = MEM32(ecx + 0xA0);
    if (CMP_EQ(ecx, 0x52)) goto loc_0007E302; /* je: equal / zero */

loc_0007E2F1: ;
    if (CMP_EQ(ecx, 0x74)) goto loc_0007E302; /* je: equal / zero */

loc_0007E2F6: ;
    if (CMP_EQ(ecx, 0x3B)) goto loc_0007E302; /* je: equal / zero */

loc_0007E2FB: ;
    if (CMP_EQ(ecx, 0x37)) goto loc_0007E302; /* je: equal / zero */

loc_0007E300: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007E302: ;
    PUSH32(esp, 6);
    ecx = esi;
    edx = edi;
    PUSH32(esp, 0); sub_0007E1A0(); /* call 0x0007E1A0 */

loc_0007E30D: ;
    esp = esp + 4;

loc_0007E310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0007D0C0(); /* call 0x0007D0C0 */

loc_0007E317: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E320
 * Original: 0x0007E320 - 0x0007E361 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E320: ;
    SET_LO8(ecx, MEM8(0x87A1EC));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0007E35B; /* jne: not equal / not zero */

loc_0007E32F: ;
    edx = MEM32(0x87A1EC);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x48C4F0);
    MEM32(0x87A1EC) = edx;
    MEM32(0x87A1E0) = eax;
    MEM32(0x87A1E4) = eax;
    MEM32(0x87A1E8) = eax;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_0007E358: ;
    esp = esp + 4;

loc_0007E35B: ;
    eax = 0x87A1DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E370
 * Original: 0x0007E370 - 0x0007E383 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E370(void)
{

loc_0007E370: ;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_0007E375: ;
    ecx = eax;
    edx = MEM32(ecx + 4);
    eax = esi + esi * 2;
    eax = eax << 4;
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E390
 * Original: 0x0007E390 - 0x0007E3A4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E390(void)
{

loc_0007E390: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_0007E3A0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E3B0
 * Original: 0x0007E3B0 - 0x0007E426 (118 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0007E3B0: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    /* nop */

loc_0007E3C0: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + edi), 0)) goto loc_0007E414; /* je: equal / zero */

loc_0007E3CB: ;
    SET_LO8(eax, MEM8(esi + edx + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_0007E414; /* je: equal / zero */

loc_0007E3D6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0007E3EA; /* je: equal / zero */

loc_0007E3DA: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0007E3EA; /* je: equal / zero */

loc_0007E3DE: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_0007E3EA; /* je: equal / zero */

loc_0007E3E2: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_0007E3EA; /* je: equal / zero */

loc_0007E3E6: ;
    if (CMP_NE(LO8(eax), 9)) goto loc_0007E414; /* jne: not equal / not zero */

loc_0007E3EA: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ZX8(MEM8(esi + edx + 0x16E));
    ecx = ecx & eax;
    if (CMP_EQ(ecx, eax)) goto loc_0007E414; /* je: equal / zero */

loc_0007E401: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_0007E40B: ;
    edx = MEM32(0x84A5F8);
    esp = esp + 8;

loc_0007E414: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_0007E3C0; /* jl: less (signed <) */

loc_0007E423: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
