/**
 * Burnout 3 - Recompiled code chunk 38
 * Functions: 250 (0x00343950 - 0x00352780)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00343950
 * Original: 0x00343950 - 0x00343969 (25 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(edi, edi)) { sub_00343969(); return; } /* jne: not equal / not zero */

loc_0034395B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM8(eax + 0xC) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343A20
 * Original: 0x00343A20 - 0x00343A6C (76 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343A20: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    esi = ebp;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343A34: ;
    PUSH32(esp, 0xB);
    ebx = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343A3D: ;
    esi = MEM32(esp + 0x24);
    edi = eax;
    eax = MEM32(esi + 8);
    esp = esp + 8;
    if (CMP_NE(ebx, eax)) goto loc_00343A58; /* jne: not equal / not zero */

loc_00343A4D: ;
    eax = esi;
    PUSH32(esp, 0); sub_00343B40(); /* call 0x00343B40 */

loc_00343A54: ;
    if (CMP_EQ(edi, eax)) { sub_00343A6C(); return; } /* je: equal / zero */

loc_00343A58: ;
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00343950(); /* call 0x00343950 */

loc_00343A62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00343B40
 * Original: 0x00343B40 - 0x00343B78 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343B40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(eax, esi)) goto loc_00343B72; /* je: equal / zero */

loc_00343B52: ;
    ecx = MEM32(eax + 0x2C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00343B61; /* jle: less or equal (signed <=) */

loc_00343B59: ;
    edx = MEM32(eax + 0x30);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edi = edi + edx;

loc_00343B61: ;
    edx = esp + 8;
    PUSH32(esp, 0); sub_00344230(); /* call 0x00344230 */

loc_00343B6A: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, esi)) goto loc_00343B52; /* jne: not equal / not zero */

loc_00343B72: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343B80
 * Original: 0x00343B80 - 0x00343B92 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343B80(void)
{

loc_00343B80: ;
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_00343B85: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00343870(); /* call 0x00343870 */

loc_00343B8F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343BA0
 * Original: 0x00343BA0 - 0x00343C97 (247 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343BA0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x34;
    MEM32(esp + 0x20) = eax;
    ecx = 0x200;
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 6);
    esi = ebp;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(edi + 0x234) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343BDE: ;
    PUSH32(esp, 6);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343BE9: ;
    ecx = MEM32(edi + 0x234);
    ecx = ecx + 6;
    PUSH32(esp, 0xB);
    esi = ebp;
    MEM32(edi + 0x234) = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343C01: ;
    PUSH32(esp, 0xB);
    esi = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343C0E: ;
    ecx = MEM32(edi + 0x234);
    ecx = ecx + 0xB;
    esp = esp + 0x10;
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    MEM32(edi + 0x234) = ecx;
    if (CMP_L(ebx, 0x20)) goto loc_00343C66; /* jl: less (signed <) */

loc_00343C25: ;
    eax = ebx;
    eax = eax >> 5;
    MEM32(esp + 0x2C) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax << 5;
    ebx = ebx + eax;

loc_00343C35: ;
    PUSH32(esp, 0x20);
    esi = ebp;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343C3E: ;
    PUSH32(esp, 0x20);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343C49: ;
    ecx = MEM32(edi + 0x234);
    eax = MEM32(esp + 0x34);
    ecx = ecx + 0x20;
    esp = esp + 8;
    eax--;
    MEM32(edi + 0x234) = ecx;
    MEM32(esp + 0x2C) = eax;
    if ((eax != 0)) goto loc_00343C35; /* jne: not equal / not zero */

loc_00343C66: ;
    if (TEST_Z(ebx, ebx)) goto loc_00343C8D; /* je: equal / zero */

loc_00343C6A: ;
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00343C72: ;
    PUSH32(esp, ebx);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343C7C: ;
    eax = MEM32(edi + 0x234);
    esp = esp + 8;
    eax = eax + ebx;
    MEM32(edi + 0x234) = eax;

loc_00343C8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343CA0
 * Original: 0x00343CA0 - 0x00343CDC (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343CA0(void)
{

loc_00343CA0: ;
    esp = esp - 0x18;
    eax = ecx + 0x34;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 8) = eax;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    ecx = 0x200;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_00343CCD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00343A20(); /* call 0x00343A20 */

loc_00343CD3: ;
    eax = 1;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00343CE0
 * Original: 0x00343CE0 - 0x00343D76 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343CE0: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x35));
    esp = esp - 0x48;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00343D5A; /* je: equal / zero */

loc_00343CF0: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x14;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00343D14: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00343D1D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    MEM32(esp + 0x34) = 0x5AC69C;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x54) = esi;
    MEM8(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00343D43: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00343D5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x64;
    ebp = eax;
    PUSH32(esp, 0); sub_00344230(); /* call 0x00344230 */

loc_00343D67: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0x35));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00343D76(); return; } /* je: equal / zero */

loc_00343D71: ;
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00343D8F(); return; /* tail jmp 0x00343D8F */

}

/**
 * sub_00344000
 * Original: 0x00344000 - 0x00344083 (131 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344000: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x35));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 8) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034405D; /* jne: not equal / not zero */

loc_0034401B: ;
    goto loc_00344020;

    /* nop */

loc_00344020: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    ebp = esi;
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_00344030; /* jb: below (unsigned <) */

loc_0034402B: ;
    eax = MEM32(esi + 0x10);
    goto loc_00344033;

loc_00344030: ;
    eax = esi + 0x10;

loc_00344033: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00344042: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 8) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00344053; /* je: equal / zero */

loc_0034404F: ;
    esi = MEM32(esi);
    goto loc_00344056;

loc_00344053: ;
    esi = MEM32(esi + 8);

loc_00344056: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00344020; /* je: equal / zero */

loc_0034405D: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00344290(); /* call 0x00344290 */

loc_00344073: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344090
 * Original: 0x00344090 - 0x003440DE (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344090: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003440D9; /* jne: not equal / not zero */

loc_003440A1: ;
    PUSH32(esp, ebx);
    ebx = edi + 4;

loc_003440A5: ;
    (void)0; /* cmp MEM32(edi + 0x18), 0x10 - flags set for next jcc */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) goto loc_003440B5; /* jb: below (unsigned <) */

loc_003440B1: ;
    eax = MEM32(ebx);
    goto loc_003440B7;

loc_003440B5: ;
    eax = ebx;

loc_003440B7: ;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_003440C4: ;
    if (CMP_GE(eax & eax, 0)) goto loc_003440CD; /* jge: greater or equal (signed >=) */

loc_003440C8: ;
    esi = MEM32(esi + 8);
    goto loc_003440D1;

loc_003440CD: ;
    ebp = esi;
    esi = MEM32(esi);

loc_003440D1: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003440A5; /* je: equal / zero */

loc_003440D8: ;
    POP32(esp, ebx);

loc_003440D9: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003440E0
 * Original: 0x003440E0 - 0x00344113 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003440E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003440E0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x35));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003440F5; /* jne: not equal / not zero */

loc_003440F2: ;
    MEM32(edx + 4) = ecx;

loc_003440F5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_00344113(); return; } /* jne: not equal / not zero */

loc_00344107: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344140
 * Original: 0x00344140 - 0x0034415D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344140: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034415C; /* jne: not equal / not zero */

loc_0034414A: ;
    /* nop */

loc_00344150: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x35));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00344150; /* je: equal / zero */

loc_0034415C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344160
 * Original: 0x00344160 - 0x0034417C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344160: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034417B; /* jne: not equal / not zero */

loc_00344169: ;
    /* nop */

loc_00344170: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x35));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00344170; /* je: equal / zero */

loc_0034417B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344180
 * Original: 0x00344180 - 0x003441B4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344180: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x35));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00344195; /* jne: not equal / not zero */

loc_00344192: ;
    MEM32(edx + 4) = ecx;

loc_00344195: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_003441B4(); return; } /* jne: not equal / not zero */

loc_003441A7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003441E0
 * Original: 0x003441E0 - 0x0034422A (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003441E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003441E0: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00344225; /* jne: not equal / not zero */

loc_003441F1: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_003441FF; /* jb: below (unsigned <) */

loc_003441FA: ;
    eax = MEM32(esi + 0x10);
    goto loc_00344202;

loc_003441FF: ;
    eax = esi + 0x10;

loc_00344202: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00344211: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0034421B; /* jge: greater or equal (signed >=) */

loc_00344215: ;
    ebx = esi;
    esi = MEM32(esi);
    goto loc_0034421E;

loc_0034421B: ;
    esi = MEM32(esi + 8);

loc_0034421E: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003441F1; /* je: equal / zero */

loc_00344225: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344230
 * Original: 0x00344230 - 0x00344287 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344230: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x35));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00344286; /* jne: not equal / not zero */

loc_00344239: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034425F; /* jne: not equal / not zero */

loc_00344244: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x35));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034425B; /* jne: not equal / not zero */

loc_0034424D: ;
    /* nop */

loc_00344250: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x35));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00344250; /* je: equal / zero */

loc_0034425B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0034425F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x35));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00344283; /* jne: not equal / not zero */

loc_00344269: ;
    /* nop */

loc_00344270: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_00344283; /* jne: not equal / not zero */

loc_00344277: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x35));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00344270; /* je: equal / zero */

loc_00344283: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_00344286: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344290
 * Original: 0x00344290 - 0x00344343 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344290: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0x6666665)) goto loc_0034430C; /* jb: below (unsigned <) */

loc_003442A2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_003442C6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_003442CF: ;
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

loc_003442F5: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0034430C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344500(); /* call 0x00344500 */

loc_0034431F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_00344343(); return; } /* jne: not equal / not zero */

loc_00344333: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_00344366(); return; /* tail jmp 0x00344366 */

}

/**
 * sub_00344440
 * Original: 0x00344440 - 0x003444D6 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00344440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F730);
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
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00344474: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0034448B; /* je: equal / zero */

loc_00344489: ;
    MEM32(eax) = ebx;

loc_0034448B: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_003444A2; /* je: equal / zero */

loc_003444A0: ;
    MEM32(ecx) = ebx;

loc_003444A2: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_003444B8; /* je: equal / zero */

loc_003444B6: ;
    MEM32(ecx) = ebx;

loc_003444B8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x34) = LO8(edx);
    MEM8(eax + 0x35) = LO8(ebx);
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
 * sub_00344500
 * Original: 0x00344500 - 0x0034457C (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00344500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F7B0);
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
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00344534: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00344560; /* je: equal / zero */

loc_0034454A: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_003445A0(); /* call 0x003445A0 */

loc_00344560: ;
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
 * sub_003445A0
 * Original: 0x003445A0 - 0x003445F8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003445A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003445A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 4) = ecx;
    edi = esi + 0xC;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0);
    MEM32(edi + 0x18) = 0xF;
    MEM32(edi + 0x14) = 0;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(edi + 4) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_003445CF: ;
    ebp = ebp + 0x1C;
    eax = MEM32(ebp);
    edi = edi + 0x1C;
    MEM32(edi) = eax;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebp + 8);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    MEM8(esi + 0x34) = LO8(eax);
    MEM8(esi + 0x35) = 0;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00344600
 * Original: 0x00344600 - 0x0034464D (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344600: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi);
    eax = ecx;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    ebp = eax + 1;
    /* nop */

loc_00344620: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00344620; /* jne: not equal / not zero */

loc_00344627: ;
    eax = eax - ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344632: ;
    edi = edi + 4;
    ecx = MEM32(edi);
    eax = esi + 0x1C;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    eax = esi;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00344650
 * Original: 0x00344650 - 0x003446EF (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344650(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344650: ;
    eax = MEM32(0x84A6C4);
    if (TEST_NZ(eax, eax)) goto loc_003446EE; /* jne: not equal / not zero */

loc_0034465D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0034466B; /* jne: not equal / not zero */

loc_00344666: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034466B: ;
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
    if (TEST_Z(esi, esi)) goto loc_003446B5; /* je: equal / zero */

loc_00344693: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_003446B5; /* jb: below (unsigned <) */

loc_0034469C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003446A6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003446AE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003446D6; /* jne: not equal / not zero */

loc_003446B5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003446C7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003446CF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003446E5; /* je: equal / zero */

loc_003446D6: ;
    esi = eax;
    PUSH32(esp, 0); sub_003446F0(); /* call 0x003446F0 */

loc_003446DD: ;
    POP32(esp, edi);
    MEM32(0x84A6C4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003446E5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84A6C4) = eax;
    POP32(esp, esi);

loc_003446EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003446F0
 * Original: 0x003446F0 - 0x00344761 (113 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003446F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm1;

loc_003446F0: ;
    PUSH32(esp, 0); sub_00345840(); /* call 0x00345840 */

loc_003446F5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x49) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = MEM32(0x74BA18);
    if (TEST_Z(eax, eax)) goto loc_0034475E; /* je: equal / zero */

loc_0034471D: ;
    PUSH32(esp, edi);
    edx = 0x74BA18;
    edi = 0x74BA1C;

loc_00344728: ;
    eax = MEM32(edi + 4);
    if (CMP_NE(eax, 1)) goto loc_0034473E; /* jne: not equal / not zero */

loc_00344730: ;
    eax = MEM32(edi);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00344770(); /* call 0x00344770 */

loc_0034473C: ;
    goto loc_00344750;

loc_0034473E: ;
    if (CMP_NE(eax, 2)) goto loc_00344750; /* jne: not equal / not zero */

loc_00344743: ;
    eax = MEM32(edi);
    edx = MEM32(edx);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00344810(); /* call 0x00344810 */

loc_00344750: ;
    edi = edi + 0x10;
    eax = MEM32(edi + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = edi + -4;
    if (TEST_NZ(eax, eax)) goto loc_00344728; /* jne: not equal / not zero */

loc_0034475D: ;
    POP32(esp, edi);

loc_0034475E: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00344770
 * Original: 0x00344770 - 0x00344804 (148 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344770: ;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    eax = edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x48) = 0xF;
    MEM32(esp + 0x44) = ebx;
    MEM8(esp + 0x34) = LO8(ebx);
    esi = eax + 1;

loc_003447A4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003447A4; /* jne: not equal / not zero */

loc_003447AB: ;
    PUSH32(esp, edi);
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_003447B9: ;
    eax = MEM32(esp + 0x74);
    edx = esp + 0xC;
    ecx = 8;
    esi = esp + 0x14;
    edi = esp + 0x50;
    PUSH32(esp, edx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    edi = esp + 0x3C;
    PUSH32(esp, 0); sub_00345300(); /* call 0x00345300 */

loc_003447DB: ;
    (void)0; /* cmp MEM32(esp + 0x4C), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_B(MEM32(esp + 0x4C), 0x10)) goto loc_003447FC; /* jb: below (unsigned <) */

loc_003447E3: ;
    eax = MEM32(esp + 0x34);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x70) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_003447FC; /* je: equal / zero */

loc_003447EF: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003447F9: ;
    esp = esp + 4;

loc_003447FC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344810
 * Original: 0x00344810 - 0x003448AE (158 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00344810: ;
    esp = esp - 0x64;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 2;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0xF;
    MEM32(esp + 0x44) = 0;
    MEM8(esp + 0x34) = 0;
    esi = eax + 1;

loc_00344850: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00344850; /* jne: not equal / not zero */

loc_00344857: ;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344864: ;
    edx = MEM32(esp + 0x70);
    ecx = 8;
    esi = esp + 0x10;
    edi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_00345300(); /* call 0x00345300 */

loc_00344886: ;
    (void)0; /* cmp MEM32(esp + 0x48), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_B(MEM32(esp + 0x48), 0x10)) goto loc_003448A8; /* jb: below (unsigned <) */

loc_0034488F: ;
    eax = MEM32(esp + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x68) = eax;
    if (TEST_Z(eax, eax)) goto loc_003448A8; /* je: equal / zero */

loc_0034489B: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003448A5: ;
    esp = esp + 4;

loc_003448A8: ;
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003448B0
 * Original: 0x003448B0 - 0x0034493E (142 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003448B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003448B0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_003448D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003448D0; /* jne: not equal / not zero */

loc_003448D7: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_003448E4: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_003448F1: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344913; /* jb: below (unsigned <) */

loc_003448FA: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344913; /* je: equal / zero */

loc_00344906: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344910: ;
    esp = esp + 4;

loc_00344913: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_EQ(edi, ecx)) { sub_0034493E(); return; } /* je: equal / zero */

loc_0034492C: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344950
 * Original: 0x00344950 - 0x003449DC (140 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344950: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00344970: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344970; /* jne: not equal / not zero */

loc_00344977: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344984: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344991: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_003449B3; /* jb: below (unsigned <) */

loc_0034499A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_003449B3; /* je: equal / zero */

loc_003449A6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003449B0: ;
    esp = esp + 4;

loc_003449B3: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    (void)0; /* cmp edi, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    if (CMP_EQ(edi, MEM32(esi + 4))) { sub_003449DC(); return; } /* je: equal / zero */

loc_003449CA: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003449F0
 * Original: 0x003449F0 - 0x00344A86 (150 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003449F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003449F0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00344A10: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344A10; /* jne: not equal / not zero */

loc_00344A17: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344A24: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344A31: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344A53; /* jb: below (unsigned <) */

loc_00344A3A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344A53; /* je: equal / zero */

loc_00344A46: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344A50: ;
    esp = esp + 4;

loc_00344A53: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    (void)0; /* cmp edi, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    if (CMP_EQ(edi, MEM32(esi + 4))) { sub_00344A86(); return; } /* je: equal / zero */

loc_00344A6A: ;
    if (CMP_NE(MEM32(edi + 0x2C), 2)) goto loc_00344A7C; /* jne: not equal / not zero */

loc_00344A70: ;
    eax = (int32_t)MEMF(edi + 0x3C); /* cvttss2si */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00344A7C: ;
    eax = MEM32(edi + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00344A90
 * Original: 0x00344A90 - 0x00344B1E (142 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344A90: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00344AB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344AB0; /* jne: not equal / not zero */

loc_00344AB7: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344AC4: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344AD1: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344AF3; /* jb: below (unsigned <) */

loc_00344ADA: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344AF3; /* je: equal / zero */

loc_00344AE6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344AF0: ;
    esp = esp + 4;

loc_00344AF3: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_EQ(edi, ecx)) { sub_00344B1E(); return; } /* je: equal / zero */

loc_00344B0C: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344B30
 * Original: 0x00344B30 - 0x00344BB8 (136 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344B30: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x63B1A8);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00344B45: ;
    esp = esp + 8;
    ebx = 0; /* xor self */
    eax = edi;
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edx = eax + 1;
    /* nop */

loc_00344B60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344B60; /* jne: not equal / not zero */

loc_00344B67: ;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344B74: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344B81: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344BA3; /* jb: below (unsigned <) */

loc_00344B8A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344BA3; /* je: equal / zero */

loc_00344B96: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344BA0: ;
    esp = esp + 4;

loc_00344BA3: ;
    if (CMP_EQ(edi, MEM32(esi + 4))) goto loc_00344BAF; /* je: equal / zero */

loc_00344BA8: ;
    ecx = MEM32(esp + 0x34);
    MEM32(edi + 0x38) = ecx;

loc_00344BAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344BC0
 * Original: 0x00344BC0 - 0x00344C3C (124 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344BC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00344BC0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00344BE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344BE0; /* jne: not equal / not zero */

loc_00344BE7: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344BF4: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344C01: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344C23; /* jb: below (unsigned <) */

loc_00344C0A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344C23; /* je: equal / zero */

loc_00344C16: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344C20: ;
    esp = esp + 4;

loc_00344C23: ;
    if (CMP_EQ(edi, MEM32(esi + 4))) goto loc_00344C33; /* je: equal / zero */

loc_00344C28: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(edi + 0x3C) = xmm0; /* movss */

loc_00344C33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344C40
 * Original: 0x00344C40 - 0x00344D23 (227 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344C40: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    esi = edx;
    if (CMP_EQ(eax, ebx)) goto loc_00344D1A; /* je: equal / zero */

loc_00344C54: ;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00344D1A; /* je: equal / zero */

loc_00344C62: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_00344D1A; /* jne: not equal / not zero */

loc_00344C6E: ;
    PUSH32(esp, 0x5F7554);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00344C79: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00344C8E; /* jne: not equal / not zero */

loc_00344C80: ;
    PUSH32(esp, 0x5F8C78);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00344C8B: ;
    esp = esp + 8;

loc_00344C8E: ;
    eax = edi;
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edx = eax + 1;

loc_00344CA3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344CA3; /* jne: not equal / not zero */

loc_00344CAA: ;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344CB7: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344CC4: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344CE6; /* jb: below (unsigned <) */

loc_00344CCD: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344CE6; /* je: equal / zero */

loc_00344CD9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344CE3: ;
    esp = esp + 4;

loc_00344CE6: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    (void)0; /* cmp edi, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    if (CMP_EQ(edi, MEM32(esi + 4))) goto loc_00344D1A; /* je: equal / zero */

loc_00344CFD: ;
    ecx = MEM32(edi + 0x28);
    eax = 1;
    if (CMP_EQ(ecx, eax)) goto loc_00344D1A; /* je: equal / zero */

loc_00344D09: ;
    if (CMP_NE(MEM32(edi + 0x2C), eax)) goto loc_00344D1A; /* jne: not equal / not zero */

loc_00344D0E: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(esp + 0x34);
    eax = eax + ecx;
    MEM32(edi + 0x30) = eax;

loc_00344D1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344D30
 * Original: 0x00344D30 - 0x00344D91 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344D30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00344D30: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_00344D8F; /* je: equal / zero */

loc_00344D3D: ;
    /* nop */

loc_00344D40: ;
    if (CMP_EQ(MEM32(eax + 0x28), 1)) goto loc_00344D7F; /* je: equal / zero */

loc_00344D46: ;
    ecx = MEM32(eax + 0x30);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) + ecx;
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + edx;
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x30) = 0;
    MEMF(eax + 0x34) = xmm0; /* movss */

loc_00344D7F: ;
    edx = esp;
    PUSH32(esp, 0); sub_0022EF70(); /* call 0x0022EF70 */

loc_00344D87: ;
    eax = MEM32(esp);
    if (CMP_NE(eax, MEM32(esi + 4))) goto loc_00344D40; /* jne: not equal / not zero */

loc_00344D8F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344DA0
 * Original: 0x00344DA0 - 0x00344DD1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344DA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00344DA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_00344DCF; /* je: equal / zero */

loc_00344DAD: ;
    /* nop */

loc_00344DB0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x30) = 0;
    edx = esp;
    MEMF(eax + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0022EF70(); /* call 0x0022EF70 */

loc_00344DC7: ;
    eax = MEM32(esp);
    if (CMP_NE(eax, MEM32(esi + 4))) goto loc_00344DB0; /* jne: not equal / not zero */

loc_00344DCF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344DE0
 * Original: 0x00344DE0 - 0x00344E17 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344DE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00344DE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_00344E15; /* je: equal / zero */

loc_00344DED: ;
    /* nop */

loc_00344DF0: ;
    if (CMP_EQ(MEM32(eax + 0x28), 1)) goto loc_00344E05; /* je: equal / zero */

loc_00344DF6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x40) = 0;
    MEMF(eax + 0x44) = xmm0; /* movss */

loc_00344E05: ;
    edx = esp;
    PUSH32(esp, 0); sub_0022EF70(); /* call 0x0022EF70 */

loc_00344E0D: ;
    eax = MEM32(esp);
    if (CMP_NE(eax, MEM32(esi + 4))) goto loc_00344DF0; /* jne: not equal / not zero */

loc_00344E15: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344E20
 * Original: 0x00344E20 - 0x00344EB2 (146 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344E20: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00344E40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00344E40; /* jne: not equal / not zero */

loc_00344E47: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00344E54: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00345400(); /* call 0x00345400 */

loc_00344E61: ;
    edi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00344E83; /* jb: below (unsigned <) */

loc_00344E6A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00344E83; /* je: equal / zero */

loc_00344E76: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00344E80: ;
    esp = esp + 4;

loc_00344E83: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    (void)0; /* cmp edi, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0xF;
    if (CMP_EQ(edi, MEM32(esi + 4))) goto loc_00344EA9; /* je: equal / zero */

loc_00344E9A: ;
    if (CMP_NE(MEM32(edi + 0x2C), 1)) goto loc_00344EA9; /* jne: not equal / not zero */

loc_00344EA0: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(esp + 0x34);
    MEM32(edx) = ecx;

loc_00344EA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344EC0
 * Original: 0x00344EC0 - 0x00344F06 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00344EC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_00344F04; /* je: equal / zero */

loc_00344ECD: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_00344ED0: ;
    if (CMP_EQ(MEM32(eax + 0x28), 1)) goto loc_00344EF1; /* je: equal / zero */

loc_00344ED6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x30) = edi;
    MEM32(eax + 0x38) = edi;
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEM32(eax + 0x40) = edi;

loc_00344EF1: ;
    edx = esp + 4;
    PUSH32(esp, 0); sub_0022EF70(); /* call 0x0022EF70 */

loc_00344EFA: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(eax, MEM32(esi + 4))) goto loc_00344ED0; /* jne: not equal / not zero */

loc_00344F03: ;
    POP32(esp, edi);

loc_00344F04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344F10
 * Original: 0x00344F10 - 0x00344F2D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344F10: ;
    if (CMP_NE(MEM32(0x863D04), 3)) { sub_00344F2D(); return; } /* jne: not equal / not zero */

loc_00344F19: ;
    if (TEST_Z(eax, eax)) { sub_00344F2D(); return; } /* je: equal / zero */

loc_00344F1D: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_00344F2D(); return; } /* je: equal / zero */

loc_00344F27: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00344F30
 * Original: 0x00344F30 - 0x00344F4A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00344F30: ;
    if (TEST_Z(eax, eax)) { sub_00344F4A(); return; } /* je: equal / zero */

loc_00344F34: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_00344F4A(); return; } /* je: equal / zero */

loc_00344F3E: ;
    ecx = MEM32(eax + 0xBC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00344F50
 * Original: 0x00344F50 - 0x00345052 (258 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344F50: ;
    (void)0; /* cmp ecx, 0x1D - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    MEMF(edi) = xmm0; /* movss */
    MEM32(esi) = 0;
    if (CMP_A(ecx, 0x1D)) { sub_00345052(); return; } /* ja: above (unsigned >) */

loc_00344F6B: ;
    ecx = ZX8(MEM8(ecx + 0x345088));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x345058)); return; /* indirect tail jmp */

    edx = 0x5F8588;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00344F83: ;
    MEM32(esi) = 1;
    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    MEM32(esi) = 1;
    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    MEM32(esi) = 1;
    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    edx = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_003451D0(); /* call 0x003451D0 */

loc_0034502B: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    MEM32(esi) = eax;
    eax = edx;
    esp += 8; return; /* ret 4 */

    edx = 0x63B450;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345046: ;
    MEM32(esi) = 0;
    edx = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003450B0
 * Original: 0x003450B0 - 0x003450E3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003450B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003450B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi) = xmm0; /* movss */
    ecx = MEM32(0x863D04);
    esp = esp - 0x1C;
    if (CMP_EQ(ecx, 1)) goto loc_003450DD; /* je: equal / zero */

loc_003450C5: ;
    if (TEST_Z(eax, eax)) goto loc_003450DD; /* je: equal / zero */

loc_003450C9: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003450DD; /* je: equal / zero */

loc_003450D3: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_Z(ecx, ecx)) { sub_003450E3(); return; } /* je: equal / zero */

loc_003450DD: ;
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003451D0
 * Original: 0x003451D0 - 0x003451F4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003451D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003451D0: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) { sub_003451F4(); return; } /* je: equal / zero */

loc_003451D9: ;
    if (TEST_Z(eax, eax)) { sub_003451F4(); return; } /* je: equal / zero */

loc_003451DD: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_003451F4(); return; } /* je: equal / zero */

loc_003451E7: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) { sub_003451F4(); return; } /* jne: not equal / not zero */

loc_003451F1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00345200
 * Original: 0x00345200 - 0x00345220 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345200: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345205: ;
    if (CMP_NE(MEM32(0x863D04), 3)) { sub_00345220(); return; } /* jne: not equal / not zero */

loc_0034520E: ;
    if (TEST_Z(esi, esi)) { sub_00345220(); return; } /* je: equal / zero */

loc_00345212: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) { sub_00345220(); return; } /* je: equal / zero */

loc_0034521C: ;
    SET_LO8(edx, 1);
    g_seh_ebp = ebp; sub_00345222(); return; /* tail jmp 0x00345222 */

}

/**
 * sub_00345260
 * Original: 0x00345260 - 0x0034529E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345260: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00345200(); /* call 0x00345200 */

loc_0034526B: ;
    if (CMP_NE(LO8(eax), 1)) { sub_0034529E(); return; } /* jne: not equal / not zero */

loc_0034526F: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = MEM32(eax * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    SET_LO8(eax, LO8(edx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 6) = ecx;
    MEM16(esp + 0xA) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0034529E(); return; } /* je: equal / zero */

loc_00345294: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003452B0
 * Original: 0x003452B0 - 0x003452F1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003452B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003452B0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00345200(); /* call 0x00345200 */

loc_003452BB: ;
    if (CMP_NE(LO8(eax), 1)) { sub_003452F1(); return; } /* jne: not equal / not zero */

loc_003452BF: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = MEM32(eax * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    eax = ecx;
    eax = eax >> 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 6) = ecx;
    MEM16(esp + 0xA) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003452F1(); return; } /* je: equal / zero */

loc_003452E7: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00345300
 * Original: 0x00345300 - 0x003453B2 (178 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345300: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esi + 0x49));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = eax;
    SET_LO8(eax, 1);
    MEM8(esp + 0xC) = LO8(eax);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00345362; /* jne: not equal / not zero */

loc_00345321: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    ebx = esi;
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_00345331; /* jb: below (unsigned <) */

loc_0034532C: ;
    eax = MEM32(esi + 0x10);
    goto loc_00345334;

loc_00345331: ;
    eax = esi + 0x10;

loc_00345334: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00345343: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xC) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00345354; /* je: equal / zero */

loc_00345350: ;
    esi = MEM32(esi);
    goto loc_00345357;

loc_00345354: ;
    esi = MEM32(esi + 8);

loc_00345357: ;
    SET_LO8(ecx, MEM8(esi + 0x49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00345321; /* je: equal / zero */

loc_0034535E: ;
    ecx = MEM32(esp + 0x14);

loc_00345362: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebx;
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003453A1; /* je: equal / zero */

loc_0034536C: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(ebx, MEM32(edx))) goto loc_00345394; /* jne: not equal / not zero */

loc_00345373: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_003454E0(); /* call 0x003454E0 */

loc_00345382: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00345394: ;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_00345900(); /* call 0x00345900 */

loc_0034539D: ;
    esi = MEM32(esp + 0x18);

loc_003453A1: ;
    (void)0; /* cmp MEM32(edi + 0x18), 0x10 - flags set for next jcc */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) { sub_003453B2(); return; } /* jb: below (unsigned <) */

loc_003453AD: ;
    eax = MEM32(edi + 4);
    g_seh_ebp = ebp; sub_003453B5(); return; /* tail jmp 0x003453B5 */

}

/**
 * sub_00345400
 * Original: 0x00345400 - 0x00345449 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345400: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00345750(); /* call 0x00345750 */

loc_0034540D: ;
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(eax, MEM32(esi + 4))) { sub_00345449(); return; } /* je: equal / zero */

loc_00345416: ;
    (void)0; /* cmp MEM32(eax + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(eax + 0x20);
    if (CMP_B(MEM32(eax + 0x24), 0x10)) goto loc_00345424; /* jb: below (unsigned <) */

loc_0034541F: ;
    eax = MEM32(eax + 0x10);
    goto loc_00345427;

loc_00345424: ;
    eax = eax + 0x10;

loc_00345427: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00345436: ;
    if (TEST_S(eax, eax)) { sub_00345449(); return; } /* jl: less (signed <) */

loc_0034543A: ;
    eax = esp + 4;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00345460
 * Original: 0x00345460 - 0x003454C8 (104 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00345690(); /* call 0x00345690 */

loc_00345479: ;
    MEM32(edi + 4) = eax;
    edx = MEM32(ebx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_003454C8(); return; } /* jne: not equal / not zero */

loc_0034548F: ;
    ecx = MEM32(eax);
    SET_LO8(ebx, MEM8(ecx + 0x49));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003454A3; /* jne: not equal / not zero */

loc_00345498: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(ebx, MEM8(ecx + 0x49));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00345498; /* je: equal / zero */

loc_003454A3: ;
    MEM32(edx) = eax;
    esi = MEM32(esi + 4);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0x49));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003454C1; /* jne: not equal / not zero */

loc_003454B5: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0x49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003454B5; /* je: equal / zero */

loc_003454C1: ;
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003454E0
 * Original: 0x003454E0 - 0x00345593 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003454E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003454E0: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0x4444443)) goto loc_0034555C; /* jb: below (unsigned <) */

loc_003454F2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00345516: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0034551F: ;
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

loc_00345545: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0034555C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003457A0(); /* call 0x003457A0 */

loc_0034556F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_00345593(); return; } /* jne: not equal / not zero */

loc_00345583: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_003455B6(); return; /* tail jmp 0x003455B6 */

}

/**
 * sub_00345690
 * Original: 0x00345690 - 0x0034572D (157 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00345690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F7A0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    MEM32(ebp + -24) = ebx;
    eax = MEM32(ebx + 4);
    MEM32(ebp + -20) = eax;
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0x49));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00345710; /* jne: not equal / not zero */

loc_003456C6: ;
    eax = MEM32(ebx + 4);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x48));
    PUSH32(esp, ecx);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003457A0(); /* call 0x003457A0 */

loc_003456DE: ;
    esi = eax;
    edx = MEM32(ebp + -20);
    SET_LO8(eax, MEM8(edx + 0x49));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003456ED; /* je: equal / zero */

loc_003456EA: ;
    MEM32(ebp + -20) = esi;

loc_003456ED: ;
    MEM32(ebp + -4) = 0;
    PUSH32(esp, esi);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00345690(); /* call 0x00345690 */

loc_003456FF: ;
    MEM32(esi) = eax;
    PUSH32(esp, esi);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_00345690(); /* call 0x00345690 */

loc_0034570D: ;
    MEM32(esi + 8) = eax;

loc_00345710: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00345750
 * Original: 0x00345750 - 0x0034579E (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345750: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x49));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00345799; /* jne: not equal / not zero */

loc_00345761: ;
    PUSH32(esp, ebx);
    ebx = edi + 4;

loc_00345765: ;
    (void)0; /* cmp MEM32(edi + 0x18), 0x10 - flags set for next jcc */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) goto loc_00345775; /* jb: below (unsigned <) */

loc_00345771: ;
    eax = MEM32(ebx);
    goto loc_00345777;

loc_00345775: ;
    eax = ebx;

loc_00345777: ;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00345784: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0034578D; /* jge: greater or equal (signed >=) */

loc_00345788: ;
    esi = MEM32(esi + 8);
    goto loc_00345791;

loc_0034578D: ;
    ebp = esi;
    esi = MEM32(esi);

loc_00345791: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00345765; /* je: equal / zero */

loc_00345798: ;
    POP32(esp, ebx);

loc_00345799: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003457A0
 * Original: 0x003457A0 - 0x0034581D (125 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003457A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003457A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F790);
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
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003457D4: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00345801; /* je: equal / zero */

loc_003457EA: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00345960(); /* call 0x00345960 */

loc_00345801: ;
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
 * sub_00345840
 * Original: 0x00345840 - 0x003458D6 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00345840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F720);
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
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00345874: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0034588B; /* je: equal / zero */

loc_00345889: ;
    MEM32(eax) = ebx;

loc_0034588B: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_003458A2; /* je: equal / zero */

loc_003458A0: ;
    MEM32(ecx) = ebx;

loc_003458A2: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_003458B8; /* je: equal / zero */

loc_003458B6: ;
    MEM32(ecx) = ebx;

loc_003458B8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x48) = LO8(edx);
    MEM8(eax + 0x49) = LO8(ebx);
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
 * sub_00345900
 * Original: 0x00345900 - 0x0034590F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345900: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0034590F(); return; } /* je: equal / zero */

loc_00345909: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00345960
 * Original: 0x00345960 - 0x003459B5 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345960(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345960: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ebp + 4) = ecx;
    edi = ebp + 0xC;
    MEM32(ebp) = eax;
    MEM32(ebp + 8) = edx;
    PUSH32(esp, 0);
    MEM32(edi + 0x18) = 0xF;
    MEM32(edi + 0x14) = 0;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edi + 4) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00345995: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    esi = esi + 0x1C;
    edi = edi + 0x1C;
    ecx = 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEM8(ebp + 0x48) = LO8(eax);
    POP32(esp, esi);
    MEM8(ebp + 0x49) = 0;
    eax = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003459C0
 * Original: 0x003459C0 - 0x003459F2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003459C0(void)
{

loc_003459C0: ;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM32(eax) = 0x63B640;
    esp += 4; return; /* ret */

}

/**
 * sub_00345A00
 * Original: 0x00345A00 - 0x00345A06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345A00(void)
{

loc_00345A00: ;
    eax = 0x3E;
    esp += 4; return; /* ret */

}

/**
 * sub_00345A10
 * Original: 0x00345A10 - 0x00345A75 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345A10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00345A18: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00345A20: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00345A75(); return; } /* je: equal / zero */

loc_00345A24: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00345A20; /* jl: less (signed <) */

loc_00345A30: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x4D));
    eax = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x63B6C0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00345A6E: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00345AB0
 * Original: 0x00345AB0 - 0x00345AC7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345AB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ecx | 0xFFFFFFFFu;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ecx)) { sub_00345AC7(); return; } /* jne: not equal / not zero */

loc_00345ABE: ;
    MEM16(ebx + 6) = LO16(ecx);
    MEM32(ebx + 8) = ecx;
    g_seh_ebp = ebp; sub_00345AE3(); return; /* tail jmp 0x00345AE3 */

}

/**
 * sub_00345B30
 * Original: 0x00345B30 - 0x00345D2B (507 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345B30: ;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00345CF6; /* je: equal / zero */

loc_00345B44: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00345D25; /* je: equal / zero */

loc_00345B52: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0x1F)) goto loc_00345D25; /* je: equal / zero */

loc_00345B5C: ;
    if (CMP_EQ(MEM32(ebp + 0x18), 0x11)) goto loc_00345D25; /* je: equal / zero */

loc_00345B66: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00345D25; /* je: equal / zero */

loc_00345B73: ;
    SET_LO16(edi, MEM16(ebp + 6));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00345B81: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00345D25; /* je: equal / zero */

loc_00345B8B: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00345B92: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00345CF6; /* je: equal / zero */

loc_00345B9D: ;
    PUSH32(esp, 0); sub_003459C0(); /* call 0x003459C0 */

loc_00345BA2: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00345CF6; /* je: equal / zero */

loc_00345BAC: ;
    SET_LO16(eax, MEM16(ebp + 6));
    MEM16(esi + 0x34) = LO16(eax);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(esi + 0x3C) = edx;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(esi + 0x40) = LO16(eax);
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x44) = ecx;
    edx = MEM32(ebp + 0x18);
    MEM32(esi + 0x48) = edx;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345BD9: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00344F30(); /* call 0x00344F30 */

loc_00345BE0: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00345CD0; /* jne: not equal / not zero */

loc_00345BE8: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345BED: ;
    edx = 0x63B3A4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345BF7: ;
    if (TEST_NZ(eax, eax)) goto loc_00345C34; /* jne: not equal / not zero */

loc_00345BFB: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C00: ;
    edx = 0x63B394;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C0A: ;
    if (TEST_NZ(eax, eax)) goto loc_00345C34; /* jne: not equal / not zero */

loc_00345C0E: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C13: ;
    edx = 0x63B384;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C1D: ;
    if (TEST_NZ(eax, eax)) goto loc_00345C34; /* jne: not equal / not zero */

loc_00345C21: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C26: ;
    edx = 0x63B374;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C30: ;
    if (TEST_Z(eax, eax)) goto loc_00345C39; /* je: equal / zero */

loc_00345C34: ;
    eax = 1;

loc_00345C39: ;
    MEM8(esi + 0x4C) = LO8(eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C41: ;
    edx = 0x63B368;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C4B: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345C4F: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C54: ;
    edx = 0x63B358;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C5E: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345C62: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C67: ;
    edx = 0x63B344;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C71: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345C75: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C7A: ;
    edx = 0x63B334;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C84: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345C88: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345C8D: ;
    edx = 0x63B324;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345C97: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345C9B: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345CA0: ;
    edx = 0x63B314;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345CAA: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345CAE: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345CB3: ;
    edx = 0x63B304;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00345CBD: ;
    if (TEST_NZ(eax, eax)) goto loc_00345CC6; /* jne: not equal / not zero */

loc_00345CC1: ;
    MEM8(esi + 0x4D) = LO8(eax);
    goto loc_00345CD8;

loc_00345CC6: ;
    eax = 1;
    MEM8(esi + 0x4D) = LO8(eax);
    goto loc_00345CD8;

loc_00345CD0: ;
    MEM8(esi + 0x4C) = 0;
    MEM8(esi + 0x4D) = 0;

loc_00345CD8: ;
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00345CE6: ;
    ecx = MEM32(edi + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00345CF4: ;
    goto loc_00345CF9;

loc_00345CF6: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_00345CF9: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x648);
    MEM8(eax + 4) = 0;
    MEM16(eax + 6) = LO16(ebp);
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = 0x1F;
    MEM16(eax + 0x10) = LO16(ebp);
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0x11;

loc_00345D25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00345D30
 * Original: 0x00345D30 - 0x00345DDF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345D30: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00345D43; /* jne: not equal / not zero */

loc_00345D3E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00345D43: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00345D8B; /* je: equal / zero */

loc_00345D69: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_00345D8B; /* jb: below (unsigned <) */

loc_00345D72: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00345D7C: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00345D84: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00345DAC; /* jne: not equal / not zero */

loc_00345D8B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00345D9D: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00345DA5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00345DDF(); return; } /* je: equal / zero */

loc_00345DAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x63B640;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345DF0
 * Original: 0x00345DF0 - 0x00345E54 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345DF0(void)
{

loc_00345DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E03: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E0D: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E17: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x40);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E22: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E2C: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E36: ;
    eax = ZX8(MEM8(edi + 0x4C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E41: ;
    eax = ZX8(MEM8(edi + 0x4D));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00345E4C: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00345E60
 * Original: 0x00345E60 - 0x00345EFC (156 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00345E60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345E6F: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00345E7B; /* jns: not sign (positive) */

loc_00345E76: ;
    eax = eax | 0xFFFF0000u;

loc_00345E7B: ;
    PUSH32(esp, 0x10);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345E86: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00345E92; /* jns: not sign (positive) */

loc_00345E8D: ;
    eax = eax | 0xFFFF0000u;

loc_00345E92: ;
    PUSH32(esp, 0xA);
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345E9C: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x3C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345EA6: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00345EB2; /* jns: not sign (positive) */

loc_00345EAD: ;
    eax = eax | 0xFFFF0000u;

loc_00345EB2: ;
    PUSH32(esp, 0x10);
    MEM16(edi + 0x40) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345EBD: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00345EC9; /* jns: not sign (positive) */

loc_00345EC4: ;
    eax = eax | 0xFFFF0000u;

loc_00345EC9: ;
    PUSH32(esp, 5);
    MEM32(edi + 0x44) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345ED3: ;
    PUSH32(esp, 1);
    MEM32(edi + 0x48) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345EDD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(edi + 0x4C) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00345EEC: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(edi + 0x4D) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00345F00
 * Original: 0x00345F00 - 0x00345F87 (135 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345F00: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO16(eax, MEM16(ebx + 0x34));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x38);
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00345F11: ;
    esi = MEM32(ebx + 0x44);
    ebp = eax;
    SET_LO16(eax, MEM16(ebx + 0x40));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00345F1F: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00345F7E; /* je: equal / zero */

loc_00345F25: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00345F7E; /* je: equal / zero */

loc_00345F2F: ;
    eax = MEM32(eax + 0x648);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x4D));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x4C));
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00345F90(); /* call 0x00345F90 */

loc_00345F4D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = ZX16(MEM16(ebp + 0x60));
    if (TEST_Z(esi, esi)) goto loc_00345F5B; /* je: equal / zero */

loc_00345F55: ;
    ecx = ZX16(MEM16(esi + 0x60));
    goto loc_00345F5E;

loc_00345F5B: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_00345F5E: ;
    edi = MEM32(ebx + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242BC0(); /* call 0x00242BC0 */

loc_00345F6A: ;
    xmm0 = MEMF(0x64908C); /* movss */
    esp = esp + 0xC;
    MEMF(0x862CBC) = xmm0; /* movss */
    POP32(esp, edi);

loc_00345F7E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345F90
 * Original: 0x00345F90 - 0x00346162 (466 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345F90: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345F98: ;
    if (TEST_Z(esi, esi)) goto loc_0034615E; /* je: equal / zero */

loc_00345FA0: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0034615E; /* je: equal / zero */

loc_00345FAE: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0034615E; /* jne: not equal / not zero */

loc_00345FBC: ;
    eax = edi + -1;
    if (CMP_A(eax, 0xE)) goto loc_003460B0; /* ja: above (unsigned >) */

loc_00345FC8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x346164); /* switch: 15 entries, 14 targets */
    if (_jt == 0x00345FCFu) goto loc_00345FCF;
    if (_jt == 0x00345FE0u) goto loc_00345FE0;
    if (_jt == 0x00345FF1u) goto loc_00345FF1;
    if (_jt == 0x00346002u) goto loc_00346002;
    if (_jt == 0x00346013u) goto loc_00346013;
    if (_jt == 0x00346024u) goto loc_00346024;
    if (_jt == 0x00346032u) goto loc_00346032;
    if (_jt == 0x00346040u) goto loc_00346040;
    if (_jt == 0x0034604Eu) goto loc_0034604E;
    if (_jt == 0x0034605Cu) goto loc_0034605C;
    if (_jt == 0x0034607Fu) goto loc_0034607F;
    if (_jt == 0x0034608Du) goto loc_0034608D;
    if (_jt == 0x0034609Bu) goto loc_0034609B;
    if (_jt == 0x003460B0u) goto loc_003460B0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00345FCF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345FD6: ;
    ecx = 0x5F865C;
    goto loc_003460A7;

loc_00345FE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345FE7: ;
    ecx = 0x5F867C;
    goto loc_003460A7;

loc_00345FF1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00345FF8: ;
    ecx = 0x5F853C;
    goto loc_003460A7;

loc_00346002: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346009: ;
    ecx = 0x5F84F4;
    goto loc_003460A7;

loc_00346013: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0034601A: ;
    ecx = 0x5F8518;
    goto loc_003460A7;

loc_00346024: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0034602B: ;
    ecx = 0x63B62C;
    goto loc_003460A7;

loc_00346032: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346039: ;
    ecx = 0x63B600;
    goto loc_003460A7;

loc_00346040: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346047: ;
    ecx = 0x63B6A8;
    goto loc_003460A7;

loc_0034604E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346055: ;
    ecx = 0x63B6A8;
    goto loc_00346068;

loc_0034605C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346063: ;
    ecx = 0x63B5E8;

loc_00346068: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346071: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346078: ;
    ecx = 0x5FA600;
    goto loc_003460A7;

loc_0034607F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346086: ;
    ecx = 0x5F840C;
    goto loc_003460A7;

loc_0034608D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346094: ;
    ecx = 0x5F84A0;
    goto loc_003460A7;

loc_0034609B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003460A2: ;
    ecx = 0x5F84C4;

loc_003460A7: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003460B0: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 2)) ? 1 : 0); /* sete */
    if (CMP_EQ(edi, 1)) goto loc_0034615E; /* je: equal / zero */

loc_003460BF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034610C; /* je: equal / zero */

loc_003460C3: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003460C8: ;
    eax = esi;
    PUSH32(esp, 0); sub_003451D0(); /* call 0x003451D0 */

loc_003460CF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034615E; /* je: equal / zero */

loc_003460D7: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003460E1: ;
    edx = 0x5F8C78;
    PUSH32(esp, 0); sub_00344E20(); /* call 0x00344E20 */

loc_003460EB: ;
    eax = MEM32(esp + 0x10);
    if (CMP_LE(eax & eax, 0)) goto loc_0034615E; /* jle: less or equal (signed <=) */

loc_003460F3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003460FA: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C78;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346108: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0034610C: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00346122; /* je: equal / zero */

loc_00346114: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0034611B: ;
    ecx = 0x5F85B4;
    goto loc_00346136;

loc_00346122: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034613F; /* je: equal / zero */

loc_0034612A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346131: ;
    ecx = 0x5F85E4;

loc_00346136: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0034613F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346146: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C78;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346154: ;
    PUSH32(esp, 0); sub_003461A0(); /* call 0x003461A0 */

loc_00346159: ;
    PUSH32(esp, 0); sub_00346270(); /* call 0x00346270 */

loc_0034615E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003461A0
 * Original: 0x003461A0 - 0x00346254 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003461A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003461A0: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00346253; /* je: equal / zero */

loc_003461AE: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_00346253; /* je: equal / zero */

loc_003461BC: ;
    eax = MEM32(eax + 8);
    eax--;
    if (CMP_A(eax, 5)) goto loc_00346253; /* ja: above (unsigned >) */

loc_003461C9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x346254); /* switch: 6 entries, 6 targets */
    if (_jt == 0x003461D0u) goto loc_003461D0;
    if (_jt == 0x003461E6u) goto loc_003461E6;
    if (_jt == 0x003461FCu) goto loc_003461FC;
    if (_jt == 0x00346212u) goto loc_00346212;
    if (_jt == 0x00346228u) goto loc_00346228;
    if (_jt == 0x0034623Eu) goto loc_0034623E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003461D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003461D7: ;
    edx = eax;
    ecx = 0x5F83A0;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003461E5: ;
    esp += 4; return; /* ret */

loc_003461E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003461ED: ;
    edx = eax;
    ecx = 0x5F8390;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003461FB: ;
    esp += 4; return; /* ret */

loc_003461FC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346203: ;
    edx = eax;
    ecx = 0x5F837C;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346211: ;
    esp += 4; return; /* ret */

loc_00346212: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346219: ;
    edx = eax;
    ecx = 0x5F8364;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346227: ;
    esp += 4; return; /* ret */

loc_00346228: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0034622F: ;
    edx = eax;
    ecx = 0x5F8350;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0034623D: ;
    esp += 4; return; /* ret */

loc_0034623E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346245: ;
    edx = eax;
    ecx = 0x5F833C;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00346253: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00346270
 * Original: 0x00346270 - 0x003462D6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00346270: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003462D5; /* je: equal / zero */

loc_0034627A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_003462D5; /* je: equal / zero */

loc_00346284: ;
    eax = MEM32(eax + 0x34);
    if (TEST_NZ(eax, eax)) goto loc_003462A1; /* jne: not equal / not zero */

loc_0034628B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00346292: ;
    edx = eax;
    ecx = 0x63B594;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003462A0: ;
    esp += 4; return; /* ret */

loc_003462A1: ;
    if (CMP_NE(eax, 1)) goto loc_003462BB; /* jne: not equal / not zero */

loc_003462A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003462AC: ;
    edx = eax;
    ecx = 0x63B57C;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003462BA: ;
    esp += 4; return; /* ret */

loc_003462BB: ;
    if (CMP_NE(eax, 2)) goto loc_003462D5; /* jne: not equal / not zero */

loc_003462C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003462C7: ;
    edx = eax;
    ecx = 0x5F84C4;
    eax = esi;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_003462D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003462E0
 * Original: 0x003462E0 - 0x003462EF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003462E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003462E0: ;
    SET_LO8(edx, MEM8(0x864EBD));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003462EF(); return; } /* je: equal / zero */

loc_003462EA: ;
    eax = eax + 0xFFFFFFFEu;
    g_seh_ebp = ebp; sub_003462F0(); return; /* tail jmp 0x003462F0 */

}

/**
 * sub_00346310
 * Original: 0x00346310 - 0x0034633C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346310(void)
{
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

loc_00346310: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0034633C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00346338: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00346360
 * Original: 0x00346360 - 0x003463CF (111 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00346360: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    esi = MEM32(ecx);
    edx = eax + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x18) = edx;
    POP32(esp, esi);
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003463AB; /* jne: not equal / not zero */

loc_003463A8: ;
    xmm0 = xmm1; /* movaps */

loc_003463AB: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003463C0; /* jne: not equal / not zero */

loc_003463BD: ;
    xmm0 = xmm1; /* movaps */

loc_003463C0: ;
    ecx = MEM32(esp + 4);
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEM32(eax + 0x28) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003463D0
 * Original: 0x003463D0 - 0x00346404 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003463D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003463D0: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x7F9F4C); /* movss */
    xmm1 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003463EA; /* jne: not equal / not zero */

loc_003463E7: ;
    xmm1 = xmm0; /* movaps */

loc_003463EA: ;
    /* comiss xmm1, MEMF(ecx + 0x1C) - sets EFLAGS */
    if ((xmm1 >= MEMF(ecx + 0x1C))) { sub_00346404(); return; } /* jae: above or equal (unsigned >=) */

loc_003463F0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003463F7; /* je: equal / zero */

loc_003463F4: ;
    xmm0 = xmm2; /* movaps */

loc_003463F7: ;
    xmm1 = MEMF(ecx + 0x20); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_00346404(); return; } /* ja: above (unsigned >) */

loc_00346401: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00346410
 * Original: 0x00346410 - 0x00346441 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346410: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x7F9F4C); /* movss */
    esp = esp - 0x24;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = edi + 0x1C;
    xmm1 = xmm0; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00346431; /* jne: not equal / not zero */

loc_0034642E: ;
    xmm1 = xmm2; /* movaps */

loc_00346431: ;
    /* comiss xmm1, MEMF(ebp) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebp))) { sub_00346441(); return; } /* jbe: below or equal (unsigned <=) */

loc_00346437: ;
    xmm0 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_0034646F(); return; /* tail jmp 0x0034646F */

}

/**
 * sub_00346710
 * Original: 0x00346710 - 0x00346811 (257 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346710(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00346710: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    eax = edi;
    edx = 0x10;

loc_00346728: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00346732; /* jne: not equal / not zero */

loc_0034672F: ;
    xmm0 = xmm1; /* movaps */

loc_00346732: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00346748; /* jne: not equal / not zero */

loc_00346745: ;
    xmm0 = xmm1; /* movaps */

loc_00346748: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034675E; /* jne: not equal / not zero */

loc_0034675B: ;
    xmm0 = xmm1; /* movaps */

loc_0034675E: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00346774; /* jne: not equal / not zero */

loc_00346771: ;
    xmm0 = xmm1; /* movaps */

loc_00346774: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034678A; /* jne: not equal / not zero */

loc_00346787: ;
    xmm0 = xmm1; /* movaps */

loc_0034678A: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003467A0; /* jne: not equal / not zero */

loc_0034679D: ;
    xmm0 = xmm1; /* movaps */

loc_003467A0: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003467B6; /* jne: not equal / not zero */

loc_003467B3: ;
    xmm0 = xmm1; /* movaps */

loc_003467B6: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003467CC; /* jne: not equal / not zero */

loc_003467C9: ;
    xmm0 = xmm1; /* movaps */

loc_003467CC: ;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    edx--;
    if ((edx != 0)) goto loc_00346728; /* jne: not equal / not zero */

loc_003467DF: ;
    PUSH32(esp, esi);
    esi = edi + 0x800;
    PUSH32(esp, 0); sub_00349CB0(); /* call 0x00349CB0 */

loc_003467EB: ;
    MEM32(esi + 4) = eax;
    eax = edi + 0x600;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esi + 8) = 0;
    if (CMP_EQ(eax, esi)) goto loc_0034680D; /* je: equal / zero */

loc_003467FF: ;
    /* nop */

loc_00346800: ;
    MEM32(eax) = 5;
    eax = eax + 4;
    if (CMP_NE(eax, esi)) goto loc_00346800; /* jne: not equal / not zero */

loc_0034680D: ;
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00346820
 * Original: 0x00346820 - 0x0034685C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00346820: ;
    SET_LO8(ecx, MEM8(0x87869C));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00346856; /* jne: not equal / not zero */

loc_0034682F: ;
    edx = MEM32(0x87869C);
    PUSH32(esp, edi);
    edx = edx | eax;
    edi = 0x877E90;
    MEM32(0x87869C) = edx;
    PUSH32(esp, 0); sub_00346710(); /* call 0x00346710 */

loc_00346848: ;
    PUSH32(esp, 0x48CD30);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00346852: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_00346856: ;
    eax = 0x877E90;
    esp += 4; return; /* ret */

}

/**
 * sub_00346860
 * Original: 0x00346860 - 0x003469C7 (359 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346860: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0x63B93C;
    MEM32(esp + 0x10) = 0x63B914;
    MEM32(esp + 0x14) = 0x63B8F0;
    MEM32(esp + 0x18) = 0x63B8CC;
    MEM32(esp + 0x1C) = 0x63B8A0;
    if (TEST_NZ(eax, eax)) goto loc_003469BE; /* jne: not equal / not zero */

loc_003468A6: ;
    eax = ZX16(MEM16(edi + 0x60));
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x7F9F4C); /* movss */
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    xmm1 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003468CB; /* jne: not equal / not zero */

loc_003468C8: ;
    xmm1 = xmm0; /* movaps */

loc_003468CB: ;
    /* comiss xmm1, MEMF(eax) - sets EFLAGS */
    if ((xmm1 >= MEMF(eax))) goto loc_003468E8; /* jae: above or equal (unsigned >=) */

loc_003468D0: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003468DA; /* jne: not equal / not zero */

loc_003468D7: ;
    xmm1 = xmm0; /* movaps */

loc_003468DA: ;
    xmm3 = MEMF(eax + 4); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_003469BE; /* jbe: below or equal (unsigned <=) */

loc_003468E8: ;
    if (CMP_NE(edx, 5)) goto loc_00346909; /* jne: not equal / not zero */

loc_003468ED: ;
    edx = ZX16(MEM16(edi + 0x60));
    eax = ebx + edx * 4 + 0x600;
    edx = MEM32(eax);
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    MEM32(eax) = 5;
    if (CMP_EQ(edx, 5)) goto loc_003469BE; /* je: equal / zero */

loc_00346909: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = ZX16(MEM16(edi + 0x60));
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    xmm1 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034691D; /* jne: not equal / not zero */

loc_0034691A: ;
    xmm1 = xmm0; /* movaps */

loc_0034691D: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm3 = MEMF(0x75ECB8); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax) = xmm3; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00346934; /* je: equal / zero */

loc_00346931: ;
    xmm0 = xmm2; /* movaps */

loc_00346934: ;
    ecx = MEM32(esp + edx * 4 + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = esp + 0x5C;
    MEMF(eax + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00346948: ;
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    esp = esp + 4;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x75ECB4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA0); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    edx = ebp;
    eax = esp + 0x30;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00346360(); /* call 0x00346360 */

loc_00346990: ;
    esi = MEM32(ebx + 0x804);
    edx = MEM32(esi + 4);
    ebx = ebx + 0x800;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00349DA0(); /* call 0x00349DA0 */

loc_003469A7: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00349E40(); /* call 0x00349E40 */

loc_003469B5: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    POP32(esp, esi);

loc_003469BE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003469D0
 * Original: 0x003469D0 - 0x00346A90 (192 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003469D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003469D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3463D0);
    ebx = ebp + 0x800;
    PUSH32(esp, 0); sub_00233230(); /* call 0x00233230 */

loc_003469EA: ;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) goto loc_00346A45; /* je: equal / zero */

loc_003469F3: ;
    eax = MEM32(esp + 0x2C);
    esi = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = (int32_t)MEMF(eax + esi + 0x21C); /* cvttss2si */
    edx = (int32_t)MEMF(eax + esi + 0x214); /* cvttss2si */
    eax = eax + esi;
    MEM32(esp + 0xC) = ecx;
    ecx = (int32_t)MEMF(eax + 0x220); /* cvttss2si */
    MEM32(esp + 0x10) = edx;
    edx = (int32_t)MEMF(eax + 0x218); /* cvttss2si */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_00346A45: ;
    eax = MEM32(ebp + 0x804);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_00346A73; /* je: equal / zero */

loc_00346A51: ;
    PUSH32(esp, edi);

loc_00346A52: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esi + 8;
    PUSH32(esp, 0); sub_00346410(); /* call 0x00346410 */

loc_00346A68: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, MEM32(ebp + 0x804))) goto loc_00346A52; /* jne: not equal / not zero */

loc_00346A72: ;
    POP32(esp, edi);

loc_00346A73: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00346A8A; /* je: equal / zero */

loc_00346A7F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_00346A8A: ;
    esp = esp + 0x10;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00346A90
 * Original: 0x00346A90 - 0x00346AC1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00346A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) { sub_00346AC1(); return; } /* je: equal / zero */

loc_00346AA3: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00346AB0: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00346ABB: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00346AE0
 * Original: 0x00346AE0 - 0x00346C86 (422 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346AE0: ;
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    eax = MEM32(ebp + 0x4B0);
    if (TEST_Z(eax, eax)) { sub_00346C86(); return; } /* je: equal / zero */

loc_00346AF6: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) { sub_00346C86(); return; } /* je: equal / zero */

loc_00346B01: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) { sub_00346C86(); return; } /* je: equal / zero */

loc_00346B0C: ;
    eax = MEM32(ebp + 0xB0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    MEM32(edi + 0x14) = eax;
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    ebx = edi + 0x18;
    esi = ebx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM32(esp + 0x38) = 0x587BE4;
    MEM32(esp + 0x40) = 0x63B88C;
    PUSH32(esp, 0); sub_00349C80(); /* call 0x00349C80 */

loc_00346B4E: ;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_00346B57: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00346BCA; /* je: equal / zero */

loc_00346B5B: ;
    goto loc_00346B60;

    /* nop */

loc_00346B60: ;
    esi = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x34);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003ECD30(); /* call 0x003ECD30 */

loc_00346B75: ;
    PUSH32(esp, esi);
    esi = esp + 0x1C;
    eax = edi;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_00346B81: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x58);
    edx = 0; /* xor self */
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(eax & eax, 0)) ? 1 : 0); /* setle */
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x1C;
    edx--;
    edx = edx & eax;
    eax = ebx;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_00349C20(); /* call 0x00349C20 */

loc_00346BB9: ;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_00346BC2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00346B60; /* jne: not equal / not zero */

loc_00346BC6: ;
    edi = MEM32(esp + 0x48);

loc_00346BCA: ;
    eax = MEM32(ebp + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    esi = esp + 0x2C;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM32(esp + 0x38) = 0x587BE4;
    MEM32(esp + 0x40) = 0x63B87C;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_00346BFB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00346C4C; /* je: equal / zero */

loc_00346BFF: ;
    ecx = MEM32(esp + 0x3C);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ECD30(); /* call 0x003ECD30 */

loc_00346C12: ;
    esp = esp + 8;
    edi = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0); sub_001DFEC0(); /* call 0x001DFEC0 */

loc_00346C20: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    ebp = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    eax = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(ebp & ebp, 0)) ? 1 : 0); /* setle */
    eax--;
    eax = eax & ebp;
    edx = edx + 4;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = edi;
    edi = MEM32(esp + 0x48);
    MEM32(edx + 0xC) = eax;

loc_00346C4C: ;
    eax = MEM32(ebx + 4);
    if (TEST_Z(eax, eax)) goto loc_00346C5F; /* je: equal / zero */

loc_00346C53: ;
    ebx = MEM32(ebx + 8);
    ebx = ebx - eax;
    ebx = (uint32_t)((int32_t)ebx >> 4);
    if (CMP_A(ebx & ebx, 0)) goto loc_00346C75; /* ja: above (unsigned >) */

loc_00346C5F: ;
    if (CMP_NE(MEM32(edi + 0x10), 0xFFFFFFFFu)) goto loc_00346C75; /* jne: not equal / not zero */

loc_00346C65: ;
    eax = 0; /* xor self */
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

loc_00346C75: ;
    eax = 1;
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00346C90
 * Original: 0x00346C90 - 0x00346CAD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346C90(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346C90: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = esi;
    g_seh_ebp = ebp; sub_00346CB0(); return; /* tail jmp 0x00346CB0 */

}

/**
 * sub_00347090
 * Original: 0x00347090 - 0x003472E5 (597 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347090(void)
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

loc_00347090: ;
    esp = esp - 0xD8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xE0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003470AA: ;
    if (TEST_NZ(eax, eax)) goto loc_003470C3; /* jne: not equal / not zero */

loc_003470AE: ;
    ecx = ZX16(MEM16(edi + 0x60));

loc_003470B2: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_003470C5; /* je: equal / zero */

loc_003470BE: ;
    if (CMP_L(eax, 2)) goto loc_003470B2; /* jl: less (signed <) */

loc_003470C3: ;
    eax = 0; /* xor self */

loc_003470C5: ;
    edx = eax + -1;
    if (TEST_S(edx, edx)) { sub_003472E5(); return; } /* jl: less (signed <) */

loc_003470D0: ;
    if (CMP_GE(edx, 2)) { sub_003472E5(); return; } /* jge: greater or equal (signed >=) */

loc_003470D9: ;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x862CCB);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x849C30); /* movss */
    if (TEST_S(eax, eax)) goto loc_003470FE; /* jl: less (signed <) */

loc_003470EC: ;
    if (CMP_GE(eax, 0x10)) goto loc_003470FE; /* jge: greater or equal (signed >=) */

loc_003470F1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    xmm0 = (float)(int32_t)MEM32(eax + 0x776290); /* cvtsi2ss */
    goto loc_00347101;

loc_003470FE: ;
    xmm0 = xmm1; /* movaps */

loc_00347101: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003471E0; /* jbe: below or equal (unsigned <=) */

loc_0034710A: ;
    eax = MEM32(esi + 0x238);
    if (TEST_Z(eax, eax)) goto loc_003471E0; /* je: equal / zero */

loc_00347118: ;
    ecx = MEM32(edi + 0x238);
    if (TEST_Z(ecx, ecx)) goto loc_003471E0; /* je: equal / zero */

loc_00347126: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0); sub_00332B90(); /* call 0x00332B90 */

loc_0034712D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003471E0; /* je: equal / zero */

loc_00347135: ;
    eax = edx;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_002964A0(); /* call 0x002964A0 */

loc_00347141: ;
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax - ecx;
    edx = 0;
    SET_LO8(edx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx = 0x3C;
    edx--;
    eax = eax & edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    PUSH32(esp, 0x63B860);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00347178: ;
    SET_LO8(eax, MEM8(0x800EF5));
    SET_LO8(ecx, MEM8(0x800EF6));
    edx = MEM32(esp + 0x10C);
    SET_LO8(ebx, MEM8(0x800EF4));
    MEM8(esp + 0x22) = LO8(eax);
    SET_LO8(eax, 0x78);
    PUSH32(esp, edx);
    esi = esp + 0x34;
    edi = esp + 0x10C;
    MEM8(esp + 0x27) = LO8(ecx);
    MEM8(0x800EF4) = LO8(eax);
    MEM8(0x800EF5) = LO8(eax);
    MEM8(0x800EF6) = LO8(eax);
    PUSH32(esp, 0); sub_00348C30(); /* call 0x00348C30 */

loc_003471BA: ;
    SET_LO8(eax, MEM8(esp + 0x26));
    SET_LO8(ecx, MEM8(esp + 0x27));
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x800EF4) = LO8(ebx);
    MEM8(0x800EF5) = LO8(eax);
    MEM8(0x800EF6) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_003471E0: ;
    eax = MEM32(esi + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(eax, eax)) { sub_003472E5(); return; } /* je: equal / zero */

loc_003471F6: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003472E5(); return; } /* je: equal / zero */

loc_00347201: ;
    edx = eax + 0xA50;
    esi = esp + 0x10;
    eax = edi;
    PUSH32(esp, 0); sub_003BF710(); /* call 0x003BF710 */

loc_00347212: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003472E5(); return; } /* je: equal / zero */

loc_0034721A: ;
    eax = 0x5D4FB4;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_001F4EB0(); /* call 0x001F4EB0 */

loc_00347228: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = 0x63B854;
    PUSH32(esp, 0); sub_001F4EE0(); /* call 0x001F4EE0 */

loc_00347237: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0x5FBFE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00347247: ;
    fp_push(MEMF(0x849C30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ecx, MEM8(0x800EF5));
    SET_LO8(edx, MEM8(0x800EF6));
    SET_LO8(ebx, MEM8(0x800EF4));
    /* FPU: fsin  */
    MEM8(esp + 0x1F) = LO8(ecx);
    MEM8(esp + 0x1E) = LO8(edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034728C: ;
    MEM8(0x800EF4) = LO8(eax);
    MEM8(0x800EF5) = LO8(eax);
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    esi = esp + 0x30;
    edi = esp + 0x108;
    MEM8(0x800EF6) = 0;
    PUSH32(esp, 0); sub_00348C30(); /* call 0x00348C30 */

loc_003472B5: ;
    SET_LO8(ecx, MEM8(esp + 0x23));
    SET_LO8(edx, MEM8(esp + 0x22));
    esp = esp + 0x14;
    eax = esp + 0x14;
    MEM8(0x800EF4) = LO8(ebx);
    MEM8(0x800EF5) = LO8(ecx);
    MEM8(0x800EF6) = LO8(edx);
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_003472DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00347310
 * Original: 0x00347310 - 0x00347325 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00347310: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_00347322; /* jne: not equal / not zero */

loc_00347316: ;
    eax = MEM32(eax + 0x570);
    if (CMP_NE(MEM32(eax + 0x34), 0xFFFFFFFFu)) { sub_00347325(); return; } /* jne: not equal / not zero */

loc_00347322: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00347330
 * Original: 0x00347330 - 0x00348333 (4099 bytes, 959 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347330(void)
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

loc_00347330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x7A4;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x24) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034832C; /* je: equal / zero */

loc_0034735D: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00347371: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ebx = MEM32(0x84A144);
    MEM32(esp + 0xBC) = eax;
    eax = eax + ecx;
    esp = esp + 8;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0034742B; /* je: equal / zero */

loc_0034739E: ;
    ebx++;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    esi = MEM32(edx + ecx + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_003473B9: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    esi = esi + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(0x81BD26) = LO16(eax);
    eax = MEM32(esp + 0x2C);
    xmm1 = MEMF(eax + 0x1F4); /* movss */
    xmm1 = xmm1 * MEMF(0x649714); /* mulss */
    xmm0 = MEMF(eax + 0x1F8); /* movss */
    xmm0 = xmm0 * MEMF(0x649710); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esp + 0x1B) = 1;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    if ((xmm0 > xmm1)) goto loc_0034740C; /* ja: above (unsigned >) */

loc_00347406: ;
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_0034740C: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    goto loc_00347465;

loc_0034742B: ;
    esi = MEM32(0x84B868);
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    esi = esi + 0x90;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEM8(esp + 0x1B) = 0;
    MEMF(esp + 0x3C) = xmm7; /* movss */
    MEMF(esp + 0x5C) = xmm7; /* movss */

loc_00347465: ;
    ecx = MEM32(0x8470DC);
    xmm4 = MEMF(0x648E18); /* movss */
    esi = MEM32(esp + 0x24);
    edi = MEM32(ebp + 8);
    ecx = ecx + 0x3E0;
    ebx = 4;

loc_00347485: ;
    edx = MEM32(ecx);
    if (TEST_Z(edx, edx)) goto loc_00347503; /* je: equal / zero */

loc_0034748B: ;
    eax = ZX8(MEM8(ecx + -312));
    if (CMP_NE(eax, edi)) goto loc_00347503; /* jne: not equal / not zero */

loc_00347496: ;
    eax = MEM32(ecx + -988);
    xmm0 = MEMF(eax + 0x60); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_003474B0: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    esi = edx;
    edx = ecx + -176;
    eax = MEM32(edx);
    MEM32(esp + 0xC0) = eax;
    eax = MEM32(edx + 4);
    MEM32(esp + 0xC4) = eax;
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC8) = edx;
    eax = MEM32(ecx + -988);
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = eax + 0xA0;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / MEMF(eax + 0x5C); /* divss */
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_00347503: ;
    ecx = ecx + 0x770;
    ebx--;
    if ((ebx != 0)) goto loc_00347485; /* jne: not equal / not zero */

loc_00347510: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(esi, esi)) goto loc_00348323; /* je: equal / zero */

loc_0034751C: ;
    eax = MEM32(esi + 0x568);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00348323; /* je: equal / zero */

loc_0034752C: ;
    SET_LO8(ecx, MEM8(eax + 0x2E2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00348323; /* jne: not equal / not zero */

loc_0034753A: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    SET_LO8(eax, 0x79);
    ecx = esp + 0xF4;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0034754D: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(0x64B298); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E68); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    esp = esp + 4;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM8(0x8086C6) = 1;
    MEM8(0x8086CA) = 0;
    MEMF(0x80761C) = xmm6; /* movss */
    MEMF(0x807620) = xmm6; /* movss */
    MEMF(0x807624) = xmm6; /* movss */
    xmm5 = xmm6; /* movaps */
    xmm4 = xmm6; /* movaps */
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003D3AA0(); /* call 0x003D3AA0 */

loc_003475A4: ;
    xmm4 = xmm7; /* movaps */
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3B30(); /* call 0x003D3B30 */

loc_003475AF: ;
    eax = 0; /* xor self */
    MEM8(0x807667) = 0xFF;
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_003475BD: ;
    PUSH32(esp, 1);
    MEM8(0x800EF0) = 0;
    MEM8(0x800EF1) = 0;
    MEM8(0x800EF2) = 0;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003475D9: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003475E5: ;
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    edx = esp + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x549AF8) = esi;
    PUSH32(esp, 0); sub_00346820(); /* call 0x00346820 */

loc_0034760B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003469D0(); /* call 0x003469D0 */

loc_00347611: ;
    (void)0; /* cmp MEM32(0x84A144), esi - flags set for next jcc */
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0xCC) = esi;
    if (CMP_EQ(MEM32(0x84A144), esi)) goto loc_00347686; /* je: equal / zero */

loc_00347636: ;
    eax = MEM32(esp + 0x2C);
    ecx = (int32_t)MEMF(eax + 0x214); /* cvttss2si */
    edx = (int32_t)MEMF(eax + 0x21C); /* cvttss2si */
    MEM32(esp + 0xA4) = ecx;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    MEM32(esp + 0xA4) = edx;
    edx = (int32_t)MEMF(eax + 0x220); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 0x218); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = eax;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_00347686: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002200D0(); /* call 0x002200D0 */

loc_0034768C: ;
    xmm0 = MEMF(edi * 4 + 0x84B0C8); /* movss */
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003476AA; /* je: equal / zero */

loc_0034769C: ;
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_003476BB;

loc_003476AA: ;
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_003476BB: ;
    if ((xmm1 > xmm0)) goto loc_003476C0; /* ja: above (unsigned >) */

loc_003476BD: ;
    xmm0 = xmm1; /* movaps */

loc_003476C0: ;
    eax = edi;
    eax = eax << 7;
    MEMF(edi * 4 + 0x84B0C8) = xmm0; /* movss */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0xB8) = eax;
    /* nop */

loc_003476E0: ;
    edx = MEM32(esp + 0xB8);
    ecx = MEM32(esp + 0x2C);
    xmm1 = 0.0f; /* xorps self = zero */
    eax = edx + ecx;
    xmm0 = MEMF(eax * 4 + 0x84A6C8); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    eax = eax * 4 + 0x84A6C8;
    MEM32(esp + 0x20) = eax;
    if ((xmm0 > xmm1)) goto loc_00347713; /* ja: above (unsigned >) */

loc_00347710: ;
    xmm0 = xmm1; /* movaps */

loc_00347713: ;
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ecx), 0)) goto loc_00348289; /* je: equal / zero */

loc_00347726: ;
    ebx = MEM32(esp + 0x2C);
    ecx = MEM32(0x84A5F8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    esi = MEM32(ebx + ecx + 0x64);
    ebx = ebx + ecx;
    (void)0; /* cmp esi, 0x36 - flags set for next jcc */
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(esi, 0x36)) goto loc_00347755; /* je: equal / zero */

loc_0034774B: ;
    (void)0; /* cmp esi, 0x37 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(esi, 0x37)) goto loc_0034775A; /* jne: not equal / not zero */

loc_00347755: ;
    MEM8(esp + 0xF) = 1;

loc_0034775A: ;
    (void)0; /* cmp esi, 0x2D - flags set for next jcc */
    MEM8(esp + 0x12) = (CMP_EQ(esi, 0x2D)) ? 1 : 0; /* sete */
    if (CMP_NE(esi, 0x3D)) goto loc_0034777B; /* jne: not equal / not zero */

loc_00347767: ;
    edi = MEM32(esp + 0x24);
    edx = ebx;
    PUSH32(esp, 0); sub_00348B40(); /* call 0x00348B40 */

loc_00347772: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347780; /* je: equal / zero */

loc_0034777B: ;
    MEM8(esp + 0x10) = 0;

loc_00347780: ;
    (void)0; /* cmp esi, 0x44 - flags set for next jcc */
    esi = ebx;
    MEM8(esp + 0x11) = (CMP_EQ(esi, 0x44)) ? 1 : 0; /* sete */
    PUSH32(esp, 0); sub_002F8CF0(); /* call 0x002F8CF0 */

loc_0034778F: ;
    if (TEST_Z(eax, eax)) goto loc_003477BB; /* je: equal / zero */

loc_00347793: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003477BB; /* je: equal / zero */

loc_0034779D: ;
    ecx = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(ecx, MEM32(ebp + 8))) goto loc_003477BB; /* jne: not equal / not zero */

loc_003477A9: ;
    MEM8(esp + 0xE) = 1;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x28) = ebx;
    goto loc_0034785F;

loc_003477BB: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xE) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003477D5; /* je: equal / zero */

loc_003477C8: ;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x28) = ebx;
    goto loc_0034785F;

loc_003477D5: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00348A10(); /* call 0x00348A10 */

loc_003477DC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003477EA; /* je: equal / zero */

loc_003477E0: ;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x28) = ebx;
    goto loc_0034785F;

loc_003477EA: ;
    ecx = MEM32(esp + 0x24);
    esi = ebx;
    PUSH32(esp, 0); sub_00348AC0(); /* call 0x00348AC0 */

loc_003477F5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00348289; /* je: equal / zero */

loc_003477FD: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00347310(); /* call 0x00347310 */

loc_00347804: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0034784E; /* je: equal / zero */

loc_0034780A: ;
    PUSH32(esp, 0); sub_002F8CF0(); /* call 0x002F8CF0 */

loc_0034780F: ;
    if (TEST_Z(eax, eax)) goto loc_00347830; /* je: equal / zero */

loc_00347813: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00347830; /* je: equal / zero */

loc_0034781D: ;
    edx = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_00347830; /* jne: not equal / not zero */

loc_00347829: ;
    MEM8(esp + 0xE) = 1;
    goto loc_0034784E;

loc_00347830: ;
    eax = ebx;
    MEM8(esp + 0xE) = 0;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_0034783C: ;
    if (CMP_EQ(eax, 0xB)) goto loc_0034784E; /* je: equal / zero */

loc_00347841: ;
    MEM8(esp + 0x1A) = 1;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x28) = ebx;

loc_0034784E: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00348289; /* je: equal / zero */

loc_0034785F: ;
    eax = MEM32(esp + 0x28);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00347874: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003478BD; /* jne: not equal / not zero */

loc_00347888: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003478BD; /* jne: not equal / not zero */

loc_00347890: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003478BD; /* jne: not equal / not zero */

loc_00347898: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003478BD; /* jne: not equal / not zero */

loc_003478A0: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003478BD; /* jne: not equal / not zero */

loc_003478A8: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_00348B40(); /* call 0x00348B40 */

loc_003478B5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348289; /* jne: not equal / not zero */

loc_003478BD: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - MEMF(0x648EB8); /* subss */
    xmm0 = xmm0 * MEMF(0x648EB4); /* mulss */
    xmm0 = xmm0 * MEMF(0x648EB0); /* mulss */
    xmm1 = MEMF(0x75ECB0); /* movss */
    edi = MEM32(esp + 0x1C);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x648D3C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm0 > xmm1)) goto loc_0034790D; /* ja: above (unsigned >) */

loc_00347900: ;
    xmm0 = MEMF(0x648EAC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00347916; /* jbe: below or equal (unsigned <=) */

loc_0034790D: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */

loc_00347916: ;
    eax = MEM32(0x84A144);
    if (CMP_LE(eax & eax, 0)) goto loc_0034792D; /* jle: less or equal (signed <=) */

loc_0034791F: ;
    xmm1 = xmm1 * MEMF(0x648CF0); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0034792D: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    esi = ebx;
    PUSH32(esp, 0); sub_00348350(); /* call 0x00348350 */

loc_00347945: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(ebp + 8);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC4);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00348580(); /* call 0x00348580 */

loc_00347976: ;
    SET_LO8(ecx, MEM8(esp + 0x36));
    esp = esp + 0x28;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003479BA; /* je: equal / zero */

loc_00347981: ;
    xmm0 = MEMF(esi * 4 + 0x84B0C8); /* movss */
    xmm0 = xmm0 * MEMF(0x6494FC); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esi * 4 + 0x84B0C8); /* movss */
    xmm0 = xmm0 * MEMF(0x648EEC); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    SET_LO8(eax, 1);
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x44) = edx;
    goto loc_003479C1;

loc_003479BA: ;
    ecx = MEM32(esp + 0x84);

loc_003479C1: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00348289; /* je: equal / zero */

loc_003479E7: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348289; /* jne: not equal / not zero */

loc_003479F3: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x807667) = LO8(ecx);
    MEM8(0x807697) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347AA8; /* jne: not equal / not zero */

loc_00347A0B: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347AA8; /* jne: not equal / not zero */

loc_00347A17: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347AA8; /* jne: not equal / not zero */

loc_00347A23: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347AA8; /* jne: not equal / not zero */

loc_00347A2F: ;
    ecx = MEM32(0x5A02D0);
    eax = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x94) = ecx;
    xmm0 = MEMF(esp + 0x94); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEM32(esp + 0x90) = eax;
    eax = ebx;
    MEM32(esp + 0x98) = edx;
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00348DD0(); /* call 0x00348DD0 */

loc_00347A76: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347A8E; /* je: equal / zero */

loc_00347A7A: ;
    PUSH32(esp, 0); sub_00346820(); /* call 0x00346820 */

loc_00347A7F: ;
    ecx = ZX16(MEM16(ebx + 0x60));
    MEM32(eax + ecx * 4 + 0x600) = 3;

loc_00347A8E: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00346820(); /* call 0x00346820 */

loc_00347A9B: ;
    PUSH32(esp, eax);
    edx = 5;
    eax = ebx;
    PUSH32(esp, 0); sub_00346860(); /* call 0x00346860 */

loc_00347AA8: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp + 0x5BC;
    ecx = esp + 0x60;
    PUSH32(esp, 0); sub_00348480(); /* call 0x00348480 */

loc_00347AC5: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(eax, eax)) goto loc_00348289; /* je: equal / zero */

loc_00347AD4: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003488E0(); /* call 0x003488E0 */

loc_00347ADF: ;
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x800EF6) = 0x96;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347AFD; /* je: equal / zero */

loc_00347AED: ;
    MEM8(0x800EF4) = 0x96;
    MEM8(0x800EF5) = 0xFF;
    goto loc_00347B0B;

loc_00347AFD: ;
    MEM8(0x800EF4) = 0xFF;
    MEM8(0x800EF5) = 0x96;

loc_00347B0B: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00347B27; /* je: equal / zero */

loc_00347B15: ;
    eax = MEM32(eax + 0x444);
    SET_LO8(ecx, MEM8(eax + 0x10));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0xE) = 1;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347B2C; /* jne: not equal / not zero */

loc_00347B27: ;
    MEM8(esp + 0xE) = 0;

loc_00347B2C: ;
    SET_LO8(eax, MEM8(ebx + 0x250));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x11) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347B59; /* je: equal / zero */

loc_00347B3B: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    if (CMP_NE(MEM32(ecx + edx + -1644), 0x34)) goto loc_00347B59; /* jne: not equal / not zero */

loc_00347B54: ;
    MEM8(esp + 0x11) = 1;

loc_00347B59: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347B81; /* jne: not equal / not zero */

loc_00347B61: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347B81; /* jne: not equal / not zero */

loc_00347B69: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347B81; /* jne: not equal / not zero */

loc_00347B71: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347F53; /* je: equal / zero */

loc_00347B7D: ;
    edi = MEM32(esp + 0x1C);

loc_00347B81: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63B848);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00347B95: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x649D7C); /* mulss */
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347BCB; /* jne: not equal / not zero */

loc_00347BB7: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00347BCB; /* jne: not equal / not zero */

loc_00347BBF: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347D96; /* je: equal / zero */

loc_00347BCB: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003488E0(); /* call 0x003488E0 */

loc_00347BD6: ;
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x800EF6) = 0x96;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347BF4; /* je: equal / zero */

loc_00347BE4: ;
    MEM8(0x800EF4) = 0x96;
    MEM8(0x800EF5) = 0xFF;
    goto loc_00347C02;

loc_00347BF4: ;
    MEM8(0x800EF4) = 0xFF;
    MEM8(0x800EF5) = 0x96;

loc_00347C02: ;
    edx = MEM32(edi + 0x238);
    eax = MEM32(edx);
    if (CMP_A(eax, 3)) goto loc_00347CCA; /* ja: above (unsigned >) */

loc_00347C13: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x348334); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347C1Au) goto loc_00347C1A;
    if (_jt == 0x00347C4Fu) goto loc_00347C4F;
    if (_jt == 0x00347C85u) goto loc_00347C85;
    if (_jt == 0x00348323u) goto loc_00348323;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00347C1A: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63B83C);
    eax = esp + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00347C2E: ;
    eax = esp + 0x170;
    edx = esp + 0xF0;
    ecx = eax;
    edx = edx - ecx;

loc_00347C40: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347C40; /* jne: not equal / not zero */

loc_00347C4A: ;
    goto loc_00347CCA;

loc_00347C4F: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63B834);
    edx = esp + 0x2F8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00347C63: ;
    eax = 0; /* xor self */
    goto loc_00347C70;

    /* nop */
    edi = edi;

loc_00347C70: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x2F0));
    MEM8(esp + eax + 0xF0) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347C70; /* jne: not equal / not zero */

loc_00347C83: ;
    goto loc_00347CCA;

loc_00347C85: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63B828);
    eax = esp + 0x1F8;
    PUSH32(esp, eax);
    MEM8(0x800EF4) = 0x96;
    MEM8(0x800EF5) = 0xC8;
    MEM8(0x800EF6) = 0xFF;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00347CAE: ;
    eax = esp + 0x1F0;
    edx = esp + 0xF0;
    ecx = eax;
    edx = edx - ecx;

loc_00347CC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347CC0; /* jne: not equal / not zero */

loc_00347CCA: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x14); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347FC4; /* je: equal / zero */

loc_00347CDC: ;
    eax = MEM32(edi + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00347D96; /* je: equal / zero */

loc_00347CF8: ;
    SET_LO8(ecx, MEM8(eax + 0x2C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00347D96; /* je: equal / zero */

loc_00347D03: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE0) = ecx;
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x64ABD8); /* mulss */
    eax = 0x63B80C;
    ecx = esp + 0x54;
    MEM32(esp + 0xD8) = edx;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_00347D5F: ;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0xDC); /* addss */
    PUSH32(esp, ecx);
    esi = eax;
    edi = esp + 0xDC;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00348C30(); /* call 0x00348C30 */

loc_00347D8D: ;
    SET_LO8(ebx, 1);
    esp = esp + 4;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00347D96: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    eax = 0x63B7F0;
    esi = esp + 0x3F4;
    PUSH32(esp, 0); sub_000654F0(); /* call 0x000654F0 */

loc_00347DAF: ;
    esp = esp + 4;
    edx = esp + 0xF0;
    /* nop */

loc_00347DC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347DC0; /* jne: not equal / not zero */

loc_00347DCA: ;
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00347DDB: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 4;
    ecx = esp + 0x40;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00347DF3: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x59A8D8); /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E3C); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm3; /* movss */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00347E44; /* jne: not equal / not zero */

loc_00347E3C: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347E4E; /* je: equal / zero */

loc_00347E44: ;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x68) = xmm2; /* movss */

loc_00347E4E: ;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x68);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x9C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ebx = MEM32(esp + 0x9C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_00347E8F: ;
    SET_LO8(eax, MEM8(esp + 0x2B));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00347F53; /* je: equal / zero */

loc_00347E9E: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x63B7E4);
    ecx = esp + 0x278;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00347EB2: ;
    eax = esp + 0x270;
    edx = esp + 0xF0;
    ecx = eax;
    edx = edx - ecx;

loc_00347EC4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347EC4; /* jne: not equal / not zero */

loc_00347ECE: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    eax = 0x63B7F0;
    esi = esp + 0x374;
    PUSH32(esp, 0); sub_000654F0(); /* call 0x000654F0 */

loc_00347EE7: ;
    esp = esp + 4;
    edx = esp + 0xF0;

loc_00347EF1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00347EF1; /* jne: not equal / not zero */

loc_00347EFB: ;
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00347F0C: ;
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x44;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00347F21: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_00347F50: ;
    esp = esp + 0x1C;

loc_00347F53: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x649D7C); /* mulss */
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm1; /* movss */
    (void)0; /* cmp MEM32(ecx + 0x64), 0x36 - flags set for next jcc */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    if (CMP_NE(MEM32(ecx + 0x64), 0x36)) goto loc_00347FD7; /* jne: not equal / not zero */

loc_00347F9C: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    edx = esp + 0xFC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0); sub_00347090(); /* call 0x00347090 */

loc_00347FBF: ;
    esp = esp + 0x14;
    goto loc_00347FE7;

loc_00347FC4: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    goto loc_00347D96;

loc_00347FD7: ;
    esi = MEM32(esp + 0x24);
    edi = esp + 0x4C;
    PUSH32(esp, 0); sub_00348C30(); /* call 0x00348C30 */

loc_00347FE4: ;
    esp = esp + 4;

loc_00347FE7: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(ecx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348112; /* jne: not equal / not zero */

loc_00347FF9: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348112; /* jne: not equal / not zero */

loc_00348005: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348112; /* jne: not equal / not zero */

loc_00348011: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348112; /* jne: not equal / not zero */

loc_0034801D: ;
    edx = 2;
    eax = esp + 0x470;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0034802E: ;
    SET_LO8(eax, MEM8(0x75A168));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348112; /* jne: not equal / not zero */

loc_0034803B: ;
    edx = MEM32(esp + 0x1C);
    edi = ZX16(MEM16(edx + 0x60));
    esi = esp + 0x470;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_0034804F: ;
    if (TEST_Z(eax, eax)) goto loc_00348112; /* je: equal / zero */

loc_00348057: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0034805E: ;
    eax = SX8(LO8(eax));
    if (CMP_GE(eax & eax, 0)) goto loc_00348069; /* jge: greater or equal (signed >=) */

loc_00348065: ;
    eax = 0; /* xor self */
    goto loc_00348073;

loc_00348069: ;
    if (CMP_LE(eax, 0x17)) goto loc_00348073; /* jle: less or equal (signed <=) */

loc_0034806E: ;
    eax = 0x17;

loc_00348073: ;
    eax = MEM32(eax * 4 + 0x6BD440);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00348083: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00348094: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    eax = MEM32(esp + 0x24);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A73C); /* mulss */
    MEMF(esp + 0xD4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(esp + 0x48); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x6496BC); /* mulss */
    xmm0 = xmm0 * MEMF(0x64A478); /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_0034810F: ;
    esp = esp + 0x18;

loc_00348112: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00348289; /* je: equal / zero */

loc_0034811E: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348289; /* jne: not equal / not zero */

loc_0034812A: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348289; /* jne: not equal / not zero */

loc_00348136: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00348289; /* jne: not equal / not zero */

loc_00348142: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x649D7C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    SET_LO8(eax, MEM8(esp + 0xE));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = MEMF(esp + 0xE4); /* movss */
    xmm3 = MEMF(esp + 0xE8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x59A8D8); /* mulss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E3C); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x88) = xmm2; /* movss */
    MEMF(esp + 0x8C) = xmm3; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003481B3; /* je: equal / zero */

loc_003481A6: ;
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x88) = xmm1; /* movss */

loc_003481B3: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x2C7;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_003481C1: ;
    esp = esp + 4;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_003481D5: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x238);
    eax = MEM32(edx);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0034820A; /* je: equal / zero */

loc_003481E6: ;
    eax--;
    if ((eax != 0)) goto loc_0034822F; /* jne: not equal / not zero */

loc_003481E9: ;
    xmm0 = MEMF(0x64B294); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_00348229;

loc_0034820A: ;
    xmm0 = MEMF(0x64B294); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */

loc_00348229: ;
    MEMF(esp + 0x78) = xmm0; /* movss */

loc_0034822F: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x44); /* cvtsi2ss */
    fp_push(MEMF(esp + 0xD4)); /* fld float */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x84);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x98);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x98);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00357FB0(); /* call 0x00357FB0 */

loc_00348286: ;
    esp = esp + 0x24;

loc_00348289: ;
    eax = MEM32(esp + 0x2C);
    eax++;
    (void)0; /* cmp eax, 0x80 - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(eax, 0x80)) goto loc_003476E0; /* jl: less (signed <) */

loc_0034829D: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003482DE; /* je: equal / zero */

loc_003482A5: ;
    eax = MEM32(0x84A13C);
    ecx = MEM32(esp + 0xB4);
    esi = MEM32(ecx + eax + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_003482C3: ;
    SET_LO16(edx, ZX8(MEM8(ebp + 8)));
    esi = esi + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(0x81BD26) = LO16(edx);

loc_003482DE: ;
    eax = esp + 0x5B0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00346C90(); /* call 0x00346C90 */

loc_00348305: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0034831C; /* je: equal / zero */

loc_00348311: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_0034831C: ;
    MEM8(0x8086C6) = 1;

loc_00348323: ;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_0034832C: ;
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
 * sub_00348350
 * Original: 0x00348350 - 0x003483C3 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00348350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    SET_LO8(eax, MEM8(0x87AAB0));
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = 1;
    (void)0; /* test LO8(edx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(edx), LO8(eax))) goto loc_00348392; /* jne: not equal / not zero */

loc_0034836C: ;
    eax = MEM32(0x87AAB0);
    xmm0 = MEMF(0x648E5C); /* movss */
    eax = eax | edx;
    MEM32(0x87AAB0) = eax;
    MEM32(0x87AAA8) = 0x3D;
    MEMF(0x87AAAC) = xmm0; /* movss */

loc_00348392: ;
    ecx = MEM32(esi + 0x64);
    (void)0; /* cmp ecx, 0x44 - flags set for next jcc */
    xmm0 = MEMF(0x649248); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(ecx, 0x44)) goto loc_003483B1; /* jne: not equal / not zero */

loc_003483A8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003483B1: ;
    eax = 0; /* xor self */

loc_003483B3: ;
    if (CMP_EQ(MEM32(eax * 8 + 0x87AAA8), ecx)) { sub_003483C3(); return; } /* je: equal / zero */

loc_003483BC: ;
    eax++;
    if (CMP_B(eax, edx)) goto loc_003483B3; /* jb: below (unsigned <) */

loc_003483C1: ;
    g_seh_ebp = ebp; sub_003483D2(); return; /* tail jmp 0x003483D2 */

}

/**
 * sub_00348480
 * Original: 0x00348480 - 0x0034849C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348480: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x64);
    if (CMP_NE(eax, 0x36)) { sub_0034849C(); return; } /* jne: not equal / not zero */

loc_00348495: ;
    eax = 0x63B7CC;
    g_seh_ebp = ebp; sub_003484D8(); return; /* tail jmp 0x003484D8 */

}

/**
 * sub_00348580
 * Original: 0x00348580 - 0x00348813 (659 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348580: ;
    esp = esp - 0x10;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = MEM32(ecx + 8);
    xmm6 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(0x84A13C);
    PUSH32(esp, edi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    edi = edi + esi;
    esi = MEM32(esp + 0x24);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x28) = xmm1; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00348633; /* je: equal / zero */

loc_003485C8: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003485EA; /* je: equal / zero */

loc_003485D4: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + -1744;

loc_003485EA: ;
    xmm0 = MEMF(edx + ebx * 4 + 0x67C); /* movss */
    xmm0 = xmm0 * MEMF(0x649508); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = edx + 0x90;
    ecx = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    if ((xmm1 <= xmm0)) goto loc_00348619; /* jbe: below or equal (unsigned <=) */

loc_00348614: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00348621;

loc_00348619: ;
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00348621; /* jbe: below or equal (unsigned <=) */

loc_0034861E: ;
    xmm0 = xmm6; /* movaps */

loc_00348621: ;
    xmm1 = MEMF(edi + 0x1F8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */

loc_00348633: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = ebp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    esi = ebp + 8;
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_0034864C: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm7 = MEMF(0x7F9F58); /* movss */
    xmm7 = xmm7 * MEMF(0x648CE4); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 0x10;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0034868B; /* jbe: below or equal (unsigned <=) */

loc_00348685: ;
    xmm0 = MEMF(esp + 0x34); /* movss */

loc_0034868B: ;
    fp_push(MEMF(ebp + 4)); /* fld float */
    xmm0 = xmm0 / MEMF(edi + 0x1FC); /* divss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = ebp + 4;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003486C8; /* ja: above (unsigned >) */

loc_003486BF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_003486C8: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMD(0x649818)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00348703; /* jbe: below or equal (unsigned <=) */

loc_003486F4: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, MEMF(0x59D948) - sets EFLAGS */
    if ((xmm0 > MEMF(0x59D948))) goto loc_00348717; /* ja: above (unsigned >) */

loc_00348703: ;
    xmm0 = MEMF(0x648EB8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    MEM8(esp + 0x34) = 0;
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_0034871C; /* jbe: below or equal (unsigned <=) */

loc_00348717: ;
    MEM8(esp + 0x34) = 1;

loc_0034871C: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    xmm0 = MEMF(eax); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00348737: ;
    esi = MEM32(esp + 0x34);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_00348758; /* je: equal / zero */

loc_00348742: ;
    ecx = ebx;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x16E));
    ecx = ecx & edx;
    if (CMP_EQ(ecx, edx)) goto loc_0034878C; /* je: equal / zero */

loc_00348758: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034878C; /* jne: not equal / not zero */

loc_00348760: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034878C; /* je: equal / zero */

loc_00348764: ;
    SET_LO8(eax, MEM8(ebx + 0x762E40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x38);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003487AF; /* jne: not equal / not zero */

loc_00348772: ;
    xmm7 = xmm7 * MEMF(0x648CE0); /* mulss */
    xmm7 = xmm7 + MEMF(eax); /* addss */
    /* comiss xmm6, xmm7 - sets EFLAGS */
    if ((xmm6 > xmm7)) goto loc_00348786; /* ja: above (unsigned >) */

loc_00348783: ;
    xmm7 = xmm6; /* movaps */

loc_00348786: ;
    MEMF(eax) = xmm7; /* movss */
    goto loc_003487AF;

loc_0034878C: ;
    edx = MEM32(esp + 0x38);
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003487AB; /* jp: parity */

loc_003487A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003487AB: ;
    eax = MEM32(esp + 0x38);

loc_003487AF: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    fp_push(MEMD(0x649818)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00348813(); return; } /* jbe: below or equal (unsigned <=) */

loc_003487C5: ;
    /* comiss xmm0, MEMF(0x59D948) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x59D948))) { sub_00348813(); return; } /* jbe: below or equal (unsigned <=) */

loc_003487CE: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    edx = MEM32(esp + 0x40);
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    eax = MEM32(esp + 0x3C);
    xmm6 = xmm6 * MEMF(0x6494FC); /* mulss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    MEM32(eax) = ecx;
    POP32(esp, edi);
    MEM32(edx) = 0;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    POP32(esp, esi);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ecx));
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
 * sub_003488E0
 * Original: 0x003488E0 - 0x00348A05 (293 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003488E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003488E0: ;
    SET_LO8(eax, MEM8(0x75A168));
    esp = esp - 0x140;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x148);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003489C1; /* jne: not equal / not zero */

loc_003488FB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x876758);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0034891A; /* jne: not equal / not zero */

loc_00348907: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0034891A: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003489C0; /* jne: not equal / not zero */

loc_00348927: ;
    eax = MEM32(0x876748);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    if (CMP_NE(eax, esi)) goto loc_003489BF; /* jne: not equal / not zero */

loc_00348938: ;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_00348959; /* jne: not equal / not zero */

loc_0034893D: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00348950: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003489BF; /* jne: not equal / not zero */

loc_00348959: ;
    if (CMP_EQ(MEM32(0x876744), esi)) goto loc_00348973; /* je: equal / zero */

loc_00348961: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00348966: ;
    eax = eax - MEM32(0x876744);
    if (CMP_B(eax, 0x7D0)) goto loc_003489BF; /* jb: below (unsigned <) */

loc_00348973: ;
    if (TEST_Z(ebp, ebp)) goto loc_003489BF; /* je: equal / zero */

loc_00348977: ;
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_003489BF; /* jne: not equal / not zero */

loc_0034897D: ;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00348989: ;
    edi = ZX16(MEM16(ebp + 0x60));
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_00348996: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003489BE; /* je: equal / zero */

loc_0034899C: ;
    eax = MEM32(ebp + 0x238);
    edx = MEM32(esi);
    edi = MEM32(eax);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_003489AB: ;
    if (CMP_EQ(eax, edi)) goto loc_003489BE; /* je: equal / zero */

loc_003489AF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003489B6: ;
    ecx = MEM32(ebp + 0x238);
    MEM32(ecx) = eax;

loc_003489BE: ;
    POP32(esp, edi);

loc_003489BF: ;
    POP32(esp, esi);

loc_003489C0: ;
    POP32(esp, ebx);

loc_003489C1: ;
    eax = MEM32(esp + 0x14C);
    edx = MEM32(ebp + 0x238);
    ecx = MEM32(eax + 0x238);
    edx = MEM32(edx);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_003489FB; /* je: equal / zero */

loc_003489DA: ;
    ebp = MEM32(ebp + 0x568);
    if (TEST_Z(ebp, ebp)) { sub_00348A05(); return; } /* je: equal / zero */

loc_003489E4: ;
    ebp = MEM32(ebp + 0x444);
    if (TEST_Z(ebp, ebp)) { sub_00348A05(); return; } /* je: equal / zero */

loc_003489EE: ;
    eax = MEM32(ebp + 0x280);
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00348A05(); return; } /* je: equal / zero */

loc_003489FB: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x140;
    esp += 4; return; /* ret */

}

/**
 * sub_00348A10
 * Original: 0x00348A10 - 0x00348AB4 (164 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A10(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00348A10: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A1B: ;
    if (CMP_EQ(eax, 0x35)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A24: ;
    ecx = MEM32(esi + 0x68);
    if (CMP_EQ(ecx, 0x138)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A33: ;
    if (CMP_EQ(ecx, 0xC5)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A3B: ;
    if (CMP_EQ(eax, 0x37)) goto loc_00348A9E; /* je: equal / zero */

loc_00348A40: ;
    if (CMP_EQ(eax, 0x36)) goto loc_00348A9E; /* je: equal / zero */

loc_00348A45: ;
    if (CMP_EQ(eax, 0x2D)) goto loc_00348A9E; /* je: equal / zero */

loc_00348A4A: ;
    if (CMP_EQ(eax, 0x3D)) goto loc_00348A9E; /* je: equal / zero */

loc_00348A4F: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A59: ;
    SET_LO8(ecx, MEM8(eax + 0x38D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00348AB4(); return; } /* jne: not equal / not zero */

loc_00348A63: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A6D: ;
    SET_LO8(eax, MEM8(esi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348A77: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00348AB4(); return; } /* jne: not equal / not zero */

loc_00348A81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_00348A87: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00348AB4(); return; } /* jne: not equal / not zero */

loc_00348A8E: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0); sub_00394720(); /* call 0x00394720 */

loc_00348A97: ;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    esp += 4; return; /* ret */

loc_00348A9E: ;
    SET_LO8(eax, MEM8(esi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00348AB4(); return; } /* je: equal / zero */

loc_00348AA8: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00348AC0
 * Original: 0x00348AC0 - 0x00348B32 (114 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348AC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00348AC0: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x35)) goto loc_00348ACD; /* je: equal / zero */

loc_00348AC8: ;
    if (CMP_NE(eax, 0x2D)) { sub_00348B32(); return; } /* jne: not equal / not zero */

loc_00348ACD: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x138)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348AD7: ;
    if (CMP_EQ(eax, 0xC5)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348ADE: ;
    if (CMP_EQ(esi, ecx)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348AE2: ;
    eax = ZX16(MEM16(esi + 0x60));
    ecx = ZX8(MEM8(ecx + 0x135));
    eax++;
    if (CMP_EQ(ecx, eax)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348AF2: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348AFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_00348B02: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00348B32(); return; } /* jne: not equal / not zero */

loc_00348B09: ;
    eax = MEM32(esi + 0x570);
    if (TEST_Z(eax, eax)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348B13: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0x18A)) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348B1C: ;
    SET_LO8(eax, MEM8(esi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00348B32(); return; } /* je: equal / zero */

loc_00348B26: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00348B40
 * Original: 0x00348B40 - 0x00348B67 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00348B40: ;
    if (CMP_NE(MEM32(edx + 0x64), 0x3D)) { sub_00348B67(); return; } /* jne: not equal / not zero */

loc_00348B46: ;
    eax = MEM32(edx + 0x238);
    ecx = MEM32(eax);
    eax = MEM32(edi + 0x238);
    eax = MEM32(eax);
    if (CMP_EQ(eax, ecx)) { sub_00348B67(); return; } /* je: equal / zero */

loc_00348B5A: ;
    if (CMP_EQ(eax, 2)) { sub_00348B67(); return; } /* je: equal / zero */

loc_00348B5F: ;
    if (CMP_EQ(ecx, 2)) { sub_00348B67(); return; } /* je: equal / zero */

loc_00348B64: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00348BF0
 * Original: 0x00348BF0 - 0x00348C21 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00348BF0: ;
    edx = esi;
    PUSH32(esp, 0); sub_00348B40(); /* call 0x00348B40 */

loc_00348BF7: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00348C1E; /* je: equal / zero */

loc_00348BFB: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00348C21(); return; } /* je: equal / zero */

loc_00348C05: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_NE(MEM32(eax + ecx + -1644), 0x35)) { sub_00348C21(); return; } /* jne: not equal / not zero */

loc_00348C1E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00348C30
 * Original: 0x00348C30 - 0x00348CF4 (196 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348C30: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    eax = esi;
    MEM8(0x8086C4) = 0;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_00348C4E: ;
    xmm0 = MEMF(edi); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(edi) = xmm0; /* movss */
    SET_LO8(edx, MEM8(0x800EF4));
    SET_LO8(ecx, MEM8(0x800EF6));
    SET_LO8(eax, MEM8(0x800EF5));
    MEM8(0x807664) = LO8(edx);
    SET_LO8(edx, MEM8(0x800EF0));
    MEM8(0x807666) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x800EF2));
    MEM8(0x807665) = LO8(eax);
    SET_LO8(eax, MEM8(0x800EF1));
    MEM8(0x807694) = LO8(edx);
    MEM8(0x807696) = LO8(ecx);
    esp = esp + 8;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM32(0x8076B0) = ebx;
    MEM8(0x807695) = LO8(eax);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00348CDF: ;
    (void)0; /* cmp MEM32(0x8086E8), ebx - flags set for next jcc */
    MEM32(0x549AF8) = ebx;
    if (CMP_NE(MEM32(0x8086E8), ebx)) { sub_00348CF4(); return; } /* jne: not equal / not zero */

loc_00348CED: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_00348CF2: ;
    g_seh_ebp = ebp; sub_00348CF9(); return; /* tail jmp 0x00348CF9 */

}

/**
 * sub_00348D30
 * Original: 0x00348D30 - 0x00348DC6 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348D30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00348D30: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8470DC);
    edx = eax + ecx + 0x330;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00348D53: ;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00348580(); /* call 0x00348580 */

loc_00348D7E: ;
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00348DC0; /* je: equal / zero */

loc_00348D85: ;
    SET_LO8(eax, MEM8(esp + 8));
    xmm0 = MEMF(0x648D10); /* movss */
    esi = MEM32(esp + 0x24);
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    edi = esp + 0x14;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00348C30(); /* call 0x00348C30 */

loc_00348DBD: ;
    esp = esp + 4;

loc_00348DC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00348DD0
 * Original: 0x00348DD0 - 0x00348E2F (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348DD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00348DD0: ;
    ecx = ZX16(MEM16(eax + 0x3AE));
    edx = ZX16(MEM16(eax + 0x3AA));
    ecx = ecx + edx;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00348E00; /* je: equal / zero */

loc_00348DEE: ;
    ecx = ZX8(MEM8(ecx + 0x2D2));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00348E00: ;
    edx = ZX16(MEM16(eax + 0x3B0));
    eax = ZX16(MEM16(eax + 0x3AC));
    eax = eax + edx;
    if (CMP_LE(eax & eax, 0)) { sub_00348E2F(); return; } /* jle: less or equal (signed <=) */

loc_00348E14: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648EA8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00348E2F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00348E29: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00348E40
 * Original: 0x00348E40 - 0x00348EB0 (112 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348E40: ;
    ecx = ZX16(MEM16(eax + 0x3AE));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x3AA));
    ecx = ecx + esi;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x568);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00348E75; /* je: equal / zero */

loc_00348E63: ;
    ecx = ZX8(MEM8(ecx + 0x2D2));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00348E75: ;
    ecx = ZX16(MEM16(eax + 0x3B0));
    eax = ZX16(MEM16(eax + 0x3AC));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00348EAA; /* jle: less or equal (signed <=) */

loc_00348E94: ;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm3; /* divss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edx) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00348EB0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00348EA5: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_00348EBC(); return; /* tail jmp 0x00348EBC */

loc_00348EAA: ;
    MEMF(edx) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00348EB8(); return; /* tail jmp 0x00348EB8 */

}

/**
 * sub_00348FB0
 * Original: 0x00348FB0 - 0x003498A5 (2293 bytes, 562 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00348FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    eax = MEM32(0x84B868);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x238);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00348FE0; /* je: equal / zero */

loc_00348FD7: ;
    if (CMP_EQ(MEM32(ecx), 3)) goto loc_0034989E; /* je: equal / zero */

loc_00348FE0: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, 0); sub_00348E40(); /* call 0x00348E40 */

loc_00348FF8: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034989E; /* je: equal / zero */

loc_00349003: ;
    edx = MEM32(0x6B826C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0034900F: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00349016: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(0x84A13C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2B0);
    edx = ebx + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00349035: ;
    ecx = MEM32(0x84A13C);
    edx = ebx + ecx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0034904C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00349052: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0034905C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00349062: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00349071: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00349087: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_003490A9; /* jb: below (unsigned <) */

loc_0034909A: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003490A9: ;
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
    if (CMP_NE(eax, 2)) goto loc_00349106; /* jne: not equal / not zero */

loc_003490D7: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_003490DC: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_003490E1: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_003490F7; /* jb: below (unsigned <) */

loc_003490E8: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003490F7: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_003490FF: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00349104: ;
    MEM32(esi) = eax;

loc_00349106: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00349115: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0034912E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = 1;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00349150: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    MEM32(0x547360) = eax;
    MEM32(0x54737C) = eax;
    eax = 3;
    ecx = ecx | 0xC01;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = 1;
    MEM32(0x5499F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547368) = edi;
    MEM32(0x547370) = 4;
    MEM32(0x547378) = edi;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003491BA: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003491D3: ;
    SET_LO8(eax, MEM8(0x75C14C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x549AF4) = 0x303;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_003491ED; /* ja: above (unsigned >) */

loc_003491E6: ;
    ecx = 0; /* xor self */
    goto loc_00349279;

loc_003491ED: ;
    esi = MEM32(0x75C148);
    if (CMP_NE(MEM32(esi + 8), edi)) goto loc_00349220; /* jne: not equal / not zero */

loc_003491F8: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00349209: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00349211: ;
    ecx = MEM32(0x75C148);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C148);

loc_00349220: ;
    if (CMP_NE(MEM32(esi + 0x10), edi)) goto loc_00349248; /* jne: not equal / not zero */

loc_00349225: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0034922D: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C148);
    if (CMP_NE(MEM32(esi + 0x10), edi)) goto loc_00349248; /* jne: not equal / not zero */

loc_0034923B: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C148);

loc_00349248: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00349271; /* jne: not equal / not zero */

loc_00349250: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = esi + 4;
    if (CMP_NE(ecx, edi)) goto loc_0034926C; /* jne: not equal / not zero */

loc_0034925A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00349263: ;
    esi = MEM32(0x75C148);
    esp = esp + 8;

loc_0034926C: ;
    ecx = MEM32(esi + 4);
    goto loc_00349279;

loc_00349271: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00349276: ;
    ecx = MEM32(eax + 4);

loc_00349279: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00349280: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0xC);
    esi = esi + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = esp + 0xA4;
    MEM32(esp + 0x14) = esi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_003498C0(); /* call 0x003498C0 */

loc_003492B2: ;
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = esp + 0x6C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_003492F0: ;
    ecx = MEM32(0x84A13C);
    edx = ebx + ecx + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00349307: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    esi = 0; /* xor self */
    goto loc_00349340;

    /* nop */
    /* nop */

loc_00349340: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esi + 0x590608;
    PUSH32(esp, eax);
    ecx = esp + esi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00349356: ;
    esi = esi + 0xC;
    if (CMP_L(esi, 0x30)) goto loc_00349340; /* jl: less (signed <) */

loc_0034935E: ;
    edx = ZX8(MEM8(esp + 0x54));
    eax = ZX8(MEM8(esp + 0x50));
    ecx = MEM32(0x5499E8);
    ebx = 0; /* xor self */
    SET_HI8(ebx, MEM8(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    SET_LO8(ebx, MEM8(esp + 0x64));
    ebx = ebx << 8;
    ebx = ebx | edx;
    ebx = ebx << 8;
    ebx = ebx | eax;
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_00349389: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edx = edx + 0x200;
    esi = eax + 0x78;
    if (CMP_B(esi, edx)) goto loc_003493D0; /* jb: below (unsigned <) */

loc_003493A1: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x27C)) goto loc_003493B8; /* jae: above or equal (unsigned >=) */

loc_003493B3: ;
    ecx = 0x27C;

loc_003493B8: ;
    if (CMP_AE(eax, 0x27C)) goto loc_003493C4; /* jae: above or equal (unsigned >=) */

loc_003493BF: ;
    eax = 0x27C;

loc_003493C4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003493CA: ;
    ecx = MEM32(0x5499E8);

loc_003493D0: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm4 = MEMF(esp + 0x38); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(esp + 0x44); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(0x75C61C));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_0034951A; /* ja: above (unsigned >) */

loc_00349513: ;
    esi = 0; /* xor self */
    goto loc_003495B5;

loc_0034951A: ;
    esi = MEM32(0x75C618);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00349552; /* jne: not equal / not zero */

loc_00349527: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00349538: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00349540: ;
    ecx = MEM32(0x75C618);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C618);

loc_00349552: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00349581; /* jne: not equal / not zero */

loc_00349559: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00349561: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C618);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00349581; /* jne: not equal / not zero */

loc_00349574: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C618);

loc_00349581: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_003495AD; /* jne: not equal / not zero */

loc_00349589: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_003495A8; /* jne: not equal / not zero */

loc_00349593: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0034959C: ;
    esi = MEM32(0x75C618);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;

loc_003495A8: ;
    esi = MEM32(esi + 4);
    goto loc_003495B5;

loc_003495AD: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_003495B2: ;
    esi = MEM32(eax + 4);

loc_003495B5: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, 4)) goto loc_003495E5; /* ja: above (unsigned >) */

loc_003495BD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3498A8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003495C4u) goto loc_003495C4;
    if (_jt == 0x003495CAu) goto loc_003495CA;
    if (_jt == 0x003495CFu) goto loc_003495CF;
    if (_jt == 0x003495D5u) goto loc_003495D5;
    if (_jt == 0x003495E5u) goto loc_003495E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003495C4: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    goto loc_003495DB;

loc_003495CA: ;
    ecx = MEM32(esi + 0x1C);
    goto loc_003495DA;

loc_003495CF: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    goto loc_003495DB;

loc_003495D5: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);

loc_003495DA: ;
    PUSH32(esp, ecx);

loc_003495DB: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003495E2: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_003495E5: ;
    edi = MEM32(0x5499F0);
    esi = MEM32(esp + 0x10);
    edi = edi | 0x800;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    MEM32(0x5499F0) = edi;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x64AAF0); /* mulss */
    xmm1 = xmm1 * MEMF(0x649030); /* mulss */
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    MEM32(0x547368) = 2;
    ecx = 0x10;
    edi = esp + 0xA4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003496C0: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    esi = 0; /* xor self */
    /* nop */

loc_003496F0: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esi + 0x590608;
    PUSH32(esp, eax);
    ecx = esp + esi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00349706: ;
    esi = esi + 0xC;
    if (CMP_L(esi, 0x30)) goto loc_003496F0; /* jl: less (signed <) */

loc_0034970E: ;
    edx = MEM32(0x5499E8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0034971C: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edx = edx + 0x200;
    esi = eax + 0x78;
    if (CMP_B(esi, edx)) goto loc_00349763; /* jb: below (unsigned <) */

loc_00349734: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x27C)) goto loc_0034974B; /* jae: above or equal (unsigned >=) */

loc_00349746: ;
    ecx = 0x27C;

loc_0034974B: ;
    if (CMP_AE(eax, 0x27C)) goto loc_00349757; /* jae: above or equal (unsigned >=) */

loc_00349752: ;
    eax = 0x27C;

loc_00349757: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0034975D: ;
    ecx = MEM32(0x5499E8);

loc_00349763: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm4 = MEMF(esp + 0x38); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(esp + 0x44); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;

loc_0034989E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003498C0
 * Original: 0x003498C0 - 0x0034992C (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003498C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003498C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = ZX16(MEM16(ebx + 0x60));
    esi = eax + eax * 4;
    eax = MEM32(ebx + 0xB0);
    ecx = MEM32(esi * 8 + 0x86F7DC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = esi * 8 + 0x86F7C8;
    if (CMP_EQ(eax, ecx)) goto loc_003498F4; /* je: equal / zero */

loc_003498ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00346AE0(); /* call 0x00346AE0 */

loc_003498F4: ;
    ecx = MEM32(esi + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_00349907; /* je: equal / zero */

loc_003498FB: ;
    esi = MEM32(esi + 0x20);
    esi = esi - ecx;
    esi = (uint32_t)((int32_t)esi >> 4);
    if (TEST_NZ(esi, esi)) { sub_0034992C(); return; } /* jne: not equal / not zero */

loc_00349907: ;
    esi = esp + 0x14;
    edx = esp + 0x18;
    ecx = ebx;
    PUSH32(esp, 0); sub_00349A00(); /* call 0x00349A00 */

loc_00349916: ;
    ecx = MEM32(ebx + 0x78);
    MEM32(edi) = ecx;
    edx = MEM32(ebx + 0x7C);
    MEM32(edi + 4) = edx;
    eax = MEM32(ebx + 0x80);
    MEM32(edi + 8) = eax;
    g_seh_ebp = ebp; sub_00349944(); return; /* tail jmp 0x00349944 */

}

/**
 * sub_00349A00
 * Original: 0x00349A00 - 0x00349A26 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00349A00: ;
    eax = MEM32(ecx + 0x64);
    if (CMP_EQ(eax, 0x36)) goto loc_00349A0D; /* je: equal / zero */

loc_00349A08: ;
    if (CMP_NE(eax, 0x37)) { sub_00349A26(); return; } /* jne: not equal / not zero */

loc_00349A0D: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA0); /* movss */
    MEMF(esi) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00349B30
 * Original: 0x00349B30 - 0x00349B69 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00349B30: ;
    eax = MEM32(0x84B0DC);
    if (CMP_GE(eax, 3)) goto loc_00349B68; /* jge: greater or equal (signed >=) */

loc_00349B3A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    eax = eax + 0x870BC8;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x64);
    MEM32(eax + 4) = edx;
    PUSH32(esp, ecx);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00349B5A: ;
    eax = MEM32(0x84B0DC);
    esp = esp + 0xC;
    eax++;
    MEM32(0x84B0DC) = eax;

loc_00349B68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00349B70
 * Original: 0x00349B70 - 0x00349BBB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00349B70: ;
    eax = MEM32(0x84B0DC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00349BAF; /* jle: less or equal (signed <=) */

loc_00349B7C: ;
    PUSH32(esp, esi);
    esi = 0x870BC8;

loc_00349B82: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00349B9E; /* je: equal / zero */

loc_00349B88: ;
    edx = MEM32(esi + 4);
    ecx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax + 0x78;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00348D30(); /* call 0x00348D30 */

loc_00349B9B: ;
    esp = esp + 0xC;

loc_00349B9E: ;
    eax = MEM32(0x84B0DC);
    edi++;
    esi = esi + 0xD0;
    if (CMP_L(edi, eax)) goto loc_00349B82; /* jl: less (signed <) */

loc_00349BAE: ;
    POP32(esp, esi);

loc_00349BAF: ;
    MEM32(0x84B0DC) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00349BC0
 * Original: 0x00349BC0 - 0x00349BE8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349BC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00349BC0: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x7F9F4C); /* movss */
    xmm1 = xmm0; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00349BDA; /* jne: not equal / not zero */

loc_00349BD7: ;
    xmm1 = xmm2; /* movaps */

loc_00349BDA: ;
    /* comiss xmm1, MEMF(ecx) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx))) { sub_00349BE8(); return; } /* jbe: below or equal (unsigned <=) */

loc_00349BDF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00349C20
 * Original: 0x00349C20 - 0x00349C30 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 4);
    if (TEST_NZ(esi, esi)) { sub_00349C30(); return; } /* jne: not equal / not zero */

loc_00349C2C: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00349C38(); return; /* tail jmp 0x00349C38 */

}

/**
 * sub_00349C80
 * Original: 0x00349C80 - 0x00349CAE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00349C80: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00349C97; /* je: equal / zero */

loc_00349C88: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00349C94: ;
    esp = esp + 4;

loc_00349C97: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00349CB0
 * Original: 0x00349CB0 - 0x00349D2B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00349CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F710);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00349CE4: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_00349CFD; /* je: equal / zero */

loc_00349CFB: ;
    MEM32(eax) = eax;

loc_00349CFD: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00349D13; /* je: equal / zero */

loc_00349D11: ;
    MEM32(ecx) = eax;

loc_00349D13: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
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
 * sub_00349D50
 * Original: 0x00349D50 - 0x00349D6C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349D50: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00349D68; /* je: equal / zero */

loc_00349D5C: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 4);
    if (TEST_NZ(eax, eax)) { sub_00349D6C(); return; } /* jne: not equal / not zero */

loc_00349D68: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00349D73(); return; /* tail jmp 0x00349D73 */

}

/**
 * sub_00349DA0
 * Original: 0x00349DA0 - 0x00349E17 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00349DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F700);
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
    PUSH32(esp, 0x34);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00349DD4: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00349DFB; /* je: equal / zero */

loc_00349DEA: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0034A120(); /* call 0x0034A120 */

loc_00349DFB: ;
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
 * sub_00349E40
 * Original: 0x00349E40 - 0x00349EC6 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00349E40: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0x5D1745D;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_00349EBC; /* jae: above or equal (unsigned >=) */

loc_00349E52: ;
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

loc_00349E76: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00349E7F: ;
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

loc_00349EA4: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00349EBB: ;
    POP32(esp, ebx);

loc_00349EBC: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00349ED0
 * Original: 0x00349ED0 - 0x00349F1A (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00349ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F860);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    ebx = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -64) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -60) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -56) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -52) = edx;
    ecx = MEM32(ebx + 4);
    if (TEST_NZ(ecx, ecx)) { sub_00349F1A(); return; } /* jne: not equal / not zero */

loc_00349F16: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00349F22(); return; /* tail jmp 0x00349F22 */

}

/**
 * sub_0034A120
 * Original: 0x0034A120 - 0x0034A177 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A120(void)
{

loc_0034A120: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 8;
    esi = edx;
    ebx = MEM32(esi);
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(edi + 8) = esi;
    esi = edx + 0xC;
    ebx = MEM32(esi);
    edi = ecx + 0xC;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(edi + 8) = esi;
    esi = MEM32(edx + 0x18);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(edx + 0x20);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(edx + 0x1C);
    MEM32(ecx + 0x1C) = esi;
    edx = MEM32(edx + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x28) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034A180
 * Original: 0x0034A180 - 0x0034A1AC (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034A180: ;
    if (CMP_EQ(eax, ecx)) goto loc_0034A1AB; /* je: equal / zero */

loc_0034A184: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0034A187: ;
    esi = edx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    eax = eax + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(edi + 0xC) = esi;
    if (CMP_NE(eax, ecx)) goto loc_0034A187; /* jne: not equal / not zero */

loc_0034A1A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0034A1AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A1B0
 * Original: 0x0034A1B0 - 0x0034A1F9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0034A1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F180);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_0034A1E0: ;
    if (CMP_BE(edi & edi, 0)) { sub_0034A1F9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0034A1E4: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00264F10(); /* call 0x00264F10 */

loc_0034A1ED: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_0034A1E0;

}

/**
 * sub_0034A220
 * Original: 0x0034A220 - 0x0034A24F (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A220(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034A220: ;
    if (CMP_EQ(edx, ecx)) goto loc_0034A24E; /* je: equal / zero */

loc_0034A224: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0034A227: ;
    ecx = ecx - 0x10;
    eax = eax - 0x10;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    if (CMP_NE(ecx, edx)) goto loc_0034A227; /* jne: not equal / not zero */

loc_0034A24B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0034A24E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A250
 * Original: 0x0034A250 - 0x0034A261 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A250(void)
{

loc_0034A250: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 8);
    edx = edx + ecx;
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A270
 * Original: 0x0034A270 - 0x0034A373 (259 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A270: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_L(eax, ebx)) goto loc_0034A282; /* jl: less (signed <) */

loc_0034A27D: ;
    if (CMP_L(eax, 0x55)) goto loc_0034A2EC; /* jl: less (signed <) */

loc_0034A282: ;
    eax = 0; /* xor self */

loc_0034A284: ;
    eax = MEM32(eax * 4 + 0x74C578);

loc_0034A28B: ;
    if (CMP_EQ(eax, ebx)) goto loc_0034A36B; /* je: equal / zero */

loc_0034A293: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0xB);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0034A2A4: ;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0xB;
    MEM32(esp + 4) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0034A2C7: ;
    goto loc_0034A2D0;

    /* nop */

loc_0034A2D0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0034A2FA; /* jl: less (signed <) */

loc_0034A2DE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0034A2FA; /* jg: greater (signed >) */

loc_0034A2E5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0034A2EA: ;
    goto loc_0034A2D0;

loc_0034A2EC: ;
    if (CMP_L(eax, 0x4B)) goto loc_0034A284; /* jl: less (signed <) */

loc_0034A2F1: ;
    eax = MEM32(eax * 4 + 0x69CF90);
    goto loc_0034A28B;

loc_0034A2FA: ;
    if (CMP_EQ(MEM32(ecx + 4), ebx)) goto loc_0034A312; /* je: equal / zero */

loc_0034A2FF: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84B0EC) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_0034A329; /* jne: not equal / not zero */

loc_0034A30D: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_0034A312: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_0034A320; /* je: equal / zero */

loc_0034A31C: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_0034A320: ;
    eax = MEM32(eax);
    MEM32(0x84B0EC) = eax;
    goto loc_0034A338;

loc_0034A329: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_0034A338: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0034A341: ;
    eax = MEM32(0x84B0EC);
    if (CMP_NE(eax, ebx)) { sub_0034A373(); return; } /* jne: not equal / not zero */

loc_0034A34A: ;
    MEM16(0x84B0E4) = LO16(ebx);
    MEM16(0x84B0E8) = LO16(ebx);
    MEM32(0x84B0E0) = ebx;
    PUSH32(esp, 0); sub_0034A4B0(); /* call 0x0034A4B0 */

loc_0034A363: ;
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0034A36B: ;
    MEM32(0x84B0EC) = ebx;
    goto loc_0034A34A;

}

/**
 * sub_0034A450
 * Original: 0x0034A450 - 0x0034A4AA (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A450(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034A450: ;
    ecx = MEM32(0x84B0EC);
    if (TEST_Z(ecx, ecx)) goto loc_0034A495; /* je: equal / zero */

loc_0034A45A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034A468: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0034A493; /* je: equal / zero */

loc_0034A46E: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0034A479; /* je: equal / zero */

loc_0034A475: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0034A479: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0034A493; /* jne: not equal / not zero */

loc_0034A480: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0034A489: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0034A493: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0034A495: ;
    eax = MEM32(0x84B0E0);
    if (TEST_Z(eax, eax)) goto loc_0034A4A9; /* je: equal / zero */

loc_0034A49E: ;
    PUSH32(esp, 0x84B0E0);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0034A4A8: ;
    POP32(esp, ecx);

loc_0034A4A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A4B0
 * Original: 0x0034A4B0 - 0x0034A85B (939 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A4B0: ;
    esp = esp - 0x30;
    xmm0 = MEMF(0x648E98); /* movss */
    xmm1 = MEMF(0x648E60); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B0E0);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    if (CMP_L(esi, 4)) goto loc_0034A5F3; /* jl: less (signed <) */

loc_0034A529: ;
    edi = esi + -4;
    edi = edi >> 2;
    edi++;
    ecx = ebp + 0x32;
    ebx = edi * 4;
    /* nop */

loc_0034A540: ;
    edx = ZX8(MEM8(ecx));
    xmm0 = MEMF(ecx + -46); /* movss */
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034A559; /* jbe: below or equal (unsigned <=) */

loc_0034A553: ;
    MEMF(esp + edx * 4 + 0x10) = xmm0; /* movss */

loc_0034A559: ;
    /* comiss xmm0, MEMF(esp + edx * 4 + 0x28) - sets EFLAGS */
    edx = esp + edx * 4 + 0x28;
    if ((xmm0 <= MEMF(esp + edx * 4 + 0x28))) goto loc_0034A568; /* jbe: below or equal (unsigned <=) */

loc_0034A564: ;
    MEMF(edx) = xmm0; /* movss */

loc_0034A568: ;
    edx = ZX8(MEM8(ecx + 0x38));
    xmm0 = MEMF(ecx + 0xA); /* movss */
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034A582; /* jbe: below or equal (unsigned <=) */

loc_0034A57C: ;
    MEMF(esp + edx * 4 + 0x10) = xmm0; /* movss */

loc_0034A582: ;
    /* comiss xmm0, MEMF(esp + edx * 4 + 0x28) - sets EFLAGS */
    edx = esp + edx * 4 + 0x28;
    if ((xmm0 <= MEMF(esp + edx * 4 + 0x28))) goto loc_0034A591; /* jbe: below or equal (unsigned <=) */

loc_0034A58D: ;
    MEMF(edx) = xmm0; /* movss */

loc_0034A591: ;
    edx = ZX8(MEM8(ecx + 0x70));
    xmm0 = MEMF(ecx + 0x42); /* movss */
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034A5AB; /* jbe: below or equal (unsigned <=) */

loc_0034A5A5: ;
    MEMF(esp + edx * 4 + 0x10) = xmm0; /* movss */

loc_0034A5AB: ;
    /* comiss xmm0, MEMF(esp + edx * 4 + 0x28) - sets EFLAGS */
    edx = esp + edx * 4 + 0x28;
    if ((xmm0 <= MEMF(esp + edx * 4 + 0x28))) goto loc_0034A5BA; /* jbe: below or equal (unsigned <=) */

loc_0034A5B6: ;
    MEMF(edx) = xmm0; /* movss */

loc_0034A5BA: ;
    edx = ZX8(MEM8(ecx + 0xA8));
    xmm0 = MEMF(ecx + 0x7A); /* movss */
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034A5D7; /* jbe: below or equal (unsigned <=) */

loc_0034A5D1: ;
    MEMF(esp + edx * 4 + 0x10) = xmm0; /* movss */

loc_0034A5D7: ;
    /* comiss xmm0, MEMF(esp + edx * 4 + 0x28) - sets EFLAGS */
    edx = esp + edx * 4 + 0x28;
    if ((xmm0 <= MEMF(esp + edx * 4 + 0x28))) goto loc_0034A5E6; /* jbe: below or equal (unsigned <=) */

loc_0034A5E2: ;
    MEMF(edx) = xmm0; /* movss */

loc_0034A5E6: ;
    ecx = ecx + 0xE0;
    edi--;
    if ((edi != 0)) goto loc_0034A540; /* jne: not equal / not zero */

loc_0034A5F3: ;
    if (CMP_GE(ebx, esi)) goto loc_0034A630; /* jge: greater or equal (signed >=) */

loc_0034A5F7: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebp + 0x32;
    esi = esi - ebx;

loc_0034A602: ;
    edx = ZX8(MEM8(ecx));
    xmm0 = MEMF(ecx + -46); /* movss */
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034A61B; /* jbe: below or equal (unsigned <=) */

loc_0034A615: ;
    MEMF(esp + edx * 4 + 0x10) = xmm0; /* movss */

loc_0034A61B: ;
    /* comiss xmm0, MEMF(esp + edx * 4 + 0x28) - sets EFLAGS */
    edx = esp + edx * 4 + 0x28;
    if ((xmm0 <= MEMF(esp + edx * 4 + 0x28))) goto loc_0034A62A; /* jbe: below or equal (unsigned <=) */

loc_0034A626: ;
    MEMF(edx) = xmm0; /* movss */

loc_0034A62A: ;
    ecx = ecx + 0x38;
    esi--;
    if ((esi != 0)) goto loc_0034A602; /* jne: not equal / not zero */

loc_0034A630: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    SET_LO8(edx, 0); /* xor self */
    ecx = 0; /* xor self */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    MEM8(0x80131C) = LO8(edx);
    if ((xmm0 < MEMF(esp + 0x10))) goto loc_0034A655; /* jb: below (unsigned <) */

loc_0034A647: ;
    SET_LO8(edx, 1);
    MEM8(0x8012F8) = LO8(ecx);
    MEM8(0x80131C) = LO8(edx);

loc_0034A655: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x14))) goto loc_0034A674; /* jb: below (unsigned <) */

loc_0034A662: ;
    esi = ZX8(LO8(edx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x8012F8) = 1;
    MEM8(0x80131C) = LO8(edx);

loc_0034A674: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x18))) goto loc_0034A693; /* jb: below (unsigned <) */

loc_0034A681: ;
    esi = ZX8(LO8(edx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x8012F8) = 2;
    MEM8(0x80131C) = LO8(edx);

loc_0034A693: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x1C))) goto loc_0034A6B2; /* jb: below (unsigned <) */

loc_0034A6A0: ;
    esi = ZX8(LO8(edx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x8012F8) = 3;
    MEM8(0x80131C) = LO8(edx);

loc_0034A6B2: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x20))) goto loc_0034A6D1; /* jb: below (unsigned <) */

loc_0034A6BF: ;
    esi = ZX8(LO8(edx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x8012F8) = 4;
    MEM8(0x80131C) = LO8(edx);

loc_0034A6D1: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x24))) goto loc_0034A6F0; /* jb: below (unsigned <) */

loc_0034A6DE: ;
    esi = ZX8(LO8(edx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x8012F8) = 5;
    MEM8(0x80131C) = LO8(edx);

loc_0034A6F0: ;
    xmm0 = MEMF(0x648D10); /* movss */
    ebx = ZX8(LO8(edx));
    ebx--;
    if (CMP_L(ebx, 4)) goto loc_0034A7F4; /* jl: less (signed <) */

loc_0034A705: ;
    ebp = ebx + -3;
    goto loc_0034A710;

    /* nop */

loc_0034A710: ;
    edx = ZX8(MEM8(ecx + 0x8012F8));
    esi = ZX8(MEM8(ecx + 0x8012F9));
    xmm1 = MEMF(esp + esi * 4 + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + edx * 4 + 0x28); /* addss */
    edx = esp + edx * 4 + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x801300) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    /* comiss xmm1, MEMF(esp + esi * 4 + 0x10) - sets EFLAGS */
    if ((xmm1 <= MEMF(esp + esi * 4 + 0x10))) goto loc_0034A74B; /* jbe: below or equal (unsigned <=) */

loc_0034A746: ;
    eax = 1;

loc_0034A74B: ;
    edi = ZX8(MEM8(ecx + 0x8012FA));
    xmm1 = MEMF(esp + edi * 4 + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + esi * 4 + 0x28); /* addss */
    edx = esp + esi * 4 + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x801304) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    /* comiss xmm1, MEMF(esp + edi * 4 + 0x10) - sets EFLAGS */
    if ((xmm1 <= MEMF(esp + edi * 4 + 0x10))) goto loc_0034A77F; /* jbe: below or equal (unsigned <=) */

loc_0034A77A: ;
    eax = 1;

loc_0034A77F: ;
    esi = ZX8(MEM8(ecx + 0x8012FB));
    xmm1 = MEMF(esp + esi * 4 + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + edi * 4 + 0x28); /* addss */
    edx = esp + edi * 4 + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x801308) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    /* comiss xmm1, MEMF(esp + esi * 4 + 0x10) - sets EFLAGS */
    if ((xmm1 <= MEMF(esp + esi * 4 + 0x10))) goto loc_0034A7B3; /* jbe: below or equal (unsigned <=) */

loc_0034A7AE: ;
    eax = 1;

loc_0034A7B3: ;
    edx = ZX8(MEM8(ecx + 0x8012FC));
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + esi * 4 + 0x28); /* addss */
    edx = esp + edx * 4 + 0x10;
    esi = esp + esi * 4 + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x80130C) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    /* comiss xmm1, MEMF(edx) - sets EFLAGS */
    if ((xmm1 <= MEMF(edx))) goto loc_0034A7E9; /* jbe: below or equal (unsigned <=) */

loc_0034A7E4: ;
    eax = 1;

loc_0034A7E9: ;
    ecx = ecx + 4;
    if (CMP_L(ecx, ebp)) goto loc_0034A710; /* jl: less (signed <) */

loc_0034A7F4: ;
    if (CMP_GE(ecx, ebx)) goto loc_0034A842; /* jge: greater or equal (signed >=) */

loc_0034A7F8: ;
    goto loc_0034A800;

    /* nop */

loc_0034A800: ;
    edx = ZX8(MEM8(ecx + 0x8012F9));
    esi = ZX8(MEM8(ecx + 0x8012F8));
    xmm1 = MEMF(esp + edx * 4 + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + esi * 4 + 0x28); /* addss */
    edx = esp + edx * 4 + 0x10;
    esi = esp + esi * 4 + 0x28;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx * 4 + 0x801300) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    /* comiss xmm1, MEMF(edx) - sets EFLAGS */
    if ((xmm1 <= MEMF(edx))) goto loc_0034A83D; /* jbe: below or equal (unsigned <=) */

loc_0034A838: ;
    eax = 1;

loc_0034A83D: ;
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_0034A800; /* jl: less (signed <) */

loc_0034A842: ;
    xmm0 = MEMF(0x648E94); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx * 4 + 0x801300) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A860
 * Original: 0x0034A860 - 0x0034A88D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A860(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0034A860: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x6493D4); /* movss */
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(0x84B0E0);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(esi, edx)) { sub_0034A88D(); return; } /* jne: not equal / not zero */

loc_0034A886: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0034AA70
 * Original: 0x0034AA70 - 0x0034AA91 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034AA70: ;
    eax = MEM32(0x84B0E0);
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    if (TEST_NZ(eax, eax)) { sub_0034AA91(); return; } /* jne: not equal / not zero */

loc_0034AA86: ;
    POP32(esp, ebp);
    eax = 0xFFFF;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0034ACB0
 * Original: 0x0034ACB0 - 0x0034B26D (1469 bytes, 413 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ACB0(void)
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

loc_0034ACB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x213C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0034ACC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(ecx));
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    eax = 0xFFFF;
    MEM16(0x74C528) = LO16(eax);
    MEM32(0x801320) = 0;
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_0034B266; /* jle: less or equal (signed <=) */

loc_0034ACE7: ;
    if (TEST_S(esi, esi)) goto loc_0034B266; /* jl: less (signed <) */

loc_0034ACEF: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    if (CMP_GE(esi, ecx)) goto loc_0034B266; /* jge: greater or equal (signed >=) */

loc_0034ACFE: ;
    edi = SX16(LO16(edi));
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = 1;
    MEM32(esp + 0x34) = edi;
    if (CMP_LE(edi & edi, 0)) goto loc_0034AD36; /* jle: less or equal (signed <=) */

loc_0034AD10: ;
    edx = MEM32(ebp + 0x10);
    edx = ZX16(MEM16(edx + eax * 2));
    if (CMP_NE(esi, edx)) goto loc_0034AD1D; /* jne: not equal / not zero */

loc_0034AD1B: ;
    ebx = 0; /* xor self */

loc_0034AD1D: ;
    eax++;
    if (CMP_L(eax, edi)) goto loc_0034AD10; /* jl: less (signed <) */

loc_0034AD22: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0034AD36; /* jne: not equal / not zero */

loc_0034AD26: ;
    MEM16(0x74C528) = LO16(esi);
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0034AD36: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0034AD48; /* jle: less or equal (signed <=) */

loc_0034AD3A: ;
    eax = 0xF4240;
    edi = esp + 0x1148;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0034AD48: ;
    eax = MEM32(0x84B0E0);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    ebx = 0; /* xor self */
    esi = esi + eax;
    ecx = esi + 0x12;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = 8;
    goto loc_0034AD70;

    /* nop */

loc_0034AD70: ;
    SET_LO16(edi, MEM16(ecx));
    if (CMP_EQ(LO16(edi), 0xFFFF)) goto loc_0034AE14; /* je: equal / zero */

loc_0034AD7E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_0034ADAA; /* jle: less or equal (signed <=) */

loc_0034AD8C: ;
    /* nop */

loc_0034AD90: ;
    edx = MEM32(ebp + 0x14);
    if (CMP_NE(LO16(edi), MEM16(edx + eax * 2))) goto loc_0034ADA1; /* jne: not equal / not zero */

loc_0034AD99: ;
    MEM32(esp + 0x1C) = 0x1388;

loc_0034ADA1: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax++;
    if (CMP_L(eax, edx)) goto loc_0034AD90; /* jl: less (signed <) */

loc_0034ADAA: ;
    SET_LO16(ecx, MEM16(ecx));
    fp_push(MEMF(esi)); /* fld float */
    edx = ZX16(LO16(ecx));
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(0x84B0E0);
    MEM16(esp + ebx * 2 + 0x148) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(esp + edx * 2 + 0x948) = LO16(ecx);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 8)); /* fld float */
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
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034ADF6: ;
    /* fstp st(0) */
    ecx = MEM32(esp + 0x1C);
    /* fstp st(0) */
    edx = SX16(LO16(eax));
    /* fstp st(0) */
    edx = edx + ecx;
    ecx = MEM32(esp + 0x18);
    eax = ZX16(LO16(edi));
    MEM32(esp + eax * 4 + 0x1148) = edx;
    ebx++;

loc_0034AE14: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx + 4;
    eax--;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0034AD70; /* jne: not equal / not zero */

loc_0034AE2A: ;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x14) = 0;

loc_0034AE36: ;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = 0xF4240;
    edx = 0xFFFF;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0034B0B7; /* jle: less or equal (signed <=) */

loc_0034AE4A: ;
    /* nop */

loc_0034AE50: ;
    SET_LO16(ecx, MEM16(esp + eax * 2 + 0x148));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034AE71; /* je: equal / zero */

loc_0034AE5F: ;
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esp + ecx * 4 + 0x1148);
    if (CMP_GE(ecx, esi)) goto loc_0034AE71; /* jge: greater or equal (signed >=) */

loc_0034AE6D: ;
    esi = ecx;
    edx = eax;

loc_0034AE71: ;
    eax++;
    if (CMP_L(eax, ebx)) goto loc_0034AE50; /* jl: less (signed <) */

loc_0034AE76: ;
    if (CMP_EQ(edx, 0xFFFF)) goto loc_0034B0B7; /* je: equal / zero */

loc_0034AE82: ;
    eax = ebx + -1;
    if (CMP_NE(edx, eax)) goto loc_0034AE8F; /* jne: not equal / not zero */

loc_0034AE89: ;
    ebx = eax;
    MEM32(esp + 0x20) = ebx;

loc_0034AE8F: ;
    edi = ZX16(MEM16(esp + edx * 2 + 0x148));
    eax = esp + edx * 2 + 0x148;
    edx = MEM32(esp + 0x34);
    MEM16(eax) = 0xFFFF;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x38) = edi;
    if (CMP_LE(edx & edx, 0)) goto loc_0034AED0; /* jle: less or equal (signed <=) */

loc_0034AEB3: ;
    esi = MEM32(ebp + 0x10);
    esi = ZX16(MEM16(esi + eax * 2));
    if (CMP_NE(edi, esi)) goto loc_0034AEC3; /* jne: not equal / not zero */

loc_0034AEBE: ;
    ecx = 1;

loc_0034AEC3: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_0034AEB3; /* jl: less (signed <) */

loc_0034AEC8: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0034B070; /* jne: not equal / not zero */

loc_0034AED0: ;
    edx = MEM32(esp + edi * 4 + 0x1148);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    edi = edi + MEM32(0x84B0E0);
    ebx = ebx + 0xA;
    eax = edi + 0x12;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = 8;
    /* nop */

loc_0034AF00: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO16(ebx, MEM16(ecx));
    edx = ZX16(LO16(ebx));
    if (CMP_EQ(edx, 0xFFFF)) goto loc_0034B04D; /* je: equal / zero */

loc_0034AF16: ;
    if (CMP_EQ(edx, MEM32(ebp + 8))) goto loc_0034B04D; /* je: equal / zero */

loc_0034AF1F: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0034AF47; /* jle: less or equal (signed <=) */

loc_0034AF2B: ;
    goto loc_0034AF30;

    /* nop */

loc_0034AF30: ;
    esi = MEM32(ebp + 0x14);
    if (CMP_NE(LO16(ebx), MEM16(esi + eax * 2))) goto loc_0034AF3E; /* jne: not equal / not zero */

loc_0034AF39: ;
    ecx = 0x1388;

loc_0034AF3E: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax++;
    if (CMP_L(eax, esi)) goto loc_0034AF30; /* jl: less (signed <) */

loc_0034AF47: ;
    esi = MEM32(0x84B0E0);
    xmm2 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm0 = MEMF(edi); /* movss */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    xmm2 = xmm2 - MEMF(eax + esi + 8); /* subss */
    xmm1 = xmm1 - MEMF(eax + esi + 4); /* subss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    eax = eax + esi;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    ebx = MEM32(esp + 0x28);
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    eax = eax + ebx;
    eax = eax + ecx;
    if (CMP_LE(MEM32(esp + edx * 4 + 0x1148), eax)) goto loc_0034B04D; /* jle: less or equal (signed <=) */

loc_0034AFBD: ;
    ebx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    (void)0; /* cmp ebx, 0xA - flags set for next jcc */
    esi = 0xFFFF;
    if (CMP_LE(ebx, 0xA)) goto loc_0034B011; /* jle: less or equal (signed <=) */

loc_0034AFCD: ;
    /* nop */

loc_0034AFD0: ;
    if (CMP_NE(esi, 0xFFFF)) goto loc_0034AFE4; /* jne: not equal / not zero */

loc_0034AFD8: ;
    if (CMP_NE(MEM16(esp + ecx * 2 + 0x148), LO16(esi))) goto loc_0034AFE4; /* jne: not equal / not zero */

loc_0034AFE2: ;
    esi = ecx;

loc_0034AFE4: ;
    ebx = ZX16(MEM16(esp + ecx * 2 + 0x148));
    if (CMP_NE(ebx, edx)) goto loc_0034B008; /* jne: not equal / not zero */

loc_0034AFF0: ;
    SET_LO16(ecx, MEM16(esp + 0x38));
    MEM16(esp + edx * 2 + 0x948) = LO16(ecx);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + edx * 4 + 0x1148) = eax;

loc_0034B008: ;
    ebx = MEM32(esp + 0x20);
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_0034AFD0; /* jl: less (signed <) */

loc_0034B011: ;
    ebx = MEM32(esp + 0x20);
    if (CMP_NE(ecx, ebx)) goto loc_0034B04D; /* jne: not equal / not zero */

loc_0034B019: ;
    if (CMP_NE(esi, 0xFFFF)) goto loc_0034B031; /* jne: not equal / not zero */

loc_0034B021: ;
    ecx = MEM32(esp + 0x18);
    esi = ebx;
    ebx++;
    ecx++;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ecx;

loc_0034B031: ;
    MEM32(esp + edx * 4 + 0x1148) = eax;
    SET_LO16(eax, MEM16(esp + 0x38));
    MEM16(esp + edx * 2 + 0x948) = LO16(eax);
    MEM16(esp + esi * 2 + 0x148) = LO16(edx);

loc_0034B04D: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x24);
    ecx = ecx + 4;
    eax--;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_0034AF00; /* jne: not equal / not zero */

loc_0034B067: ;
    ebx = MEM32(esp + 0x20);
    goto loc_0034AE36;

loc_0034B070: ;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    MEM16(0x74C528) = LO16(edi);
    if (CMP_EQ(edi, ecx)) goto loc_0034B0A5; /* je: equal / zero */

loc_0034B082: ;
    goto loc_0034B090;

    /* nop */
    goto loc_0034B090;

    /* nop */

loc_0034B090: ;
    MEM16(esp + eax * 2 + 0xC8) = LO16(edi);
    edi = ZX16(MEM16(esp + edi * 2 + 0x948));
    eax++;
    if (CMP_NE(edi, ecx)) goto loc_0034B090; /* jne: not equal / not zero */

loc_0034B0A5: ;
    MEM16(esp + eax * 2 + 0xC8) = LO16(edi);
    eax++;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(eax, 2)) goto loc_0034B0C3; /* jge: greater or equal (signed >=) */

loc_0034B0B7: ;
    eax = 0xFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0034B0C3: ;
    edi = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(esp + edi * 2 + 0xC4));
    edi = edi - 2;
    MEM32(esp + 0x14) = edi;
    esi = 0; /* xor self */
    edi++;
    MEM32(esp + 0x24) = ecx;
    if (((int32_t)edi < 0)) goto loc_0034B121; /* js: sign (negative) */

loc_0034B0DF: ;
    /* nop */

loc_0034B0E0: ;
    eax = ZX16(MEM16(esp + esi * 2 + 0xC8));
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = (int32_t)MEMF(eax + edx); /* cvttss2si */
    eax = eax + edx;
    edx = (int32_t)MEMF(eax + 4); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_003C7CF0(); /* call 0x003C7CF0 */

loc_0034B10E: ;
    esp = esp + 0x14;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    MEM16(esp + esi * 2 + 0x48) = LO16(eax);
    esi++;
    if (CMP_LE(esi, edi)) goto loc_0034B0E0; /* jle: less or equal (signed <=) */

loc_0034B121: ;
    ebx = MEM32(esp + 0x14);
    (void)0; /* cmp MEM16(esp + ebx * 2 + 0x48), 0 - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = xmm4; /* movaps */
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(MEM16(esp + ebx * 2 + 0x48), 0)) goto loc_0034B155; /* je: equal / zero */

loc_0034B138: ;
    if (CMP_EQ(MEM16(esp + ebx * 2 + 0x4A), 0)) goto loc_0034B150; /* je: equal / zero */

loc_0034B140: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0034B258; /* jle: less or equal (signed <=) */

loc_0034B148: ;
    if (CMP_NE(MEM16(esp + ebx * 2 + 0x46), 0)) goto loc_0034B155; /* jne: not equal / not zero */

loc_0034B150: ;
    MEM8(esp + 0x13) = 1;

loc_0034B155: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0034B258; /* jle: less or equal (signed <=) */

loc_0034B15D: ;
    ecx = MEM32(0x84B0E0);

loc_0034B163: ;
    esi = ebx + -1;
    if (CMP_EQ(MEM16(esp + esi * 2 + 0x48), 0)) goto loc_0034B17E; /* je: equal / zero */

loc_0034B16E: ;
    if (TEST_S(esi, esi)) goto loc_0034B17D; /* jl: less (signed <) */

loc_0034B172: ;
    if (CMP_EQ(MEM16(esp + esi * 2 + 0x48), 0)) goto loc_0034B17D; /* je: equal / zero */

loc_0034B17A: ;
    esi--;
    if (((int32_t)esi >= 0)) goto loc_0034B172; /* jns: not sign (positive) */

loc_0034B17D: ;
    esi++;

loc_0034B17E: ;
    eax = ZX16(MEM16(esp + ebx * 2 + 0xC8));
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    edi = ZX16(MEM16(esp + esi * 2 + 0xC8));
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0034B22B; /* je: equal / zero */

loc_0034B199: ;
    if (CMP_EQ(edi, 0xFFFF)) goto loc_0034B22B; /* je: equal / zero */

loc_0034B1A5: ;
    edx = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + ecx;
    eax = eax + ecx;
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x3C;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x3C;
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
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    ecx = MEM32(0x84B0E0);
    goto loc_0034B22E;

loc_0034B22B: ;
    xmm0 = xmm4; /* movaps */

loc_0034B22E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034B24E; /* jne: not equal / not zero */

loc_0034B23D: ;
    if (CMP_EQ(MEM16(esp + ebx * 2 + 0x48), 0)) goto loc_0034B249; /* je: equal / zero */

loc_0034B245: ;
    MEM32(esp + 0x24) = edi;

loc_0034B249: ;
    MEM8(esp + 0x13) = 1;

loc_0034B24E: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = esi;
    if (CMP_G(esi & esi, 0)) goto loc_0034B163; /* jg: greater (signed >) */

loc_0034B258: ;
    eax = MEM32(esp + 0x24);
    edx = (int32_t)xmm3; /* cvttss2si */
    MEM32(0x801320) = edx;

loc_0034B266: ;
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
 * sub_0034B270
 * Original: 0x0034B270 - 0x0034B29A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B270(void)
{

loc_0034B270: ;
    ecx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = (int32_t)MEMF(eax + ecx + 4); /* cvttss2si */
    eax = eax + ecx;
    ecx = (int32_t)MEMF(eax); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_003C7CF0(); /* call 0x003C7CF0 */

loc_0034B296: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B2A0
 * Original: 0x0034B2A0 - 0x0034B2E3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034B2A0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (TEST_S(eax, eax)) { sub_0034B2E3(); return; } /* jl: less (signed <) */

loc_0034B2AA: ;
    edi = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    if (CMP_GE(eax, edi)) { sub_0034B2E3(); return; } /* jge: greater or equal (signed >=) */

loc_0034B2B5: ;
    edi = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edi = MEM32(eax + edi);
    MEM32(esi) = edi;
    esi = MEM32(0x84B0E0);
    esi = MEM32(eax + esi + 4);
    MEM32(edx) = esi;
    edx = MEM32(0x84B0E0);
    eax = MEM32(eax + edx + 8);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B300
 * Original: 0x0034B300 - 0x0034B32D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B300(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034B300: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0034B326; /* jle: less or equal (signed <=) */

loc_0034B30E: ;
    ecx = MEM32(0x84B0E0);
    ecx = ecx + 0x10;

loc_0034B317: ;
    edi = ZX16(MEM16(ecx));
    if (CMP_EQ(edi, esi)) goto loc_0034B32B; /* je: equal / zero */

loc_0034B31E: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, edx)) goto loc_0034B317; /* jl: less (signed <) */

loc_0034B326: ;
    eax = 0xFFFF;

loc_0034B32B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B330
 * Original: 0x0034B330 - 0x0034B572 (578 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B330(void)
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

loc_0034B330: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm4; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) { sub_0034B572(); return; } /* jle: less or equal (signed <=) */

loc_0034B380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B0E0);
    PUSH32(esp, esi);
    ecx = ebp + 0x32;
    SET_LO8(ebx, 1);
    edi = edi;

loc_0034B390: ;
    if (CMP_NE(MEM8(ecx + 1), LO8(ebx))) goto loc_0034B530; /* jne: not equal / not zero */

loc_0034B399: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0034B530; /* jne: not equal / not zero */

loc_0034B3A2: ;
    edx = ecx + -32;
    esi = 8;
    /* nop */

loc_0034B3B0: ;
    SET_LO16(eax, MEM16(edx));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0034B526; /* je: equal / zero */

loc_0034B3BD: ;
    eax = ZX16(LO16(eax));
    if (CMP_LE(eax, edi)) goto loc_0034B526; /* jle: less or equal (signed <=) */

loc_0034B3C8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ebp;
    if (CMP_NE(MEM8(eax + 0x33), LO8(ebx))) goto loc_0034B526; /* jne: not equal / not zero */

loc_0034B3D6: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 - MEMF(ecx + -50); /* subss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 - MEMF(ecx + -42); /* subss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = MEMF(ecx + -42); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + -50); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    xmm0 = xmm0 + xmm3; /* addss */
    if ((xmm4 <= xmm1)) goto loc_0034B44C; /* jbe: below or equal (unsigned <=) */

loc_0034B445: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 >= xmm4)) goto loc_0034B45E; /* jae: above or equal (unsigned >=) */

loc_0034B44A: ;
    goto loc_0034B455;

loc_0034B44C: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0034B526; /* jbe: below or equal (unsigned <=) */

loc_0034B455: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 < xmm4)) goto loc_0034B526; /* jb: below (unsigned <) */

loc_0034B45E: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0034B46D; /* jbe: below or equal (unsigned <=) */

loc_0034B463: ;
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */

loc_0034B46D: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0034B47C; /* jbe: below or equal (unsigned <=) */

loc_0034B472: ;
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = xmm3; /* movaps */

loc_0034B47C: ;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(ecx + -42); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm5; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * MEMF(ecx + -50); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x30); /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x28); /* addss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = MEMF(eax); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm2 = xmm2 + xmm5; /* addss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    if ((xmm2 <= xmm4)) goto loc_0034B506; /* jbe: below or equal (unsigned <=) */

loc_0034B4FC: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0034B506; /* jbe: below or equal (unsigned <=) */

loc_0034B501: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 >= xmm1)) goto loc_0034B515; /* jae: above or equal (unsigned >=) */

loc_0034B506: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 <= xmm2)) goto loc_0034B526; /* jbe: below or equal (unsigned <=) */

loc_0034B50B: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0034B526; /* jbe: below or equal (unsigned <=) */

loc_0034B510: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_0034B526; /* jb: below (unsigned <) */

loc_0034B515: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034B526; /* jbe: below or equal (unsigned <=) */

loc_0034B520: ;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0034B526: ;
    edx = edx + 4;
    esi--;
    if ((esi != 0)) goto loc_0034B3B0; /* jne: not equal / not zero */

loc_0034B530: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    edi++;
    ecx = ecx + 0x38;
    if (CMP_L(edi, eax)) goto loc_0034B390; /* jl: less (signed <) */

loc_0034B543: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((xmm0 < MEMF(esp + 0x10))) { sub_0034B572(); return; } /* jb: below (unsigned <) */

loc_0034B555: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0034B580
 * Original: 0x0034B580 - 0x0034B7A0 (544 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B0E0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    esi = ecx;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = 0xFFFF;
    if (CMP_LE(eax & eax, 0)) goto loc_0034B5BC; /* jle: less or equal (signed <=) */

loc_0034B5A1: ;
    edx = ebx + 0x10;

loc_0034B5A4: ;
    ebp = ZX16(MEM16(edx));
    if (CMP_EQ(ebp, esi)) goto loc_0034B6AB; /* je: equal / zero */

loc_0034B5AF: ;
    ecx++;
    edx = edx + 0x38;
    if (CMP_L(ecx, eax)) goto loc_0034B5A4; /* jl: less (signed <) */

loc_0034B5B7: ;
    ebp = 0xFFFF;

loc_0034B5BC: ;
    MEM32(esp + 0x10) = ebp;

loc_0034B5C0: ;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0034B5E3; /* jle: less or equal (signed <=) */

loc_0034B5C6: ;
    edx = ebx + 0x10;
    /* nop */

loc_0034B5D0: ;
    esi = ZX16(MEM16(edx));
    if (CMP_EQ(esi, edi)) goto loc_0034B6B9; /* je: equal / zero */

loc_0034B5DB: ;
    ecx++;
    edx = edx + 0x38;
    if (CMP_L(ecx, eax)) goto loc_0034B5D0; /* jl: less (signed <) */

loc_0034B5E3: ;
    esi = ebp;

loc_0034B5E5: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    edx = MEM32(esp + 0x10);
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(0x74C530) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0034B74D; /* je: equal / zero */

loc_0034B5FD: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = 2;
    edx = edx + ebx + 0x16;
    /* nop */

loc_0034B610: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B61E; /* jne: not equal / not zero */

loc_0034B615: ;
    if (CMP_NE(MEM16(edx + -4), LO16(ebp))) goto loc_0034B61E; /* jne: not equal / not zero */

loc_0034B61B: ;
    eax = ecx + -2;

loc_0034B61E: ;
    edi = ZX16(MEM16(edx + -4));
    if (CMP_NE(edi, esi)) goto loc_0034B629; /* jne: not equal / not zero */

loc_0034B626: ;
    eax = ecx + -2;

loc_0034B629: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B636; /* jne: not equal / not zero */

loc_0034B62E: ;
    if (CMP_NE(MEM16(edx), LO16(ebp))) goto loc_0034B636; /* jne: not equal / not zero */

loc_0034B633: ;
    eax = ecx + -1;

loc_0034B636: ;
    edi = ZX16(MEM16(edx));
    if (CMP_NE(edi, esi)) goto loc_0034B640; /* jne: not equal / not zero */

loc_0034B63D: ;
    eax = ecx + -1;

loc_0034B640: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B64D; /* jne: not equal / not zero */

loc_0034B645: ;
    if (CMP_NE(MEM16(edx + 4), LO16(ebp))) goto loc_0034B64D; /* jne: not equal / not zero */

loc_0034B64B: ;
    eax = ecx;

loc_0034B64D: ;
    edi = ZX16(MEM16(edx + 4));
    (void)0; /* cmp edi, esi - flags set for next jcc */
    if (CMP_EQ(edi, esi)) eax = ecx; /* cmove */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B664; /* jne: not equal / not zero */

loc_0034B65B: ;
    if (CMP_NE(MEM16(edx + 8), LO16(ebp))) goto loc_0034B664; /* jne: not equal / not zero */

loc_0034B661: ;
    eax = ecx + 1;

loc_0034B664: ;
    edi = ZX16(MEM16(edx + 8));
    if (CMP_NE(edi, esi)) goto loc_0034B66F; /* jne: not equal / not zero */

loc_0034B66C: ;
    eax = ecx + 1;

loc_0034B66F: ;
    ecx = ecx + 4;
    edi = ecx + -2;
    edx = edx + 0x10;
    if (CMP_L(edi, 8)) goto loc_0034B610; /* jl: less (signed <) */

loc_0034B67D: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0034B698; /* je: equal / zero */

loc_0034B686: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    ecx = ecx + eax;
    MEM16(ebx + ecx * 4 + 0x12) = LO16(esi);
    ebx = MEM32(0x84B0E0);

loc_0034B698: ;
    edx = esi;
    eax = eax | 0xFFFFFFFFu;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = 2;
    edx = edx + ebx + 0x16;
    goto loc_0034B6C5;

loc_0034B6AB: ;
    MEM32(esp + 0x10) = ecx;
    ebp = 0xFFFF;
    goto loc_0034B5C0;

loc_0034B6B9: ;
    esi = ecx;
    goto loc_0034B5E5;

loc_0034B6C0: ;
    ebp = 0xFFFF;

loc_0034B6C5: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B6D3; /* jne: not equal / not zero */

loc_0034B6CA: ;
    if (CMP_NE(MEM16(edx + -4), LO16(ebp))) goto loc_0034B6D3; /* jne: not equal / not zero */

loc_0034B6D0: ;
    eax = ecx + -2;

loc_0034B6D3: ;
    ebp = ZX16(MEM16(edx + -4));
    if (CMP_NE(ebp, edi)) goto loc_0034B6DE; /* jne: not equal / not zero */

loc_0034B6DB: ;
    eax = ecx + -2;

loc_0034B6DE: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B6ED; /* jne: not equal / not zero */

loc_0034B6E3: ;
    if (CMP_NE(MEM16(edx), 0xFFFF)) goto loc_0034B6ED; /* jne: not equal / not zero */

loc_0034B6EA: ;
    eax = ecx + -1;

loc_0034B6ED: ;
    ebp = ZX16(MEM16(edx));
    if (CMP_NE(ebp, edi)) goto loc_0034B6F7; /* jne: not equal / not zero */

loc_0034B6F4: ;
    eax = ecx + -1;

loc_0034B6F7: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B706; /* jne: not equal / not zero */

loc_0034B6FC: ;
    if (CMP_NE(MEM16(edx + 4), 0xFFFF)) goto loc_0034B706; /* jne: not equal / not zero */

loc_0034B704: ;
    eax = ecx;

loc_0034B706: ;
    ebp = ZX16(MEM16(edx + 4));
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    if (CMP_EQ(ebp, edi)) eax = ecx; /* cmove */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0034B71F; /* jne: not equal / not zero */

loc_0034B714: ;
    if (CMP_NE(MEM16(edx + 8), 0xFFFF)) goto loc_0034B71F; /* jne: not equal / not zero */

loc_0034B71C: ;
    eax = ecx + 1;

loc_0034B71F: ;
    ebp = ZX16(MEM16(edx + 8));
    if (CMP_NE(ebp, edi)) goto loc_0034B72A; /* jne: not equal / not zero */

loc_0034B727: ;
    eax = ecx + 1;

loc_0034B72A: ;
    ecx = ecx + 4;
    ebp = ecx + -2;
    edx = edx + 0x10;
    if (CMP_L(ebp, 8)) goto loc_0034B6C0; /* jl: less (signed <) */

loc_0034B738: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0034B79A; /* je: equal / zero */

loc_0034B73D: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xE);
    esi = esi + eax;
    MEM16(ebx + esi * 4 + 0x12) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0034B74D: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = 8;

loc_0034B757: ;
    edi = ZX16(MEM16(eax + ebx + 0x12));
    if (CMP_NE(edi, esi)) goto loc_0034B76B; /* jne: not equal / not zero */

loc_0034B760: ;
    MEM16(eax + ebx + 0x12) = LO16(ebp);
    ebx = MEM32(0x84B0E0);

loc_0034B76B: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0034B757; /* jne: not equal / not zero */

loc_0034B771: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    eax = esi;
    ecx = 8;
    goto loc_0034B780;

    /* nop */

loc_0034B780: ;
    esi = ZX16(MEM16(eax + ebx + 0x12));
    if (CMP_NE(esi, edx)) goto loc_0034B794; /* jne: not equal / not zero */

loc_0034B789: ;
    MEM16(eax + ebx + 0x12) = LO16(ebp);
    ebx = MEM32(0x84B0E0);

loc_0034B794: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0034B780; /* jne: not equal / not zero */

loc_0034B79A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B7A0
 * Original: 0x0034B7A0 - 0x0034B826 (134 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B7A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x84B0E0);
    if (CMP_LE(eax & eax, 0)) goto loc_0034B7CF; /* jle: less or equal (signed <=) */

loc_0034B7B8: ;
    edx = edi + 0x10;
    goto loc_0034B7C0;

    /* nop */

loc_0034B7C0: ;
    ebp = ZX16(MEM16(edx));
    if (CMP_EQ(ebp, esi)) goto loc_0034B7D4; /* je: equal / zero */

loc_0034B7C7: ;
    ecx++;
    edx = edx + 0x38;
    if (CMP_L(ecx, eax)) goto loc_0034B7C0; /* jl: less (signed <) */

loc_0034B7CF: ;
    ecx = 0xFFFF;

loc_0034B7D4: ;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0034B7F1; /* jle: less or equal (signed <=) */

loc_0034B7DA: ;
    esi = edi + 0x10;
    /* nop */

loc_0034B7E0: ;
    ebp = ZX16(MEM16(esi));
    if (CMP_EQ(ebp, MEM32(esp + 0x10))) goto loc_0034B7F6; /* je: equal / zero */

loc_0034B7E9: ;
    edx++;
    esi = esi + 0x38;
    if (CMP_L(edx, eax)) goto loc_0034B7E0; /* jl: less (signed <) */

loc_0034B7F1: ;
    edx = 0xFFFF;

loc_0034B7F6: ;
    eax = 0; /* xor self */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    esi = ecx * 4;

loc_0034B802: ;
    ebp = ZX16(MEM16(esi + edi + 0x12));
    if (CMP_NE(ebp, edx)) goto loc_0034B819; /* jne: not equal / not zero */

loc_0034B80B: ;
    ebp = ecx + eax;
    MEM16(edi + ebp * 4 + 0x14) = LO16(ebx);
    edi = MEM32(0x84B0E0);

loc_0034B819: ;
    eax++;
    esi = esi + 4;
    if (CMP_L(eax, 8)) goto loc_0034B802; /* jl: less (signed <) */

loc_0034B822: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B830
 * Original: 0x0034B830 - 0x0034B856 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034B830: ;
    esp = esp - 0xC00;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(0x74C530), esi)) { sub_0034B856(); return; } /* jne: not equal / not zero */

loc_0034B841: ;
    eax = MEM32(esp + 0xC08);
    SET_LO8(eax, MEM8(eax + 0x800EF8));
    POP32(esp, esi);
    esp = esp + 0xC00;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B9B0
 * Original: 0x0034B9B0 - 0x0034BB0C (348 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B9B0: ;
    eax = MEM32(0x74C530);
    esp = esp - 0x800;
    if (CMP_EQ(eax, edx)) goto loc_0034BB00; /* je: equal / zero */

loc_0034B9C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x100;
    edi = 0x800EF8;
    ebx = 1;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x74C530) = edx;
    MEM16(esp + 0xC) = LO16(edx);
    ecx = ebx;
    ebp = 0; /* xor self */
    goto loc_0034B9F0;

    /* nop */

loc_0034B9F0: ;
    eax = ZX16(MEM16(esp + ebp * 2 + 0xC));
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    eax = eax + 0x12;
    edi = 2;
    goto loc_0034BA10;

    /* nop */

loc_0034BA10: ;
    SET_LO16(edx, MEM16(eax));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034BA45; /* je: equal / zero */

loc_0034BA1A: ;
    edx = ZX16(LO16(edx));
    if (CMP_NE(MEM8(edx + 0x800EF8), 0)) goto loc_0034BA45; /* jne: not equal / not zero */

loc_0034BA26: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 2));
    edx = edx & esi;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0034BA45; /* jne: not equal / not zero */

loc_0034BA33: ;
    SET_LO16(edx, MEM16(eax));
    MEM16(esp + ecx * 2 + 0xC) = LO16(edx);
    edx = ZX16(LO16(edx));
    ecx++;
    MEM8(edx + 0x800EF8) = LO8(ebx);

loc_0034BA45: ;
    SET_LO16(edx, MEM16(eax + 4));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034BA7C; /* je: equal / zero */

loc_0034BA50: ;
    edx = ZX16(LO16(edx));
    if (CMP_NE(MEM8(edx + 0x800EF8), 0)) goto loc_0034BA7C; /* jne: not equal / not zero */

loc_0034BA5C: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 6));
    edx = edx & esi;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0034BA7C; /* jne: not equal / not zero */

loc_0034BA69: ;
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(esp + ecx * 2 + 0xC) = LO16(edx);
    edx = ZX16(LO16(edx));
    ecx++;
    MEM8(edx + 0x800EF8) = LO8(ebx);

loc_0034BA7C: ;
    SET_LO16(edx, MEM16(eax + 8));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034BAB3; /* je: equal / zero */

loc_0034BA87: ;
    edx = ZX16(LO16(edx));
    if (CMP_NE(MEM8(edx + 0x800EF8), 0)) goto loc_0034BAB3; /* jne: not equal / not zero */

loc_0034BA93: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0xA));
    edx = edx & esi;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0034BAB3; /* jne: not equal / not zero */

loc_0034BAA0: ;
    SET_LO16(edx, MEM16(eax + 8));
    MEM16(esp + ecx * 2 + 0xC) = LO16(edx);
    edx = ZX16(LO16(edx));
    ecx++;
    MEM8(edx + 0x800EF8) = LO8(ebx);

loc_0034BAB3: ;
    SET_LO16(edx, MEM16(eax + 0xC));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034BAEA; /* je: equal / zero */

loc_0034BABE: ;
    edx = ZX16(LO16(edx));
    if (CMP_NE(MEM8(edx + 0x800EF8), 0)) goto loc_0034BAEA; /* jne: not equal / not zero */

loc_0034BACA: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0xE));
    edx = edx & esi;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0034BAEA; /* jne: not equal / not zero */

loc_0034BAD7: ;
    SET_LO16(edx, MEM16(eax + 0xC));
    MEM16(esp + ecx * 2 + 0xC) = LO16(edx);
    edx = ZX16(LO16(edx));
    ecx++;
    MEM8(edx + 0x800EF8) = LO8(ebx);

loc_0034BAEA: ;
    eax = eax + 0x10;
    edi--;
    if ((edi != 0)) goto loc_0034BA10; /* jne: not equal / not zero */

loc_0034BAF4: ;
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_0034B9F0; /* jl: less (signed <) */

loc_0034BAFD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0034BB00: ;
    eax = 0x800EF8;
    esp = esp + 0x800;
    esp += 4; return; /* ret */

}

/**
 * sub_0034BB10
 * Original: 0x0034BB10 - 0x0034BE0A (762 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034BB10: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B0E0);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x84B0F0) = eax;
    if (CMP_LE(ecx, eax)) goto loc_0034BB42; /* jle: less or equal (signed <=) */

loc_0034BB30: ;
    edx = ebp + 0x10;

loc_0034BB33: ;
    edi = ZX16(MEM16(edx));
    if (CMP_EQ(edi, esi)) goto loc_0034BBA6; /* je: equal / zero */

loc_0034BB3A: ;
    eax++;
    edx = edx + 0x38;
    if (CMP_L(eax, ecx)) goto loc_0034BB33; /* jl: less (signed <) */

loc_0034BB42: ;
    MEM32(esp + 0x10) = 0xFFFF;

loc_0034BB4A: ;
    eax = ZX8(MEM8(esp + 0x10));
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0034BE03; /* je: equal / zero */

loc_0034BB5A: ;
    SET_LO8(edx, MEM8(0x801325));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ebp;
    ecx = eax;
    SET_LO8(eax, LO8(edx));
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = 0xFFFF;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    edi = ecx + 0x16;
    ebx = 2;
    /* nop */

loc_0034BB80: ;
    SET_LO16(esi, MEM16(edi + -4));
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_0034BBB6; /* je: equal / zero */

loc_0034BB8B: ;
    ecx = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebp;
    if (CMP_NE(MEM8(ecx + 0x33), 0)) goto loc_0034BBB6; /* jne: not equal / not zero */

loc_0034BB99: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034BBAC; /* jne: not equal / not zero */

loc_0034BBA0: ;
    if (CMP_AE(LO8(ecx), LO8(eax))) goto loc_0034BBB0; /* jae: above or equal (unsigned >=) */

loc_0034BBA4: ;
    goto loc_0034BBB6;

loc_0034BBA6: ;
    MEM32(esp + 0x10) = eax;
    goto loc_0034BB4A;

loc_0034BBAC: ;
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0034BBB6; /* ja: above (unsigned >) */

loc_0034BBB0: ;
    SET_LO8(eax, LO8(ecx));
    MEM32(esp + 0x10) = esi;

loc_0034BBB6: ;
    SET_LO16(esi, MEM16(edi));
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_0034BBE5; /* je: equal / zero */

loc_0034BBC0: ;
    ecx = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebp;
    if (CMP_NE(MEM8(ecx + 0x33), 0)) goto loc_0034BBE5; /* jne: not equal / not zero */

loc_0034BBCE: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034BBDB; /* jne: not equal / not zero */

loc_0034BBD5: ;
    if (CMP_AE(LO8(ecx), LO8(eax))) goto loc_0034BBDF; /* jae: above or equal (unsigned >=) */

loc_0034BBD9: ;
    goto loc_0034BBE5;

loc_0034BBDB: ;
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0034BBE5; /* ja: above (unsigned >) */

loc_0034BBDF: ;
    SET_LO8(eax, LO8(ecx));
    MEM32(esp + 0x10) = esi;

loc_0034BBE5: ;
    SET_LO16(esi, MEM16(edi + 4));
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_0034BC15; /* je: equal / zero */

loc_0034BBF0: ;
    ecx = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebp;
    if (CMP_NE(MEM8(ecx + 0x33), 0)) goto loc_0034BC15; /* jne: not equal / not zero */

loc_0034BBFE: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034BC0B; /* jne: not equal / not zero */

loc_0034BC05: ;
    if (CMP_AE(LO8(ecx), LO8(eax))) goto loc_0034BC0F; /* jae: above or equal (unsigned >=) */

loc_0034BC09: ;
    goto loc_0034BC15;

loc_0034BC0B: ;
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0034BC15; /* ja: above (unsigned >) */

loc_0034BC0F: ;
    SET_LO8(eax, LO8(ecx));
    MEM32(esp + 0x10) = esi;

loc_0034BC15: ;
    SET_LO16(esi, MEM16(edi + 8));
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_0034BC45; /* je: equal / zero */

loc_0034BC20: ;
    ecx = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + ebp;
    if (CMP_NE(MEM8(ecx + 0x33), 0)) goto loc_0034BC45; /* jne: not equal / not zero */

loc_0034BC2E: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(ecx + 0x35));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0034BC3B; /* jne: not equal / not zero */

loc_0034BC35: ;
    if (CMP_AE(LO8(ecx), LO8(eax))) goto loc_0034BC3F; /* jae: above or equal (unsigned >=) */

loc_0034BC39: ;
    goto loc_0034BC45;

loc_0034BC3B: ;
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0034BC45; /* ja: above (unsigned >) */

loc_0034BC3F: ;
    SET_LO8(eax, LO8(ecx));
    MEM32(esp + 0x10) = esi;

loc_0034BC45: ;
    edi = edi + 0x10;
    ebx--;
    if ((ebx != 0)) goto loc_0034BB80; /* jne: not equal / not zero */

loc_0034BC4F: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0034BE02; /* je: equal / zero */

loc_0034BC5D: ;
    SET_LO16(esi, ZX8(MEM8(esp + 0x14)));
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034BC6C: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034BC7B: ;
    esp = esp + 0x10;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0034BE02; /* je: equal / zero */

loc_0034BC8C: ;
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_0034BE02; /* je: equal / zero */

loc_0034BC97: ;
    SET_LO16(eax, LO16(ebx));
    MEM16(esp + 0x20) = LO16(eax);
    MEM32(esp + 0x14) = 0;
    goto loc_0034BCB0;

    /* nop */

loc_0034BCB0: ;
    SET_LO16(ebp, LO16(edi));
    SET_LO16(edi, LO16(eax));
    eax = MEM32(esp + 0x20);
    MEM16(esp + 0x1C) = LO16(ebp);
    MEM16(esp + 0x1E) = LO16(edi);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034BCD1: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 8;
    edx++;
    (void)0; /* cmp LO16(ebp), LO16(esi) - flags set for next jcc */
    MEM16(esp + 0x20) = LO16(eax);
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(LO16(ebp), LO16(esi))) goto loc_0034BCB0; /* jne: not equal / not zero */

loc_0034BCE7: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM8(0x801336) = LO8(eax);
    eax = eax + ecx;
    MEM32(esp + 0x28) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x8D);
    PUSH32(esp, 0x63BADC);
    ebp = 0; /* xor self */
    PUSH32(esp, eax);
    MEM8(0x801335) = LO8(ecx);
    MEM32(0x801338) = ebp;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0034BD20: ;
    edx = MEM32(esp + 0x38);
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    MEM32(0x84B0F0) = eax;
    if (CMP_LE(edx, ebp)) goto loc_0034BDFB; /* jle: less or equal (signed <=) */

loc_0034BD36: ;
    edi = (uint32_t)(int32_t)SMEM8(0x801336);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 0x1C;
    goto loc_0034BD60;

loc_0034BD55: ;
    ebp = 0; /* xor self */
    goto loc_0034BD60;

    /* nop */

loc_0034BD60: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM16(eax + 0x10) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM8(eax + 0xC) = 0;
    MEM32(eax) = ebp;
    MEM32(eax + -4) = ebp;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM8(eax + 0x18) = 0;
    MEMF(eax + -20) = xmm0; /* movss */
    MEMF(eax + -28) = xmm1; /* movss */
    MEMF(eax + -24) = xmm1; /* movss */
    MEM16(eax + 8) = LO16(ebp);
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0xB) = 0;
    MEM8(eax + 0x1A) = 0;
    MEMF(eax + -16) = xmm0; /* movss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM8(eax + 0x1C) = 2;
    MEM8(eax + 0x19) = 0;
    MEM8(eax + 0xE) = 0x7F;
    MEM8(eax + 0x39) = 0;
    MEM16(eax + 0x12) = LO16(esi);
    MEM16(eax + 0x14) = LO16(edx);
    MEM16(eax + 0x16) = LO16(ebx);
    if (CMP_GE(ecx, edi)) goto loc_0034BDD3; /* jge: greater or equal (signed >=) */

loc_0034BDD0: ;
    MEM8(eax + 0x1A) = LO8(ecx);

loc_0034BDD3: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEC);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ecx, edx)) ? 1 : 0); /* setge */
    MEM8(eax + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(eax + 0xA) = LO8(edx);
    edx = MEM32(esp + 0x28);
    ecx++;
    eax = eax + 0x94;
    if (CMP_L(ecx, edx)) goto loc_0034BD55; /* jl: less (signed <) */

loc_0034BDFB: ;
    MEM8(0x801334) = 1;

loc_0034BE02: ;
    POP32(esp, ebx);

loc_0034BE03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0034BE10
 * Original: 0x0034BE10 - 0x0034CD73 (3939 bytes, 886 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BE10(void)
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

loc_0034BE10: ;
    eax = MEM32(0x84B0F0);
    esp = esp - 0x148;
    if (TEST_Z(eax, eax)) goto loc_0034CD6C; /* je: equal / zero */

loc_0034BE23: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x150);
    ecx = MEM32(0x84A5F8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x94);
    xmm3 = MEMF(0x648D10); /* movss */
    ebx = ebx + eax;
    SET_LO8(eax, MEM8(ebx + 0x35));
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM8(ebx + 0x36);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    xmm0 = MEMF(ebp + ecx + 0x78); /* movss */
    ebp = ebp + ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x80); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM8(0x80133C) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034BE7C; /* jne: not equal / not zero */

loc_0034BE76: ;
    MEMF(ebx) = xmm3; /* movss */
    goto loc_0034BEB6;

loc_0034BE7C: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm1 = MEMF(0x649810); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0034BEA7; /* ja: above (unsigned >) */

loc_0034BE9A: ;
    xmm1 = MEMF(0x64980C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0034BEAA; /* jbe: below or equal (unsigned <=) */

loc_0034BEA7: ;
    xmm0 = xmm1; /* movaps */

loc_0034BEAA: ;
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebx) = xmm1; /* movss */

loc_0034BEB6: ;
    xmm0 = MEMF(0x648E98); /* movss */
    xmm4 = MEMF(0x648CF0); /* movss */
    xmm6 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 9) = 1;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, esi);
    /* nop */

loc_0034BEF0: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xE) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034BF37; /* je: equal / zero */

loc_0034BEFD: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_0034DFC0(); /* call 0x0034DFC0 */

loc_0034BF10: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 8;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 0x74) = (float)fp_top(); fp_popp(); /* fstp */

loc_0034BF37: ;
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CF4); /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D20); /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm7 * xmm4; /* mulss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm7 = xmm7 * MEMF(0x648CF4); /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x30); /* addss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x10); /* addss */
    xmm7 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D20); /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x70); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(ebx + 8); /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEMF(esp + 0x40) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d34] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(esp + 0x60); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm2 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x70); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x78); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x64); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x7C); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x68); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x6C); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(0x648E9C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(ebx + 0xC) = xmm7; /* movss */
    MEMF(ebx + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    if ((xmm0 > xmm2)) goto loc_0034C161; /* ja: above (unsigned >) */

loc_0034C158: ;
    /* comiss xmm2, MEMF(0x648F08) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648F08))) goto loc_0034C1D6; /* jbe: below or equal (unsigned <=) */

loc_0034C161: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm0 = xmm2; /* movaps */
    if ((xmm1 <= xmm2)) goto loc_0034C173; /* jbe: below or equal (unsigned <=) */

loc_0034C16C: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */

loc_0034C173: ;
    /* comiss xmm0, MEMF(esp + 0x5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x5C))) goto loc_0034C18A; /* jbe: below or equal (unsigned <=) */

loc_0034C17A: ;
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */

loc_0034C18A: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm1 / MEMF(esp + 0x74); /* divss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E1C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esp + 0xE) = 1;
    if ((xmm0 <= xmm1)) goto loc_0034C1B6; /* jbe: below or equal (unsigned <=) */

loc_0034C1B1: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0034C1BE;

loc_0034C1B6: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_0034C1BE; /* jbe: below or equal (unsigned <=) */

loc_0034C1BB: ;
    xmm1 = xmm3; /* movaps */

loc_0034C1BE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = ebx;
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, 0); sub_0034D9E0(); /* call 0x0034D9E0 */

loc_0034C1CC: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    MEM8(esp + 0xD) = LO8(eax);

loc_0034C1D6: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 0xA - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_G(LO8(eax), 0xA)) goto loc_0034C1F0; /* jg: greater (signed >) */

loc_0034C1E4: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034BEF0; /* jne: not equal / not zero */

loc_0034C1F0: ;
    SET_LO8(ecx, MEM8(ebx + 0x38));
    SET_LO8(edx, MEM8(0x7FA20C));
    MEM8(ebx + 0x37) = LO8(ecx);
    MEM8(ebx + 0x38) = LO8(edx);
    xmm0 = MEMF(ebp + 0x8C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = MEMF(ebp + 0x84); /* movss */
    eax = SX8(LO8(ecx));
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ebx + 0x35));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    PUSH32(esp, edi);
    MEM8(0x776162) = 0x80;
    MEMF(ebx + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034C5A1; /* je: equal / zero */

loc_0034C24E: ;
    xmm0 = MEMF(esp + 0x164); /* movss */
    ecx = 0x25;
    esi = ebx;
    edi = esp + 0xC4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = esp + 0xC4;
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, 0); sub_0034D9E0(); /* call 0x0034D9E0 */

loc_0034C277: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_0034DFC0(); /* call 0x0034DFC0 */

loc_0034C28C: ;
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x44); /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * MEMF(esp + 0xD4); /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x2C); /* addss */
    xmm2 = MEMF(esp + 0xD4); /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xD4); /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x54); /* addss */
    xmm2 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0xD4); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 - MEMF(esp + 0x50); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x58); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    esp = esp + 8;
    MEMF(0x801330) = xmm1; /* movss */
    MEMF(0x80132C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x801336);
    (void)0; /* cmp MEM32(esp + 0x15C), eax - flags set for next jcc */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x18); /* movss */
    xmm6 = xmm6 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0x34); /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * MEMF(esp + 0xCC); /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm4 = xmm4 + MEMF(esp + 0x14); /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0xCC); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 - MEMF(esp + 0x40); /* subss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x18); /* addss */
    MEMF(0x801328) = xmm2; /* movss */
    if (CMP_GE(MEM32(esp + 0x15C), eax)) goto loc_0034C8D0; /* jge: greater or equal (signed >=) */

loc_0034C487: ;
    eax = MEM32(esp + 0x160);
    if (TEST_NZ(eax, eax)) goto loc_0034C4E8; /* jne: not equal / not zero */

loc_0034C492: ;
    ecx = MEM32(0x84A5F8);
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x80132C) = xmm0; /* movss */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x801330) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(0x801330); /* movss */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x801328) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(0x801328); /* movss */

loc_0034C4E8: ;
    ecx = ZX8(MEM8(ebp + 0x253));
    esi = MEM32(0x84A1A0);
    ecx = MEM32(esi + ecx * 4);
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(ecx + 8) = LO16(edx);
    ecx = ZX8(MEM8(ebp + 0x253));
    esi = MEM32(0x84A1A0);
    ecx = MEM32(esi + ecx * 4);
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(ecx + 0xA) = LO16(edx);
    ecx = ZX8(MEM8(ebp + 0x253));
    esi = MEM32(0x84A1A0);
    ecx = MEM32(esi + ecx * 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(0x80133C));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(ecx + 0xC) = LO16(edx);
    MEMF(ebp + 0x118) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), 1)) goto loc_0034C561; /* jne: not equal / not zero */

loc_0034C545: ;
    xmm0 = MEMF(0x649550); /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    MEM8(ebp + 0x42A) = 0;
    goto loc_0034C8D0;

loc_0034C561: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0034C581; /* jne: not equal / not zero */

loc_0034C565: ;
    xmm0 = MEMF(0x649124); /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    MEM8(ebp + 0x42A) = 0;
    goto loc_0034C8D0;

loc_0034C581: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0034C595; /* jne: not equal / not zero */

loc_0034C585: ;
    xmm0 = MEMF(0x64944C); /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */

loc_0034C595: ;
    MEM8(ebp + 0x42A) = 0;
    goto loc_0034C8D0;

loc_0034C5A1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    eax = esp + 0x54;
    MEMF(ebx) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0034DFC0(); /* call 0x0034DFC0 */

loc_0034C5BB: ;
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm5 = xmm5 * MEMF(0x648CF4); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 + MEMF(esp + 0x2C); /* addss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x30); /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x48); /* subss */
    eax = esp + 0x2C;
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    eax = esp + 0x5C;
    MEMF(ebx) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0034DFC0(); /* call 0x0034DFC0 */

loc_0034C6FF: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(ebx + 8); /* movss */
    esp = esp + 0x10;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(0x648CF4); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm4 * MEMF(0x648CF4); /* mulss */
    xmm4 = xmm4 + MEMF(esp + 0x34); /* addss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm2 = xmm2 + MEMF(esp + 0x14); /* addss */
    xmm4 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 - MEMF(esp + 0x40); /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    xmm1 = xmm1 - xmm7; /* subss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x44) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0034C8C9; /* jbe: below or equal (unsigned <=) */

loc_0034C87D: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 / MEMF(esp + 0x60); /* divss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x70); /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x6C); /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    goto loc_0034C8CC;

loc_0034C8C9: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0034C8CC: ;
    MEMF(ebx) = xmm0; /* movss */

loc_0034C8D0: ;
    SET_LO8(eax, MEM8(ebx + 0x35));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x160));
    esi = MEM32(0x7FCB54);
    MEM8(ebx + 0x54) = LO8(ecx);
    MEM8(0x801324) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034C90E; /* jne: not equal / not zero */

loc_0034C8EE: ;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0034C90E; /* jbe: below or equal (unsigned <=) */

loc_0034C8F2: ;
    SET_LO8(ecx, MEM8(ebx + 0x36));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(esi, edx)) goto loc_0034C90E; /* jne: not equal / not zero */

loc_0034C900: ;
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(0x7FA20C);
    edx = edx + ecx;
    MEM32(ebx + 0x1C) = edx;

loc_0034C90E: ;
    if (CMP_LE(LO8(eax), 1)) goto loc_0034C938; /* jle: less or equal (signed <=) */

loc_0034C912: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0034C938; /* jne: not equal / not zero */

loc_0034C922: ;
    PUSH32(esp, ebx);
    ebx = 0xD;
    esi = ebp;
    PUSH32(esp, 0); sub_0034D020(); /* call 0x0034D020 */

loc_0034C92F: ;
    esi = MEM32(0x7FCB54);
    esp = esp + 4;

loc_0034C938: ;
    eax = MEM32(esp + 0x15C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm3 = MEMF(0x648E98); /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0034CD68; /* jne: not equal / not zero */

loc_0034C94F: ;
    edi = (uint32_t)(int32_t)SMEM8(0x801336);
    xmm0 = MEMF(0x59D944); /* movss */
    xmm1 = MEMF(0x649808); /* movss */
    edx = 0; /* xor self */
    if (CMP_L(edi, 4)) goto loc_0034CB52; /* jl: less (signed <) */

loc_0034C971: ;
    eax = MEM32(0x84B0F0);
    edi = edi + 0xFFFFFFFDu;
    eax = eax + 0x2A;
    /* nop */

loc_0034C980: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + -6);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax));
    (void)0; /* cmp LO8(ecx), 0x7F - flags set for next jcc */
    xmm2 = xmm2 + MEMF(eax + -34); /* addss */
    MEM8(esp + edx + 0x4C) = LO8(edx);
    MEMF(esp + edx * 4 + 0x84) = xmm2; /* movss */
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_0034C9C0; /* je: equal / zero */

loc_0034C9A1: ;
    ecx = SX8(LO8(ecx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + edx * 4 + 0x84) = xmm5; /* movss */

loc_0034C9C0: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, ebx)) goto loc_0034C9E4; /* je: equal / zero */

loc_0034C9CE: ;
    xmm2 = MEMF(esp + edx * 4 + 0x84); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + edx * 4 + 0x84) = xmm2; /* movss */

loc_0034C9E4: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esp + edx + 0x4D) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8E);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax + 0x94));
    (void)0; /* cmp LO8(ecx), 0x7F - flags set for next jcc */
    xmm2 = xmm2 + MEMF(eax + 0x72); /* addss */
    MEMF(esp + edx * 4 + 0x88) = xmm2; /* movss */
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_0034CA2F; /* je: equal / zero */

loc_0034CA10: ;
    ecx = SX8(LO8(ecx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + edx * 4 + 0x88) = xmm5; /* movss */

loc_0034CA2F: ;
    SET_LO8(ecx, MEM8(eax + 0xA0));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, ebx)) goto loc_0034CA56; /* je: equal / zero */

loc_0034CA40: ;
    xmm2 = MEMF(esp + edx * 4 + 0x88); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + edx * 4 + 0x88) = xmm2; /* movss */

loc_0034CA56: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 2);
    MEM8(esp + edx + 0x4E) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x122);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax + 0x128));
    (void)0; /* cmp LO8(ecx), 0x7F - flags set for next jcc */
    xmm2 = xmm2 + MEMF(eax + 0x106); /* addss */
    MEMF(esp + edx * 4 + 0x8C) = xmm2; /* movss */
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_0034CAA5; /* je: equal / zero */

loc_0034CA86: ;
    ecx = SX8(LO8(ecx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + edx * 4 + 0x8C) = xmm5; /* movss */

loc_0034CAA5: ;
    SET_LO8(ecx, MEM8(eax + 0x134));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, ebx)) goto loc_0034CACC; /* je: equal / zero */

loc_0034CAB6: ;
    xmm2 = MEMF(esp + edx * 4 + 0x8C); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + edx * 4 + 0x8C) = xmm2; /* movss */

loc_0034CACC: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 3);
    MEM8(esp + edx + 0x4F) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1B6);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax + 0x1BC));
    (void)0; /* cmp LO8(ecx), 0x7F - flags set for next jcc */
    xmm2 = xmm2 + MEMF(eax + 0x19A); /* addss */
    MEMF(esp + edx * 4 + 0x90) = xmm2; /* movss */
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_0034CB1B; /* je: equal / zero */

loc_0034CAFC: ;
    ecx = SX8(LO8(ecx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + edx * 4 + 0x90) = xmm5; /* movss */

loc_0034CB1B: ;
    SET_LO8(ecx, MEM8(eax + 0x1C8));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, ebx)) goto loc_0034CB42; /* je: equal / zero */

loc_0034CB2C: ;
    xmm2 = MEMF(esp + edx * 4 + 0x90); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + edx * 4 + 0x90) = xmm2; /* movss */

loc_0034CB42: ;
    edx = edx + 4;
    eax = eax + 0x250;
    if (CMP_L(edx, edi)) goto loc_0034C980; /* jl: less (signed <) */

loc_0034CB52: ;
    ebp = (uint32_t)(int32_t)SMEM8(0x801336);
    if (CMP_GE(edx, ebp)) goto loc_0034CBE1; /* jge: greater or equal (signed >=) */

loc_0034CB61: ;
    ecx = MEM32(0x84B0F0);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ecx + 0x2A;

loc_0034CB73: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + -6);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax));
    (void)0; /* cmp LO8(ecx), 0x7F - flags set for next jcc */
    xmm2 = xmm2 + MEMF(eax + -34); /* addss */
    MEM8(esp + edx + 0x4C) = LO8(edx);
    MEMF(esp + edx * 4 + 0x84) = xmm2; /* movss */
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_0034CBB3; /* je: equal / zero */

loc_0034CB94: ;
    ecx = SX8(LO8(ecx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + edx * 4 + 0x84) = xmm5; /* movss */

loc_0034CBB3: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_Z(esi, edi)) goto loc_0034CBD7; /* je: equal / zero */

loc_0034CBC1: ;
    xmm2 = MEMF(esp + edx * 4 + 0x84); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + edx * 4 + 0x84) = xmm2; /* movss */

loc_0034CBD7: ;
    edx++;
    eax = eax + 0x94;
    if (CMP_L(edx, ebp)) goto loc_0034CB73; /* jl: less (signed <) */

loc_0034CBE1: ;
    ebp--;

loc_0034CBE2: ;
    esi = 0; /* xor self */
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    SET_LO8(edx, 1);
    if (CMP_L(ebp, 4)) goto loc_0034CCD7; /* jl: less (signed <) */

loc_0034CBEF: ;
    edi = ebp + -4;
    edi = edi >> 2;
    edi++;
    ecx = esp + 0x4E;
    eax = esp + 0x8C;
    esi = edi * 4;
    goto loc_0034CC10;

    /* nop */

loc_0034CC10: ;
    xmm0 = MEMF(eax + -4); /* movss */
    /* comiss xmm0, MEMF(eax + -8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + -8))) goto loc_0034CC41; /* jbe: below or equal (unsigned <=) */

loc_0034CC1B: ;
    SET_LO8(ebx, MEM8(ecx + -2));
    xmm0 = MEMF(eax + -8); /* movss */
    MEM8(esp + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx + -1));
    MEM8(ecx + -2) = LO8(ebx);
    ebx = MEM32(eax + -4);
    MEM32(eax + -8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x11));
    SET_LO8(edx, 0); /* xor self */
    MEM8(ecx + -1) = LO8(ebx);
    MEMF(eax + -4) = xmm0; /* movss */

loc_0034CC41: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(eax + -4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + -4))) goto loc_0034CC6D; /* jbe: below or equal (unsigned <=) */

loc_0034CC4B: ;
    SET_LO8(ebx, MEM8(ecx + -1));
    xmm0 = MEMF(eax + -4); /* movss */
    MEM8(esp + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx));
    MEM8(ecx + -1) = LO8(ebx);
    ebx = MEM32(eax);
    MEM32(eax + -4) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x11));
    SET_LO8(edx, 0); /* xor self */
    MEM8(ecx) = LO8(ebx);
    MEMF(eax) = xmm0; /* movss */

loc_0034CC6D: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_0034CC99; /* jbe: below or equal (unsigned <=) */

loc_0034CC77: ;
    SET_LO8(ebx, MEM8(ecx));
    xmm0 = MEMF(eax); /* movss */
    MEM8(esp + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx + 1));
    MEM8(ecx) = LO8(ebx);
    ebx = MEM32(eax + 4);
    MEM32(eax) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x11));
    SET_LO8(edx, 0); /* xor self */
    MEM8(ecx + 1) = LO8(ebx);
    MEMF(eax + 4) = xmm0; /* movss */

loc_0034CC99: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) goto loc_0034CCCA; /* jbe: below or equal (unsigned <=) */

loc_0034CCA4: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    xmm0 = MEMF(eax + 4); /* movss */
    MEM8(esp + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx + 2));
    MEM8(ecx + 1) = LO8(ebx);
    ebx = MEM32(eax + 8);
    MEM32(eax + 4) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x11));
    SET_LO8(edx, 0); /* xor self */
    MEM8(ecx + 2) = LO8(ebx);
    MEMF(eax + 8) = xmm0; /* movss */

loc_0034CCCA: ;
    ecx = ecx + 4;
    eax = eax + 0x10;
    edi--;
    if ((edi != 0)) goto loc_0034CC10; /* jne: not equal / not zero */

loc_0034CCD7: ;
    if (CMP_GE(esi, ebp)) goto loc_0034CD2A; /* jge: greater or equal (signed >=) */

loc_0034CCDB: ;
    goto loc_0034CCE0;

    /* nop */

loc_0034CCE0: ;
    xmm0 = MEMF(esp + esi * 4 + 0x88); /* movss */
    /* comiss xmm0, MEMF(esp + esi * 4 + 0x84) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + esi * 4 + 0x84))) goto loc_0034CD25; /* jbe: below or equal (unsigned <=) */

loc_0034CCF3: ;
    SET_LO8(ecx, MEM8(esp + esi + 0x4D));
    SET_LO8(eax, MEM8(esp + esi + 0x4C));
    xmm0 = MEMF(esp + esi * 4 + 0x84); /* movss */
    MEM8(esp + esi + 0x4C) = LO8(ecx);
    ecx = MEM32(esp + esi * 4 + 0x88);
    MEM32(esp + esi * 4 + 0x84) = ecx;
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + esi + 0x4D) = LO8(eax);
    MEMF(esp + esi * 4 + 0x88) = xmm0; /* movss */

loc_0034CD25: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_0034CCE0; /* jl: less (signed <) */

loc_0034CD2A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0034CBE2; /* je: equal / zero */

loc_0034CD32: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x801336);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0034CD68; /* jle: less or equal (signed <=) */

loc_0034CD3F: ;
    esi = MEM32(0x84B0F0);
    goto loc_0034CD50;

    /* nop */
    edi = edi;

loc_0034CD50: ;
    edi = (uint32_t)(int32_t)SMEM8(esp + eax + 0x4C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x94);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) + 1);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM8(edi + esi + 0x29) = LO8(edx);
    if (CMP_L(eax, ecx)) goto loc_0034CD50; /* jl: less (signed <) */

loc_0034CD68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0034CD6C: ;
    esp = esp + 0x148;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0034CD80
 * Original: 0x0034CD80 - 0x0034CE0D (141 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034CD80: ;
    ecx = MEM32(0x84B0F0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(0x801324) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0034CE0C; /* je: equal / zero */

loc_0034CD91: ;
    eax = (uint32_t)(int32_t)SMEM8(0x801336);
    if (CMP_LE(eax & eax, 0)) goto loc_0034CE0C; /* jle: less or equal (signed <=) */

loc_0034CD9C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x35;
    ebp = eax;
    goto loc_0034CDB0;

    /* nop */

loc_0034CDB0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 1);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + ebx + 0x564);
    eax = eax + ebx;
    if (TEST_Z(ecx, ecx)) goto loc_0034CDFF; /* je: equal / zero */

loc_0034CDC7: ;
    if (CMP_LE(MEM8(esi), 1)) goto loc_0034CDDB; /* jle: less or equal (signed <=) */

loc_0034CDCC: ;
    PUSH32(esp, eax);
    eax = esi + -53;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034E140(); /* call 0x0034E140 */

loc_0034CDD6: ;
    esp = esp + 8;
    goto loc_0034CDFF;

loc_0034CDDB: ;
    SET_LO8(ecx, MEM8(esi + 0x1F));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034CDE7; /* jne: not equal / not zero */

loc_0034CDE2: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    goto loc_0034CDF4;

loc_0034CDE7: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0034CDFF; /* je: equal / zero */

loc_0034CDEE: ;
    PUSH32(esp, eax);
    eax = 1;

loc_0034CDF4: ;
    edi = esi + -53;
    PUSH32(esp, 0); sub_0034E4F0(); /* call 0x0034E4F0 */

loc_0034CDFC: ;
    esp = esp + 4;

loc_0034CDFF: ;
    esi = esi + 0x94;
    ebp--;
    if ((ebp != 0)) goto loc_0034CDB0; /* jne: not equal / not zero */

loc_0034CE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0034CE0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034CE10
 * Original: 0x0034CE10 - 0x0034CE60 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034CE10: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B0F0);
    if (TEST_Z(eax, eax)) goto loc_0034CE5E; /* je: equal / zero */

loc_0034CE1C: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x94);
    esi = esi + eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_0034CE5E; /* je: equal / zero */

loc_0034CE2C: ;
    if (TEST_Z(ebx, ebx)) goto loc_0034CE5B; /* je: equal / zero */

loc_0034CE30: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0x2E));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x2C));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034CE46: ;
    MEM16(esi + 0x30) = LO16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034CE53: ;
    esp = esp + 0x10;
    MEM16(esi + 0x32) = LO16(eax);
    POP32(esp, edi);

loc_0034CE5B: ;
    MEM8(esi + 0x34) = LO8(ebx);

loc_0034CE5E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034CE60
 * Original: 0x0034CE60 - 0x0034CF0A (170 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CE60(void)
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

loc_0034CE60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B0F0);
    if (TEST_Z(ecx, ecx)) goto loc_0034CF08; /* je: equal / zero */

loc_0034CE6F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    xmm1 = MEMF(eax + ecx + 0x10); /* movss */
    xmm2 = MEMF(eax + ecx + 0xC); /* movss */
    eax = eax + ecx;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_0034CEA1; /* jp: parity */

loc_0034CE94: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0034CEA1; /* jp: parity */

loc_0034CE9D: ;
    eax = 0; /* xor self */
    goto loc_0034CECC;

loc_0034CEA1: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0034CEB4: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034CECC: ;
    ecx = eax + 0x8000;
    SET_LO16(eax, LO16(ecx));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x170));
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0034CEF5; /* jns: not sign (positive) */

loc_0034CEE0: ;
    if (CMP_AE(LO16(eax), 0xDBFF)) goto loc_0034CF08; /* jae: above or equal (unsigned >=) */

loc_0034CEE6: ;
    ecx = ecx + 0x2400;
    MEM16(esi + 0x170) = LO16(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0034CEF5: ;
    if (CMP_BE(LO16(eax), 0x2400)) goto loc_0034CF08; /* jbe: below or equal (unsigned <=) */

loc_0034CEFB: ;
    ecx = ecx + 0xFFFFDC00u;
    MEM16(esi + 0x170) = LO16(ecx);

loc_0034CF08: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0034CF10
 * Original: 0x0034CF10 - 0x0034CFCE (190 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CF10(void)
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

loc_0034CF10: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B0F0);
    if (TEST_Z(ecx, ecx)) goto loc_0034CFAC; /* je: equal / zero */

loc_0034CF1F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ecx;
    PUSH32(esp, esi);
    esi = eax;
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_0034CF53; /* jp: parity */

loc_0034CF46: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0034CF53; /* jp: parity */

loc_0034CF4F: ;
    eax = 0; /* xor self */
    goto loc_0034CF7F;

loc_0034CF53: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0034CF67: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034CF7F: ;
    SET_LO8(ecx, MEM8(0x801325));
    eax = eax + 0x4000;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034CFAE; /* jne: not equal / not zero */

loc_0034CF8E: ;
    xmm0 = MEMF(0x648D10); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) goto loc_0034CFBB; /* ja: above (unsigned >) */

loc_0034CF9B: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x3600;
    MEM16(ecx + 0x170) = LO16(eax);
    POP32(esp, esi);

loc_0034CFAC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0034CFAE: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D10))) goto loc_0034CF9B; /* jb: below (unsigned <) */

loc_0034CFBB: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x4A00;
    MEM16(ecx + 0x170) = LO16(eax);
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
 * sub_0034CFD0
 * Original: 0x0034CFD0 - 0x0034CFE9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CFD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034CFD0: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_Z(ecx, ecx)) goto loc_0034CFE8; /* je: equal / zero */

loc_0034CFDA: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    MEM8(eax + ecx + 0x36) = LO8(edx);

loc_0034CFE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034CFF0
 * Original: 0x0034CFF0 - 0x0034D015 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0034CFF0: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_Z(ecx, ecx)) goto loc_0034D014; /* je: equal / zero */

loc_0034CFFA: ;
    xmm0 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    MEMF(eax + ecx + 4) = xmm0; /* movss */

loc_0034D014: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034D020
 * Original: 0x0034D020 - 0x0034D038 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D020(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D020: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x568);
    eax = MEM32(edi + 0x204);
    if (TEST_Z(eax, eax)) { sub_0034D038(); return; } /* je: equal / zero */

loc_0034D031: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D0B0
 * Original: 0x0034D0B0 - 0x0034D0C1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D0B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D0B0: ;
    ecx = MEM32(0x84B0F0);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    if (TEST_NZ(ecx, ecx)) { sub_0034D0C1(); return; } /* jne: not equal / not zero */

loc_0034D0BF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D120
 * Original: 0x0034D120 - 0x0034D12D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D120(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D120: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_NZ(ecx, ecx)) { sub_0034D12D(); return; } /* jne: not equal / not zero */

loc_0034D12A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D150
 * Original: 0x0034D150 - 0x0034D15D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D150: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_NZ(ecx, ecx)) { sub_0034D15D(); return; } /* jne: not equal / not zero */

loc_0034D15A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D190
 * Original: 0x0034D190 - 0x0034D19D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D190: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_NZ(ecx, ecx)) { sub_0034D19D(); return; } /* jne: not equal / not zero */

loc_0034D19A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D1C0
 * Original: 0x0034D1C0 - 0x0034D1CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D1C0: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_NZ(ecx, ecx)) { sub_0034D1CD(); return; } /* jne: not equal / not zero */

loc_0034D1CA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D1E0
 * Original: 0x0034D1E0 - 0x0034D1F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D1E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B0F0);
    if (TEST_NZ(ebx, ebx)) { sub_0034D1F2(); return; } /* jne: not equal / not zero */

loc_0034D1EB: ;
    eax = 0x10;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D2A0
 * Original: 0x0034D2A0 - 0x0034D2BF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D2A0: ;
    ecx = MEM32(0x84B0F0);
    esp = esp - 0x18;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    if (TEST_NZ(ecx, ecx)) { sub_0034D2BF(); return; } /* jne: not equal / not zero */

loc_0034D2B7: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0034D660
 * Original: 0x0034D660 - 0x0034D6C8 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D660(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D660: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B0F0);
    PUSH32(esp, edi);
    eax = eax - MEM32(0x84A5F8);
    ecx = eax;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if (TEST_Z(esi, esi)) goto loc_0034D6C2; /* je: equal / zero */

loc_0034D687: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0034D690; /* jne: not equal / not zero */

loc_0034D68B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034D690: ;
    edx = (uint32_t)(int32_t)SMEM8(0x801335);
    edi = (uint32_t)(int32_t)SMEM8(0x801336);
    eax = 1;
    edx = edx + edi;
    if (CMP_LE(edx, eax)) goto loc_0034D6C2; /* jle: less or equal (signed <=) */

loc_0034D6A9: ;
    esi = esi + 0xCA;
    /* nop */

loc_0034D6B0: ;
    edi = (uint32_t)(int32_t)SMEM8(esi);
    if (CMP_EQ(edi, ecx)) goto loc_0034D6C5; /* je: equal / zero */

loc_0034D6B7: ;
    eax++;
    esi = esi + 0x94;
    if (CMP_L(eax, edx)) goto loc_0034D6B0; /* jl: less (signed <) */

loc_0034D6C2: ;
    eax = eax | 0xFFFFFFFFu;

loc_0034D6C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D6D0
 * Original: 0x0034D6D0 - 0x0034D70E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D6D0: ;
    ecx = MEM32(0x84B0F0);
    if (TEST_Z(ecx, ecx)) goto loc_0034D70D; /* je: equal / zero */

loc_0034D6DA: ;
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ebx = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x35);
    edx = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x36);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x94);
    eax = eax + ecx;
    PUSH32(esp, edi);
    esi = esi + ecx;
    ecx = 0x25;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x35) = LO8(ebx);
    MEM8(eax + 0x36) = LO8(edx);
    POP32(esp, ebx);

loc_0034D70D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034D710
 * Original: 0x0034D710 - 0x0034D726 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D710: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B0F0);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    if (CMP_NE(ebp, eax)) { sub_0034D726(); return; } /* jne: not equal / not zero */

loc_0034D720: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D810
 * Original: 0x0034D810 - 0x0034D852 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D810(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D810: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B0F0);
    if (TEST_Z(esi, esi)) goto loc_0034D850; /* je: equal / zero */

loc_0034D81B: ;
    PUSH32(esp, 0); sub_0034D660(); /* call 0x0034D660 */

loc_0034D820: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x801336));
    MEM8(ecx + esi + 0x36) = 0;
    ecx = eax;
    eax = 1;
    ecx = ecx - edx;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x801338);
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(0x801338) = ecx;

loc_0034D850: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D860
 * Original: 0x0034D860 - 0x0034D86A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D860(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034D860: ;
    eax = MEM32(0x84B0F0);
    if (TEST_NZ(eax, eax)) { sub_0034D86A(); return; } /* jne: not equal / not zero */

loc_0034D869: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034D880
 * Original: 0x0034D880 - 0x0034D9D5 (341 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ZX16(MEM16(esp + 0x10));
    SET_LO8(ebx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84B0E0);
    ebx++;
    edx = 0xFFFF;
    eax = eax + esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    edi = eax + 0x16;
    MEM32(esp + 0x1C) = 2;

loc_0034D8B1: ;
    SET_LO16(ecx, MEM16(edi + -4));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034D8F0; /* je: equal / zero */

loc_0034D8BC: ;
    if (CMP_EQ(LO16(ecx), MEM16(esp + 0x18))) goto loc_0034D8F0; /* je: equal / zero */

loc_0034D8C3: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + esi;
    if (CMP_NE(MEM8(eax + 0x33), 0)) goto loc_0034D8F0; /* jne: not equal / not zero */

loc_0034D8D1: ;
    SET_LO8(eax, MEM8(eax + 0x35));
    SET_LO16(ebp, ZX8(LO8(eax)));
    if (CMP_EQ(LO16(ebp), LO16(ebx))) goto loc_0034D8EC; /* je: equal / zero */

loc_0034D8DD: ;
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034D8E8; /* je: equal / zero */

loc_0034D8E4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034D8F0; /* je: equal / zero */

loc_0034D8E8: ;
    edx = ecx;
    goto loc_0034D8F0;

loc_0034D8EC: ;
    MEM32(esp + 0x10) = ecx;

loc_0034D8F0: ;
    SET_LO16(ecx, MEM16(edi));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034D92E; /* je: equal / zero */

loc_0034D8FA: ;
    if (CMP_EQ(LO16(ecx), MEM16(esp + 0x18))) goto loc_0034D92E; /* je: equal / zero */

loc_0034D901: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + esi;
    if (CMP_NE(MEM8(eax + 0x33), 0)) goto loc_0034D92E; /* jne: not equal / not zero */

loc_0034D90F: ;
    SET_LO8(eax, MEM8(eax + 0x35));
    SET_LO16(ebp, ZX8(LO8(eax)));
    if (CMP_EQ(LO16(ebp), LO16(ebx))) goto loc_0034D92A; /* je: equal / zero */

loc_0034D91B: ;
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034D926; /* je: equal / zero */

loc_0034D922: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034D92E; /* je: equal / zero */

loc_0034D926: ;
    edx = ecx;
    goto loc_0034D92E;

loc_0034D92A: ;
    MEM32(esp + 0x10) = ecx;

loc_0034D92E: ;
    SET_LO16(ecx, MEM16(edi + 4));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034D96D; /* je: equal / zero */

loc_0034D939: ;
    if (CMP_EQ(LO16(ecx), MEM16(esp + 0x18))) goto loc_0034D96D; /* je: equal / zero */

loc_0034D940: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + esi;
    if (CMP_NE(MEM8(eax + 0x33), 0)) goto loc_0034D96D; /* jne: not equal / not zero */

loc_0034D94E: ;
    SET_LO8(eax, MEM8(eax + 0x35));
    SET_LO16(ebp, ZX8(LO8(eax)));
    if (CMP_EQ(LO16(ebp), LO16(ebx))) goto loc_0034D969; /* je: equal / zero */

loc_0034D95A: ;
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034D965; /* je: equal / zero */

loc_0034D961: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034D96D; /* je: equal / zero */

loc_0034D965: ;
    edx = ecx;
    goto loc_0034D96D;

loc_0034D969: ;
    MEM32(esp + 0x10) = ecx;

loc_0034D96D: ;
    SET_LO16(ecx, MEM16(edi + 8));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034D9AC; /* je: equal / zero */

loc_0034D978: ;
    if (CMP_EQ(LO16(ecx), MEM16(esp + 0x18))) goto loc_0034D9AC; /* je: equal / zero */

loc_0034D97F: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + esi;
    if (CMP_NE(MEM8(eax + 0x33), 0)) goto loc_0034D9AC; /* jne: not equal / not zero */

loc_0034D98D: ;
    SET_LO8(eax, MEM8(eax + 0x35));
    SET_LO16(ebp, ZX8(LO8(eax)));
    if (CMP_EQ(LO16(ebp), LO16(ebx))) goto loc_0034D9A8; /* je: equal / zero */

loc_0034D999: ;
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034D9A4; /* je: equal / zero */

loc_0034D9A0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034D9AC; /* je: equal / zero */

loc_0034D9A4: ;
    edx = ecx;
    goto loc_0034D9AC;

loc_0034D9A8: ;
    MEM32(esp + 0x10) = ecx;

loc_0034D9AC: ;
    eax = MEM32(esp + 0x1C);
    edi = edi + 0x10;
    eax--;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_0034D8B1; /* jne: not equal / not zero */

loc_0034D9BE: ;
    (void)0; /* cmp LO16(edx), 0xFFFF - flags set for next jcc */
    SET_LO16(eax, ZX8(MEM8(esp + 0x10)));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034D9D3; /* je: equal / zero */

loc_0034D9CF: ;
    SET_LO16(eax, ZX8(LO8(edx)));

loc_0034D9D3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D9E0
 * Original: 0x0034D9E0 - 0x0034DA3B (91 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D9E0: ;
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esi + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0034DA3B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0034D9F6: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    SET_LO16(ecx, MEM16(esi + 0x2E));
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEM16(esi + 0x32) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x2C));
    edx = 0; /* xor self */
    SET_LO16(edx, LO16(ecx));
    MEM16(esi + 0x2E) = LO16(eax);
    MEMF(esi + 8) = xmm0; /* movss */
    MEM16(esi + 0x30) = LO16(ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x34));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0034D880(); /* call 0x0034D880 */

loc_0034DA2C: ;
    esp = esp + 8;
    MEM16(esi + 0x2C) = LO16(eax);
    ebp = ebp | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0034DADB(); return; /* tail jmp 0x0034DADB */

}

/**
 * sub_0034DBA0
 * Original: 0x0034DBA0 - 0x0034DFBB (1051 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DBA0(void)
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

loc_0034DBA0: ;
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    eax = ebp;
    PUSH32(esp, 0); sub_0034D660(); /* call 0x0034D660 */

loc_0034DBAF: ;
    if (TEST_S(eax, eax)) goto loc_0034DFB6; /* jl: less (signed <) */

loc_0034DBB7: ;
    ecx = MEM32(0x84B0F0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    xmm3 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + ecx;
    esi = eax;
    PUSH32(esp, edi);
    MEMF(esi) = xmm3; /* movss */
    MEMF(esi + 4) = xmm3; /* movss */
    MEMF(esi + 8) = xmm3; /* movss */
    SET_LO8(ebx, 4);
    /* nop */

loc_0034DBF0: ;
    eax = ZX16(MEM16(esi + 0x2E));
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    SET_LO16(ecx, MEM16(eax + edx + 0x12));
    eax = eax + edx;
    edi = 0; /* xor self */
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DC1E; /* je: equal / zero */

loc_0034DC0D: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DC1E; /* jne: not equal / not zero */

loc_0034DC1A: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DC1E: ;
    SET_LO16(ecx, MEM16(eax + 0x16));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DC3A; /* je: equal / zero */

loc_0034DC29: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DC3A; /* jne: not equal / not zero */

loc_0034DC36: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DC3A: ;
    SET_LO16(ecx, MEM16(eax + 0x1A));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DC56; /* je: equal / zero */

loc_0034DC45: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DC56; /* jne: not equal / not zero */

loc_0034DC52: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DC56: ;
    SET_LO16(ecx, MEM16(eax + 0x1E));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DC72; /* je: equal / zero */

loc_0034DC61: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DC72; /* jne: not equal / not zero */

loc_0034DC6E: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DC72: ;
    SET_LO16(ecx, MEM16(eax + 0x22));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DC8E; /* je: equal / zero */

loc_0034DC7D: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DC8E; /* jne: not equal / not zero */

loc_0034DC8A: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DC8E: ;
    SET_LO16(ecx, MEM16(eax + 0x26));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DCAA; /* je: equal / zero */

loc_0034DC99: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DCAA; /* jne: not equal / not zero */

loc_0034DCA6: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DCAA: ;
    SET_LO16(ecx, MEM16(eax + 0x2A));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034DCC6; /* je: equal / zero */

loc_0034DCB5: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    if (CMP_NE(MEM8(ecx + 0x33), LO8(ebx))) goto loc_0034DCC6; /* jne: not equal / not zero */

loc_0034DCC2: ;
    edi = ZX8(MEM8(ecx + 0x35));

loc_0034DCC6: ;
    SET_LO16(eax, MEM16(eax + 0x2E));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0034DCE4; /* je: equal / zero */

loc_0034DCD0: ;
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    SET_LO8(ecx, MEM8(eax + edx + 0x33));
    eax = eax + edx;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0034DCE4; /* jne: not equal / not zero */

loc_0034DCE0: ;
    edi = ZX8(MEM8(eax + 0x35));

loc_0034DCE4: ;
    if (TEST_Z(edi, edi)) goto loc_0034DCF5; /* je: equal / zero */

loc_0034DCE8: ;
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_0034D9E0(); /* call 0x0034D9E0 */

loc_0034DCF0: ;
    goto loc_0034DBF0;

loc_0034DCF5: ;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x3C;
    eax = esp + 0x2C;
    MEMF(esi + 8) = xmm4; /* movss */
    PUSH32(esp, 0); sub_0034DFC0(); /* call 0x0034DFC0 */

loc_0034DD10: ;
    xmm1 = MEMF(0x648CF0); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x1C); /* addss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x20); /* addss */
    MEMF(ebp + 0x78) = xmm7; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = MEMF(esi + 8); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x2C); /* addss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x3C); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x30); /* addss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    MEMF(ebp + 0x7C) = xmm7; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm2; /* movaps */
    esp = esp + 8;
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x38); /* addss */
    MEMF(ebp + 0x80) = xmm7; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    POP32(esp, edi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, esi);
    MEMF(esp + 8) = xmm1; /* movss */
    POP32(esp, ebx);
    if (1 /* jp after test - parity */) goto loc_0034DF03; /* jp: parity */

loc_0034DEF6: ;
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0034DF03; /* jp: parity */

loc_0034DEFF: ;
    eax = 0; /* xor self */
    goto loc_0034DF32;

loc_0034DF03: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm4 = xmm4 - xmm0; /* subss */
    MEMF(esp) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0034DF17: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034DF2F: ;
    xmm4 = 0.0f; /* xorps self = zero */

loc_0034DF32: ;
    xmm1 = MEMF(0x648F60); /* movss */
    eax = eax + 0x4000;
    edx = ZX16(LO16(eax));
    edx = edx + 0x8000;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0034DF6F; /* jbe: below or equal (unsigned <=) */

loc_0034DF5F: ;
    /* nop */

loc_0034DF60: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0034DF60; /* ja: above (unsigned >) */

loc_0034DF69: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_0034DF6F: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0034DF83; /* jbe: below or equal (unsigned <=) */

loc_0034DF74: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_0034DF74; /* ja: above (unsigned >) */

loc_0034DF7D: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_0034DF83: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(ebp + 0x114) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0034DF9A: ;
    ecx = 0xC000;
    ecx = ecx - eax;
    MEM16(ebp + 0x174) = LO16(ecx);
    MEM16(ebp + 0x172) = LO16(ecx);
    MEM16(ebp + 0x170) = LO16(ecx);

loc_0034DFB6: ;
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0034DFC0
 * Original: 0x0034DFC0 - 0x0034E080 (192 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DFC0: ;
    esp = esp - 0xC;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    eax = eax + 0x2C;
    ebx = ebx - esi;
    edx = edx - esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    /* nop */
    eax = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(eax));
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_0034E080(); return; } /* je: equal / zero */

loc_0034E001: ;
    ebp = MEM32(0x84B0E0);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ebp;
    edi = eax;
    ecx = 0; /* xor self */

loc_0034E013: ;
    SET_LO16(edx, MEM16(eax + ecx * 4 + 0x12));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0034E034; /* je: equal / zero */

loc_0034E01F: ;
    edx = ZX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + ebp;
    if (CMP_NE(MEM8(edx + 0x33), 4)) goto loc_0034E034; /* jne: not equal / not zero */

loc_0034E02D: ;
    edi = edx;
    ecx = 8;

loc_0034E034: ;
    ecx++;
    if (CMP_L(ecx, 8)) goto loc_0034E013; /* jl: less (signed <) */

loc_0034E03A: ;
    xmm2 = MEMF(edi); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    ecx = MEM32(esp + 0x20);
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(ebx + esi) = xmm2; /* movss */
    edx = MEM32(eax + 4);
    MEM32(esi) = edx;
    xmm2 = MEMF(ecx); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 8); /* addss */
    eax = MEM32(esp + 0x14);
    MEMF(eax + esi) = xmm2; /* movss */
    edx = eax;
    g_seh_ebp = ebp; sub_0034E097(); return; /* tail jmp 0x0034E097 */

}

/**
 * sub_0034E0C0
 * Original: 0x0034E0C0 - 0x0034E0D9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034E0C0: ;
    PUSH32(esp, ecx);
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    ecx = ZX16(LO16(ecx));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = 0xFFFF;
    if (CMP_L(ecx, edx)) { sub_0034E0D9(); return; } /* jl: less (signed <) */

loc_0034E0D4: ;
    SET_LO16(eax, LO16(eax) | LO16(eax));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034E140
 * Original: 0x0034E140 - 0x0034E4EE (942 bytes, 257 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E140(void)
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

loc_0034E140: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp + 0x5C;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0034E4E8; /* je: equal / zero */

loc_0034E162: ;
    SET_LO8(ecx, MEM8(0x849818));
    SET_LO8(eax, MEM8(ebp + 0x35));
    SET_LO8(ecx, LO8(ecx) >> 6);
    SET_LO8(ecx, LO8(ecx) & 1);
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_NE(LO8(eax), 2)) goto loc_0034E345; /* jne: not equal / not zero */

loc_0034E17F: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0034E2A3; /* jle: less or equal (signed <=) */

loc_0034E190: ;
    SET_LO8(ebx, MEM8(0x801325));
    goto loc_0034E1A0;

    /* nop */
    /* nop */

loc_0034E1A0: ;
    edi = MEM32(0x84B0E0);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edi;
    if (CMP_NE(MEM8(eax + 0x33), 5)) goto loc_0034E29A; /* jne: not equal / not zero */

loc_0034E1B7: ;
    if (CMP_NE(MEM8(eax + 0x35), 2)) goto loc_0034E29A; /* jne: not equal / not zero */

loc_0034E1C1: ;
    MEM16(ebp + 0x56) = LO16(ecx);
    MEM16(ebp + 0x58) = LO16(ecx);
    esi = eax + 0x16;
    edi = 2;

loc_0034E1D1: ;
    SET_LO16(ecx, MEM16(esi + -4));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034E205; /* je: equal / zero */

loc_0034E1DC: ;
    edx = MEM32(0x84B0E0);
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034E1F7; /* jne: not equal / not zero */

loc_0034E1EE: ;
    SET_LO8(edx, 3);
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E1FF; /* je: equal / zero */

loc_0034E1F5: ;
    goto loc_0034E207;

loc_0034E1F7: ;
    if (CMP_EQ(MEM8(eax + 0x35), 3)) goto loc_0034E205; /* je: equal / zero */

loc_0034E1FD: ;
    SET_LO8(edx, 3);

loc_0034E1FF: ;
    MEM16(ebp + 0x58) = LO16(ecx);
    goto loc_0034E207;

loc_0034E205: ;
    SET_LO8(edx, 3);

loc_0034E207: ;
    SET_LO16(ecx, MEM16(esi));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034E231; /* je: equal / zero */

loc_0034E211: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(0x84B0E0);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034E228; /* jne: not equal / not zero */

loc_0034E221: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E22D; /* je: equal / zero */

loc_0034E226: ;
    goto loc_0034E231;

loc_0034E228: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E231; /* je: equal / zero */

loc_0034E22D: ;
    MEM16(ebp + 0x58) = LO16(ecx);

loc_0034E231: ;
    SET_LO16(ecx, MEM16(esi + 4));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034E25C; /* je: equal / zero */

loc_0034E23C: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(0x84B0E0);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034E253; /* jne: not equal / not zero */

loc_0034E24C: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E258; /* je: equal / zero */

loc_0034E251: ;
    goto loc_0034E25C;

loc_0034E253: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E25C; /* je: equal / zero */

loc_0034E258: ;
    MEM16(ebp + 0x58) = LO16(ecx);

loc_0034E25C: ;
    SET_LO16(ecx, MEM16(esi + 8));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034E287; /* je: equal / zero */

loc_0034E267: ;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(0x84B0E0);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0034E27E; /* jne: not equal / not zero */

loc_0034E277: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E283; /* je: equal / zero */

loc_0034E27C: ;
    goto loc_0034E287;

loc_0034E27E: ;
    if (CMP_EQ(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E287; /* je: equal / zero */

loc_0034E283: ;
    MEM16(ebp + 0x58) = LO16(ecx);

loc_0034E287: ;
    esi = esi + 0x10;
    edi--;
    if ((edi != 0)) goto loc_0034E1D1; /* jne: not equal / not zero */

loc_0034E291: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    ecx = edx;

loc_0034E29A: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0034E1A0; /* jl: less (signed <) */

loc_0034E2A3: ;
    xmm2 = MEMF(0x648F6C); /* movss */
    SET_LO16(ecx, MEM16(ebp + 0x56));
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebp + 0x58));
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_0034E2C0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x84B0E0);
    esi = ZX16(LO16(edi));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    ecx = edi;
    esi = esi + eax;
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E2DD: ;
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    eax = ZX16(LO16(eax));
    xmm3 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    esp = esp + 8;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    ecx = edi;
    edi = eax;
    if ((xmm2 <= xmm0)) goto loc_0034E320; /* jbe: below or equal (unsigned <=) */

loc_0034E315: ;
    xmm2 = xmm0; /* movaps */
    MEM16(ebp + 0x56) = LO16(ecx);
    MEM16(ebp + 0x58) = LO16(eax);

loc_0034E320: ;
    if (CMP_NE(LO16(eax), MEM16(esp + 0x1C))) goto loc_0034E2C0; /* jne: not equal / not zero */

loc_0034E327: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x564);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034E33A: ;
    ebx = MEM32(esp + 0x28);
    esp = esp + 8;
    MEM8(ebp + 0x35) = 3;

loc_0034E345: ;
    SET_LO16(ecx, MEM16(ebp + 0x58));
    SET_LO16(edx, MEM16(ebp + 0x56));
    edi = MEM32(0x84B0E0);
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    esi = ZX16(LO16(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    xmm1 = xmm1 - MEMF(esi + edi); /* subss */
    xmm0 = xmm0 - MEMF(esi + edi + 8); /* subss */
    eax = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = esi + edi;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(eax + edi); /* subss */
    eax = eax + edi;
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(ebx + 0x80); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    if ((xmm3 <= xmm0)) goto loc_0034E3FB; /* jbe: below or equal (unsigned <=) */

loc_0034E3BE: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    MEM16(ebp + 0x56) = LO16(ecx);
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E3D0: ;
    ecx = MEM32(esp + 0x28);
    MEM16(ebp + 0x58) = LO16(eax);
    xmm1 = MEMF(ecx + 0x78); /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    esp = esp + 8;
    eax = esi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ebx = ecx;

loc_0034E3FB: ;
    xmm4 = MEMF(ebx + 0x7C); /* movss */
    xmm4 = xmm4 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x14); /* movss */
    fp_push(MEMF(0x59D944)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = xmm0 / xmm3; /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0034E45B; /* jbe: below or equal (unsigned <=) */

loc_0034E453: ;
    xmm3 = MEMF(0x59D944); /* movss */

loc_0034E45B: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    ecx = MEM32(ebx + 0x78);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(ebx + 0x7C);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ebx + 0x80);
    MEM32(eax + 0x28) = ecx;
    xmm4 = MEMF(ebx + 0x78); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(eax + 0x14) = xmm4; /* movss */
    xmm2 = MEMF(ebx + 0x7C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0x18) = xmm2; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, eax);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM32(eax + 4) = 0;
    ecx = MEM32(ebx + 0x564);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034E4E5: ;
    esp = esp + 8;

loc_0034E4E8: ;
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
 * sub_0034E4F0
 * Original: 0x0034E4F0 - 0x0034ECAC (1980 bytes, 459 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4F0(void)
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

loc_0034E4F0: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x564);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = edi + 0x5C;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(esi, esi)) goto loc_0034ECA5; /* je: equal / zero */

loc_0034E516: ;
    if (TEST_Z(eax, eax)) goto loc_0034E55F; /* je: equal / zero */

loc_0034E51A: ;
    xmm0 = MEMF(0x6492B0); /* movss */
    MEM32(ebp + 0x10) = 0x78;
    MEMF(ebp + 0xC) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x564);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034E53C: ;
    eax = ZX8(MEM8(esi + 0x2A8));
    ecx = MEM32(ebx + 0x564);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034E551: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0x55) = 0;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_0034E55F: ;
    SET_LO8(eax, MEM8(edi + 0x55));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    SET_LO8(ebx, 6);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034E624; /* jne: not equal / not zero */

loc_0034E56F: ;
    esi = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    SET_LO8(edx, MEM8(0x801325));
    SET_LO8(edx, LO8(edx) + 1);
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0034E5A6; /* jle: less or equal (signed <=) */

loc_0034E584: ;
    ebp = MEM32(0x84B0E0);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ebp;
    if (CMP_NE(MEM8(eax + 0x33), LO8(ebx))) goto loc_0034E5A1; /* jne: not equal / not zero */

loc_0034E596: ;
    if (CMP_NE(MEM8(eax + 0x35), LO8(edx))) goto loc_0034E5A1; /* jne: not equal / not zero */

loc_0034E59B: ;
    MEM16(edi + 0x4C) = LO16(ecx);
    ecx = esi;

loc_0034E5A1: ;
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_0034E584; /* jl: less (signed <) */

loc_0034E5A6: ;
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(edi + 0x4C));
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    ecx = ebp;
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E5BA: ;
    esi = 0; /* xor self */
    SET_LO16(esi, LO16(eax));
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM16(edi + 0x4E) = LO16(esi);
    ecx = esi;
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E5CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM16(edi + 0x50) = LO16(eax);
    ecx = eax;
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E5DB: ;
    MEM16(edi + 0x52) = LO16(eax);
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(eax + 0x78);
    MEM32(edi + 0x40) = ecx;
    edx = MEM32(eax + 0x7C);
    MEM32(edi + 0x44) = edx;
    ecx = MEM32(eax + 0x80);
    edx = MEM32(esp + 0x28);
    MEM32(edi + 0x48) = ecx;
    MEMF(edi + 0x3C) = xmm1; /* movss */
    ecx = ZX8(MEM8(edx + 0x2A8));
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x564);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034E619: ;
    ebp = MEM32(esp + 0x34);
    esp = esp + 0x20;
    MEM8(edi + 0x55) = 1;

loc_0034E624: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6493D0); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x3C); /* addss */
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    if ((xmm0 < xmm2)) goto loc_0034E690; /* jb: below (unsigned <) */

loc_0034E64B: ;
    SET_LO16(eax, MEM16(edi + 0x50));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0034E65C; /* jne: not equal / not zero */

loc_0034E655: ;
    MEMF(edi + 0x3C) = xmm2; /* movss */
    goto loc_0034E690;

loc_0034E65C: ;
    SET_LO16(edx, MEM16(edi + 0x4E));
    MEM16(edi + 0x4E) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x4E));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x52));
    PUSH32(esp, 0);
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    MEM16(edi + 0x4C) = LO16(edx);
    PUSH32(esp, eax);
    MEM16(edi + 0x50) = LO16(ecx);
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E689: ;
    esp = esp + 8;
    MEM16(edi + 0x52) = LO16(eax);

loc_0034E690: ;
    xmm0 = MEMF(0x648E6C); /* movss */
    xmm2 = MEMF(0x648EA0); /* movss */
    ecx = edi + 0x4C;
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x68;
    ecx = ecx - 4;
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0x38;
    edx = esp + 0x48;
    ebx = esp + 0x58;
    eax = eax - 4;
    edx = edx - 4;
    ebx = ebx - 4;
    ecx = esp + 0x78;
    ecx = ecx - 4;
    MEM8(esp + 0xF) = 0;
    esi = 0xFFFFFFFCu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x24) = ecx;
    goto loc_0034E6F0;

    /* nop */

loc_0034E6F0: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(ecx));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0034E7C8; /* je: equal / zero */

loc_0034E702: ;
    eax = ZX16(LO16(ecx));
    if (TEST_S(eax, eax)) goto loc_0034E735; /* jl: less (signed <) */

loc_0034E709: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    if (CMP_GE(eax, edx)) goto loc_0034E735; /* jge: greater or equal (signed >=) */

loc_0034E714: ;
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    edx = MEM32(eax);
    MEM32(esp + esi + 0x2C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + esi + 0x3C) = edx;
    MEM32(esp + esi + 0x4C) = eax;
    goto loc_0034E747;

loc_0034E735: ;
    MEMF(esp + esi + 0x4C) = xmm1; /* movss */
    MEMF(esp + esi + 0x3C) = xmm1; /* movss */
    MEMF(esp + esi + 0x2C) = xmm1; /* movss */

loc_0034E747: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    SET_LO8(ebx, 4);
    PUSH32(esp, 0); sub_0034E0C0(); /* call 0x0034E0C0 */

loc_0034E755: ;
    eax = ZX16(LO16(eax));
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_0034E7A0; /* jl: less (signed <) */

loc_0034E75F: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    if (CMP_GE(eax, ecx)) goto loc_0034E7A0; /* jge: greater or equal (signed >=) */

loc_0034E76A: ;
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = MEM32(eax + edx);
    ebx = MEM32(esp + 0x14);
    eax = eax + edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + esi + 0x6C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + esi + 0x7C) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + esi + 0x5C) = ecx;
    MEM8(esp + 0xF) = 1;
    goto loc_0034E8CB;

loc_0034E7A0: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEMF(esp + esi + 0x7C) = xmm1; /* movss */
    MEMF(esp + esi + 0x6C) = xmm1; /* movss */
    MEMF(esp + esi + 0x5C) = xmm1; /* movss */
    MEM8(esp + 0xF) = 1;
    goto loc_0034E8CB;

loc_0034E7C8: ;
    if (CMP_NE(MEM8(esp + 0xF), 1)) goto loc_0034E838; /* jne: not equal / not zero */

loc_0034E7CF: ;
    ecx = MEM32(esp + 0x8C);
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    ecx = MEM32(edi + 0x40);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(edi + 0x44); /* movss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + esi + 0x3C) = xmm3; /* movss */
    /* fld st(0) */
    xmm3 = MEMF(edi + 0x44); /* movss */
    /* FPU: fsin  */
    MEM32(esp + esi + 0x5C) = ecx;
    ecx = MEM32(edi + 0x48);
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + esi + 0x6C) = xmm3; /* movss */
    MEM32(esp + esi + 0x7C) = ecx;
    MEM8(esp + 0xF) = 0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [edi + 0x40] */
    MEMF(esp + esi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [edi + 0x48] */
    MEMF(esp + esi + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0034E8CB;

loc_0034E838: ;
    xmm3 = MEMF(esp + esi + 0x28); /* movss */
    xmm3 = xmm3 - MEMF(esp + esi + 0x24); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x28); /* addss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + esi + 0x2C) = xmm3; /* movss */
    xmm3 = MEMF(esp + esi + 0x38); /* movss */
    xmm3 = xmm3 - MEMF(eax + esi); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x38); /* addss */
    MEMF(esp + esi + 0x3C) = xmm3; /* movss */
    xmm3 = MEMF(esp + esi + 0x48); /* movss */
    xmm3 = xmm3 - MEMF(edx + esi); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x48); /* addss */
    MEMF(esp + esi + 0x4C) = xmm3; /* movss */
    xmm3 = MEMF(esp + esi + 0x58); /* movss */
    xmm3 = xmm3 - MEMF(ebx + esi); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x58); /* addss */
    MEMF(esp + esi + 0x5C) = xmm3; /* movss */
    xmm3 = MEMF(esp + esi + 0x68); /* movss */
    xmm3 = xmm3 - MEMF(ecx + esi); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x68); /* addss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + esi + 0x6C) = xmm3; /* movss */
    xmm3 = MEMF(esp + esi + 0x78); /* movss */
    xmm3 = xmm3 - MEMF(ecx + esi); /* subss */
    xmm3 = xmm3 + MEMF(esp + esi + 0x78); /* addss */
    MEMF(esp + esi + 0x7C) = xmm3; /* movss */

loc_0034E8CB: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + 2;
    esi = esi + 4;
    (void)0; /* cmp esi, 0xC - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(esi, 0xC)) goto loc_0034E6F0; /* jl: less (signed <) */

loc_0034E8E2: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm4 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(edi + 0x3C); /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm4 = MEMF(0x648CF4); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x28); /* addss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0x24); /* subss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x2C); /* addss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x24); /* subss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x38); /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0x20); /* subss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x3C); /* addss */
    MEMF(ebp + 0x18) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x54); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 - xmm6; /* subss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x24); /* subss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x48); /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = MEMF(esp + 0x58); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0x20); /* subss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x60); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x4C); /* addss */
    MEMF(ebp + 0x1C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x64); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x5C); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm7 = MEMF(esp + 0x5C); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x24); /* subss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x58); /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x68); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0x20); /* subss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x5C); /* addss */
    MEMF(ebp + 0x20) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x74); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x6C); /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x6C); /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x24); /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x68); /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0x20); /* subss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x78); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x6C); /* addss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(ebp + 0x24) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x84); /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x80); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    edx = MEM32(esp + 0x8C);
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x7C); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x7C); /* movss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x78); /* addss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm7 = xmm7 + MEMF(esp + 0x7C); /* addss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(ebp + 0x28) = xmm7; /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    MEM32(ebp) = 0;
    MEM32(ebp + 4) = 0;
    ecx = MEM32(edx + 0x564);
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0034ECA2: ;
    esp = esp + 8;

loc_0034ECA5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0034ECB0
 * Original: 0x0034ECB0 - 0x0034EDC0 (272 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ECB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ECB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B104);
    eax = eax << 0xC;
    eax = eax + ecx;
    ebx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_BE(ebp & ebp, 0)) goto loc_0034EDBC; /* jbe: below or equal (unsigned <=) */

loc_0034ECCA: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B100);
    esi = esi + 8;

loc_0034ECD4: ;
    edx = ZX16(MEM16(esi + -6));
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0034ECED; /* jbe: below or equal (unsigned <=) */

loc_0034ECDE: ;
    ecx = esi;

loc_0034ECE0: ;
    if (CMP_EQ(LO16(edi), MEM16(ecx))) goto loc_0034ECFA; /* je: equal / zero */

loc_0034ECE5: ;
    eax++;
    ecx = ecx + 2;
    if (CMP_B(eax, edx)) goto loc_0034ECE0; /* jb: below (unsigned <) */

loc_0034ECED: ;
    ebx++;
    esi = esi + 0x18;
    if (CMP_B(ebx, ebp)) goto loc_0034ECD4; /* jb: below (unsigned <) */

loc_0034ECF5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0034ECFA: ;
    ecx = MEM32(0x84B100);
    edi = ebx + ebx * 2;
    ebp = 0; /* xor self */
    edi = edi << 3;
    if (CMP_BE(MEM16(edi + ecx + 2), LO16(ebp))) goto loc_0034ED98; /* jbe: below or equal (unsigned <=) */

loc_0034ED13: ;
    edx = MEM32(0x77079C);
    esi = edi + 8;
    /* nop */

loc_0034ED20: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + ecx));
    ecx = ZX16(MEM16(esi + ecx));
    ecx = ecx >> 0xC;
    eax = eax & 0xFFF;
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_0034ED79; /* je: equal / zero */

loc_0034ED37: ;
    ecx--;
    if ((ecx != 0)) goto loc_0034ED84; /* jne: not equal / not zero */

loc_0034ED3A: ;
    if (TEST_S(eax, eax)) goto loc_0034ED84; /* jl: less (signed <) */

loc_0034ED3E: ;
    if (CMP_GE(eax, edx)) goto loc_0034ED84; /* jge: greater or equal (signed >=) */

loc_0034ED42: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(0x847214);
    eax = eax + eax * 4;
    MEM16(ecx + eax * 4 + 6) = 2;
    if (TEST_Z(edx, edx)) goto loc_0034ED84; /* je: equal / zero */

loc_0034ED56: ;
    ecx = MEM32(0x847214);
    eax = edx + edx * 4 + -5;
    eax = ecx + eax * 4 + 6;

loc_0034ED64: ;
    if (TEST_Z(MEM8(eax), 2)) goto loc_0034ED84; /* je: equal / zero */

loc_0034ED69: ;
    edx--;
    eax = eax - 0x14;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0x77079C) = edx;
    if (TEST_NZ(edx, edx)) goto loc_0034ED64; /* jne: not equal / not zero */

loc_0034ED77: ;
    goto loc_0034ED84;

loc_0034ED79: ;
    PUSH32(esp, 0); sub_0006AE10(); /* call 0x0006AE10 */

loc_0034ED7E: ;
    edx = MEM32(0x77079C);

loc_0034ED84: ;
    eax = MEM32(0x84B100);
    ecx = ZX16(MEM16(edi + eax + 2));
    ebp++;
    esi = esi + 2;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    ecx = eax;
    if (CMP_B(ebp, ecx)) goto loc_0034ED20; /* jb: below (unsigned <) */

loc_0034ED98: ;
    if (CMP_AE(ebx, MEM32(0x84B104))) goto loc_0034EDBB; /* jae: above or equal (unsigned >=) */

loc_0034EDA0: ;
    eax = 0; /* xor self */
    MEM16(edi + ecx + 2) = LO16(eax);
    edx = MEM32(0x84B100);
    MEM32(edi + edx + 4) = eax;
    ecx = MEM32(0x84B100);
    MEM16(edi + ecx) = LO16(eax);

loc_0034EDBB: ;
    POP32(esp, esi);

loc_0034EDBC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034EE10
 * Original: 0x0034EE10 - 0x0034EED9 (201 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    edi = 0x84D458;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EE2B: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(esi & esi, 0)) goto loc_0034EED4; /* jle: less or equal (signed <=) */

loc_0034EE3B: ;
    esi = ebp + 8;
    PUSH32(esp, ebx);
    /* nop */

loc_0034EE40: ;
    ecx = MEM32(esp + 0x18);
    eax = esi + -4;
    MEM32(0x801398) = eax;
    eax = MEM32(eax);
    MEM32(0x801390) = ecx;
    ecx = MEM32(esi);
    edi = 0x84D458;
    MEM32(0x801394) = eax;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EE65: ;
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EE6E: ;
    if (TEST_Z(ebx, ebx)) goto loc_0034EE84; /* je: equal / zero */

loc_0034EE72: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0034EE7D; /* je: equal / zero */

loc_0034EE79: ;
    MEM16(ebx + 0x2C) = MEM16(ebx + 0x2C) - 1;

loc_0034EE7D: ;
    if (CMP_EQ(MEM16(ebx + 0x2C), 0)) goto loc_0034EEAF; /* je: equal / zero */

loc_0034EE84: ;
    ecx = MEM32(esi);
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EE90: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EE97: ;
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034EEA0: ;
    if (TEST_Z(ebx, ebx)) goto loc_0034EEBB; /* je: equal / zero */

loc_0034EEA4: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0034EEAF; /* je: equal / zero */

loc_0034EEAB: ;
    MEM16(ebx + 0x2C) = MEM16(ebx + 0x2C) - 1;

loc_0034EEAF: ;
    eax = 0x84D458;
    edi = ebx;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0034EEBB: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    eax++;
    esi = esi + 8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0034EE40; /* jl: less (signed <) */

loc_0034EED3: ;
    POP32(esp, ebx);

loc_0034EED4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034EEE0
 * Original: 0x0034EEE0 - 0x0034EF25 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEE0: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5DEA1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0034EEF9: ;
    edi = MEM32(ebx);
    esi = edi;
    eax = esp + 8;

loc_0034EF01: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) { sub_0034EF25(); return; } /* jne: not equal / not zero */

loc_0034EF09: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0034EF21; /* je: equal / zero */

loc_0034EF0D: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) { sub_0034EF25(); return; } /* jne: not equal / not zero */

loc_0034EF17: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034EF01; /* jne: not equal / not zero */

loc_0034EF21: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0034EF2A(); return; /* tail jmp 0x0034EF2A */

}

/**
 * sub_0034EF90
 * Original: 0x0034EF90 - 0x0034EFEE (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF90: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5DEA1C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0034EFAB: ;
    eax = MEM32(0x84B108);
    ebp = MEM32(eax * 4 + 0x80139C);
    edi = MEM32(ebp);
    eax--;
    MEM32(0x84B108) = eax;
    esi = edi;
    eax = esp + 0x10;

loc_0034EFC6: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_0034EFEE(); return; } /* jne: not equal / not zero */

loc_0034EFD0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0034EFEA; /* je: equal / zero */

loc_0034EFD4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_0034EFEE(); return; } /* jne: not equal / not zero */

loc_0034EFE0: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034EFC6; /* jne: not equal / not zero */

loc_0034EFEA: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0034EFF3(); return; /* tail jmp 0x0034EFF3 */

}

/**
 * sub_0034F050
 * Original: 0x0034F050 - 0x0034F098 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F050(void)
{
    uint32_t ebp;

loc_0034F050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x13C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0034F074: ;
    edi = 0; /* xor self */
    eax = esp + 0x30;
    MEM32(esp + 0x140) = 0x1D;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0034F096: ;
    g_seh_ebp = ebp; sub_0034F0A0(); return; /* tail jmp 0x0034F0A0 */

}

/**
 * sub_0034F260
 * Original: 0x0034F260 - 0x0034F31C (188 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F260: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    if (CMP_BE(eax, ebp)) goto loc_0034F2DB; /* jbe: below or equal (unsigned <=) */

loc_0034F277: ;
    PUSH32(esp, ebx);
    goto loc_0034F280;

    /* nop */

loc_0034F280: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + ebp + 4);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0034F28C: ;
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x20;
    eax = esp + 0x14;
    edi = 0x870E4C;
    PUSH32(esp, 0); sub_0037D940(); /* call 0x0037D940 */

loc_0034F2A2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = ecx;
    if (CMP_EQ(ecx, edx)) goto loc_0034F2B6; /* je: equal / zero */

loc_0034F2B0: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, edx)) goto loc_0034F2B0; /* jne: not equal / not zero */

loc_0034F2B6: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ebx = 0x870E4C;
    PUSH32(esp, 0); sub_0037D8C0(); /* call 0x0037D8C0 */

loc_0034F2C7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    eax++;
    ebp = ebp + 0x18;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(eax, ecx)) goto loc_0034F280; /* jb: below (unsigned <) */

loc_0034F2DA: ;
    POP32(esp, ebx);

loc_0034F2DB: ;
    esi = MEM32(esi + 4);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0034F2EA: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0034F315; /* je: equal / zero */

loc_0034F2F0: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0034F2FB; /* je: equal / zero */

loc_0034F2F7: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0034F2FB: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0034F315; /* jne: not equal / not zero */

loc_0034F302: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0034F30B: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0034F315: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F320
 * Original: 0x0034F320 - 0x0034F34D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034F320: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = esp + 4;
    eax = esp + 8;
    esi = 0x870E4C;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0034F33A: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(0x870E54) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, MEM32(0x870E54))) { sub_0034F34D(); return; } /* jne: not equal / not zero */

loc_0034F347: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F360
 * Original: 0x0034F360 - 0x0034F367 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F360(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034F360: ;
    if (TEST_NZ(ecx, ecx)) { sub_0034F367(); return; } /* jne: not equal / not zero */

loc_0034F364: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034F380
 * Original: 0x0034F380 - 0x0034F5A0 (544 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F380: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    eax = eax >> 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_A(ecx, eax)) goto loc_0034F4E9; /* ja: above (unsigned >) */

loc_0034F395: ;
    edi = MEM32(esi + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = esi + 0x10;
    if (TEST_NZ(edi, edi)) goto loc_0034F3A3; /* jne: not equal / not zero */

loc_0034F39F: ;
    eax = 0; /* xor self */
    goto loc_0034F3AB;

loc_0034F3A3: ;
    eax = MEM32(edx + 8);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_0034F3AB: ;
    eax--;
    if (CMP_A(eax, ecx)) goto loc_0034F3D8; /* ja: above (unsigned >) */

loc_0034F3B0: ;
    ecx = MEM32(edx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_0034F3BB; /* jne: not equal / not zero */

loc_0034F3B7: ;
    eax = 0; /* xor self */
    goto loc_0034F3C3;

loc_0034F3BB: ;
    eax = MEM32(edx + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_0034F3C3: ;
    ecx = MEM32(esi + 8);
    eax = eax + eax + -3;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_0034F3D6: ;
    goto loc_0034F3E6;

loc_0034F3D8: ;
    eax = MEM32(esi + 0x20);
    if (CMP_AE(eax, ecx)) goto loc_0034F3E6; /* jae: above or equal (unsigned >=) */

loc_0034F3DF: ;
    ecx = eax + eax + 1;
    MEM32(esi + 0x20) = ecx;

loc_0034F3E6: ;
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
    if (CMP_EQ(edi, MEM32(eax + 4))) goto loc_0034F4E6; /* je: equal / zero */

loc_0034F40E: ;
    edi = edi;

loc_0034F410: ;
    eax = MEM32(edi + 8);
    ebp = MEM32(esi + 0x20);
    eax = eax ^ 0xDEADBEEFu;
    eax = eax & ebp;
    if (CMP_NE(eax, edx)) goto loc_0034F428; /* jne: not equal / not zero */

loc_0034F421: ;
    edi = MEM32(edi);
    goto loc_0034F4CC;

loc_0034F428: ;
    ebp = MEM32(edi);
    if (CMP_EQ(ebp, MEM32(esi + 8))) goto loc_0034F4A4; /* je: equal / zero */

loc_0034F42F: ;
    ecx = MEM32(esi + 0x14);
    ecx = ecx + ebx;
    (void)0; /* cmp edi, MEM32(ecx) - flags set for next jcc */
    eax = edx;
    if (CMP_NE(edi, MEM32(ecx))) goto loc_0034F45A; /* jne: not equal / not zero */

loc_0034F43A: ;
    /* nop */

loc_0034F440: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 0x14);
    ecx = ecx + eax * 4;
    MEM32(ecx) = ebp;
    if (TEST_Z(eax, eax)) goto loc_0034F45A; /* je: equal / zero */

loc_0034F44C: ;
    ecx = MEM32(esi + 0x14);
    eax--;
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = ecx + eax * 4;
    if (CMP_EQ(edi, ebx)) goto loc_0034F440; /* je: equal / zero */

loc_0034F45A: ;
    ebx = MEM32(esi + 8);
    eax = esi + 4;
    if (CMP_EQ(eax, eax)) goto loc_0034F471; /* je: equal / zero */

loc_0034F464: ;
    ecx = 0; /* xor self */
    edx = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_0034F46D: ;
    edx = MEM32(esp + 0xC);

loc_0034F471: ;
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

loc_0034F4A4: ;
    eax = MEM32(esi + 0x24);
    if (CMP_AE(edx, eax)) goto loc_0034F4C5; /* jae: above or equal (unsigned >=) */

loc_0034F4AB: ;
    goto loc_0034F4B0;

    /* nop */

loc_0034F4B0: ;
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* cmp ebx, MEM32(esi + 8) - flags set for next jcc */
    ecx = ecx + eax * 4;
    if (CMP_NE(ebx, MEM32(esi + 8))) goto loc_0034F4C5; /* jne: not equal / not zero */

loc_0034F4BE: ;
    eax--;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ecx) = edi;
    if (CMP_B(edx, eax)) goto loc_0034F4B0; /* jb: below (unsigned <) */

loc_0034F4C5: ;
    if (CMP_EQ(ebp, MEM32(esi + 8))) goto loc_0034F4E6; /* je: equal / zero */

loc_0034F4CA: ;
    edi = ebp;

loc_0034F4CC: ;
    eax = MEM32(esi + 0x14);
    ebx = edx * 4;
    ecx = MEM32(ebx + eax + 4);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    eax = ebx + eax + 4;
    if (CMP_NE(edi, ecx)) goto loc_0034F410; /* jne: not equal / not zero */

loc_0034F4E6: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_0034F4E9: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx);
    edx = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x24);
    eax = ebp;
    eax = eax ^ 0xDEADBEEFu;
    eax = eax & edx;
    if (CMP_A(edi, eax)) goto loc_0034F50B; /* ja: above (unsigned >) */

loc_0034F502: ;
    edx = edx >> 1;
    edi = edi | 0xFFFFFFFFu;
    edi = edi - edx;
    eax = eax + edi;

loc_0034F50B: ;
    edx = MEM32(esi + 0x14);
    ebx = eax * 4;
    edi = MEM32(edx + ebx + 4);
    MEM32(esp + 0x18) = eax;
    eax = edx + ebx;
    if (CMP_EQ(edi, MEM32(eax))) goto loc_0034F538; /* je: equal / zero */

loc_0034F524: ;
    edi = MEM32(edi + 4);
    if (CMP_BE(MEM32(edi + 8), ebp)) { sub_0034F5A0(); return; } /* jbe: below or equal (unsigned <=) */

loc_0034F52C: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    if (CMP_NE(edi, edx)) goto loc_0034F524; /* jne: not equal / not zero */

loc_0034F538: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00298240(); /* call 0x00298240 */

loc_0034F542: ;
    ecx = 1;
    edx = esi + 4;
    ebp = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_0034F551: ;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(ebp + 4);
    MEM32(ecx) = ebp;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebx);
    ecx = MEM32(edi + 4);
    eax = eax + ebx;
    if (CMP_NE(edi, edx)) goto loc_0034F58F; /* jne: not equal / not zero */

loc_0034F568: ;
    eax = MEM32(esi + 0x14);
    eax = eax + ebx;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0034F58F; /* je: equal / zero */

loc_0034F577: ;
    eax--;
    MEM32(esp + 0x18) = eax;
    ebx = eax * 4;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    if (CMP_EQ(edi, edx)) goto loc_0034F568; /* je: equal / zero */

loc_0034F58F: ;
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
 * sub_0034F5C0
 * Original: 0x0034F5C0 - 0x0034F646 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F5C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034F5C0: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0x1FFFFFFF;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_0034F63C; /* jae: above or equal (unsigned >=) */

loc_0034F5D2: ;
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

loc_0034F5F6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0034F5FF: ;
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

loc_0034F624: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0034F63B: ;
    POP32(esp, ebx);

loc_0034F63C: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F650
 * Original: 0x0034F650 - 0x0034F6DF (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F650: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0034F663; /* jne: not equal / not zero */

loc_0034F65E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034F663: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0034F6AB; /* je: equal / zero */

loc_0034F689: ;
    if (CMP_B(MEM32(esi + 0x80), 0x4C)) goto loc_0034F6AB; /* jb: below (unsigned <) */

loc_0034F692: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034F69C: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034F6A4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0034F6CC; /* jne: not equal / not zero */

loc_0034F6AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034F6BD: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034F6C5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0034F6DF(); return; } /* je: equal / zero */

loc_0034F6CC: ;
    PUSH32(esp, 0x63BB30);
    esi = eax;
    PUSH32(esp, 0); sub_00351180(); /* call 0x00351180 */

loc_0034F6D8: ;
    MEM32(0x84B110) = eax;
    g_seh_ebp = ebp; sub_0034F6E5(); return; /* tail jmp 0x0034F6E5 */

}

/**
 * sub_0034F860
 * Original: 0x0034F860 - 0x0034F9A9 (329 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F860: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x870E7C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_0034F881; /* je: equal / zero */

loc_0034F870: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0034F87E: ;
    esp = esp + 4;

loc_0034F881: ;
    eax = MEM32(0x870E8C);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(0x870E7C) = ebp;
    MEM32(0x870E80) = ebp;
    MEM32(0x870E84) = ebp;
    if (CMP_EQ(eax, ebp)) goto loc_0034F8AD; /* je: equal / zero */

loc_0034F89C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0034F8AA: ;
    esp = esp + 4;

loc_0034F8AD: ;
    MEM32(0x870E8C) = ebp;
    MEM32(0x870E90) = ebp;
    MEM32(0x870E94) = ebp;
    edi = 0; /* xor self */

loc_0034F8C1: ;
    ecx = MEM32(0x84B10C);
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(edx, ebp)) { sub_0034F9A9(); return; } /* je: equal / zero */

loc_0034F8D2: ;
    eax = MEM32(ecx + 0x10);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(edi, eax)) { sub_0034F9A9(); return; } /* jae: above or equal (unsigned >=) */

loc_0034F8E2: ;
    if (CMP_EQ(edx, ebp)) goto loc_0034F8F7; /* je: equal / zero */

loc_0034F8E6: ;
    eax = MEM32(ecx + 0x10);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(edi, eax)) goto loc_0034F8F7; /* jae: above or equal (unsigned >=) */

loc_0034F8F2: ;
    ebx = MEM32(edx + edi * 4);
    goto loc_0034F8F9;

loc_0034F8F7: ;
    ebx = 0; /* xor self */

loc_0034F8F9: ;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_00352E70(); /* call 0x00352E70 */

loc_0034F902: ;
    if (TEST_NZ(eax, eax)) goto loc_0034F956; /* jne: not equal / not zero */

loc_0034F906: ;
    esi = MEM32(0x870E7C);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    edx = MEM32(0x870E80);
    if (CMP_EQ(esi, ebp)) goto loc_0034F93B; /* je: equal / zero */

loc_0034F916: ;
    ecx = MEM32(0x870E84);
    eax = edx;
    eax = eax - esi;
    ecx = ecx - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_0034F93B; /* jae: above or equal (unsigned >=) */

loc_0034F92C: ;
    eax = edx;
    eax = eax + 4;
    MEM32(edx) = ebx;
    MEM32(0x870E80) = eax;
    edi++;
    goto loc_0034F8C1;

loc_0034F93B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x870E78);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_0034F950: ;
    edi++;
    goto loc_0034F8C1;

loc_0034F956: ;
    esi = MEM32(0x870E8C);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    edx = MEM32(0x870E90);
    if (CMP_EQ(esi, ebp)) goto loc_0034F98E; /* je: equal / zero */

loc_0034F966: ;
    ecx = MEM32(0x870E94);
    eax = edx;
    eax = eax - esi;
    ecx = ecx - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_0034F98E; /* jae: above or equal (unsigned >=) */

loc_0034F97C: ;
    eax = edx;
    eax = eax + 4;
    MEM32(edx) = ebx;
    MEM32(0x870E90) = eax;
    edi++;
    goto loc_0034F8C1;

loc_0034F98E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x870E88);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_0034F9A3: ;
    edi++;
    goto loc_0034F8C1;

}

/**
 * sub_0034F9B0
 * Original: 0x0034F9B0 - 0x0034FA44 (148 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F9B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0x2D8;
    edi = edi;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0034F9CE; /* jne: not equal / not zero */

loc_0034F9C9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034F9CE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0034FA16; /* je: equal / zero */

loc_0034F9F4: ;
    if (CMP_B(MEM32(esi + 0x80), ebx)) goto loc_0034FA16; /* jb: below (unsigned <) */

loc_0034F9FC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034FA06: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034FA0D: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0034FA38; /* jne: not equal / not zero */

loc_0034FA16: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034FA28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034FA2F: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_0034FA44(); return; } /* je: equal / zero */

loc_0034FA38: ;
    eax = MEM32(0x84B10C);
    PUSH32(esp, 0); sub_00352F10(); /* call 0x00352F10 */

loc_0034FA42: ;
    g_seh_ebp = ebp; sub_0034FA46(); return; /* tail jmp 0x0034FA46 */

}

/**
 * sub_0034FB30
 * Original: 0x0034FB30 - 0x0034FB4A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034FB30: ;
    PUSH32(esp, esi);
    esi = 0x84B120;
    if (CMP_L(esi, 0x84B120)) { sub_0034FB4A(); return; } /* jl: less (signed <) */

loc_0034FB3E: ;
    if (CMP_G(esi, 0x84B128)) { sub_0034FB4A(); return; } /* jg: greater (signed >) */

loc_0034FB46: ;
    ecx = MEM32(esi);
    g_seh_ebp = ebp; sub_0034FB4C(); return; /* tail jmp 0x0034FB4C */

}

/**
 * sub_0034FB60
 * Original: 0x0034FB60 - 0x0034FBA2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FB60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FB60: ;
    eax = MEM32(0x84B120);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x84B124);
    if (TEST_Z(eax, eax)) goto loc_0034FB81; /* je: equal / zero */

loc_0034FB6F: ;
    if (TEST_Z(ecx, ecx)) goto loc_0034FB83; /* je: equal / zero */

loc_0034FB73: ;
    edx = MEM32(ecx + 0x2CC);
    if (CMP_BE(edx, MEM32(eax + 0x2CC))) goto loc_0034FB83; /* jbe: below or equal (unsigned <=) */

loc_0034FB81: ;
    eax = ecx;

loc_0034FB83: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x84B128);
    if (TEST_Z(eax, eax)) goto loc_0034FB9F; /* je: equal / zero */

loc_0034FB8D: ;
    if (TEST_Z(ecx, ecx)) goto loc_0034FBA1; /* je: equal / zero */

loc_0034FB91: ;
    edx = MEM32(ecx + 0x2CC);
    if (CMP_BE(edx, MEM32(eax + 0x2CC))) goto loc_0034FBA1; /* jbe: below or equal (unsigned <=) */

loc_0034FB9F: ;
    eax = ecx;

loc_0034FBA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034FBB0
 * Original: 0x0034FBB0 - 0x0034FBC9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FBB0: ;
    eax = MEM32(0x84B118);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x84B118) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_0034FBC8; /* je: equal / zero */

loc_0034FBC1: ;
    MEM8(eax + 0x2B8) = 1;

loc_0034FBC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034FBD0
 * Original: 0x0034FBD0 - 0x0034FBE2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FBD0: ;
    ecx = MEM32(0x84B118);
    if (TEST_Z(ecx, ecx)) goto loc_0034FBE1; /* je: equal / zero */

loc_0034FBDA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0034FBE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034FBF0
 * Original: 0x0034FBF0 - 0x0034FC36 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FBF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FBF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B118);
    if (TEST_Z(esi, esi)) goto loc_0034FC34; /* je: equal / zero */

loc_0034FBFB: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2BC);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0034FC07: ;
    SET_LO8(ecx, MEM8(esi + 0x2B8));
    eax = eax - edi;
    edi = edi + eax;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esi + 0x2BC) = edi;
    POP32(esp, edi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0034FC34; /* jne: not equal / not zero */

loc_0034FC1C: ;
    edx = MEM32(esi + 0x10);
    edx = edx + eax;
    eax = edx;
    (void)0; /* cmp eax, 0xD693A018u - flags set for next jcc */
    MEM32(esi + 0x10) = edx;
    if (CMP_BE(eax, 0xD693A018u)) goto loc_0034FC34; /* jbe: below or equal (unsigned <=) */

loc_0034FC2D: ;
    MEM32(esi + 0x10) = 0xD693A018u;

loc_0034FC34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034FC40
 * Original: 0x0034FC40 - 0x0034FC7E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FC40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FC40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0034FC43: ;
    ecx = MEM32(0x870E8C);
    if (TEST_Z(ecx, ecx)) { sub_0034FC7E(); return; } /* je: equal / zero */

loc_0034FC4D: ;
    eax = MEM32(0x870E90);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(esi, eax)) { sub_0034FC7E(); return; } /* jae: above or equal (unsigned >=) */

loc_0034FC5B: ;
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_0034FC65: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0034FC6F; /* je: equal / zero */

loc_0034FC6C: ;
    esi++;
    goto loc_0034FC43;

loc_0034FC6F: ;
    ecx = MEM32(0x870E8C);
    edx = MEM32(ecx + esi * 4);
    MEM32(ebx) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034FC90
 * Original: 0x0034FC90 - 0x0034FCC1 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FC90: ;
    esp = esp - 0x18;
    ecx = MEM32(0x84B10C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx);
    esi = MEM32(edi * 4 + 0x84B120);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0034FCB1: ;
    if (CMP_AE(eax, 4)) { sub_0034FCC1(); return; } /* jae: above or equal (unsigned >=) */

loc_0034FCB6: ;
    POP32(esp, edi);
    eax = 0x70;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0034FD50
 * Original: 0x0034FD50 - 0x0034FD71 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FD50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034FD50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = edi;
    PUSH32(esp, 0); sub_00352E70(); /* call 0x00352E70 */

loc_0034FD63: ;
    if (TEST_NZ(eax, eax)) { sub_0034FD71(); return; } /* jne: not equal / not zero */

loc_0034FD67: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x7B;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034FEB0
 * Original: 0x0034FEB0 - 0x0034FECC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FEB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0034FEB0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0034FEB5: ;
    if (CMP_AE(eax, 0x19)) { sub_0034FECC(); return; } /* jae: above or equal (unsigned >=) */

loc_0034FEBA: ;
    ecx = 0x19;
    ecx = ecx - eax;
    MEM32(esi) = 0x19;
    MEM32(edi) = ecx;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0034FEE0
 * Original: 0x0034FEE0 - 0x00350093 (435 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034FEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034FEE0: ;
    esp = esp - 0x118;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B10C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = eax;
    if (CMP_NE(eax, esi)) goto loc_0034FEF9; /* jne: not equal / not zero */

loc_0034FEF6: ;
    ecx = MEM32(ebp + 0x1C);

loc_0034FEF9: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + 0x18) = ecx;
    if (CMP_EQ(eax, esi)) goto loc_00350088; /* je: equal / zero */

loc_0034FF04: ;
    eax = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x14);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0034FF1C: ;
    esp = esp + 0xC;
    eax = esp + 0xC;
    MEM32(esp + 0x11C) = 0x14;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0034FF3F: ;
    /* nop */

loc_0034FF40: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0034FF5C; /* jl: less (signed <) */

loc_0034FF4E: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0034FF5C; /* jg: greater (signed >) */

loc_0034FF55: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0034FF5A: ;
    goto loc_0034FF40;

loc_0034FF5C: ;
    if (CMP_NE(MEM32(ecx + 4), esi)) goto loc_0035007F; /* jne: not equal / not zero */

loc_0034FF65: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, esi)) goto loc_0034FF73; /* je: equal / zero */

loc_0034FF6F: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_0034FF73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    (void)0; /* cmp MEM32(0x84A19C), esi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(MEM32(0x84A19C), esi)) goto loc_0034FF88; /* jne: not equal / not zero */

loc_0034FF83: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034FF88: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0034FFD8; /* je: equal / zero */

loc_0034FFAE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1000)) goto loc_0034FFD8; /* jb: below (unsigned <) */

loc_0034FFBA: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034FFC4: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034FFCF: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_0034FFFA; /* jne: not equal / not zero */

loc_0034FFD8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034FFEA: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034FFF5: ;
    esp = esp + 8;
    ebx = eax;

loc_0034FFFA: ;
    edx = MEM32(edi + 0x14);
    ecx = 9;
    esi = 0x75ED20;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = 0xADADADADu;
    ecx = 0x1F7;
    edi = ebx + 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esi = edx;
    edi = ebx + 0x800;
    ecx = 0x200;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_00350032: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x63BB08);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00350046: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0035005C; /* jne: not equal / not zero */

loc_0035004C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_0035005A: ;
    esi = eax;

loc_0035005C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035006A: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00350075: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_0035007D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0035007F: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00350088: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_003500A0
 * Original: 0x003500A0 - 0x003500AE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003500A0(void)
{

loc_003500A0: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003500AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003500B0
 * Original: 0x003500B0 - 0x003500BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003500B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003500B0: ;
    PUSH32(esp, esi);
    if (eax == 0 || eax >= 0x04000000) {
        POP32(esp, esi);
        esp += 4; return;
    }
    esi = MEM32(eax + 4);
    if (TEST_NZ(esi, esi)) { sub_003500BC(); return; } /* jne: not equal / not zero */

loc_003500B8: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_003500C4(); return; /* tail jmp 0x003500C4 */

}

/**
 * sub_00350100
 * Original: 0x00350100 - 0x0035011F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350100(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350100: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edi;
    if (CMP_BE(esi & esi, 0)) goto loc_0035011B; /* jbe: below or equal (unsigned <=) */

loc_00350106: ;
    ecx = esi;
    PUSH32(esp, ebx);
    /* nop */

loc_00350110: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_00350110; /* jne: not equal / not zero */

loc_0035011A: ;
    POP32(esp, ebx);

loc_0035011B: ;
    eax = edi + esi * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00350120
 * Original: 0x00350120 - 0x00350141 (33 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350120: ;
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edi & edi, 0)) goto loc_0035013D; /* jle: less or equal (signed <=) */

loc_00350127: ;
    esi = edx;
    esi = esi - eax;
    goto loc_00350130;

    /* nop */

loc_00350130: ;
    SET_LO8(edx, MEM8(esi + eax));
    if (CMP_NE(LO8(edx), MEM8(eax))) { sub_00350141(); return; } /* jne: not equal / not zero */

loc_00350137: ;
    ecx++;
    eax++;
    if (CMP_L(ecx, edi)) goto loc_00350130; /* jl: less (signed <) */

loc_0035013D: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00350150
 * Original: 0x00350150 - 0x003501C9 (121 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350150(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(ebx) = 0x63BB34;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_00350167: ;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0x14) = edi;
    MEM32(ebx + 0x10) = 0;
    MEM32(ebx + 0xC) = 0;
    MEM32(ebx) = 0x63BB34;
    ecx = MEM32(esi);
    if (CMP_LE(edi, 1)) goto loc_0035019B; /* jle: less or equal (signed <=) */

loc_00350188: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    if (CMP_LE(edx & edx, 0)) goto loc_00350197; /* jle: less or equal (signed <=) */

loc_00350191: ;
    edi = edi - edx;
    ecx = ecx + edi;
    goto loc_0035019B;

loc_00350197: ;
    if (((int32_t)ecx >= 0)) goto loc_0035019B; /* jge: greater or equal (signed >=) */

loc_00350199: ;
    ecx = ecx - edx;

loc_0035019B: ;
    PUSH32(esp, ecx);
    MEM32(ebx + 0xC) = ecx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003501A4: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_003501C2; /* je: equal / zero */

loc_003501AE: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_003501C2: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003501D0
 * Original: 0x003501D0 - 0x00350207 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003501D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003501D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x63BB34;
    if (TEST_Z(eax, eax)) goto loc_003501E9; /* je: equal / zero */

loc_003501E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003501E6: ;
    esp = esp + 4;

loc_003501E9: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00350201; /* je: equal / zero */

loc_003501F0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003501FE: ;
    esp = esp + 4;

loc_00350201: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00350210
 * Original: 0x00350210 - 0x0035028B (123 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350210: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(ebp, ebp)) { sub_0035028B(); return; } /* je: equal / zero */

loc_0035021C: ;
    eax = MEM32(ebp);
    if (CMP_NE(eax, ecx)) { sub_0035028B(); return; } /* jne: not equal / not zero */

loc_00350223: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_0035022B: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00350233: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_0035023E: ;
    esi = eax;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_0035024E; /* jne: not equal / not zero */

loc_00350245: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0035024A: ;
    if (TEST_NZ(eax, eax)) goto loc_00350262; /* jne: not equal / not zero */

loc_0035024E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00350257: ;
    if (TEST_NZ(eax, eax)) goto loc_00350262; /* jne: not equal / not zero */

loc_0035025B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00350262: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(eax, eax)) goto loc_0035027B; /* jne: not equal / not zero */

loc_00350268: ;
    edx = ebp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_00350120(); /* call 0x00350120 */

loc_00350272: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0035027B; /* jne: not equal / not zero */

loc_00350276: ;
    esi = 0x17;

loc_0035027B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00350281: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003502A0
 * Original: 0x003502A0 - 0x0035034B (171 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003502A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003502A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003502B0: ;
    edi = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    ebp = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    PUSH32(esp, eax);
    edi = edi - edx;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_003502CB: ;
    ebx = eax;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_003502DB; /* jne: not equal / not zero */

loc_003502D2: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_003502D7: ;
    if (TEST_NZ(eax, eax)) goto loc_003502F4; /* jne: not equal / not zero */

loc_003502DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_003502E3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_003502F8; /* jne: not equal / not zero */

loc_003502EB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_003502F2: ;
    goto loc_003502F8;

loc_003502F4: ;
    ebp = MEM32(esp + 0x10);

loc_003502F8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = eax;
    if (TEST_NZ(eax, eax)) goto loc_0035033A; /* jne: not equal / not zero */

loc_003502FE: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    edi = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = eax + edi;
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0035033A; /* jle: less or equal (signed <=) */

loc_00350311: ;
    edi = eax;
    ecx = ebp;
    edi = edi - ebp;

loc_00350317: ;
    SET_LO8(eax, MEM8(edi + ecx));
    if (CMP_NE(LO8(eax), MEM8(ecx))) goto loc_00350335; /* jne: not equal / not zero */

loc_0035031E: ;
    esi++;
    ecx++;
    if (CMP_L(esi, edx)) goto loc_00350317; /* jl: less (signed <) */

loc_00350324: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0035032A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00350335: ;
    ebx = 0x17;

loc_0035033A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00350340: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00350350
 * Original: 0x00350350 - 0x00350388 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350350(void)
{

loc_00350350: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x63BB34;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_0035035F: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x63BB34;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_00350380: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00350390
 * Original: 0x00350390 - 0x003503D6 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x14);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    esi = ebx + eax * 2 + 0xC;
    MEM32(edi + 0xC) = esi;
    if (CMP_LE(ecx, 1)) goto loc_003503B9; /* jle: less or equal (signed <=) */

loc_003503A6: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_003503B5; /* jle: less or equal (signed <=) */

loc_003503AF: ;
    ecx = ecx - edx;
    esi = esi + ecx;
    goto loc_003503B9;

loc_003503B5: ;
    if (((int32_t)esi >= 0)) goto loc_003503B9; /* jge: greater or equal (signed >=) */

loc_003503B7: ;
    esi = esi - edx;

loc_003503B9: ;
    PUSH32(esp, esi);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003503C2: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x10) = eax;
    if (TEST_NZ(eax, eax)) { sub_003503D6(); return; } /* jne: not equal / not zero */

loc_003503CC: ;
    POP32(esp, edi);
    eax = 0xE;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00350410
 * Original: 0x00350410 - 0x0035046F (95 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ebx + 0xC;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_00350425: ;
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_00350435; /* jne: not equal / not zero */

loc_0035042C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00350431: ;
    if (TEST_NZ(eax, eax)) goto loc_00350449; /* jne: not equal / not zero */

loc_00350435: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_0035043E: ;
    if (TEST_NZ(eax, eax)) goto loc_00350449; /* jne: not equal / not zero */

loc_00350442: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00350449: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    ebx = eax;
    ebx = ebx - ecx;
    ebx = ebx + edx;
    edx = MEM32(edx + 4);
    edi = ecx;
    edx = edx + edi * 2 + 0xC;
    if (CMP_BE(edx, eax)) { sub_0035046F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00350465: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x18;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003504B0
 * Original: 0x003504B0 - 0x00350581 (209 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003504B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003504B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003505D0(); /* call 0x003505D0 */

loc_003504D8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x1E32A0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00350590(); /* call 0x00350590 */

loc_003504EF: ;
    eax = MEM32(esi + 4);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0035050E; /* je: equal / zero */

loc_003504F9: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0035050E: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + eax * 2;
    PUSH32(esp, 0x30);
    eax = eax * 4 + 8;
    PUSH32(esp, 0x63BB38);
    PUSH32(esp, eax);
    MEM32(edx) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0035052D: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = edi + 8;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_003506F0(); /* call 0x003506F0 */

loc_00350546: ;
    eax = MEM32(esi + 4);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00350565; /* je: equal / zero */

loc_00350550: ;
    esi = MEM32(esi + 8);
    esi = esi - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00350565: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM32(edi + 4) = eax;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    eax--;
    eax = eax & ebx;
    MEM32(edi) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00350590
 * Original: 0x00350590 - 0x003505BD (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(esi, ebx)) { sub_003505BD(); return; } /* je: equal / zero */

loc_003505A3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_003505A8: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_003505AC: ;
    esi = esi + 0xC;
    if (CMP_NE(esi, ebx)) goto loc_003505A8; /* jne: not equal / not zero */

loc_003505B3: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003505D0
 * Original: 0x003505D0 - 0x003506B3 (227 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003505D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003505D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 0x20)) goto loc_0035069C; /* jle: less or equal (signed <=) */

loc_003505FC: ;
    esi = MEM32(esp + 0x24);

loc_00350600: ;
    if (CMP_LE(esi & esi, 0)) { sub_003506B3(); return; } /* jle: less or equal (signed <=) */

loc_00350608: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00350730(); /* call 0x00350730 */

loc_00350614: ;
    ebp = MEM32(esp + 0x20);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    ecx = edi;
    ecx = ecx - ebp;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x1C);
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = ecx - ebx;
    MEM32(esp + 0x2C) = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x2C);
    edx = (uint32_t)((int32_t)edx >> 1);
    ecx = edx;
    ecx = ecx >> 0x1F;
    esp = esp + 0xC;
    ecx = ecx + edx;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(ecx, eax)) goto loc_00350671; /* jge: greater or equal (signed >=) */

loc_00350662: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003505D0(); /* call 0x003505D0 */

loc_0035066D: ;
    ebx = ebp;
    goto loc_0035067C;

loc_00350671: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003505D0(); /* call 0x003505D0 */

loc_00350678: ;
    edi = MEM32(esp + 0x1C);

loc_0035067C: ;
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp = esp + 0xC;
    if (CMP_G(eax, 0x20)) goto loc_00350600; /* jg: greater (signed >) */

loc_0035069C: ;
    if (CMP_LE(eax, 1)) goto loc_003506AB; /* jle: less or equal (signed <=) */

loc_003506A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00350AC0(); /* call 0x00350AC0 */

loc_003506A8: ;
    esp = esp + 8;

loc_003506AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003506F0
 * Original: 0x003506F0 - 0x00350722 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003506F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003506F0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    if (CMP_EQ(ecx, edx)) goto loc_00350721; /* je: equal / zero */

loc_003506FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00350700: ;
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    esi = MEM32(esi + 8);
    ecx = ecx + 0xC;
    eax = eax + 0xC;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edi + 8) = esi;
    if (CMP_NE(ecx, edx)) goto loc_00350700; /* jne: not equal / not zero */

loc_0035071E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00350721: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00350730
 * Original: 0x00350730 - 0x003509FE (718 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350730: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    ecx = ebp;
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    esi = ebx + eax * 4;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00350B30(); /* call 0x00350B30 */

loc_00350769: ;
    esp = esp + 0xC;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    eax = esi;
    edi = esi + 0xC;
    if (CMP_AE(ebx, esi)) goto loc_00350787; /* jae: above or equal (unsigned >=) */

loc_00350775: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + -12);
    if (CMP_A(ecx, edx)) goto loc_00350787; /* ja: above (unsigned >) */

loc_0035077E: ;
    if (CMP_B(ecx, edx)) goto loc_00350787; /* jb: below (unsigned <) */

loc_00350780: ;
    eax = eax + 0xFFFFFFF4u;
    if (CMP_B(ebx, eax)) goto loc_00350775; /* jb: below (unsigned <) */

loc_00350787: ;
    if (CMP_AE(edi, ebp)) goto loc_0035079F; /* jae: above or equal (unsigned >=) */

loc_0035078B: ;
    edx = MEM32(eax);
    /* nop */

loc_00350790: ;
    ecx = MEM32(edi);
    if (CMP_A(edx, ecx)) goto loc_0035079F; /* ja: above (unsigned >) */

loc_00350796: ;
    if (CMP_B(edx, ecx)) goto loc_0035079F; /* jb: below (unsigned <) */

loc_00350798: ;
    edi = edi + 0xC;
    if (CMP_B(edi, ebp)) goto loc_00350790; /* jb: below (unsigned <) */

loc_0035079F: ;
    esi = eax;
    edx = edi;
    MEM32(esp + 0x10) = esi;

loc_003507A7: ;
    if (CMP_AE(edx, MEM32(esp + 0x74))) goto loc_00350808; /* jae: above or equal (unsigned >=) */

loc_003507AD: ;
    /* nop */

loc_003507B0: ;
    ecx = MEM32(eax);
    ebx = MEM32(edx);
    if (CMP_A(ebx, ecx)) goto loc_003507FD; /* ja: above (unsigned >) */

loc_003507B8: ;
    if (CMP_B(ebx, ecx)) goto loc_00350808; /* jb: below (unsigned <) */

loc_003507BA: ;
    ecx = edi;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebp;
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(ecx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(ecx + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(esp + 0x14);
    ecx = edx;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(esp + 0x1C);
    edi = edi + 0xC;
    MEM32(ecx + 8) = ebx;

loc_003507FD: ;
    ecx = MEM32(esp + 0x74);
    edx = edx + 0xC;
    if (CMP_B(edx, ecx)) goto loc_003507B0; /* jb: below (unsigned <) */

loc_00350808: ;
    if (CMP_BE(esi, MEM32(esp + 0x70))) goto loc_00350878; /* jbe: below or equal (unsigned <=) */

loc_0035080E: ;
    ecx = esi + -12;

loc_00350811: ;
    ebx = MEM32(eax);
    ebp = MEM32(ecx);
    if (CMP_A(ebx, ebp)) goto loc_00350862; /* ja: above (unsigned >) */

loc_00350819: ;
    if (CMP_B(ebx, ebp)) goto loc_00350874; /* jb: below (unsigned <) */

loc_0035081B: ;
    eax = eax - 0xC;
    esi = eax;
    ebx = MEM32(esi);
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = ebx;
    esi = ecx;
    ebp = MEM32(esi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(ebx + 8) = esi;
    ebx = MEM32(esp + 0x20);
    esi = ecx;
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(esi + 8) = ebx;
    esi = MEM32(esp + 0x10);

loc_00350862: ;
    ebx = MEM32(esp + 0x70);
    esi = esi - 0xC;
    ecx = ecx - 0xC;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(ebx, esi)) goto loc_00350811; /* jb: below (unsigned <) */

loc_00350874: ;
    (void)0; /* cmp esi, MEM32(esp + 0x70) - flags set for next jcc */

loc_00350878: ;
    ecx = MEM32(esp + 0x74);
    if (CMP_NE(esi, MEM32(esp + 0x70))) goto loc_00350918; /* jne: not equal / not zero */

loc_00350882: ;
    if (CMP_EQ(edx, ecx)) { sub_003509FE(); return; } /* je: equal / zero */

loc_0035088A: ;
    if (CMP_EQ(edi, edx)) goto loc_003508C6; /* je: equal / zero */

loc_0035088E: ;
    esi = eax;
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x60) = ebx;
    esi = edi;
    ebp = MEM32(esi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(ebx + 8) = esi;
    esi = edi;
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(esi + 8) = ecx;

loc_003508C6: ;
    esi = eax;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(esp + 0x2C) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    ecx = edx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x30) = ebp;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(esi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(esi + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(esi + 8) = ebx;
    esi = MEM32(esp + 0x2C);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x34);
    edi = edi + 0xC;
    edx = edx + 0xC;
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x10);
    eax = eax + 0xC;
    goto loc_003507A7;

loc_00350918: ;
    esi = esi - 0xC;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(edx, ecx)) goto loc_003509B6; /* jne: not equal / not zero */

loc_00350927: ;
    eax = eax - 0xC;
    if (CMP_EQ(esi, eax)) goto loc_0035096E; /* je: equal / zero */

loc_0035092E: ;
    ecx = esi;
    ebx = MEM32(ecx);
    MEM32(esp + 0x38) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x3C) = ebx;
    ecx = eax;
    ebp = MEM32(ecx);
    ebx = esi;
    MEM32(ebx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(ebx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    ebx = MEM32(esp + 0x38);
    ecx = eax;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(esp + 0x40);
    MEM32(ecx + 8) = ebx;

loc_0035096E: ;
    ecx = eax;
    ebx = MEM32(ecx);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x48) = ebx;
    edi = edi - 0xC;
    ecx = edi;
    ebp = MEM32(ecx);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(ebx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    ebx = MEM32(esp + 0x44);
    ecx = edi;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x48);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(esp + 0x4C);
    MEM32(ecx + 8) = ebx;
    goto loc_003507A7;

loc_003509B6: ;
    ecx = edx;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(esp + 0x50) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x54) = ebp;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(ecx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(ecx + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(esp + 0x50);
    ecx = esi;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x54);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(esp + 0x58);
    edx = edx + 0xC;
    MEM32(ecx + 8) = ebx;
    goto loc_003507A7;

}

/**
 * sub_00350A20
 * Original: 0x00350A20 - 0x00350AB9 (153 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350A20: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = esi - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 1)) goto loc_00350AB1; /* jle: less or equal (signed <=) */

loc_00350A46: ;
    eax = edi + esi + -12;
    ebx = eax;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x18) = ebx;
    ebx = edi;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = esi + -12;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00350CF0(); /* call 0x00350CF0 */

loc_00350A96: ;
    esi = esi - 0xC;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp = esp + 0x10;
    if (CMP_G(eax, 1)) goto loc_00350A46; /* jg: greater (signed >) */

loc_00350AB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00350AC0
 * Original: 0x00350AC0 - 0x00350B25 (101 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350AC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_00350B22; /* je: equal / zero */

loc_00350ACE: ;
    PUSH32(esp, esi);
    esi = edi + 0xC;
    if (CMP_EQ(esi, ebx)) goto loc_00350B21; /* je: equal / zero */

loc_00350AD6: ;
    PUSH32(esp, ebp);

loc_00350AD7: ;
    ecx = MEM32(esi);
    if (CMP_AE(ecx, MEM32(edi))) goto loc_00350AED; /* jae: above or equal (unsigned >=) */

loc_00350ADD: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = esi + 0xC;
    if (CMP_EQ(edi, esi)) goto loc_00350B19; /* je: equal / zero */

loc_00350AE4: ;
    if (CMP_EQ(esi, eax)) goto loc_00350B19; /* je: equal / zero */

loc_00350AE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00350B11;

loc_00350AED: ;
    edx = MEM32(esi + -12);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = esi + -12;
    if (CMP_AE(ecx, edx)) goto loc_00350B19; /* jae: above or equal (unsigned >=) */

loc_00350AF7: ;
    ebp = MEM32(eax + -12);
    edx = eax;
    eax = eax - 0xC;
    if (CMP_B(ecx, ebp)) goto loc_00350AF7; /* jb: below (unsigned <) */

loc_00350B03: ;
    if (CMP_EQ(edx, esi)) goto loc_00350B19; /* je: equal / zero */

loc_00350B07: ;
    eax = esi + 0xC;
    if (CMP_EQ(esi, eax)) goto loc_00350B19; /* je: equal / zero */

loc_00350B0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_00350B11: ;
    PUSH32(esp, 0); sub_00350DF0(); /* call 0x00350DF0 */

loc_00350B16: ;
    esp = esp + 0xC;

loc_00350B19: ;
    esi = esi + 0xC;
    if (CMP_NE(esi, ebx)) goto loc_00350AD7; /* jne: not equal / not zero */

loc_00350B20: ;
    POP32(esp, ebp);

loc_00350B21: ;
    POP32(esp, esi);

loc_00350B22: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00350B30
 * Original: 0x00350B30 - 0x00350BB6 (134 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350B30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edx = ebp;
    edx = edx - ecx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 0x28)) { sub_00350BB6(); return; } /* jle: less or equal (signed <=) */

loc_00350B52: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = edx & 7;
    eax = eax + edx;
    PUSH32(esp, edi);
    eax = (uint32_t)((int32_t)eax >> 3);
    edi = eax + eax * 2;
    esi = eax + eax * 2;
    edi = edi << 3;
    edx = edi + ecx;
    esi = esi << 2;
    eax = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00350C40(); /* call 0x00350C40 */

loc_00350B7D: ;
    ebx = MEM32(esp + 0x24);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00350C40(); /* call 0x00350C40 */

loc_00350B90: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - esi;
    eax = eax - edi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00350C40(); /* call 0x00350C40 */

loc_00350BA2: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00350C40(); /* call 0x00350C40 */

loc_00350BAE: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00350BD0
 * Original: 0x00350BD0 - 0x00350C31 (97 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350BD0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ecx - ebp;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_00350C2C; /* jle: less or equal (signed <=) */

loc_00350BFB: ;
    eax = esi + esi * 2;
    edi = ebp + eax * 4;

loc_00350C02: ;
    edi = edi - 0xC;
    esp = esp - 0xC;
    ecx = edi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    esi--;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00350CF0(); /* call 0x00350CF0 */

loc_00350C25: ;
    esp = esp + 0x10;
    if (CMP_G(esi & esi, 0)) goto loc_00350C02; /* jg: greater (signed >) */

loc_00350C2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00350C40
 * Original: 0x00350C40 - 0x00350CEF (175 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350C40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    (void)0; /* cmp edx, MEM32(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_AE(edx, MEM32(ecx))) goto loc_00350C85; /* jae: above or equal (unsigned >=) */

loc_00350C55: ;
    edi = eax;
    edx = MEM32(edi);
    esi = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x18) = edi;
    edi = ecx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = ecx;
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = edx;

loc_00350C85: ;
    edx = MEM32(esp + 0x28);
    esi = MEM32(edx);
    if (CMP_AE(esi, MEM32(eax))) goto loc_00350CBD; /* jae: above or equal (unsigned >=) */

loc_00350C8F: ;
    ebx = edx;
    esi = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x18) = ebx;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edx + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(edx + 8) = ebx;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;

loc_00350CBD: ;
    edx = MEM32(eax);
    if (CMP_AE(edx, MEM32(ecx))) goto loc_00350CE7; /* jae: above or equal (unsigned >=) */

loc_00350CC3: ;
    edi = eax;
    edx = MEM32(edi);
    esi = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edi;

loc_00350CE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00350CF0
 * Original: 0x00350CF0 - 0x00350D82 (146 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350CF0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx + ecx + 2;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(eax, ebx)) goto loc_00350D38; /* jge: greater or equal (signed >=) */

loc_00350D01: ;
    edx = eax + eax * 2;
    ebp = MEM32(esi + edx * 4);
    (void)0; /* cmp ebp, MEM32(esi + edx * 4 + -12) - flags set for next jcc */
    edx = esi + edx * 4;
    if (CMP_AE(ebp, MEM32(esi + edx * 4 + -12))) goto loc_00350D11; /* jae: above or equal (unsigned >=) */

loc_00350D10: ;
    eax--;

loc_00350D11: ;
    edx = eax + eax * 2;
    ebp = MEM32(esi + edx * 4);
    edx = esi + edx * 4;
    ecx = ecx + ecx * 2;
    ecx = esi + ecx * 4;
    MEM32(ecx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = eax;
    eax = eax + eax + 2;
    if (CMP_L(eax, ebx)) goto loc_00350D01; /* jl: less (signed <) */

loc_00350D38: ;
    if (CMP_NE(eax, ebx)) goto loc_00350D5C; /* jne: not equal / not zero */

loc_00350D3A: ;
    eax = ebx + ebx * 2;
    edx = MEM32(esi + eax * 4 + -12);
    eax = esi + eax * 4 + -12;
    ecx = ecx + ecx * 2;
    ecx = esi + ecx * 4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = ebx + -1;

loc_00350D5C: ;
    eax = MEM32(esp + 0x14);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0); sub_00350D90(); /* call 0x00350D90 */

loc_00350D7B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00350D90
 * Original: 0x00350D90 - 0x00350DEE (94 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350D90: ;
    eax = ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_GE(edi, ecx)) goto loc_00350DD5; /* jge: greater or equal (signed >=) */

loc_00350DA6: ;
    PUSH32(esp, ebp);

loc_00350DA7: ;
    edx = eax + eax * 2;
    ebp = MEM32(esi + edx * 4);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    edx = esi + edx * 4;
    if (CMP_AE(ebp, ebx)) goto loc_00350DD4; /* jae: above or equal (unsigned >=) */

loc_00350DB4: ;
    ecx = ecx + ecx * 2;
    ecx = esi + ecx * 4;
    MEM32(ecx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(edi, ecx)) goto loc_00350DA7; /* jl: less (signed <) */

loc_00350DD4: ;
    POP32(esp, ebp);

loc_00350DD5: ;
    edx = MEM32(esp + 0x18);
    eax = ecx + ecx * 2;
    ecx = MEM32(esp + 0x14);
    eax = esi + eax * 4;
    MEM32(eax) = ebx;
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00350DF0
 * Original: 0x00350DF0 - 0x00350F1D (301 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00350DF0: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    ecx = ebp;
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    eax = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00350E3C; /* je: equal / zero */

loc_00350E31: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edi;
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(edx, edx)) goto loc_00350E31; /* jne: not equal / not zero */

loc_00350E3C: ;
    if (CMP_GE(eax, ecx)) goto loc_00350F15; /* jge: greater or equal (signed >=) */

loc_00350E44: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00350F15; /* jle: less or equal (signed <=) */

loc_00350E4C: ;
    edx = esi + esi * 2;
    edx = edx << 2;
    ecx = eax + eax * 2;
    MEM32(esp + 0x30) = edx;
    ebx = ebx + ecx * 4;
    MEM32(esp + 0x34) = eax;

loc_00350E60: ;
    eax = ebx;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    eax = ebx + edx;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = ebx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(eax, ebp)) goto loc_00350E85; /* jne: not equal / not zero */

loc_00350E7F: ;
    eax = esp + 0x2C;
    goto loc_00350E8D;

loc_00350E85: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;

loc_00350E8D: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_00350EEF; /* je: equal / zero */

loc_00350E93: ;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(edi) = eax;
    eax = MEM32(edx + 4);
    MEM32(edi + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edx = ebp;
    edx = edx - ecx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    edi = ecx;
    if (CMP_GE(esi, eax)) goto loc_00350ECF; /* jge: greater or equal (signed >=) */

loc_00350EBF: ;
    eax = MEM32(esp + 0x30);
    eax = eax + ecx;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    goto loc_00350EE5;

loc_00350ECF: ;
    edx = MEM32(esp + 0x2C);
    ecx = esi;
    ecx = ecx - eax;
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 4;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;

loc_00350EE5: ;
    ecx = MEM32(eax);
    if (CMP_NE(ecx, ebx)) goto loc_00350E93; /* jne: not equal / not zero */

loc_00350EEB: ;
    edx = MEM32(esp + 0x30);

loc_00350EEF: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x34);
    ebx = ebx - 0xC;
    eax--;
    MEM32(edi + 8) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((eax != 0)) goto loc_00350E60; /* jne: not equal / not zero */

loc_00350F15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00350F20
 * Original: 0x00350F20 - 0x00350F28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F20(void)
{

loc_00350F20: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00350F30
 * Original: 0x00350F30 - 0x00350F38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F30(void)
{

loc_00350F30: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00350F40
 * Original: 0x00350F40 - 0x00350F48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F40(void)
{

loc_00350F40: ;
    eax = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00350F50
 * Original: 0x00350F50 - 0x00350F54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F50(void)
{

loc_00350F50: ;
    SET_LO8(eax, MEM8(ecx + 0x40));
    esp += 4; return; /* ret */

}

/**
 * sub_00350F60
 * Original: 0x00350F60 - 0x00350F8A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00350F90(); /* call 0x00350F90 */

loc_00350F68: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00350F84; /* je: equal / zero */

loc_00350F6F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00350F84; /* je: equal / zero */

loc_00350F77: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00350F81: ;
    esp = esp + 4;

loc_00350F84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00350F90
 * Original: 0x00350F90 - 0x0035100A (122 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00350F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00350F90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebx);
    MEM32(esi) = 0x63BB60;
    PUSH32(esp, edi);
    /* nop */

loc_00350FA0: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(ecx, ecx)) { sub_0035100A(); return; } /* je: equal / zero */

loc_00350FA7: ;
    eax = MEM32(esi + 0x10);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) { sub_0035100A(); return; } /* je: equal / zero */

loc_00350FB3: ;
    edi = ecx;
    ebx = MEM32(edi);
    if (TEST_Z(ebx, ebx)) goto loc_00350FE6; /* je: equal / zero */

loc_00350FBB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00350FC1: ;
    if (TEST_NZ(eax, eax)) goto loc_00350FE6; /* jne: not equal / not zero */

loc_00350FC5: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00350FE3: ;
    esp = esp + 4;

loc_00350FE6: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00350FFC: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 0x10) = eax;
    goto loc_00350FA0;

}

/**
 * sub_00351040
 * Original: 0x00351040 - 0x003510EE (174 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351040: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00351053; /* jne: not equal / not zero */

loc_0035104E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00351053: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_003510A3; /* je: equal / zero */

loc_00351079: ;
    if (CMP_B(MEM32(esi + 0x80), 0x204)) goto loc_003510A3; /* jb: below (unsigned <) */

loc_00351085: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035108F: ;
    PUSH32(esp, 0x204);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0035109A: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_003510C9; /* jne: not equal / not zero */

loc_003510A3: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003510B5: ;
    PUSH32(esp, 0x204);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003510C0: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_003510EE(); return; } /* je: equal / zero */

loc_003510C9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042EFCF(); /* call 0x0042EFCF */

loc_003510D6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x104);
    PUSH32(esp, ecx);
    edx = esi + 0x100;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_003510EC: ;
    g_seh_ebp = ebp; sub_003510F0(); return; /* tail jmp 0x003510F0 */

}

/**
 * sub_00351110
 * Original: 0x00351110 - 0x00351137 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351110: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ecx)) goto loc_0035112D; /* je: equal / zero */

loc_0035111E: ;
    edi = MEM32(esp + 0xC);

loc_00351122: ;
    if (CMP_EQ(edi, MEM32(eax))) { sub_00351137(); return; } /* je: equal / zero */

loc_00351126: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00351122; /* jne: not equal / not zero */

loc_0035112D: ;
    POP32(esp, edi);
    eax = 0x491;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351180
 * Original: 0x00351180 - 0x0035129F (287 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351180: ;
    esp = esp - 0x348;
    eax = MEM32(esp + 0x34C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 4;
    ebp = esi + 0x1C;
    PUSH32(esp, eax);
    MEM8(edi) = LO8(ebx);
    MEM32(esi + 0x18) = ebx;
    MEM32(ebp) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x63BBA8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0); sub_0042D114(); /* call 0x0042D114 */

loc_003511D1: ;
    MEM32(esi + 0x3C) = eax;
    if (TEST_NZ(MEM8(0x87AAA4), 1)) goto loc_003511F3; /* jne: not equal / not zero */

loc_003511DD: ;
    MEM32(0x87AAA4) = MEM32(0x87AAA4) | 1;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_003511E9: ;
    eax = eax + 0xBC2;
    MEM32(0x87AAA0) = eax;

loc_003511F3: ;
    ecx = MEM32(esp + 0x358);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00351203: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(edx, LO8(edx) & 0xDF);
    eax = SX8(LO8(edx));
    eax = eax + 0xFFFFFFACu;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM8(edi) = LO8(edx);
    if (CMP_A(eax, 4)) goto loc_00351291; /* ja: above (unsigned >) */

loc_00351215: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3512A0); /* switch: 5 entries, 3 targets */
    if (_jt == 0x0035121Cu) goto loc_0035121C;
    if (_jt == 0x00351247u) goto loc_00351247;
    if (_jt == 0x00351291u) goto loc_00351291;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035121C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x63BBEC);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x2C) = 1;
    PUSH32(esp, 0); sub_00351040(); /* call 0x00351040 */

loc_00351231: ;
    ebp = MEM32(ebp);
    POP32(esp, edi);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esi + 0x18) = ebp;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 0x348;
    esp += 8; return; /* ret 4 */

loc_00351247: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0); sub_0042EE28(); /* call 0x0042EE28 */

loc_00351255: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00351291; /* je: equal / zero */

loc_0035125C: ;
    /* nop */

loc_00351260: ;
    eax = esp + 0x150;
    PUSH32(esp, eax);
    ecx = esp + 0x258;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_00351040(); /* call 0x00351040 */

loc_0035127C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042EF32(); /* call 0x0042EF32 */

loc_00351287: ;
    if (TEST_NZ(eax, eax)) goto loc_00351260; /* jne: not equal / not zero */

loc_0035128B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042EF79(); /* call 0x0042EF79 */

loc_00351291: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 0x348;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003512F0
 * Original: 0x003512F0 - 0x0035130F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003512F0(void)
{

loc_003512F0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ecx + 4;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_001F22D0(); /* call 0x001F22D0 */

loc_00351307: ;
    eax = MEM32(esp + 8);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00351310
 * Original: 0x00351310 - 0x0035135D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351310: ;
    esp = esp - 0x104;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    PUSH32(esp, 0x104);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042EAF5(); /* call 0x0042EAF5 */

loc_00351339: ;
    if (TEST_NZ(eax, eax)) goto loc_00351352; /* jne: not equal / not zero */

loc_0035133D: ;
    eax = MEM32(esp + 0x110);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00351040(); /* call 0x00351040 */

loc_00351352: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00351360
 * Original: 0x00351360 - 0x00351385 (37 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351360(void)
{

loc_00351360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042ED58(); /* call 0x0042ED58 */

loc_00351373: ;
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0); sub_00351110(); /* call 0x00351110 */

loc_0035137D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351390
 * Original: 0x00351390 - 0x003513B5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351390: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x3C), _icall_esp); /* indirect call */
    }

loc_00351398: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003513B0; /* je: equal / zero */

loc_0035139C: ;
    /* nop */

loc_003513A0: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_003513A5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003513AC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003513A0; /* jne: not equal / not zero */

loc_003513B0: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003513C0
 * Original: 0x003513C0 - 0x003513E4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003513C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003513C0: ;
    esp = esp - 0x104;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x34;
    if (TEST_Z(eax, eax)) { sub_003513E4(); return; } /* je: equal / zero */

loc_003513D4: ;
    POP32(esp, edi);
    eax = 0xAA;
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00351460
 * Original: 0x00351460 - 0x0035146F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351460: ;
    eax = MEM32(ecx + 0x34);
    if (TEST_NZ(eax, eax)) { sub_0035146F(); return; } /* jne: not equal / not zero */

loc_00351467: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351490
 * Original: 0x00351490 - 0x0035149F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351490: ;
    ecx = MEM32(ecx + 0x34);
    if (TEST_NZ(ecx, ecx)) { sub_0035149F(); return; } /* jne: not equal / not zero */

loc_00351497: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003514B0
 * Original: 0x003514B0 - 0x00351520 (112 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003514B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003514B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x34);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_003514CA; /* je: equal / zero */

loc_003514BF: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_003514C4: ;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = ebx;

loc_003514CA: ;
    eax = MEM32(edi + 0x44);
    if (CMP_EQ(eax, ebx)) goto loc_003514DD; /* je: equal / zero */

loc_003514D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003514D7: ;
    esp = esp + 4;
    MEM32(edi + 0x44) = ebx;

loc_003514DD: ;
    ecx = MEM32(edi + 0x24);
    if (CMP_EQ(ecx, ebx)) goto loc_003514ED; /* je: equal / zero */

loc_003514E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003514EA: ;
    MEM32(edi + 0x24) = ebx;

loc_003514ED: ;
    ecx = MEM32(edi + 0x28);
    if (CMP_EQ(ecx, ebx)) goto loc_003514FD; /* je: equal / zero */

loc_003514F4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003514FA: ;
    MEM32(edi + 0x28) = ebx;

loc_003514FD: ;
    eax = MEM32(edi + 0x20);
    if (CMP_EQ(eax, ebx)) goto loc_00351518; /* je: equal / zero */

loc_00351504: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00351512: ;
    esp = esp + 4;
    MEM32(edi + 0x20) = ebx;

loc_00351518: ;
    eax = MEM32(edi + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00351570
 * Original: 0x00351570 - 0x003515D1 (97 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351570: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x38);
    if (CMP_BE(esi, 0x20000)) goto loc_00351584; /* jbe: below or equal (unsigned <=) */

loc_0035157F: ;
    esi = 0x20000;

loc_00351584: ;
    ecx = MEM32(edi + 0x3C);
    if (CMP_LE(ecx, 1)) goto loc_003515A1; /* jle: less or equal (signed <=) */

loc_0035158C: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_0035159D; /* jle: less or equal (signed <=) */

loc_00351595: ;
    ecx = ecx - edx;
    ecx = ecx + esi;
    esi = ecx;
    goto loc_003515A1;

loc_0035159D: ;
    if (((int32_t)ecx >= 0)) goto loc_003515A1; /* jge: greater or equal (signed >=) */

loc_0035159F: ;
    esi = esi - edx;

loc_003515A1: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x48) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003515AA: ;
    ecx = MEM32(edi + 0x48);
    esi = MEM32(edi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3515E0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(edi + 0x44) = eax;
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_003515C0: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    MEM32(edi + 0x30) = eax;
    MEM8(edi + 0x40) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003515E0
 * Original: 0x003515E0 - 0x003516D0 (240 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM8(edi + 0x40) = 0;
    if (TEST_NZ(ebp, ebp)) goto loc_003516AC; /* jne: not equal / not zero */

loc_003515F7: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, 0); sub_00350210(); /* call 0x00350210 */

loc_00351606: ;
    ebp = eax;
    esp = esp + 4;
    if (TEST_NZ(ebp, ebp)) goto loc_003516AC; /* jne: not equal / not zero */

loc_00351613: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00351621; /* jne: not equal / not zero */

loc_0035161C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00351621: ;
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
    if (TEST_Z(esi, esi)) goto loc_0035166C; /* je: equal / zero */

loc_00351648: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0035166C; /* jb: below (unsigned <) */

loc_00351651: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035165B: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00351663: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_NZ(edx, edx)) goto loc_0035168F; /* jne: not equal / not zero */

loc_0035166C: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0035167E: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00351686: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_003516A6; /* je: equal / zero */

loc_0035168F: ;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x2C);
    ebx = edx;
    PUSH32(esp, 0); sub_00350150(); /* call 0x00350150 */

loc_003516A4: ;
    goto loc_003516A8;

loc_003516A6: ;
    eax = 0; /* xor self */

loc_003516A8: ;
    MEM32(edi + 0x24) = eax;
    POP32(esp, ebx);

loc_003516AC: ;
    eax = MEM32(edi + 0x44);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(eax, esi)) goto loc_003516C6; /* je: equal / zero */

loc_003516B9: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003516C3: ;
    esp = esp + 4;

loc_003516C6: ;
    MEM32(edi + 0x44) = esi;
    MEM32(edi + 0x30) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00351770
 * Original: 0x00351770 - 0x0035178E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351770: ;
    ecx = MEM32(esp + 8);
    if (TEST_NZ(ecx, ecx)) { sub_0035178E(); return; } /* jne: not equal / not zero */

loc_00351778: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, 0); sub_003502A0(); /* call 0x003502A0 */

loc_00351785: ;
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x40) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003517A0
 * Original: 0x003517A0 - 0x003517D5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517A0(void)
{

loc_003517A0: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    edx = edx + esi + 0xC;
    esi = MEM32(esp + 8);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003517E0
 * Original: 0x003517E0 - 0x003517F3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003517E0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x34);
    if (TEST_NZ(eax, eax)) { sub_003517F3(); return; } /* jne: not equal / not zero */

loc_003517EA: ;
    eax = 0x3EE;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003518D0
 * Original: 0x003518D0 - 0x003518F6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003518D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x40) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_003518ED; /* je: equal / zero */

loc_003518E7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003518ED: ;
    MEM32(esi + 0x28) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00351900
 * Original: 0x00351900 - 0x00351913 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351900: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x34);
    if (TEST_NZ(eax, eax)) { sub_00351913(); return; } /* jne: not equal / not zero */

loc_0035190A: ;
    eax = 0x3EE;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00351980
 * Original: 0x00351980 - 0x003519A5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351980(void)
{

loc_00351980: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x40) = 0;
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00351999: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003519B0
 * Original: 0x003519B0 - 0x003519D0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003519B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003519B0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    esp = esp - 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003519C0; /* jne: not equal / not zero */

loc_003519BD: ;
    eax = MEM32(ecx + 0x1C);

loc_003519C0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x18) = eax;
    if (TEST_NZ(eax, eax)) { sub_003519D0(); return; } /* jne: not equal / not zero */

loc_003519C7: ;
    eax = 3;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00351AB0
 * Original: 0x00351AB0 - 0x00351ACC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351AB0: ;
    eax = MEM32(esi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) goto loc_00351ABD; /* jne: not equal / not zero */

loc_00351ABA: ;
    eax = MEM32(ecx + 0x1C);

loc_00351ABD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x18) = eax;
    if (TEST_NZ(eax, eax)) { sub_00351ACC(); return; } /* jne: not equal / not zero */

loc_00351AC4: ;
    eax = 3;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00351B40
 * Original: 0x00351B40 - 0x00351B67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351B40: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63BC10;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00351B61; /* je: equal / zero */

loc_00351B50: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00351B5E: ;
    esp = esp + 4;

loc_00351B61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351B70
 * Original: 0x00351B70 - 0x00351BDE (110 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B70(void)
{

loc_00351B70: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = edi + 0x10;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi) = 0x63BC14;
    MEM32(esi) = 0x63BC10;
    PUSH32(esp, 0); sub_00288480(); /* call 0x00288480 */

loc_00351B91: ;
    esi = edi + 0x728;
    MEM32(esi) = 0x63BC10;
    PUSH32(esp, 0); sub_00288480(); /* call 0x00288480 */

loc_00351BA2: ;
    MEM32(edi + 0x11B0) = ebx;
    MEM8(edi + 0x1438) = LO8(ebx);
    MEM8(edi + 0x1439) = LO8(ebx);
    MEM8(edi + 0x143A) = LO8(ebx);
    MEM8(edi + 0x143B) = LO8(ebx);
    MEM8(edi + 0x143C) = LO8(ebx);
    MEM8(edi + 0x143D) = LO8(ebx);
    ecx = edi;
    MEM32(edi + 0xE74) = ebx;
    PUSH32(esp, 0); sub_00351D90(); /* call 0x00351D90 */

loc_00351BD9: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00351BE0
 * Original: 0x00351BE0 - 0x00351C0C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0); sub_00351C10(); /* call 0x00351C10 */

loc_00351BEA: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00351C06; /* je: equal / zero */

loc_00351BF1: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00351C06; /* je: equal / zero */

loc_00351BF9: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00351C03: ;
    esp = esp + 4;

loc_00351C06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351C10
 * Original: 0x00351C10 - 0x00351C5D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351C10: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi) = 0x63BC14;
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_00351C1E: ;
    ecx = MEM32(edi + 0xE74);
    if (TEST_Z(ecx, ecx)) goto loc_00351C38; /* je: equal / zero */

loc_00351C28: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00351C2E: ;
    MEM32(edi + 0xE74) = 0;

loc_00351C38: ;
    ecx = MEM32(edi + 0x11B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00351C44: ;
    eax = 0x63BC10;
    esp = esp + 4;
    MEM32(edi + 0x728) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(edi) = 0x63BBF8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00351C60
 * Original: 0x00351C60 - 0x00351C7A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C60: ;
    SET_LO8(eax, MEM8(0x862D08));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 3;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00351C7A(); return; } /* je: equal / zero */

loc_00351C6E: ;
    if (CMP_NE(MEM32(0x849ADC), ecx)) { sub_00351C7A(); return; } /* jne: not equal / not zero */

loc_00351C76: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00351C7C(); return; /* tail jmp 0x00351C7C */

}

/**
 * sub_00351D90
 * Original: 0x00351D90 - 0x00351EA5 (277 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_00351D9B: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x21);
    eax = edi + 0x11C0;
    PUSH32(esp, 0x63BC2C);
    PUSH32(esp, eax);
    MEM32(edi + 0x11BC) = ebx;
    MEM8(edi + 0x11B7) = LO8(ebx);
    MEM8(edi + 0x11B5) = LO8(ebx);
    MEM8(edi + 0x11B6) = 1;
    MEM8(edi + 0x11BA) = LO8(ebx);
    MEM8(edi + 0x11B8) = LO8(ebx);
    MEM8(edi + 0x11B9) = LO8(ebx);
    MEM8(edi + 0x11B4) = LO8(ebx);
    MEM32(edi + 0x1424) = 0x90;
    MEM32(edi + 0x1428) = ebx;
    MEM32(edi + 0x11B0) = ebx;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00351DF7: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00234090(); /* call 0x00234090 */

loc_00351DFF: ;
    PUSH32(esp, 0); sub_00234140(); /* call 0x00234140 */

loc_00351E04: ;
    esi = 0; /* xor self */
    ebp = edi + 0x1202;
    /* nop */

loc_00351E10: ;
    PUSH32(esp, 0); sub_00234090(); /* call 0x00234090 */

loc_00351E15: ;
    PUSH32(esp, 0x11);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00351E21: ;
    esi = esi + 0x22;
    esp = esp + 0xC;
    ebp = ebp + 0x22;
    if (CMP_L(esi, 0x220)) goto loc_00351E10; /* jl: less (signed <) */

loc_00351E32: ;
    esi = 1;
    eax = edi + 0xE8C;
    /* nop */

loc_00351E40: ;
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_00351E4D: ;
    esp = esp + 0xC;
    esi++;
    eax = eax + 0x14;
    if (CMP_L(esi, 0x29)) goto loc_00351E40; /* jl: less (signed <) */

loc_00351E59: ;
    esi = edi + 0x10;
    MEM8(edi + 0xE40) = LO8(ebx);
    PUSH32(esp, 0); sub_00288480(); /* call 0x00288480 */

loc_00351E67: ;
    esi = edi + 0x728;
    PUSH32(esp, 0); sub_00288480(); /* call 0x00288480 */

loc_00351E72: ;
    ecx = MEM32(edi + 0xE74);
    if (CMP_EQ(ecx, ebx)) goto loc_00351E88; /* je: equal / zero */

loc_00351E7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00351E82: ;
    MEM32(edi + 0xE74) = ebx;

loc_00351E88: ;
    edi = edi + 0x142C;
    ecx = 0; /* xor self */
    edx = edi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edi) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00351EB0
 * Original: 0x00351EB0 - 0x00351ECE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351EB0: ;
    eax = 0; /* xor self */

loc_00351EB2: ;
    ecx = MEM32(eax * 8 + 0x75ECC0);
    if (TEST_NZ(ecx, ecx)) { sub_00351ECE(); return; } /* jne: not equal / not zero */

loc_00351EBD: ;
    eax++;
    if (CMP_B(eax, 0xC)) goto loc_00351EB2; /* jb: below (unsigned <) */

loc_00351EC3: ;
    eax = MEM32(edx + 0x11BC);
    ecx = 0; /* xor self */
    eax = eax & ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00351EF0
 * Original: 0x00351EF0 - 0x00351F14 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351EF0: ;
    eax = 0; /* xor self */

loc_00351EF2: ;
    ecx = MEM32(eax * 8 + 0x75ECC0);
    if (TEST_NZ(ecx, ecx)) { sub_00351F14(); return; } /* jne: not equal / not zero */

loc_00351EFD: ;
    eax++;
    if (CMP_B(eax, 0xC)) goto loc_00351EF2; /* jb: below (unsigned <) */

loc_00351F03: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x11BC);
    ecx = 0; /* xor self */
    eax = eax & ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351F30
 * Original: 0x00351F30 - 0x00351F41 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00351F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xE40));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00351F41(); return; } /* je: equal / zero */

loc_00351F3D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00351F90
 * Original: 0x00351F90 - 0x0035206F (223 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F90: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0xD;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00352053; /* je: equal / zero */

loc_00351FA7: ;
    if (((int32_t)(HI8(ecx) & HI8(ecx)) >= 0)) goto loc_00352053; /* jns: not sign (positive) */

loc_00351FAF: ;
    edx = MEM32(esp + 0x14);
    if (CMP_B(edx, 0x28C)) goto loc_00351FE5; /* jb: below (unsigned <) */

loc_00351FBB: ;
    eax = MEM32(esp + 0x10);
    edi = ebx + 0x11B4;
    ecx = 0xA3;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x1424);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x1428));
    edx = edx + 0xFFFFFD74u;
    if (CMP_EQ(edx, ecx)) goto loc_00351FF0; /* je: equal / zero */

loc_00351FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x18;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00351FF0: ;
    esi = eax + 0x28C;
    eax = MEM32(ebx + 0x11B0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_00352011; /* je: equal / zero */

loc_00352004: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035200E: ;
    esp = esp + 4;

loc_00352011: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1424);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(ebx + 0x1428));
    if (TEST_Z(ebp, ebp)) goto loc_00352046; /* je: equal / zero */

loc_00352023: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00352029: ;
    MEM32(ebx + 0x11B0) = eax;
    ecx = ebp;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    esp = esp + 4;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_00352050;

loc_00352046: ;
    MEM32(ebx + 0x11B0) = 0;

loc_00352050: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);

loc_00352053: ;
    SET_LO8(ecx, MEM8(ebx + 0x11B4));
    if (CMP_BE(LO8(ecx), 3)) { sub_0035206F(); return; } /* jbe: below or equal (unsigned <=) */

loc_0035205E: ;
    POP32(esp, edi);
    ecx = 3;
    POP32(esp, esi);
    MEM8(ebx + 0x11B4) = LO8(ecx);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00352080
 * Original: 0x00352080 - 0x003520D5 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352080(void)
{

loc_00352080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    edx = MEM32(esi + 0x11B0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esi + 0x1428) = eax;
    MEM32(esi + 0x1424) = ecx;
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0035209D: ;
    ebx = MEM32(esi + 0x1424);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esi + 0x1428));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003520B0: ;
    MEM32(esi + 0x11B0) = eax;
    esi = MEM32(esp + 0x18);
    ecx = ebx;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    esp = esp + 8;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003520E0
 * Original: 0x003520E0 - 0x003520F9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003520E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003520E0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0xE40));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003520F9(); return; } /* je: equal / zero */

loc_003520F0: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003521B0
 * Original: 0x003521B0 - 0x003521E6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003521B0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esi + 0x11C0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_003521BF: ;
    ecx = MEM32(esi + 0xE74);
    esp = esp + 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM16(esi + 0x1200) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_003521E5; /* je: equal / zero */

loc_003521D5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003521DB: ;
    MEM32(esi + 0xE74) = 0;

loc_003521E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003521F0
 * Original: 0x003521F0 - 0x0035220D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* cmp MEM16(ebp + 0x11C0), 0 - flags set for next jcc */
    ebx = ebp + 0x11C0;
    if (CMP_NE(MEM16(ebp + 0x11C0), 0)) { sub_0035220D(); return; } /* jne: not equal / not zero */

loc_00352206: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003522E0
 * Original: 0x003522E0 - 0x00352319 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003522E0: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0035230B; /* jne: not equal / not zero */

loc_003522E9: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_0035230B; /* jne: not equal / not zero */

loc_003522F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_00352302: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00352316; /* jne: not equal / not zero */

loc_0035230B: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x11B7);

loc_00352316: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00352320
 * Original: 0x00352320 - 0x003523D3 (179 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00352320: ;
    ecx = MEM32(0x84B120);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    edx = 4;
    SET_LO8(eax, 0); /* xor self */
    if (CMP_NE(edi, edx)) goto loc_0035233D; /* jne: not equal / not zero */

loc_00352335: ;
    SET_LO8(eax, MEM8(ecx + 0x4D));
    SET_LO8(eax, LO8(eax) >> 6);
    SET_LO8(eax, LO8(eax) & 1);

loc_0035233D: ;
    ecx = MEM32(0x84B124);
    if (CMP_NE(MEM32(ecx + 0xC), edx)) goto loc_00352358; /* jne: not equal / not zero */

loc_00352348: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00352356; /* jne: not equal / not zero */

loc_0035234C: ;
    if (TEST_NZ(MEM8(ecx + 0x4D), 0x40)) goto loc_00352356; /* jne: not equal / not zero */

loc_00352352: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00352358;

loc_00352356: ;
    SET_LO8(eax, 1);

loc_00352358: ;
    ecx = MEM32(0x84B128);
    (void)0; /* cmp MEM32(ecx + 0xC), edx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(MEM32(ecx + 0xC), edx)) goto loc_00352370; /* jne: not equal / not zero */

loc_00352364: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00352397; /* jne: not equal / not zero */

loc_00352368: ;
    if (TEST_Z(MEM8(ecx + 0x4D), 0x40)) goto loc_00352374; /* je: equal / zero */

loc_0035236E: ;
    goto loc_00352397;

loc_00352370: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00352397; /* jne: not equal / not zero */

loc_00352374: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00352379: ;
    edx = 0x63B238;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00352383: ;
    if (TEST_NZ(eax, eax)) goto loc_00352397; /* jne: not equal / not zero */

loc_00352387: ;
    eax = MEM32(0x74C6E0);
    ecx = MEM32(esi + 0x1434);
    eax++;
    if (CMP_L(ecx, eax)) goto loc_0035239E; /* jl: less (signed <) */

loc_00352397: ;
    MEM8(esi + 0x1439) = 1;

loc_0035239E: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003523A3: ;
    edx = 0x63B1FC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003523AD: ;
    if (TEST_Z(eax, eax)) goto loc_003523B8; /* je: equal / zero */

loc_003523B1: ;
    MEM8(esi + 0x143B) = 1;

loc_003523B8: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003523BD: ;
    edx = 0x63B1D8;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003523C7: ;
    if (TEST_Z(eax, eax)) goto loc_003523D2; /* je: equal / zero */

loc_003523CB: ;
    MEM8(esi + 0x143D) = 1;

loc_003523D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003523E0
 * Original: 0x003523E0 - 0x00352407 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003523E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003523E0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63BBF8;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00352401; /* je: equal / zero */

loc_003523F0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003523FE: ;
    esp = esp + 4;

loc_00352401: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00352410
 * Original: 0x00352410 - 0x003524A3 (147 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352410: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x46;
    edi = 0x84B130;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(0x84B141) = LO8(eax);
    SET_LO8(eax, 0xFF);
    MEM8(0x84B140) = 1;
    MEM8(0x84B142) = LO8(eax);
    MEM8(0x84B143) = LO8(eax);
    MEM8(0x84B144) = 0;
    eax = MEM32(edx + 0x18);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003524A0; /* jle: less or equal (signed <=) */

loc_0035244A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    ebx = 0x776F20;

loc_00352453: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax * 4 + 0x69CF90);
    esi = MEM32(edx + 0x10);
    eax = 0; /* xor self */
    esi = esi + edi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(edx + 0x10);
    esi = eax + edi + 0x1A;
    /* nop */

loc_00352480: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    MEM8(esi) = LO8(eax);
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00352480; /* jne: not equal / not zero */

loc_0035248A: ;
    ecx = MEM32(edx + 0x14);
    MEM8(ecx + ebp) = LO8(eax);
    eax = MEM32(edx + 0x18);
    ebp++;
    ebx = ebx + 0x28;
    edi = edi + 0x2E;
    if (CMP_L(ebp, eax)) goto loc_00352453; /* jl: less (signed <) */

loc_0035249E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003524A0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003524B0
 * Original: 0x003524B0 - 0x0035255E (174 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2E);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx + 0x128;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003524D1: ;
    ecx = MEM32(0x59E910);
    ebp = eax;
    MEM32(eax) = ecx;
    edx = MEM32(0x59E914);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x59E918);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x59E91C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    eax = ebp + 0x10;
    edi = eax;
    ecx = 0x46;
    esi = 0x84B130;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(edx + 0x10);
    ecx = ebx;
    ebx = MEM32(0x74C6E4);
    edi = eax + 0x118;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    esp = esp + 4;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x8000);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    esi = edx;
    PUSH32(esp, 0); sub_00351AB0(); /* call 0x00351AB0 */

loc_0035253F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = eax;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035254F: ;
    esp = esp + 4;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00352560
 * Original: 0x00352560 - 0x00352636 (214 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352560: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_003525A6; /* je: equal / zero */

loc_00352570: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0035257E: ;
    eax = MEM32(edi + 0x14);
    esp = esp + 4;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x10) = esi;
    MEM32(esp + 8) = eax;
    if (CMP_EQ(eax, esi)) goto loc_0035259C; /* je: equal / zero */

loc_0035258F: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00352599: ;
    esp = esp + 4;

loc_0035259C: ;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0xC) = 1;

loc_003525A6: ;
    edx = MEM32(0x777EC0);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E);
    PUSH32(esp, eax);
    MEM32(edi + 0x18) = edx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003525BA: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003525C6: ;
    edx = MEM32(edi);
    esp = esp + 8;
    ecx = edi;
    MEM32(edi + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003525D3: ;
    edx = MEM32(0x74C6E4);
    PUSH32(esp, 0); sub_003519B0(); /* call 0x003519B0 */

loc_003525DE: ;
    (void)0; /* cmp MEM32(edi + 0x18), esi - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(MEM32(edi + 0x18), esi)) goto loc_00352630; /* jle: less or equal (signed <=) */

loc_003525E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = esi;
    ebp = 0x776F20;

loc_003525F2: ;
    eax = MEM32(edi + 0x14);
    if (CMP_NE(MEM8(esi + eax), 0)) goto loc_00352614; /* jne: not equal / not zero */

loc_003525FB: ;
    edx = MEM32(edi + 0x10);
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(ebp);
    edx = edx + ebx;
    ebx = MEM32(ecx * 4 + 0x69CF90);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00352700(); /* call 0x00352700 */

loc_00352614: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x18);
    esi++;
    ecx = ecx + 0x2E;
    ebp = ebp + 0x28;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(esi, eax)) goto loc_003525F2; /* jl: less (signed <) */

loc_0035262A: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00352630: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00352640
 * Original: 0x00352640 - 0x003526F2 (178 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352640: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* cmp ebx, 0x10 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(ebx, 0x10)) goto loc_0035266A; /* jb: below (unsigned <) */

loc_00352658: ;
    ecx = 4;
    edi = 0x59E910;
    esi = eax;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0035266F; /* je: equal / zero */

loc_0035266A: ;
    ebp = 0x51A;

loc_0035266F: ;
    eax = eax + 0x10;
    ebx = ebx + 0xFFFFFFF0u;
    if (TEST_NZ(ebp, ebp)) goto loc_003526E8; /* jne: not equal / not zero */

loc_00352679: ;
    if (CMP_B(ebx, 0x118)) goto loc_00352691; /* jb: below (unsigned <) */

loc_00352681: ;
    ecx = 0x46;
    esi = eax;
    edi = 0x84B130;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_00352696;

loc_00352691: ;
    ebp = 0x51A;

loc_00352696: ;
    eax = eax + 0x118;
    ebx = ebx - 0x118;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_003526E8; /* jne: not equal / not zero */

loc_003526A9: ;
    eax = 0xB21642C9u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 5;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_003526DF; /* jle: less or equal (signed <=) */

loc_003526C0: ;
    esi = MEM32(esp + 0x1C);
    edi = edx;

loc_003526C6: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = esi + 0x1A;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00352780(); /* call 0x00352780 */

loc_003526D5: ;
    esi = esi + 0x2E;
    edi--;
    if ((edi != 0)) goto loc_003526C6; /* jne: not equal / not zero */

loc_003526DB: ;
    eax = MEM32(esp + 0x18);

loc_003526DF: ;
    ebx = ebx - eax;
    eax = 0x51A;
    if ((ebx != 0)) goto loc_003526EA; /* jne: not equal / not zero */

loc_003526E8: ;
    eax = ebp;

loc_003526EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00352700
 * Original: 0x00352700 - 0x0035274D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352700: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = 0x1A;
    eax = ebx;
    ecx = 0x604EA8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_00352724: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0035274D(); return; } /* je: equal / zero */

loc_0035272B: ;
    SET_LO8(eax, 1);
    MEM8(ebp) = 0x10;
    MEM8(ebp + 2) = 2;
    MEM8(ebp + 0x10) = 0;
    MEM8(ebp + 0xF) = 0;
    MEM8(ebp + 3) = LO8(eax);
    MEM8(ebp + 0x12) = 6;
    MEM8(ebp + 0x11) = 0x1E;
    MEM8(ebp + 5) = LO8(eax);
    g_seh_ebp = ebp; sub_00352765(); return; /* tail jmp 0x00352765 */

}

/**
 * sub_00352780
 * Original: 0x00352780 - 0x00352A4F (719 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352780: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00352A4B; /* jle: less or equal (signed <=) */

loc_00352792: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = eax + 0x1A;
    PUSH32(esp, esi);
    goto loc_003527A0;

    /* nop */

loc_003527A0: ;
    eax = MEM32(esp + 0x18);
    esi = edi;

loc_003527A6: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003527CA; /* jne: not equal / not zero */

loc_003527AE: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003527C6; /* je: equal / zero */

loc_003527B2: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003527CA; /* jne: not equal / not zero */

loc_003527BC: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003527A6; /* jne: not equal / not zero */

loc_003527C6: ;
    eax = 0; /* xor self */
    goto loc_003527CF;

loc_003527CA: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003527CF: ;
    if (TEST_Z(eax, eax)) goto loc_003527E2; /* je: equal / zero */

loc_003527D3: ;
    ebp++;
    edi = edi + 0x2E;
    if (CMP_L(ebp, edx)) goto loc_003527A0; /* jl: less (signed <) */

loc_003527DB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003527E2: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx + 0x10);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E);
    eax = eax + esi;
    esi = MEM32(esp + 0x1C);
    ecx = 6;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    ecx = MEM32(edx + 0x14);
    MEM8(ecx + ebp) = 1;
    SET_LO8(ecx, MEM8(eax + 0x12));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352811; /* jge: greater or equal (signed >=) */

loc_0035280D: ;
    ecx = 0; /* xor self */
    goto loc_00352820;

loc_00352811: ;
    if (CMP_LE(LO8(ecx), 0x10)) goto loc_0035281D; /* jle: less or equal (signed <=) */

loc_00352816: ;
    ecx = 0x10;
    goto loc_00352820;

loc_0035281D: ;
    ecx = SX8(LO8(ecx));

loc_00352820: ;
    MEM8(eax + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x11));
    if (CMP_G(LO8(ecx) & LO8(ecx), 0)) goto loc_0035282E; /* jg: greater (signed >) */

loc_0035282A: ;
    MEM8(eax + 0x11) = 0x14;

loc_0035282E: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    if (CMP_GE(ecx, 1)) goto loc_0035283E; /* jge: greater or equal (signed >=) */

loc_00352837: ;
    ecx = 1;
    goto loc_00352848;

loc_0035283E: ;
    if (CMP_LE(ecx, 0x3C)) goto loc_00352848; /* jle: less or equal (signed <=) */

loc_00352843: ;
    ecx = 0x3C;

loc_00352848: ;
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352856; /* jge: greater or equal (signed >=) */

loc_00352852: ;
    ecx = 0; /* xor self */
    goto loc_00352865;

loc_00352856: ;
    if (CMP_LE(LO8(ecx), 0x10)) goto loc_00352862; /* jle: less or equal (signed <=) */

loc_0035285B: ;
    ecx = 0x10;
    goto loc_00352865;

loc_00352862: ;
    ecx = SX8(LO8(ecx));

loc_00352865: ;
    MEM8(eax + 1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 2));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352873; /* jge: greater or equal (signed >=) */

loc_0035286F: ;
    ecx = 0; /* xor self */
    goto loc_00352882;

loc_00352873: ;
    if (CMP_LE(LO8(ecx), 4)) goto loc_0035287F; /* jle: less or equal (signed <=) */

loc_00352878: ;
    ecx = 4;
    goto loc_00352882;

loc_0035287F: ;
    ecx = SX8(LO8(ecx));

loc_00352882: ;
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_GE(LO8(ecx), 4)) goto loc_00352893; /* jge: greater or equal (signed >=) */

loc_0035288C: ;
    ecx = 4;
    goto loc_003528A2;

loc_00352893: ;
    if (CMP_LE(LO8(ecx), 0x10)) goto loc_0035289F; /* jle: less or equal (signed <=) */

loc_00352898: ;
    ecx = 0x10;
    goto loc_003528A2;

loc_0035289F: ;
    ecx = SX8(LO8(ecx));

loc_003528A2: ;
    SET_LO8(edx, MEM8(eax + 0x10));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(eax) = LO8(ecx);
    if (CMP_GE(LO8(edx) & LO8(edx), 0)) goto loc_003528AF; /* jge: greater or equal (signed >=) */

loc_003528AB: ;
    ecx = 0; /* xor self */
    goto loc_003528BC;

loc_003528AF: ;
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(edx));
    ecx--;
    if (CMP_G(edx, ecx)) goto loc_003528BC; /* jg: greater (signed >) */

loc_003528BA: ;
    ecx = edx;

loc_003528BC: ;
    MEM8(eax + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 7));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_003528CA; /* jge: greater or equal (signed >=) */

loc_003528C6: ;
    ecx = 0; /* xor self */
    goto loc_003528D9;

loc_003528CA: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003528D6; /* jle: less or equal (signed <=) */

loc_003528CF: ;
    ecx = 1;
    goto loc_003528D9;

loc_003528D6: ;
    ecx = SX8(LO8(ecx));

loc_003528D9: ;
    MEM8(eax + 7) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 5));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_003528E7; /* jge: greater or equal (signed >=) */

loc_003528E3: ;
    ecx = 0; /* xor self */
    goto loc_003528F6;

loc_003528E7: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003528F3; /* jle: less or equal (signed <=) */

loc_003528EC: ;
    ecx = 1;
    goto loc_003528F6;

loc_003528F3: ;
    ecx = SX8(LO8(ecx));

loc_003528F6: ;
    MEM8(eax + 5) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 3));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352904; /* jge: greater or equal (signed >=) */

loc_00352900: ;
    ecx = 0; /* xor self */
    goto loc_00352913;

loc_00352904: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_00352910; /* jle: less or equal (signed <=) */

loc_00352909: ;
    ecx = 1;
    goto loc_00352913;

loc_00352910: ;
    ecx = SX8(LO8(ecx));

loc_00352913: ;
    MEM8(eax + 3) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xA));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352921; /* jge: greater or equal (signed >=) */

loc_0035291D: ;
    ecx = 0; /* xor self */
    goto loc_00352930;

loc_00352921: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_0035292D; /* jle: less or equal (signed <=) */

loc_00352926: ;
    ecx = 1;
    goto loc_00352930;

loc_0035292D: ;
    ecx = SX8(LO8(ecx));

loc_00352930: ;
    MEM8(eax + 0xA) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xC));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_0035293E; /* jge: greater or equal (signed >=) */

loc_0035293A: ;
    ecx = 0; /* xor self */
    goto loc_0035294D;

loc_0035293E: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_0035294A; /* jle: less or equal (signed <=) */

loc_00352943: ;
    ecx = 1;
    goto loc_0035294D;

loc_0035294A: ;
    ecx = SX8(LO8(ecx));

loc_0035294D: ;
    MEM8(eax + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_0035295B; /* jge: greater or equal (signed >=) */

loc_00352957: ;
    ecx = 0; /* xor self */
    goto loc_0035296A;

loc_0035295B: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_00352967; /* jle: less or equal (signed <=) */

loc_00352960: ;
    ecx = 1;
    goto loc_0035296A;

loc_00352967: ;
    ecx = SX8(LO8(ecx));

loc_0035296A: ;
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xD));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352978; /* jge: greater or equal (signed >=) */

loc_00352974: ;
    ecx = 0; /* xor self */
    goto loc_00352987;

loc_00352978: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_00352984; /* jle: less or equal (signed <=) */

loc_0035297D: ;
    ecx = 1;
    goto loc_00352987;

loc_00352984: ;
    ecx = SX8(LO8(ecx));

loc_00352987: ;
    MEM8(eax + 0xD) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xE));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352995; /* jge: greater or equal (signed >=) */

loc_00352991: ;
    ecx = 0; /* xor self */
    goto loc_003529A4;

loc_00352995: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003529A1; /* jle: less or equal (signed <=) */

loc_0035299A: ;
    ecx = 1;
    goto loc_003529A4;

loc_003529A1: ;
    ecx = SX8(LO8(ecx));

loc_003529A4: ;
    MEM8(eax + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 9));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_003529B2; /* jge: greater or equal (signed >=) */

loc_003529AE: ;
    ecx = 0; /* xor self */
    goto loc_003529C1;

loc_003529B2: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003529BE; /* jle: less or equal (signed <=) */

loc_003529B7: ;
    ecx = 1;
    goto loc_003529C1;

loc_003529BE: ;
    ecx = SX8(LO8(ecx));

loc_003529C1: ;
    MEM8(eax + 9) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 8));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_003529CF; /* jge: greater or equal (signed >=) */

loc_003529CB: ;
    ecx = 0; /* xor self */
    goto loc_003529DE;

loc_003529CF: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003529DB; /* jle: less or equal (signed <=) */

loc_003529D4: ;
    ecx = 1;
    goto loc_003529DE;

loc_003529DB: ;
    ecx = SX8(LO8(ecx));

loc_003529DE: ;
    MEM8(eax + 8) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_003529EC; /* jge: greater or equal (signed >=) */

loc_003529E8: ;
    ecx = 0; /* xor self */
    goto loc_003529FB;

loc_003529EC: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_003529F8; /* jle: less or equal (signed <=) */

loc_003529F1: ;
    ecx = 1;
    goto loc_003529FB;

loc_003529F8: ;
    ecx = SX8(LO8(ecx));

loc_003529FB: ;
    MEM8(eax + 0xF) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x13));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352A09; /* jge: greater or equal (signed >=) */

loc_00352A05: ;
    ecx = 0; /* xor self */
    goto loc_00352A18;

loc_00352A09: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_00352A15; /* jle: less or equal (signed <=) */

loc_00352A0E: ;
    ecx = 1;
    goto loc_00352A18;

loc_00352A15: ;
    ecx = SX8(LO8(ecx));

loc_00352A18: ;
    MEM8(eax + 0x13) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x14));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_00352A2E; /* jge: greater or equal (signed >=) */

loc_00352A22: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = 0; /* xor self */
    POP32(esp, edi);
    MEM8(eax + 0x14) = LO8(ecx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00352A2E: ;
    if (CMP_LE(LO8(ecx), 1)) goto loc_00352A42; /* jle: less or equal (signed <=) */

loc_00352A33: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = 1;
    POP32(esp, edi);
    MEM8(eax + 0x14) = LO8(ecx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00352A42: ;
    POP32(esp, esi);
    ecx = SX8(LO8(ecx));
    POP32(esp, ebx);
    MEM8(eax + 0x14) = LO8(ecx);
    POP32(esp, edi);

loc_00352A4B: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
