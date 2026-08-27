/**
 * Burnout 3 - Recompiled code chunk 18
 * Functions: 250 (0x00193250 - 0x001AA460)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00193250
 * Original: 0x00193250 - 0x0019328A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00193250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x124); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) { sub_0019328A(); return; } /* jbe: below or equal (unsigned <=) */

loc_00193273: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebx + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00193390
 * Original: 0x00193390 - 0x0019342C (156 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00193390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x110));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001933A7; /* jne: not equal / not zero */

loc_001933A5: ;
    edi = 0; /* xor self */

loc_001933A7: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x120) = MEM16(esi + 0x120) - LO16(eax);
    (void)0; /* cmp MEM16(esi + 0x120), 0 - flags set for next jcc */
    MEM8(esi + 0x110) = 0;
    if (CMP_GE(MEM16(esi + 0x120), 0)) goto loc_00193400; /* jge: greater or equal (signed >=) */

loc_001933C5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001933CA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x124);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x122));
    MEM16(esi + 0x120) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001933E8: ;
    xmm0 = xmm0 * MEMF(esi + 0x118); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x114); /* addss */
    MEMF(esi + 0x11C) = xmm0; /* movss */

loc_00193400: ;
    xmm0 = MEMF(esi + 0x11C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x48); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x128); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x48); /* addss */
    eax = edi;
    POP32(esp, edi);
    MEMF(esi + 0x48) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193430
 * Original: 0x00193430 - 0x0019345B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193430(void)
{

loc_00193430: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10C);
    ecx = 0; /* xor self */
    MEM32(edx + 0x120) = ecx;
    MEM32(eax + 0x10C) = ecx;
    MEM32(eax + 0x34) = MEM32(eax + 0x34) | 2;
    MEM8(eax + 0xD9) = LO8(ecx);
    MEM8(eax + 0xD8) = LO8(ecx);
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00193460
 * Original: 0x00193460 - 0x0019349B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193460(void)
{

loc_00193460: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00193484: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00191DD0(); /* call 0x00191DD0 */

loc_0019348B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_00191E90(); /* call 0x00191E90 */

loc_00193496: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001934A0
 * Original: 0x001934A0 - 0x00193564 (196 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001934A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001934A0: ;
    esp = esp - 0x44;
    xmm0 = MEMF(eax + 0x228); /* movss */
    SET_LO8(edx, MEM8(eax + 0x10B));
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    eax = esp + 0x1C;
    SET_LO8(ecx, 1);
    PUSH32(esp, 0x14);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649AFC); /* movss */
    PUSH32(esp, eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = esi | 0xFFFFFFFFu;
    edi = edi | 0xFFFFFFFFu;
    MEM8(esp + 0x14) = LO8(ecx);
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x34) = LO8(ecx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM16(esp + 0x4C) = 0x12C;
    MEM8(esp + 0x4E) = 0xA;
    MEM8(esp + 0x4F) = 3;
    MEM8(esp + 0x50) = 0;
    MEM8(esp + 0x51) = LO8(ecx);
    PUSH32(esp, 0); sub_000B0070(); /* call 0x000B0070 */

loc_0019353A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0019355E; /* je: equal / zero */

loc_00193541: ;
    edx = MEM32(esp + 0x50);
    ecx = eax + 0x70;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = edx;

loc_0019355E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00193570
 * Original: 0x00193570 - 0x001935E2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00193570: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x78);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x78;
    SET_LO8(ebx, 1);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001935AE; /* je: equal / zero */

loc_0019358A: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(MEM8(edx + 0x8C2), 0)) goto loc_001935A9; /* jne: not equal / not zero */

loc_00193596: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x7C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_001935A7: ;
    goto loc_001935D1;

loc_001935A9: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001935D1; /* jne: not equal / not zero */

loc_001935AE: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(MEM8(edx + 0x8C2), LO8(ebx))) goto loc_001935D1; /* jne: not equal / not zero */

loc_001935B9: ;
    eax = MEM32(0x847024);
    ecx = 0x355;
    MEM32(esi + 0x7C) = ecx;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00024EB0(); /* call 0x00024EB0 */

loc_001935CF: ;
    MEM32(edi) = eax;

loc_001935D1: ;
    SET_LO8(eax, MEM8(esi + 0x74));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x74) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001935E2(); return; } /* jne: not equal / not zero */

loc_001935DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001935F0
 * Original: 0x001935F0 - 0x0019363B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001935F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001935F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x70);
    PUSH32(esp, edi);
    edi = ebx + 0x78;
    esi = esi + 0x100;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0019361C; /* je: equal / zero */

loc_0019360B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x7C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0019361C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    MEM32(esi + 0x28) = 0;
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019363B(); return; } /* jne: not equal / not zero */

loc_0019362E: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00193640
 * Original: 0x00193640 - 0x00193680 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00193640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x70);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, edi);
    edi = esi + 0x78;
    ebx = ebx + 0x100;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0019366C; /* je: equal / zero */

loc_0019365B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x7C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0019366C: ;
    PUSH32(esp, esi);
    MEM32(ebx + 0x28) = 0;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00193679: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001936A0
 * Original: 0x001936A0 - 0x00193708 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001936A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001936A0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x34);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00193705; /* jne: not equal / not zero */

loc_001936B2: ;
    eax = MEM32(esi + 0x68);
    if (TEST_Z(eax, eax)) goto loc_001936E2; /* je: equal / zero */

loc_001936B9: ;
    if (CMP_EQ(eax, 1)) goto loc_001936E2; /* je: equal / zero */

loc_001936BE: ;
    if (CMP_EQ(eax, 2)) goto loc_001936E2; /* je: equal / zero */

loc_001936C3: ;
    if (CMP_EQ(eax, 3)) goto loc_001936E2; /* je: equal / zero */

loc_001936C8: ;
    if (CMP_EQ(eax, 4)) goto loc_001936E2; /* je: equal / zero */

loc_001936CD: ;
    if (CMP_EQ(eax, 0x111)) goto loc_001936E2; /* je: equal / zero */

loc_001936D4: ;
    if (CMP_EQ(eax, 0x114)) goto loc_001936E2; /* je: equal / zero */

loc_001936DB: ;
    if (CMP_NE(eax, 0x96)) goto loc_00193705; /* jne: not equal / not zero */

loc_001936E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00191D10(); /* call 0x00191D10 */

loc_001936E9: ;
    SET_LO8(eax, MEM8(esi + 0x236));
    esp = esp + 4;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00193705; /* je: equal / zero */

loc_001936F6: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x80) = 0x1F4;

loc_00193705: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193710
 * Original: 0x00193710 - 0x001937C8 (184 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193710(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00193710: ;
    esp = esp - 0x94;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, MEM8(eax + 0x10B));
    edx = MEM32(eax + 0xA4);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(esp) = eax;
    MEM8(esp + 4) = LO8(ecx);
    MEM32(esp + 8) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00193757: ;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0xE0;
    MEM8(esp + 0x21) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00193771: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001937C1; /* je: equal / zero */

loc_00193778: ;
    xmm0 = MEMF(0x648E38); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0xE;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 9;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x25;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001937C1: ;
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_001937D0
 * Original: 0x001937D0 - 0x00193DB7 (1511 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001937D0(void)
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

loc_001937D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(ecx, ecx)) { sub_00193DB7(); return; } /* je: equal / zero */

loc_001937F4: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x50))) { sub_00193DB7(); return; } /* jne: not equal / not zero */

loc_00193803: ;
    edx = MEM32(esi + 0xA4);
    if (CMP_NE(edx, MEM32(eax + 0x54))) { sub_00193DB7(); return; } /* jne: not equal / not zero */

loc_00193812: ;
    ecx = MEM32(esi + 0x3C8);
    if (TEST_NZ(ecx, ecx)) goto loc_00193827; /* jne: not equal / not zero */

loc_0019381C: ;
    MEM8(eax + 0x65) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00193827: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, MEM8(eax + 0x65));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    ebx = eax + 0x68;
    edi = 0x75DE74;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00193860; /* je: equal / zero */

loc_0019384B: ;
    edx = esp + 0x18;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x54) = edi;
    goto loc_001938A6;

loc_00193859: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_00193860: ;
    ecx = MEM32(edi);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00193870: ;
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00193883: ;
    edi = edi + 4;
    esp = esp + 0x14;
    ebx = ebx + 0xC;
    if (CMP_L(edi, 0x75DE9C)) goto loc_00193859; /* jl: less (signed <) */

loc_00193894: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 0x65) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001938A2: ;
    esi = MEM32(esp + 0x24);

loc_001938A6: ;
    ecx = MEM32(edi);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001938B6: ;
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001938CD: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    xmm1 = MEMF(0x7FA21C); /* movss */
    MEM32(esp + 0x3C) = edx;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x40) = eax;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x44) = ecx;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    esp = esp + 0x14;
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    MEM32(esp + 0x1C) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x30) = xmm0; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ecx;
    if (1 /* jnp after test - parity */) goto loc_0019397D; /* jnp: not parity */

loc_00193947: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0019397D: ;
    edx = MEM32(esp + 0x74);
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
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (TEST_S(eax, eax)) goto loc_00193D84; /* jl: less (signed <) */

loc_001939C4: ;
    if (CMP_LE(eax, 3)) goto loc_001939D0; /* jle: less or equal (signed <=) */

loc_001939C9: ;
    eax = 3;
    goto loc_001939D8;

loc_001939D0: ;
    if (TEST_Z(eax, eax)) goto loc_00193D84; /* je: equal / zero */

loc_001939D8: ;
    MEM32(esp + 0x50) = eax;
    /* nop */

loc_001939E0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001939E5: ;
    xmm7 = MEMF(0x64908C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x648CE4); /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x34); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193A07: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x648CE4); /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193A21: ;
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x64908C); /* mulss */
    xmm7 = xmm7 - MEMF(0x648CE4); /* subss */
    xmm7 = xmm7 + MEMF(esp + 0x3C); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193A3F: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193A60: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649550); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193A89: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193AAA: ;
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    MEM32(esp + 0x40) = edx;
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x44) = eax;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    eax = MEM32(esp + 0x44);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x80) = edx;
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x84) = eax;
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0x88) = ecx;
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193B62: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    esi = 2;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00193B82: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193BA2: ;
    xmm0 = xmm0 * MEMF(0x6B7A1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A18); /* addss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193BC0: ;
    xmm0 = xmm0 * MEMF(0x6B7A14); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A10); /* addss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193BDB: ;
    xmm0 = xmm0 * MEMF(0x6B7A0C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A08); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193BF9: ;
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    xmm0 = xmm0 * MEMF(0x6B7A24); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + MEMF(0x6B7A20); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00193C27: ;
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00193C3A: ;
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00193C4D: ;
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00193C60: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(0x6492E8); /* mulss */
    edx = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x299);
    PUSH32(esp, 0x29A);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193C92: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    edi = esp + 0xA0;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00193CBB: ;
    esi = eax;
    esp = esp + 0x48;
    if (TEST_Z(esi, esi)) goto loc_00193D76; /* je: equal / zero */

loc_00193CC8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193CCD: ;
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    MEMF(esi + 0xF8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193CE2: ;
    xmm0 = xmm0 * MEMF(0x648FB0); /* mulss */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    MEMF(esi + 0xFC) = xmm0; /* movss */
    MEM8(esi + 0x100) = 0x80;
    MEM8(esi + 0x101) = 0x80;
    MEM8(esi + 0x102) = 0x80;
    ecx = esi + 0x78;
    eax = MEM32(ecx);
    edx = esi + 0x108;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    xmm0 = MEMF(eax + 0x228); /* movss */
    /* comiss xmm0, MEMF(eax + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x7C))) goto loc_00193D3C; /* jbe: below or equal (unsigned <=) */

loc_00193D3A: ;
    goto loc_00193D41;

loc_00193D3C: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */

loc_00193D41: ;
    MEMF(esi + 0x114) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x228) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x228))) goto loc_00193D6E; /* jb: below (unsigned <) */

loc_00193D67: ;
    eax = 1;
    goto loc_00193D70;

loc_00193D6E: ;
    eax = 0; /* xor self */

loc_00193D70: ;
    MEM8(esi + 0x11C) = LO8(eax);

loc_00193D76: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - 1;
    if ((MEM32(esp + 0x50) != 0)) goto loc_001939E0; /* jne: not equal / not zero */

loc_00193D80: ;
    edi = MEM32(esp + 0x54);

loc_00193D84: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x3C);
    edi = edi + 4;
    MEM32(edx + 4) = ecx;
    ebx = ebx + 0xC;
    (void)0; /* cmp edi, 0x75DE9C - flags set for next jcc */
    MEM32(edx + 8) = eax;
    MEM32(esp + 0x54) = edi;
    if (CMP_L(edi, 0x75DE9C)) goto loc_001938A2; /* jl: less (signed <) */

loc_00193DB0: ;
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
 * sub_00193DD0
 * Original: 0x00193DD0 - 0x00193DF4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193DD0(void)
{

loc_00193DD0: ;
    esp = esp - 8;
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    ecx = esp;
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00193DF0: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00193E00
 * Original: 0x00193E00 - 0x00193ED9 (217 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E00(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_00193E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    xmm0 = MEMF(ebp + 8); /* movss */
    eax = MEM32(ebp + 0x20);
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 3;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00193E69: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    esi = esp + 0x1C;
    eax = esp + 0x28;
    edi = esp + 0x34;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_00193E9C: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F4CCCCD);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00193ED0: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00193EE0
 * Original: 0x00193EE0 - 0x0019400D (301 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193EE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;

loc_00193EE0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193F06: ;
    xmm6 = MEMF(0x648D10); /* movss */
    xmm7 = MEMF(0x64908C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm5 = xmm5 * MEMF(esi + 0x4C); /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193F31: ;
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x4C); /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193F4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    xmm0 = xmm0 * MEMF(esi + 0x4C); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x106);
    PUSH32(esp, 0x2AA);
    PUSH32(esp, 0x2A9);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    MEMF(esp + 0x50) = xmm0; /* movss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00193FAF: ;
    esi = eax;
    esp = esp + 0x48;
    if (TEST_Z(esi, esi)) goto loc_00194007; /* je: equal / zero */

loc_00193FB8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi + 0x38);
    MEMF(esi + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    SET_LO8(eax, 0x80);
    MEMF(esi + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E94); /* movss */
    MEM32(esi + 0x4C) = edx;
    MEM8(esi + 0x100) = LO8(eax);
    MEM8(esi + 0x101) = LO8(eax);
    MEM8(esi + 0x102) = LO8(eax);
    MEMF(esi + 0x108) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00193FFF: ;
    MEMF(esi + 0x10C) = xmm0; /* movss */

loc_00194007: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00194010
 * Original: 0x00194010 - 0x0019428D (637 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00194010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    ecx = MEM32(ebx + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00194287; /* je: equal / zero */

loc_00194029: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00194287; /* jnp: not parity */

loc_00194042: ;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm1 = MEMF(ecx + 0x228); /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001941FB; /* je: equal / zero */

loc_00194074: ;
    xmm3 = MEMF(0x648CE0); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x6496BC); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649440); /* movss */
    esi = 2;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00194194: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x1030002);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_001941B9: ;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_001941F8: ;
    esp = esp + 0x30;

loc_001941FB: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00194205: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    esi = ebx + 0xD0;
    ecx = 0; /* xor self */
    eax = esp + 0x68;
    edi = esp + 0x74;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0019423A: ;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0019425F: ;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00194284: ;
    esp = esp + 0x34;

loc_00194287: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00194290
 * Original: 0x00194290 - 0x001942CC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00194290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm1 = MEMF(ebx + 0x124); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) { sub_001942CC(); return; } /* jbe: below or equal (unsigned <=) */

loc_001942B2: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebx + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00194410
 * Original: 0x00194410 - 0x00194459 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194410(void)
{

loc_00194410: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x34);
    SET_LO8(ecx, MEM8(esi + 0x38));
    PUSH32(esp, 0xA);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00194439: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0019444C: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_001964E0(); /* call 0x001964E0 */

loc_00194454: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00194460
 * Original: 0x00194460 - 0x0019446C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194460(void)
{

loc_00194460: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00196550(); /* call 0x00196550 */

loc_0019446A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00194470
 * Original: 0x00194470 - 0x00194523 (179 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194470(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00194470: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x34);
    if (TEST_Z(edi, edi)) goto loc_00194520; /* je: equal / zero */

loc_00194481: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00194520; /* jnp: not parity */

loc_0019449A: ;
    PUSH32(esp, 0); sub_00195E80(); /* call 0x00195E80 */

loc_0019449F: ;
    xmm3 = MEMF(edi + 0x228); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(edi + 0x88); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x7C); /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm3 = xmm3 - xmm0; /* subss */
    PUSH32(esp, 0); sub_00195E30(); /* call 0x00195E30 */

loc_001944C4: ;
    xmm1 = MEMF(edi + 0x228); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648E58); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 - MEMF(edi + 0x7C); /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00194511; /* jbe: below or equal (unsigned <=) */

loc_001944EA: ;
    eax = MEM32(ebx + 0x128);
    if (TEST_Z(eax, eax)) goto loc_001944FB; /* je: equal / zero */

loc_001944F4: ;
    POP32(esp, edi);
    MEM8(eax + 0x74) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001944FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_00194530(); /* call 0x00194530 */

loc_00194504: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(ebx + 0x128) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00194511: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00194520; /* jbe: below or equal (unsigned <=) */

loc_00194516: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00194010(); /* call 0x00194010 */

loc_0019451D: ;
    esp = esp + 4;

loc_00194520: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00194530
 * Original: 0x00194530 - 0x00194598 (104 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194530: ;
    esp = esp - 0x48;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x59D948); /* addss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    PUSH32(esp, ecx);
    edi = ebp + 0x50;
    eax = edi;
    ecx = esp + 0x18;
    MEM8(esp + 0x10) = 1;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029F750(); /* call 0x0029F750 */

loc_0019458B: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00194598(); return; } /* je: equal / zero */

loc_00194592: ;
    xmm0 = MEMF(edi); /* movss */
    g_seh_ebp = ebp; sub_001945A5(); return; /* tail jmp 0x001945A5 */

}

/**
 * sub_00194650
 * Original: 0x00194650 - 0x00194854 (516 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_00194650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    xmm0 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    esi = MEM32(edi + 0x38);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001946E2; /* je: equal / zero */

loc_00194686: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F49CC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00194695: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019469A: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F08); /* movss */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 - MEMF(0x648F78); /* subss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001946DF: ;
    esp = esp + 0x14;

loc_001946E2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001946E7: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 * MEMF(ebp + 0x14); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 0x18); /* subss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm7; /* movss */
    if ((xmm7 > xmm0)) goto loc_0019472C; /* ja: above (unsigned >) */

loc_00194726: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0019472C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00194731: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019474B: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 * MEMF(ebp + 0x1C); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648E5C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00194797: ;
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    xmm2 = xmm2 + MEMF(0x64925C); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001947D0; /* je: equal / zero */

loc_001947C2: ;
    xmm2 = MEMF(eax + 0x228); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */

loc_001947D0: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ecx);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x28;
    ecx = esp + 0x34;
    MEMF(0x6B7A08) = xmm6; /* movss */
    MEMF(0x6B7A0C) = xmm7; /* movss */
    MEMF(0x6B7A10) = xmm6; /* movss */
    MEMF(0x6B7A14) = xmm7; /* movss */
    MEMF(0x6B7A18) = xmm6; /* movss */
    MEMF(0x6B7A1C) = xmm7; /* movss */
    MEMF(0x6B7A20) = xmm6; /* movss */
    MEMF(0x6B7A24) = xmm7; /* movss */
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_0019484B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00194860
 * Original: 0x00194860 - 0x00194885 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194860: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x70);
    MEM32(ecx + 0x128) = 0;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00194885(); return; } /* jne: not equal / not zero */

loc_0019487B: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00194890
 * Original: 0x00194890 - 0x001948AA (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194890(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194890: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x70);
    MEM32(ecx + 0x128) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_001948B0
 * Original: 0x001948B0 - 0x001949D3 (291 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001948B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001948B0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_001948BD: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(eax);
    if (TEST_Z(ebp, ebp)) goto loc_001949CE; /* je: equal / zero */

loc_001948C9: ;
    SET_LO8(ecx, MEM8(edi + edi * 4 + 0x59964C));
    (void)0; /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019492A; /* je: equal / zero */

loc_001948D6: ;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx = SX8(LO8(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x1C) = ebp;
    ebx = ebx * 8 + 0x59966C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001948FC: ;
    ecx = ZX16(MEM16(ebx + 6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    SET_LO16(edx, LO16(edx) + MEM16(ebx + 4));
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_00194923: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    esp = esp + 0x2C;

loc_0019492A: ;
    SET_LO8(ecx, MEM8(edi + edi * 4 + 0x59964E));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_00194986; /* je: equal / zero */

loc_00194936: ;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx = SX8(LO8(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    MEM32(esp + 0x1C) = ebp;
    ebx = ebx * 8 + 0x599788;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019495C: ;
    ecx = ZX16(MEM16(ebx + 6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    SET_LO16(edx, LO16(edx) + MEM16(ebx + 4));
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_00194983: ;
    esp = esp + 0x2C;

loc_00194986: ;
    SET_LO8(eax, MEM8(edi + edi * 4 + 0x599650));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001949CE; /* je: equal / zero */

loc_00194992: ;
    if (TEST_Z(MEM8(ebp + 0xA4), 1)) goto loc_001949CE; /* je: equal / zero */

loc_0019499B: ;
    ecx = MEM32(esp + 0x14);
    eax = SX8(LO8(eax));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x59988C;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    PUSH32(esp, 0x96);
    ebp = ebp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_001447B0(); /* call 0x001447B0 */

loc_001949CB: ;
    esp = esp + 0x18;

loc_001949CE: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001949E0
 * Original: 0x001949E0 - 0x00194A25 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001949E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001949E0: ;
    esp = esp - 0x4C;
    eax = MEM32(esp + 0x7C);
    eax = (uint32_t)(int32_t)SMEM8(eax + eax * 4 + 0x59964D);
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    SET_LO8(eax, MEM8(esp + 0x7C));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    esi = esi << 4;
    SET_LO8(ecx, LO8(eax));
    esi = esi + 0x599698;
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    PUSH32(esp, edi);
    MEMF(esp + 0x58) = xmm5; /* movss */
    edx = edx & 0x3F;
    if (TEST_Z(LO8(eax), 0x40)) { sub_00194A25(); return; } /* je: equal / zero */

loc_00194A1C: ;
    edi = 0x40;
    edi = edi - edx;
    g_seh_ebp = ebp; sub_00194A27(); return; /* tail jmp 0x00194A27 */

}

/**
 * sub_00194CC0
 * Original: 0x00194CC0 - 0x00194CEE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00194CC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    eax = eax << 3;
    if (CMP_LE(eax, 0xFF)) goto loc_00194CDD; /* jle: less or equal (signed <=) */

loc_00194CD8: ;
    eax = 0xFF;

loc_00194CDD: ;
    edx = ZX8(MEM8(ecx + 0x21));
    if (CMP_GE(eax, edx)) goto loc_00194CE8; /* jge: greater or equal (signed >=) */

loc_00194CE5: ;
    MEM8(ecx + 0x21) = LO8(eax);

loc_00194CE8: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00194CF0
 * Original: 0x00194CF0 - 0x00194D9E (174 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194CF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00194CF0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ecx = MEM32(esi + 0x140);
    ebx = MEM32(esi + 0x144);
    eax = eax + eax * 4;
    xmm0 = MEMF(ecx + eax * 4); /* movss */
    eax = ecx + eax * 4;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00194D36: ;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00194D3F: ;
    if (TEST_Z(LO8(eax), 1)) { sub_00194D9E(); return; } /* je: equal / zero */

loc_00194D43: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00194D53: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x21));
    edi = edx;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    MEMF(esp) = xmm0; /* movss */
    edi = edi + 0x50;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_00194D8B: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x2C) = 4;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00194DE0
 * Original: 0x00194DE0 - 0x00194E6E (142 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194DE0(void)
{
    float xmm0;

loc_00194DE0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ecx = MEM32(esi + 0x140);
    ebx = MEM32(esi + 0x144);
    eax = eax + eax * 4;
    xmm0 = MEMF(ecx + eax * 4); /* movss */
    eax = ecx + eax * 4;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00194E27: ;
    SET_LO16(edx, ZX8(MEM8(ebx + 0x21)));
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(0x648F98); /* mulss */
    edi = MEM32(esp + 0x30);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    esi = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00144690(); /* call 0x00144690 */

loc_00194E5B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x2C) = 4;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00194E70
 * Original: 0x00194E70 - 0x00194EF9 (137 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194E70: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x48);
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + eax * 4 + 0x59964F);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, edi);
    esi = esi + 0x5997B0;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00194EB3: ;
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00194EC8: ;
    ecx = ZX16(MEM16(esi + 6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x18;
    SET_LO16(edx, LO16(edx) + MEM16(esi + 4));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00194EE3: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00194EEB: ;
    xmm1 = MEMF(esi + 0x28); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00194EF9(); return; } /* jbe: below or equal (unsigned <=) */

loc_00194EF5: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00194EFB(); return; /* tail jmp 0x00194EFB */

}

/**
 * sub_00194F90
 * Original: 0x00194F90 - 0x00194FBC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00194F90: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0x36));
    (void)0; /* cmp LO16(eax), 0x10 - flags set for next jcc */
    ecx = 0xFF;
    if (CMP_GE(LO16(eax), 0x10)) goto loc_00194FAA; /* jge: greater or equal (signed >=) */

loc_00194FA5: ;
    eax = eax << 4;
    ecx = eax;

loc_00194FAA: ;
    eax = ZX8(MEM8(edx + 0x7B));
    (void)0; /* cmp LO16(ecx), LO16(eax) - flags set for next jcc */
    eax = 1;
    if (CMP_GE(LO16(ecx), LO16(eax))) goto loc_00194FBB; /* jge: greater or equal (signed >=) */

loc_00194FB8: ;
    MEM8(edx + 0x7B) = LO8(ecx);

loc_00194FBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194FC0
 * Original: 0x00194FC0 - 0x00195051 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194FC0(void)
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

loc_00194FC0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x78)); /* fld float */
    xmm0 = MEMF(eax + 0x80); /* movss */
    /* FPU: fsin  */
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x78); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x78) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm1)) goto loc_00195009; /* jbe: below or equal (unsigned <=) */

loc_00195000: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00195000; /* ja: above (unsigned >) */

loc_00195009: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0019501A; /* jbe: below or equal (unsigned <=) */

loc_00195011: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00195011; /* ja: above (unsigned >) */

loc_0019501A: ;
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x84); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00195060
 * Original: 0x00195060 - 0x001950DB (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195060(void)
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

loc_00195060: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x88)); /* fld float */
    xmm0 = MEMF(eax + 0x90); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x88); /* addss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x88) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm1)) goto loc_001950B9; /* jbe: below or equal (unsigned <=) */

loc_001950A8: ;
    goto loc_001950B0;

    /* nop */

loc_001950B0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001950B0; /* ja: above (unsigned >) */

loc_001950B9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001950CA; /* jbe: below or equal (unsigned <=) */

loc_001950C1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001950C1; /* ja: above (unsigned >) */

loc_001950CA: ;
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00142310(); return; /* tail jmp 0x00142310 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00195190
 * Original: 0x00195190 - 0x00195234 (164 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195190(void)
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

loc_00195190: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x318)); /* fld float */
    xmm3 = MEMF(0x7FA24C); /* movss */
    /* FPU: fsin  */
    xmm1 = MEMF(0x648D30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(eax + 0x31C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x318); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x318) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001951E9; /* jbe: below or equal (unsigned <=) */

loc_001951DC: ;
    /* nop */

loc_001951E0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001951E0; /* ja: above (unsigned >) */

loc_001951E9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001951FA; /* jbe: below or equal (unsigned <=) */

loc_001951F1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001951F1; /* ja: above (unsigned >) */

loc_001951FA: ;
    MEMF(eax + 0x318) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x320); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x328); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00195240
 * Original: 0x00195240 - 0x00195599 (857 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195240: ;
    esp = esp - 0x144;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14C);
    eax = ebp;
    PUSH32(esp, 0); sub_00110AF0(); /* call 0x00110AF0 */

loc_00195255: ;
    xmm0 = xmm0 * MEMF(esp + 0x150); /* mulss */
    xmm0 = xmm0 * MEMF(0x649E8C); /* mulss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00195591; /* jbe: below or equal (unsigned <=) */

loc_00195279: ;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00195282: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = 2;
    PUSH32(esp, esi);
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0x303;
    MEM8(esp + 0x8C) = 1;
    MEM32(esp + 0x90) = 0x57;
    MEM8(esp + 0x3C) = LO8(eax);
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = 4;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = ecx;
    MEM16(esp + 0x3E) = 0x12C;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0xBC) = eax;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x6C) = 0x3600000;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, edi);

loc_00195328: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019532D: ;
    xmm6 = MEMF(0x649694); /* movss */
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ebx = esp + 0x2C;
    esi = ebp;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001123A0(); /* call 0x001123A0 */

loc_00195378: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0xC;
    xmm0 = xmm0 - xmm2; /* subss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195390: ;
    eax = eax & 0xFFFF;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x24) = xmm1; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001953FE; /* ja: above (unsigned >) */

loc_001953F8: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_001953FE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195403: ;
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019542B: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019544B: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(0x648F9C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E88); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195473: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019548B: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001954A3: ;
    xmm0 = MEMF(0x648F60); /* movss */
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001954C7: ;
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001954E3: ;
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001954FF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0xA4) = LO8(eax);
    MEM8(esp + 0xA5) = LO8(eax);
    MEM8(esp + 0xA6) = LO8(eax);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x597978);
    eax = esp + 0x68;
    MEM32(esp + 0x9C) = 0;
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0xAF) = LO8(edx);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00195555: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0019556D; /* je: equal / zero */

loc_0019555C: ;
    edi = eax + 0x310;
    ecx = 7;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0019556D: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00195328; /* ja: above (unsigned >) */

loc_0019558E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00195591: ;
    POP32(esp, ebp);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001955A0
 * Original: 0x001955A0 - 0x001958DE (830 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955A0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001955A0: ;
    esp = esp - 0xE8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xF0);
    eax = esi;
    PUSH32(esp, 0); sub_00110AF0(); /* call 0x00110AF0 */

loc_001955B5: ;
    xmm0 = xmm0 * MEMF(esp + 0xF4); /* mulss */
    xmm0 = xmm0 * MEMF(0x649E8C); /* mulss */
    xmm6 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm0 <= xmm6)) goto loc_001958D6; /* jbe: below or equal (unsigned <=) */

loc_001955DD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    ecx = 0xFF;
    PUSH32(esp, ebx);
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    MEMF(esp + 0x48) = xmm6; /* movss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    MEM32(esp + 0x84) = 0x4D40;
    MEM32(esp + 0x88) = 0x12C;
    MEM8(esp + 0x90) = LO8(eax);
    MEM8(esp + 0x98) = LO8(ecx);
    MEM32(esp + 0x9C) = 0x194FC0;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xB4) = 0x13E6E0;
    MEM32(esp + 0xB8) = 0x13EC40;
    MEM8(esp + 0xC0) = LO8(eax);
    MEM32(esp + 0xC4) = eax;
    MEM8(esp + 0xC8) = LO8(eax);
    MEM16(esp + 0xCA) = 1;
    MEM16(esp + 0xCC) = LO16(ecx);
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0x53;
    goto loc_001956B0;

loc_001956A8: ;
    xmm6 = MEMF(0x648D14); /* movss */

loc_001956B0: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_001123A0(); /* call 0x001123A0 */

loc_001956C8: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 0xC;
    xmm1 = xmm1 - xmm4; /* subss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001956E0: ;
    xmm0 = MEMF(0x649694); /* movss */
    eax = eax & 0xFFFF;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(0x648E14); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm1 = MEMF(esp + 8); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00195756; /* ja: above (unsigned >) */

loc_00195750: ;
    xmm1 = MEMF(esp + 0xC); /* movss */

loc_00195756: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019575B: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * MEMF(0x648F58); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195786: ;
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001957A6: ;
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648F9C); /* mulss */
    xmm1 = xmm1 + MEMF(0x649E88); /* addss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001957CE: ;
    xmm1 = MEMF(0x648F60); /* movss */
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001957F2: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019580E: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019582A: ;
    xmm1 = MEMF(0x649B50); /* movss */
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019584E: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019586A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    eax = eax & 0xFFFF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 3);
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x34;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEM32(esp + 0xB4) = 0;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001958B1: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x20;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001956A8; /* ja: above (unsigned >) */

loc_001958D5: ;
    POP32(esp, ebx);

loc_001958D6: ;
    POP32(esp, esi);
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001958E0
 * Original: 0x001958E0 - 0x00195CD7 (1015 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001958E0(void)
{
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

loc_001958E0: ;
    esp = esp - 0x120;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x128);
    eax = esi;
    PUSH32(esp, 0); sub_00110AF0(); /* call 0x00110AF0 */

loc_001958F5: ;
    xmm0 = xmm0 * MEMF(esp + 0x12C); /* mulss */
    xmm0 = xmm0 * MEMF(0x649284); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00195CCF; /* jbe: below or equal (unsigned <=) */

loc_0019591D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    ecx = 0xFF;
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEM32(esp + 0xB8) = 0x4D40;
    MEM32(esp + 0xBC) = 0x12C;
    MEM8(esp + 0xC4) = LO8(eax);
    MEM8(esp + 0xCC) = LO8(ecx);
    MEM32(esp + 0xD0) = 0x194FC0;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = 0x13E6E0;
    MEM32(esp + 0xEC) = 0x13EC40;
    MEM8(esp + 0xF4) = LO8(eax);
    MEM32(esp + 0xF8) = eax;
    MEM8(esp + 0xFC) = LO8(eax);
    MEM16(esp + 0xFE) = 1;
    MEM16(esp + 0x100) = LO16(ecx);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0x18) = 0x76;
    MEM32(esp + 0x1C) = 0x77;
    MEM32(esp + 0x20) = 0x78;
    MEM32(esp + 0x24) = 0x79;
    MEM32(esp + 0x28) = 0x53;
    MEM32(esp + 0x2C) = 0x3E;
    MEM32(esp + 0x30) = 0x3D;
    MEM32(esp + 0x34) = 0x39;
    MEM32(esp + 0x38) = 2;
    MEM32(esp + 0x3C) = 3;
    MEM32(esp + 0x40) = 0x4E;
    MEM32(esp + 0x44) = 0x4F;
    MEM32(esp + 0x48) = 0x50;
    MEM32(esp + 0x4C) = 0x51;
    PUSH32(esp, ebx);

loc_00195A51: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ebx = esp + 0x24;
    PUSH32(esp, 0); sub_001123A0(); /* call 0x001123A0 */

loc_00195A6F: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0xC;
    xmm0 = xmm0 - xmm4; /* subss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195A87: ;
    xmm1 = MEMF(0x649694); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    eax = eax & 0xFFFF;
    xmm3 = xmm0; /* movaps */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = MEMF(esp + 0x14); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00195B0D; /* ja: above (unsigned >) */

loc_00195B07: ;
    xmm0 = MEMF(esp + 8); /* movss */

loc_00195B0D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195B12: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * MEMF(0x648F58); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195B3D: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195B60: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648F9C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E88); /* addss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195B8B: ;
    xmm0 = MEMF(0x648F60); /* movss */
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195BAF: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195BCB: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195BE7: ;
    xmm0 = MEMF(0x649B50); /* movss */
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xAC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195C0E: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195C2D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xE;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + edx * 4 + 0x1C);
    MEM32(esp + 0xC4) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00195C45: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    (void)0; /* cmp MEM32(esp + 0xC4), 0x39 - flags set for next jcc */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if (CMP_NE(MEM32(esp + 0xC4), 0x39)) goto loc_00195C84; /* jne: not equal / not zero */

loc_00195C70: ;
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */

loc_00195C84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x6C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0xEC) = 0;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00195CAA: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x20;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00195A51; /* ja: above (unsigned >) */

loc_00195CCE: ;
    POP32(esp, ebx);

loc_00195CCF: ;
    POP32(esp, esi);
    esp = esp + 0x120;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00195CE0
 * Original: 0x00195CE0 - 0x00195D13 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195CE0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(edi + 0x34);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x228); /* movss */
    /* comiss xmm0, MEMF(0x6499B8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6499B8))) { sub_00195D13(); return; } /* jbe: below or equal (unsigned <=) */

loc_00195D09: ;
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    g_seh_ebp = ebp; sub_00195D20(); return; /* tail jmp 0x00195D20 */

}

/**
 * sub_00195DA0
 * Original: 0x00195DA0 - 0x00195E2A (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195DA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00195DA0: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0x6B7A80;
    MEMF(esi) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_00195E29; /* je: equal / zero */

loc_00195DB0: ;
    ecx = MEM32(edx + 0x68);
    if (CMP_A(ecx, 0x4A)) goto loc_00195DDC; /* ja: above (unsigned >) */

loc_00195DB8: ;
    if (CMP_EQ(ecx, 0x4A)) goto loc_00195DD6; /* je: equal / zero */

loc_00195DBA: ;
    ecx = ecx - 8;
    if ((ecx == 0)) goto loc_00195DD0; /* je: equal / zero */

loc_00195DBF: ;
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_00195DCA; /* je: equal / zero */

loc_00195DC4: ;
    ecx = ecx - 0x1F;
    if ((ecx == 0)) goto loc_00195DF1; /* je: equal / zero */

loc_00195DC9: ;
    esp += 4; return; /* ret */

loc_00195DCA: ;
    eax = 0x6B7AD4;
    esp += 4; return; /* ret */

loc_00195DD0: ;
    eax = 0x6B7C18;
    esp += 4; return; /* ret */

loc_00195DD6: ;
    eax = 0x6B80D8;
    esp += 4; return; /* ret */

loc_00195DDC: ;
    ecx = ecx - 0x114;
    if ((ecx == 0)) goto loc_00195E0C; /* je: equal / zero */

loc_00195DE4: ;
    ecx = ecx - 0x81;
    if ((ecx == 0)) goto loc_00195DF1; /* je: equal / zero */

loc_00195DEC: ;
    ecx = ecx - 7;
    if ((ecx != 0)) goto loc_00195E29; /* jne: not equal / not zero */

loc_00195DF1: ;
    ecx = MEM32(edx + 0xA4);
    ecx = ecx & 0x1F;
    ecx = ecx << 3;
    eax = MEM32(ecx + 0x6B7E68);
    ecx = MEM32(ecx + 0x6B7E6C);
    MEM32(esi) = ecx;
    esp += 4; return; /* ret */

loc_00195E0C: ;
    edx = MEM32(edx + 0x568);
    if (TEST_Z(edx, edx)) goto loc_00195E29; /* je: equal / zero */

loc_00195E16: ;
    SET_LO8(ecx, MEM8(edx + 0x65D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00195E29; /* je: equal / zero */

loc_00195E20: ;
    eax = 0x6B812C;
    MEMF(esi) = xmm0; /* movss */

loc_00195E29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195E30
 * Original: 0x00195E30 - 0x00195E7B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195E30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00195E30: ;
    PUSH32(esp, ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(edi, edi)) { sub_00195E7B(); return; } /* je: equal / zero */

loc_00195E38: ;
    PUSH32(esp, esi);
    esi = esp + 4;
    edx = edi;
    MEMF(esp + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00195DA0(); /* call 0x00195DA0 */

loc_00195E4A: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00195E7B(); return; } /* je: equal / zero */

loc_00195E51: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp); /* addss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00195E74; /* jnp: not parity */

loc_00195E68: ;
    xmm0 = xmm0 * MEMF(edi + 0x264); /* mulss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */

loc_00195E74: ;
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00195E80
 * Original: 0x00195E80 - 0x00195ECB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195E80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00195E80: ;
    PUSH32(esp, ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(edi, edi)) { sub_00195ECB(); return; } /* je: equal / zero */

loc_00195E88: ;
    PUSH32(esp, esi);
    esi = esp + 4;
    edx = edi;
    MEMF(esp + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00195DA0(); /* call 0x00195DA0 */

loc_00195E9A: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00195ECB(); return; } /* je: equal / zero */

loc_00195EA1: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp); /* addss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00195EC4; /* jnp: not parity */

loc_00195EB8: ;
    xmm0 = xmm0 * MEMF(edi + 0x264); /* mulss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */

loc_00195EC4: ;
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00195ED0
 * Original: 0x00195ED0 - 0x00196091 (449 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195ED0: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEMF(ebp) = xmm4; /* movss */
    MEMF(ebx) = xmm4; /* movss */
    if (TEST_Z(edx, edx)) goto loc_0019608E; /* je: equal / zero */

loc_00195EEE: ;
    if (TEST_Z(ecx, ecx)) goto loc_0019608E; /* je: equal / zero */

loc_00195EF6: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00195F23; /* jnp: not parity */

loc_00195F03: ;
    xmm0 = MEMF(edx + 0x260); /* movss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */
    xmm1 = MEMF(edx + 0x264); /* movss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    goto loc_00195F31;

loc_00195F23: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */

loc_00195F31: ;
    (void)0; /* cmp esi, 6 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, 6)) goto loc_00195F3F; /* jne: not equal / not zero */

loc_00195F37: ;
    edi = MEM32(ecx + 0xC);
    esi = MEM32(ecx + 0x10);
    goto loc_00195F52;

loc_00195F3F: ;
    if (CMP_NE(esi, 0x17)) goto loc_00195F4C; /* jne: not equal / not zero */

loc_00195F44: ;
    edi = MEM32(ecx + 0x14);
    esi = MEM32(ecx + 0x18);
    goto loc_00195F52;

loc_00195F4C: ;
    edi = MEM32(ecx + 0x1C);
    esi = MEM32(ecx + 0x20);

loc_00195F52: ;
    if (TEST_Z(esi, esi)) goto loc_0019608D; /* je: equal / zero */

loc_00195F5A: ;
    if (CMP_EQ(edi, 1)) goto loc_00196062; /* je: equal / zero */

loc_00195F63: ;
    xmm0 = MEMF(edx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00196062; /* jnp: not parity */

loc_00195F7C: ;
    xmm0 = xmm0 - MEMF(edx + 0x7C); /* subss */
    eax = edi + -1;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    if (CMP_LE(eax & eax, 0)) goto loc_00195FD4; /* jle: less or equal (signed <=) */

loc_00195F94: ;
    ecx = esi + 0x14;

loc_00195F97: ;
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx))) goto loc_00195FA6; /* ja: above (unsigned >) */

loc_00195F9C: ;
    edx++;
    ecx = ecx + 0x10;
    if (CMP_L(edx, eax)) goto loc_00195F97; /* jl: less (signed <) */

loc_00195FA4: ;
    goto loc_00195FD4;

loc_00195FA6: ;
    eax = edx;
    eax = eax << 4;
    xmm1 = MEMF(eax + esi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ecx = eax + esi;
    if ((xmm1 <= xmm0)) goto loc_00195FD4; /* jbe: below or equal (unsigned <=) */

loc_00195FB9: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 4); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0019600A; /* jp: parity */

loc_00195FD4: ;
    ecx = MEM32(esp + 0x1C);
    edx = edx << 4;
    xmm0 = MEMF(edx + esi); /* movss */
    eax = edx + esi;
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019600A: ;
    xmm1 = MEMF(ecx + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    edx = MEM32(esp + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 8); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0xC); /* subss */
    POP32(esp, edi);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0xC); /* addss */
    POP32(esp, esi);
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00196062: ;
    xmm0 = MEMF(esi); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(eax) = xmm0; /* movss */

loc_0019608D: ;
    POP32(esp, edi);

loc_0019608E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001960A0
 * Original: 0x001960A0 - 0x001960C4 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001960A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001960A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    eax = MEM32(edi + 0x3C8);
    if (TEST_NZ(eax, eax)) { sub_001960C4(); return; } /* jne: not equal / not zero */

loc_001960BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00196220
 * Original: 0x00196220 - 0x0019627D (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00196220: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_00196257; /* je: equal / zero */

loc_00196233: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 6)) goto loc_0019623F; /* jne: not equal / not zero */

loc_00196239: ;
    MEM32(eax + 0x100) = ecx;

loc_0019623F: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 0x17)) goto loc_0019624B; /* jne: not equal / not zero */

loc_00196245: ;
    MEM32(eax + 0x108) = ecx;

loc_0019624B: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 7)) goto loc_00196257; /* jne: not equal / not zero */

loc_00196251: ;
    MEM32(eax + 0x110) = ecx;

loc_00196257: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00196262: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_00196267: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019627D(); return; } /* jne: not equal / not zero */

loc_00196270: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00196280
 * Original: 0x00196280 - 0x001962D2 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00196280: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_001962B7; /* je: equal / zero */

loc_00196293: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 6)) goto loc_0019629F; /* jne: not equal / not zero */

loc_00196299: ;
    MEM32(eax + 0x100) = ecx;

loc_0019629F: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 0x17)) goto loc_001962AB; /* jne: not equal / not zero */

loc_001962A5: ;
    MEM32(eax + 0x108) = ecx;

loc_001962AB: ;
    if (CMP_NE(MEM32(ebx + 0x3C), 7)) goto loc_001962B7; /* jne: not equal / not zero */

loc_001962B1: ;
    MEM32(eax + 0x110) = ecx;

loc_001962B7: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001962C2: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_001962C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001962CD: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001962E0
 * Original: 0x001962E0 - 0x00196460 (384 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001962E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001962E0: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 0x34);
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_001962F2: ;
    xmm0 = MEMF(0x6496F0); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0xB) = LO8(eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    eax = ZX8(LO8(ebx));
    ecx = esp + 0xC;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    MEM16(esp + 0x22) = 0;
    MEM16(esp + 0x20) = 0x12C;
    MEM8(esp + 0x29) = 0x14;
    MEM32(esp + 0x34) = edi;
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEM8(esp + 0x38) = 0x80;
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001960A0(); /* call 0x001960A0 */

loc_0019636C: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00196390; /* je: equal / zero */

loc_00196373: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM8(esp + 0x1A) = MEM8(esp + 0x1A) | 4;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;

loc_00196390: ;
    (void)0; /* cmp LO8(ebx), 0x17 - flags set for next jcc */
    eax = ZX8(MEM8(esp + 0xB));
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x5976C4));
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x5976C5));
    xmm0 = MEMF(0x648D20); /* movss */
    xmm2 = MEMF(0x649E84); /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEM8(esp + 0x54) = LO8(edx);
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x5976C6));
    SET_LO8(eax, MEM8(esp + 0x8C));
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    xmm2 = MEMF(0x648D44); /* movss */
    MEM8(esp + 0x80) = LO8(eax);
    eax = MEM32(esi + 0x68);
    MEM8(esp + 0x55) = LO8(ecx);
    MEM8(esp + 0x56) = LO8(edx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm7; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm7; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    if (CMP_EQ(LO8(ebx), 0x17)) { sub_00196460(); return; } /* je: equal / zero */

loc_00196427: ;
    if (CMP_NE(eax, 8)) goto loc_0019644A; /* jne: not equal / not zero */

loc_0019642C: ;
    xmm0 = MEMF(0x649E80); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0019649B(); return; /* tail jmp 0x0019649B */

loc_0019644A: ;
    xmm1 = MEMF(0x649E80); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0019649B(); return; /* tail jmp 0x0019649B */

}

/**
 * sub_001964E0
 * Original: 0x001964E0 - 0x0019654A (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001964E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001964E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0x17);
    eax = esi;
    PUSH32(esp, 0); sub_001962E0(); /* call 0x001962E0 */

loc_001964EC: ;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = 0;
    eax = MEM32(esi + 0x34);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0019650F; /* je: equal / zero */

loc_00196506: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0x93)) goto loc_00196548; /* je: equal / zero */

loc_0019650F: ;
    PUSH32(esp, 1);
    SET_LO8(ebx, 6);
    eax = esi;
    PUSH32(esp, 0); sub_001962E0(); /* call 0x001962E0 */

loc_0019651A: ;
    MEM32(esi + 0x100) = eax;
    PUSH32(esp, 1);
    SET_LO8(ebx, 7);
    eax = esi;
    MEM32(esi + 0x104) = 0;
    PUSH32(esp, 0); sub_001962E0(); /* call 0x001962E0 */

loc_00196535: ;
    esp = esp + 8;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x114) = 0;

loc_00196548: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00196550
 * Original: 0x00196550 - 0x001966B0 (352 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00196550: ;
    ecx = MEM32(edi + 0x100);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, ebx)) goto loc_00196563; /* je: equal / zero */

loc_0019655E: ;
    PUSH32(esp, 0); sub_001966C0(); /* call 0x001966C0 */

loc_00196563: ;
    ecx = MEM32(edi + 0x108);
    if (CMP_EQ(ecx, ebx)) goto loc_00196572; /* je: equal / zero */

loc_0019656D: ;
    PUSH32(esp, 0); sub_001966C0(); /* call 0x001966C0 */

loc_00196572: ;
    ecx = MEM32(edi + 0x110);
    if (CMP_EQ(ecx, ebx)) goto loc_00196581; /* je: equal / zero */

loc_0019657C: ;
    PUSH32(esp, 0); sub_001966C0(); /* call 0x001966C0 */

loc_00196581: ;
    eax = MEM32(edi + 0x104);
    if (CMP_EQ(eax, ebx)) goto loc_001965E9; /* je: equal / zero */

loc_0019658B: ;
    ecx = MEM32(eax + 0x4C);
    SET_LO8(eax, MEM8(eax + 0x50));
    ecx = ecx + 0x100;
    if (CMP_NE(LO8(eax), 6)) goto loc_001965A0; /* jne: not equal / not zero */

loc_0019659B: ;
    MEM32(ecx + 4) = ebx;
    goto loc_001965AC;

loc_001965A0: ;
    if (CMP_NE(LO8(eax), 0x17)) goto loc_001965A9; /* jne: not equal / not zero */

loc_001965A4: ;
    MEM32(ecx + 0xC) = ebx;
    goto loc_001965AC;

loc_001965A9: ;
    MEM32(ecx + 0x14) = ebx;

loc_001965AC: ;
    (void)0; /* cmp MEM8(0x8472BD), LO8(ebx) - flags set for next jcc */
    esi = MEM32(edi + 0x104);
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001965E9; /* jne: not equal / not zero */

loc_001965BA: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001965C1: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001965E9; /* jl: less (signed <) */

loc_001965C8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001965DD; /* je: equal / zero */

loc_001965D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001965D8: ;
    esp = esp + 4;
    goto loc_001965E9;

loc_001965DD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001965E9: ;
    ecx = MEM32(edi + 0x10C);
    if (CMP_EQ(ecx, ebx)) goto loc_00196652; /* je: equal / zero */

loc_001965F3: ;
    eax = MEM32(ecx + 0x4C);
    SET_LO8(ecx, MEM8(ecx + 0x50));
    eax = eax + 0x100;
    if (CMP_NE(LO8(ecx), 6)) goto loc_00196608; /* jne: not equal / not zero */

loc_00196603: ;
    MEM32(eax + 4) = ebx;
    goto loc_00196615;

loc_00196608: ;
    if (CMP_NE(LO8(ecx), 0x17)) goto loc_00196612; /* jne: not equal / not zero */

loc_0019660D: ;
    MEM32(eax + 0xC) = ebx;
    goto loc_00196615;

loc_00196612: ;
    MEM32(eax + 0x14) = ebx;

loc_00196615: ;
    (void)0; /* cmp MEM8(0x8472BD), LO8(ebx) - flags set for next jcc */
    esi = MEM32(edi + 0x10C);
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_00196652; /* jne: not equal / not zero */

loc_00196623: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0019662A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00196652; /* jl: less (signed <) */

loc_00196631: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_00196646; /* je: equal / zero */

loc_0019663E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00196641: ;
    esp = esp + 4;
    goto loc_00196652;

loc_00196646: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00196652: ;
    ecx = MEM32(edi + 0x114);
    if (CMP_EQ(ecx, ebx)) goto loc_001966AD; /* je: equal / zero */

loc_0019665C: ;
    eax = MEM32(ecx + 0x4C);
    SET_LO8(ecx, MEM8(ecx + 0x50));
    eax = eax + 0x100;
    if (CMP_NE(LO8(ecx), 6)) goto loc_00196671; /* jne: not equal / not zero */

loc_0019666C: ;
    MEM32(eax + 4) = ebx;
    goto loc_0019667E;

loc_00196671: ;
    if (CMP_NE(LO8(ecx), 0x17)) goto loc_0019667B; /* jne: not equal / not zero */

loc_00196676: ;
    MEM32(eax + 0xC) = ebx;
    goto loc_0019667E;

loc_0019667B: ;
    MEM32(eax + 0x14) = ebx;

loc_0019667E: ;
    (void)0; /* cmp MEM8(0x8472BD), LO8(ebx) - flags set for next jcc */
    esi = MEM32(edi + 0x114);
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001966AD; /* jne: not equal / not zero */

loc_0019668C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00196693: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001966AD; /* jl: less (signed <) */

loc_0019669A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) { sub_001966B0(); return; } /* je: equal / zero */

loc_001966A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001966AA: ;
    esp = esp + 4;

loc_001966AD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001966C0
 * Original: 0x001966C0 - 0x00196702 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001966C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001966C0: ;
    edx = MEM32(ecx + 0x144);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001966F5; /* je: equal / zero */

loc_001966CF: ;
    if (CMP_NE(MEM32(ecx + 0x3C), 6)) goto loc_001966DB; /* jne: not equal / not zero */

loc_001966D5: ;
    MEM32(eax + 0x100) = ebx;

loc_001966DB: ;
    if (CMP_NE(MEM32(ecx + 0x3C), 0x17)) goto loc_001966E7; /* jne: not equal / not zero */

loc_001966E1: ;
    MEM32(eax + 0x108) = ebx;

loc_001966E7: ;
    if (CMP_NE(MEM32(ecx + 0x3C), 7)) goto loc_001966F3; /* jne: not equal / not zero */

loc_001966ED: ;
    MEM32(eax + 0x110) = ebx;

loc_001966F3: ;
    MEM32(edx) = ebx;

loc_001966F5: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    MEM8(ecx + 0x50) = LO8(ebx);
    MEM8(edx + 4) = MEM8(edx + 4) | 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00196710
 * Original: 0x00196710 - 0x00196745 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00196710: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x140);
    eax = MEM32(edi + 0x144);
    ebp = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    MEM32(esp + 8) = ecx;
    (void)0; /* cmp MEM8(edi + 0x4C), 2 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(MEM8(edi + 0x4C), 2)) { sub_00196745(); return; } /* jge: greater or equal (signed >=) */

loc_00196737: ;
    if (TEST_Z(MEM8(eax + 4), 1)) { sub_00196745(); return; } /* je: equal / zero */

loc_0019673D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00196940
 * Original: 0x00196940 - 0x001969C4 (132 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00196940: ;
    esp = esp - 0x48;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    ecx = MEM32(ebx + 0x140);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x144);
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    edx = MEM32(edi + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0xC) = edi;
    if (TEST_Z(edx, edx)) goto loc_001969BB; /* je: equal / zero */

loc_00196974: ;
    edx = MEM32(edi + 0x3C8);
    if (TEST_NZ(edx, edx)) goto loc_001969B0; /* jne: not equal / not zero */

loc_0019697E: ;
    SET_LO8(eax, MEM8(ebx + 0x4E));
    if (CMP_EQ(LO8(eax), MEM8(ebx + 0x4D))) goto loc_0019699B; /* je: equal / zero */

loc_00196986: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = SX8(LO8(eax));
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_00196991; /* jg: greater (signed >) */

loc_0019698D: ;
    eax = ZX8(MEM8(ebx + 0x41));

loc_00196991: ;
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEMF(eax + ecx + 0xC) = xmm0; /* movss */

loc_0019699B: ;
    MEM8(ebx + 0x3A) = MEM8(ebx + 0x3A) & 0xFB;
    POP32(esp, edi);
    MEMF(ebp + 0x34) = xmm0; /* movss */
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_001969B0: ;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(eax + 0x38))) { sub_001969C4(); return; } /* je: equal / zero */

loc_001969BB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00197040
 * Original: 0x00197040 - 0x00197C79 (3129 bytes, 706 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197040(void)
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

loc_00197040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 0x4C));
    eax = eax + edx;
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x84) = eax;
    if (CMP_G(LO8(ecx), 1)) goto loc_00197081; /* jg: greater (signed >) */

loc_00197073: ;
    ecx = MEM32(eax + 0x144);
    if (TEST_NZ(ecx, ecx)) goto loc_00197C72; /* jne: not equal / not zero */

loc_00197081: ;
    edi = MEM32(ebx + 0x144);
    MEM32(esp + 0x94) = edi;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_00197093: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001970AD; /* je: equal / zero */

loc_001970A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001970A7: ;
    MEM32(0x77182C) = esi;

loc_001970AD: ;
    eax = MEM32(0x771828);
    if (TEST_Z(eax, eax)) goto loc_001970C7; /* je: equal / zero */

loc_001970B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001970BD: ;
    MEM32(0x771828) = 0;

loc_001970C7: ;
    eax = MEM32(0x77181C);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_001970E1; /* je: equal / zero */

loc_001970D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001970DB: ;
    MEM32(0x77181C) = esi;

loc_001970E1: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_00197107; /* je: equal / zero */

loc_001970EF: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001970FB: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_00197107: ;
    eax = MEM32(0x771814);
    if (TEST_Z(eax, eax)) goto loc_00197128; /* je: equal / zero */

loc_00197110: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0019711C: ;
    eax = 0; /* xor self */
    MEM32(0x549AF8) = eax;
    MEM32(0x771814) = eax;

loc_00197128: ;
    ecx = MEM32(0x771810);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_00197148; /* je: equal / zero */

loc_00197134: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = eax;
    MEM32(0x771810) = eax;

loc_00197148: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(0x771760);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00197333; /* je: equal / zero */

loc_00197159: ;
    eax = MEM32(0x6B82DC);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = 0x28;
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00197178; /* je: equal / zero */

loc_0019716C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00197172: ;
    MEM32(0x771760) = esi;

loc_00197178: ;
    eax = MEM32(0x6B8C6C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_00197192; /* je: equal / zero */

loc_00197187: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0019718C: ;
    MEM32(0x77175C) = esi;

loc_00197192: ;
    xmm0 = MEMF(0x648E14); /* movss */
    eax = esp + 0x74;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001971CE: ;
    ebx = MEM32(0x847194);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    eax = 0x2AB;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001971E5: ;
    edx = esp + 0x10;
    esi = eax;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    eax = 0x2AC;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001971F8: ;
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00197211; /* jne: not equal / not zero */

loc_00197201: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00197209: ;
    MEM32(0x771764) = esi;
    goto loc_00197228;

loc_00197211: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_00197228; /* je: equal / zero */

loc_00197219: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00197222: ;
    MEM32(0x771764) = esi;

loc_00197228: ;
    if (CMP_EQ(MEM32(0x771768), ebx)) goto loc_00197241; /* je: equal / zero */

loc_00197230: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0019723B: ;
    MEM32(0x771768) = ebx;

loc_00197241: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = 2;
    if (TEST_NZ(edi, edi)) goto loc_0019725A; /* jne: not equal / not zero */

loc_0019724A: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00197252: ;
    MEM32(0x77176C) = edi;
    goto loc_00197271;

loc_0019725A: ;
    if (CMP_EQ(MEM32(0x77176C), edi)) goto loc_00197271; /* je: equal / zero */

loc_00197262: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0019726B: ;
    MEM32(0x77176C) = edi;

loc_00197271: ;
    xmm0 = MEMF(0x648D80); /* movss */
    edx = MEM32(0x5499F0);
    eax = 0; /* xor self */
    MEM32(0x5473D8) = eax;
    MEM32(0x547458) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    edx = edx | 7;
    PUSH32(esp, 0x16);
    eax = 1;
    MEM32(0x547358) = 0xF0000000u;
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    MEM32(0x5473B0) = esi;
    MEM32(0x5473B4) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x547434) = esi;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001972D3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001972ED: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00197307: ;
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_00197326: ;
    ebx = MEM32(ebp + 8);
    edi = 1;
    goto loc_0019753A;

loc_00197333: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = 0x18;
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00197352; /* je: equal / zero */

loc_00197346: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0019734C: ;
    MEM32(0x771760) = esi;

loc_00197352: ;
    eax = MEM32(0x77175C);
    if (TEST_Z(eax, eax)) goto loc_0019736C; /* je: equal / zero */

loc_0019735B: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00197362: ;
    MEM32(0x77175C) = 0;

loc_0019736C: ;
    SET_LO8(eax, MEM8(0x75CEBC));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0019740F; /* jbe: below or equal (unsigned <=) */

loc_00197379: ;
    esi = MEM32(0x75CEB8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001973AE; /* jne: not equal / not zero */

loc_00197386: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00197397: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0019739F: ;
    edx = MEM32(0x75CEB8);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75CEB8);

loc_001973AE: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001973DA; /* jne: not equal / not zero */

loc_001973B5: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001973BD: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75CEB8);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001973DA; /* jne: not equal / not zero */

loc_001973CD: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75CEB8);

loc_001973DA: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00197403; /* jne: not equal / not zero */

loc_001973E2: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001973FE; /* jne: not equal / not zero */

loc_001973EC: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001973F5: ;
    esi = MEM32(0x75CEB8);
    esp = esp + 8;

loc_001973FE: ;
    esi = MEM32(esi + 4);
    goto loc_0019740B;

loc_00197403: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00197408: ;
    esi = MEM32(eax + 4);

loc_0019740B: ;
    if (TEST_NZ(esi, esi)) goto loc_00197424; /* jne: not equal / not zero */

loc_0019740F: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00197418: ;
    MEM32(0x771764) = 0;
    goto loc_0019743B;

loc_00197424: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_0019743B; /* je: equal / zero */

loc_0019742C: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00197435: ;
    MEM32(0x771764) = esi;

loc_0019743B: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(0x7717E4);
    edi = 1;
    ecx = ecx | edi;
    esi = 2;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547358) = 0;
    MEM32(0x547330) = 3;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547334) = edi;
    edx = 0x800;
    if (CMP_EQ(eax, esi)) goto loc_00197490; /* je: equal / zero */

loc_0019747B: ;
    eax = ecx;
    eax = eax | edx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547360) = esi;
    MEM32(0x7717E4) = esi;

loc_00197490: ;
    ecx = MEM32(0x7717C4);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_001974AC; /* je: equal / zero */

loc_0019749C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_001974AC: ;
    ecx = 4;
    if (CMP_EQ(MEM32(0x7717A4), ecx)) goto loc_001974D4; /* je: equal / zero */

loc_001974B9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;
    edx = 0x800;

loc_001974D4: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_001974EC; /* je: equal / zero */

loc_001974DC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_001974EC: ;
    if (CMP_EQ(MEM32(0x771774), esi)) goto loc_00197506; /* je: equal / zero */

loc_001974F4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x54737C) = esi;
    MEM32(0x771774) = esi;

loc_00197506: ;
    if (CMP_EQ(MEM32(0x7717E8), edi)) goto loc_00197520; /* je: equal / zero */

loc_0019750E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_00197520: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_0019753A; /* je: equal / zero */

loc_00197528: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0019753A: ;
    esi = MEM32(esp + 0x84);
    PUSH32(esp, 0x10);
    edx = esi + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00197553: ;
    PUSH32(esp, 0x10);
    edx = esi + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00197565: ;
    if (CMP_EQ(MEM32(0x771824), edi)) goto loc_00197585; /* je: equal / zero */

loc_0019756D: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00197579: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_00197585: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_001975A5; /* je: equal / zero */

loc_0019758D: ;
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00197599: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_001975A5: ;
    edx = 1;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001975B4: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001975CD: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001975E6: ;
    PUSH32(esp, 0x77180C);
    edi = 0x302;
    esi = 0x3E;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_00197604: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_00197618: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    ecx = ecx << 2;
    ecx = ecx >> 2;
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    edi = esp + 0x24;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0019763B: ;
    edx = MEM32(ebx + 0x140);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x98) = edx;
    eax = ebx + 0x2C;
    edx = MEM32(eax);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0xA4);
    xmm1 = MEMF(edx + 0x48); /* movss */
    edx = MEM32(ebx + 0x3C);
    MEM32(esp + 0x38) = eax;
    esp = esp + 0x10;
    (void)0; /* cmp edx, 6 - flags set for next jcc */
    eax = 0x75DEB8;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = 0xFFFFFF;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEM32(esp + 0x8C) = eax;
    if (CMP_EQ(edx, 6)) goto loc_001976BC; /* je: equal / zero */

loc_001976B0: ;
    eax = 0x75DEA8;
    MEM32(esp + 0x8C) = eax;

loc_001976BC: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(ecx, edx)) goto loc_00197C58; /* je: equal / zero */

loc_001976D0: ;
    ecx = esp + 0xD8;
    ecx = ecx - eax;
    MEM32(esp + 0xA4) = ecx;
    ecx = esp + 0x74;
    ecx = ecx - eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = ecx;
    goto loc_00197700;

loc_001976F0: ;
    xmm1 = MEMF(esp + 0x90); /* movss */
    /* nop */

loc_00197700: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x1C);
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0xB0) = ecx;
    ecx = MEM32(esp + 0xA0);
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(esp + 0x9C);
    ebx--;
    MEMF(esp + 0xD4) = xmm1; /* movss */
    MEM32(esp + 0xB8) = edx;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0x1C) = ebx;
    if (((int32_t)ebx >= 0)) goto loc_00197778; /* jns: not sign (positive) */

loc_00197766: ;
    edx = MEM32(ebp + 8);
    eax = ZX8(MEM8(edx + 0x41));
    /* nop */

loc_00197770: ;
    ebx = ebx + eax;
    if (((int32_t)ebx < 0)) goto loc_00197770; /* js: sign (negative) */

loc_00197774: ;
    MEM32(esp + 0x1C) = ebx;

loc_00197778: ;
    edx = MEM32(esp + 0x88);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    fp_push(MEMF(edi + edx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(edi + edx); /* movss */
    edi = edi + edx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x20); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001977CC: ;
    ecx = MEM32(esp + 0x10);
    xmm4 = MEMF(edi + 0x1C); /* movss */
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(ebx, ecx)) goto loc_001977EE; /* jne: not equal / not zero */

loc_001977E5: ;
    eax = 0xFFFFFF;
    MEM32(esp + 0x18) = eax;

loc_001977EE: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = ebx + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00197818; /* jge: greater or equal (signed >=) */

loc_0019780D: ;
    edx = MEM32(ebp + 8);
    edx = ZX8(MEM8(edx + 0x41));

loc_00197814: ;
    ecx = ecx + edx;
    if (((int32_t)ecx < 0)) goto loc_00197814; /* js: sign (negative) */

loc_00197818: ;
    if (CMP_EQ(ecx, MEM32(esp + 0x10))) goto loc_00197840; /* je: equal / zero */

loc_0019781E: ;
    edx = MEM32(esp + 0x88);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    xmm0 = MEMF(ecx + edx); /* movss */
    ecx = ecx + edx;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */

loc_00197840: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x2C) = ecx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xA8); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = edx;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xB0); /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0xC8) = ecx;
    xmm3 = MEMF(esp + 0xC8); /* movss */
    MEM32(esp + 0xCC) = edx;
    xmm2 = MEMF(esp + 0xCC); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm1, MEMF(0x648D54) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648D54))) goto loc_001978E4; /* jbe: below or equal (unsigned <=) */

loc_001978BD: ;
    MEMF(esp + 0xD0) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xD0)); /* sqrtss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm4 = xmm4 / MEMF(esp + 0xC4); /* divss */
    xmm1 = xmm4; /* movaps */

loc_001978E4: ;
    ecx = MEM32(esp + 0xB4);
    xmm4 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0xAC);
    edi = MEM32(esp + 0xB0);
    xmm0 = xmm4; /* movaps */
    MEMF(esp + 0x9C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0xB8); /* movss */
    MEM32(esp + 0xD8) = ecx;
    MEM32(esp + 0xDC) = ecx;
    ecx = MEM32(esp + 0xA8);
    MEM32(esp + 0x34) = ecx;
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEM32(esp + 0x38) = edx;
    xmm6 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0xBC); /* movss */
    ebx = MEM32(esp + 0x34);
    MEM32(esp + 0x3C) = edi;
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm6 = xmm6 - xmm5; /* subss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0xC0); /* movss */
    MEM32(esp + 0x4C) = ecx;
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm7 + xmm4; /* addss */
    MEM32(esp + 0x50) = edx;
    xmm4 = MEMF(esp + 0x50); /* movss */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x54) = edi;
    xmm4 = MEMF(esp + 0x54); /* movss */
    edi = MEM32(esp + 0x28);
    xmm4 = xmm4 + xmm6; /* addss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0xE8) = ebx;
    ebx = MEM32(esp + 0x38);
    MEM32(esp + 0xF4) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0xEC) = ebx;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0xFC) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0xD4); /* movss */
    MEM32(esp + 0x60) = ecx;
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEM32(esp + 0xF0) = ebx;
    ebx = MEM32(esp + 0x60);
    MEM32(esp + 0xF8) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x64) = edx;
    xmm4 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x90); /* movss */
    MEM32(esp + 0x68) = edi;
    xmm4 = MEMF(esp + 0x68); /* movss */
    MEM32(esp + 0x100) = ebx;
    ebx = MEM32(esp + 0x64);
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    MEM32(esp + 0x104) = ebx;
    ebx = MEM32(esp + 0x68);
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm3; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0x108) = ebx;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEM32(esp + 0x40) = ecx;
    xmm4 = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x44) = edx;
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x48) = edi;
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    edx = MEM32(esp + 0x40);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x10C) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x110) = ecx;
    MEM32(esp + 0x114) = edx;
    if ((xmm1 <= xmm2)) goto loc_00197B25; /* jbe: below or equal (unsigned <=) */

loc_00197B0E: ;
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */

loc_00197B25: ;
    ebx = MEM32(esp + 0x8C);
    edi = esp + 0xEC;
    MEM32(esp + 0x10) = 4;
    goto loc_00197B40;

    /* nop */

loc_00197B40: ;
    ecx = MEM32(esp + 0x94);
    SET_LO8(edx, MEM8(ecx + 0x54));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00197BEB; /* je: equal / zero */

loc_00197B52: ;
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(edi + -4); /* movss */
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_00197B74: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    eax = MEM32(esp + 0x94);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = MEM32(ebx);
    xmm0 = MEMF(edi + -4); /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + ebx);
    eax = MEM32(eax + ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_001545B0(); /* call 0x001545B0 */

loc_00197BDE: ;
    esi = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x4C);
    esp = esp + 0x34;
    goto loc_00197C2E;

loc_00197BEB: ;
    xmm0 = MEMF(ebx); /* movss */
    edx = MEM32(edi + -4);
    ecx = MEM32(edi);
    MEM32(esi) = edx;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0xA4);
    esi = esi + 4;
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + ebx);
    ecx = MEM32(esp + 0xC);
    esi = esi + 4;
    esi = esi + 4;
    MEM32(esi) = edx;
    edx = MEM32(ecx + ebx);
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    esi = esi + 4;
    MEM32(esi) = edx;
    esi = esi + 4;
    MEM32(esp + 0x14) = esi;

loc_00197C2E: ;
    ecx = MEM32(esp + 0x10);
    edi = edi + 0xC;
    ebx = ebx + 4;
    ecx--;
    MEM32(esp + 0x10) = ecx;
    if ((ecx != 0)) goto loc_00197B40; /* jne: not equal / not zero */

loc_00197C43: ;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    (void)0; /* cmp MEM32(esp + 0x1C), ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(MEM32(esp + 0x1C), ecx)) goto loc_001976F0; /* jne: not equal / not zero */

loc_00197C58: ;
    edx = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 0;
    esi = esi + 4;
    MEM32(edx) = esi;

loc_00197C72: ;
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
 * sub_00197C80
 * Original: 0x00197C80 - 0x00197D2A (170 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197C80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00197C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x34);
    edx = MEM32(eax + 0x64);
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_NZ(edx, edx)) goto loc_00197C98; /* jne: not equal / not zero */

loc_00197C96: ;
    SET_LO8(ecx, 1);

loc_00197C98: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x38))) goto loc_00197CE3; /* jne: not equal / not zero */

loc_00197CA3: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00197CE3; /* jne: not equal / not zero */

loc_00197CA7: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00197D26; /* je: equal / zero */

loc_00197CB1: ;
    SET_LO8(ebx, MEM8(edi + 0x50));
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_001962E0(); /* call 0x001962E0 */

loc_00197CBD: ;
    SET_LO8(ecx, MEM8(edi + 0x50));
    esp = esp + 4;
    if (CMP_NE(LO8(ecx), 6)) goto loc_00197CD0; /* jne: not equal / not zero */

loc_00197CC8: ;
    MEM32(esi + 0x100) = eax;
    goto loc_00197CE3;

loc_00197CD0: ;
    if (CMP_NE(LO8(ecx), 0x17)) goto loc_00197CDD; /* jne: not equal / not zero */

loc_00197CD5: ;
    MEM32(esi + 0x108) = eax;
    goto loc_00197CE3;

loc_00197CDD: ;
    MEM32(esi + 0x110) = eax;

loc_00197CE3: ;
    eax = MEM32(edi + 0x4C);
    SET_LO8(ecx, MEM8(edi + 0x50));
    eax = eax + 0x100;
    if (CMP_NE(LO8(ecx), 6)) goto loc_00197CFC; /* jne: not equal / not zero */

loc_00197CF3: ;
    MEM32(eax + 4) = 0;
    goto loc_00197D11;

loc_00197CFC: ;
    if (CMP_NE(LO8(ecx), 0x17)) goto loc_00197D0A; /* jne: not equal / not zero */

loc_00197D01: ;
    MEM32(eax + 0xC) = 0;
    goto loc_00197D11;

loc_00197D0A: ;
    MEM32(eax + 0x14) = 0;

loc_00197D11: ;
    SET_LO8(eax, MEM8(edi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEM8(edi + 0x2C) = LO8(eax);

loc_00197D26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00197D30
 * Original: 0x00197D30 - 0x00197D7E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00197D30: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0xA - flags set for next jcc */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    PUSH32(esp, esi);
    if (CMP_NE(edx, 0xA)) goto loc_00197D63; /* jne: not equal / not zero */

loc_00197D44: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_00197D7E(); return; } /* je: equal / zero */

loc_00197D4A: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    if (CMP_EQ(esi, MEM32(eax + 0x34))) goto loc_00197D5D; /* je: equal / zero */

loc_00197D55: ;
    SET_LO8(edx, MEM8(edx + 4));
    if (CMP_NE(LO8(edx), MEM8(eax + 0x38))) { sub_00197D7E(); return; } /* jne: not equal / not zero */

loc_00197D5D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001966C0(); return; /* tail jmp 0x001966C0 */

loc_00197D63: ;
    if (TEST_NZ(edx, edx)) { sub_00197D7E(); return; } /* jne: not equal / not zero */

loc_00197D67: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_00197D7E(); return; } /* je: equal / zero */

loc_00197D6D: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    if (CMP_NE(edx, MEM32(eax + 0x34))) { sub_00197D7E(); return; } /* jne: not equal / not zero */

loc_00197D78: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001966C0(); return; /* tail jmp 0x001966C0 */

}

/**
 * sub_00197E10
 * Original: 0x00197E10 - 0x001980C8 (696 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00197E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    ecx = MEM32(ebx + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001980C2; /* je: equal / zero */

loc_00197E29: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001980C2; /* jnp: not parity */

loc_00197E42: ;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm1 = MEMF(ecx + 0x228); /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00198016; /* je: equal / zero */

loc_00197E74: ;
    xmm3 = MEMF(0x648D40); /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    xmm2 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D50); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(0x649440); /* movss */
    PUSH32(esp, 0x1030002);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_00197FD4: ;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_00198013: ;
    esp = esp + 0x30;

loc_00198016: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    esi = ebx + 0xD0;
    ecx = 0; /* xor self */
    eax = esp + 0x68;
    edi = esp + 0x74;
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0019807B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0019809D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_001980BF: ;
    esp = esp + 0x34;

loc_001980C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001980D0
 * Original: 0x001980D0 - 0x00198117 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001980D0(void)
{

loc_001980D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    edx = esp + 8;
    PUSH32(esp, edx);
    esi = eax;
    eax = MEM32(esi + 0x34);
    SET_LO8(ecx, MEM8(esi + 0x38));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001980F7: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0019810A: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_001964E0(); /* call 0x001964E0 */

loc_00198112: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00198120
 * Original: 0x00198120 - 0x0019815D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00198120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x124); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) { sub_0019815D(); return; } /* jbe: below or equal (unsigned <=) */

loc_00198146: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebx + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00198290
 * Original: 0x00198290 - 0x001982A8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198290(void)
{

loc_00198290: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_001980D0(); /* call 0x001980D0 */

loc_0019829C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00197E10(); /* call 0x00197E10 */

loc_001982A3: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001982B0
 * Original: 0x001982B0 - 0x001982E5 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001982B0(void)
{
    float xmm0;

loc_001982B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00196550(); /* call 0x00196550 */

loc_001982BB: ;
    PUSH32(esp, 1);
    ebx = edi;
    PUSH32(esp, 0); sub_00197E10(); /* call 0x00197E10 */

loc_001982C4: ;
    xmm0 = MEMF(0x58BD48); /* movss */
    MEMF(edi + 0x130) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    MEMF(edi + 0x12C) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001982F0
 * Original: 0x001982F0 - 0x001982F9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001982F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001982F0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001980D0(); return; /* tail jmp 0x001980D0 */

}

/**
 * sub_00198300
 * Original: 0x00198300 - 0x0019857C (636 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_00198300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB8;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00198576; /* je: equal / zero */

loc_0019831C: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00198576; /* je: equal / zero */

loc_0019832A: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00198576; /* jnp: not parity */

loc_00198343: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm0 = MEMF(0x64909C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0019835B; /* ja: above (unsigned >) */

loc_00198358: ;
    xmm0 = xmm1; /* movaps */

loc_0019835B: ;
    xmm2 = MEMF(ecx + 0x130); /* movss */
    xmm1 = xmm1 * MEMF(0x648E38); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 0x130); /* movss */
    xmm2 = xmm2 + MEMF(ecx + 0x12C); /* addss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648E5C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x12C) = xmm2; /* movss */
    if ((xmm1 > xmm0)) goto loc_001983A5; /* ja: above (unsigned >) */

loc_00198398: ;
    xmm1 = MEMF(0x64925C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001983A8; /* jbe: below or equal (unsigned <=) */

loc_001983A5: ;
    xmm0 = xmm1; /* movaps */

loc_001983A8: ;
    edi = (int32_t)MEMF(ecx + 0x12C); /* cvttss2si */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(ecx + 0x130) = xmm0; /* movss */
    if (CMP_LE(edi & edi, 0)) goto loc_00198576; /* jle: less or equal (signed <=) */

loc_001983C0: ;
    xmm1 = MEMF(ecx + 0x12C); /* movss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x12C) = xmm1; /* movss */
    eax = esi + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F0C84);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001983FE: ;
    xmm5 = 0.0f; /* xorps self = zero */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00198427: ;
    esp = esp + 0x14;
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    goto loc_00198441;

loc_0019843E: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_00198441: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198446: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198459: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x260);
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = MEM32(esp + 0x30);
    xmm0 = MEMF(0x6495C0); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ecx;
    eax = esp + 0x9C;
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm5 = MEMF(esi + 0x264); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001984BB: ;
    esp = esp + 0x24;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001984D3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001984D8: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    MEMF(0x6B7A0C) = xmm2; /* movss */
    MEMF(0x6B7A14) = xmm2; /* movss */
    MEMF(0x6B7A1C) = xmm2; /* movss */
    MEMF(0x6B7A24) = xmm2; /* movss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    ecx = MEM32(esi + 0x228);
    xmm1 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ecx);
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x44;
    ecx = esp + 0x24;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_0019856C: ;
    esp = esp + 0x10;
    edi--;
    if ((edi != 0)) goto loc_0019843E; /* jne: not equal / not zero */

loc_00198576: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00198580
 * Original: 0x00198580 - 0x001985BF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00198580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    eax = MEM32(ebp + 8);
    xmm1 = MEMF(eax + 0x124); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    if ((xmm1 <= xmm0)) { sub_001985BF(); return; } /* jbe: below or equal (unsigned <=) */

loc_001985A5: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(eax + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001987B0
 * Original: 0x001987B0 - 0x001987B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001987B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001987B0: ;
    g_seh_ebp = ebp; sub_00194410(); return; /* tail jmp 0x00194410 */

}

/**
 * sub_001987C0
 * Original: 0x001987C0 - 0x00198EC5 (1797 bytes, 376 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001987C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;

loc_001987C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x34);
    if (TEST_Z(edi, edi)) goto loc_00198EBE; /* je: equal / zero */

loc_001987DD: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00198EBE; /* je: equal / zero */

loc_001987EB: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00198EBE; /* jnp: not parity */

loc_00198804: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00198820; /* jp: parity */

loc_00198818: ;
    MEMF(esp + 0x18) = xmm2; /* movss */
    goto loc_00198832;

loc_00198820: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00198832: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x84); /* subss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x8C); /* subss */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_0019886B: ;
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = MEMF(0x648CE4); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001988AC; /* jbe: below or equal (unsigned <=) */

loc_00198887: ;
    xmm1 = MEMF(edi + 0x7C); /* movss */
    xmm1 = xmm1 + MEMF(0x648E5C); /* addss */
    /* comiss xmm1, MEMF(edi + 0x228) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + 0x228))) goto loc_001988AC; /* jbe: below or equal (unsigned <=) */

loc_0019889D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00198580(); /* call 0x00198580 */

loc_001988A3: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 4;

loc_001988AC: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EF4); /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    if (CMP_GE(eax, 1)) goto loc_001988CA; /* jge: greater or equal (signed >=) */

loc_001988C0: ;
    MEM32(esp + 0x20) = 1;
    goto loc_001988DB;

loc_001988CA: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x20) = 5;
    if (CMP_G(eax, 5)) goto loc_001988DB; /* jg: greater (signed >) */

loc_001988D7: ;
    MEM32(esp + 0x20) = eax;

loc_001988DB: ;
    xmm0 = xmm0 * MEMF(0x649508); /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001988F8; /* jbe: below or equal (unsigned <=) */

loc_001988F0: ;
    MEMF(esp + 0x54) = xmm1; /* movss */
    goto loc_00198911;

loc_001988F8: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x54) = xmm1; /* movss */
    if ((xmm0 > xmm1)) goto loc_00198911; /* ja: above (unsigned >) */

loc_0019890B: ;
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_00198911: ;
    MEM32(esp + 0x1C) = 0x75DEC8;
    /* nop */

loc_00198920: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00198933: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00198C4B; /* jle: less or equal (signed <=) */

loc_00198944: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198949: ;
    xmm5 = MEMF(0x648E38); /* movss */
    xmm6 = MEMF(0x648E5C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019896C: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    edx = esp + 0x34;
    xmm0 = xmm0 - xmm6; /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0019899C: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0x34) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x34))) goto loc_00198C3E; /* jbe: below or equal (unsigned <=) */

loc_001989B2: ;
    xmm0 = MEMF(0x648E2C); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = esp + 0x70;
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00198A02: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    xmm5 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x54) = ecx;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x58) = edx;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    MEM32(esp + 0x5C) = eax;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    eax = MEM32(esp + 0x5C);
    esp = esp + 0xC;
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    MEM32(esp + 0x14) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (1 /* jp after test - parity */) goto loc_00198A9B; /* jp: parity */

loc_00198A7D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00198A9B; /* jp: parity */

loc_00198A8C: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00198AAC; /* jnp: not parity */

loc_00198A9B: ;
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00198AA6: ;
    xmm5 = 0.0f; /* xorps self = zero */
    ebx = MEM32(ebp + 8);

loc_00198AAC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198AB1: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F8C); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198AF0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    xmm2 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x3C) = ecx;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x7FA21C); /* mulss */
    xmm1 = xmm1 * MEMF(0x648D38); /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x40) = edx;
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x40) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    edx = MEM32(esp + 0x40);
    xmm3 = xmm3 * xmm1; /* mulss */
    MEM32(esp + 0x58) = ecx;
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x5C) = edx;
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEM32(esp + 0x60) = eax;
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x64A2C4); /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x54); /* mulss */
    MEMF(0x6B7A08) = xmm2; /* movss */
    MEMF(0x6B7A0C) = xmm5; /* movss */
    MEMF(0x6B7A10) = xmm2; /* movss */
    MEMF(0x6B7A14) = xmm5; /* movss */
    MEMF(0x6B7A18) = xmm2; /* movss */
    MEMF(0x6B7A1C) = xmm5; /* movss */
    MEMF(0x6B7A24) = xmm5; /* movss */
    ecx = MEM32(edi + 0x228);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x649BAC); /* movss */
    eax = esp + 0x1C;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_00198C3B: ;
    esp = esp + 0x10;

loc_00198C3E: ;
    eax = MEM32(esp + 0x20);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00198944; /* jl: less (signed <) */

loc_00198C4B: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + 4;
    (void)0; /* cmp eax, 0x75DED0 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 0x75DED0)) goto loc_00198920; /* jl: less (signed <) */

loc_00198C61: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D5828);
    esi = edi;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00198C75: ;
    xmm6 = MEMF(edi + 0x7C); /* movss */
    xmm6 = xmm6 - MEMF(edi + 0x88); /* subss */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648EA0); /* movss */
    esp = esp + 8;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm6; /* movss */
    if ((xmm5 <= xmm6)) goto loc_00198CA6; /* jbe: below or equal (unsigned <=) */

loc_00198CA1: ;
    xmm0 = xmm5; /* movaps */
    goto loc_00198CB1;

loc_00198CA6: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    xmm0 = xmm1; /* movaps */
    if ((xmm6 > xmm1)) goto loc_00198CB1; /* ja: above (unsigned >) */

loc_00198CAE: ;
    xmm0 = xmm6; /* movaps */

loc_00198CB1: ;
    /* comiss xmm0, MEMF(ebx + 0x130) - sets EFLAGS */
    xmm2 = MEMF(0x7FA21C); /* movss */
    if ((xmm0 > MEMF(ebx + 0x130))) goto loc_00198CE7; /* ja: above (unsigned >) */

loc_00198CC2: ;
    xmm0 = MEMF(ebx + 0x130); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00198CDF; /* jbe: below or equal (unsigned <=) */

loc_00198CDA: ;
    xmm0 = xmm5; /* movaps */
    goto loc_00198CE7;

loc_00198CDF: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00198CE7; /* jbe: below or equal (unsigned <=) */

loc_00198CE4: ;
    xmm0 = xmm1; /* movaps */

loc_00198CE7: ;
    xmm1 = MEMF(0x64909C); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x130) = xmm0; /* movss */
    if ((xmm2 > xmm1)) goto loc_00198CFF; /* ja: above (unsigned >) */

loc_00198CFC: ;
    xmm1 = xmm2; /* movaps */

loc_00198CFF: ;
    xmm0 = MEMF(ebx + 0x130); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x12C); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(ebx + 0x12C) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_00198EBE; /* jle: less or equal (signed <=) */

loc_00198D27: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ebx + 0x12C) = xmm0; /* movss */
    esi = eax;
    /* nop */

loc_00198D40: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198D45: ;
    xmm0 = xmm0 * MEMF(0x64912C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A2C0); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x260); /* mulss */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198D70: ;
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm7 = MEMF(0x648D20); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x264); /* mulss */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198D9F: ;
    xmm0 = xmm0 * MEMF(0x6498B8); /* mulss */
    xmm0 = xmm0 - MEMF(0x649D04); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x260); /* mulss */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00198DDC: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0x34) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x34))) goto loc_00198EB7; /* jbe: below or equal (unsigned <=) */

loc_00198DF2: ;
    xmm6 = xmm6 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198E11: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    xmm1 = MEMF(0x64A2C4); /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    MEMF(0x6B7A0C) = xmm5; /* movss */
    MEMF(0x6B7A14) = xmm5; /* movss */
    MEMF(0x6B7A1C) = xmm5; /* movss */
    MEMF(0x6B7A24) = xmm5; /* movss */
    eax = MEM32(edi + 0x228);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, eax);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp - 8;
    xmm1 = xmm1 * xmm7; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    eax = esp + 0x34;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_00198EAB: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x10;

loc_00198EB7: ;
    esi--;
    if ((esi != 0)) goto loc_00198D40; /* jne: not equal / not zero */

loc_00198EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00198ED0
 * Original: 0x00198ED0 - 0x00198EDB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198ED0(void)
{

loc_00198ED0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 4;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00198EE0
 * Original: 0x00198EE0 - 0x001992CD (1005 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198EE0: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    MEM16(esi + 0x7C) = MEM16(esi + 0x7C) - LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x7C));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00198FA3; /* jge: greater or equal (signed >=) */

loc_00198F03: ;
    ebx = MEM32(0x84A144);
    eax = eax + 0x32;
    SET_LO8(edx, 0); /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM16(esi + 0x7C) = LO16(eax);
    if (TEST_S(ebx, ebx)) goto loc_001992C6; /* jl: less (signed <) */

loc_00198F1C: ;
    edi = MEM32(0x8470DC);
    xmm3 = MEMF(0x649928); /* movss */
    /* nop */

loc_00198F30: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00198FA3; /* jne: not equal / not zero */

loc_00198F34: ;
    eax = ZX8(MEM8(ecx + 0x7F9FF8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm2 = MEMF(eax + edi + 0x338); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x3C); /* subss */
    xmm1 = MEMF(eax + edi + 0x334); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x38); /* subss */
    xmm0 = MEMF(eax + edi + 0x330); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x34); /* subss */
    eax = eax + edi + 0x330;
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_00198F96; /* jbe: below or equal (unsigned <=) */

loc_00198F94: ;
    SET_LO8(edx, 1);

loc_00198F96: ;
    ecx++;
    if (CMP_LE(ecx, ebx)) goto loc_00198F30; /* jle: less or equal (signed <=) */

loc_00198F9B: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001992C6; /* je: equal / zero */

loc_00198FA3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00198FA8: ;
    xmm0 = xmm0 * MEMF(esi + 0x58); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x54); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x80); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x80) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001992C6; /* jbe: below or equal (unsigned <=) */

loc_00198FD7: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEM32(esp + 0x20) = 1;
    MEM16(esp + 0x1E) = 5;
    MEM16(esp + 0x52) = 0x10;
    MEM16(esp + 0x54) = 0xF;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0x48;
    MEM8(esp + 0x4C) = 3;
    MEM8(esp + 0x4D) = 0xFF;
    goto loc_00199035;

loc_00199032: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_00199035: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019903A: ;
    ecx = MEM32(esi + 0x78);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(esi + 0x74));
    MEM8(esp + 0x25) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019904D: ;
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x34); /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x3C); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019908E: ;
    xmm0 = xmm0 * MEMF(esi + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    SET_LO16(edi, MEM16(esi + 0x2E));
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001990A7: ;
    edx = SX16(LO16(edi));
    ecx = edx + edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(esi + 0x2C));
    SET_LO16(ebx, LO16(ebx) - LO16(edx));
    ebx = ebx + edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001990C1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x30));
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001990D6: ;
    xmm0 = xmm0 * MEMF(esi + 0x50); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x4C); /* addss */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_001990F9; /* je: equal / zero */

loc_001990E9: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    edi = 0x40;
    edx = edx & 0x3F;
    edi = edi - edx;
    goto loc_00199102;

loc_001990F9: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    ecx = ecx & 0x3F;
    edi = ecx;

loc_00199102: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00199118; /* je: equal / zero */

loc_00199106: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_00199118; /* je: equal / zero */

loc_0019910A: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_00199121;

loc_00199118: ;
    xmm4 = MEMF(edi * 4 + 0x743090); /* movss */

loc_00199121: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00199139; /* je: equal / zero */

loc_0019912D: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_0019913E;

loc_00199139: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_0019913E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00199154; /* je: equal / zero */

loc_00199142: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_00199154; /* je: equal / zero */

loc_00199146: ;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0019915D;

loc_00199154: ;
    xmm3 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0019915D: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0019917A; /* je: equal / zero */

loc_0019916A: ;
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(eax));
    ecx = 0x40;
    ebx = ebx & 0x3F;
    ecx = ecx - ebx;
    goto loc_00199181;

loc_0019917A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    ecx = ecx & 0x3F;

loc_00199181: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00199198; /* je: equal / zero */

loc_00199185: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00199198; /* je: equal / zero */

loc_0019918A: ;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_001991A1;

loc_00199198: ;
    xmm1 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_001991A1: ;
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001991B8; /* je: equal / zero */

loc_001991AC: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_001991BD;

loc_001991B8: ;
    eax = eax & 0x3F;
    edx = eax;

loc_001991BD: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001991D4; /* je: equal / zero */

loc_001991C1: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001991D4; /* je: equal / zero */

loc_001991C6: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_001991DD;

loc_001991D4: ;
    xmm2 = MEMF(edx * 4 + 0x743090); /* movss */

loc_001991DD: ;
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019920F: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x68); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00199224: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x66);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, MEM8(esi + 0x64));
    MEM8(esp + 0x4E) = 0xFF;
    MEM8(esp + 0x4F) = 0xFF;
    MEM8(esp + 0x50) = 0xFF;
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    MEM8(esp + 0x51) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00199249: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x72);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esi + 0x8C));
    SET_LO8(eax, LO8(eax) & 1);
    ecx = esp + 0x30;
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x70));
    MEM16(esp + 0x1C) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xA;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_00199290: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_001992A0; /* je: equal / zero */

loc_00199297: ;
    edx = MEM32(eax + 0x144);
    MEM32(edx + 0x34) = ebp;

loc_001992A0: ;
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x80) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00199032; /* ja: above (unsigned >) */

loc_001992C5: ;
    POP32(esp, ebp);

loc_001992C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_001992D0
 * Original: 0x001992D0 - 0x00199392 (194 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001992D0(void)
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

loc_001992D0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ebx = MEM32(esi + 0x144);
    xmm0 = MEMF(ebx + 0x34); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    eax = eax + eax * 4;
    /* comiss xmm0, MEMF(edi + eax * 4 + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + eax * 4 + 4))) goto loc_00199386; /* jbe: below or equal (unsigned <=) */

loc_001992FD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00199302: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMD(0x64A2B8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00199375; /* jbe: below or equal (unsigned <=) */

loc_00199318: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ecx = eax + eax * 4;
    xmm0 = MEMF(edi + ecx * 4); /* movss */
    eax = edi + ecx * 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x34); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    SET_LO16(eax, ZX8(MEM8(ebx + 0x21)));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00199366: ;
    esi = esp + 0x18;
    edi = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00144690(); /* call 0x00144690 */

loc_00199372: ;
    esp = esp + 0x10;

loc_00199375: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEM8(ebx + 0x2C) = 4;
    MEMF(ebx + 0x34) = xmm0; /* movss */

loc_00199386: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
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
 * sub_001993A0
 * Original: 0x001993A0 - 0x001994F0 (336 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001993A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001993A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(eax + 0x10));
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x13);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = (uint32_t)((int32_t)ebx >> 4);
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001994D9; /* jle: less or equal (signed <=) */

loc_001993C3: ;
    eax = MEM32(esp + 0x24);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x6490AC); /* movss */
    eax = eax + 4;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    eax = eax + 0xD;
    PUSH32(esp, esi);

loc_001993E2: ;
    edx = MEM32(esp + 0x28);
    xmm0 = MEMF(edx + edi * 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00199498; /* jbe: below or equal (unsigned <=) */

loc_001993F4: ;
    edx = MEM32(esp + 0x24);
    edx = ZX8(MEM8(edi + edx));
    edx = edx - ebx;
    edx = edx & 0xFF;
    if (CMP_LE(edx, 0x40)) goto loc_0019944A; /* jle: less or equal (signed <=) */

loc_00199409: ;
    if (CMP_LE(edx, 0x80)) goto loc_00199437; /* jle: less or equal (signed <=) */

loc_00199411: ;
    if (CMP_LE(edx, 0xC0)) goto loc_00199429; /* jle: less or equal (signed <=) */

loc_00199419: ;
    edx = edx << 2;
    esi = 0x743490;
    esi = esi - edx;
    xmm0 = MEMF(esi); /* movss */
    goto loc_00199453;

loc_00199429: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_00199453;

loc_00199437: ;
    edx = edx << 2;
    esi = 0x743290;
    esi = esi - edx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    goto loc_00199453;

loc_0019944A: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_00199453: ;
    edx = MEM32(esp + 0x28);
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(edx + edi * 4); /* mulss */
    edx = ZX8(MEM8(ecx + 1));
    xmm0 = xmm0 * xmm2; /* mulss */
    esi = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(ecx));
    ebp = (int32_t)xmm3; /* cvttss2si */
    MEM8(eax + -1) = LO8(edx);
    edx = ZX8(MEM8(ecx + 3));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 2));
    MEM8(eax) = LO8(edx);
    edx = ZX8(MEM8(ecx + 5));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 4));
    goto loc_001994A8;

loc_00199498: ;
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + -1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 3));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 5));
    ebp = 0; /* xor self */

loc_001994A8: ;
    MEM8(eax + 1) = LO8(edx);
    edx = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    edx = edx + 0x1C;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(eax + -9) = xmm0; /* movss */
    edi++;
    eax = eax + 0x1C;
    if (CMP_L(edi, edx)) goto loc_001993E2; /* jl: less (signed <) */

loc_001994D3: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001994D9: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(eax + 0x12));
    SET_LO16(ecx, LO16(ecx) + MEM16(eax + 0x10));
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = ecx & 0xFFF;
    MEM16(eax + 0x10) = LO16(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001994F0
 * Original: 0x001994F0 - 0x00199607 (279 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001994F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001994F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ZX16(MEM16(ebx + 0x10));
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x13);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx >> 4);
    ecx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001995F1; /* jle: less or equal (signed <=) */

loc_00199512: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = eax + 4;
    edi = edi - eax;

loc_00199520: ;
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(eax + ecx * 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001995D4; /* jbe: below or equal (unsigned <=) */

loc_00199532: ;
    eax = MEM32(esp + 0x1C);
    eax = ZX8(MEM8(ecx + eax));
    eax = eax - edx;
    eax = eax & 0xFF;
    if (CMP_LE(eax, 0x40)) goto loc_001995B8; /* jle: less or equal (signed <=) */

loc_00199546: ;
    if (CMP_LE(eax, 0x80)) goto loc_00199594; /* jle: less or equal (signed <=) */

loc_0019954D: ;
    if (CMP_LE(eax, 0xC0)) goto loc_00199575; /* jle: less or equal (signed <=) */

loc_00199554: ;
    eax = eax << 2;
    ebx = 0x743490;
    ebx = ebx - eax;
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(eax + ecx * 4); /* mulss */
    ebx = MEM32(esp + 0x18);
    eax = (int32_t)xmm0; /* cvttss2si */
    goto loc_001995D6;

loc_00199575: ;
    ebx = MEM32(esp + 0x18);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 * MEMF(eax + ecx * 4); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    goto loc_001995D6;

loc_00199594: ;
    eax = eax << 2;
    ebx = 0x743290;
    ebx = ebx - eax;
    eax = MEM32(esp + 0x20);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    xmm0 = xmm0 * MEMF(eax + ecx * 4); /* mulss */
    ebx = MEM32(esp + 0x18);
    eax = (int32_t)xmm0; /* cvttss2si */
    goto loc_001995D6;

loc_001995B8: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 * MEMF(eax + ecx * 4); /* mulss */
    ebx = MEM32(esp + 0x18);
    eax = (int32_t)xmm0; /* cvttss2si */
    goto loc_001995D6;

loc_001995D4: ;
    eax = 0; /* xor self */

loc_001995D6: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edi + esi); /* addss */
    MEMF(esi) = xmm0; /* movss */
    ecx++;
    esi = esi + 0x1C;
    if (CMP_L(ecx, ebp)) goto loc_00199520; /* jl: less (signed <) */

loc_001995EF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001995F1: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebx + 0x12));
    SET_LO16(ecx, LO16(ecx) + MEM16(ebx + 0x10));
    POP32(esp, ebp);
    ecx = ecx & 0xFFF;
    MEM16(ebx + 0x10) = LO16(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00199610
 * Original: 0x00199610 - 0x0019973B (299 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199610: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(ecx + 0x10));
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x13);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = (uint32_t)((int32_t)ebx >> 4);
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00199725; /* jle: less or equal (signed <=) */

loc_00199633: ;
    ecx = MEM32(esp + 0x20);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x6490AC); /* movss */
    ecx = ecx + 4;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ecx = ecx + 0xD;
    PUSH32(esp, esi);

loc_00199652: ;
    edx = MEM32(esp + 0x24);
    edx = ZX8(MEM8(edi + edx));
    edx = edx - ebx;
    edx = edx & 0xFF;
    if (CMP_LE(edx, 0x40)) goto loc_001996A8; /* jle: less or equal (signed <=) */

loc_00199667: ;
    if (CMP_LE(edx, 0x80)) goto loc_00199695; /* jle: less or equal (signed <=) */

loc_0019966F: ;
    if (CMP_LE(edx, 0xC0)) goto loc_00199687; /* jle: less or equal (signed <=) */

loc_00199677: ;
    edx = edx << 2;
    esi = 0x743490;
    esi = esi - edx;
    xmm0 = MEMF(esi); /* movss */
    goto loc_001996B1;

loc_00199687: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_001996B1;

loc_00199695: ;
    edx = edx << 2;
    esi = 0x743290;
    esi = esi - edx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    goto loc_001996B1;

loc_001996A8: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_001996B1: ;
    edx = MEM32(esp + 0x20);
    xmm3 = MEMF(edx + 4); /* movss */
    edx = ZX8(MEM8(eax + 1));
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    esi = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(eax));
    ebp = (int32_t)xmm3; /* cvttss2si */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    ecx = ecx + 0x1C;
    MEM8(ecx + -29) = LO8(edx);
    edx = ZX8(MEM8(eax + 3));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(eax + 2));
    MEM8(ecx + -28) = LO8(edx);
    edx = ZX8(MEM8(eax + 5));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    SET_LO8(edx, LO8(edx) + MEM8(eax + 4));
    edi++;
    MEM8(ecx + -27) = LO8(edx);
    edx = MEM32(esp + 0x10);
    xmm0 = xmm0 + MEMF(edx); /* addss */
    edx = edx + 0x1C;
    MEM32(esp + 0x10) = edx;
    (void)0; /* cmp edi, MEM32(esp + 0x1C) - flags set for next jcc */
    MEMF(ecx + -37) = xmm0; /* movss */
    if (CMP_L(edi, MEM32(esp + 0x1C))) goto loc_00199652; /* jl: less (signed <) */

loc_0019971F: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00199725: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ecx + 0x12));
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10));
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = eax & 0xFFF;
    MEM16(ecx + 0x10) = LO16(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00199740
 * Original: 0x00199740 - 0x0019980D (205 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199740: ;
    edx = ZX16(MEM16(edi + 0x10));
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x13);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    edx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001997F8; /* jle: less or equal (signed <=) */

loc_0019975D: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    esi = eax + 4;
    ebp = ebp - eax;
    goto loc_00199770;

    /* nop */

loc_00199770: ;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edx + eax));
    eax = eax - ecx;
    eax = eax & 0xFF;
    if (CMP_LE(eax, 0x40)) goto loc_001997C3; /* jle: less or equal (signed <=) */

loc_00199784: ;
    if (CMP_LE(eax, 0x80)) goto loc_001997B0; /* jle: less or equal (signed <=) */

loc_0019978B: ;
    if (CMP_LE(eax, 0xC0)) goto loc_001997A2; /* jle: less or equal (signed <=) */

loc_00199792: ;
    eax = eax << 2;
    ebx = 0x743490;
    ebx = ebx - eax;
    xmm0 = MEMF(ebx); /* movss */
    goto loc_001997CC;

loc_001997A2: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    goto loc_001997CC;

loc_001997B0: ;
    eax = eax << 2;
    ebx = 0x743290;
    ebx = ebx - eax;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    goto loc_001997CC;

loc_001997C3: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_001997CC: ;
    xmm2 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + ebp); /* addss */
    eax = MEM32(esp + 0x10);
    MEMF(esi) = xmm0; /* movss */
    edx++;
    esi = esi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_00199770; /* jl: less (signed <) */

loc_001997F6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001997F8: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x12));
    SET_LO16(ecx, LO16(ecx) + MEM16(edi + 0x10));
    POP32(esp, esi);
    ecx = ecx & 0xFFF;
    MEM16(edi + 0x10) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00199810
 * Original: 0x00199810 - 0x00199BA4 (916 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00199810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    eax = ZX8(MEM8(0x7752EC));
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0019995B; /* jle: less or equal (signed <=) */

loc_00199831: ;
    edx = MEM32(ecx * 4 + 0x7752F0);
    SET_LO8(ecx, MEM8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00199943; /* je: equal / zero */

loc_00199842: ;
    edi = MEM32(0x76FD10);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00199943; /* jle: less or equal (signed <=) */

loc_00199852: ;
    ebx = MEM32(0x8471B8);
    eax = ebx + 0xC6;
    edi = edi;

loc_00199860: ;
    if (CMP_EQ(MEM8(eax), LO8(ecx))) goto loc_00199873; /* je: equal / zero */

loc_00199864: ;
    esi++;
    eax = eax + 0x150;
    if (CMP_L(esi, edi)) goto loc_00199860; /* jl: less (signed <) */

loc_0019986E: ;
    goto loc_00199943;

loc_00199873: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x150);
    esi = esi + ebx;
    if (TEST_Z(esi, esi)) goto loc_00199943; /* je: equal / zero */

loc_00199883: ;
    if (TEST_Z(MEM8(esi + 0xC3), 0xF)) goto loc_00199943; /* je: equal / zero */

loc_00199890: ;
    SET_LO8(eax, MEM8(edx + 2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ebx, MEM8(0x7FA230));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001998A2; /* jne: not equal / not zero */

loc_0019989D: ;
    edi = MEM32(esi + 0x78);
    goto loc_001998A9;

loc_001998A2: ;
    eax = SX8(LO8(ebx));
    edi = MEM32(esi + eax * 4 + 0x70);

loc_001998A9: ;
    SET_LO8(ecx, MEM8(edx + 1));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 1)) goto loc_001998FF; /* jne: not equal / not zero */

loc_001998B4: ;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    eax = MEM32(edx + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001998E0; /* je: equal / zero */

loc_001998BD: ;
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edx + 0x18;
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0x1A));
    eax = SX8(LO8(ebx));
    PUSH32(esp, edx);
    edx = MEM32(esi + eax * 4 + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001993A0(); /* call 0x001993A0 */

loc_001998DB: ;
    esp = esp + 0x18;
    goto loc_00199943;

loc_001998E0: ;
    ecx = ZX16(MEM16(esi + 0x1A));
    PUSH32(esp, eax);
    eax = edx + 0x18;
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = SX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edx * 4 + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00199610(); /* call 0x00199610 */

loc_001998FA: ;
    esp = esp + 0x14;
    goto loc_00199943;

loc_001998FF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00199943; /* jne: not equal / not zero */

loc_00199903: ;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), 4)) goto loc_0019992B; /* je: equal / zero */

loc_0019990C: ;
    eax = MEM32(edx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0x1A));
    eax = SX8(LO8(ebx));
    eax = MEM32(esi + eax * 4 + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001994F0(); /* call 0x001994F0 */

loc_00199926: ;
    esp = esp + 0x14;
    goto loc_00199943;

loc_0019992B: ;
    edi = edx + 4;
    edx = ZX16(MEM16(esi + 0x1A));
    eax = SX8(LO8(ebx));
    eax = MEM32(esi + eax * 4 + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00199740(); /* call 0x00199740 */

loc_00199940: ;
    esp = esp + 0xC;

loc_00199943: ;
    ecx = MEM32(esp + 0x10);
    eax = ZX8(MEM8(0x7752EC));
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00199831; /* jl: less (signed <) */

loc_0019995B: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00199B9D; /* jle: less or equal (signed <=) */

loc_00199969: ;
    /* nop */

loc_00199970: ;
    ebx = MEM32(ecx * 4 + 0x7752F0);
    SET_LO8(edx, MEM8(ebx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00199B85; /* je: equal / zero */

loc_00199981: ;
    ecx = MEM32(0x76FD10);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00199B85; /* jle: less or equal (signed <=) */

loc_00199991: ;
    edi = MEM32(0x8471B8);
    eax = edi + 0xC6;
    /* nop */

loc_001999A0: ;
    if (CMP_EQ(MEM8(eax), LO8(edx))) goto loc_001999B3; /* je: equal / zero */

loc_001999A4: ;
    esi++;
    eax = eax + 0x150;
    if (CMP_L(esi, ecx)) goto loc_001999A0; /* jl: less (signed <) */

loc_001999AE: ;
    goto loc_00199B85;

loc_001999B3: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x150);
    esi = esi + edi;
    if (TEST_Z(esi, esi)) goto loc_00199B85; /* je: equal / zero */

loc_001999C3: ;
    if (TEST_Z(MEM8(esi + 0xC3), 0xF)) goto loc_00199B85; /* je: equal / zero */

loc_001999D0: ;
    SET_LO8(eax, MEM8(ebx + 2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00199B85; /* jne: not equal / not zero */

loc_001999DB: ;
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_001999F0: ;
    xmm1 = MEMF(esi + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_00199A02: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_00199A14: ;
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_00199A2E: ;
    xmm1 = MEMF(esi + 0x80); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_00199A43: ;
    xmm1 = MEMF(esi + 0x84); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199AC7; /* jp: parity */

loc_00199A54: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x1A), LO16(edi))) goto loc_00199B85; /* jbe: below or equal (unsigned <=) */

loc_00199A60: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = esi + ecx * 4 + 0x70;
    eax = 0; /* xor self */
    /* nop */

loc_00199A70: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    edx = MEM32(esi + 0x78);
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + edx); /* addss */
    edx = MEM32(ecx);
    MEMF(eax + edx) = xmm0; /* movss */
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = MEM32(ecx);
    edx = eax + edx + 4;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(edx) = xmm0; /* movss */
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edx = MEM32(esi + 0x78);
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + edx + 8); /* addss */
    edx = MEM32(ecx);
    MEMF(eax + edx + 8) = xmm0; /* movss */
    edx = ZX16(MEM16(esi + 0x1A));
    edi++;
    eax = eax + 0x1C;
    if (CMP_L(edi, edx)) goto loc_00199A70; /* jl: less (signed <) */

loc_00199AC2: ;
    goto loc_00199B85;

loc_00199AC7: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_00199AD3: ;
    edi = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp MEM16(esi + 0x1A), LO16(edi) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(MEM16(esi + 0x1A), LO16(edi))) goto loc_00199B85; /* jbe: below or equal (unsigned <=) */

loc_00199AE6: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ebx = esi + ecx * 4 + 0x70;

loc_00199AF1: ;
    edx = MEM32(esi + 0x78);
    xmm0 = MEMF(edi + edx); /* movss */
    ecx = MEM32(ebx);
    eax = edi + edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi + ecx + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00199B2F: ;
    edx = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    ecx = MEM32(ebx);
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + ecx) = xmm0; /* movss */
    ecx = MEM32(ebx);
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + ecx + 4) = xmm0; /* movss */
    ecx = MEM32(ebx);
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    MEMF(edi + ecx + 8) = xmm0; /* movss */
    edx = ZX16(MEM16(esi + 0x1A));
    eax++;
    edi = edi + 0x1C;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_00199AF1; /* jl: less (signed <) */

loc_00199B85: ;
    ecx = MEM32(esp + 0x10);
    eax = ZX8(MEM8(0x7752EC));
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00199970; /* jl: less (signed <) */

loc_00199B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00199BB0
 * Original: 0x00199BB0 - 0x0019A1BE (1550 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199BB0: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp - 0xF8;
    (void)0; /* cmp LO8(eax), 9 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x100);
    if (CMP_AE(LO8(eax), 9)) goto loc_0019A1B6; /* jae: above or equal (unsigned >=) */

loc_00199BCA: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_A(eax, 8)) goto loc_00199C15; /* ja: above (unsigned >) */

loc_00199BD6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19A1C0); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00199BDDu) goto loc_00199BDD;
    if (_jt == 0x00199BE4u) goto loc_00199BE4;
    if (_jt == 0x00199BEBu) goto loc_00199BEB;
    if (_jt == 0x00199BF2u) goto loc_00199BF2;
    if (_jt == 0x00199BF9u) goto loc_00199BF9;
    if (_jt == 0x00199C00u) goto loc_00199C00;
    if (_jt == 0x00199C07u) goto loc_00199C07;
    if (_jt == 0x00199C0Eu) goto loc_00199C0E;
    if (_jt == 0x00199C15u) goto loc_00199C15;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00199BDD: ;
    ebp = 0xC;
    goto loc_00199C17;

loc_00199BE4: ;
    ebp = 0x57;
    goto loc_00199C17;

loc_00199BEB: ;
    ebp = 0x58;
    goto loc_00199C17;

loc_00199BF2: ;
    ebp = 0x34;
    goto loc_00199C17;

loc_00199BF9: ;
    ebp = 0x4D;
    goto loc_00199C17;

loc_00199C00: ;
    ebp = 0xFC;
    goto loc_00199C17;

loc_00199C07: ;
    ebp = 0x10E;
    goto loc_00199C17;

loc_00199C0E: ;
    ebp = 0x10F;
    goto loc_00199C17;

loc_00199C15: ;
    ebp = 0; /* xor self */

loc_00199C17: ;
    (void)0; /* cmp MEM32(esp + 0x110), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esp + 0x110), ebx)) goto loc_00199CB5; /* jne: not equal / not zero */

loc_00199C25: ;
    eax = esp + 0x24;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x10C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x110);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x134);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_00199C8F: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00199CAA; /* je: equal / zero */

loc_00199C96: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0x12) = 1;
    if (CMP_GE(eax, ebx)) goto loc_00199CDC; /* jge: greater or equal (signed >=) */

loc_00199CA3: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00199CF8;

loc_00199CAA: ;
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x13) = 1;
    goto loc_00199CF8;

loc_00199CB5: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM8(esp + 0x12) = 1;
    edi = 1;
    MEM8(esp + 0x13) = 1;
    goto loc_00199CF8;

loc_00199CDC: ;
    edx = MEM32(0x8471B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    SET_LO8(eax, MEM8(eax + edx + 0xC3));
    SET_LO8(eax, LO8(eax) & 0x80);
    (void)0; /* cmp LO8(eax), 0x80 - flags set for next jcc */
    MEM8(esp + 0x13) = (CMP_EQ(LO8(eax), 0x80)) ? 1 : 0; /* sete */

loc_00199CF8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00199CFD: ;
    SET_LO8(eax, MEM8(esp + 0x118));
    if (CMP_EQ(LO8(eax), 1)) goto loc_00199D14; /* je: equal / zero */

loc_00199D08: ;
    if (CMP_EQ(LO8(eax), 6)) goto loc_00199D14; /* je: equal / zero */

loc_00199D0C: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_00199D21; /* je: equal / zero */

loc_00199D10: ;
    if (CMP_NE(LO8(eax), 8)) goto loc_00199D50; /* jne: not equal / not zero */

loc_00199D14: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_00199D21; /* je: equal / zero */

loc_00199D18: ;
    (void)0; /* cmp LO8(eax), 8 - flags set for next jcc */
    ecx = 0x106;
    if (CMP_NE(LO8(eax), 8)) goto loc_00199D26; /* jne: not equal / not zero */

loc_00199D21: ;
    ecx = 0xCE7;

loc_00199D26: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00199D50: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00199D55: ;
    xmm1 = MEMF(0x773770); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00199F31; /* jbe: below or equal (unsigned <=) */

loc_00199D66: ;
    ecx = ZX8(MEM8(0x773774));
    xmm0 = MEMF(0x64AF34); /* movss */
    eax = 5;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    edx = 4;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF30); /* movss */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esi;
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x11C);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    eax = 0xA;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    MEM16(esp + 0x68) = LO16(ebx);
    MEM16(esp + 0x6A) = 0xFF;
    MEM16(esp + 0x6C) = 0xFFC3;
    MEM16(esp + 0x6E) = 0x50;
    MEM32(esp + 0x70) = 3;
    MEM32(esp + 0x74) = edi;
    MEM16(esp + 0x78) = 0xC;
    MEM16(esp + 0x7A) = LO16(eax);
    MEM16(esp + 0x7C) = LO16(edi);
    MEM8(esp + 0x7E) = 4;
    MEM8(esp + 0x7F) = 2;
    MEM8(esp + 0x80) = 3;
    MEM8(esp + 0x83) = 0xFF;
    MEM8(esp + 0x82) = 0xFF;
    MEM8(esp + 0x81) = 0xFF;
    MEM8(esp + 0x84) = 0xFF;
    MEM8(esp + 0x87) = LO8(ebx);
    MEM8(esp + 0x86) = LO8(ebx);
    MEM8(esp + 0x85) = LO8(ebx);
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x8B) = 0xFF;
    MEM8(esp + 0x8A) = 0xFF;
    MEM8(esp + 0x89) = 0xFF;
    MEM8(esp + 0x8C) = 0xFF;
    MEM8(esp + 0x8F) = LO8(ebx);
    MEM8(esp + 0x8E) = LO8(ebx);
    MEM8(esp + 0x8D) = LO8(ebx);
    MEM8(esp + 0x90) = LO8(ebx);
    MEM8(esp + 0x91) = 0xFF;
    MEM8(esp + 0x92) = LO8(ebx);
    MEM32(esp + 0x94) = 0x205;
    MEM32(esp + 0x98) = 0x63000;
    MEM16(esp + 0x9C) = LO16(eax);
    MEM16(esp + 0x9E) = 0x19;
    MEM16(esp + 0xA0) = LO16(edi);
    MEM8(esp + 0xA2) = LO8(ebx);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEM8(esp + 0xA8) = 0xFF;
    MEM8(esp + 0xA9) = LO8(ebx);
    MEM8(esp + 0xAA) = 0xFF;
    MEM8(esp + 0xAB) = 0xFF;
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_00199F2E: ;
    esp = esp + 8;

loc_00199F31: ;
    if (CMP_EQ(ebp, ebx)) goto loc_0019A18A; /* je: equal / zero */

loc_00199F39: ;
    if (CMP_GE(MEM32(0x84A144), 2)) goto loc_0019A18A; /* jge: greater or equal (signed >=) */

loc_00199F46: ;
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x68) = eax;
    eax = esp + 0x48;
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    edx = esp + 0x48;
    MEM32(esp + 0x70) = ecx;
    PUSH32(esp, 0); sub_001118D0(); /* call 0x001118D0 */

loc_00199F6F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x114);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648E58); /* movss */
    esp = esp + 4;
    ecx = esp + 0x30;
    edi = esp + 0x14;
    esi = esp + 0x24;
    MEMF(esp + 0x4C) = xmm5; /* movss */
    MEM32(esp + 0xA4) = ebp;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM32(esp + 0xAC) = ebx;
    MEM8(esp + 0xB0) = 0xFF;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13EC40;
    MEM8(esp + 0xD8) = LO8(ebx);
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0xC;
    MEM16(esp + 0xE4) = 0x15;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_0019A04C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019A18A; /* je: equal / zero */

loc_0019A054: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A059: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A06E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm1; /* subss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    edx = edx + 0x1E;
    MEM32(esp + 0xA0) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A0D0: ;
    xmm5 = MEMF(0x64AF2C); /* movss */
    xmm6 = MEMF(0x64AF28); /* movss */
    xmm7 = MEMF(0x648D54); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A102: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A11C: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A136: ;
    edx = MEM32(esp + 0x11C);
    xmm0 = xmm0 * MEMF(0x64AF24); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF20); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xBC) = 0x39E8;
    MEM32(esp + 0xD4) = 0x157100;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0019A187: ;
    esp = esp + 0x20;

loc_0019A18A: ;
    (void)0; /* cmp MEM8(esp + 0x12), LO8(ebx) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM8(esp + 0x12), LO8(ebx))) goto loc_0019A1B4; /* je: equal / zero */

loc_0019A191: ;
    if (CMP_EQ(MEM8(esp + 0xF), LO8(ebx))) goto loc_0019A1B4; /* je: equal / zero */

loc_0019A197: ;
    edx = MEM32(esp + 0x110);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00185C60(); /* call 0x00185C60 */

loc_0019A1B1: ;
    esp = esp + 0x10;

loc_0019A1B4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0019A1B6: ;
    POP32(esp, esi);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A1F0
 * Original: 0x0019A1F0 - 0x0019A258 (104 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A1F0(void)
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

loc_0019A1F0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) { sub_0019A258(); return; } /* je: equal / zero */

loc_0019A23E: ;
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019A24C: ;
    SET_LO16(ecx, MEM16(esi + 0x170));
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    g_seh_ebp = ebp; sub_0019A261(); return; /* tail jmp 0x0019A261 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019A290
 * Original: 0x0019A290 - 0x0019A2FF (111 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A290(void)
{
    float xmm0;

loc_0019A290: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A2A1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 6) = 0;
    edx = edx + 4;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A2D3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = edx + 0xC350;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0019A2FB: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A300
 * Original: 0x0019A300 - 0x0019A36C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A300(void)
{
    float xmm0;

loc_0019A300: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A311: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 6) = 0;
    edx = edx + 0x23;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A340: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2711;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = edx + 0x5B8D80;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0019A368: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A370
 * Original: 0x0019A370 - 0x0019A3E8 (120 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A370(void)
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

loc_0019A370: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) { sub_0019A3E8(); return; } /* je: equal / zero */

loc_0019A37C: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0019A388: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019A3A0: ;
    xmm1 = MEMF(0x6492BC); /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    ebp = 0xC000;
    ebp = ebp - eax;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 8); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    ebp = ebp | 1;
    MEMF(esp + 0x18) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_0019A406(); return; /* tail jmp 0x0019A406 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019A500
 * Original: 0x0019A500 - 0x0019A53A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A500(void)
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

loc_0019A500: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_0019A53A(); return; } /* je: equal / zero */

loc_0019A505: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0019A511: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019A529: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, LO16(eax));
    eax = 0xC000;
    eax = eax - ecx;
    eax = eax | 1;
    g_seh_ebp = ebp; sub_0019A53C(); return; /* tail jmp 0x0019A53C */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019A570
 * Original: 0x0019A570 - 0x0019A7C5 (597 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A570: ;
    esp = esp - 0xEC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xF8);
    if (CMP_EQ(eax, ebx)) goto loc_0019A5B9; /* je: equal / zero */

loc_0019A585: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_0019A5B6: ;
    esp = esp + 0x20;

loc_0019A5B9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A5BE: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * MEMF(0x6491B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A080); /* addss */
    xmm6 = MEMF(0x648D2C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    xmm2 = MEMF(0x648E58); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x74) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A680: ;
    xmm7 = MEMF(0x64AF1C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF18); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A6A9: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF18); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019A6C7: ;
    xmm0 = xmm0 * MEMF(0x64994C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF14); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x88) = 0x29E9;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019A6F4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0xFC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x94) = 0x25;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM8(esp + 0xA0) = 0xFF;
    MEM32(esp + 0xA4) = 0x13EDB0;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = 0x13F5B0;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM8(esp + 0xC8) = 1;
    MEM32(esp + 0xCC) = ebp;
    MEM16(esp + 0xD2) = 6;
    MEM16(esp + 0xD4) = 0x2A;
    PUSH32(esp, eax);
    edx = edx + 0x3C;
    MEM32(esp + 0x94) = edx;
    SET_LO8(edx, MEM8(ebp + 0x10B));
    MEM8(esp + 0xD4) = LO8(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0019A7B9: ;
    esp = esp + 0x20;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A7D0
 * Original: 0x0019A7D0 - 0x0019A7F8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A7D0(void)
{

loc_0019A7D0: ;
    esp = esp - 8;
    PUSH32(esp, 0x3C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0019A7F4: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A800
 * Original: 0x0019A800 - 0x0019A8E0 (224 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A800(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019A800: ;
    esp = esp - 0x20;
    (void)0; /* cmp LO8(ecx), 6 - flags set for next jcc */
    SET_LO8(edx, MEM8(eax + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = eax;
    MEM8(esp + 4) = LO8(edx);
    MEM8(esp + 8) = LO8(ecx);
    MEM16(esp + 6) = 0xFFFF;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x10) = 0;
    if (CMP_NE(LO8(ecx), 6)) goto loc_0019A835; /* jne: not equal / not zero */

loc_0019A82E: ;
    MEM16(esp + 6) = 0x82;

loc_0019A835: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_0019A86F; /* je: equal / zero */

loc_0019A83F: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_0019A86F; /* je: equal / zero */

loc_0019A84D: ;
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA);
    PUSH32(esp, edx);
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x599940), _icall_esp); /* indirect call */
    }

loc_0019A862: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esp = esp + 0xC;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esp + 0x10) = LO8(eax);

loc_0019A86F: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0019A88F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0019A8DC; /* je: equal / zero */

loc_0019A896: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x41;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x35;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, esi);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019A8DC: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0019AD50
 * Original: 0x0019AD50 - 0x0019AD82 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AD50(void)
{
    float xmm0;

loc_0019AD50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi + 0x170;
    PUSH32(esp, edi);
    eax = edx + 2;
    PUSH32(esp, eax);
    edi = edx + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00106080(); /* call 0x00106080 */

loc_0019AD6A: ;
    xmm0 = MEMF(edx + 0xC); /* movss */
    esp = esp + 4;
    eax = esi + 0x88;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_0019AD7D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019AD90
 * Original: 0x0019AD90 - 0x0019AF70 (480 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AD90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0019AD90: ;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019AD9B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x84A144);
    xmm3 = MEMF(0x648E5C); /* movss */
    xmm2 = MEMF(0x648F38); /* movss */
    eax = 0; /* xor self */
    xmm1 = xmm3; /* movaps */
    edx = edx + 2;
    if (CMP_EQ(ecx, eax)) goto loc_0019ADC8; /* je: equal / zero */

loc_0019ADC5: ;
    xmm1 = xmm2; /* movaps */

loc_0019ADC8: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_0019ADF4; /* jae: above or equal (unsigned >=) */

loc_0019ADE1: ;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    edx = (int32_t)xmm4; /* cvttss2si */

loc_0019ADF4: ;
    xmm0 = MEMF(esi); /* movss */
    MEM32(esp + 4) = edx;
    edx = 4;
    MEM16(esp + 0x40) = LO16(edx);
    MEM8(esp + 0x46) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x78));
    MEM8(esp + 0x4B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x80));
    MEM8(esp + 0x4A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x88));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEM8(esp + 0x49) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x7C));
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    ecx = 0xFF;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM8(esp + 0x4F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x84));
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEM8(esp + 0x4E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x8C));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 8) = eax;
    MEM16(esp + 0x30) = LO16(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x6A) = LO8(eax);
    MEM8(esp + 0x71) = LO8(eax);
    MEM8(esp + 0x4D) = LO8(edx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    PUSH32(esp, ecx);
    eax = esp + 8;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    esi = 1;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEM16(esp + 0x3A) = LO16(ecx);
    MEM16(esp + 0x3C) = 0xFFC4;
    MEM16(esp + 0x3E) = 0x50;
    MEM32(esp + 0x40) = 2;
    MEM32(esp + 0x44) = 2;
    MEM16(esp + 0x4A) = 0xA;
    MEM16(esp + 0x4C) = LO16(esi);
    MEM8(esp + 0x4F) = 2;
    MEM8(esp + 0x50) = 3;
    MEM8(esp + 0x54) = LO8(ecx);
    MEM8(esp + 0x5B) = LO8(ecx);
    MEM8(esp + 0x5A) = LO8(ecx);
    MEM8(esp + 0x59) = LO8(ecx);
    MEM8(esp + 0x5C) = LO8(ecx);
    MEM8(esp + 0x61) = LO8(ecx);
    MEM32(esp + 0x64) = 0x205;
    MEM32(esp + 0x68) = 0x63000;
    MEM16(esp + 0x6C) = 0xA;
    MEM16(esp + 0x6E) = 0x19;
    MEM16(esp + 0x70) = LO16(esi);
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEM8(esp + 0x78) = LO8(edx);
    MEM8(esp + 0x7A) = LO8(edx);
    MEM8(esp + 0x7B) = LO8(edx);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_0019AF68: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0019AF70
 * Original: 0x0019AF70 - 0x0019B255 (741 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019AF70: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0019AFAC; /* je: equal / zero */

loc_0019AF91: ;
    SET_LO8(ecx, MEM8(eax + 0x5DC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019AFAC; /* je: equal / zero */

loc_0019AF9B: ;
    esi = MEM32(esp + 0x44);
    if (CMP_EQ(esi, 0x45)) goto loc_0019AFB0; /* je: equal / zero */

loc_0019AFA4: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0019AFAC: ;
    esi = MEM32(esp + 0x44);

loc_0019AFB0: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x3AE), LO16(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    SET_LO8(eax, (CMP_EQ(MEM16(ebp + 0x3AE), LO16(eax))) ? 1 : 0); /* sete */
    ecx = ebx + ebx * 2;
    ecx = ecx << 4;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 0x743A34);
    (void)0; /* test HI8(eax), HI8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0019AFDE; /* js: sign (negative) */

loc_0019AFD8: ;
    ebx = ebx | 0x40000;

loc_0019AFDE: ;
    eax = MEM32(esp + 0x30);
    ebx = ebx | 0x20000;
    MEM32(esp + 0x40) = ebx;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_00281B00(); /* call 0x00281B00 */

loc_0019AFF6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B11E; /* je: equal / zero */

loc_0019AFFE: ;
    if (TEST_NZ(edi, edi)) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B006: ;
    SET_LO8(eax, MEM8(ebp + 0x234));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B014: ;
    edi = MEM32(esp + 0x3C);
    if (TEST_Z(edi, edi)) goto loc_0019B11E; /* je: equal / zero */

loc_0019B020: ;
    if (CMP_NE(MEM32(edi + 0xE4), 3)) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B02D: ;
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_0019B032: ;
    if (TEST_Z(eax, eax)) goto loc_0019B041; /* je: equal / zero */

loc_0019B036: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019B1C8; /* je: equal / zero */

loc_0019B041: ;
    if (CMP_NE(MEM8(edi + 0xE2), 0x14)) goto loc_0019B1C8; /* jne: not equal / not zero */

loc_0019B04E: ;
    eax = MEM32(ebp + 0x64);
    ecx = 0; /* xor self */
    if (CMP_NE(eax, 0x2B)) goto loc_0019B05D; /* jne: not equal / not zero */

loc_0019B058: ;
    ecx = 1;

loc_0019B05D: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0019B075; /* je: equal / zero */

loc_0019B067: ;
    SET_LO8(edx, MEM8(eax + 0x8C));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B075: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B07D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F7DF0(); /* call 0x002F7DF0 */

loc_0019B087: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002CE110(); /* call 0x002CE110 */

loc_0019B08E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000B3CF0(); /* call 0x000B3CF0 */

loc_0019B09B: ;
    ecx = MEM32(ebp + 0x568);
    esp = esp + 0x1C;
    if (TEST_Z(ecx, ecx)) goto loc_0019B0BD; /* je: equal / zero */

loc_0019B0A8: ;
    edx = ecx;
    MEM8(edx + 0x2DB) = 1;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x36D) = LO8(eax);

loc_0019B0BD: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x40) = 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B10D; /* je: equal / zero */

loc_0019B0CE: ;
    eax = edi + 0x2C;
    ecx = edi + 0x14;
    edx = ebp;
    PUSH32(esp, 0); sub_002F1D90(); /* call 0x002F1D90 */

loc_0019B0DB: ;
    if (CMP_A(eax, 3)) goto loc_0019B10D; /* ja: above (unsigned >) */

loc_0019B0E0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19B2F0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0019B0E7u) goto loc_0019B0E7;
    if (_jt == 0x0019B0F1u) goto loc_0019B0F1;
    if (_jt == 0x0019B0FBu) goto loc_0019B0FB;
    if (_jt == 0x0019B105u) goto loc_0019B105;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019B0E7: ;
    MEM32(esp + 0x40) = 0x6A;
    goto loc_0019B10D;

loc_0019B0F1: ;
    MEM32(esp + 0x40) = 0x6B;
    goto loc_0019B10D;

loc_0019B0FB: ;
    MEM32(esp + 0x40) = 0x6C;
    goto loc_0019B10D;

loc_0019B105: ;
    MEM32(esp + 0x40) = 0x6D;

loc_0019B10D: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) | 0x100000;
    MEM8(esp + 0x2C) = 1;

loc_0019B11A: ;
    ebx = MEM32(esp + 0x40);

loc_0019B11E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B157; /* je: equal / zero */

loc_0019B127: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019B157; /* jne: not equal / not zero */

loc_0019B12F: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B157; /* je: equal / zero */

loc_0019B139: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_0019B157; /* jne: not equal / not zero */

loc_0019B155: ;
    ebp = eax;

loc_0019B157: ;
    eax = MEM32(ebp + 0x64);
    if (CMP_EQ(eax, 0x2B)) goto loc_0019B193; /* je: equal / zero */

loc_0019B15F: ;
    if (CMP_EQ(eax, 0x2D)) goto loc_0019B193; /* je: equal / zero */

loc_0019B164: ;
    if (CMP_EQ(eax, 0x35)) goto loc_0019B193; /* je: equal / zero */

loc_0019B169: ;
    if (CMP_EQ(eax, 0x3C)) goto loc_0019B193; /* je: equal / zero */

loc_0019B16E: ;
    if (CMP_EQ(eax, 0x3E)) goto loc_0019B193; /* je: equal / zero */

loc_0019B173: ;
    if (CMP_EQ(eax, 0x37)) goto loc_0019B193; /* je: equal / zero */

loc_0019B178: ;
    if (CMP_EQ(eax, 0x36)) goto loc_0019B193; /* je: equal / zero */

loc_0019B17D: ;
    if (CMP_EQ(eax, 0x3B)) goto loc_0019B193; /* je: equal / zero */

loc_0019B182: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0x5B)) goto loc_0019B193; /* je: equal / zero */

loc_0019B18A: ;
    if (CMP_NE(eax, 0x4A)) { sub_0019B255(); return; } /* jne: not equal / not zero */

loc_0019B193: ;
    SET_LO8(eax, MEM8(ebp + 0x6B8));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019B255(); return; } /* jne: not equal / not zero */

loc_0019B1A1: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0); sub_0019AD90(); /* call 0x0019AD90 */

loc_0019B1BC: ;
    edi = MEM32(esp + 0x5C);
    esp = esp + 0x18;
    g_seh_ebp = ebp; sub_0019B275(); return; /* tail jmp 0x0019B275 */

loc_0019B1C8: ;
    if (CMP_NE(MEM8(edi + 0xE2), 0xB)) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B1D5: ;
    if (CMP_NE(esi, 5)) goto loc_0019B11E; /* jne: not equal / not zero */

loc_0019B1DE: ;
    if (CMP_NE(MEM32(ebp + 0x64), 0x35)) goto loc_0019B242; /* jne: not equal / not zero */

loc_0019B1E4: ;
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(ebp + 0x570);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    eax = ebp;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_003944E0(); /* call 0x003944E0 */

loc_0019B20B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B11A; /* je: equal / zero */

loc_0019B213: ;
    edx = MEM32(ebp + 0x570);
    ebx = MEM32(esp + 0x14);
    edi = esp + 0x1C;
    eax = ebp;
    MEM8(edx + 0xE00) = 1;
    PUSH32(esp, 0); sub_001B6150(); /* call 0x001B6150 */

loc_0019B22F: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_0019B11A;

loc_0019B242: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_0019B11E;

}

/**
 * sub_0019B340
 * Original: 0x0019B340 - 0x0019B510 (464 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B340: ;
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(ecx, ecx)) { sub_0019B510(); return; } /* je: equal / zero */

loc_0019B358: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0019B510(); return; } /* je: equal / zero */

loc_0019B366: ;
    if (CMP_EQ(MEM32(ecx + 0x2B8), 2)) goto loc_0019B37C; /* je: equal / zero */

loc_0019B36F: ;
    if (CMP_EQ(MEM32(ecx + 0xBC), 0)) { sub_0019B510(); return; } /* je: equal / zero */

loc_0019B37C: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * MEMF(edi + 8); /* mulss */
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * MEMF(edi + 8); /* mulss */
    xmm3 = MEMF(esi + 4); /* movss */
    xmm3 = xmm3 * MEMF(edi); /* mulss */
    xmm4 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(edi); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * MEMF(edi + 4); /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 8); /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(edx); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(edx + 8); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = MEMF(edx + 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(edx); /* movss */
    edx = MEM32(esp + 0x20);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    if (TEST_NZ(edx, edx)) goto loc_0019B40A; /* jne: not equal / not zero */

loc_0019B406: ;
    edx = MEM32(esp + 0xC);

loc_0019B40A: ;
    xmm6 = MEMF(edx + 8); /* movss */
    xmm5 = MEMF(edx + 4); /* movss */
    xmm6 = xmm6 - MEMF(ecx + 0x230); /* subss */
    xmm2 = MEMF(edx); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x228); /* subss */
    xmm5 = xmm5 - MEMF(ecx + 0x22C); /* subss */
    edx = MEM32(eax + 0x568);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x21C); /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(edx + 0x224); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(edx + 0x220); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x21C); /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x228); /* addss */
    MEMF(ebp) = xmm1; /* movss */
    edx = MEM32(eax + 0x568);
    xmm1 = MEMF(edx + 0x220); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x22C); /* addss */
    MEMF(ebp + 4) = xmm1; /* movss */
    edx = MEM32(eax + 0x568);
    xmm1 = MEMF(edx + 0x224); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x230); /* addss */
    MEMF(ebp + 8) = xmm1; /* movss */
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x21C);
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x220);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 0x568);
    ecx = MEM32(eax + 0x224);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 8) = ecx;
    MEM32(edx) = ebp;
    POP32(esp, ebp);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B530
 * Original: 0x0019B530 - 0x0019B5FA (202 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B530(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0019B530: ;
    esp = esp - 0x38;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(eax); /* movss */
    MEM32(esp + 4) = edx;
    edx = MEM32(0x84A144);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    edx++;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM8(esp + 0x24) = 0xC8;
    MEM8(esp + 0x25) = LO8(ebx);
    MEM8(esp + 0x26) = 1;
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_LE(edx & edx, 0)) goto loc_0019B5F5; /* jle: less or equal (signed <=) */

loc_0019B5B4: ;
    PUSH32(esp, esi);
    goto loc_0019B5C0;

    /* nop */
    edi = edi;

loc_0019B5C0: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    SET_LO8(edx, MEM8(esp + 0x44));
    esi = esp + 8;
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_0019B5D3: ;
    PUSH32(esp, 0xFF);
    esi = esp + 0x24;
    MEM16(esp + 0x24) = LO16(ebx);
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_0019B5E6: ;
    eax = MEM32(0x84A144);
    esp = esp + 4;
    ebx++;
    eax++;
    if (CMP_L(ebx, eax)) goto loc_0019B5C0; /* jl: less (signed <) */

loc_0019B5F4: ;
    POP32(esp, esi);

loc_0019B5F5: ;
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B600
 * Original: 0x0019B600 - 0x0019B6BE (190 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B600(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019B600: ;
    esp = esp - 0x2C;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 4) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019B640: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x3C);
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x11) = 0;
    edx = edx + ecx;
    MEM16(esp + 6) = LO16(edx);
    edx = MEM32(0x84A144);
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_0019B6B9; /* jle: less or equal (signed <=) */

loc_0019B675: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0019B677: ;
    SET_LO8(eax, 1);
    ecx = ebx;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    PUSH32(esp, 0xFF);
    ecx = esp + 0x10;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ecx);
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0019B696: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0019B6AB; /* je: equal / zero */

loc_0019B69D: ;
    edi = eax + 0x44;
    ecx = 7;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0019B6AB: ;
    edx = MEM32(0x84A144);
    ebx++;
    edx++;
    if (CMP_L(ebx, edx)) goto loc_0019B677; /* jl: less (signed <) */

loc_0019B6B7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019B6B9: ;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B6C0
 * Original: 0x0019B6C0 - 0x0019B7DF (287 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B6C0(void)
{
    float xmm0;

loc_0019B6C0: ;
    esp = esp - 0x5C;
    xmm0 = MEMF(0x649500); /* movss */
    edx = MEM32(eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A604); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64A264); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A600); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5FC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    ecx = 0xF;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x649CF8); /* movss */
    PUSH32(esp, esi);
    esi = 5;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5F8); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM16(esp + 0x50) = LO16(ecx);
    MEM16(esp + 0x52) = LO16(ecx);
    ecx = MEM32(esp + 0x64);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    edx = 0xC;
    eax = 0x64;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x3C) = esi;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5F4); /* movss */
    PUSH32(esp, ecx);
    esi = esp + 8;
    MEM16(esp + 8) = 0;
    MEM16(esp + 0xA) = 0xFF;
    MEM16(esp + 0xC) = 0xFFC0;
    MEM16(esp + 0xE) = 0x4A;
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM16(esp + 0x58) = LO16(eax);
    MEM16(esp + 0x5A) = LO16(eax);
    MEM16(esp + 0x5C) = LO16(edx);
    MEM16(esp + 0x5E) = 0x14;
    MEM8(esp + 0x60) = 0;
    PUSH32(esp, 0); sub_000F2EA0(); /* call 0x000F2EA0 */

loc_0019B7D7: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B7E0
 * Original: 0x0019B7E0 - 0x0019B92B (331 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019B7E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0019B924; /* je: equal / zero */

loc_0019B7FC: ;
    SET_LO8(eax, MEM8(ebx + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_0019B924; /* je: equal / zero */

loc_0019B80C: ;
    edx = ZX8(LO8(edx));
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0019B819: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x28) = edx;
    eax = esp + 0x38;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = eax;
    edx = esp + 0x44;
    ecx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    eax = 2;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0019B84F: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    ecx = MEM32(ebp + 0x14);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x48); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esp + 0x54;
    esi = esp + 0x3C;
    edi = esp + 0x48;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_0019B89B: ;
    eax = MEM32(ebx + 0x564);
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0019B924; /* je: equal / zero */

loc_0019B8A8: ;
    eax = MEM32(ebx + 0x298);
    eax = eax & 0x1F;
    if (CMP_EQ(eax, 0xD)) goto loc_0019B8C5; /* je: equal / zero */

loc_0019B8B6: ;
    if (CMP_EQ(eax, 0x12)) goto loc_0019B8C5; /* je: equal / zero */

loc_0019B8BB: ;
    if (CMP_EQ(eax, 2)) goto loc_0019B8C5; /* je: equal / zero */

loc_0019B8C0: ;
    if (CMP_NE(eax, 9)) goto loc_0019B924; /* jne: not equal / not zero */

loc_0019B8C5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019B8CA: ;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_0019B924; /* jne: not equal / not zero */

loc_0019B8CE: ;
    edx = MEM32(0x847024);
    edi = MEM32(edx + 0x40);
    esi = ebx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0019B8DE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019B924; /* je: equal / zero */

loc_0019B8E2: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0019B8FE; /* je: equal / zero */

loc_0019B8EC: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0019B904;

loc_0019B8FE: ;
    eax = MEM32(ebx + 0x580);

loc_0019B904: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0xBD8;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0019B924: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B930
 * Original: 0x0019B930 - 0x0019B9B1 (129 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B930(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0019B930: ;
    eax = MEM32(edi + 0x3C8);
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_0019B9B1(); return; } /* je: equal / zero */

loc_0019B940: ;
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_0019B953; /* je: equal / zero */

loc_0019B94A: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 1)) { sub_0019B9B1(); return; } /* je: equal / zero */

loc_0019B953: ;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_001A88B0(); /* call 0x001A88B0 */

loc_0019B967: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0019B9B1(); return; } /* je: equal / zero */

loc_0019B96E: ;
    eax = MEM32(edi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = eax + 0x128;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    edx = MEM32(edi + 0x568);
    MEM32(edx + 0x1D4) = ebx;
    eax = MEM32(edi + 0x568);
    MEMF(eax + 0xF4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BA60
 * Original: 0x0019BA60 - 0x0019BABB (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0019BA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x50;
    PUSH32(esp, 0x3F4F9DB3);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_0019BA77: ;
    eax = MEM32(esi + 0x3C8);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0019BABB(); return; } /* je: equal / zero */

loc_0019BA84: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 8) = edx;
    edx = ZX8(MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0019BAA0: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0019BAB4: ;
    esp = esp + 0xC;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BB70
 * Original: 0x0019BB70 - 0x0019BCCD (349 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019BB70: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = 0x20;
    /* nop */

loc_0019BB90: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebp), 0)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BB9F: ;
    ecx = MEM32(0x84A5F8);
    esi = ebx + ecx;
    ecx = MEM32(esp + 0x4C);
    if (CMP_EQ(esi, ecx)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BBB4: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BBBF: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 3)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BBCC: ;
    if (TEST_Z(MEM8(esi + 0x200), 0x40)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BBD9: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x23)) goto loc_0019BBEF; /* je: equal / zero */

loc_0019BBE2: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BBEF: ;
    SET_LO8(eax, MEM8(esp + 0x50));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019BC13; /* je: equal / zero */

loc_0019BBF7: ;
    edx = SX8(LO8(eax));
    eax = MEM32(esp + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x59D764), _icall_esp); /* indirect call */
    }

loc_0019BC08: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BC13: ;
    SET_LO16(ecx, MEM16(esi + 0x1DA));
    xmm0 = MEMF(esi + 0x78); /* movss */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1DC));
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    edx = esp + 0x18;
    if (CMP_LE(LO16(eax), LO16(ecx))) eax = ecx; /* cmovle */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1DE);
    PUSH32(esp, edx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    eax = SX16(LO16(eax));
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esp + 0x50;
    PUSH32(esp, 0); sub_00111360(); /* call 0x00111360 */

loc_0019BC8F: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BCAB; /* je: equal / zero */

loc_0019BC96: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(esp + 0x10) = ecx;

loc_0019BCAB: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    ebx = ebx + 0x6D0;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0019BB90; /* jne: not equal / not zero */

loc_0019BCC1: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCD0
 * Original: 0x0019BCD0 - 0x0019BCF8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCD0(void)
{

loc_0019BCD0: ;
    esp = esp - 8;
    PUSH32(esp, 0x48);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0019BCF4: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD00
 * Original: 0x0019BD00 - 0x0019BD71 (113 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019BD00: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEM16(esp + 0xE) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0019BD25: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0019BD6D; /* je: equal / zero */

loc_0019BD2C: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x4E;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x3B;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x50) = ecx;

loc_0019BD6D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD80
 * Original: 0x0019BD80 - 0x0019BDEE (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019BD80: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x48 - flags set for next jcc */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    if (CMP_NE(edx, 0x48)) goto loc_0019BDDF; /* jne: not equal / not zero */

loc_0019BD96: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_0019BDA4; /* je: equal / zero */

loc_0019BD9C: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_0019BDEB; /* jne: not equal / not zero */

loc_0019BDA4: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BDEB; /* jne: not equal / not zero */

loc_0019BDAD: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0019BDB4: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0019BDEB; /* jl: less (signed <) */

loc_0019BDBB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0019BDD1; /* je: equal / zero */

loc_0019BDC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0019BDCB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019BDD1: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0019BDDF: ;
    PUSH32(esp, esi);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0019BDE8: ;
    esp = esp + 4;

loc_0019BDEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BDF0
 * Original: 0x0019BDF0 - 0x0019BE35 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BDF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019BDF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0019BE27; /* je: equal / zero */

loc_0019BDFE: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_0019BE27; /* je: equal / zero */

loc_0019BE07: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ecx + 0x50))) goto loc_0019BE27; /* jne: not equal / not zero */

loc_0019BE12: ;
    edx = MEM32(eax + 0x564);
    if (TEST_Z(edx, edx)) goto loc_0019BE34; /* je: equal / zero */

loc_0019BE1C: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) - LO16(eax);
    esp += 4; return; /* ret */

loc_0019BE27: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ecx + 0x30) = xmm0; /* movss */

loc_0019BE34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BE40
 * Original: 0x0019BE40 - 0x0019C8FE (2750 bytes, 670 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm6;

loc_0019BE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0019C8F7; /* je: equal / zero */

loc_0019BE5A: ;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BE7F; /* je: equal / zero */

loc_0019BE66: ;
    eax = MEM32(esi + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_0019BE7F; /* jne: not equal / not zero */

loc_0019BE70: ;
    if (CMP_NE(MEM8(ebp + 0x24), 1)) goto loc_0019BE7F; /* jne: not equal / not zero */

loc_0019BE76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002613C0(); /* call 0x002613C0 */

loc_0019BE7C: ;
    esp = esp + 4;

loc_0019BE7F: ;
    ebx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ebx); /* movss */
    xmm6 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    edx = esi;
    eax = esp + 0x80;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0019BEBC: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x6C;
    MEM8(esp + 0x27) = 0;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0019BEDF: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF32; /* je: equal / zero */

loc_0019BEE6: ;
    if (TEST_Z(MEM8(esp + 0x124), 1)) goto loc_0019BF32; /* je: equal / zero */

loc_0019BEF0: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x1B) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019BF32; /* je: equal / zero */

loc_0019BF25: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_0019BF2F: ;
    esp = esp + 0xC;

loc_0019BF32: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xE5 - flags set for next jcc */
    edi = 0x2B;
    MEM32(esp + 0x38) = 0x2A;
    if (CMP_A(eax, 0xE5)) goto loc_0019C067; /* ja: above (unsigned >) */

loc_0019BF50: ;
    if (CMP_EQ(eax, 0xE5)) goto loc_0019C5E7; /* je: equal / zero */

loc_0019BF56: ;
    eax = eax - 0x1B;
    if (CMP_A(eax, 0xC8)) goto loc_0019C64C; /* ja: above (unsigned >) */

loc_0019BF64: ;
    eax = ZX8(MEM8(eax + 0x19C91C));
    { uint32_t _jt = MEM32(eax * 4 + 0x19C900); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0019BF72u) goto loc_0019BF72;
    if (_jt == 0x0019C07Cu) goto loc_0019C07C;
    if (_jt == 0x0019C105u) goto loc_0019C105;
    if (_jt == 0x0019C3A9u) goto loc_0019C3A9;
    if (_jt == 0x0019C40Cu) goto loc_0019C40C;
    if (_jt == 0x0019C58Du) goto loc_0019C58D;
    if (_jt == 0x0019C64Cu) goto loc_0019C64C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019BF72: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x43898000);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0);
    esi = esp + 0x44;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019BFBD: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019BFCE; /* jne: not equal / not zero */

loc_0019BFCC: ;
    esi = ebx;

loc_0019BFCE: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019BFD8: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */

loc_0019BFF6: ;
    SET_LO8(edx, MEM8(ebp + 0x1C));
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0019C000: ;
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC3B);
    PUSH32(esp, 0x8B7);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C020: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C029: ;
    xmm0 = MEMF(ebx); /* movss */
    edx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C05F: ;
    esp = esp + 8;
    goto loc_0019C899;

loc_0019C067: ;
    eax = eax - 0x121;
    if (CMP_A(eax, 7)) goto loc_0019C64C; /* ja: above (unsigned >) */

loc_0019C075: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19C9E8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0019C07Cu) goto loc_0019C07C;
    if (_jt == 0x0019C105u) goto loc_0019C105;
    if (_jt == 0x0019C3A9u) goto loc_0019C3A9;
    if (_jt == 0x0019C40Cu) goto loc_0019C40C;
    if (_jt == 0x0019C471u) goto loc_0019C471;
    if (_jt == 0x0019C58Du) goto loc_0019C58D;
    if (_jt == 0x0019C5E7u) goto loc_0019C5E7;
    if (_jt == 0x0019C64Cu) goto loc_0019C64C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019C07C: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42DC0000);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = esp + 0x44;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C0C7: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C0D8; /* jne: not equal / not zero */

loc_0019C0D6: ;
    esi = ebx;

loc_0019C0D8: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019C0E2: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    goto loc_0019BFF6;

loc_0019C105: ;
    edi = 0; /* xor self */
    goto loc_0019C110;

    /* nop */

loc_0019C110: ;
    ecx = MEM32(0x8470DC);
    eax = MEM32(edi + ecx + 0x3E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + ecx;
    if (TEST_Z(eax, eax)) goto loc_0019C2FB; /* je: equal / zero */

loc_0019C128: ;
    xmm0 = MEMF(esi + 0x330); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x334); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x338); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    edx = esp + 0x54;
    eax = esp + 0x3C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x38) = eax;
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x6C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0019C1B7: ;
    ecx = esp + 0x54;
    edx = esp + 0x28;
    eax = esp + 0x48;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x6C) = eax;
    ecx = MEM32(esp + 0x78);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x6C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x48;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0019C201: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x50); /* mulss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x4C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 - MEMF(0x649230); /* subss */
    xmm0 = xmm0 * MEMF(0x648E68); /* mulss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_0019C2F8; /* ja: above (unsigned >) */

loc_0019C249: ;
    xmm3 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0019C25B; /* jbe: below or equal (unsigned <=) */

loc_0019C256: ;
    xmm0 = xmm3; /* movaps */
    goto loc_0019C268;

loc_0019C25B: ;
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0019C2F8; /* jnp: not parity */

loc_0019C268: ;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x7C)); /* sqrtss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    edx = MEM32(ebp + 0x10);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0019C288: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648D80); /* subss */
    xmm1 = xmm1 * MEMF(0x64B3B0); /* mulss */
    xmm0 = xmm3; /* movaps */
    esp = esp + 8;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_0019C2F8; /* ja: above (unsigned >) */

loc_0019C2AA: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0019C2B4; /* jbe: below or equal (unsigned <=) */

loc_0019C2AF: ;
    xmm0 = xmm3; /* movaps */
    goto loc_0019C2BD;

loc_0019C2B4: ;
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0019C2F8; /* jnp: not parity */

loc_0019C2BD: ;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x74)); /* sqrtss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00104F00(); /* call 0x00104F00 */

loc_0019C2F5: ;
    esp = esp + 0x18;

loc_0019C2F8: ;
    ebx = MEM32(ebp + 0x10);

loc_0019C2FB: ;
    edi = edi + 0x770;
    if (CMP_L(edi, 0x1DC0)) goto loc_0019C110; /* jl: less (signed <) */

loc_0019C30D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    esi = ebx;
    edi = edi | 0xFFFFFFFFu;
    MEM32(esp + 0x54) = 0x44;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C339: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C34A; /* jne: not equal / not zero */

loc_0019C348: ;
    esi = ebx;

loc_0019C34A: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019C354: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    SET_LO8(edx, MEM8(ebp + 0x1C));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0019C37C: ;
    eax = MEM32(0x847024);
    esi = MEM32(eax + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC40);
    PUSH32(esp, 0x8EA);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C39B: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C3A4: ;
    goto loc_0019C899;

loc_0019C3A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x43898000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 4);
    esi = ebx;
    MEM8(ebp + 0x14) = 0;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C3CE: ;
    xmm0 = MEMF(ebx); /* movss */
    ecx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C404: ;
    esp = esp + 0x24;
    goto loc_0019C899;

loc_0019C40C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x42960000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 5);
    esi = ebx;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C42F: ;
    xmm0 = MEMF(ebx); /* movss */
    ecx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C465: ;
    esp = esp + 0x24;
    MEM8(ebp + 0x14) = 0;
    goto loc_0019C899;

loc_0019C471: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x42960000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 5);
    esi = ebx;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C494: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42DC0000);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = esp + 0x60;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C4DF: ;
    SET_LO8(eax, MEM8(esp + 0x53));
    esp = esp + 0x38;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C4F0; /* jne: not equal / not zero */

loc_0019C4EE: ;
    esi = ebx;

loc_0019C4F0: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019C4FA: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    SET_LO8(edx, MEM8(ebp + 0x1C));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0019C522: ;
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC3B);
    PUSH32(esp, 0x8B7);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C542: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C54B: ;
    xmm0 = MEMF(ebx); /* movss */
    edx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C581: ;
    esp = esp + 8;
    MEM8(ebp + 0x14) = 0;
    goto loc_0019C899;

loc_0019C58D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x43898000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 3);
    esi = ebx;
    edi = edi | 0xFFFFFFFFu;
    MEM32(esp + 0x54) = 0x4F;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C5B9: ;
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    esp = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC36);
    PUSH32(esp, 0x94C);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C5D9: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C5E2: ;
    goto loc_0019C899;

loc_0019C5E7: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x43898000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 6);
    esi = ebx;
    MEM8(ebp + 0x14) = 0;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C60E: ;
    xmm0 = MEMF(ebx); /* movss */
    eax = MEM32(ebp + 0x1C);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C644: ;
    esp = esp + 0x24;
    goto loc_0019C899;

loc_0019C64C: ;
    xmm0 = MEMF(ebx); /* movss */
    edx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0019C682: ;
    eax = MEM32(esi + 0x64);
    esp = esp + 8;
    eax = eax - 0x35;
    if ((eax == 0)) goto loc_0019C819; /* je: equal / zero */

loc_0019C691: ;
    eax = eax - 9;
    if ((eax == 0)) goto loc_0019C75D; /* je: equal / zero */

loc_0019C69A: ;
    eax--;
    if ((eax != 0)) goto loc_0019C899; /* jne: not equal / not zero */

loc_0019C6A1: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42DC0000);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = esp + 0x44;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C6EC: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C6FD; /* jne: not equal / not zero */

loc_0019C6FB: ;
    esi = ebx;

loc_0019C6FD: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019C707: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    SET_LO8(edx, MEM8(ebp + 0x1C));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0019C72F: ;
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC3B);
    PUSH32(esp, 0x8B7);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C74F: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C758: ;
    goto loc_0019C899;

loc_0019C75D: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42DC0000);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = esp + 0x44;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C7A8: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C7B9; /* jne: not equal / not zero */

loc_0019C7B7: ;
    esi = ebx;

loc_0019C7B9: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019C7C3: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    SET_LO8(edx, MEM8(ebp + 0x1C));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0019C7EB: ;
    edx = MEM32(0x847024);
    esi = MEM32(edx + 0x40);
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC4E);
    PUSH32(esp, 0xC4D);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0019C80B: ;
    ecx = eax;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_0019C814: ;
    goto loc_0019C899;

loc_0019C819: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x10E)) goto loc_0019C899; /* jne: not equal / not zero */

loc_0019C822: ;
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42DC0000);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = esp + 0x38;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0019C86D: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x8B7;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0019C899: ;
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    PUSH32(esp, 0x447D4000);
    eax = ebx;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0019C8B6: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C8F7; /* je: equal / zero */

loc_0019C8C0: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0019C8D1; /* jne: not equal / not zero */

loc_0019C8C4: ;
    edi = 0x42;
    MEM32(esp + 0x38) = 0x41;

loc_0019C8D1: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    esi = ebx;
    PUSH32(esp, 0); sub_0019A370(); /* call 0x0019A370 */

loc_0019C8F4: ;
    esp = esp + 0x20;

loc_0019C8F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA10
 * Original: 0x0019CA10 - 0x0019CE05 (1013 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CA10: ;
    esp = esp - 0x9C;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA4);
    eax = ZX16(MEM16(edi + 2));
    eax = eax + 0xFFFFFDC6u;
    if (CMP_A(eax, 0x17)) goto loc_0019CDFD; /* ja: above (unsigned >) */

loc_0019CA30: ;
    eax = ZX8(MEM8(eax + 0x19CE1C));
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0x19CE08); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0019CA3Fu) goto loc_0019CA3F;
    if (_jt == 0x0019CAC5u) goto loc_0019CAC5;
    if (_jt == 0x0019CB4Cu) goto loc_0019CB4C;
    if (_jt == 0x0019CDFCu) goto loc_0019CDFC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019CA3F: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(eax, 0x32);
    ebx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x16) = LO8(eax);
    PUSH32(esp, 0xC);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x35) = 1;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x30) = 0x12C;
    MEM8(esp + 0x32) = 4;
    MEM8(esp + 0x33) = 7;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_0019CAA2: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_0019CDFC; /* je: equal / zero */

loc_0019CAAD: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x60;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    POP32(esp, ebx);
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_0019CAC5: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(eax, 0xC8);
    ebx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    PUSH32(esp, 0xC);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x35) = 1;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x30) = 0x12C;
    MEM8(esp + 0x32) = 4;
    MEM8(esp + 0x33) = 7;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = esi;
    MEM8(esp + 0x1A) = 0xF;
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_0019CB29: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_0019CDFC; /* je: equal / zero */

loc_0019CB34: ;
    edx = MEM32(esp + 0x14);
    eax = eax + 0x60;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    POP32(esp, ebx);
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_0019CB4C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, ebp);
    edi = esp + 0x48;
    eax = esi;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x46) = 6;
    MEM8(esp + 0x78) = 3;
    MEM16(esp + 0x88) = 1;
    MEM16(esp + 0x8A) = 2;
    MEM8(esp + 0x79) = 4;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0030E6C0(); /* call 0x0030E6C0 */

loc_0019CBD1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CBD6: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019CBEB: ;
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0xA6) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CBFB: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019CC10: ;
    SET_LO8(edx, 0x19);
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEM8(esp + 0xA5) = LO8(edx);
    MEM8(esp + 0xA4) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CC28: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019CC3D: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0x1C) = LO8(ebx);
    ebp = MEM32(esp + 0x1C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    edi = MEM32(esp + 0x28);
    MEM8(esp + 0xA7) = LO8(ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0xC) = 0xA;

loc_0019CC70: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CC75: ;
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CC9B: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CCB1: ;
    eax = esp + 0x10;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    ebx = eax;
    MEMF(esp + 0x18) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0019CCCA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019CCCF: ;
    xmm1 = MEMF(0x648CE4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 2);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x50); /* addss */
    edx = esp + 0x58;
    MEMF(esp + 0x74) = xmm1; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x74;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648F54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000A95A0(); /* call 0x000A95A0 */

loc_0019CD48: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    SET_LO8(ebx, 0xFF);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM8(esp + 0xB2) = LO8(ebx);
    MEM8(esp + 0xB1) = LO8(ebx);
    MEM8(esp + 0xB0) = LO8(ebx);
    MEM8(esp + 0xB3) = LO8(ebx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019CD93: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x3C;
    MEM16(esp + 0x54) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019CDA8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, LO8(ebx));
    edx = edx + 2;
    MEM32(esp + 0x8C) = edx;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edx = 0x14;
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_0019CDCB: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0019CDF1; /* je: equal / zero */

loc_0019CDD2: ;
    eax = MEM32(eax + 0x94);
    ecx = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0x2C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edx;

loc_0019CDF1: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_0019CC70; /* jne: not equal / not zero */

loc_0019CDFB: ;
    POP32(esp, ebp);

loc_0019CDFC: ;
    POP32(esp, ebx);

loc_0019CDFD: ;
    POP32(esp, edi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019CE40
 * Original: 0x0019CE40 - 0x0019D2B9 (1145 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019CE40: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xE5 - flags set for next jcc */
    PUSH32(esp, edi);
    ecx = 0xC8;
    edx = 7;
    if (CMP_A(eax, 0xE5)) goto loc_0019CE7E; /* ja: above (unsigned >) */

loc_0019CE5F: ;
    if (CMP_EQ(eax, 0xE5)) goto loc_0019CEE5; /* je: equal / zero */

loc_0019CE65: ;
    eax = eax - 0x1B;
    if (CMP_A(eax, ecx)) goto loc_0019D2AF; /* ja: above (unsigned >) */

loc_0019CE70: ;
    eax = ZX8(MEM8(eax + 0x19D2D4));
    { uint32_t _jt = MEM32(eax * 4 + 0x19D2BC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0019CE92u) goto loc_0019CE92;
    if (_jt == 0x0019CEBDu) goto loc_0019CEBD;
    if (_jt == 0x0019CF79u) goto loc_0019CF79;
    if (_jt == 0x0019D249u) goto loc_0019D249;
    if (_jt == 0x0019D276u) goto loc_0019D276;
    if (_jt == 0x0019D2AFu) goto loc_0019D2AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019CE7E: ;
    eax = eax - 0x121;
    if (CMP_A(eax, edx)) goto loc_0019D2AF; /* ja: above (unsigned >) */

loc_0019CE8B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x19D3A0); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0019CE92u) goto loc_0019CE92;
    if (_jt == 0x0019CEBDu) goto loc_0019CEBD;
    if (_jt == 0x0019CEE5u) goto loc_0019CEE5;
    if (_jt == 0x0019CF79u) goto loc_0019CF79;
    if (_jt == 0x0019D249u) goto loc_0019D249;
    if (_jt == 0x0019D271u) goto loc_0019D271;
    if (_jt == 0x0019D2AFu) goto loc_0019D2AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0019CE92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42480000);
    edx = esp + 0x28;
    MEM8(esp + 0x28) = LO8(ecx);
    MEM8(esp + 0x29) = LO8(ecx);
    PUSH32(esp, edx);
    goto loc_0019D29C;

loc_0019CEBD: ;
    eax = esi + 0x78;
    MEM32(esp + 0x1C) = eax;
    eax = esi + 0x80;
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, 0x32);
    ecx = esi + 0x7C;
    MEM32(esp + 0x20) = ecx;
    MEM8(esp + 0x18) = LO8(eax);
    MEM8(esp + 0x19) = LO8(eax);
    MEM8(esp + 0x1A) = LO8(eax);
    goto loc_0019CF0F;

loc_0019CEE5: ;
    eax = esi + 0x78;
    ecx = esi + 0x7C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = 0xC8;
    eax = esi + 0x80;
    MEM32(esp + 0x24) = eax;
    MEM8(esp + 0x18) = LO8(ecx);
    MEM8(esp + 0x19) = LO8(ecx);
    MEM8(esp + 0x1A) = 0x32;

loc_0019CF0F: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64935C); /* movss */
    ebx = 0; /* xor self */
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0xC);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = esp + 0x20;
    esi = 0; /* xor self */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM16(esp + 0x34) = 0x12C;
    MEM8(esp + 0x36) = LO8(ebx);
    MEM8(esp + 0x37) = LO8(edx);
    MEM8(esp + 0x38) = LO8(ebx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_0019CF55: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_0019D2AF; /* je: equal / zero */

loc_0019CF60: ;
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x60;
    MEM32(eax) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_0019CF79: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    ebx = 1;
    PUSH32(esp, ebp);
    MEM8(esp + 0x44) = 0;
    MEM8(esp + 0x4A) = 6;
    MEM8(esp + 0x7C) = 3;
    MEM16(esp + 0x8C) = LO16(ebx);
    MEM16(esp + 0x8E) = 2;
    MEM8(esp + 0x7D) = 4;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D01E: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019D033: ;
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0xAA) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D043: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019D058: ;
    SET_LO8(edx, 0x19);
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEM8(esp + 0xA9) = LO8(edx);
    MEM8(esp + 0xA8) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D070: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019D085: ;
    xmm0 = MEMF(0x648F08); /* movss */
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ebp = MEM32(esp + 0x2C);
    MEM8(esp + 0xAB) = LO8(ecx);
    MEM8(esp + 0x20) = LO8(ebx);
    edi = 0; /* xor self */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x10) = 0xF;

loc_0019D0B6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D0BB: ;
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D0E1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D0F7: ;
    eax = esp + 0x14;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    ebx = eax;
    MEMF(esp + 0x1C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0019D110: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D115: ;
    xmm1 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    PUSH32(esp, 2);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x54); /* addss */
    edx = esp + 0x5C;
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x78;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x5C); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648F54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000A95A0(); /* call 0x000A95A0 */

loc_0019D18E: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(ebx, 0xFF);
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM8(esp + 0xB6) = LO8(ebx);
    MEM8(esp + 0xB5) = LO8(ebx);
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0xB7) = LO8(ebx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019D1D9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x3C;
    MEM16(esp + 0x58) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019D1EE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, LO8(ebx));
    edx = edx + 2;
    MEM32(esp + 0x90) = edx;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = 0x14;
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_0019D211: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0019D234; /* je: equal / zero */

loc_0019D218: ;
    eax = MEM32(eax + 0x94);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x30);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = edx;

loc_0019D234: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_0019D0B6; /* jne: not equal / not zero */

loc_0019D23E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_0019D249: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42480000);
    eax = esp + 0x28;
    MEM8(esp + 0x28) = LO8(ecx);
    MEM8(esp + 0x29) = LO8(ecx);
    PUSH32(esp, eax);
    goto loc_0019D29C;

loc_0019D271: ;
    ecx = 0xC8;

loc_0019D276: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ecx);

loc_0019D29C: ;
    edi = 2;
    PUSH32(esp, esi);
    MEM8(esp + 0x32) = 0xFF;
    PUSH32(esp, 0); sub_001B9770(); /* call 0x001B9770 */

loc_0019D2AC: ;
    esp = esp + 0x24;

loc_0019D2AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019D700
 * Original: 0x0019D700 - 0x0019D715 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D700(void)
{

loc_0019D700: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0030E6C0(); /* call 0x0030E6C0 */

loc_0019D711: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019D720
 * Original: 0x0019D720 - 0x0019D9F1 (721 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_0019D720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0019DE80(); /* call 0x0019DE80 */

loc_0019D739: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0019D9EA; /* je: equal / zero */

loc_0019D747: ;
    eax = esi;
    PUSH32(esp, 0); sub_0019B300(); /* call 0x0019B300 */

loc_0019D74E: ;
    PUSH32(esp, 0x3F4F9DB3);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edi = esp + 0x30;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_0019D768: ;
    eax = MEM32(esi + 0x3C8);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0019D788; /* je: equal / zero */

loc_0019D775: ;
    SET_LO8(edx, MEM8(esi + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    (void)0; /* cmp LO8(edx), 0xF - flags set for next jcc */
    MEM8(esp + 0x17) = 1;
    if (CMP_NE(LO8(edx), 0xF)) goto loc_0019D78D; /* jne: not equal / not zero */

loc_0019D788: ;
    MEM8(esp + 0x17) = 0;

loc_0019D78D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    edx = esp + 0x4B;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_0019DF10(); /* call 0x0019DF10 */

loc_0019D7E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi;
    ebx = esp + 0x74;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_0019D7F7: ;
    esp = esp + 0x44;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 0x98;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019D80C; /* jne: not equal / not zero */

loc_0019D803: ;
    if (CMP_NE(MEM32(esi + 0x68), ebx)) goto loc_0019D9EA; /* jne: not equal / not zero */

loc_0019D80C: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_0019D822: ;
    esi = MEM32(ebp + 8);
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019D835; /* jne: not equal / not zero */

loc_0019D82C: ;
    if (CMP_NE(MEM32(esi + 0x68), ebx)) goto loc_0019D9EA; /* jne: not equal / not zero */

loc_0019D835: ;
    edi = MEM32(esi + 0x68);
    if (CMP_NE(edi, ebx)) goto loc_0019D8E8; /* jne: not equal / not zero */

loc_0019D840: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x36)) goto loc_0019D8E8; /* jne: not equal / not zero */

loc_0019D84D: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x1B;
    ecx = ecx + 0x1A;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x63);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D893: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EBC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D8AE: ;
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    edx = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x459C4000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    SET_LO8(eax, 1);
    ecx = esp + 0xA8;
    PUSH32(esp, 0); sub_000BBE70(); /* call 0x000BBE70 */

loc_0019D8E3: ;
    goto loc_0019D9AA;

loc_0019D8E8: ;
    eax = esi;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_0019D8EF: ;
    if (TEST_Z(eax, eax)) goto loc_0019D903; /* je: equal / zero */

loc_0019D8F3: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + eax + 0x50);

loc_0019D903: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(edi, ebx)) ? 1 : 0); /* sete */
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    edx = edx + edx + -1;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x1B;
    eax = eax + 0x1A;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x63);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D94F: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EBC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019D96A: ;
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x43E10000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    ecx = esp + 0x9C;
    PUSH32(esp, 0); sub_000BBE70(); /* call 0x000BBE70 */

loc_0019D9A7: ;
    edi = MEM32(ebp + 0xC);

loc_0019D9AA: ;
    SET_LO8(eax, MEM8(esp + 0x83));
    esp = esp + 0x6C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019D9EA; /* je: equal / zero */

loc_0019D9B8: ;
    ecx = esp + 0x3C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0019D9C3: ;
    edx = MEM32(esp + 0x28);
    edx = ZX16(MEM16(edx + 4));
    PUSH32(esp, esi);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0019D9D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = esp + 0x74;
    edi = esp + 0x68;
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_0019D9E7: ;
    esp = esp + 0x14;

loc_0019D9EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019DA00
 * Original: 0x0019DA00 - 0x0019DC27 (551 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DA00(void)
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

loc_0019DA00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x747890);
    eax = 0; /* xor self */
    MEM32(0x747894) = 0x60728B5;
    MEM32(0x7478A0) = 0xCB;
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_0019DA2C: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0019DC22; /* je: equal / zero */

loc_0019DA37: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    eax--;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0019DA8D; /* jbe: below or equal (unsigned <=) */

loc_0019DA52: ;
    xmm2 = MEMF(0x648E5C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0019DA62; /* ja: above (unsigned >) */

loc_0019DA5F: ;
    xmm0 = xmm2; /* movaps */

loc_0019DA62: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0019DA8D: ;
    edx = MEM32(ebx + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xBC);
    ecx = 2;
    if (CMP_EQ(esi, ecx)) goto loc_0019DB0A; /* je: equal / zero */

loc_0019DAA3: ;
    esi = MEM32(ebp);
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM32(edx + 0x31C) = esi;
    edx = MEM32(ebx + 0x568);
    esi = MEM32(ebp + 4);
    MEM32(edx + 0x320) = esi;
    edx = MEM32(ebx + 0x568);
    esi = MEM32(ebp + 8);
    MEM32(edx + 0x324) = esi;
    edx = MEM32(ebx + 0x568);
    SET_LO16(esi, MEM16(esp + 0x20));
    MEM16(edx + 0x316) = LO16(esi);
    edx = MEM32(ebx + 0x568);
    MEMF(edx + 0x318) = xmm0; /* movss */
    edx = MEM32(ebx + 0x568);
    MEMF(edx + 0x328) = xmm3; /* movss */
    edx = MEM32(ebx + 0x568);
    MEM8(edx + 0x314) = LO8(ecx);

loc_0019DB0A: ;
    ecx = MEM32(0x84A5F8);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(esi + ecx + 0x23C);
    eax = ebx;
    MEM8(esi + ecx + 0x253) = 0xFE;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_0019DB2F: ;
    SET_LO8(ecx, MEM8(ebx + 0x60));
    eax = MEM32(0x84A5F8);
    xmm0 = MEMF(0x648D18); /* movss */
    SET_LO8(ecx, LO8(ecx) - 0x6A);
    MEM8(esi + eax + 0x10B) = LO8(ecx);
    edx = MEM32(ebp);
    MEM32(esi + eax + 0x78) = edx;
    ecx = MEM32(ebp + 4);
    MEM32(esi + eax + 0x7C) = ecx;
    edx = MEM32(ebp + 8);
    MEMF(esi + eax + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    xmm0 = xmm0 * MEMF(0x64B1B8); /* mulss */
    MEM32(esi + eax + 0x80) = edx;
    MEM32(esi + eax + 0x52C) = 0x64;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm1 <= xmm0)) goto loc_0019DBBD; /* jbe: below or equal (unsigned <=) */

loc_0019DBB6: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0019DBBD: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    MEM16(esi + eax + 0x174) = LO16(ecx);
    MEM16(esi + eax + 0x170) = LO16(ecx);
    ecx = MEM32(esi + eax + 0x7C);
    MEM32(esi + eax + 0x3B8) = ecx;
    ecx = MEM32(esi + eax + 0x200);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi + eax + 0xD0) = xmm2; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + eax + 0x110) = xmm0; /* movss */
    MEM8(esi + eax + 0x43D) = 5;
    eax = esi + eax + 0x200;
    ecx = ecx | 0x80000000u;
    MEM32(eax) = ecx;
    POP32(esp, esi);

loc_0019DC22: ;
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
 * sub_0019DC30
 * Original: 0x0019DC30 - 0x0019DC57 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DC30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DC30: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM16(esp + 0xC), 0xFFFFFFFFu)) { sub_0019DC57(); return; } /* jne: not equal / not zero */

loc_0019DC39: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x78);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019DCF0
 * Original: 0x0019DCF0 - 0x0019DE77 (391 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0019DCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0019DE80(); /* call 0x0019DE80 */

loc_0019DD09: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0019DE70; /* je: equal / zero */

loc_0019DD17: ;
    eax = esi;
    PUSH32(esp, 0); sub_0019B300(); /* call 0x0019B300 */

loc_0019DD1E: ;
    PUSH32(esp, 0x3F4F9DB3);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edi = esp + 0x30;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_0019DD38: ;
    eax = MEM32(esi + 0x3C8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esp + 0x2B) = LO8(edx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    edx = esp + 0x57;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_0019DF10(); /* call 0x0019DF10 */

loc_0019DD9E: ;
    esp = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi;
    ebx = esp + 0x30;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_0019DDB2: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019DE70; /* je: equal / zero */

loc_0019DDBD: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_0019DDD3: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019DE70; /* je: equal / zero */

loc_0019DDDE: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019DDE8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x38;
    edx = edx + 0x327;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x43960000);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 0x3C97B425);
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x42580001);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00137F60(); /* call 0x00137F60 */

loc_0019DE33: ;
    SET_LO8(eax, MEM8(esp + 0x5B));
    esp = esp + 0x44;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019DE70; /* je: equal / zero */

loc_0019DE3E: ;
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0019DE49: ;
    eax = MEM32(esp + 0x24);
    edx = ZX16(MEM16(eax + 4));
    PUSH32(esp, edi);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0019DE5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x5C;
    edi = esp + 0x74;
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_0019DE6D: ;
    esp = esp + 0x14;

loc_0019DE70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019DE80
 * Original: 0x0019DE80 - 0x0019DF05 (133 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DE80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019DE80: ;
    ecx = MEM32(eax + 0x568);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_0019DECF; /* je: equal / zero */

loc_0019DE8B: ;
    SET_LO8(edx, MEM8(ecx + 0xB1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019DECF; /* je: equal / zero */

loc_0019DE95: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    esi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019DF01; /* je: equal / zero */

loc_0019DEA1: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0019DF01; /* je: equal / zero */

loc_0019DEAA: ;
    /* nop */

loc_0019DEB0: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0019DEC7; /* jne: not equal / not zero */

loc_0019DEBA: ;
    if (CMP_NE(MEM16(eax + 0xA), 0xBE)) goto loc_0019DEC7; /* jne: not equal / not zero */

loc_0019DEC2: ;
    if (TEST_Z(esi, esi)) goto loc_0019DF03; /* je: equal / zero */

loc_0019DEC6: ;
    esi--;

loc_0019DEC7: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0019DEB0; /* jne: not equal / not zero */

loc_0019DECD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019DECF: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    esi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019DF01; /* je: equal / zero */

loc_0019DEDB: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0019DF01; /* je: equal / zero */

loc_0019DEE4: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0019DEFB; /* jne: not equal / not zero */

loc_0019DEEE: ;
    if (CMP_NE(MEM16(eax + 0xA), 0x82)) goto loc_0019DEFB; /* jne: not equal / not zero */

loc_0019DEF6: ;
    if (TEST_Z(esi, esi)) goto loc_0019DF03; /* je: equal / zero */

loc_0019DEFA: ;
    esi--;

loc_0019DEFB: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0019DEE4; /* jne: not equal / not zero */

loc_0019DF01: ;
    eax = 0; /* xor self */

loc_0019DF03: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019DF10
 * Original: 0x0019DF10 - 0x0019E012 (258 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DF10(void)
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

loc_0019DF10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x10);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0019DF54; /* je: equal / zero */

loc_0019DF23: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019E1F0(); /* call 0x0019E1F0 */

loc_0019DF42: ;
    ecx = MEM32(esp + 0x2C);
    esp = esp + 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019E012(); return; } /* jne: not equal / not zero */

loc_0019DF54: ;
    edi = MEM32(esp + 0x24);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0019DF8A; /* ja: above (unsigned >) */

loc_0019DF6A: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0019DF8A; /* ja: above (unsigned >) */

loc_0019DF7D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    goto loc_0019DFC2;

loc_0019DF8A: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x14); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0xC); /* movss */

loc_0019DFC2: ;
    xmm2 = MEMF(0x6498B8); /* movss */
    eax = MEM32(esp + 0x40);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x78); /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x7C); /* movss */
    xmm1 = xmm1 + MEMF(0x6498B4); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x80); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    edx = esi;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    g_seh_ebp = ebp; sub_0019E016(); return; /* tail jmp 0x0019E016 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019E050
 * Original: 0x0019E050 - 0x0019E12D (221 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E050: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0019E06C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi + 4);
    ecx = 2;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x8C) = ecx;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi + 8);
    SET_LO8(ebx, 0xFF);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM32(esp + 0x58) = 0x303;
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = 0x5F;
    MEM8(esp + 0x10) = 5;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = 4;
    MEM32(esp + 0x88) = eax;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x40) = 0x40C00009;
    MEM8(esp + 0x48) = LO8(ebx);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019E10B: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0019E117; /* jns: not sign (positive) */

loc_0019E112: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0019E117: ;
    esi = MEM32(esp + 0x128);
    eax = eax + 3;
    MEM16(esp + 0x12) = LO16(eax);
    edi = 6;
    g_seh_ebp = ebp; sub_0019E130(); return; /* tail jmp 0x0019E130 */

}

/**
 * sub_0019E1E0
 * Original: 0x0019E1E0 - 0x0019E1EF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019E1E0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x68), 0x98 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(eax + 0x68), 0x98)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0019E1F0
 * Original: 0x0019E1F0 - 0x0019E2B3 (195 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E1F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019E1F0: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019E1F9: ;
    edx = MEM32(esp + 0x58);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = eax + eax * 8;
    MEM32(esp + 0x2C) = 0x599998;
    MEM32(esp + 0x30) = 0x5999B0;
    MEM32(esp + 0x34) = 0x5999BC;
    MEM32(esp + 0x38) = 0x5999A4;
    ecx = ecx * 8 + 0x5999C8;
    eax = 0; /* xor self */
    esi = 6;

loc_0019E233: ;
    MEM32(esp + eax + 0x3C) = ecx;
    MEM32(esp + eax + 0x14) = edx;
    ecx = ecx + 0xC;
    edx = edx + 0xC;
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_0019E233; /* jne: not equal / not zero */

loc_0019E247: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 0xA);
    MEM32(esp + 8) = eax;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x6C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x78);
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_0019E27B: ;
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0019E2B3(); return; } /* je: equal / zero */

loc_0019E283: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0019E2C0
 * Original: 0x0019E2C0 - 0x0019E2F4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E2C0: ;
    esp = esp - 0x78;
    xmm0 = MEMF(0x64B3AC); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x84);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_NE(ebp, ebx)) { sub_0019E2F4(); return; } /* jne: not equal / not zero */

loc_0019E2EC: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_0019E550
 * Original: 0x0019E550 - 0x0019E5A9 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E550: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* cmp MEM8(ebp), 0 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(MEM8(ebp), 0)) { sub_0019E5A9(); return; } /* je: equal / zero */

loc_0019E569: ;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = 0x599A7C;
    MEM32(esp + 0x2C) = 0x599A88;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_0019E599: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x10;
    MEM8(ebp) = 1;
    g_seh_ebp = ebp; sub_0019E663(); return; /* tail jmp 0x0019E663 */

}

/**
 * sub_0019E6A0
 * Original: 0x0019E6A0 - 0x0019E7A9 (265 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E6A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019E6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0019E7A4; /* je: equal / zero */

loc_0019E6B4: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0019E70B; /* je: equal / zero */

loc_0019E6BE: ;
    eax = esp + 0x18;
    edx = esp + 0x30;
    MEM32(esp + 8) = eax;
    eax = MEM32(0x6B815C);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x599A7C;
    MEM32(esp + 0x1C) = 0x599A88;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0019E6EE: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = 2;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0019E706: ;
    esp = esp + 0x10;
    goto loc_0019E74F;

loc_0019E70B: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_0019E74F: ;
    PUSH32(esp, 0x23);
    eax = esp + 0x28;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_0019A1F0(); /* call 0x0019A1F0 */

loc_0019E75E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0019E76C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0019E850(); /* call 0x0019E850 */

loc_0019E774: ;
    if (TEST_Z(edi, edi)) goto loc_0019E78C; /* je: equal / zero */

loc_0019E778: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;

loc_0019E78C: ;
    if (TEST_Z(ebx, ebx)) goto loc_0019E7A4; /* je: equal / zero */

loc_0019E790: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;

loc_0019E7A4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019E7B0
 * Original: 0x0019E7B0 - 0x0019E7F5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0019E7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B815C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0019E7E1: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0019E7F5(); return; } /* je: equal / zero */

loc_0019E7E8: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0019E7F5(); return; } /* je: equal / zero */

loc_0019E7F0: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0019E7F7(); return; /* tail jmp 0x0019E7F7 */

}

/**
 * sub_0019E850
 * Original: 0x0019E850 - 0x0019E8BB (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019E850: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_0019E8B7; /* je: equal / zero */

loc_0019E85D: ;
    MEM8(esp) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019E866: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 1);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x15) = 0xFF;
    edx = edx + 0x14;
    MEM16(esp + 0xA) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0019E8B4: ;
    esp = esp + 0xC;

loc_0019E8B7: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019E8C0
 * Original: 0x0019E8C0 - 0x0019EA77 (439 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E8C0(void)
{
    float xmm0, xmm1, xmm2, xmm6;

loc_0019E8C0: ;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019E8D1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019E8EE: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x64AE24); /* addss */
    xmm0 = MEMF(0x64AE20); /* movss */
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0019E911: ;
    xmm2 = MEMF(0x6493B8); /* movss */
    xmm1 = MEMF(0x6493C0); /* movss */
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    eax = esi;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_0019E933: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A03126F);
    PUSH32(esp, 0x44FA0000);
    eax = esi;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0019E950: ;
    xmm0 = MEMF(0x6498FC); /* movss */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649260); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A264); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649258); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF10); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649250); /* movss */
    ecx = 0; /* xor self */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x3C) = eax;
    eax = 0x64;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF0C); /* movss */
    PUSH32(esp, edi);
    esi = esp + 0x2C;
    MEM16(esp + 0x2C) = LO16(ecx);
    MEM16(esp + 0x2E) = 0xFF;
    MEM16(esp + 0x30) = 0xFFC0;
    MEM16(esp + 0x32) = 0x47;
    MEM32(esp + 0x34) = 6;
    MEM32(esp + 0x38) = 4;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x60) = 7;
    MEM32(esp + 0x64) = 3;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM16(esp + 0x78) = 0x19;
    MEM16(esp + 0x7A) = 0xF;
    MEM16(esp + 0x7C) = LO16(eax);
    MEM16(esp + 0x7E) = LO16(eax);
    MEM16(esp + 0x80) = 0xC;
    MEM16(esp + 0x82) = 0x14;
    MEM8(esp + 0x84) = LO8(ecx);
    PUSH32(esp, 0); sub_000F2EA0(); /* call 0x000F2EA0 */

loc_0019EA6E: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019EA80
 * Original: 0x0019EA80 - 0x0019EBBC (316 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;

loc_0019EA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019EA9D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019EABA: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x64AE24); /* addss */
    xmm0 = MEMF(0x64AE20); /* movss */
    esi = ebx;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0019EADF: ;
    esi = MEM32(ebp + 0x10);
    xmm2 = MEMF(0x6493B8); /* movss */
    xmm1 = MEMF(0x6493C0); /* movss */
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    eax = ebx;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_0019EB04: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A03126F);
    PUSH32(esp, 0x44FA0000);
    eax = ebx;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0019EB21: ;
    eax = MEM32(ebp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x20;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    if (TEST_Z(eax, eax)) { sub_0019EBBC(); return; } /* je: equal / zero */

loc_0019EB39: ;
    edx = MEM32(ebx);
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    xmm1 = xmm1 - MEMF(edi + 4); /* subss */
    esi = eax;
    eax = MEM32(ebx + 4);
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    ecx = 0x24;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x12C) = edx;
    edx = esp + 0x120;
    MEM32(esp + 0x130) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x128;
    MEM32(esp + 0x138) = ecx;
    PUSH32(esp, 0); sub_000AC260(); /* call 0x000AC260 */

loc_0019EBA2: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ebx = esp + 0x88;
    PUSH32(esp, 0); sub_000F2DB0(); /* call 0x000F2DB0 */

loc_0019EBB2: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019EC20
 * Original: 0x0019EC20 - 0x0019EF2F (783 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0019EC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edi = esp + 0x70;
    eax = esi;
    PUSH32(esp, 0); sub_0019F060(); /* call 0x0019F060 */

loc_0019EC4A: ;
    eax = MEM32(esi + 0x568);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0019EC86; /* je: equal / zero */

loc_0019EC57: ;
    if (CMP_LE(MEM16(eax + 0x36), 0)) goto loc_0019EC62; /* jle: less or equal (signed <=) */

loc_0019EC5E: ;
    MEM16(eax + 0x36) = MEM16(eax + 0x36) - 1;

loc_0019EC62: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    eax = MEM32(esi + 0x568);
    if (CMP_LE(MEM16(eax + 0x2DE), 0)) goto loc_0019EC86; /* jle: less or equal (signed <=) */

loc_0019EC7F: ;
    MEM16(eax + 0x2DE) = MEM16(eax + 0x2DE) - 1;

loc_0019EC86: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0019ED89; /* je: equal / zero */

loc_0019EC94: ;
    SET_LO8(ecx, MEM8(esi + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_0019ED89; /* je: equal / zero */

loc_0019ECA6: ;
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0019ECB1: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019ECB9: ;
    xmm0 = xmm0 * MEMF(0x64B3A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AD28); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019ECDC: ;
    xmm0 = xmm0 * MEMF(0x64A004); /* mulss */
    xmm0 = xmm0 + MEMF(0x64994C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019ED0E: ;
    xmm0 = xmm0 * MEMF(0x58C050); /* mulss */
    xmm0 = xmm0 + MEMF(0x649558); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019ED29: ;
    eax = eax & 0x8000007Fu;
    if (((int32_t)eax >= 0)) goto loc_0019ED35; /* jns: not sign (positive) */

loc_0019ED30: ;
    eax--;
    eax = eax | 0xFFFFFF80u;
    eax++;

loc_0019ED35: ;
    SET_LO8(eax, LO8(eax) + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019ED3D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x6B8160);
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0019ED5B: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x599AB8;
    ecx = 0x59991C;
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_0019ED6F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_0019F130(); /* call 0x0019F130 */

loc_0019ED86: ;
    esp = esp + 0x3C;

loc_0019ED89: ;
    SET_LO8(eax, MEM8(ebp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019EE93; /* je: equal / zero */

loc_0019ED94: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(0x64B3A4); /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x48) = xmm6; /* movss */
    xmm6 = MEMF(0x64B3A0); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm4; /* addss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(0x64A7D8); /* movss */
    eax = esp + 0x14;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    PUSH32(esp, 0x32);
    xmm7 = xmm7 + xmm3; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    PUSH32(esp, eax);
    edi = esp + 0x48;
    MEMF(esp + 0x5C) = xmm7; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    PUSH32(esp, 0); sub_0019EF30(); /* call 0x0019EF30 */

loc_0019EE70: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x30);
    PUSH32(esp, ecx);
    edi = esp + 0x5C;
    PUSH32(esp, 0); sub_0019EF30(); /* call 0x0019EF30 */

loc_0019EE80: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x31);
    PUSH32(esp, edx);
    edi = esp + 0x70;
    PUSH32(esp, 0); sub_0019EF30(); /* call 0x0019EF30 */

loc_0019EE90: ;
    esp = esp + 0x18;

loc_0019EE93: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019EF24; /* je: equal / zero */

loc_0019EE9E: ;
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = eax + 0xF0;
    if (TEST_NZ(eax, eax)) goto loc_0019EEB2; /* jne: not equal / not zero */

loc_0019EEAE: ;
    edi = esp + 0x70;

loc_0019EEB2: ;
    xmm0 = MEMF(0x648D2C); /* movss */
    eax = esp + 0x20;
    ecx = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x3C) = ecx;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, edi);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002D1EE0(); /* call 0x002D1EE0 */

loc_0019EF18: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002D28A0(); /* call 0x002D28A0 */

loc_0019EF21: ;
    esp = esp + 0x3C;

loc_0019EF24: ;
    PUSH32(esp, 0); sub_0019EFD0(); /* call 0x0019EFD0 */

loc_0019EF29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019EF30
 * Original: 0x0019EF30 - 0x0019EF7F (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EF30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019EF30: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esi + 0x174));
    eax = esi;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_0019EF3F: ;
    if (TEST_Z(eax, eax)) goto loc_0019EF53; /* je: equal / zero */

loc_0019EF43: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    eax = MEM32(ecx + edx + 0x50);

loc_0019EF53: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0019EF7A: ;
    esp = esp + 0x2C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019EF80
 * Original: 0x0019EF80 - 0x0019EFCD (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EF80(void)
{
    uint32_t ebp;

loc_0019EF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    edx = MEM32(0x6B8160);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0x59991C;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0019EFAD: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0019EFC5: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019EFD0
 * Original: 0x0019EFD0 - 0x0019F05D (141 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019EFD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;

loc_0019EFD0: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_0019F059; /* je: equal / zero */

loc_0019EFDD: ;
    MEM8(esp) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019EFE6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    edx = edx + 0x14;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F00F: ;
    xmm5 = MEMF(0x648D38); /* movss */
    xmm6 = MEMF(0x649678); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F032: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 4;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x19) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0019F056: ;
    esp = esp + 0xC;

loc_0019F059: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019F060
 * Original: 0x0019F060 - 0x0019F0A1 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x85E2C4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0019F08D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0019F0A1(); return; } /* je: equal / zero */

loc_0019F094: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0019F0A1(); return; } /* je: equal / zero */

loc_0019F09C: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0019F0A3(); return; /* tail jmp 0x0019F0A3 */

}

/**
 * sub_0019F0D0
 * Original: 0x0019F0D0 - 0x0019F120 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F0D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x9F)) goto loc_0019F0E6; /* je: equal / zero */

loc_0019F0DF: ;
    if (CMP_NE(eax, 0xA0)) { sub_0019F120(); return; } /* jne: not equal / not zero */

loc_0019F0E6: ;
    PUSH32(esp, 0x5F4A58);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_0019F0F0: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019F120(); return; } /* jne: not equal / not zero */

loc_0019F0F7: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0019F120(); return; } /* jne: not equal / not zero */

loc_0019F100: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_0019F113; /* je: equal / zero */

loc_0019F10A: ;
    MEM16(esi + 0x3AE) = 7;

loc_0019F113: ;
    ecx = esi;
    eax = 0xE;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CE240(); return; /* tail jmp 0x002CE240 */

}

/**
 * sub_0019F130
 * Original: 0x0019F130 - 0x0019F951 (2081 bytes, 482 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F130: ;
    esp = esp - 0xCC;
    xmm0 = MEMF(0x648E64); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xDC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xE4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF0); /* movss */
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0019F174: ;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0019F1C4; /* je: equal / zero */

loc_0019F17D: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x6B;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = LO8(ebx);
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x4C);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edx;

loc_0019F1C4: ;
    ecx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_001A8720(); /* call 0x001A8720 */

loc_0019F1CD: ;
    if (CMP_EQ(eax, ebx)) goto loc_0019F21E; /* je: equal / zero */

loc_0019F1D1: ;
    esi = MEM32(eax + 0x58);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x14);
    if (CMP_EQ(edi, ebx)) goto loc_0019F21E; /* je: equal / zero */

loc_0019F1E4: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_0019F1F3: ;
    eax = MEM32(esp + 0x48);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0019F21E; /* je: equal / zero */

loc_0019F1FF: ;
    edx = MEM32(edi + 4);
    esi = MEM32(esi + 0xC);
    ecx = eax + eax * 4;
    ecx = MEM32(edx + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);

loc_0019F21E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ebp + 8); /* subss */
    eax = esp + 0x54;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    MEM8(esp + 0x2E) = LO8(ebx);
    ebx = eax;
    MEM8(esp + 0x28) = 3;
    MEM8(esp + 0x29) = 0x18;
    MEM16(esp + 0x2A) = 0x14;
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0019F260: ;
    xmm0 = MEMF(0x6490B4); /* movss */
    esi = MEM32(esp + 0xE0);
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x18) = xmm1; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = MEM32(esp + 0x14);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x18) = xmm1; /* movss */
    eax = MEM32(esp + 0x18);
    ecx = esi;
    edx = MEM32(ecx);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x50); /* subss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x5C); /* subss */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x40000000);
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0x40000000);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x40;
    PUSH32(esp, 0x49742400);
    MEM32(esp + 0x68) = ecx;
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x64;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0019F414: ;
    MEM32(esp + 0xA8) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F424: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    MEMF(esp + 0x88) = xmm3; /* movss */
    MEM8(esp + 0x8C) = 0xFF;
    MEM8(esp + 0x8D) = 0xFF;
    MEM8(esp + 0x8E) = 0xFF;
    MEM16(esp + 0xB0) = 7;
    MEM16(esp + 0xB2) = 0x24;
    MEM16(esp + 0xB4) = 1;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xEC) = 0x4C207;
    MEM8(esp + 0xF7) = 0;
    MEM32(esp + 0xF0) = 0;
    MEM8(esp + 0xF8) = 0xFF;
    edx = edx + 0x3C;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0xC8) = eax;
    eax = MEM32(0x595D18);
    MEM32(esp + 0xC4) = edx;
    edx = MEM32(0x595D14);
    MEM32(esp + 0xD4) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esp + 0xD0) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esp + 0xCC) = ecx;
    ecx = MEM32(0x595D1C);
    MEM8(esp + 0xF4) = LO8(eax);
    MEM8(esp + 0xF5) = LO8(eax);
    MEM8(esp + 0xF6) = LO8(eax);
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0xE0) = ecx;
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0019F51C: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm4 = MEMF(0x648D78); /* movss */
    fp_push(MEMF(ebp)); /* fld float */
    xmm5 = MEMF(0x6491F8); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    SET_LO16(ebx, (uint32_t)((int32_t)LO16(ebx) >> 8));
    esp = esp + 0x28;
    ebx = ebx - 0x85;
    /* fld st(1) */
    ecx = MEM32(ebp + 4);
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0019F568: ;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm3 = xmm3 * xmm5; /* mulss */
    esi = (int32_t)xmm3; /* cvttss2si */
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) >> 8));
    esp = esp + 8;
    MEM32(esp + 0x44) = 0x60;
    MEM32(esp + 0x48) = 0x61;
    MEM32(esp + 0x4C) = 0x62;
    MEM32(esp + 0x50) = 0x63;
    esi = esi - 0x85;
    MEM32(esp + 0x28) = esi;

loc_0019F5B1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F5B6: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0019F5C2; /* jns: not sign (positive) */

loc_0019F5BD: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0019F5C2: ;
    edx = MEM32(esp + eax * 4 + 0x44);
    MEM32(esp + 0x8C) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F5D2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0xF;
    MEM16(esp + 0x60) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F5E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x6F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F5FA: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F621: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F63C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F64C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0xC4;
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0019F663: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F66B: ;
    xmm0 = xmm0 * MEMF(0x64A2B0); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A2AC); /* subss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F689: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F695: ;
    edx = MEM32(esp + 0xCC);
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edx = edx & 0xFFFFFF3Fu;
    eax = 2;
    edi = edi | edx;
    MEM32(esp + 0x74) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0x80) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    MEM32(esp + 0xCC) = edi;
    edi = 4;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edi;
    MEM32(esp + 0x84) = ecx;
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0019F738; /* jge: greater or equal (signed >=) */

loc_0019F6E9: ;
    eax = MEM32(esp + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x170;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0019F6FD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0019F738; /* je: equal / zero */

loc_0019F704: ;
    edx = eax + 0x2C;
    ecx = 0x1F;
    esi = esp + 0x60;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    esi = MEM32(esp + 0x28);
    MEM16(eax + 0x2E) = LO16(ecx);
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = MEM32(0x771CD0) + 1;
    edi = 4;

loc_0019F738: ;
    eax = MEM32(esp + 0x40);
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x40) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_0019F5B1; /* jg: greater (signed >) */

loc_0019F749: ;
    ebx = 0x14;
    edi = edi;

loc_0019F750: ;
    xmm0 = MEMF(0x648F38); /* movss */
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1C) = eax;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F7A3: ;
    xmm0 = xmm0 + MEMF(0x648E64); /* addss */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = eax;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = edx;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = ecx;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F860: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648CF0); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F889: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F89E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F8CA: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F8E5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F8F6: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0019F902; /* jns: not sign (positive) */

loc_0019F8FD: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0019F902: ;
    ecx = MEM32(esp + 0x108);
    eax = eax + 0xA;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0019F91A: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0019F93F; /* je: equal / zero */

loc_0019F923: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019F928: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x6F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x3C) = edi;
    SET_LO8(edx, LO8(edx) + 0x1E);
    MEM8(esi + 0x38) = LO8(edx);
    MEM8(esi + 0x39) = LO8(edx);
    MEM8(esi + 0x3A) = LO8(edx);

loc_0019F93F: ;
    ebx--;
    if ((ebx != 0)) goto loc_0019F750; /* jne: not equal / not zero */

loc_0019F946: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xCC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0019F960
 * Original: 0x0019F960 - 0x0019FB76 (534 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019F960: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0019F971: ;
    xmm0 = MEMF(0x648F38); /* movss */
    eax = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019F9C4: ;
    xmm0 = xmm0 + MEMF(0x648E64); /* addss */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = ecx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = edx;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = ecx;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = edx;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    edx = MEM32(esp + 0x2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019FA7F: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x6492E4); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019FAA8: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019FAC5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019FAF1: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x649148); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019FB0C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019FB1D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x5C;
    ecx = ebp;
    edx = edx + 0x1E;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0019FB38: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0019FB6E; /* je: equal / zero */

loc_0019FB41: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019FB46: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x6F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x3C) = 4;
    SET_LO8(edx, LO8(edx) + 0x1E);
    edi++;
    (void)0; /* cmp edi, 0x96 - flags set for next jcc */
    MEM8(esi + 0x38) = LO8(edx);
    MEM8(esi + 0x39) = LO8(edx);
    MEM8(esi + 0x3A) = LO8(edx);
    if (CMP_L(edi, 0x96)) goto loc_0019F971; /* jl: less (signed <) */

loc_0019FB6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0019FB80
 * Original: 0x0019FB80 - 0x0019FC2D (173 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019FB80: ;
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    xmm0 = MEMF(ebp + 0x4C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0019FC28; /* jbe: below or equal (unsigned <=) */

loc_0019FB99: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0019FC28; /* jb: below (unsigned <) */

loc_0019FBAB: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_0019FBBE: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019FC28; /* je: equal / zero */

loc_0019FBC6: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_0019FBE1: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019FC26; /* je: equal / zero */

loc_0019FBE8: ;
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019F960(); /* call 0x0019F960 */

loc_0019FBFB: ;
    eax = MEM32(ebp + 0x50);
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_001A8720(); /* call 0x001A8720 */

loc_0019FC08: ;
    if (TEST_Z(eax, eax)) goto loc_0019FC26; /* je: equal / zero */

loc_0019FC0C: ;
    ecx = MEM32(eax + 0x54);
    esi = MEM32(ecx + 0x24);
    ecx = MEM32(eax + 0x58);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edx = 0x5F4A48;
    PUSH32(esp, 0); sub_00081E60(); /* call 0x00081E60 */

loc_0019FC23: ;
    esp = esp + 4;

loc_0019FC26: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019FC28: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0019FC30
 * Original: 0x0019FC30 - 0x0019FC43 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019FC30: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    if (TEST_NZ(ebp, ebp)) { sub_0019FC43(); return; } /* jne: not equal / not zero */

loc_0019FC3C: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019FD80
 * Original: 0x0019FD80 - 0x0019FF06 (390 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0019FD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x7C;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_0019FF01; /* je: equal / zero */

loc_0019FD92: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0019FE26; /* je: equal / zero */

loc_0019FDA0: ;
    ecx = MEM32(0x5A02D0);
    eax = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edi + 0x4B0);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x6B8164);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    esi = esp + 0x38;
    PUSH32(esp, 0); sub_003ECD90(); /* call 0x003ECD90 */

loc_0019FDD8: ;
    eax = esi;
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x20;
    eax = esp + 0x44;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x6B8168);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, ecx);
    esi = edi;
    MEM32(esp + 0x24) = 0x599B00;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0019FE09: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = 2;
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0019FE21: ;
    esp = esp + 0x14;
    goto loc_0019FE6A;

loc_0019FE26: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64A73C); /* addss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;

loc_0019FE6A: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0019FE81; /* je: equal / zero */

loc_0019FE7D: ;
    ecx = 0; /* xor self */
    goto loc_0019FE8B;

loc_0019FE81: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = edx + eax + 0x40;

loc_0019FE8B: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    (void)0; /* cmp MEM32(edx + ecx + 0x14), 4 - flags set for next jcc */
    eax = 0x1E;
    if (CMP_NE(MEM32(edx + ecx + 0x14), 4)) goto loc_0019FEA8; /* jne: not equal / not zero */

loc_0019FEA3: ;
    eax = 0x58;

loc_0019FEA8: ;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    ecx = esp + 0x20;
    esi = edi;
    PUSH32(esp, 0); sub_0019A1F0(); /* call 0x0019A1F0 */

loc_0019FEB8: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0019FEC6: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0019FFB0(); /* call 0x0019FFB0 */

loc_0019FECE: ;
    if (TEST_Z(ebx, ebx)) goto loc_0019FEE6; /* je: equal / zero */

loc_0019FED2: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;

loc_0019FEE6: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0019FF01; /* je: equal / zero */

loc_0019FEED: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0019FF01: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019FF10
 * Original: 0x0019FF10 - 0x0019FF55 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0019FF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B8168);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0019FF41: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0019FF55(); return; } /* je: equal / zero */

loc_0019FF48: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0019FF55(); return; } /* je: equal / zero */

loc_0019FF50: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0019FF57(); return; /* tail jmp 0x0019FF57 */

}

/**
 * sub_0019FFB0
 * Original: 0x0019FFB0 - 0x001A0035 (133 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_0019FFB0: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_001A0031; /* je: equal / zero */

loc_0019FFBD: ;
    MEM8(esp) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019FFC6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    edx = edx + 0xF;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019FFEF: ;
    xmm5 = MEMF(0x649B80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A000A: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 4;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm5; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x19) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_001A002E: ;
    esp = esp + 0xC;

loc_001A0031: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001A0040
 * Original: 0x001A0040 - 0x001A018B (331 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A0040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001A008B; /* je: equal / zero */

loc_001A005C: ;
    if (CMP_LE(MEM16(eax + 0x36), 0)) goto loc_001A0067; /* jle: less or equal (signed <=) */

loc_001A0063: ;
    MEM16(eax + 0x36) = MEM16(eax + 0x36) - 1;

loc_001A0067: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    eax = MEM32(esi + 0x568);
    if (CMP_LE(MEM16(eax + 0x2DE), 0)) goto loc_001A008B; /* jle: less or equal (signed <=) */

loc_001A0084: ;
    MEM16(eax + 0x2DE) = MEM16(eax + 0x2DE) - 1;

loc_001A008B: ;
    PUSH32(esp, 0x3F4F9DB3);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edi = esp + 0x60;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_001A00A5: ;
    eax = MEM32(esi + 0x3C8);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(eax, eax)) { sub_001A018B(); return; } /* je: equal / zero */

loc_001A00BE: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(0x6B816C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001A00E1: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001A00F5; /* je: equal / zero */

loc_001A00E8: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001A00F5; /* je: equal / zero */

loc_001A00F0: ;
    edx = MEM32(eax + 8);
    goto loc_001A00F7;

loc_001A00F5: ;
    edx = 0; /* xor self */

loc_001A00F7: ;
    PUSH32(esp, esi);
    eax = esp + 0x64;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_001A0105: ;
    edi = eax;
    edx = esp + 0x2C;
    MEM32(esp + 0x58) = edx;
    eax = esp + 0x40;
    MEM32(esp + 0x5C) = eax;
    edx = edi;
    ecx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    MEM32(esp + 0x64) = ecx;
    PUSH32(esp, eax);
    eax = 3;
    ecx = esp + 0x54;
    MEM32(esp + 0x54) = 0x599B18;
    MEM32(esp + 0x58) = 0x599B30;
    MEM32(esp + 0x5C) = 0x599B3C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_001A014D: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x4C); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x50); /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x24) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001A0238(); return; /* tail jmp 0x001A0238 */

}

/**
 * sub_001A0350
 * Original: 0x001A0350 - 0x001A039D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0350(void)
{
    uint32_t ebp;

loc_001A0350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = MEM32(0x6B816C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001A036E: ;
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x599B18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_001A0395: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A03A0
 * Original: 0x001A03A0 - 0x001A0445 (165 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A03A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A03A0: ;
    esp = esp - 8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A03A8: ;
    xmm0 = xmm0 * MEMF(0x64A5EC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A5E8); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A03C3: ;
    xmm0 = xmm0 * MEMF(0x64A5E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A5E0); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A03DD: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A03F5: ;
    xmm0 = xmm0 * MEMF(0x6494C4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A52C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A0415: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001A0421; /* jns: not sign (positive) */

loc_001A041C: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001A0421: ;
    ecx = MEM32(esp + 0x28);
    eax = eax + 6;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_001A0441: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001A0450
 * Original: 0x001A0450 - 0x001A04C1 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0450(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001A0450: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x38));
    xmm1 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(edx), 1)) goto loc_001A047C; /* je: equal / zero */

loc_001A0461: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    xmm2 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001A0493; /* ja: above (unsigned >) */

loc_001A047C: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x64);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_001A0493; /* je: equal / zero */

loc_001A0488: ;
    SET_LO8(edx, MEM8(edx + 0x10B));
    if (CMP_EQ(LO8(edx), MEM8(ecx + 0x30))) goto loc_001A0495; /* je: equal / zero */

loc_001A0493: ;
    SET_LO8(eax, 1);

loc_001A0495: ;
    xmm0 = MEMF(0x648E3C); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x34) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x34))) { sub_001A04C1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A04A3: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x6490A8); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001A04B8; /* jbe: below or equal (unsigned <=) */

loc_001A04B5: ;
    xmm0 = xmm1; /* movaps */

loc_001A04B8: ;
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001A04E0
 * Original: 0x001A04E0 - 0x001A0578 (152 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A04E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001A04E0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x2C);
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_001A050E; /* je: equal / zero */

loc_001A04EE: ;
    ebx = MEM32(ecx + 0x64);
    if (TEST_Z(ebx, ebx)) goto loc_001A050E; /* je: equal / zero */

loc_001A04F5: ;
    SET_LO8(ebx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(ebx), MEM8(edx + 0x30))) goto loc_001A050E; /* jne: not equal / not zero */

loc_001A0500: ;
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x228))) goto loc_001A0510; /* jbe: below or equal (unsigned <=) */

loc_001A050E: ;
    SET_LO8(eax, 1);

loc_001A0510: ;
    xmm0 = MEMF(edx + 0x34); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm0 <= xmm1)) goto loc_001A053E; /* jbe: below or equal (unsigned <=) */

loc_001A0523: ;
    xmm2 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edx + 0x34) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001A053E; /* jbe: below or equal (unsigned <=) */

loc_001A0539: ;
    MEMF(edx + 0x34) = xmm1; /* movss */

loc_001A053E: ;
    xmm0 = MEMF(edx + 0x34); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x6490A4); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001A0564; /* ja: above (unsigned >) */

loc_001A0557: ;
    xmm1 = MEMF(0x6490A0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001A0567; /* jbe: below or equal (unsigned <=) */

loc_001A0564: ;
    xmm0 = xmm1; /* movaps */

loc_001A0567: ;
    ecx = MEM32(esp + 8);
    xmm0 = xmm0 + MEMF(0x64909C); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001A0580
 * Original: 0x001A0580 - 0x001A06D5 (341 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0580: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    esi = MEM32(edx + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001A05AA: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001A05B6: ;
    eax = MEM32(eax + 0x30);
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(edi + 0xE));
    esp = esp + 0x10;
    if (CMP_AE(LO8(eax), 4)) goto loc_001A06CD; /* jae: above or equal (unsigned >=) */

loc_001A05CB: ;
    esi = ZX8(LO8(eax));
    esi = esi << 5;
    esi = esi + 0x59A638;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_001A0670; /* jle: less or equal (signed <=) */

loc_001A05E9: ;
    PUSH32(esp, ebx);
    /* nop */

loc_001A05F0: ;
    edx = MEM32(edi);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x4B0);
    ebx = MEM32(ecx + ebp + 0xC);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001A0616: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001A062A; /* je: equal / zero */

loc_001A061D: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001A062A; /* je: equal / zero */

loc_001A0625: ;
    eax = MEM32(eax + 8);
    goto loc_001A062C;

loc_001A062A: ;
    eax = 0; /* xor self */

loc_001A062C: ;
    if (CMP_L(eax, MEM32(esp + 0x18))) goto loc_001A065C; /* jl: less (signed <) */

loc_001A0632: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_001A065C; /* je: equal / zero */

loc_001A0638: ;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_001A065C; /* je: equal / zero */

loc_001A0642: ;
    if (CMP_L(eax, 0x205)) goto loc_001A065C; /* jl: less (signed <) */

loc_001A0649: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_001A0659: ;
    esp = esp + 0xC;

loc_001A065C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 4);
    eax++;
    ebp = ebp + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_001A05F0; /* jl: less (signed <) */

loc_001A066F: ;
    POP32(esp, ebx);

loc_001A0670: ;
    eax = MEM32(edi);
    MEM32(esp + 0x18) = eax;
    SET_LO8(edx, MEM8(eax + 0x10B));
    PUSH32(esp, 0xE);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x2C) = LO8(edx);
    MEM32(esp + 0x24) = 0x28;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001A069B: ;
    PUSH32(esp, 0xE);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001A06AE: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    eax = eax + 0x320;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A06C3: ;
    esp = esp + 0x28;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_NZ(esi, esi)) { sub_001A06D5(); return; } /* jne: not equal / not zero */

loc_001A06CD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A0740
 * Original: 0x001A0740 - 0x001A0760 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A0CD0(); /* call 0x001A0CD0 */

loc_001A074A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A0760(); return; } /* jne: not equal / not zero */

loc_001A0753: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001A0770
 * Original: 0x001A0770 - 0x001A0785 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0770(void)
{

loc_001A0770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A0CD0(); /* call 0x001A0CD0 */

loc_001A077A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001A0780: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A0790
 * Original: 0x001A0790 - 0x001A0CC4 (1332 bytes, 403 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_001A0790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ZX8(MEM8(ebx + 0x39));
    eax = MEM32(eax * 4 + 0x6B8170);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (CMP_EQ(eax, esi)) goto loc_001A07D4; /* je: equal / zero */

loc_001A07C1: ;
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A07C9: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A0C80; /* jne: not equal / not zero */

loc_001A07D4: ;
    edx = MEM32(ebx + 0x2C);
    if (CMP_EQ(MEM32(edx + 0x3C8), esi)) goto loc_001A0BDE; /* je: equal / zero */

loc_001A07E3: ;
    edi = ZX8(MEM8(ebx + 0x3A));
    ecx = ZX8(MEM8(ebx + 0x39));
    eax = MEM32(ebx + 0x44);
    edi = edi << 5;
    ecx = ecx + ecx * 2;
    edi = edi + 0x59A638;
    edx = ecx * 8 + 0x6B8180;
    (void)0; /* cmp MEM32(edi + 4), esi - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(MEM32(edi + 4), esi)) goto loc_001A0CBD; /* jle: less or equal (signed <=) */

loc_001A0822: ;
    MEM32(esp + 0x18) = esi;
    goto loc_001A0830;

loc_001A0828: ;
    esi = 0; /* xor self */
    /* nop */

loc_001A0830: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_001A093D; /* je: equal / zero */

loc_001A0838: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x18);
    esi = MEM32(ebx + 0x2C);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(edx + ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001A0851: ;
    xmm0 = MEMF(edi + 8); /* movss */
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(edi + 0xC);
    if (1 /* jnp after test - parity */) goto loc_001A08DC; /* jnp: not parity */

loc_001A0869: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + ecx + 4);
    eax = eax + ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = ecx;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = edx;
    xmm1 = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x34) = eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x60;
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    goto loc_001A08EA;

loc_001A08DC: ;
    ecx = esp + 0x60;
    edx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + MEM32(esp + 0x20);

loc_001A08EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001A08F0: ;
    esi = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x48);
    esp = esp + 0xC;
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_001A0905: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 4) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_001A095F; /* jb: below (unsigned <) */

loc_001A0922: ;
    eax = MEM32(esp + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001A092B: ;
    MEM32(esi) = 0;
    eax = MEM32(ebx + 0x40);
    esp = esp + 8;
    eax--;
    MEM32(ebx + 0x40) = eax;
    eax = esi;

loc_001A093D: ;
    ecx = MEM32(esp + 0x38);
    if (TEST_NZ(ecx, ecx)) goto loc_001A0949; /* jne: not equal / not zero */

loc_001A0945: ;
    MEM32(esp + 0x38) = eax;

loc_001A0949: ;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x28);
    ecx++;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_001A0963;

loc_001A095F: ;
    eax = MEM32(esp + 0x24);

loc_001A0963: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = edx + 0x10;
    ecx++;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 4);
    eax = eax + 0xC;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    if (CMP_L(ecx, edx)) goto loc_001A0828; /* jl: less (signed <) */

loc_001A0989: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_001A0CBD; /* je: equal / zero */

loc_001A0995: ;
    xmm1 = MEMF(0x64909C); /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001A09AD; /* ja: above (unsigned >) */

loc_001A09AA: ;
    xmm1 = xmm0; /* movaps */

loc_001A09AD: ;
    xmm0 = MEMF(edi + 0x10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x3C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648D14))) goto loc_001A0CBD; /* jb: below (unsigned <) */

loc_001A09D3: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001A09EF: ;
    esp = esp + 0xC;
    goto loc_001A09F7;

loc_001A09F4: ;
    ebx = MEM32(ebp + 8);

loc_001A09F7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A09FC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x28)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x28))); }
    if (TEST_Z(edx, edx)) goto loc_001A0A19; /* je: equal / zero */

loc_001A0A05: ;
    eax = edx;

loc_001A0A07: ;
    eax--;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = ecx;
    if ((eax != 0)) goto loc_001A0A07; /* jne: not equal / not zero */

loc_001A0A19: ;
    eax = MEM32(ebx + 0x44);
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ebx + 0x2C);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(edi + 0xC);
    eax = eax << 4;
    ecx = MEM32(edx + eax + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x4B0);
    edx = MEM32(eax + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = ecx;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001A0A62: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001A0A76; /* je: equal / zero */

loc_001A0A69: ;
    eax = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_001A0A76; /* je: equal / zero */

loc_001A0A71: ;
    edx = MEM32(eax + 8);
    goto loc_001A0A78;

loc_001A0A76: ;
    edx = 0; /* xor self */

loc_001A0A78: ;
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_001A0A82: ;
    xmm0 = MEMF(edi + 8); /* movss */
    esp = esp + 4;
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(edi + 0xC);
    if (1 /* jnp after test - parity */) goto loc_001A0B0D; /* jnp: not parity */

loc_001A0A9A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax + ecx + 4);
    eax = eax + ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = ecx;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = edx;
    xmm1 = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x34) = eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x60;
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    goto loc_001A0B1B;

loc_001A0B0D: ;
    ecx = esp + 0x60;
    edx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + MEM32(esp + 0x24);

loc_001A0B1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001A0B21: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esp + 0x48);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 4), _icall_esp); /* indirect call */
    }

loc_001A0B3E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 8), _icall_esp); /* indirect call */
    }

loc_001A0B4C: ;
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A0BA0; /* je: equal / zero */

loc_001A0B53: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0xC), _icall_esp); /* indirect call */
    }

loc_001A0B61: ;
    ebx = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(eax, eax)) goto loc_001A0BA0; /* je: equal / zero */

loc_001A0B6E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A0B73: ;
    xmm0 = xmm0 * MEMF(edi + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x28);
    MEMF(ebx + 4) = xmm0; /* movss */
    ebx = MEM32(ebx + 8);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(esi + 0x40);
    ecx++;
    eax--;
    MEM32(esp + 0x20) = ebx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esp + 0x28) = eax;

loc_001A0BA0: ;
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_001A0CBD; /* jb: below (unsigned <) */

loc_001A0BBF: ;
    eax = MEM32(esp + 0x28);
    if (CMP_LE(eax & eax, 0)) goto loc_001A0CBD; /* jle: less or equal (signed <=) */

loc_001A0BCB: ;
    eax = MEM32(esi + 0x40);
    if (CMP_L(eax, MEM32(edi + 0x14))) goto loc_001A09F4; /* jl: less (signed <) */

loc_001A0BD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A0BDE: ;
    (void)0; /* test MEM8(ebx + 0x38), 1 - flags set for next jcc */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM8(esp + 0x17) = 0;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(MEM8(ebx + 0x38), 1)) goto loc_001A0C07; /* je: equal / zero */

loc_001A0BF7: ;
    xmm0 = MEMF(ebx + 0x34); /* movss */
    MEM8(esp + 0x17) = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001A0C07: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, 0xFF);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x61;
    eax = eax + 0x2A;
    PUSH32(esp, eax);
    eax = 0x5C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A0C27: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_001A0C80; /* je: equal / zero */

loc_001A0C2E: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x17));
    MEM8(eax + 0x2C) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0xD;
    MEM8(eax + 0x3B) = 8;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ebx + 0x2C);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 0x30);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx + 0x34);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ebx + 0x38);
    MEM32(eax + 0xC) = ecx;

loc_001A0C80: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A0CBD; /* jne: not equal / not zero */

loc_001A0C89: ;
    edx = ebx;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001A0C90: ;
    eax = MEM32(ebx);
    if (CMP_L(eax, 2)) goto loc_001A0CBD; /* jl: less (signed <) */

loc_001A0C97: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, esi)) goto loc_001A0CB1; /* je: equal / zero */

loc_001A0CA4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A0CA7: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A0CB1: ;
    edx = 1;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001A0CBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A0CD0
 * Original: 0x001A0CD0 - 0x001A0D1A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0CD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A0CD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM32(esi + 0x40) = 0;
    edi = 0; /* xor self */

loc_001A0CE2: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi);
    eax = eax + edi;
    if (TEST_Z(ecx, ecx)) goto loc_001A0D01; /* je: equal / zero */

loc_001A0CEE: ;
    ecx = ZX8(MEM8(esi + 0x39));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ecx + ecx * 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 8 + 0x6B8194), _icall_esp); /* indirect call */
    }

loc_001A0CFE: ;
    esp = esp + 8;

loc_001A0D01: ;
    edi = edi + 0xC;
    if (CMP_L(edi, 0x2D0)) goto loc_001A0CE2; /* jl: less (signed <) */

loc_001A0D0C: ;
    edi = MEM32(esi + 0x44);
    ecx = 0xB4;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A0D20
 * Original: 0x001A0D20 - 0x001A0D59 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A0D20: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0xD - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(edx, 0xD)) { sub_001A0D59(); return; } /* jne: not equal / not zero */

loc_001A0D2A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(eax + 0x2C))) goto loc_001A0D41; /* je: equal / zero */

loc_001A0D39: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x30))) goto loc_001A0D57; /* jne: not equal / not zero */

loc_001A0D41: ;
    SET_LO8(ecx, MEM8(eax + 0x38));
    xmm0 = MEMF(0x648EA4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x38) = LO8(ecx);
    MEMF(eax + 0x34) = xmm0; /* movss */

loc_001A0D57: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A0DF0
 * Original: 0x001A0DF0 - 0x001A0E19 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0DF0(void)
{

loc_001A0DF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x10) = 0x28;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001A0E07: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001A0E15: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001A0E20
 * Original: 0x001A0E20 - 0x001A0EA2 (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A0E20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = esi + 0x4C;
    if (TEST_Z(edx, edx)) goto loc_001A0E76; /* je: equal / zero */

loc_001A0E32: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_001A0E76; /* jne: not equal / not zero */

loc_001A0E3D: ;
    edx = MEM32(ecx + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_001A0EA0; /* je: equal / zero */

loc_001A0E47: ;
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_001A0E59; /* je: equal / zero */

loc_001A0E4D: ;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 1;
    goto loc_001A0E66;

loc_001A0E59: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */

loc_001A0E66: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_001A0E73: ;
    esp = esp + 8;

loc_001A0E76: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A0EA0; /* jne: not equal / not zero */

loc_001A0E7F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001A0E86: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001A0EA0; /* jl: less (signed <) */

loc_001A0E8D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001A0EA2(); return; } /* je: equal / zero */

loc_001A0E9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A0E9D: ;
    esp = esp + 4;

loc_001A0EA0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1100
 * Original: 0x001A1100 - 0x001A11BF (191 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1100(void)
{
    float xmm0;

loc_001A1100: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x3A));
    PUSH32(esp, ebx);
    ecx = ecx << 5;
    eax = MEM32(ecx + 0x59A638);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 4;
    edi = edi * 4 + 0x59A610;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A1123: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    MEM8(eax + 0x46) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    esi = ecx;
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(eax + 0x47) = LO8(edx);
    ebx = MEM32(esi);
    edx = eax + 0xC;
    MEM32(edx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    edx = MEM32(ecx);
    esi = MEM32(esp + 0x1C);
    eax = eax + 0x18;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A119A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esi + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A11AD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esi + 0x24) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A11C0
 * Original: 0x001A11C0 - 0x001A11EA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A11C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A11C0: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(eax + 0x10); /* movss */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    xmm0 = xmm0 - MEMF(eax + 0x2C); /* subss */
    edx = MEM32(ecx + 0x2C);
    xmm0 = xmm0 - MEMF(eax + 0x34); /* subss */
    /* comiss xmm0, MEMF(edx + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x228))) { sub_001A11EA(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A11E7: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A11F0
 * Original: 0x001A11F0 - 0x001A1256 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A11F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A11F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A11F5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    SET_LO8(eax, MEM8(ecx + 0x597668));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFF);
    SET_LO8(edx, LO8(edx) - 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edx & 2;
    MEM8(esp + 0x14) = LO8(edx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x597978);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_001A1239: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_001A1255; /* je: equal / zero */

loc_001A1240: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 0x310;
    ecx = 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A1255: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A1260
 * Original: 0x001A1260 - 0x001A1295 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1260(void)
{

loc_001A1260: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = ecx + 0x40;
    ecx = ecx + 0x4C;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A12A0
 * Original: 0x001A12A0 - 0x001A13B3 (275 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A12A0(void)
{
    float xmm0, xmm1;

loc_001A12A0: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = ZX8(MEM8(esi + 0x330));
    eax = esi + 0x310;
    PUSH32(esp, edi);
    edi = ecx + ecx * 4;
    ecx = esi + 0x40;
    edx = MEM32(ecx);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x4C); /* subss */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x50); /* subss */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x54); /* subss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA248); /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    edx = MEM32(esp + 0x14);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x18) = xmm1; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 8) = edx;
    MEMF(eax + 4) = xmm0; /* movss */
    SET_LO8(eax, 0xD);
    edi = edi * 4 + 0x59A610;
    MEM8(esi + 0x148) = LO8(eax);
    MEM8(esi + 0x149) = 0x12;
    MEM8(esi + 0x14A) = 0;
    MEM8(esi + 0x14B) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A1395: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x64);
    SET_LO16(edx, LO16(edx) + MEM16(edi));
    eax = eax | 1;
    POP32(esp, edi);
    MEM16(esi + 0x36) = LO16(edx);
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A13C0
 * Original: 0x001A13C0 - 0x001A1412 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A13C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A13C0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x333));
    SET_LO8(edx, MEM8(ecx + 0x331));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA20C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x334));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x332));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x331) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ecx + 0x332) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001A1412(); return; } /* je: equal / zero */

loc_001A1406: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_001A1417(); return; /* tail jmp 0x001A1417 */

}

/**
 * sub_001A14E0
 * Original: 0x001A14E0 - 0x001A1779 (665 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A14E0(void)
{
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

loc_001A14E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    xmm0 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(ecx + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x48); /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x40); /* subss */
    edx = edx << 2;
    xmm0 = xmm0 * MEMF(edx + 0x77148C); /* mulss */
    xmm1 = xmm1 * MEMF(edx + 0x77149C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x7FA248); /* mulss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    eax = ecx + 0x294;
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_001A155A; /* jbe: below or equal (unsigned <=) */

loc_001A153F: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_001A155A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648DE0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001A1588; /* jbe: below or equal (unsigned <=) */

loc_001A157A: ;
    xmm0 = MEMF(0x648DE0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001A1588: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(ecx + 0x38); /* movss */
    PUSH32(esp, esi);
    xmm2 = xmm3; /* movaps */
    /* fld st(0) */
    PUSH32(esp, edi);
    /* FPU: fsin  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * MEMF(edx + 0x77148C); /* mulss */
    xmm4 = xmm4 + MEMF(ecx + 0x40); /* addss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esi = (int32_t)xmm4; /* cvttss2si */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = SX16(LO16(esi));
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 0x44); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = xmm4 + xmm1; /* addss */
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 4) = xmm4; /* movss */
    xmm2 = xmm2 * MEMF(edx + 0x77149C); /* mulss */
    xmm4 = MEMF(ecx + 0x48); /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 8) = xmm2; /* movss */
    esi = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(esi);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x77148C); /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    xmm4 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x77149C); /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    edi = (int32_t)xmm4; /* cvttss2si */
    xmm4 = MEMF(esp + 0x14); /* movss */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    MEM16(eax + 0x34) = LO16(esi);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * MEMF(edx + 0x77148C); /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm5; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm5; /* movss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 - xmm5; /* subss */
    edi = (int32_t)xmm6; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x3C) = xmm6; /* movss */
    xmm2 = xmm2 * MEMF(edx + 0x77149C); /* mulss */
    xmm6 = MEMF(ecx + 0x48); /* movss */
    xmm6 = xmm6 - xmm2; /* subss */
    edi = (int32_t)xmm6; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm2; /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEM16(eax + 0x50) = LO16(esi);
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x77148C); /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 - xmm5; /* subss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x77149C); /* mulss */
    xmm1 = MEMF(ecx + 0x48); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    POP32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(eax + 0x6C) = LO16(esi);
    MEMF(eax + 0x5C) = xmm0; /* movss */
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
 * sub_001A1780
 * Original: 0x001A1780 - 0x001A1D36 (1462 bytes, 317 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1780(void)
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

loc_001A1780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x224;
    xmm0 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm1 = MEMF(ebx + 0x320); /* movss */
    xmm1 = xmm1 * MEMF(ebx + 0x310); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x310;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(edi + 8); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    ecx = edi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    xmm1 = xmm1 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = eax;
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = ecx;
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = edx;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    esi = ebx + 0x40;
    edx = esi;
    eax = MEM32(edx);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x34) = 1;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x38) = edx;
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    edx = MEM32(esp + 0x1C);
    MEMF(esi) = xmm1; /* movss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    MEM32(esp + 0x40) = edx;
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0x2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(ebx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x50); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(ebx + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(ebx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x44); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x44); /* addss */
    MEMF(ebx + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x48); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x48); /* addss */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_001A1A15: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A1D2D; /* je: equal / zero */

loc_001A1A1D: ;
    fp_push(MEMF(ebx + 0x44)); /* fld float */
    xmm0 = MEMF(ebx + 0x40); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = edi + 0x40;
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0xD0;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0x180;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x48); /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x18C;
    edi = esp + 0x60;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_001A1A8A: ;
    edx = esp + 0xDC;
    esi = ZX8(LO8(eax));
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0029FC30(); /* call 0x0029FC30 */

loc_001A1AA2: ;
    esp = esp + 0x18;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = ZX8(LO8(eax));
    if (TEST_NZ(esi, esi)) goto loc_001A1AB4; /* jne: not equal / not zero */

loc_001A1AAC: ;
    if (TEST_Z(eax, eax)) { sub_001A1D36(); return; } /* je: equal / zero */

loc_001A1AB4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebx + 0x40);
    ecx = MEM32(ebx + 0x44);
    xmm1 = MEMF(esp + 0x180); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebx + 0x48);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (TEST_Z(eax, eax)) goto loc_001A1B0F; /* je: equal / zero */

loc_001A1AD6: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    if (TEST_Z(esi, esi)) goto loc_001A1AE8; /* je: equal / zero */

loc_001A1AE3: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_001A1B0F; /* jb: below (unsigned <) */

loc_001A1AE8: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x30) = 0x10000000;
    eax = esp + 0xE0;
    MEM32(esp + 0x34) = 0x2A7;
    MEM32(esp + 0x44) = 0x2A8;
    goto loc_001A1B34;

loc_001A1B0F: ;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEM32(esp + 0x30) = 0x20000000;
    eax = esp + 0x190;
    MEM32(esp + 0x34) = 0x2B2;
    MEM32(esp + 0x44) = 0x2B3;

loc_001A1B34: ;
    esi = eax + 0x70;
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    eax = esp + 0x28;
    edi = esp + 0x94;
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_001A1B4E: ;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    xmm2 = MEMF(0x6490F4); /* movss */
    edi = MEM32(esp + 0x34);
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(0x6493AC); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(0x649440); /* movss */
    esp = esp + 4;
    esi = 2;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    edi = edi | 0x1000002;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_001A1C5F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_001A1C80: ;
    PUSH32(esp, eax);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_001A1CCB: ;
    esp = esp + 0x30;
    if (TEST_Z(edi, 0x10000000)) goto loc_001A1CFB; /* je: equal / zero */

loc_001A1CD6: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_001A1CE0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x6B7A24) = xmm0; /* movss */

loc_001A1CFB: ;
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    ecx = MEM32(esp + 0x44);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    eax = esp + 0xA8;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_001A1D2A: ;
    esp = esp + 0x18;

loc_001A1D2D: ;
    eax = 0; /* xor self */
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
 * sub_001A1D50
 * Original: 0x001A1D50 - 0x001A1D7F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A1D50: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x36));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x324))) goto loc_001A1D79; /* jge: greater or equal (signed >=) */

loc_001A1D61: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x326);
    edx = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ZX8(MEM8(ecx + 0x7B));
    if (CMP_GE(eax, edx)) goto loc_001A1D79; /* jge: greater or equal (signed >=) */

loc_001A1D76: ;
    MEM8(ecx + 0x7B) = LO8(eax);

loc_001A1D79: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001A1D80
 * Original: 0x001A1D80 - 0x001A1E77 (247 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1D80(void)
{
    float xmm0, xmm1, xmm2;

loc_001A1D80: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x6491DC); /* movss */
    xmm2 = MEMF(0x648E40); /* movss */
    eax = MEM32(esp + 4);
    MEMF(0x876870) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x87688C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(0x876798) = xmm2; /* movss */
    xmm2 = MEMF(0x6490F4); /* movss */
    MEMF(0x876880) = xmm0; /* movss */
    MEMF(0x876884) = xmm0; /* movss */
    MEMF(0x876888) = xmm0; /* movss */
    MEMF(0x876890) = xmm1; /* movss */
    xmm1 = MEMF(0x648D20); /* movss */
    MEMF(0x87678C) = xmm0; /* movss */
    MEMF(0x876790) = xmm0; /* movss */
    MEMF(0x876794) = xmm0; /* movss */
    MEMF(0x87679C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D18); /* movss */
    MEMF(0x8767A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(0x876894) = xmm1; /* movss */
    MEM8(0x876770) = 1;
    MEMF(0x8767A0) = xmm2; /* movss */
    MEMF(0x8767A8) = xmm1; /* movss */
    MEMF(0x8767AC) = xmm0; /* movss */
    MEM8(0x876860) = 0;
    edx = MEM32(eax + 0x2C);
    eax = 0x8767B0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001A1E62: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = 0x876870;
    MEM32(edx) = 0x876770;
    esp += 4; return; /* ret */

}

/**
 * sub_001A1E80
 * Original: 0x001A1E80 - 0x001A1EE6 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1E80(void)
{

loc_001A1E80: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = eax + 4;
    eax = MEM32(esp + 0xC);
    edx = eax;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edx = ecx + 4;
    esi = eax;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    edx = ecx + 0x10;
    esi = eax;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    edx = MEM32(eax);
    ecx = ecx + 0xF4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1EF0
 * Original: 0x001A1EF0 - 0x001A1F11 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A1EF0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x30); /* subss */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2C);
    /* comiss xmm0, MEMF(ecx + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x228))) { sub_001A1F11(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A1F0E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A1F20
 * Original: 0x001A1F20 - 0x001A2045 (293 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A1F20(void)
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

loc_001A1F20: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 2;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_001A1F2F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A1F34: ;
    xmm0 = xmm0 * MEMF(0x6B7A0C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A08); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A1F4F: ;
    xmm0 = xmm0 * MEMF(0x6B7A14); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A10); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A1F6A: ;
    xmm0 = xmm0 * MEMF(0x6B7A1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A18); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A1F95: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A1FA5: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A1FB5: ;
    esi = MEM32(esp + 0x30);
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(0x6492E8); /* mulss */
    edx = esi + 4;
    edi = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x299);
    PUSH32(esp, 0x29A);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001A2001: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_001A203F; /* je: equal / zero */

loc_001A2008: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 0xF8) = ecx;
    edx = MEM32(esi + 0x1C);
    esi = MEM32(esp + 0x20);
    SET_LO8(ecx, 0x80);
    MEM8(eax + 0x100) = LO8(ecx);
    MEM8(eax + 0x101) = LO8(ecx);
    MEM8(eax + 0x102) = LO8(ecx);
    edi = eax + 0x104;
    ecx = 0x40;
    MEM32(eax + 0xFC) = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A203F: ;
    POP32(esp, edi);
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
 * sub_001A2050
 * Original: 0x001A2050 - 0x001A208F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2050(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2050: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001A208E; /* je: equal / zero */

loc_001A205A: ;
    eax = ecx + 0x108;
    ecx = ecx + 0x114;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);

loc_001A208E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2090
 * Original: 0x001A2090 - 0x001A21AE (286 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2090(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001A2090: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    esp = esp - 0x18;
    if (CMP_EQ(ecx, edx)) goto loc_001A21AA; /* je: equal / zero */

loc_001A20A3: ;
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(ecx + 0x104) = LO8(edx);
    if (1 /* jp after test - parity */) goto loc_001A20C2; /* jp: parity */

loc_001A20BD: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001A20CE;

loc_001A20C2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */

loc_001A20CE: ;
    PUSH32(esp, esi);
    eax = ecx + 0x108;
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi);
    MEM32(esp + 8) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    xmm2 = MEMF(esp + 8); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x114); /* subss */
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 8) = xmm2; /* movss */
    esi = MEM32(esp + 8);
    MEM32(esp + 0xC) = edi;
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x118); /* subss */
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x11C); /* subss */
    esi = MEM32(esp + 0xC);
    MEM32(esp + 0x18) = esi;
    MEMF(esp + 0x10) = xmm2; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = esi;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    esi = ecx + 0x120;
    MEMF(esp + 0x14) = xmm2; /* movss */
    edi = MEM32(esp + 0x14);
    MEM32(esi) = edi;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    edi = MEM32(esp + 0x18);
    MEM32(esi + 4) = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edi = MEM32(esp + 0x1C);
    MEM8(ecx + 0x1F4) = LO8(edx);
    edx = MEM32(eax);
    MEM32(esi + 8) = edi;
    MEMF(ecx + 0x124) = xmm1; /* movss */
    ecx = ecx + 0x1F8;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);

loc_001A21AA: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A21B0
 * Original: 0x001A21B0 - 0x001A2333 (387 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A21B0(void)
{
    float xmm0, xmm1;

loc_001A21B0: ;
    ecx = MEM32(0x595D14);
    edx = MEM32(0x595D18);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F08); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x875D74) = LO8(eax);
    MEM8(0x875D75) = LO8(eax);
    MEM8(0x875D76) = LO8(eax);
    MEM8(0x875D77) = LO8(eax);
    MEM32(0x875DB8) = ecx;
    MEM32(0x875DC4) = ecx;
    MEM8(0x875DE0) = LO8(eax);
    MEM32(0x875DBC) = edx;
    MEM32(0x875DC8) = edx;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(0x875DDD) = LO8(ecx);
    MEM8(0x875DDE) = LO8(ecx);
    MEMF(0x875DD0) = xmm1; /* movss */
    ecx = 0; /* xor self */
    eax = 2;
    MEM32(0x875D7C) = eax;
    MEM32(0x875D88) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x595D1C);
    MEM32(0x875DC0) = esi;
    MEM32(0x875DCC) = esi;
    edx = 4;
    MEM32(0x875D78) = edx;
    MEM32(0x875D84) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x875D94) = 0x2AA;
    MEM16(0x875D68) = 0xB4;
    MEMF(0x875D6C) = xmm0; /* movss */
    MEMF(0x875D70) = xmm0; /* movss */
    MEM16(0x875D98) = 0x78;
    MEM16(0x875D9A) = 3;
    MEM16(0x875D9C) = 1;
    MEMF(0x875DA0) = xmm0; /* movss */
    MEM32(0x875DD4) = 0x81C000;
    MEM8(0x875DDC) = 0x2E;
    MEM8(0x875DDF) = LO8(ecx);
    MEM32(0x875DD8) = ecx;
    MEM32(0x875D80) = ecx;
    MEM32(0x875D8C) = ecx;
    MEM32(0x875D90) = 0x303;
    MEM8(0x875D28) = 1;
    ecx = MEM32(eax + 0x2C);
    xmm1 = MEMF(ecx + 0x228); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(0x875D38) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    MEMF(0x875D40) = xmm1; /* movss */
    MEMF(0x875D44) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(0x875D48) = xmm1; /* movss */
    xmm1 = MEMF(0x649098); /* movss */
    MEMF(0x875D50) = xmm1; /* movss */
    MEMF(0x875D54) = xmm0; /* movss */
    MEM32(edx) = 0x875D68;
    MEM32(eax) = 0x875D28;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A2340
 * Original: 0x001A2340 - 0x001A23A2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2340(void)
{
    float xmm0;

loc_001A2340: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    edx = ecx + 0x44;
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(ecx + 0x40) = xmm0; /* movss */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = esi + 4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEMF(esi + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A239A: ;
    POP32(esp, edi);
    MEMF(esi + 0x24) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A23B0
 * Original: 0x001A23B0 - 0x001A23D4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A23B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A23B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x48); /* movss */
    edx = MEM32(ecx + 0x2C);
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    /* comiss xmm0, MEMF(edx + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x228))) { sub_001A23D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A23D1: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001A23E0
 * Original: 0x001A23E0 - 0x001A2412 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A23E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A23E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001A23F5: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_001A2411; /* je: equal / zero */

loc_001A23FC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 0x170;
    ecx = 0xF;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A2411: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2420
 * Original: 0x001A2420 - 0x001A245C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2420(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2420: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001A245B; /* je: equal / zero */

loc_001A242A: ;
    eax = ecx + 0x70;
    ecx = ecx + 0x174;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);

loc_001A245B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2460
 * Original: 0x001A2460 - 0x001A256C (268 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2460(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001A2460: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    esp = esp - 0x18;
    if (TEST_Z(ecx, ecx)) goto loc_001A2568; /* je: equal / zero */

loc_001A2471: ;
    edx = MEM32(ecx + 0x98);
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    edx = edx & 0xFFFFFBFFu;
    edx = edx | 0x201;
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(ecx + 0x98) = edx;
    if (1 /* jp after test - parity */) goto loc_001A24A2; /* jp: parity */

loc_001A249D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001A24AE;

loc_001A24A2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */

loc_001A24AE: ;
    eax = ecx + 0x70;
    edx = MEM32(eax);
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm2 = MEMF(esp); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x174); /* subss */
    MEMF(esp) = xmm2; /* movss */
    MEM32(esp + 4) = edx;
    xmm2 = MEMF(esp + 4); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x178); /* subss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm2; /* movss */
    MEM32(esp + 8) = eax;
    xmm2 = MEMF(esp + 8); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x17C); /* subss */
    eax = MEM32(esp + 4);
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 8) = xmm2; /* movss */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    edx = MEM32(esp + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    eax = ecx + 0x88;
    MEM32(eax) = edx;
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    MEMF(ecx + 0x8C) = xmm1; /* movss */
    MEM8(ecx + 0x170) = 0;

loc_001A2568: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2570
 * Original: 0x001A2570 - 0x001A2687 (279 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2570(void)
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

loc_001A2570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(0x7FA20C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm7 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm6 = xmm7; /* movaps */
    xmm5 = xmm1; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_001A25B3; /* je: equal / zero */

loc_001A259E: ;
    xmm0 = MEMF(ebx + 0x198); /* movss */

loc_001A25A6: ;
    eax--;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = xmm2; /* movaps */
    if ((eax != 0)) goto loc_001A25A6; /* jne: not equal / not zero */

loc_001A25B3: ;
    SET_LO8(eax, MEM8(ebx + 0x170));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001A2687(); return; } /* je: equal / zero */

loc_001A25C1: ;
    xmm0 = MEMF(ebx + 0x188); /* movss */
    xmm2 = MEMF(ebx + 0x18C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x184); /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001A25E5; /* ja: above (unsigned >) */

loc_001A25E2: ;
    xmm0 = xmm2; /* movaps */

loc_001A25E5: ;
    MEMF(ebx + 0x184) = xmm0; /* movss */
    xmm7 = xmm7 * MEMF(0x648CE0); /* mulss */
    xmm7 = xmm7 + MEMF(ebx + 0x194); /* addss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x194) = xmm7; /* movss */
    if ((xmm7 < xmm1)) goto loc_001A2627; /* jb: below (unsigned <) */

loc_001A260A: ;
    xmm2 = xmm7; /* movaps */
    /* nop */

loc_001A2610: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 >= xmm1)) goto loc_001A2610; /* jae: above or equal (unsigned >=) */

loc_001A261F: ;
    MEMF(ebx + 0x194) = xmm2; /* movss */

loc_001A2627: ;
    fp_push(MEMF(ebx + 0x194)); /* fld float */
    xmm0 = MEMF(ebx + 0x184); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 1;
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 / MEMF(esp + 0x10); /* divss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = xmm0 * MEMF(ebx + 0x184); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(ebx + 0x6C) = xmm0; /* movss */
    MEMF(ebx + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_001A29C0
 * Original: 0x001A29C0 - 0x001A2A24 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A29C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6, xmm7;

loc_001A29C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm7 = MEMF(edi + 0x78); /* movss */
    xmm6 = MEMF(edi + 0x7C); /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x5C) = xmm6; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) { sub_001A2A24(); return; } /* je: equal / zero */

loc_001A2A02: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x6491F8); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    eax = ZX16(MEM16(ecx + 0x174));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    g_seh_ebp = ebp; sub_001A2A2C(); return; /* tail jmp 0x001A2A2C */

}

/**
 * sub_001A2D10
 * Original: 0x001A2D10 - 0x001A2D90 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2D10: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001A2D1E; /* jne: not equal / not zero */

loc_001A2D19: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001A2D1E: ;
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
    if (TEST_Z(esi, esi)) goto loc_001A2D6A; /* je: equal / zero */

loc_001A2D46: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_001A2D6A; /* jb: below (unsigned <) */

loc_001A2D4F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001A2D59: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001A2D61: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) { sub_001A2D90(); return; } /* jne: not equal / not zero */

loc_001A2D6A: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001A2D7C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001A2D84: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) { sub_001A2D90(); return; } /* jne: not equal / not zero */

loc_001A2D8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A2DE0
 * Original: 0x001A2DE0 - 0x001A2E03 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2DE0: ;
    eax = MEM32(ecx + 0x18);
    if (TEST_S(eax, eax)) goto loc_001A2E02; /* jl: less (signed <) */

loc_001A2DE7: ;
    if (CMP_GE(eax, 0xC)) goto loc_001A2E02; /* jge: greater or equal (signed >=) */

loc_001A2DEC: ;
    eax = MEM32(eax * 4 + 0x59A6D8);
    if (TEST_Z(eax, eax)) goto loc_001A2E02; /* je: equal / zero */

loc_001A2DF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A2DFF: ;
    esp = esp + 8;

loc_001A2E02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2E10
 * Original: 0x001A2E10 - 0x001A2E38 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2E10(void)
{

loc_001A2E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x174));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6001D);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001A2E34: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2E40
 * Original: 0x001A2E40 - 0x001A2E68 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2E40(void)
{

loc_001A2E40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x174));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6002D);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001A2E64: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2E70
 * Original: 0x001A2E70 - 0x001A2ECE (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2E70: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00173230(); /* call 0x00173230 */

loc_001A2E7D: ;
    edi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A2E84: ;
    if (TEST_Z(edi, edi)) goto loc_001A2E8E; /* je: equal / zero */

loc_001A2E88: ;
    esi = MEM32(edi + 0xBC);

loc_001A2E8E: ;
    eax = MEM32(esp + 0xC);
    if (CMP_BE(MEM16(eax + 0x3AE), 0)) goto loc_001A2ECB; /* jbe: below or equal (unsigned <=) */

loc_001A2E9C: ;
    if (TEST_Z(esi, esi)) goto loc_001A2EA6; /* je: equal / zero */

loc_001A2EA0: ;
    ecx = ZX16(MEM16(esi + 0x60));
    goto loc_001A2EA9;

loc_001A2EA6: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_001A2EA9: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x174));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6002E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001A2EC8: ;
    esp = esp + 0x1C;

loc_001A2ECB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A2ED0
 * Original: 0x001A2ED0 - 0x001A2EF0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2ED0(void)
{

loc_001A2ED0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC000);
    PUSH32(esp, 0x33);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001A2EEC: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A3320
 * Original: 0x001A3320 - 0x001A337A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3320(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A3320: ;
    eax = MEM32(0x802324);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x77532C) = 0;
    MEMF(0x775328) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_001A3378; /* jle: less or equal (signed <=) */

loc_001A3341: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_001A3344: ;
    eax = MEM32(0x84B4A0);
    ecx = esi + eax;
    SET_LO8(eax, MEM8(ecx + 0x15));
    SET_LO8(eax, LO8(eax) >> 2);
    if (CMP_AE(LO8(eax), 0x20)) goto loc_001A3377; /* jae: above or equal (unsigned >=) */

loc_001A3356: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x59A728);
    if (TEST_Z(eax, eax)) goto loc_001A336A; /* je: equal / zero */

loc_001A3364: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A3367: ;
    esp = esp + 4;

loc_001A336A: ;
    eax = MEM32(0x802324);
    edi++;
    esi = esi + 0x78;
    if (CMP_L(edi, eax)) goto loc_001A3344; /* jl: less (signed <) */

loc_001A3377: ;
    POP32(esp, esi);

loc_001A3378: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3380
 * Original: 0x001A3380 - 0x001A33A2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3380(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3380: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x17));
    if (CMP_AE(LO8(eax), 0x10)) goto loc_001A339F; /* jae: above or equal (unsigned >=) */

loc_001A338B: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x59A7A8);
    if (TEST_Z(eax, eax)) goto loc_001A339F; /* je: equal / zero */

loc_001A3399: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A339C: ;
    esp = esp + 4;

loc_001A339F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A33B0
 * Original: 0x001A33B0 - 0x001A33C0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A33B0(void)
{

loc_001A33B0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x14) = 0;
    PUSH32(esp, 0); sub_001A89B0(); /* call 0x001A89B0 */

loc_001A33BD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A33E0
 * Original: 0x001A33E0 - 0x001A33F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A33E0(void)
{

loc_001A33E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    MEM8(edi + 0x16) = MEM8(edi + 0x16) | 4;
    PUSH32(esp, 0); sub_0011C8F0(); /* call 0x0011C8F0 */

loc_001A33EE: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3400
 * Original: 0x001A3400 - 0x001A34CE (206 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3400(void)
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

loc_001A3400: ;
    esp = esp - 0x3C;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    ecx = ZX8(MEM8(esi + 0x22));
    edx = ZX8(MEM8(esi + 0x21));
    MEM8(esp + 4) = LO8(eax);
    MEM8(esp + 5) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x23));
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + 0x20);
    eax = 0xFF;
    ecx = ecx & eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x44) = ecx;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001A3473; /* jge: greater or equal (signed >=) */

loc_001A346D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A3473: ;
    SET_LO8(edx, MEM8(esi + 0x1E));
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(ecx, MEM8(esi + 0x1C));
    PUSH32(esp, eax);
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x2D) = LO8(eax);
    MEM8(esp + 0x2E) = LO8(eax);
    MEM8(esp + 0x2F) = LO8(eax);
    MEM8(esp + 0x30) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    eax = MEM32(0x84B4B8);
    MEM8(esp + 0x32) = LO8(edx);
    edx = MEM32(esi + 0x18);
    MEM8(esp + 0x33) = LO8(ecx);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0); sub_001BBEA0(); /* call 0x001BBEA0 */

loc_001A34BC: ;
    SET_LO8(eax, MEM8(esi + 0x16));
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x16) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001A34D0
 * Original: 0x001A34D0 - 0x001A34E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A34D0(void)
{

loc_001A34D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0x16) = MEM8(esi + 0x16) | 4;
    PUSH32(esp, 0); sub_0017C9A0(); /* call 0x0017C9A0 */

loc_001A34DE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A34F0
 * Original: 0x001A34F0 - 0x001A371D (557 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A34F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_001A34F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(ebx + 8));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001A3714; /* je: equal / zero */

loc_001A350F: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm5 = MEMF(0x648D14); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA84); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA80); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x10); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp = esp - 8;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001A35F2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x78); /* movss */
    esp = esp + 0x24;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A3622: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, 0xFF);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x2A);
    eax = 0x80;
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A3669: ;
    esp = esp + 8;
    edx = edx | 0xFFFFFFFFu;
    if (TEST_Z(eax, eax)) goto loc_001A36B5; /* je: equal / zero */

loc_001A3673: ;
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = LO8(edx);
    MEM8(eax + 0x39) = 0x19;
    MEM8(eax + 0x3A) = LO8(edx);
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x17;
    esi = eax + 0x3C;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xD;
    esi = esp + 0x3C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A36B5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 8);
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    PUSH32(esp, 0);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x847024);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x44) = xmm0; /* movss */
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x67C;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001A3714: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3720
 * Original: 0x001A3720 - 0x001A3742 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3720(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3720: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x17));
    if (CMP_AE(LO8(eax), 0x17)) goto loc_001A373F; /* jae: above or equal (unsigned >=) */

loc_001A372B: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x59A7E8);
    if (TEST_Z(eax, eax)) goto loc_001A373F; /* je: equal / zero */

loc_001A3739: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A373C: ;
    esp = esp + 4;

loc_001A373F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3750
 * Original: 0x001A3750 - 0x001A37E8 (152 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A3750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + 0x16));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    SET_LO8(ecx, LO8(ecx) | 4);
    MEM8(esi + 0x16) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x5958A3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A37CC; /* je: equal / zero */

loc_001A3777: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x4D;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001A37CC: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x5958A0));
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000FF2F0(); /* call 0x000FF2F0 */

loc_001A37DD: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A37F0
 * Original: 0x001A37F0 - 0x001A386C (124 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A37F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A37F0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x16));
    PUSH32(esp, ebx);
    SET_LO8(edx, 4);
    PUSH32(esp, esi);
    esi = MEM32(0x84B290);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 0x16) = LO8(ecx);
    SET_LO8(ebx, MEM8(esi + 0x11));
    ecx = MEM32(eax + 0x18);
    POP32(esp, esi);
    (void)0; /* test LO8(edx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(edx), LO8(ebx))) goto loc_001A381B; /* je: equal / zero */

loc_001A3812: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x13)) goto loc_001A3869; /* je: equal / zero */

loc_001A381B: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_001A3839; /* jne: not equal / not zero */

loc_001A3824: ;
    SET_LO8(edx, MEM8(0x76F0DC));
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_001A3869; /* je: equal / zero */

loc_001A382F: ;
    if (CMP_EQ(LO8(edx), 0x10)) goto loc_001A3869; /* je: equal / zero */

loc_001A3834: ;
    if (CMP_EQ(LO8(edx), 0x11)) goto loc_001A3869; /* je: equal / zero */

loc_001A3839: ;
    if (CMP_GE(ecx, 6)) goto loc_001A3869; /* jge: greater or equal (signed >=) */

loc_001A383E: ;
    ecx = MEM32(ecx * 4 + 0x59A844);
    if (TEST_Z(ecx, ecx)) goto loc_001A3869; /* je: equal / zero */

loc_001A3849: ;
    edx = MEM32(eax + 0x1C);
    fp_push((double)SMEM32(eax + 0x1C)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001A3859; /* jge: greater or equal (signed >=) */

loc_001A3853: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A3859: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001A3866: ;
    esp = esp + 8;

loc_001A3869: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001A3870
 * Original: 0x001A3870 - 0x001A38D9 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A3870: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x16));
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ecx + 0x16) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = eax;
    if (TEST_NZ(eax, eax)) goto loc_001A38B6; /* jne: not equal / not zero */

loc_001A38B1: ;
    esi = 1;

loc_001A38B6: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 0x1C));
    PUSH32(esp, 1);
    eax = ecx + 0x38;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000F9620(); /* call 0x000F9620 */

loc_001A38CF: ;
    esp = esp + 0x10;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A38E0
 * Original: 0x001A38E0 - 0x001A38F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A38E0(void)
{

loc_001A38E0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A38ED: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3930
 * Original: 0x001A3930 - 0x001A394A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3930(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3930: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    if (TEST_S(eax, eax)) goto loc_001A3947; /* jl: less (signed <) */

loc_001A393B: ;
    if (CMP_GE(eax, 6)) goto loc_001A3947; /* jge: greater or equal (signed >=) */

loc_001A3940: ;
    MEM32(eax * 4 + 0x7713E8) = ecx;

loc_001A3947: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3950
 * Original: 0x001A3950 - 0x001A3967 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3950(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3950: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 4;
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) { sub_001A3967(); return; } /* jne: not equal / not zero */

loc_001A395F: ;
    MEM32(0x7752E4) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3980
 * Original: 0x001A3980 - 0x001A398A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3980(void)
{

loc_001A3980: ;
    MEM8(0x774C04) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3990
 * Original: 0x001A3990 - 0x001A39F3 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A3990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x16));
    SET_LO8(ebx, LO8(ebx) | 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(eax + 0x16) = LO8(ebx);
    ecx = ecx & 3;
    MEM32(esp + 0x10) = eax;
    if (((int32_t)ecx < 0)) { sub_001A39F3(); return; } /* jl: less (signed <) */

loc_001A39B9: ;
    if (CMP_LE(ecx, 1)) goto loc_001A39DC; /* jle: less or equal (signed <=) */

loc_001A39BE: ;
    if (CMP_NE(ecx, 2)) { sub_001A39F3(); return; } /* jne: not equal / not zero */

loc_001A39C3: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    g_seh_ebp = ebp; sub_001A39FB(); return; /* tail jmp 0x001A39FB */

loc_001A39DC: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    g_seh_ebp = ebp; sub_001A39FB(); return; /* tail jmp 0x001A39FB */

}

/**
 * sub_001A3A80
 * Original: 0x001A3A80 - 0x001A3B08 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3A80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A3A80: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esi + 0x16));
    SET_LO8(edx, LO8(edx) | 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEM8(esi + 0x16) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A3AB0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001A3B01; /* je: equal / zero */

loc_001A3AB7: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x26;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x24;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edx;

loc_001A3B01: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A3B10
 * Original: 0x001A3B10 - 0x001A3B2D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3B10: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 4;
    SET_LO8(ecx, MEM8(eax + 0x18));
    if (CMP_A(LO8(ecx), 2)) goto loc_001A3B2A; /* ja: above (unsigned >) */

loc_001A3B20: ;
    ecx = ZX8(LO8(ecx));
    MEM32(ecx * 4 + 0x774C80) = eax;

loc_001A3B2A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A3B30
 * Original: 0x001A3B30 - 0x001A3DAD (637 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A3B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = MEM32(0x84A144);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + 0x16));
    SET_LO8(ecx, LO8(ecx) | 4);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esi + 0x16) = LO8(ecx);
    if (CMP_G(eax, 1)) goto loc_001A3DA4; /* jg: greater (signed >) */

loc_001A3B59: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x8C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001A3BA8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648EA4); /* movss */
    esp = esp + 0x24;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A3BDC: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001A3BEB: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x28);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm4 = MEMF(0x648D78); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001A3C1F: ;
    edi = MEM32(esi + 0x18);
    ebx = ZX8(MEM8(esi + 0x19));
    xmm1 = MEMF(0x648E18); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    edi = edi & 0xFF;
    esp = esp + 8;
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A3C64: ;
    ebx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = ZX8(MEM8(esi + 0x1A));
    xmm0 = MEMF(0x6497D0); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEM32(esp + 0x34) = esi;
    edx = edx + edi;
    MEM32(esp + 0x38) = edx;
    edx = ZX8(MEM8(esi + 0x1B));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    eax = MEM32(esi + 0x1C);
    eax = eax & 0xFF;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001A3CB8; /* jge: greater or equal (signed >=) */

loc_001A3CB2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A3CB8: ;
    ecx = ZX8(MEM8(esi + 0x1D));
    edx = ZX8(MEM8(esi + 0x1F));
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E7C); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001A3D2B: ;
    eax = ZX8(MEM8(esi + 0x1E));
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649E54); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x88;
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A3D58: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001A3DA4; /* je: equal / zero */

loc_001A3D5F: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x2A;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xF;
    esi = esp + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A3DA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
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
 * sub_001A3DB0
 * Original: 0x001A3DB0 - 0x001A4038 (648 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A3DB0: ;
    esp = esp - 0x7C;
    eax = MEM32(esp + 0x80);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    SET_LO8(ecx, MEM8(eax + 0x16));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    SET_LO8(ecx, LO8(ecx) | 4);
    MEM8(eax + 0x16) = LO8(ecx);
    /* fld st(0) */
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    /* FPU: fsin  */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm0; /* movaps */
    xmm4 = xmm2; /* movaps */
    edx = (uint32_t)(-(int32_t)edx);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(esp + 4); /* movss */
    /* FPU: fcos  */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm5; /* movaps */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = MEMF(esp); /* movss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 8) = xmm6; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm4 = MEMF(esp); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x28);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm4 = xmm4 * MEMF(esp + 4); /* mulss */
    xmm7 = xmm7 + xmm3; /* addss */
    xmm6 = xmm4; /* movaps */
    xmm4 = MEMF(esp); /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm1 = xmm1 + xmm3; /* addss */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x30);
    xmm1 = xmm1 - xmm7; /* subss */
    xmm3 = xmm3 - xmm6; /* subss */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    xmm2 = xmm2 - MEMF(esp + 0x28); /* subss */
    edx = edx + ecx;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001A3F5A; /* jge: greater or equal (signed >=) */

loc_001A3F54: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A3F5A: ;
    edx = ZX8(MEM8(eax + 0x1D));
    ecx = ZX8(MEM8(eax + 0x1E));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x58C0F4); /* mulss */
    edx = ZX8(MEM8(eax + 0x1F));
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(eax + 0x18));
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x649E50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(eax + 0x19));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x7A) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x1A));
    MEM8(esp + 0x79) = LO8(edx);
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(edx, MEM8(eax + 0x1B));
    PUSH32(esp, 0xFF);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x2A);
    eax = 0x8C;
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEM8(esp + 0x80) = LO8(ecx);
    MEM8(esp + 0x83) = LO8(edx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A3FE2: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_001A4032; /* je: equal / zero */

loc_001A3FEB: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x2C;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x10;
    esi = esp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A4032: ;
    SET_LO8(eax, 1);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001A4040
 * Original: 0x001A4040 - 0x001A4174 (308 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_001A4040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x16));
    SET_LO8(ecx, MEM8(esi + 0x1C));
    edx = MEM32(esi + 0x18);
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x16) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x20));
    MEM8(esp + 0x5D) = LO8(eax);
    eax = ZX16(MEM16(esi + 0x1A));
    SET_LO8(ecx, LO8(ecx) & 1);
    edx = edx & 0xFFFF;
    PUSH32(esp, edi);
    MEM8(esp + 0x60) = LO8(ecx);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A4085: ;
    ecx = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    edi = MEM32(esp + 0x14);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = edx + edi;
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001A40E3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0xAC;
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A4120: ;
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_001A416C; /* je: equal / zero */

loc_001A4127: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x31;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x2A;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x18;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A416C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4180
 * Original: 0x001A4180 - 0x001A41B5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4180(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A4180: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A2D10(); /* call 0x001A2D10 */

loc_001A418A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_001A41B2; /* je: equal / zero */

loc_001A418F: ;
    ecx = MEM32(0x77532C);
    MEM32(eax + 0xC) = ecx;
    MEM32(0x77532C) = eax;
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 + MEMF(0x775328); /* addss */
    MEMF(0x775328) = xmm0; /* movss */

loc_001A41B2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A41C0
 * Original: 0x001A41C0 - 0x001A4260 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A41C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A41C0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    MEM8(esi + 0x14) = 1;
    ecx = ecx & 2;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    eax = 0x60;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A4202: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001A4257; /* je: equal / zero */

loc_001A4209: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = 0x2C;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ebx;

loc_001A4257: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4260
 * Original: 0x001A4260 - 0x001A437C (284 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A4260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    SET_LO8(ebx, MEM8(eax + 0x16));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    SET_LO8(ebx, LO8(ebx) | 4);
    MEM8(eax + 0x16) = LO8(ebx);
    MEM8(eax + 0x14) = 1;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x30) = xmm0; /* movss */
    ecx = 0x24;
    edi = esp + 0x40;
    MEM16(esp + 0x18) = 0xFFFF;
    MEM32(esp + 0xD0) = ebx;
    MEM8(esp + 0xD4) = LO8(ebx);
    MEM8(esp + 0xD5) = LO8(ebx);
    MEM32(esp + 0xD8) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x12C;
    MEM32(esp + 0xE8) = ebx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A4329: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001A4373; /* je: equal / zero */

loc_001A4330: ;
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x3C;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = 0x2D;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x38;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A4373: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4380
 * Original: 0x001A4380 - 0x001A43A4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4380(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A4380: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    if (TEST_S(eax, eax)) goto loc_001A43A1; /* jl: less (signed <) */

loc_001A438B: ;
    if (CMP_GE(eax, 2)) goto loc_001A43A1; /* jge: greater or equal (signed >=) */

loc_001A4390: ;
    eax = MEM32(eax * 4 + 0x59A88C);
    if (TEST_Z(eax, eax)) goto loc_001A43A1; /* je: equal / zero */

loc_001A439B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A439E: ;
    esp = esp + 4;

loc_001A43A1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001A43B0
 * Original: 0x001A43B0 - 0x001A46D5 (805 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A43B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001A43B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 0xC) = xmm1; /* movss */
    PUSH32(esp, edi);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    PUSH32(esp, 0);
    edx = (uint32_t)(-(int32_t)edx);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0);
    esp = esp - 8;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x3F800000);
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    MEM32(esp + 0x7C) = eax;
    MEM16(esp + 0x80) = 0xFFFF;
    MEM8(eax + 0x14) = 1;
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x70) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001A44B8: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x124) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x128) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x108) = xmm0; /* movss */
    esi = 0; /* xor self */
    edi = 4;
    /* nop */

loc_001A44F0: ;
    xmm0 = MEMF(esp + esi + 0x28); /* movss */
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + esi + 0x30); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + esi + 0x38); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A452B: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + esi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + esi + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + esi + 0x6C) = xmm0; /* movss */
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_001A44F0; /* jne: not equal / not zero */

loc_001A4555: ;
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm4 = MEMF(esp + 0x74); /* movss */
    xmm5 = MEMF(esp + 0x78); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm2; /* subss */
    MEMF(esp + 0x9C) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x7C); /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + 0xA0) = xmm7; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x84); /* movss */
    MEMF(esp + 0xA4) = xmm7; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x88); /* movss */
    MEMF(esp + 0xA8) = xmm7; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0xAC) = xmm7; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0xB0) = xmm7; /* movss */
    xmm7 = xmm3; /* movaps */
    esi = 0; /* xor self */
    PUSH32(esp, 0xFF);
    xmm7 = xmm7 - xmm4; /* subss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm2 = xmm2 - xmm3; /* subss */
    PUSH32(esp, 0x2A);
    eax = 0xC0;
    MEMF(esp + 0xBC) = xmm7; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    MEMF(esp + 0xC8) = xmm2; /* movss */
    MEM32(esp + 0xCC) = esi;
    MEM32(esp + 0xD0) = esi;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A4684: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_001A46CF; /* je: equal / zero */

loc_001A468B: ;
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x3D;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x2E;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x1D;
    esi = esp + 0x58;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001A46CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A46E0
 * Original: 0x001A46E0 - 0x001A473A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A46E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A46E0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esi + 0x16));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x15));
    SET_LO8(edx, LO8(edx) | 4);
    PUSH32(esp, edi);
    MEM8(esi + 0x16) = LO8(edx);
    MEM8(esi + 0x14) = 1;
    eax = eax & 3;
    if (((int32_t)eax < 0)) { sub_001A473A(); return; } /* jl: less (signed <) */

loc_001A4700: ;
    if (CMP_LE(eax, 1)) goto loc_001A4723; /* jle: less or equal (signed <=) */

loc_001A4705: ;
    if (CMP_NE(eax, 2)) { sub_001A473A(); return; } /* jne: not equal / not zero */

loc_001A470A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    g_seh_ebp = ebp; sub_001A4742(); return; /* tail jmp 0x001A4742 */

loc_001A4723: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    g_seh_ebp = ebp; sub_001A4742(); return; /* tail jmp 0x001A4742 */

}

/**
 * sub_001A47C0
 * Original: 0x001A47C0 - 0x001A4989 (457 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A47C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A47C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8C;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 0xB - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (CMP_NE(eax, 0xB)) goto loc_001A47E7; /* jne: not equal / not zero */

loc_001A47DA: ;
    if (CMP_AE(MEM32(esi + 0x18), 6)) goto loc_001A4808; /* jae: above or equal (unsigned >=) */

loc_001A47E0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A47E7: ;
    if (CMP_NE(eax, 0x2C)) goto loc_001A47F9; /* jne: not equal / not zero */

loc_001A47EC: ;
    if (CMP_AE(MEM32(esi + 0x18), 7)) goto loc_001A4808; /* jae: above or equal (unsigned >=) */

loc_001A47F2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A47F9: ;
    if (CMP_NE(eax, 0x26)) goto loc_001A4808; /* jne: not equal / not zero */

loc_001A47FE: ;
    if (CMP_B(MEM32(esi + 0x18), 2)) goto loc_001A4982; /* jb: below (unsigned <) */

loc_001A4808: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x6C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001A4854: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 0x24;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A48BA: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    xmm1 = MEMF(esp + 0x28); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(esi + 0x18));
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEM8(esp + 0x2C) = LO8(edx);
    if ((xmm0 <= xmm1)) goto loc_001A491A; /* jbe: below or equal (unsigned <=) */

loc_001A4913: ;
    eax = 1;
    goto loc_001A491C;

loc_001A491A: ;
    eax = 0; /* xor self */

loc_001A491C: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = eax + eax * 2;
    ecx = esp + eax * 4 + 8;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    if ((xmm1 <= xmm0)) goto loc_001A4943; /* jbe: below or equal (unsigned <=) */

loc_001A493C: ;
    eax = 1;
    goto loc_001A4945;

loc_001A4943: ;
    eax = 0; /* xor self */

loc_001A4945: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = eax + eax * 2;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esp + edx * 4 + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = ecx;
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = esp + 0x2C;
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(esp + 0x44) = edx;
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_001A497F: ;
    esp = esp + 4;

loc_001A4982: ;
    SET_LO8(eax, 1);
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
 * sub_001A4990
 * Original: 0x001A4990 - 0x001A49A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4990(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4990: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x6B81FC;
    MEM32(esp + 0x10) = edi;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_001A49B0(); return; /* tail jmp 0x001A49B0 */

}

/**
 * sub_001A4B80
 * Original: 0x001A4B80 - 0x001A4B8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4B80(void)
{

loc_001A4B80: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = MEM32(eax + 0x6B81FC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4B90
 * Original: 0x001A4B90 - 0x001A4C4A (186 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4B90: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001A4DE0(); /* call 0x001A4DE0 */

loc_001A4B9F: ;
    edi = 0x6B8C1C;
    MEM32(esp + 0x10) = edi;
    ebp = 0; /* xor self */
    /* nop */
    eax = MEM32(edi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0xD);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001A4BC4: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    eax = esp + 0x28;
    MEM32(esp + 0x12C) = 0xD;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_001A4BEC: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(eax, ebp)) goto loc_001A4C13; /* jne: not equal / not zero */

loc_001A4BF4: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84D458);
    ebx = esp + 0x30;
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_001A4C0B: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_001A4C30; /* je: equal / zero */

loc_001A4C13: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    esi = MEM32(esp + 0x1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0005E5A0(); /* call 0x0005E5A0 */

loc_001A4C25: ;
    esp = esp + 4;

loc_001A4C28: ;
    eax = MEM32(esp + 0x1C);
    /* nop */

loc_001A4C30: ;
    ecx = MEM32(eax + 4);
    if (CMP_L(ecx, 0x3E4)) { sub_001A4C4A(); return; } /* jl: less (signed <) */

loc_001A4C3B: ;
    if (CMP_G(ecx, 0x3E5)) { sub_001A4C4A(); return; } /* jg: greater (signed >) */

loc_001A4C43: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001A4C48: ;
    goto loc_001A4C28;

}

/**
 * sub_001A4DD0
 * Original: 0x001A4DD0 - 0x001A4DD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4DD0(void)
{

loc_001A4DD0: ;
    eax = MEM32(eax * 8 + 0x6B8C14);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4DE0
 * Original: 0x001A4DE0 - 0x001A4EA6 (198 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001A4DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xF0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x3C;
    edi = esp + 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0xC0;
    PUSH32(esp, 0x24800000);
    edi = 1;
    PUSH32(esp, 0xFC);
    MEM32(esp + 0xE4) = 0x11101;
    MEM32(esp + 0xE8) = edi;
    MEM32(esp + 0xF0) = esi;
    MEM32(esp + 0xEC) = esi;
    MEM32(esp + 0xB8) = esi;
    MEM32(esp + 0x98) = 0x8040000;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0x10) = 0x18301010;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x30) = 0x130C0300;
    MEM32(esp + 0x34) = 0x1C00;
    MEM32(esp + 0xF4) = esi;
    MEM32(esp + 0xF8) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001A4E81: ;
    if (CMP_EQ(eax, esi)) goto loc_001A4EA0; /* je: equal / zero */

loc_001A4E85: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    edi = eax + 0xC;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x6B8C14) = eax;

loc_001A4EA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4EB0
 * Original: 0x001A4EB0 - 0x001A4EEC (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4EB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    /* nop */
    edi = MEM32(esi + 0x70);
    xmm0 = MEMF(edi + ebx + 0x20); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    edi = edi + ebx;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, MEMF(edi + 0x24) - sets EFLAGS */
    MEMF(edi + 0x20) = xmm0; /* movss */
    if ((xmm0 < MEMF(edi + 0x24))) { sub_001A4EEC(); return; } /* jb: below (unsigned <) */

loc_001A4EE2: ;
    PUSH32(esp, 0); sub_001A5520(); /* call 0x001A5520 */

loc_001A4EE7: ;
    g_seh_ebp = ebp; sub_001A4FE5(); return; /* tail jmp 0x001A4FE5 */

}

/**
 * sub_001A5000
 * Original: 0x001A5000 - 0x001A52E8 (744 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5000(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A5000: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001A501D; /* je: equal / zero */

loc_001A5011: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001A5017: ;
    MEM32(0x771760) = esi;

loc_001A501D: ;
    eax = MEM32(0x69DEE0);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_001A5040; /* jne: not equal / not zero */

loc_001A5028: ;
    eax = MEM32(0x69DEDC);
    PUSH32(esp, 0x69DEE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001A5038: ;
    eax = MEM32(0x69DEE0);
    esp = esp + 8;

loc_001A5040: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_NE(eax, ebx)) goto loc_001A5054; /* jne: not equal / not zero */

loc_001A5046: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A504E: ;
    MEM32(0x771764) = ebx;

loc_001A5054: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001A506B; /* je: equal / zero */

loc_001A505C: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001A5065: ;
    MEM32(0x771764) = esi;

loc_001A506B: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edx = esi + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001A508F: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = esi + edx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001A50A8: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001A50C2; /* je: equal / zero */

loc_001A50B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001A50BC: ;
    MEM32(0x77182C) = esi;

loc_001A50C2: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001A50D6; /* je: equal / zero */

loc_001A50CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001A50D0: ;
    MEM32(0x771828) = ebx;

loc_001A50D6: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001A50FD; /* je: equal / zero */

loc_001A50E5: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A50F1: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001A50FD: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001A511D; /* je: equal / zero */

loc_001A5105: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A5111: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001A511D: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001A5131; /* je: equal / zero */

loc_001A5125: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001A512B: ;
    MEM32(0x77181C) = edi;

loc_001A5131: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001A5157; /* je: equal / zero */

loc_001A513F: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A514B: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001A5157: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001A5177; /* je: equal / zero */

loc_001A515F: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A516B: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001A5177: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001A5195; /* je: equal / zero */

loc_001A517F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001A5195: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001A519D: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_001A51C1; /* je: equal / zero */

loc_001A51B0: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001A51C1: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_001A51DA; /* je: equal / zero */

loc_001A51C9: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_001A51DA: ;
    esi = MEM32(0x7717A4);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_001A51FA; /* je: equal / zero */

loc_001A51E9: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_001A51FA: ;
    if (CMP_EQ(MEM32(0x771784), ebx)) goto loc_001A5213; /* je: equal / zero */

loc_001A5202: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ebx;
    MEM32(0x771784) = ebx;

loc_001A5213: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_001A522C; /* je: equal / zero */

loc_001A521B: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001A522C: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_001A525A; /* je: equal / zero */

loc_001A5249: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001A525A: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001A5273; /* je: equal / zero */

loc_001A5262: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001A5273: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001A52AA; /* je: equal / zero */

loc_001A5292: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A529E: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001A52AA: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001A52D0; /* je: equal / zero */

loc_001A52B8: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A52C4: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001A52D0: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001A52E5; /* je: equal / zero */

loc_001A52D8: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001A52DF: ;
    MEM32(0x77175C) = ebx;

loc_001A52E5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A52F0
 * Original: 0x001A52F0 - 0x001A5469 (377 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A52F0(void)
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

loc_001A52F0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6CC;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001A5301: ;
    esi = eax;
    edi = 0; /* xor self */

loc_001A5305: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(eax + 0x70);
    ebp = edi + ecx + 0x40;
    ebx = 0; /* xor self */

loc_001A5312: ;
    PUSH32(esp, ebp);
    edx = ebx + 0x590588;
    PUSH32(esp, edx);
    eax = esp + ebx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A5324: ;
    ebx = ebx + 0xC;
    if (CMP_B(ebx, 0x30)) goto loc_001A5312; /* jb: below (unsigned <) */

loc_001A532C: ;
    ecx = MEM32(esp + 0x44);
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 6;
    esi = esi + 4;
    MEM32(esi) = 0x40601818;
    edx = MEM32(ecx + 0x70);
    fp_push(MEMF(edi + edx + 0x34)); /* fld float */
    esi = esi + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A535D: ;
    edx = MEM32(esp + 0x10);
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    esi = esi + 0xC;
    esi = esi + 4;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0x888888;
    MEM32(esi + -4) = eax;
    ecx = MEM32(0x5905B8);
    MEM32(esi) = ecx;
    edx = MEM32(0x5905BC);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x1C);
    esi = esi + 8;
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x5905C0);
    esi = esi + 0xC;
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x5905C4);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x28);
    esi = esi + 4;
    esi = esi + 8;
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x5905C8);
    esi = esi + 0xC;
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x5905CC);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x34);
    esi = esi + 4;
    esi = esi + 8;
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x5905D0);
    esi = esi + 0xC;
    esi = esi + 4;
    MEM32(esi) = eax;
    ecx = MEM32(0x5905D4);
    MEM32(esi + 4) = ecx;
    esi = esi + 8;
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 0;
    edi = edi + 0x80;
    esi = esi + 4;
    if (CMP_L(edi, 0x1E00)) goto loc_001A5305; /* jl: less (signed <) */

loc_001A5459: ;
    edx = MEM32(0x5499E8);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001A5470
 * Original: 0x001A5470 - 0x001A54C9 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001A547E: ;
    if (TEST_NZ(eax, eax)) goto loc_001A54B3; /* jne: not equal / not zero */

loc_001A5482: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_001A54B3; /* je: equal / zero */

loc_001A5489: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001A54A9: ;
    esp = esp + 4;
    MEM32(esi + 0x70) = 0;

loc_001A54B3: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A54C9(); return; } /* jne: not equal / not zero */

loc_001A54BC: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001A54D0
 * Original: 0x001A54D0 - 0x001A551E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A54D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A54D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001A54DE: ;
    if (TEST_NZ(eax, eax)) goto loc_001A5513; /* jne: not equal / not zero */

loc_001A54E2: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_001A5513; /* je: equal / zero */

loc_001A54E9: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001A5509: ;
    esp = esp + 4;
    MEM32(esi + 0x70) = 0;

loc_001A5513: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001A5519: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5520
 * Original: 0x001A5520 - 0x001A5729 (521 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5520(void)
{
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_001A5520: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x20) = xmm0; /* movss */
    xmm5 = MEMF(esi + 0x6C); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x68); /* addss */
    xmm6 = MEMF(esi + 0x68); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A553F: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(edi + 0x24) = xmm0; /* movss */
    xmm5 = MEMF(esi + 0x2C); /* movss */
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x38); /* addss */
    xmm6 = xmm6 - MEMF(esi + 0x38); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A5569: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = MEMF(esi + 0x3C); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x30); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x30); /* movss */
    xmm6 = xmm6 - MEMF(esi + 0x3C); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A5593: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = MEMF(esi + 0x34); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x40); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x34); /* movss */
    xmm6 = xmm6 - MEMF(esi + 0x40); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A55BE: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = edi;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    xmm5 = MEMF(esi + 0x5C); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x50); /* addss */
    xmm6 = MEMF(esi + 0x50); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A55F9: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = MEMF(esi + 0x60); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x54); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x54); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A561E: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = MEMF(esi + 0x64); /* movss */
    xmm5 = xmm5 + MEMF(esi + 0x58); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x58); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A5644: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    xmm7 = MEMF(0x648D10); /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    edx = edi + 0xC;
    MEM32(edx) = eax;
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    xmm6 = MEMF(esi + 0x44); /* movss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A5685: ;
    xmm6 = xmm6 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm6; /* movaps */
    MEMF(esp) = xmm0; /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A56A7: ;
    ecx = MEM32(esp);
    xmm6 = xmm6 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    edx = MEM32(esp + 4);
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A56CB: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648DE0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x2C) = xmm1; /* movss */
    MEMF(edi + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A56F0: ;
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5730
 * Original: 0x001A5730 - 0x001A574A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5730(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A5730: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x34;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_L(MEM32(0x849444), 0x64)) { sub_001A574A(); return; } /* jl: less (signed <) */

loc_001A5743: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001A64E0
 * Original: 0x001A64E0 - 0x001A684D (877 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A64E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001A64E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    ecx = MEM32(0x84A13C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, edi);
    eax = eax + ecx;
    PUSH32(esp, eax);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001A650F: ;
    eax = edx;
    ecx = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001A656F: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    edx = MEM32(0x8470DC);
    esi = MEM32(esi + edx + 0x3E0);
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm2 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x20;
    ecx = 0x9C;
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A65BD: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001A65D7; /* je: equal / zero */

loc_001A65CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001A65D1: ;
    MEM32(0x77182C) = esi;

loc_001A65D7: ;
    eax = MEM32(0x771828);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001A65EE; /* je: equal / zero */

loc_001A65E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001A65E8: ;
    MEM32(0x771828) = edi;

loc_001A65EE: ;
    eax = MEM32(0x771824);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_001A6614; /* je: equal / zero */

loc_001A65FC: ;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A6608: ;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;

loc_001A6614: ;
    edx = esi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A6620: ;
    (void)0; /* cmp MEM32(0x771820), esi - flags set for next jcc */
    MEM32(0x549AEC) = esi;
    if (CMP_EQ(MEM32(0x771820), esi)) goto loc_001A6646; /* je: equal / zero */

loc_001A662E: ;
    edx = esi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A663A: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_001A6646: ;
    edx = 0x206;
    ecx = 0x4033C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A6655: ;
    (void)0; /* cmp MEM32(0x77181C), esi - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (CMP_EQ(MEM32(0x77181C), esi)) goto loc_001A6673; /* je: equal / zero */

loc_001A6667: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001A666D: ;
    MEM32(0x77181C) = esi;

loc_001A6673: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001A6699; /* je: equal / zero */

loc_001A6681: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A668D: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001A6699: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001A66B9; /* je: equal / zero */

loc_001A66A1: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A66AD: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001A66B9: ;
    (void)0; /* cmp MEM32(0x771810), edi - flags set for next jcc */
    esi = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001A66D9; /* je: equal / zero */

loc_001A66C7: ;
    esi = esi | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001A66D9: ;
    eax = MEM32(0x7717F0);
    ecx = 4;
    if (CMP_EQ(eax, ecx)) goto loc_001A66F9; /* je: equal / zero */

loc_001A66E7: ;
    esi = esi | 0x800;
    MEM32(0x5474E0) = ecx;
    MEM32(0x7717F0) = ecx;

loc_001A66F9: ;
    edx = MEM32(0x7717D0);
    eax = 2;
    if (CMP_EQ(edx, eax)) goto loc_001A6718; /* je: equal / zero */

loc_001A6708: ;
    esi = esi | 0x800;
    MEM32(0x5474E8) = eax;
    MEM32(0x7717D0) = eax;

loc_001A6718: ;
    if (CMP_EQ(MEM32(0x7717C0), edi)) goto loc_001A6732; /* je: equal / zero */

loc_001A6720: ;
    esi = esi | 0x800;
    MEM32(0x54746C) = edi;
    MEM32(0x7717C0) = edi;

loc_001A6732: ;
    if (CMP_EQ(MEM32(0x7717B0), ecx)) goto loc_001A674C; /* je: equal / zero */

loc_001A673A: ;
    esi = esi | 0x800;
    MEM32(0x5474F0) = ecx;
    MEM32(0x7717B0) = ecx;

loc_001A674C: ;
    if (CMP_EQ(MEM32(0x771790), eax)) goto loc_001A6764; /* je: equal / zero */

loc_001A6754: ;
    esi = esi | 0x800;
    MEM32(0x5474F8) = eax;
    MEM32(0x771790) = eax;

loc_001A6764: ;
    edx = MEM32(0x771780);
    eax = 3;
    if (CMP_EQ(edx, eax)) goto loc_001A6783; /* je: equal / zero */

loc_001A6773: ;
    esi = esi | 0x800;
    MEM32(0x5474FC) = eax;
    MEM32(0x771780) = eax;

loc_001A6783: ;
    eax = MEM32(0x77180C);
    esi = esi | 0x408;
    ebx = 0x302;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x5474DC) = ecx;
    MEM32(0x5499F0) = esi;
    MEM32(0x547504) = edi;
    if (CMP_EQ(eax, ebx)) goto loc_001A67C1; /* je: equal / zero */

loc_001A67A9: ;
    edx = ebx;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A67B5: ;
    MEM32(0x549AF0) = ebx;
    MEM32(0x77180C) = ebx;

loc_001A67C1: ;
    eax = MEM32(0x771808);
    edi = 0x303;
    if (CMP_EQ(eax, edi)) goto loc_001A67E7; /* je: equal / zero */

loc_001A67CF: ;
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A67DB: ;
    MEM32(0x549AF4) = edi;
    MEM32(0x771808) = edi;

loc_001A67E7: ;
    edx = ebx;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A67F3: ;
    edx = edi;
    ecx = 0x40348;
    MEM32(0x549AF0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A6805: ;
    eax = MEM32(0x77175C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x549AF4) = edi;
    if (TEST_Z(eax, eax)) goto loc_001A682B; /* je: equal / zero */

loc_001A6814: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001A681B: ;
    esi = MEM32(0x5499F0);
    MEM32(0x77175C) = 0;

loc_001A682B: ;
    esi = esi | 0x900;
    POP32(esp, edi);
    eax = 1;
    MEM32(0x5499F0) = esi;
    POP32(esp, esi);
    MEM32(0x549BD0) = eax;
    MEM32(0x549BD4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6850
 * Original: 0x001A6850 - 0x001A6E1B (1483 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6850: ;
    esp = esp - 0x90;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    eax = MEM32(edi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_001A6E13; /* je: equal / zero */

loc_001A6869: ;
    eax = MEM32(edi + 0x2C);
    if (CMP_EQ(eax, 2)) goto loc_001A6885; /* je: equal / zero */

loc_001A6871: ;
    if (CMP_EQ(eax, 4)) goto loc_001A6885; /* je: equal / zero */

loc_001A6876: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    /* comiss xmm0, MEMF(edi + 0x34) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 0x34))) goto loc_001A6E13; /* ja: above (unsigned >) */

loc_001A6885: ;
    eax = MEM32(edi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x6B81FC);
    if (CMP_EQ(MEM32(0x771760), esi)) goto loc_001A68A6; /* je: equal / zero */

loc_001A689A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001A68A0: ;
    MEM32(0x771760) = esi;

loc_001A68A6: ;
    eax = MEM32(edi + 0x2C);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_A(eax, 4)) goto loc_001A6D2B; /* ja: above (unsigned >) */

loc_001A68B3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1A6E1C); /* switch: 5 entries, 4 targets */
    if (_jt == 0x001A68BAu) goto loc_001A68BA;
    if (_jt == 0x001A6927u) goto loc_001A6927;
    if (_jt == 0x001A6994u) goto loc_001A6994;
    if (_jt == 0x001A6BC6u) goto loc_001A6BC6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A68BA: ;
    ebx = MEM32(edi + 0x50);
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A68C6: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x64); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x1C;
    ecx = 0x61;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6901: ;
    xmm1 = MEMF(edi + 0x38); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = esp + 0xC;
    goto loc_001A6D21;

loc_001A6927: ;
    ebx = MEM32(edi + 0x50);
    PUSH32(esp, 0x30);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A6933: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x64); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0xC;
    ecx = 0x61;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A696E: ;
    xmm1 = MEMF(edi + 0x38); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = esp + 0x1C;
    goto loc_001A6D21;

loc_001A6994: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xA4);
    ecx = MEM32(0x8470DC);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    edx = MEM32(esi + ecx + 4);
    SET_LO8(ecx, MEM8(edx + 0x7FA));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A6E11; /* jne: not equal / not zero */

loc_001A69BC: ;
    ecx = eax + eax * 2;
    xmm0 = MEMF(edi + ecx * 4 + 0x74); /* movss */
    ecx = edi + ecx * 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = eax + eax * 2 + 0x1E;
    xmm0 = MEMF(edi + edx * 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0xC;
    ecx = 0x63;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A69FF: ;
    xmm1 = MEMF(edi + 0x68); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x6C); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x68); /* movss */
    edx = esp + 0x5C;
    ecx = 0x64;
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6A34: ;
    xmm1 = MEMF(0x648D10); /* movss */
    edx = esp + 0x7C;
    ecx = 0x65;
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6A6B: ;
    eax = MEM32(0x8470DC);
    xmm1 = MEMF(esi + eax + 0x338); /* movss */
    xmm2 = MEMF(esi + eax + 0x334); /* movss */
    xmm3 = MEMF(esi + eax + 0x330); /* movss */
    edx = esp + 0x2C;
    ecx = 0x9C;
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6AB1: ;
    ebx = MEM32(edi + 0x50);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A6ABD: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x64); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x3C;
    ecx = 0x61;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6AF8: ;
    xmm1 = MEMF(edi + 0x38); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x70); /* movss */
    edx = esp + 0x4C;
    ecx = 0x62;
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6B28: ;
    SET_LO8(eax, MEM8(edi + 0x8C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A6BB6; /* je: equal / zero */

loc_001A6B36: ;
    esi = MEM32(0x6B8C7C);
    PUSH32(esp, 0); sub_000DB4B0(); /* call 0x000DB4B0 */

loc_001A6B41: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001306C0(); /* call 0x001306C0 */

loc_001A6B75: ;
    xmm0 = MEMF(0x648EAC); /* movss */
    esp = esp + 4;
    ecx = esp + 0x6C;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001A6BB1: ;
    goto loc_001A6D2B;

loc_001A6BB6: ;
    esi = MEM32(0x6B8C84);
    PUSH32(esp, 0); sub_000DB4B0(); /* call 0x000DB4B0 */

loc_001A6BC1: ;
    goto loc_001A6D2B;

loc_001A6BC6: ;
    ebx = MEM32(edi + 0x50);
    PUSH32(esp, 0x30);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A6BD2: ;
    xmm0 = MEMF(0x64A5B4); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x649484); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5B0); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x6C;
    ecx = 0x6A;
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6C18: ;
    xmm1 = MEMF(0x648E1C); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5AC); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x64A5A8); /* movss */
    edx = esp + 0x4C;
    ecx = 0x6B;
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6C56: ;
    edx = esp + 0x3C;
    ecx = 0x73;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6C7C: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edx = esp + 0x2C;
    ecx = 0x7E;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6CBA: ;
    xmm2 = MEMF(edi + 0x6C); /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x70); /* movss */
    edx = esp + 0x7C;
    ecx = 0x7F;
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6CF3: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x74); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x38); /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    edx = esp + 0x5C;

loc_001A6D21: ;
    ecx = 0x62;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6D2B: ;
    eax = MEM32(edi + 0x58);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001A6D43; /* je: equal / zero */

loc_001A6D33: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001A6D3C: ;
    esp = esp + 4;
    esi = eax;
    goto loc_001A6D46;

loc_001A6D43: ;
    esi = MEM32(edi + 0x5C);

loc_001A6D46: ;
    if (TEST_NZ(esi, esi)) goto loc_001A6D5B; /* jne: not equal / not zero */

loc_001A6D4A: ;
    eax = 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A6D55: ;
    MEM32(0x771770) = esi;

loc_001A6D5B: ;
    if (CMP_EQ(MEM32(0x771770), esi)) goto loc_001A6D75; /* je: equal / zero */

loc_001A6D63: ;
    ecx = esi;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001A6D6F: ;
    MEM32(0x771770) = esi;

loc_001A6D75: ;
    edx = ZX8(MEM8(edi + 0x54));
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    edx = esp + 0x8C;
    ecx = 0x60;
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A6DC2: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_001A6DCD: ;
    ecx = ZX8(MEM8(edi + 0x54));
    ecx = ecx << 0x18;
    esp = esp + 8;
    ecx = ecx | 0xFFFFFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_001A6DE3: ;
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053A930(); /* call 0x0053A930 */

loc_001A6DEF: ;
    PUSH32(esp, 0);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A6DFA: ;
    eax = MEM32(0x771764);
    if (TEST_Z(eax, eax)) goto loc_001A6E11; /* je: equal / zero */

loc_001A6E03: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A6E0B: ;
    MEM32(0x771764) = ebx;

loc_001A6E11: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_001A6E13: ;
    POP32(esp, edi);
    esp = esp + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6EC0
 * Original: 0x001A6EC0 - 0x001A6EE0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A6F10(); /* call 0x001A6F10 */

loc_001A6ECA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A6EE0(); return; } /* jne: not equal / not zero */

loc_001A6ED3: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001A6EF0
 * Original: 0x001A6EF0 - 0x001A6F05 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6EF0(void)
{

loc_001A6EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A6F10(); /* call 0x001A6F10 */

loc_001A6EFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001A6F00: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F10
 * Original: 0x001A6F10 - 0x001A6F57 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A6F10: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_001A6F24; /* je: equal / zero */

loc_001A6F17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001A6F1D: ;
    MEM32(esi + 0x50) = 0;

loc_001A6F24: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(0x849448);
    eax = eax - ecx;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    edx = 0;
    ecx--;
    ecx = ecx & eax;
    eax = MEM32(0x849444);
    eax--;
    SET_LO8(edx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    MEM32(0x849448) = ecx;
    edx--;
    edx = edx & eax;
    MEM32(0x849444) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F60
 * Original: 0x001A6F60 - 0x001A6F7B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A6F60: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x61)) goto loc_001A6F7A; /* jne: not equal / not zero */

loc_001A6F67: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x2C);
    eax = eax - 2;
    if ((eax != 0)) goto loc_001A6F7A; /* jne: not equal / not zero */

loc_001A6F73: ;
    MEM8(ecx + 0x8D) = 1;

loc_001A6F7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F80
 * Original: 0x001A6F80 - 0x001A6FFA (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6F80: ;
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001A6FAA; /* je: equal / zero */

loc_001A6F8C: ;
    if (CMP_NE(MEM32(0x84A144), ebx)) { sub_001A6FFA(); return; } /* jne: not equal / not zero */

loc_001A6F94: ;
    eax = 0xA;
    MEM32(0x77533C) = eax;
    MEM32(0x775338) = 3;
    g_seh_ebp = ebp; sub_001A7003(); return; /* tail jmp 0x001A7003 */

loc_001A6FAA: ;
    eax = MEM32(0x7FA1F4);
    if (CMP_EQ(eax, 0x2F)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FB4: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FB9: ;
    if (CMP_EQ(eax, 0x1E)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FBE: ;
    if (CMP_EQ(eax, 0x26)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FC3: ;
    if (CMP_EQ(eax, 4)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FC8: ;
    if (CMP_EQ(eax, 0x1C)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FCD: ;
    if (CMP_EQ(eax, 0x41)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FD2: ;
    if (CMP_EQ(eax, 0x3C)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FD7: ;
    if (CMP_EQ(eax, 0x3D)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FDC: ;
    MEM32(0x77533C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001A6FE4: ;
    eax = 0x14;
    MEM32(0x77533C) = eax;
    MEM32(0x775338) = 0xA;
    g_seh_ebp = ebp; sub_001A7003(); return; /* tail jmp 0x001A7003 */

}

/**
 * sub_001A7080
 * Original: 0x001A7080 - 0x001A71A0 (288 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001A719D; /* je: equal / zero */

loc_001A7093: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    MEM8(ebp) = LO8(ebx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, edi);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_001A70AB: ;
    esi = MEM32(ebp + 0x1C);
    SET_LO8(eax, MEM8(esi + 0xC));
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) goto loc_001A70C7; /* jbe: below or equal (unsigned <=) */

loc_001A70BE: ;
    eax--;
    MEM32(esi + 8) = eax;
    goto loc_001A715C;

loc_001A70C7: ;
    if (CMP_NE(MEM8(0x770FA8), LO8(ebx))) goto loc_001A715C; /* jne: not equal / not zero */

loc_001A70D3: ;
    edi = MEM32(esi + 0x24);
    if (CMP_EQ(edi, ebx)) goto loc_001A70E2; /* je: equal / zero */

loc_001A70DA: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_001A70DF: ;
    MEM32(esi + 0x24) = ebx;

loc_001A70E2: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001A70EB: ;
    if (TEST_NZ(eax, eax)) goto loc_001A711C; /* jne: not equal / not zero */

loc_001A70EF: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_001A711C; /* je: equal / zero */

loc_001A70F6: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001A7116: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = ebx;

loc_001A711C: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_001A712A; /* je: equal / zero */

loc_001A7128: ;
    MEM32(eax) = ecx;

loc_001A712A: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001A7135: ;
    if (TEST_NZ(eax, eax)) goto loc_001A715C; /* jne: not equal / not zero */

loc_001A7139: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001A7159: ;
    esp = esp + 4;

loc_001A715C: ;
    ecx = ebp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001A7165: ;
    esi = MEM32(0x870EF8);
    eax = MEM32(esi + 0x34);
    edi = MEM32(ebp + 0x40);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001A717E; /* je: equal / zero */

loc_001A7178: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001A717E: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_001A7186: ;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, ebx)) goto loc_001A7198; /* je: equal / zero */

loc_001A718F: ;
    edx = MEM32(esi + 0x24);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_001A7198: ;
    POP32(esp, edi);
    MEM32(ebp + 0x40) = ebx;
    POP32(esp, esi);

loc_001A719D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A71A0
 * Original: 0x001A71A0 - 0x001A71AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A71A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A71A0: ;
    eax = MEM32(0x84944C);
    if (TEST_NZ(eax, eax)) { sub_001A71AA(); return; } /* jne: not equal / not zero */

loc_001A71A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A71F0
 * Original: 0x001A71F0 - 0x001A7287 (151 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A71F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A71F0: ;
    eax = MEM32(0x77533C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_001A7226; /* jbe: below or equal (unsigned <=) */

loc_001A7200: ;
    esi = 0; /* xor self */

loc_001A7202: ;
    eax = MEM32(0x84944C);
    SET_LO8(ecx, MEM8(eax + esi));
    eax = eax + esi;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001A7219; /* je: equal / zero */

loc_001A7210: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A7080(); /* call 0x001A7080 */

loc_001A7216: ;
    esp = esp + 4;

loc_001A7219: ;
    eax = MEM32(0x77533C);
    edi++;
    esi = esi + 0x44;
    if (CMP_B(edi, eax)) goto loc_001A7202; /* jb: below (unsigned <) */

loc_001A7226: ;
    eax = MEM32(0x84944C);
    if (CMP_EQ(eax, ebx)) goto loc_001A7265; /* je: equal / zero */

loc_001A722F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001A7235: ;
    if (TEST_NZ(eax, eax)) goto loc_001A7265; /* jne: not equal / not zero */

loc_001A7239: ;
    eax = MEM32(0x84944C);
    if (CMP_EQ(eax, ebx)) goto loc_001A7265; /* je: equal / zero */

loc_001A7242: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001A7262: ;
    esp = esp + 4;

loc_001A7265: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x84944C) = ebx;
    MEM32(0x77533C) = ebx;
    MEM32(0x775338) = ebx;
    MEM32(0x775334) = ebx;
    MEM32(0x775330) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7290
 * Original: 0x001A7290 - 0x001A76A7 (1047 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7290: ;
    esp = esp - 0x64;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    esi = ebp;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_001A72A0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A76A1; /* je: equal / zero */

loc_001A72A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001A71A0(); /* call 0x001A71A0 */

loc_001A72AF: ;
    ebx = eax;
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) goto loc_001A769F; /* je: equal / zero */

loc_001A72BB: ;
    SET_LO8(eax, MEM8(ebp + 0x3DC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A769F; /* je: equal / zero */

loc_001A72C9: ;
    SET_LO8(eax, MEM8(ebp + 0x473));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(0x84A5F8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A72F3; /* je: equal / zero */

loc_001A72D9: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_EQ(MEM32(eax + esi + -1640), 0x18A)) goto loc_001A769F; /* je: equal / zero */

loc_001A72F3: ;
    SET_LO8(ecx, MEM8(ebp + 0x250));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A730F; /* je: equal / zero */

loc_001A72FF: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + esi + -1744;

loc_001A730F: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = 1;
    MEM32(esp + 0x1C) = 0x5D4C44;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = 2;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edi;
    if (CMP_EQ(eax, edi)) goto loc_001A7343; /* je: equal / zero */

loc_001A7338: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00049820(); /* call 0x00049820 */

loc_001A7343: ;
    SET_LO8(eax, MEM8(ebp + 0x20C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A7374; /* je: equal / zero */

loc_001A734D: ;
    SET_LO8(eax, MEM8(ebp + 0x217));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A7374; /* je: equal / zero */

loc_001A7357: ;
    edx = ZX8(LO8(eax));
    edx = edx & 0xFFFFFF7Fu;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = edx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00049820(); /* call 0x00049820 */

loc_001A7374: ;
    PUSH32(esp, 0x2000);
    ecx = 0x110;
    eax = 0x5F4FF8;
    esi = ebp;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_001A738A: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp;
    ecx = ebp + 0x298;
    PUSH32(esp, 0); sub_002E5BD0(); /* call 0x002E5BD0 */

loc_001A73A1: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0x88);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x80);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = ebp + 0x228;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = ebp + 0x2A0;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_001A73D6: ;
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x50); /* subss */
    esp = esp + 0x38;
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    MEM32(0x780AB0) = edi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = edi;
    if ((xmm0 > MEMF(0x648CE4))) goto loc_001A769F; /* ja: above (unsigned >) */

loc_001A740E: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_002E02D0(); /* call 0x002E02D0 */

loc_001A7415: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A769F; /* jne: not equal / not zero */

loc_001A741D: ;
    eax = MEM32(ebp + 0x3C4);
    xmm1 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    MEM8(0x84A5BE) = 1;
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001A7439: ;
    eax = MEM32(ebp + 0x3C4);
    ecx = ZX16(MEM16(eax + 0x10));
    ecx--;
    PUSH32(esp, ecx);
    SET_LO8(ecx, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_002C5100(); /* call 0x002C5100 */

loc_001A744E: ;
    eax = MEM32(ebp + 0x4B4);
    esp = esp + 4;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x10) = 1;
    if (CMP_NE(eax, edi)) goto loc_001A7467; /* jne: not equal / not zero */

loc_001A7463: ;
    MEM32(esp + 0x10) = edi;

loc_001A7467: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + edx * 4 + 0x4B0);
    if (CMP_EQ(eax, edi)) goto loc_001A769F; /* je: equal / zero */

loc_001A747A: ;
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, edi)) goto loc_001A769F; /* je: equal / zero */

loc_001A7485: ;
    eax = MEM32(eax + 8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(eax, edi)) goto loc_001A769F; /* je: equal / zero */

loc_001A7494: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x5E991C;
    MEM8(ebx) = 1;
    PUSH32(esp, 0); sub_003ED460(); /* call 0x003ED460 */

loc_001A74A3: ;
    esi = MEM32(eax + 0x30);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x152);
    esi = esi << 6;
    PUSH32(esp, 0x5F4FF8);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001A74BF: ;
    MEM32(ebx + 0x14) = eax;
    ecx = esi;
    esi = MEM32(ebp + 0x3C8);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    esp = esp + 0x18;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x30);
    xmm0 = MEMF(ebp + 0x38); /* movss */
    xmm1 = MEMF(ebp + 0x34); /* movss */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 0x15A);
    PUSH32(esp, 0x5F4FF8);
    ecx = esi;
    MEMF(ebx + 0xC) = xmm1; /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_001A750E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001A7514: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebx + 0x18) = eax;
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_001A751E: ;
    edx = MEM32(ebx + 0x18);
    edx = MEM32(edx);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0x14);
    MEM32(ecx + edx + 4) = eax;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ebp + ecx * 4 + 0x4B0);
    MEM32(ebx + 0x1C) = eax;
    ecx = MEM32(eax + 8);
    esp = esp + 0x18;
    ecx++;
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 0x298);
    MEM32(ebx + 0x24) = edx;
    eax = MEM32(ebp + 0x330);
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(ebp + 0x74);
    edx = ZX16(MEM16(ecx + 0xE));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp + 0x260); /* mulss */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    eax = MEM32(ebp + 0x74);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x1D4);
    ecx = ecx + edx;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp + 0x264); /* mulss */
    MEMF(ebx + 0x2C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x68);
    MEM32(ebx + 0x20) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1EC);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    edi = MEM32(esi + 0x14);
    edx = 0; /* xor self */
    if (CMP_EQ(edi, edx)) goto loc_001A7606; /* je: equal / zero */

loc_001A75B3: ;
    (void)0; /* cmp MEM32(edi), edx - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_BE(MEM32(edi), edx)) goto loc_001A7606; /* jbe: below or equal (unsigned <=) */

loc_001A75BB: ;
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_001A75C0: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edi + 4);
    esi = esi + edx;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + edx * 4 + 0x4C4);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_003EDBE0(); /* call 0x003EDBE0 */

loc_001A75DC: ;
    ecx = esi;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, 0); sub_003EDBA0(); /* call 0x003EDBA0 */

loc_001A75E7: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi);
    esp = esp + 8;
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_B(eax, ecx)) goto loc_001A75C0; /* jb: below (unsigned <) */

loc_001A7604: ;
    edx = 0; /* xor self */

loc_001A7606: ;
    eax = MEM32(0x775330);
    MEM32(ebx + 4) = eax;
    eax++;
    MEM32(0x775330) = eax;
    MEM8(ebx + 0x30) = 0xFF;
    eax = MEM32(ebp + 0x588);
    if (CMP_EQ(eax, edx)) goto loc_001A7674; /* je: equal / zero */

loc_001A7622: ;
    MEM32(ebx + 0x34) = eax;
    esi = ZX8(MEM8(eax + 0x294));
    ecx = MEM32(ebp + 0x3C8);
    esi = esi << 6;
    esi = esi + ecx;
    edi = eax + 0x110;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x588);
    MEM32(ecx + 0xD4) = edx;
    eax = MEM32(ebp + 0x588);
    MEM8(eax + 0xD8) = 0;
    ecx = MEM32(ebx + 0x34);
    MEM8(ecx + 0xA0) = 9;
    eax = MEM32(ebx + 0x34);
    MEM32(eax + 0xC8) = 0x13F590;

loc_001A7674: ;
    (void)0; /* cmp MEM32(ebp + 0x68), 0x194 - flags set for next jcc */
    esi = ebp;
    if (CMP_EQ(MEM32(ebp + 0x68), 0x194)) goto loc_001A7682; /* je: equal / zero */

loc_001A767F: ;
    PUSH32(esp, edx);
    goto loc_001A7684;

loc_001A7682: ;
    PUSH32(esp, 1);

loc_001A7684: ;
    PUSH32(esp, 0); sub_000B9D30(); /* call 0x000B9D30 */

loc_001A7689: ;
    esp = esp + 4;
    PUSH32(esp, 0x870EF8);
    esi = ebx;
    MEM32(ebx + 0x40) = 0;
    PUSH32(esp, 0); sub_001A7E90(); /* call 0x001A7E90 */

loc_001A769F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A76A1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_001A76B0
 * Original: 0x001A76B0 - 0x001A772E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A76B0: ;
    ecx = MEM32(0x77533C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A772C; /* jbe: below or equal (unsigned <=) */

loc_001A76BD: ;
    eax = MEM32(0x84944C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_001A76C6: ;
    if (CMP_EQ(MEM8(esi + eax), 0)) goto loc_001A771C; /* je: equal / zero */

loc_001A76CC: ;
    ebp = MEM32(esi + eax + 4);
    edx = MEM32(0x775330);
    edx = edx - ebp;
    ecx = ecx - MEM32(0x775338);
    if (CMP_BE(edx, ecx)) goto loc_001A771C; /* jbe: below or equal (unsigned <=) */

loc_001A76E2: ;
    if (CMP_NE(MEM8(esi + eax + 0x30), 0xFF)) goto loc_001A76F3; /* jne: not equal / not zero */

loc_001A76E9: ;
    PUSH32(esp, 0); sub_000B9E50(); /* call 0x000B9E50 */

loc_001A76EE: ;
    eax = MEM32(0x84944C);

loc_001A76F3: ;
    edx = MEM32(0x7FA20C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    ecx = esi + eax;
    eax = ZX8(MEM8(ecx + 0x30));
    eax = eax - edx;
    if (CMP_G(eax & eax, 0)) goto loc_001A7714; /* jg: greater (signed >) */

loc_001A7709: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A7080(); /* call 0x001A7080 */

loc_001A770F: ;
    esp = esp + 4;
    goto loc_001A7717;

loc_001A7714: ;
    MEM8(ecx + 0x30) = LO8(eax);

loc_001A7717: ;
    eax = MEM32(0x84944C);

loc_001A771C: ;
    ecx = MEM32(0x77533C);
    edi++;
    esi = esi + 0x44;
    if (CMP_B(edi, ecx)) goto loc_001A76C6; /* jb: below (unsigned <) */

loc_001A772A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001A772C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7730
 * Original: 0x001A7730 - 0x001A776C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7730(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A7730: ;
    eax = MEM32(0x77533C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001A776A; /* jbe: below or equal (unsigned <=) */

loc_001A773C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* nop */

loc_001A7740: ;
    eax = MEM32(0x84944C);
    SET_LO8(ecx, MEM8(eax + esi));
    eax = eax + esi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A775C; /* je: equal / zero */

loc_001A774E: ;
    if (CMP_NE(MEM32(eax + 0x20), ebx)) goto loc_001A775C; /* jne: not equal / not zero */

loc_001A7753: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A7080(); /* call 0x001A7080 */

loc_001A7759: ;
    esp = esp + 4;

loc_001A775C: ;
    eax = MEM32(0x77533C);
    edi++;
    esi = esi + 0x44;
    if (CMP_B(edi, eax)) goto loc_001A7740; /* jb: below (unsigned <) */

loc_001A7769: ;
    POP32(esp, esi);

loc_001A776A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7770
 * Original: 0x001A7770 - 0x001A7CBC (1356 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A7770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(0x77533C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xE) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_001A7CB5; /* je: equal / zero */

loc_001A7790: ;
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = 0x10;
    edi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(esp + 0x18) = ebx;
    if (CMP_BE(eax, ebx)) goto loc_001A7CB5; /* jbe: below or equal (unsigned <=) */

loc_001A77B3: ;
    eax = MEM32(0x84944C);
    goto loc_001A77C0;

    /* nop */

loc_001A77C0: ;
    if (CMP_EQ(MEM8(ebx + eax), 0)) goto loc_001A7C9B; /* je: equal / zero */

loc_001A77CA: ;
    xmm0 = MEMF(ebx + eax + 8); /* movss */
    xmm2 = MEMF(ebx + eax + 0x28); /* movss */
    edx = MEM32(0x84A13C);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + eax + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(ebx + eax + 0xC); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + eax + 0x10); /* movss */
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    edi = eax + edx + 0x148;
    esi = esp + 0x28;
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_001A782D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001A7C96; /* je: equal / zero */

loc_001A7838: ;
    eax = MEM32(esp + 0x1C);
    ecx = esi;
    esi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0006B180(); /* call 0x0006B180 */

loc_001A784A: ;
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001A7C96; /* jnp: not parity */

loc_001A7864: ;
    ecx = MEM32(0x84A13C);
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax + ecx + 0x260)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fptan  */
    /* fstp st(0) */
    fp_push(MEMF(eax + ecx + 0x258)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fptan  */
    /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x649D84)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001A7C96; /* ja: above (unsigned >) */

loc_001A78AC: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A7912; /* jne: not equal / not zero */

loc_001A78B4: ;
    PUSH32(esp, 1);
    MEM8(esp + 0x12) = 1;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001A78C0: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A78CF: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A78E2: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A78EE: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A78FA: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A7906: ;
    edx = MEM32(0x6B888C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001A7912: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_001A7917: ;
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_001A791C: ;
    eax = MEM32(0x84944C);
    ecx = MEM32(ebx + eax + 0x10);
    edx = MEM32(ebx + eax + 0xC);
    xmm0 = MEMF(ebx + eax + 8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_001A793A: ;
    eax = MEM32(0x84944C);
    xmm0 = MEMF(ebx + eax + 0x28); /* movss */
    ecx = MEM32(ebx + eax + 8);
    eax = ebx + eax + 8;
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x4C) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_001A7974: ;
    ecx = 0x10;
    esi = esp + 0x60;
    edi = 0x81B810;
    esp = esp + 0x20;
    eax = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_001A7991: ;
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_001A79A0: ;
    xmm0 = MEMF(0x648D34); /* movss */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(0x770004) = 1;
    MEM8(0x76FFFE) = 0;
    MEMF(0x770008) = xmm0; /* movss */
    MEM32(0x84B828) = 0x84110;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001A79D0: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B68) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A79F4: ;
    esi = MEM32(0x84944C);
    MEM32(0x549AE8) = edi;
    edx = MEM32(ebx + esi + 0x1C);
    ecx = MEM32(edx + 0x24);
    SET_LO16(edx, MEM16(ecx + 0xC));
    ecx = MEM32(ebp + 8);
    eax = ebx + esi + 0x1C;
    MEM16(esp + 0x14) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 0x762E40));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(0x81BE48) = edi;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001A7A47; /* jne: not equal / not zero */

loc_001A7A27: ;
    ecx = MEM32(0x85D5B4);
    if (CMP_EQ(MEM32(ecx + 0x334), edi)) goto loc_001A7A47; /* je: equal / zero */

loc_001A7A35: ;
    edx = MEM32(ecx + 0x330);
    if (CMP_NE(edx, MEM32(0x7F9F60))) goto loc_001A7ACF; /* jne: not equal / not zero */

loc_001A7A47: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    esi = MEM32(ebx + esi + 0x18);
    MEM32(esp + 0x10) = edx;
    MEM32(0x7FA020) = MEM32(0x7FA020) + 1;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7A6C: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_001A7A99; /* je: equal / zero */

loc_001A7A94: ;
    MEM32(0x84B854) = eax;

loc_001A7A99: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + -16);
    PUSH32(esp, 4);
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = edi;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_001A7AB3: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_001A7AC4: ;
    esp = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_001A7ACF: ;
    (void)0; /* test MEM8(esp + 0x14), 1 - flags set for next jcc */
    MEM32(0x81BD70) = 0x3F0270;
    if (TEST_Z(MEM8(esp + 0x14), 1)) goto loc_001A7BCC; /* je: equal / zero */

loc_001A7AE4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001A7AEB: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7AFA: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7B13: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7B2C: ;
    eax = MEM32(0x84944C);
    MEM32(0x549B1C) = 0xFF;
    edx = MEM32(ebx + eax + 0x1C);
    esi = MEM32(ebx + eax + 0x18);
    eax = MEM32(edx + 0x24);
    edx = MEM32(0x7FA020);
    ecx = MEM32(eax + 8);
    edx++;
    MEM32(esp + 0x10) = ecx;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7B69: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    edx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = eax;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_001A7B96; /* je: equal / zero */

loc_001A7B91: ;
    MEM32(0x84B854) = eax;

loc_001A7B96: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + -16);
    PUSH32(esp, 1);
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = edi;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_001A7BB0: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_001A7BC1: ;
    esp = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_001A7BCC: ;
    if (TEST_Z(MEM8(esp + 0x14), 2)) goto loc_001A7C46; /* je: equal / zero */

loc_001A7BD3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001A7BDA: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7BE9: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7C02: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A7C1B: ;
    eax = MEM32(0x84944C);
    MEM32(0x549B1C) = 0xF;
    edx = MEM32(ebx + eax + 0x1C);
    ecx = MEM32(edx + 0x24);
    esi = MEM32(ebx + eax + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_001A7C41: ;
    esp = esp + 0xC;
    edi = 0; /* xor self */

loc_001A7C46: ;
    ecx = MEM32(0x81B7C0);
    eax = MEM32(0x5499F0);
    ecx = ecx & 0x80000000u;
    eax = eax | 0x2000;
    MEM32(0x84B824) = edi;
    MEM32(0x84B828) = edi;
    MEM32(0x819FE0) = edi;
    MEM32(0x819FE4) = edi;
    MEM32(0x81B7C0) = ecx;
    MEM32(0x7502EC) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = edi;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_001A7C90: ;
    MEM32(0x81BE44) = edi;

loc_001A7C96: ;
    eax = MEM32(0x84944C);

loc_001A7C9B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x77533C);
    ecx++;
    ebx = ebx + 0x44;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_B(ecx, edx)) goto loc_001A77C0; /* jb: below (unsigned <) */

loc_001A7CB5: ;
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
 * sub_001A7CC0
 * Original: 0x001A7CC0 - 0x001A7D05 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7CC0: ;
    esp = esp - 0x1C;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    PUSH32(esp, ebx);
    ebx = esi + 0x78;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = ebx;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x870EF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_001A7D05(); return; } /* jne: not equal / not zero */

loc_001A7CFE: ;
    edi = 0x870EFC;
    g_seh_ebp = ebp; sub_001A7D33(); return; /* tail jmp 0x001A7D33 */

}

/**
 * sub_001A7E90
 * Original: 0x001A7E90 - 0x001A7EF0 (96 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E90(void)
{
    float xmm0;

loc_001A7E90: ;
    esp = esp - 0x20;
    xmm0 = MEMF(esi + 0x2C); /* movss */
    eax = esi + 8;
    ecx = eax;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = edx;
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x28); /* movss */
    edx = MEM32(esp + 4);
    MEM32(esp) = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    ecx = MEM32(ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    eax = esp + 4;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_003560A0(); /* call 0x003560A0 */

loc_001A7EE7: ;
    MEM32(esi + 0x40) = eax;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A7EF0
 * Original: 0x001A7EF0 - 0x001A7F08 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A7EF0: ;
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    if (TEST_NZ(esi, esi)) { sub_001A7F08(); return; } /* jne: not equal / not zero */

loc_001A7F04: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7F50
 * Original: 0x001A7F50 - 0x001A8041 (241 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A7F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_001A7FC2; /* je: equal / zero */

loc_001A7F63: ;
    ecx = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_001A8720(); /* call 0x001A8720 */

loc_001A7F6C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001A803C; /* je: equal / zero */

loc_001A7F76: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax + 0x24);
    SET_LO8(edx, 0); /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001A7FBE; /* je: equal / zero */

loc_001A7F82: ;
    eax = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax * 2 + 0x2E);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001A7FBE; /* je: equal / zero */

loc_001A7F90: ;
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_001A7FBE; /* je: equal / zero */

loc_001A7F9A: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + edx * 4 + 8);
    edx = MEM32(edi + 0x58);
    esi = MEM32(edx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);
    SET_LO8(edx, 1);

loc_001A7FBE: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A803C; /* je: equal / zero */

loc_001A7FC2: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4E);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A7FD3: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001A803C; /* je: equal / zero */

loc_001A7FDC: ;
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x34) = eax;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM32(esi + 0x30) = edi;
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_001A8038; /* jne: not equal / not zero */

loc_001A8001: ;
    eax = ebx;
    PUSH32(esp, 0); sub_001A7EF0(); /* call 0x001A7EF0 */

loc_001A8008: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001A802B; /* je: equal / zero */

loc_001A800E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001A8013: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ebx;
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(edx * 4 + 0x6B8CE8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_001A8028: ;
    esp = esp + 4;

loc_001A802B: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x40) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001A8038: ;
    MEM8(esi + 0x40) = MEM8(esi + 0x40) & 0xFE;

loc_001A803C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8050
 * Original: 0x001A8050 - 0x001A80A1 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001A8050: ;
    eax = MEM32(esi * 4 + 0x6B8CE8);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_001A805F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4E);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A8070: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001A80A0; /* je: equal / zero */

loc_001A8077: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x34) = esi;
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEM32(eax + 0x30) = 0;
    MEM8(eax + 0x40) = LO8(ecx);

loc_001A80A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A80B0
 * Original: 0x001A80B0 - 0x001A8185 (213 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A80B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A80B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(edi + 0x40));
    SET_LO8(ebx, LO8(ebx) & 1);
    if ((LO8(ebx) != 0)) goto loc_001A80EF; /* jne: not equal / not zero */

loc_001A80BF: ;
    ecx = MEM32(edi + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_001A80D1; /* je: equal / zero */

loc_001A80C6: ;
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_001A816D; /* je: equal / zero */

loc_001A80D1: ;
    esi = MEM32(edi + 0x30);
    if (TEST_Z(esi, esi)) goto loc_001A80EF; /* je: equal / zero */

loc_001A80D8: ;
    SET_LO8(eax, MEM8(esi));
    if (CMP_NE(LO8(eax), MEM8(ecx + 0x10B))) goto loc_001A816D; /* jne: not equal / not zero */

loc_001A80E6: ;
    PUSH32(esp, 0); sub_0007CAF0(); /* call 0x0007CAF0 */

loc_001A80EB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A816D; /* je: equal / zero */

loc_001A80EF: ;
    xmm0 = MEMF(edi + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm0, MEMF(edi + 0x38) - sets EFLAGS */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(edi + 0x38))) { sub_001A8185(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A8107: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(edi + 0x34);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001A8123; /* je: equal / zero */

loc_001A810E: ;
    edx = MEM32(ecx * 4 + 0x6B8CE8);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_001A811E: ;
    esp = esp + 4;
    goto loc_001A816D;

loc_001A8123: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(eax + 0x54);
    edx = MEM32(edx + 0x24);
    if (TEST_Z(edx, edx)) goto loc_001A816D; /* je: equal / zero */

loc_001A8130: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x2E);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001A816D; /* je: equal / zero */

loc_001A813A: ;
    edx = MEM32(edx + 8);
    edx = MEM32(edx + 0x14);
    if (TEST_Z(edx, edx)) goto loc_001A816D; /* je: equal / zero */

loc_001A8144: ;
    edx = MEM32(edx + 4);
    eax = MEM32(eax + 0x58);
    esi = MEM32(eax + 0xC);
    ecx = ecx + ecx * 4;
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

loc_001A816D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A8185(); return; } /* jne: not equal / not zero */

loc_001A8176: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001A8190
 * Original: 0x001A8190 - 0x001A81A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8190(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A8190: ;
    edx = MEM32(esp + 4);
    edx--;
    if ((edx == 0)) { sub_001A81A6(); return; } /* je: equal / zero */

loc_001A8197: ;
    edx = edx - 2;
    if ((edx == 0)) { sub_001A81A6(); return; } /* je: equal / zero */

loc_001A819C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000C0410(); /* call 0x000C0410 */

loc_001A81A2: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001A81B0
 * Original: 0x001A81B0 - 0x001A83EB (571 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A81B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001A81B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) { sub_001A83EB(); return; } /* je: equal / zero */

loc_001A81C7: ;
    eax = MEM32(edi + 0x4B0);
    if (CMP_EQ(eax, esi)) { sub_001A83EB(); return; } /* je: equal / zero */

loc_001A81D5: ;
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, esi)) { sub_001A83EB(); return; } /* je: equal / zero */

loc_001A81E0: ;
    if (CMP_EQ(MEM32(eax + 8), esi)) { sub_001A83EB(); return; } /* je: equal / zero */

loc_001A81E9: ;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001A8204; /* je: equal / zero */

loc_001A81F5: ;
    eax = edi;
    PUSH32(esp, 0); sub_001A8720(); /* call 0x001A8720 */

loc_001A81FC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(eax, esi)) goto loc_001A8220; /* jne: not equal / not zero */

loc_001A8204: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edi + 0x3C8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = eax;
    goto loc_001A8257;

loc_001A8220: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 8);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(MEM32(edi + 0x3C8), esi)) goto loc_001A8253; /* je: equal / zero */

loc_001A8239: ;
    if (CMP_AE(MEM8(edi + 0x3A8), 2)) goto loc_001A8253; /* jae: above or equal (unsigned >=) */

loc_001A8242: ;
    edx = MEM32(eax + 0xC4);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = ecx;
    goto loc_001A8257;

loc_001A8253: ;
    MEM32(esp + 0x18) = esi;

loc_001A8257: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = 0x5E991C;
    PUSH32(esp, 0); sub_003ED460(); /* call 0x003ED460 */

loc_001A8267: ;
    esp = esp + 8;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(eax, esi)) goto loc_001A8279; /* je: equal / zero */

loc_001A8272: ;
    eax = MEM32(eax + 0x34);
    MEM32(esp + 0x1C) = eax;

loc_001A8279: ;
    if (CMP_EQ(MEM32(esp + 0xC), esi)) goto loc_001A82F7; /* je: equal / zero */

loc_001A827F: ;
    if (CMP_NE(MEM32(ebp + 0x10), esi)) goto loc_001A82F7; /* jne: not equal / not zero */

loc_001A8284: ;
    esi = MEM32(ebp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + esi * 4 + 0x3C);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001A82EA; /* jne: not equal / not zero */

loc_001A8294: ;
    eax = MEM32(esi * 4 + 0x6B8CF8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A82AD: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001A82DC; /* jne: not equal / not zero */

loc_001A82B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001A8190(); /* call 0x001A8190 */

loc_001A82C2: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    MEM32(edx + eax * 4 + 0x3C) = 0xFFFFFFFEu;
    esp = esp + 8;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A82DC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + esi * 4 + 0x3C) = eax;
    goto loc_001A8349;

loc_001A82EA: ;
    if (CMP_NE(eax, 0xFFFFFFFEu)) goto loc_001A8349; /* jne: not equal / not zero */

loc_001A82EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    goto loc_001A83D4;

loc_001A82F7: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi * 4 + 0x6B8CF8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A8315: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001A8345; /* jne: not equal / not zero */

loc_001A831C: ;
    ecx = MEM32(esi * 4 + 0x6B8CF8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A8334: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001A8345; /* jne: not equal / not zero */

loc_001A833B: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    goto loc_001A83D4;

loc_001A8345: ;
    eax = MEM32(esp + 0x14);

loc_001A8349: ;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ebx;
    if (TEST_NZ(ecx, ecx)) goto loc_001A83A4; /* jne: not equal / not zero */

loc_001A8353: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001A835E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001A836F; /* jne: not equal / not zero */

loc_001A8365: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_001A83D4;

loc_001A836F: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_001A8381; /* jne: not equal / not zero */

loc_001A8377: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_001A83D4;

loc_001A8381: ;
    edx = ZX16(MEM16(eax + 4));
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_001A838F: ;
    esp = esp + 4;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A839C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A83A4: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001A83B3: ;
    esi = eax;
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001A83C8; /* jne: not equal / not zero */

loc_001A83C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001A83C8: ;
    if (TEST_NZ(esi, esi)) goto loc_001A83E3; /* jne: not equal / not zero */

loc_001A83CC: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_001A83D4: ;
    esi = MEM32(ebp + 0xC);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001A8190(); /* call 0x001A8190 */

loc_001A83E0: ;
    esp = esp + 8;

loc_001A83E3: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8410
 * Original: 0x001A8410 - 0x001A846D (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8410: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebp;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_001A8427: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A8447; /* je: equal / zero */

loc_001A842E: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = ebp;
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_001A8440: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A846D(); return; } /* jne: not equal / not zero */

loc_001A8447: ;
    ecx = MEM32(0x5A02D8);
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = ecx;
    edx = MEM32(0x5A02DC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5A02E0);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001A84C0
 * Original: 0x001A84C0 - 0x001A859C (220 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A84C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A84C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001A84E7: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001A84F3: ;
    esp = esp + 0x10;
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001A84FF; /* je: equal / zero */

loc_001A84FC: ;
    ebp = MEM32(eax + 0x34);

loc_001A84FF: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx * 4 + 0x6B8CF8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A851B: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001A8541; /* jne: not equal / not zero */

loc_001A8522: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx * 4 + 0x6B8CF8);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A853A: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001A8559; /* je: equal / zero */

loc_001A8541: ;
    if (TEST_NZ(ebp, ebp)) goto loc_001A857A; /* jne: not equal / not zero */

loc_001A8545: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);

loc_001A8547: ;
    eax = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001A8552: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001A8595; /* jne: not equal / not zero */

loc_001A8559: ;
    eax = MEM32(esp + 0x14);
    eax--;
    if ((eax == 0)) goto loc_001A8587; /* je: equal / zero */

loc_001A8560: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001A8587; /* je: equal / zero */

loc_001A8565: ;
    PUSH32(esp, 0);
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_000C0410(); /* call 0x000C0410 */

loc_001A8570: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001A857A: ;
    eax = MEM32(ebx + 0x3C4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    goto loc_001A8547;

loc_001A8587: ;
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000C04C0(); /* call 0x000C04C0 */

loc_001A8592: ;
    esp = esp + 4;

loc_001A8595: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A85A0
 * Original: 0x001A85A0 - 0x001A85DE (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A85A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A85A0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = ecx;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_001A84C0(); /* call 0x001A84C0 */

loc_001A85B6: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A85DE(); return; } /* jne: not equal / not zero */

loc_001A85BD: ;
    ecx = MEM32(0x5A02D8);
    MEM32(edi) = ecx;
    edx = MEM32(0x5A02DC);
    MEM32(edi + 4) = edx;
    eax = MEM32(0x5A02E0);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8660
 * Original: 0x001A8660 - 0x001A8714 (180 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8660: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001A868B: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001A8697: ;
    esp = esp + 0x10;
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001A86A3; /* je: equal / zero */

loc_001A86A0: ;
    ebp = MEM32(eax + 0x34);

loc_001A86A3: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(0x6B8CF8);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A86BA: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001A86DA; /* jne: not equal / not zero */

loc_001A86C1: ;
    PUSH32(esp, eax);
    eax = MEM32(0x6B8CF8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_001A86D3: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001A86FF; /* je: equal / zero */

loc_001A86DA: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(ebp, ebp)) goto loc_001A86E6; /* jne: not equal / not zero */

loc_001A86E2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    goto loc_001A86F1;

loc_001A86E6: ;
    ecx = MEM32(ebx + 0x3C4);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);

loc_001A86F1: ;
    ecx = edi;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001A86F8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001A870D; /* jne: not equal / not zero */

loc_001A86FF: ;
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000C0410(); /* call 0x000C0410 */

loc_001A870A: ;
    esp = esp + 4;

loc_001A870D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8720
 * Original: 0x001A8720 - 0x001A874A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8720(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A8720: ;
    edx = MEM32(eax + 0x568);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) { sub_001A874A(); return; } /* je: equal / zero */

loc_001A872B: ;
    edx = MEM32(edx + 0x300);
    if (TEST_NZ(edx, edx)) goto loc_001A873E; /* jne: not equal / not zero */

loc_001A8735: ;
    edi = edx;
    PUSH32(esp, 0); sub_00078A20(); /* call 0x00078A20 */

loc_001A873C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001A873E: ;
    edx = MEM32(edx + 0x58);
    edi = edx;
    PUSH32(esp, 0); sub_00078A20(); /* call 0x00078A20 */

loc_001A8748: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8790
 * Original: 0x001A8790 - 0x001A87B9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8790(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A8790: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_001A87B9(); return; } /* je: equal / zero */

loc_001A8799: ;
    if (CMP_EQ(eax, 3)) { sub_001A87B9(); return; } /* je: equal / zero */

loc_001A879E: ;
    if (CMP_NE(eax, 0x68)) goto loc_001A87B7; /* jne: not equal / not zero */

loc_001A87A3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(esi + 0x30))) goto loc_001A87B7; /* jne: not equal / not zero */

loc_001A87B2: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001A87B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8810
 * Original: 0x001A8810 - 0x001A88A2 (146 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_001A7EF0(); /* call 0x001A7EF0 */

loc_001A881B: ;
    ebp = eax;
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001A889D; /* jle: less or equal (signed <=) */

loc_001A8823: ;
    PUSH32(esp, ebx);

loc_001A8824: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = MEM32(esi * 4 + 0x6B8CE8);
    if (TEST_Z(edi, edi)) goto loc_001A8897; /* je: equal / zero */

loc_001A882F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001A8837: ;
    ecx = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001A8897; /* je: equal / zero */

loc_001A8844: ;
    eax = MEM32(edi + 0x4B0);
    if (TEST_Z(eax, eax)) goto loc_001A8897; /* je: equal / zero */

loc_001A884E: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_001A8897; /* je: equal / zero */

loc_001A8855: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001A8872: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001A8897; /* je: equal / zero */

loc_001A8879: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001A8897; /* je: equal / zero */

loc_001A8881: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_001A8897; /* je: equal / zero */

loc_001A8888: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x812A18);
    MEM32(eax + edx) = 0;

loc_001A8897: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_001A8824; /* jl: less (signed <) */

loc_001A889C: ;
    POP32(esp, ebx);

loc_001A889D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A88B0
 * Original: 0x001A88B0 - 0x001A8904 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A88B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A88B0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xAC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_001A88D7: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A88F7; /* je: equal / zero */

loc_001A88DE: ;
    ebx = MEM32(esp + 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_001A88F0: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A8904(); return; } /* jne: not equal / not zero */

loc_001A88F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 4; return; /* ret */

}

/**
 * sub_001A89B0
 * Original: 0x001A89B0 - 0x001A8DBB (1035 bytes, 311 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A89B0(void)
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

loc_001A89B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_001A89CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_001A89DC: ;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x91);
    eax = 0x84;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001A89F8: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_001A8DB4; /* je: equal / zero */

loc_001A8A05: ;
    MEM8(edi + 0x80) = 0;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(0x84B4B8);
    edx = MEM32(ecx + 0xC);
    eax = eax & 0xFF;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0); sub_001AA460(); /* call 0x001AA460 */

loc_001A8A25: ;
    MEM32(edi + 0x58) = eax;
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A8A45: ;
    /* fstp st(0) */
    if (CMP_B(eax, 0x3E80)) goto loc_001A8A53; /* jb: below (unsigned <) */

loc_001A8A4E: ;
    eax = 0x3E80;

loc_001A8A53: ;
    (void)0; /* cmp eax, 0x3E8 - flags set for next jcc */
    MEM32(edi + 0x60) = eax;
    if (CMP_BE(eax, 0x3E8)) goto loc_001A8A62; /* jbe: below or equal (unsigned <=) */

loc_001A8A5D: ;
    eax = eax >> 1;
    MEM32(edi + 0x60) = eax;

loc_001A8A62: ;
    edx = MEM32(edi + 0x60);
    MEM32(edi + 0x64) = edx;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x34) = xmm1; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x2C) = xmm2; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x38) = xmm1; /* movss */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    edx = MEM32(ebx + 0x1C);
    edx = edx & 0xFFFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001A8AC3; /* jge: greater or equal (signed >=) */

loc_001A8ABD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A8AC3: ;
    eax = ZX16(MEM16(ebx + 0x1E));
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    MEMF(edi + 0x50) = xmm0; /* movss */
    MEMF(edi + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649200); /* movss */
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEMF(edi + 0x44) = xmm0; /* movss */
    MEMF(edi + 0x48) = xmm0; /* movss */
    eax = MEM32(edi + 0x60);
    eax = eax + eax * 2;
    eax = eax << 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x6C) = 0;
    if (TEST_NZ(eax, eax)) goto loc_001A8B69; /* jne: not equal / not zero */

loc_001A8B1D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A8DB4; /* jne: not equal / not zero */

loc_001A8B2A: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001A8B31: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_001A8DB4; /* jl: less (signed <) */

loc_001A8B3C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001A8B56; /* je: equal / zero */

loc_001A8B49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001A8B4C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A8B56: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001A8B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A8B69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C860(); /* call 0x0053C860 */

loc_001A8B6F: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + 0x68) = eax;
    MEM32(esp + 0xC) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_001A8B8A; /* jne: not equal / not zero */

loc_001A8B7C: ;
    esi = edi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001A8B83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A8B8A: ;
    edx = MEM32(0x5499E8);
    esi = edx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001A8BB2; /* jb: below (unsigned <) */

loc_001A8B99: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001A8BA8: ;
    edx = MEM32(0x5499E8);
    ecx = MEM32(esp + 0xC);

loc_001A8BB2: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(edx, edx)) goto loc_001A8BEB; /* je: equal / zero */

loc_001A8BC8: ;
    (void)0; /* test MEM32(ecx), 0x780000 - flags set for next jcc */
    eax = MEM32(ecx + 8);
    if (TEST_Z(MEM32(ecx), 0x780000)) goto loc_001A8BDB; /* je: equal / zero */

loc_001A8BD3: ;
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    goto loc_001A8BE2;

loc_001A8BDB: ;
    if (TEST_Z(eax, eax)) goto loc_001A8BEB; /* je: equal / zero */

loc_001A8BDF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);

loc_001A8BE2: ;
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001A8BE7: ;
    ecx = MEM32(esp + 0xC);

loc_001A8BEB: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(edi + 0x60);
    eax = eax | 0x80000000u;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A8C8B; /* jbe: below or equal (unsigned <=) */

loc_001A8C06: ;
    ecx = esp + 0x1C;
    edx = esp + 0x34;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    esi = eax;

loc_001A8C18: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A8C1D: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F58); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_001A9B20(); /* call 0x001A9B20 */

loc_001A8C75: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x60);
    esp = esp + 0x18;
    eax++;
    esi = esi + 0x30;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, ecx)) goto loc_001A8C18; /* jb: below (unsigned <) */

loc_001A8C8B: ;
    esi = edi + 0x4C;
    ebx = edi + 0x2C;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = esi;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi + 0x40;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(edi + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x50); /* subss */
    xmm1 = MEMF(edi + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x54); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = MEMF(edi + 0x40); /* movss */
    xmm2 = xmm2 - MEMF(esi); /* subss */
    xmm3 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_001A8D22; /* ja: above (unsigned >) */

loc_001A8D1F: ;
    xmm3 = xmm1; /* movaps */

loc_001A8D22: ;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_001A8D2C; /* jbe: below or equal (unsigned <=) */

loc_001A8D27: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001A8D34;

loc_001A8D2C: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001A8D34; /* ja: above (unsigned >) */

loc_001A8D31: ;
    xmm0 = xmm1; /* movaps */

loc_001A8D34: ;
    MEMF(edi + 0x24) = xmm0; /* movss */
    SET_LO8(ecx, 1);
    MEM8(edi + 0x14) = LO8(ecx);
    MEM8(edi + 0x14) = LO8(ecx);
    edx = MEM32(ebx);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(ebx + 4);
    MEM32(edi + 0x1C) = eax;
    edx = MEM32(ebx + 8);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) goto loc_001A8D6F; /* je: equal / zero */

loc_001A8D5B: ;
    SET_LO8(ebx, MEM8(eax + 0x84));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_001A8D6F; /* jne: not equal / not zero */

loc_001A8D6A: ;
    MEM8(edi + 0x5D) = LO8(ecx);
    goto loc_001A8D73;

loc_001A8D6F: ;
    MEM8(edi + 0x5D) = 0;

loc_001A8D73: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_001A8D80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_001A8D8E: ;
    edi = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(0x849458);
    eax = eax - edi;
    edx = edx - esi - _cf; /* sbb */
    ecx = ecx + eax;
    eax = MEM32(0x84945C);
    eax = eax + edx + _cf; /* adc */
    MEM32(0x849458) = ecx;
    MEM32(0x84945C) = eax;

loc_001A8DB4: ;
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
 * sub_001A8DC0
 * Original: 0x001A8DC0 - 0x001A953B (1915 bytes, 350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_001A8DC0: ;
    eax = MEM32(0x849450);
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001A8DEB; /* je: equal / zero */

loc_001A8DD4: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001A8DE2: ;
    esp = esp + 4;
    MEM32(0x849450) = ebx;

loc_001A8DEB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x11C);
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    edx = ecx + edx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001A8E12: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001A8E2C; /* je: equal / zero */

loc_001A8E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001A8E26: ;
    MEM32(0x77182C) = esi;

loc_001A8E2C: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001A8E40; /* je: equal / zero */

loc_001A8E34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001A8E3A: ;
    MEM32(0x771828) = ebx;

loc_001A8E40: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001A8E66; /* je: equal / zero */

loc_001A8E4E: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8E5A: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001A8E66: ;
    edx = 0x64;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8E75: ;
    (void)0; /* cmp MEM32(0x771820), ebx - flags set for next jcc */
    MEM32(0x549AEC) = 0x64;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001A8E9F; /* je: equal / zero */

loc_001A8E87: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8E93: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001A8E9F: ;
    edx = 0x206;
    ecx = 0x4033C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8EAE: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001A8ECC; /* je: equal / zero */

loc_001A8EC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001A8EC6: ;
    MEM32(0x77181C) = edi;

loc_001A8ECC: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001A8EF2; /* je: equal / zero */

loc_001A8EDA: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8EE6: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001A8EF2: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001A8F12; /* je: equal / zero */

loc_001A8EFA: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A8F06: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001A8F12: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001A8F30; /* je: equal / zero */

loc_001A8F1A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001A8F30: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001A8F38: ;
    eax = MEM32(0x7717E4);
    edx = 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, edx)) goto loc_001A8F5C; /* je: equal / zero */

loc_001A8F4B: ;
    eax = eax | 0x800;
    MEM32(0x547360) = edx;
    MEM32(0x7717E4) = edx;

loc_001A8F5C: ;
    esi = MEM32(0x7717C4);
    ecx = 2;
    if (CMP_EQ(esi, ecx)) goto loc_001A8F7C; /* je: equal / zero */

loc_001A8F6B: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_001A8F7C: ;
    if (CMP_EQ(MEM32(0x7717B4), ebx)) goto loc_001A8F95; /* je: equal / zero */

loc_001A8F84: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ebx;
    MEM32(0x7717B4) = ebx;

loc_001A8F95: ;
    if (CMP_EQ(MEM32(0x7717A4), edx)) goto loc_001A8FAE; /* je: equal / zero */

loc_001A8F9D: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_001A8FAE: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_001A8FC7; /* je: equal / zero */

loc_001A8FB6: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_001A8FC7: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_001A8FE0; /* je: equal / zero */

loc_001A8FCF: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_001A8FE0: ;
    MEM32(0x547340) = ecx;
    MEM32(0x54733C) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x5499F0) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_001A901F; /* je: equal / zero */

loc_001A9009: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001A901F: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001A903D; /* je: equal / zero */

loc_001A9027: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001A903D: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_001A9063; /* je: equal / zero */

loc_001A904B: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A9057: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001A9063: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001A9077: ;
    eax = MEM32(0x771800);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001A908F; /* je: equal / zero */

loc_001A9083: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001A9089: ;
    MEM32(0x771800) = ebx;

loc_001A908F: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001A90A4; /* je: equal / zero */

loc_001A9097: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001A909E: ;
    MEM32(0x77175C) = ebx;

loc_001A90A4: ;
    xmm0 = MEMF(0x648D10); /* movss */
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm3; /* movss */
    xmm0 = xmm2; /* movaps */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_001A90F6; /* jne: not equal / not zero */

loc_001A90EE: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001A90F6: ;
    xmm1 = MEMF(0x648D18); /* movss */
    xmm4 = MEMF(0x649368); /* movss */
    xmm6 = MEMF(0x64A5DC); /* movss */
    xmm5 = MEMF(0x64A194); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(0x87A1C4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5D8); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5D4); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5D0); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5CC); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x649700); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    xmm4 = MEMF(0x64A5C8); /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    xmm1 = MEMF(0x648DE0); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    xmm4 = MEMF(0x64A5C4); /* movss */
    MEMF(esp + 0xC8) = xmm1; /* movss */
    xmm1 = MEMF(0x648D88); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    xmm4 = MEMF(0x6491E0); /* movss */
    MEMF(esp + 0xCC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    xmm4 = MEMF(0x64A5C0); /* movss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    xmm1 = MEMF(0x648F20); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm4; /* movss */
    MEMF(esp + 0xAC) = xmm6; /* movss */
    xmm6 = MEMF(0x64A030); /* movss */
    MEMF(esp + 0x98) = xmm4; /* movss */
    xmm4 = MEMF(0x64A5BC); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0xA8) = xmm5; /* movss */
    MEMF(esp + 0xB0) = xmm6; /* movss */
    xmm6 = MEMF(0x64A5B8); /* movss */
    MEMF(esp + 0x9C) = xmm5; /* movss */
    xmm5 = MEMF(0x649D7C); /* movss */
    MEMF(esp + 0xA0) = xmm4; /* movss */
    xmm4 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm1; /* movss */
    MEMF(esp + 0xFC) = xmm1; /* movss */
    xmm1 = MEMF(0x6496F0); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    edx = esp + 0xD4;
    ecx = 0x60;
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    MEMF(esp + 0xBC) = xmm2; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x94) = xmm6; /* movss */
    MEMF(esp + 0xEC) = xmm4; /* movss */
    MEMF(esp + 0xF0) = xmm5; /* movss */
    MEMF(esp + 0x100) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A936E: ;
    edx = esp + 0x44;
    ecx = 0x61;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A937C: ;
    edx = esp + 0x74;
    ecx = 0x68;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A938A: ;
    edx = esp + 0xB4;
    ecx = 0x6A;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A939B: ;
    edx = esp + 0x84;
    ecx = 0x6B;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93AC: ;
    edx = esp + 0x54;
    ecx = 0x6C;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93BA: ;
    edx = esp + 0x34;
    ecx = 0x6D;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93C8: ;
    edx = esp + 0xA4;
    ecx = 0x6E;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93D9: ;
    edx = esp + 0x94;
    ecx = 0x6F;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93EA: ;
    edx = esp + 0xE4;
    ecx = 0x70;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A93FB: ;
    edx = esp + 0xC4;
    ecx = 0x71;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A940C: ;
    edx = esp + 0xF4;
    ecx = 0x72;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A941D: ;
    edx = esp + 0x64;
    ecx = 0x73;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A942B: ;
    esi = MEM32(0x84A5F8);
    xmm0 = MEMF(esi + 0x8C); /* movss */
    xmm1 = MEMF(esi + 0x88); /* movss */
    xmm4 = MEMF(esi + 0x84); /* movss */
    edi = esi + 0x84;
    edx = esp + 0x24;
    ecx = 0x64;
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A9475: ;
    esi = esi + 0x78;
    eax = esp + 0x18;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x649430); /* movss */
    ecx = esp + 0x18;
    edx = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = esp + 0x104;
    ecx = 0x65;
    MEMF(esp + 0x108) = xmm2; /* movss */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    MEMF(esp + 0x110) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001A9531: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9540
 * Original: 0x001A9540 - 0x001A9A80 (1344 bytes, 345 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9540(void)
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

loc_001A9540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 0x3E0);
    eax = ebx + 0x2C;
    MEM32(esp + 0x18) = eax;
    edx = edx + 0x78;
    eax = esp + 0x24;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x24;
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
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0, MEMF(0x649234) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649234))) goto loc_001A9A79; /* ja: above (unsigned >) */

loc_001A95F0: ;
    xmm1 = MEMF(0x648EBC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001A9685; /* jbe: below or equal (unsigned <=) */

loc_001A9601: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x64952C); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001A9632; /* jbe: below or equal (unsigned <=) */

loc_001A962A: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_001A963D;

loc_001A9632: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_001A963D; /* jbe: below or equal (unsigned <=) */

loc_001A9637: ;
    MEMF(esp + 0x1C) = xmm2; /* movss */

loc_001A963D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A964C: ;
    fp_push((double)SMEM32(ebx + 0x60)); /* fild */
    esi = MEM32(ebx + 0x60);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(ebx + 0x5C) = LO8(eax);
    if (CMP_GE(esi & esi, 0)) goto loc_001A965F; /* jge: greater or equal (signed >=) */

loc_001A9659: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A965F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A9668: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(ebx + 0x64) = eax;
    if (CMP_AE(eax, 1)) goto loc_001A967A; /* jae: above or equal (unsigned >=) */

loc_001A9670: ;
    eax = 1;
    MEM32(ebx + 0x64) = eax;
    goto loc_001A968F;

loc_001A967A: ;
    if (CMP_BE(eax, esi)) goto loc_001A9680; /* jbe: below or equal (unsigned <=) */

loc_001A967E: ;
    eax = esi;

loc_001A9680: ;
    MEM32(ebx + 0x64) = eax;
    goto loc_001A968F;

loc_001A9685: ;
    edx = MEM32(ebx + 0x60);
    MEM32(ebx + 0x64) = edx;
    MEM8(ebx + 0x5C) = 0xFF;

loc_001A968F: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_001A96A4: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0xBC;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_001A96BF: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001A96D4: ;
    eax = MEM32(0x84A13C);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    ecx = edx + eax + 0x40;
    PUSH32(esp, ecx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001A96F8: ;
    eax = MEM32(0x84A13C);
    edx = edx + eax;
    PUSH32(esp, edx);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001A9712: ;
    eax = edx;
    ecx = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001A9772: ;
    SET_LO8(eax, MEM8(ebx + 0x5D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A9794; /* jne: not equal / not zero */

loc_001A9779: ;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) goto loc_001A9794; /* je: equal / zero */

loc_001A9782: ;
    SET_LO8(edx, MEM8(eax + 0x84));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), 1)) goto loc_001A9794; /* jne: not equal / not zero */

loc_001A9791: ;
    MEM8(ebx + 0x5D) = LO8(eax);

loc_001A9794: ;
    (void)0; /* cmp MEM8(ebx + 0x5C), 0xFF - flags set for next jcc */
    ecx = MEM32(0x771760);
    if (CMP_AE(MEM8(ebx + 0x5C), 0xFF)) goto loc_001A9918; /* jae: above or equal (unsigned >=) */

loc_001A97A4: ;
    eax = MEM32(0x6B89DC);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001A97BB; /* je: equal / zero */

loc_001A97AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001A97B5: ;
    MEM32(0x771760) = esi;

loc_001A97BB: ;
    edx = ZX8(MEM8(ebx + 0x5C));
    edi = MEM32(ebx + 0x58);
    MEM32(esp + 0x18) = edx;
    esi = 0; /* xor self */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_001A97DB: ;
    edi = MEM32(ebx + 0x58);
    esi = 1;
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_001A97E8: ;
    eax = ZX8(MEM8(ebx + 0x5C));
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_001A97FA: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001A9809: ;
    esi = eax;
    edx = esi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A9817: ;
    eax = MEM32(0x771820);
    MEM32(0x549AEC) = esi;
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_001A9843; /* je: equal / zero */

loc_001A982B: ;
    edx = esi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A9837: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_001A9843: ;
    edx = MEM32(0x7717E8);
    eax = 2;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(edx, eax)) goto loc_001A9867; /* je: equal / zero */

loc_001A9857: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E0) = eax;
    MEM32(0x7717E8) = eax;

loc_001A9867: ;
    if (CMP_EQ(MEM32(0x7717C8), esi)) goto loc_001A9881; /* je: equal / zero */

loc_001A986F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E8) = esi;
    MEM32(0x7717C8) = esi;

loc_001A9881: ;
    edx = MEM32(0x7717A8);
    eax = 4;
    if (CMP_EQ(edx, eax)) goto loc_001A98A0; /* je: equal / zero */

loc_001A9890: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F0) = eax;
    MEM32(0x7717A8) = eax;

loc_001A98A0: ;
    if (CMP_EQ(MEM32(0x771788), esi)) goto loc_001A98BA; /* je: equal / zero */

loc_001A98A8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F8) = esi;
    MEM32(0x771788) = esi;

loc_001A98BA: ;
    eax = MEM32(0x771778);
    edi = 3;
    if (CMP_EQ(eax, edi)) goto loc_001A98DA; /* je: equal / zero */

loc_001A98C8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473FC) = edi;
    MEM32(0x771778) = edi;

loc_001A98DA: ;
    if (CMP_EQ(MEM32(0x7717EC), esi)) goto loc_001A98F4; /* je: equal / zero */

loc_001A98E2: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547460) = esi;
    MEM32(0x7717EC) = esi;

loc_001A98F4: ;
    if (CMP_EQ(MEM32(0x7717AC), esi)) goto loc_001A9A1E; /* je: equal / zero */

loc_001A9900: ;
    eax = MEM32(0x5499F0);
    eax = eax | ecx;
    MEM32(0x547470) = esi;
    MEM32(0x7717AC) = esi;
    goto loc_001A9A19;

loc_001A9918: ;
    eax = MEM32(0x6B89A4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001A992F; /* je: equal / zero */

loc_001A9923: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001A9929: ;
    MEM32(0x771760) = esi;

loc_001A992F: ;
    ecx = ZX8(MEM8(ebx + 0x5C));
    ecx = ecx << 0x18;
    ecx = ecx | 0xFFFFFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_001A9942: ;
    edi = MEM32(ebx + 0x58);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_001A994C: ;
    eax = MEM32(0x771768);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 1;
    if (TEST_Z(eax, eax)) goto loc_001A996D; /* je: equal / zero */

loc_001A995A: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A9963: ;
    MEM32(0x771768) = 0;

loc_001A996D: ;
    edx = 0x7F;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A997C: ;
    (void)0; /* cmp MEM32(0x771820), esi - flags set for next jcc */
    MEM32(0x549AEC) = 0x7F;
    if (CMP_EQ(MEM32(0x771820), esi)) goto loc_001A99A6; /* je: equal / zero */

loc_001A998E: ;
    edx = esi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001A999A: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_001A99A6: ;
    (void)0; /* cmp MEM32(0x7717E8), esi - flags set for next jcc */
    eax = MEM32(0x5499F0);
    ecx = 0x800;
    if (CMP_EQ(MEM32(0x7717E8), esi)) goto loc_001A99C6; /* je: equal / zero */

loc_001A99B8: ;
    eax = eax | ecx;
    MEM32(0x5473E0) = esi;
    MEM32(0x7717E8) = esi;

loc_001A99C6: ;
    if (CMP_EQ(MEM32(0x7717A8), esi)) goto loc_001A99DC; /* je: equal / zero */

loc_001A99CE: ;
    eax = eax | ecx;
    MEM32(0x5473F0) = esi;
    MEM32(0x7717A8) = esi;

loc_001A99DC: ;
    if (CMP_EQ(MEM32(0x7717EC), esi)) goto loc_001A99F2; /* je: equal / zero */

loc_001A99E4: ;
    eax = eax | ecx;
    MEM32(0x547460) = esi;
    MEM32(0x7717EC) = esi;

loc_001A99F2: ;
    if (CMP_EQ(MEM32(0x7717AC), esi)) goto loc_001A9A08; /* je: equal / zero */

loc_001A99FA: ;
    eax = eax | ecx;
    MEM32(0x547470) = esi;
    MEM32(0x7717AC) = esi;

loc_001A9A08: ;
    eax = eax | esi;
    MEM32(0x54735C) = 4;
    edi = 3;

loc_001A9A19: ;
    MEM32(0x5499F0) = eax;

loc_001A9A1E: ;
    ebx = MEM32(ebx + 0x68);
    PUSH32(esp, 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A9A2A: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x64);
    eax = eax << 2;
    PUSH32(esp, 8);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053A930(); /* call 0x0053A930 */

loc_001A9A3C: ;
    eax = MEM32(0x771764);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001A9A55; /* je: equal / zero */

loc_001A9A47: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001A9A4F: ;
    MEM32(0x771764) = esi;

loc_001A9A55: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | edi;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(0x54735C) = esi;
    MEM32(0x5499F0) = ecx;
    MEM32(0x5473DC) = esi;
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_001A9A79: ;
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
 * sub_001A9A80
 * Original: 0x001A9A80 - 0x001A9AC7 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A9A80: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x68);
    if (TEST_Z(eax, eax)) goto loc_001A9AC5; /* je: equal / zero */

loc_001A9A88: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x6C);
    if (TEST_Z(esi, esi)) goto loc_001A9AB7; /* je: equal / zero */

loc_001A9A90: ;
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_001A9A95: ;
    eax = MEM32(edi + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001A9ABD; /* je: equal / zero */

loc_001A9AA0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001A9AAA: ;
    esp = esp + 4;
    MEM32(edi + 0x68) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001A9AB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001A9ABD: ;
    MEM32(edi + 0x68) = 0;
    POP32(esp, esi);

loc_001A9AC5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9AD0
 * Original: 0x001A9AD0 - 0x001A9AF0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9AD0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A9A80(); /* call 0x001A9A80 */

loc_001A9ADA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001A9AF0(); return; } /* jne: not equal / not zero */

loc_001A9AE3: ;
    eax = edi;
    edx = 1;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001A9B00
 * Original: 0x001A9B00 - 0x001A9B15 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B00(void)
{

loc_001A9B00: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001A9A80(); /* call 0x001A9A80 */

loc_001A9B0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001A9B10: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9B20
 * Original: 0x001A9B20 - 0x001A9DCB (683 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B20(void)
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

loc_001A9B20: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0); sub_003C8D80(); /* call 0x003C8D80 */

loc_001A9B3E: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    xmm5 = MEMF(ebx); /* movss */
    xmm6 = MEMF(ebx + 8); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esp + 0x48));
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebx + 4); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001A9BB6; /* je: equal / zero */

loc_001A9BA6: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */

loc_001A9BB6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001A9BBB: ;
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(0x59D944); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi) = LO16(eax);
    MEM16(esi + 4) = LO16(ecx);
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if ((xmm0 > xmm2)) goto loc_001A9C42; /* ja: above (unsigned >) */

loc_001A9C3C: ;
    MEMF(esp + 0x44) = xmm2; /* movss */

loc_001A9C42: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    ecx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    esp = esp - 0xC;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(edi);
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A9F70(); /* call 0x001A9F70 */

loc_001A9C96: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    eax = MEM32(esp + 0x58);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp = esp + 0x14;
    (void)0; /* test eax, 0xFFFFFF - flags set for next jcc */
    xmm0 = xmm0 - xmm1; /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 2) = LO16(edx);
    if (TEST_Z(eax, 0xFFFFFF)) goto loc_001A9CBD; /* je: equal / zero */

loc_001A9CB8: ;
    MEM32(0x75DED0) = eax;

loc_001A9CBD: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    eax = MEM32(0x75DED0);
    MEM32(esi + 6) = eax;
    MEM8(esi + 0xA) = LO8(ebx);
    MEM8(esi + 0xB) = 0xFF;
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001A9CE0; /* ja: above (unsigned >) */

loc_001A9CDD: ;
    xmm0 = xmm1; /* movaps */

loc_001A9CE0: ;
    xmm1 = MEMF(ebp + 4); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001A9CFA; /* ja: above (unsigned >) */

loc_001A9CF7: ;
    xmm0 = xmm1; /* movaps */

loc_001A9CFA: ;
    xmm1 = MEMF(ebp + 8); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001A9D14; /* ja: above (unsigned >) */

loc_001A9D11: ;
    xmm0 = xmm1; /* movaps */

loc_001A9D14: ;
    eax = MEM32(esp + 0x40);
    MEMF(ebp + 8) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_001A9D2D; /* ja: above (unsigned >) */

loc_001A9D29: ;
    xmm0 = MEMF(eax); /* movss */

loc_001A9D2D: ;
    MEMF(eax) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 4))) goto loc_001A9D44; /* ja: above (unsigned >) */

loc_001A9D3F: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_001A9D44: ;
    MEMF(eax + 4) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 8))) goto loc_001A9D5C; /* ja: above (unsigned >) */

loc_001A9D57: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_001A9D5C: ;
    xmm2 = MEMF(0x648CEC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    edx = ZX8(MEM8(esi + 8));
    eax = ZX8(MEM8(esi + 7));
    ecx = MEM32(esi + 6);
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(esp + 0x44) = ecx;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001A9D9C; /* jge: greater or equal (signed >=) */

loc_001A9D96: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A9D9C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(0x648D10); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm2)) { sub_001A9DCB(); return; } /* jbe: below or equal (unsigned <=) */

loc_001A9DC3: ;
    MEMF(esp + 0x3C) = xmm4; /* movss */
    g_seh_ebp = ebp; sub_001A9DD5(); return; /* tail jmp 0x001A9DD5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001A9F70
 * Original: 0x001A9F70 - 0x001AA054 (228 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F70(void)
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

loc_001A9F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849450);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, ebx)) goto loc_001AA01F; /* jne: not equal / not zero */

loc_001A9F8F: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_001A9F9C; /* jne: not equal / not zero */

loc_001A9F97: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001A9F9C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_001A9FEA; /* je: equal / zero */

loc_001A9FC2: ;
    if (CMP_B(MEM32(esi + 0x80), 0x6244)) goto loc_001A9FEA; /* jb: below (unsigned <) */

loc_001A9FCE: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001A9FD8: ;
    PUSH32(esp, 0x6244);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001A9FE3: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001AA00E; /* jne: not equal / not zero */

loc_001A9FEA: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001A9FFC: ;
    PUSH32(esp, 0x6244);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001AA007: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001AA017; /* je: equal / zero */

loc_001AA00E: ;
    PUSH32(esp, 0); sub_001AA4C0(); /* call 0x001AA4C0 */

loc_001AA013: ;
    esi = eax;
    goto loc_001AA019;

loc_001AA017: ;
    esi = 0; /* xor self */

loc_001AA019: ;
    MEM32(0x849450) = esi;

loc_001AA01F: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001AA031: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    edi = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x287F);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001AA047: ;
    edi = edi - eax;
    MEM32(esp + 0x1C) = edi;
    if ((edi != 0)) { sub_001AA054(); return; } /* jne: not equal / not zero */

loc_001AA04F: ;
    ecx = ecx | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_001AA056(); return; /* tail jmp 0x001AA056 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001AA230
 * Original: 0x001AA230 - 0x001AA452 (546 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA230(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001AA230: ;
    esp = esp - 0x74;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001AA44D; /* je: equal / zero */

loc_001AA244: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AA44D; /* jne: not equal / not zero */

loc_001AA251: ;
    ecx = esi;
    PUSH32(esp, 0); sub_002F6EB0(); /* call 0x002F6EB0 */

loc_001AA258: ;
    if (TEST_NZ(eax, eax)) goto loc_001AA44D; /* jne: not equal / not zero */

loc_001AA260: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFFFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001AA27F; /* jge: greater or equal (signed >=) */

loc_001AA279: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001AA27F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm5 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CE4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001AA2A3; /* ja: above (unsigned >) */

loc_001AA29D: ;
    xmm5 = MEMF(esp + 4); /* movss */

loc_001AA2A3: ;
    xmm3 = MEMF(esi + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x294); /* subss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_001AA2BB; /* jbe: below or equal (unsigned <=) */

loc_001AA2B8: ;
    xmm3 = xmm4; /* movaps */

loc_001AA2BB: ;
    /* comiss xmm3, xmm5 - sets EFLAGS */
    if ((xmm3 > xmm5)) goto loc_001AA44D; /* ja: above (unsigned >) */

loc_001AA2C4: ;
    PUSH32(esp, edi);
    edx = esi + 0x84;
    edi = esi + 0x78;
    eax = esp + 0x20;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_001AA30F: ;
    xmm0 = xmm0 * MEMF(0x64A294); /* mulss */
    esi = esi | 0xFFFFFFFFu;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = esi - edx;
    esp = esp + 4;
    if (CMP_LE(esi & esi, 0)) goto loc_001AA44C; /* jle: less or equal (signed <=) */

loc_001AA32B: ;
    if (CMP_L(esi, 4)) goto loc_001AA335; /* jl: less (signed <) */

loc_001AA330: ;
    esi = 4;

loc_001AA335: ;
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    if ((xmm3 <= xmm4)) goto loc_001AA356; /* jbe: below or equal (unsigned <=) */

loc_001AA34C: ;
    xmm5 = xmm5 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm5; /* movss */

loc_001AA356: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    edx = edi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_00043DE0(); /* call 0x00043DE0 */

loc_001AA372: ;
    xmm0 = MEMF(0x648EF4); /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x649418); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64A290); /* movss */
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64A28C); /* movss */
    MEM32(esp + 0x48) = edx;
    ecx = esi + esi * 2;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x649C18); /* movss */
    ecx = ecx << 1;
    MEM32(esp + 0x4C) = eax;
    edx = 0xFFFFFFECu;
    eax = 0x19;
    edx = edx - ecx;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x64A288); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 2);
    esi = esp + 0x44;
    MEM16(esp + 0x60) = 0;
    MEM16(esp + 0x62) = 0xFF;
    MEM16(esp + 0x64) = LO16(edx);
    MEM16(esp + 0x66) = 0xE;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM8(esp + 0x80) = 3;
    MEM16(esp + 0x82) = LO16(eax);
    MEM16(esp + 0x84) = LO16(eax);
    PUSH32(esp, 0); sub_000F3880(); /* call 0x000F3880 */

loc_001AA449: ;
    esp = esp + 0xC;

loc_001AA44C: ;
    POP32(esp, edi);

loc_001AA44D: ;
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
 * sub_001AA460
 * Original: 0x001AA460 - 0x001AA4B1 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA460(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AA460: ;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x5F50DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_001AA477: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = esp + 0x14;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001AA48D: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001AA4A9; /* jne: not equal / not zero */

loc_001AA498: ;
    PUSH32(esp, 0x5E520C);
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001AA4A2: ;
    eax = MEM32(esp + 8);
    esp = esp + 4;

loc_001AA4A9: ;
    POP32(esp, esi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}
