/**
 * Burnout 3 - Recompiled code chunk 26
 * Functions: 250 (0x002502B0 - 0x00263970)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002502B0
 * Original: 0x002502B0 - 0x0025030A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002502B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F370);
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

loc_002502E3: ;
    if (CMP_BE(edx & edx, 0)) { sub_0025030A(); return; } /* jbe: below or equal (unsigned <=) */

loc_002502E7: ;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_002502FE; /* je: equal / zero */

loc_002502EE: ;
    eax = MEM32(esi);
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_002502FE; /* je: equal / zero */

loc_002502F6: ;
    eax = eax + 4;
    MEM32(ebp + -28) = eax;
    MEM32(eax) = MEM32(eax) + 1;

loc_002502FE: ;
    edx--;
    MEM32(ebp + 0xC) = edx;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_002502E3;

}

/**
 * sub_00250350
 * Original: 0x00250350 - 0x002503AF (95 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    if (CMP_EQ(MEM32(esp + 0xC), ebp)) goto loc_002503AA; /* je: equal / zero */

loc_0025035E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00250360: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebx + -4);
    ebp = ebp - 4;
    ebx = ebx - 4;
    if (CMP_EQ(eax, ecx)) goto loc_002503A2; /* je: equal / zero */

loc_00250370: ;
    if (TEST_Z(eax, eax)) goto loc_00250376; /* je: equal / zero */

loc_00250374: ;
    MEM32(eax) = MEM32(eax) + 1;

loc_00250376: ;
    edi = MEM32(ebx);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(edi, edi)) goto loc_002503A2; /* je: equal / zero */

loc_0025037E: ;
    ecx = MEM32(edi);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002503A2; /* jne: not equal / not zero */

loc_00250389: ;
    esi = edi + 4;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_00250391: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025039F: ;
    esp = esp + 4;

loc_002503A2: ;
    if (CMP_NE(ebp, MEM32(esp + 0x14))) goto loc_00250360; /* jne: not equal / not zero */

loc_002503A8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002503AA: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002503B0
 * Original: 0x002503B0 - 0x002503EE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002503B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(ebx, esi)) goto loc_002503EC; /* je: equal / zero */

loc_002503B7: ;
    PUSH32(esp, edi);
    goto loc_002503C0;

    /* nop */

loc_002503C0: ;
    eax = eax - 0x84;
    esi = esi - 0x84;
    edi = eax;
    ecx = esi;
    edi = edi - esi;

loc_002503D1: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002503D1; /* jne: not equal / not zero */

loc_002503DB: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    ecx = MEM32(esi + 0x80);
    MEM32(eax + 0x80) = ecx;
    if (CMP_NE(esi, ebx)) goto loc_002503C0; /* jne: not equal / not zero */

loc_002503EB: ;
    POP32(esp, edi);

loc_002503EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002503F0
 * Original: 0x002503F0 - 0x0025043B (75 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002503F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebx, edi)) goto loc_00250436; /* je: equal / zero */

loc_002503FA: ;
    /* nop */

loc_00250400: ;
    eax = MEM32(edi + -4);
    ecx = MEM32(esi + -4);
    edi = edi - 4;
    esi = esi - 4;
    if (CMP_EQ(eax, ecx)) goto loc_00250432; /* je: equal / zero */

loc_00250410: ;
    if (TEST_Z(eax, eax)) goto loc_00250417; /* je: equal / zero */

loc_00250414: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00250417: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00250432; /* je: equal / zero */

loc_0025041F: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00250432; /* jne: not equal / not zero */

loc_0025042C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00250432: ;
    if (CMP_NE(edi, ebx)) goto loc_00250400; /* jne: not equal / not zero */

loc_00250436: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250440
 * Original: 0x00250440 - 0x00250479 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00250440: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_00250471; /* je: equal / zero */

loc_00250447: ;
    MEM32(eax) = MEM32(eax) - 1;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (CMP_NE(MEM32(edi), 0)) goto loc_00250470; /* jne: not equal / not zero */

loc_00250451: ;
    if (TEST_Z(edi, edi)) goto loc_00250470; /* je: equal / zero */

loc_00250455: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_0025045E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025046C: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00250470: ;
    POP32(esp, edi);

loc_00250471: ;
    MEM32(ebx) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250480
 * Original: 0x00250480 - 0x002504A7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00250480: ;
    if (TEST_Z(edi, edi)) goto loc_002504A6; /* je: equal / zero */

loc_00250484: ;
    edx = edi;
    eax = esi;
    edx = edx - esi;
    /* nop */

loc_00250490: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00250490; /* jne: not equal / not zero */

loc_0025049A: ;
    eax = MEM32(esi + 0x80);
    MEM32(edi + 0x80) = eax;

loc_002504A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002504B0
 * Original: 0x002504B0 - 0x0025050D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002504B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5B0);
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

loc_002504E4: ;
    if (CMP_EQ(edx, esi)) { sub_0025050D(); return; } /* je: equal / zero */

loc_002504E8: ;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_002504FF; /* je: equal / zero */

loc_002504F2: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_002504FF; /* je: equal / zero */

loc_002504FA: ;
    MEM32(ebp + -32) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002504FF: ;
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_002504E4;

}

/**
 * sub_00250550
 * Original: 0x00250550 - 0x002505B0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00250550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F450);
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

loc_00250584: ;
    if (CMP_EQ(edx, esi)) { sub_002505B0(); return; } /* je: equal / zero */

loc_00250588: ;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_002505A2; /* je: equal / zero */

loc_00250592: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_002505A2; /* je: equal / zero */

loc_0025059A: ;
    ecx = ecx + 4;
    MEM32(ebp + -32) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002505A2: ;
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00250584;

}

/**
 * sub_002505F0
 * Original: 0x002505F0 - 0x00250649 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002505F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5A0);
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

loc_00250623: ;
    if (CMP_EQ(edx, esi)) { sub_00250649(); return; } /* je: equal / zero */

loc_00250627: ;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0025063B; /* je: equal / zero */

loc_0025062E: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0025063B; /* je: equal / zero */

loc_00250636: ;
    MEM32(ebp + -28) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0025063B: ;
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00250623;

}

/**
 * sub_00250690
 * Original: 0x00250690 - 0x002506DD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00250690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F360);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_002506C0: ;
    if (CMP_EQ(esi, ebx)) { sub_002506DD(); return; } /* je: equal / zero */

loc_002506C4: ;
    PUSH32(esp, 0); sub_00250480(); /* call 0x00250480 */

loc_002506C9: ;
    edi = edi + 0x84;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x84;
    MEM32(ebp + 8) = esi;
    goto loc_002506C0;

}

/**
 * sub_00250710
 * Original: 0x00250710 - 0x0025076C (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00250710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F440);
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

loc_00250743: ;
    if (CMP_EQ(edx, esi)) { sub_0025076C(); return; } /* je: equal / zero */

loc_00250747: ;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0025075E; /* je: equal / zero */

loc_0025074E: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0025075E; /* je: equal / zero */

loc_00250756: ;
    ecx = ecx + 4;
    MEM32(ebp + -28) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0025075E: ;
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00250743;

}

/**
 * sub_002507C0
 * Original: 0x002507C0 - 0x00250D7A (1466 bytes, 422 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002507C0(void)
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

loc_002507C0: ;
    eax = 0x18F4;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_002507CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1904);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x24;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_002507E6: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    SET_LO8(ebx, MEM8(ecx + 0x10));
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    esi = esp + 0x38;
    eax = esp + 0x20;
    MEM32(esp + 0x1C) = 0;
    edi = edx;
    PUSH32(esp, 0); sub_0032DAE0(); /* call 0x0032DAE0 */

loc_00250816: ;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_002161C0(); /* call 0x002161C0 */

loc_00250820: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x60), LO16(eax) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM16(ebp + 0x60), LO16(eax))) ? 1 : 0); /* setne */
    eax++;
    esi = eax;
    SET_LO8(eax, MEM8(0x849B80));
    MEM8(esp + 0x18) = LO8(eax);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x849ADC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250873; /* je: equal / zero */

loc_0025083E: ;
    if (CMP_EQ(esi, eax)) goto loc_00250873; /* je: equal / zero */

loc_00250842: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00250855: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    MEM32(0x849ADC) = esi;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_0025086E: ;
    eax = MEM32(0x849ADC);

loc_00250873: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(esp + 0x1908);
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(ecx * 4 + 0x77623C));
    (void)0; /* cmp MEM32(edx + 0x64), 0x36 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(MEM32(edx + 0x64), 0x36)) goto loc_00250D37; /* jne: not equal / not zero */

loc_00250896: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FC04C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002508A2: ;
    esi = eax;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002508A9: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x444);
    ecx = MEM32(edx + 0x280);
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002508C6; /* je: equal / zero */

loc_002508C4: ;
    SET_LO8(eax, 1);

loc_002508C6: ;
    if (TEST_NZ(LO8(ebx), 0x20)) goto loc_00250CA3; /* jne: not equal / not zero */

loc_002508CF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00250CA3; /* jne: not equal / not zero */

loc_002508D7: ;
    edx = MEM32(0x6BD92C);
    eax = MEM32(edx + 4);
    if (TEST_NZ(eax, eax)) goto loc_002508F0; /* jne: not equal / not zero */

loc_002508E4: ;
    ebx = 7;
    eax = 0x6BDA18;
    goto loc_002508FA;

loc_002508F0: ;
    ebx = 6;
    eax = 0x6BDA50;

loc_002508FA: ;
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0025094D; /* jle: less or equal (signed <=) */

loc_00250908: ;
    edi = MEM32(esp + 0x20);
    ebp = eax + 4;
    /* nop */

loc_00250910: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00250934; /* jle: less or equal (signed <=) */

loc_00250918: ;
    esi = MEM32(ebp);
    goto loc_00250920;

    /* nop */

loc_00250920: ;
    if (CMP_NE(esi, MEM32(esp + eax * 4 + 0x38))) goto loc_0025092B; /* jne: not equal / not zero */

loc_00250926: ;
    edx = 1;

loc_0025092B: ;
    eax++;
    if (CMP_L(eax, edi)) goto loc_00250920; /* jl: less (signed <) */

loc_00250930: ;
    if (TEST_NZ(edx, edx)) goto loc_00250945; /* jne: not equal / not zero */

loc_00250934: ;
    edx = MEM32(esp + 0x1C);
    eax = 1;
    eax = eax << LO8(ecx);
    edx = edx | eax;
    MEM32(esp + 0x1C) = edx;

loc_00250945: ;
    ecx++;
    ebp = ebp + 8;
    if (CMP_L(ecx, ebx)) goto loc_00250910; /* jl: less (signed <) */

loc_0025094D: ;
    eax = MEM32(esp + 0x1C);
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    edx--;
    if (CMP_NE(eax, edx)) goto loc_00250975; /* jne: not equal / not zero */

loc_0025095F: ;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001F6FC0(); /* call 0x001F6FC0 */

loc_00250968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18F4;
    esp += 4; return; /* ret */

loc_00250975: ;
    esi = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(esi + 0x849C48));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_0025098A; /* jge: greater or equal (signed >=) */

loc_00250983: ;
    MEM8(esi + 0x849C48) = 0;

loc_0025098A: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x849C48);
    if (CMP_L(ecx, ebx)) goto loc_0025099F; /* jl: less (signed <) */

loc_00250995: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x849C48) = LO8(edx);

loc_0025099F: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(edx), 2)) goto loc_00250A06; /* jne: not equal / not zero */

loc_002509A8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x849C48);
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_NZ(eax, edi)) goto loc_00250A06; /* jne: not equal / not zero */

loc_002509BA: ;
    if (TEST_Z(LO8(edx), 1)) goto loc_00250AA9; /* je: equal / zero */

loc_002509C3: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_002509D0; /* jns: not sign (positive) */

loc_002509C6: ;
    ecx = 0; /* xor self */
    goto loc_002509D0;

    /* nop */

loc_002509D0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_002509ED; /* je: equal / zero */

loc_002509DB: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_002509D0; /* jns: not sign (positive) */

loc_002509DE: ;
    eax = 0xC;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_002509E8: ;
    goto loc_00250AA9;

loc_002509ED: ;
    if (TEST_S(ecx, ecx)) goto loc_002509F7; /* jl: less (signed <) */

loc_002509F1: ;
    MEM8(esi + 0x849C48) = LO8(ecx);

loc_002509F7: ;
    eax = 0xC;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00250A01: ;
    goto loc_00250AA9;

loc_00250A06: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x849C48);
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_00250A20; /* jl: less (signed <) */

loc_00250A12: ;
    ecx = ebx + -1;
    if (CMP_GE(ecx, ebx)) goto loc_00250A3C; /* jge: greater or equal (signed >=) */

loc_00250A19: ;
    /* nop */

loc_00250A20: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_00250A32; /* je: equal / zero */

loc_00250A2B: ;
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_00250A20; /* jl: less (signed <) */

loc_00250A30: ;
    goto loc_00250A3C;

loc_00250A32: ;
    if (CMP_GE(ecx, ebx)) goto loc_00250A3C; /* jge: greater or equal (signed >=) */

loc_00250A36: ;
    MEM8(esi + 0x849C48) = LO8(ecx);

loc_00250A3C: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00250A50; /* jne: not equal / not zero */

loc_00250A48: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00250A50: ;
    ecx = MEM32(0x75E500);
    eax = 0xC;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00250A7D; /* jne: not equal / not zero */

loc_00250A65: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00250AA9; /* ja: above (unsigned >) */

loc_00250A7D: ;
    edx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x40);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = 0xB59;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00024EF0(); /* call 0x00024EF0 */

loc_00250AA9: ;
    PUSH32(esp, 0x200500);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18C);
    eax = esp + 0x50;
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = esi;
    ebx = 0; /* xor self */
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_00250ACB: ;
    eax = MEM32(esp + 0x1908);
    if (CMP_NE(MEM8(eax + 0xA0), 7)) goto loc_00250AE9; /* jne: not equal / not zero */

loc_00250ADB: ;
    eax = MEM32(eax + 0x570);
    if (CMP_NE(MEM32(eax + 8), 2)) goto loc_00250AE9; /* jne: not equal / not zero */

loc_00250AE7: ;
    esi = eax;

loc_00250AE9: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x14) = esi;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250B16; /* je: equal / zero */

loc_00250B06: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00250B16: ;
    eax = MEM32(esp + 0x2C);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00250BE0; /* jle: less or equal (signed <=) */

loc_00250B24: ;
    esi = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x28);
    edi = esp + 0x44;
    MEM32(esp + 0x34) = edi;
    esi = esi + 4;

loc_00250B37: ;
    ecx = ebp;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(MEM32(esp + 0x1C), edx)) goto loc_00250BCC; /* jne: not equal / not zero */

loc_00250B4A: ;
    if (TEST_S(eax, eax)) goto loc_00250BC5; /* jl: less (signed <) */

loc_00250B4E: ;
    if (CMP_GE(eax, 0xB4)) goto loc_00250BC5; /* jge: greater or equal (signed >=) */

loc_00250B55: ;
    eax = MEM32(esp + 0x24);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x849C48);
    if (CMP_NE(ecx, ebp)) goto loc_00250B85; /* jne: not equal / not zero */

loc_00250B64: ;
    edx = MEM32(esp + 0x190C);
    eax = MEM32(esi);
    edi = ZX16(MEM16(edx + 0x60));
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_003305A0(); /* call 0x003305A0 */

loc_00250B7A: ;
    MEM32(edi * 4 + 0x849AD0) = eax;
    edi = MEM32(esp + 0x34);

loc_00250B85: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00250BA1; /* je: equal / zero */

loc_00250B8D: ;
    ecx = MEM32(esi);
    SET_LO8(edx, MEM8(ecx + eax + 0xA00));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00250BA1; /* jne: not equal / not zero */

loc_00250B9A: ;
    MEM8(edi + 0x103) = 1;

loc_00250BA1: ;
    edx = MEM32(esi);
    eax = MEM32(edx * 8 + 0x74A5EC);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00250BB3: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0xC;
    ebx++;
    edi = edi + 0x18C;
    MEM32(esp + 0x34) = edi;

loc_00250BC5: ;
    eax = eax + 0x1E;
    MEM32(esp + 0x28) = eax;

loc_00250BCC: ;
    ecx = MEM32(esp + 0x2C);
    ebp++;
    esi = esi + 8;
    if (CMP_L(ebp, ecx)) goto loc_00250B37; /* jl: less (signed <) */

loc_00250BDC: ;
    esi = MEM32(esp + 0x14);

loc_00250BE0: ;
    SET_LO8(eax, MEM8(esp + 0x1910));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250C0B; /* je: equal / zero */

loc_00250BEB: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00250C0B; /* jle: less or equal (signed <=) */

loc_00250BEF: ;
    eax = esp + 0x147;
    ecx = ebx;
    goto loc_00250C00;

    /* nop */

loc_00250C00: ;
    MEM8(eax) = 1;
    eax = eax + 0x18C;
    ecx--;
    if ((ecx != 0)) goto loc_00250C00; /* jne: not equal / not zero */

loc_00250C0B: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_00250C1D: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00250C89; /* je: equal / zero */

loc_00250C28: ;
    SET_LO8(eax, MEM8(esp + 0x1910));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00250C7F; /* jne: not equal / not zero */

loc_00250C33: ;
    if (TEST_Z(esi, esi)) goto loc_00250C7F; /* je: equal / zero */

loc_00250C37: ;
    edi = MEM32(esp + 0x24);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x849C48);
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(ebx + eax * 8 + 4);
    SET_LO8(eax, MEM8(ecx + esi + 0xA00));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250C7F; /* je: equal / zero */

loc_00250C55: ;
    eax = 3;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00250C5F: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x849C48);
    esi = MEM32(ebx + edx * 8);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001F6FC0(); /* call 0x001F6FC0 */

loc_00250C72: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18F4;
    esp += 4; return; /* ret */

loc_00250C7F: ;
    eax = 4;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00250C89: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250C96; /* je: equal / zero */

loc_00250C91: ;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00250C96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18F4;
    esp += 4; return; /* ret */

loc_00250CA3: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00250CB7; /* jne: not equal / not zero */

loc_00250CAF: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00250CB7: ;
    ecx = MEM32(0x75E500);
    eax = 9;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00250CE4; /* jne: not equal / not zero */

loc_00250CCC: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00250D23; /* ja: above (unsigned >) */

loc_00250CE4: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB56;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00250D23: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00250D6A; /* je: equal / zero */

loc_00250D2B: ;
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_00250D6A; /* je: equal / zero */

loc_00250D35: ;
    goto loc_00250D45;

loc_00250D37: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00250D6A; /* je: equal / zero */

loc_00250D3F: ;
    if (TEST_Z(eax, eax)) goto loc_00250D6A; /* je: equal / zero */

loc_00250D43: ;
    ebx = eax;

loc_00250D45: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00250D56: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00250D6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18F4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00250D80
 * Original: 0x00250D80 - 0x002512FD (1405 bytes, 398 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D80(void)
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

loc_00250D80: ;
    eax = 0x1998;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00250D8A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x19A4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x20;
    eax = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_00250DA6: ;
    ecx = MEM32(ebp + 0x568);
    esi = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(ecx + 0x444);
    ecx = MEM32(edx + 8);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    PUSH32(esp, 3);
    eax = esp + 0x34;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_00250DD5: ;
    eax = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(ebp + 0x568);
    edx = MEM32(edx + 0x444);
    edx = MEM32(edx + 0x280);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax * 4 + 0x77623C));
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    (void)0; /* cmp MEM8(edx + 3), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(MEM8(edx + 3), LO8(eax))) goto loc_00250E05; /* je: equal / zero */

loc_00250E03: ;
    SET_LO8(eax, 1);

loc_00250E05: ;
    if (TEST_NZ(LO8(ecx), 0x20)) goto loc_00251271; /* jne: not equal / not zero */

loc_00250E0E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00251271; /* jne: not equal / not zero */

loc_00250E16: ;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_002161C0(); /* call 0x002161C0 */

loc_00250E20: ;
    SET_LO8(eax, MEM8(0x849B80));
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(esi, ebx)) ? 1 : 0); /* setne */
    edi = esp + 0x24;
    ecx++;
    esi = ecx;
    PUSH32(esp, 0); sub_001F6F80(); /* call 0x001F6F80 */

loc_00250E38: ;
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = 0x6BDA84;

loc_00250E48: ;
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00250E8D; /* jle: less or equal (signed <=) */

loc_00250E50: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);

loc_00250E56: ;
    eax = MEM32(esp + esi * 4 + 0x30);
    if (CMP_NE(edi, MEM32(eax + 4))) goto loc_00250E84; /* jne: not equal / not zero */

loc_00250E5F: ;
    ecx = MEM32(ebp + 0x568);
    ecx = MEM32(ecx + 0x444);
    (void)0; /* cmp MEM8(ecx + 0x10), 0 - flags set for next jcc */
    edx = 1;
    if (CMP_EQ(MEM8(ecx + 0x10), 0)) goto loc_00250E7B; /* je: equal / zero */

loc_00250E76: ;
    SET_LO8(ecx, MEM8(eax + 0xE));
    goto loc_00250E7E;

loc_00250E7B: ;
    SET_LO8(ecx, MEM8(eax + 0xD));

loc_00250E7E: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00250E84; /* jne: not equal / not zero */

loc_00250E82: ;
    edx = 0; /* xor self */

loc_00250E84: ;
    esi++;
    if (CMP_L(esi, ebx)) goto loc_00250E56; /* jl: less (signed <) */

loc_00250E89: ;
    if (TEST_NZ(edx, edx)) goto loc_00250EA2; /* jne: not equal / not zero */

loc_00250E8D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax | edx;
    MEM32(esp + 0x1C) = eax;

loc_00250EA2: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    eax = eax + 8;
    esi++;
    (void)0; /* cmp eax, 0x6BDAB4 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 0x6BDAB4)) goto loc_00250E48; /* jl: less (signed <) */

loc_00250EBD: ;
    if (CMP_NE(MEM32(esp + 0x1C), 0x3F)) goto loc_00250F13; /* jne: not equal / not zero */

loc_00250EC4: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002512ED; /* je: equal / zero */

loc_00250ED0: ;
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_002512ED; /* je: equal / zero */

loc_00250EDE: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00250EEF: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00250F03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x1998;
    esp += 4; return; /* ret */

loc_00250F13: ;
    esi = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esi + 0x849C48));
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) goto loc_00250F28; /* jge: greater or equal (signed >=) */

loc_00250F21: ;
    MEM8(esi + 0x849C48) = 0;

loc_00250F28: ;
    if (CMP_LE(MEM8(esi + 0x849C48), 6)) goto loc_00250F38; /* jle: less or equal (signed <=) */

loc_00250F31: ;
    MEM8(esi + 0x849C48) = 5;

loc_00250F38: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(LO8(edx), 2)) goto loc_00250F9B; /* jne: not equal / not zero */

loc_00250F45: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x849C48);
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_NZ(eax, edi)) goto loc_00250F9B; /* jne: not equal / not zero */

loc_00250F57: ;
    if (TEST_Z(LO8(edx), 1)) goto loc_0025103B; /* je: equal / zero */

loc_00250F60: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00250F65; /* jns: not sign (positive) */

loc_00250F63: ;
    ecx = 0; /* xor self */

loc_00250F65: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_00250F82; /* je: equal / zero */

loc_00250F70: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00250F65; /* jns: not sign (positive) */

loc_00250F73: ;
    eax = 0xC;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00250F7D: ;
    goto loc_0025103B;

loc_00250F82: ;
    if (TEST_S(ecx, ecx)) goto loc_00250F8C; /* jl: less (signed <) */

loc_00250F86: ;
    MEM8(esi + 0x849C48) = LO8(ecx);

loc_00250F8C: ;
    eax = 0xC;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00250F96: ;
    goto loc_0025103B;

loc_00250F9B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x849C48);
    ecx++;
    if (CMP_L(ecx, 6)) goto loc_00250FB0; /* jl: less (signed <) */

loc_00250FA8: ;
    ecx = 5;
    /* nop */

loc_00250FB0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_00250FC3; /* je: equal / zero */

loc_00250FBB: ;
    ecx++;
    if (CMP_L(ecx, 6)) goto loc_00250FB0; /* jl: less (signed <) */

loc_00250FC1: ;
    goto loc_00250FCE;

loc_00250FC3: ;
    if (CMP_GE(ecx, 6)) goto loc_00250FCE; /* jge: greater or equal (signed >=) */

loc_00250FC8: ;
    MEM8(esi + 0x849C48) = LO8(ecx);

loc_00250FCE: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00250FE2; /* jne: not equal / not zero */

loc_00250FDA: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00250FE2: ;
    ecx = MEM32(0x75E500);
    eax = 0xC;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0025100F; /* jne: not equal / not zero */

loc_00250FF7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0025103B; /* ja: above (unsigned >) */

loc_0025100F: ;
    edx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x40);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = 0xB59;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00024EF0(); /* call 0x00024EF0 */

loc_0025103B: ;
    SET_LO8(eax, MEM8(esi + 0x849C48));
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) goto loc_00251049; /* jge: greater or equal (signed >=) */

loc_00251045: ;
    eax = 0; /* xor self */
    goto loc_00251056;

loc_00251049: ;
    eax = SX8(LO8(eax));
    if (CMP_LE(eax, 5)) goto loc_00251056; /* jle: less or equal (signed <=) */

loc_00251051: ;
    eax = 5;

loc_00251056: ;
    ecx = MEM32(esp + 0x20);
    MEM8(ecx + 0x849C48) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FC04C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025106C: ;
    esi = eax;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_00251073: ;
    PUSH32(esp, 0x200500);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18C);
    edx = esp + 0xF4;
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_00251092: ;
    MEM32(esp + 0x14) = ebx;
    edi = esp + 0x1E8;
    ebp = 0x6BDA84;
    ecx = ebx;

loc_002510A4: ;
    edx = MEM32(esp + 0x1C);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_NZ(eax, edx)) goto loc_002511A7; /* jne: not equal / not zero */

loc_002510B7: ;
    edx = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x849C48);
    if (CMP_NE(eax, ecx)) goto loc_002510F7; /* jne: not equal / not zero */

loc_002510C6: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    eax = MEM32(ebp);
    eax = edx + eax * 2;
    eax = MEM32(eax * 4 + 0x74AC20);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002510E9: ;
    ecx = MEM32(esp + 0x30);
    esp = esp + 4;
    MEM32(ecx * 4 + 0x849AD0) = eax;

loc_002510F7: ;
    eax = MEM32(esp + 0x28);
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0025113B; /* jle: less or equal (signed <=) */

loc_00251103: ;
    edx = MEM32(ebp);

loc_00251106: ;
    eax = MEM32(esp + ecx * 4 + 0x30);
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_00251132; /* jne: not equal / not zero */

loc_0025110F: ;
    esi = MEM32(esp + 0x19AC);
    esi = MEM32(esi + 0x568);
    esi = MEM32(esi + 0x444);
    if (CMP_EQ(MEM8(esi + 0x10), 0)) goto loc_0025112E; /* je: equal / zero */

loc_00251128: ;
    esi = ZX8(MEM8(eax + 0xE));
    goto loc_00251132;

loc_0025112E: ;
    esi = ZX8(MEM8(eax + 0xD));

loc_00251132: ;
    eax = MEM32(esp + 0x28);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_00251106; /* jl: less (signed <) */

loc_0025113B: ;
    edx = MEM32(ebp);
    eax = MEM32(edx * 8 + 0x74ABB4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = edi + -256;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00251154: ;
    eax = MEM32(ebp);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    ecx = 0x5FC020;
    if (CMP_EQ(eax, 0xA)) goto loc_00251169; /* je: equal / zero */

loc_00251164: ;
    ecx = 0x5FBFF0;

loc_00251169: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00251170: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FBFE4);
    edx = esp + 0x74;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00251183: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = edi + -128;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00251196: ;
    ecx = MEM32(esp + 0x34);
    esp = esp + 0x20;
    MEM8(edi) = 1;
    ebx++;
    edi = edi + 0x18C;

loc_002511A7: ;
    ecx++;
    ebp = ebp + 8;
    (void)0; /* cmp ebp, 0x6BDAB4 - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ebp, 0x6BDAB4)) goto loc_002510A4; /* jl: less (signed <) */

loc_002511BB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_002511D0: ;
    ecx = MEM32(esp + 0x19B8);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x5E0);
    ecx = MEM32(0x7F9F60);
    esp = esp + 0xC;
    if (CMP_EQ(eax, ecx)) goto loc_0025122D; /* je: equal / zero */

loc_002511F0: ;
    if (TEST_Z(MEM8(esp + 0x18), 0x10)) goto loc_0025122D; /* je: equal / zero */

loc_002511F7: ;
    eax = 3;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00251201: ;
    ecx = MEM32(esp + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x849C48);
    SET_LO8(eax, MEM8(esp + 0x24));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(edx * 8 + 0x6BDA80);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00251220; /* je: equal / zero */

loc_0025121B: ;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00251220: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1998;
    esp += 4; return; /* ret */

loc_0025122D: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00251264; /* je: equal / zero */

loc_00251235: ;
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_00251264; /* je: equal / zero */

loc_0025123F: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00251250: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00251264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1998;
    esp += 4; return; /* ret */

loc_00251271: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00251285; /* jne: not equal / not zero */

loc_0025127D: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00251285: ;
    ecx = MEM32(0x75E500);
    eax = 9;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_002512B2; /* jne: not equal / not zero */

loc_0025129A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002512ED; /* ja: above (unsigned >) */

loc_002512B2: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB56;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002512ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x1998;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00251300
 * Original: 0x00251300 - 0x00251324 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00251300: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00251324(); return; } /* je: equal / zero */

loc_0025130C: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_00251324(); return; } /* je: equal / zero */

loc_00251311: ;
    eax = 2;
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_0025131B: ;
    MEM8(esi + 0x849C48) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00251380
 * Original: 0x00251380 - 0x00251419 (153 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00251380: ;
    esp = esp - 0x808;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    edi = ecx;
    ebx = 0x6005A4;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0025139D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0x18;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002513B2: ;
    esp = esp + 0x10;
    edi = esp + 0x10;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002513C2: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002513E6; /* je: equal / zero */

loc_002513CB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    eax = esi + 8;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), 0)) goto loc_002513E6; /* jne: not equal / not zero */

loc_002513DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002513E3: ;
    esp = esp + 4;

loc_002513E6: ;
    ecx = MEM32(esp);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00251410; /* je: equal / zero */

loc_002513F7: ;
    edx = MEM32(eax);
    edx++;
    ecx = edx;
    ecx--;
    MEM32(eax) = edx;
    MEM32(eax) = ecx;
    if ((ecx != 0)) goto loc_00251410; /* jne: not equal / not zero */

loc_00251403: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025140D: ;
    esp = esp + 4;

loc_00251410: ;
    eax = esi;
    esp = esp + 0x808;
    esp += 4; return; /* ret */

}

/**
 * sub_00251420
 * Original: 0x00251420 - 0x002518E1 (1217 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251420(void)
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

loc_00251420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0xF8) = ebx;
    PUSH32(esp, 0); sub_00202250(); /* call 0x00202250 */

loc_00251442: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    xmm0 = MEMF(0x6493A8); /* movss */
    esp = esp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0025145C; /* jne: not equal / not zero */

loc_00251454: ;
    xmm0 = MEMF(0x648F08); /* movss */

loc_0025145C: ;
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64971C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0xC); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003585F0(); /* call 0x003585F0 */

loc_002514A4: ;
    eax = MEM32(0x5499E8);
    edx = MEM32(0x5499F0);
    edi = eax + 0xDE0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0xC60;
    ecx = 0x10;
    esi = 0x5A0350;
    edx = edx | 0x200;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x776184);
    edx = edx | 0xFF0200;
    esp = esp + 0x20;
    (void)0; /* cmp eax, 0x8072F4 - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    if (CMP_EQ(eax, 0x8072F4)) goto loc_00251502; /* je: equal / zero */

loc_002514F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_002514FF: ;
    esp = esp + 8;

loc_00251502: ;
    esi = MEM32(0x6BAF28);
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648CF4); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(eax);
    MEM8(0x807666) = LO8(eax);
    MEM8(0x807667) = LO8(eax);
    MEMF(0x80768C) = xmm4; /* movss */
    MEMF(0x807690) = xmm4; /* movss */
    MEM8(0x807694) = LO8(ebx);
    MEM8(0x807695) = LO8(ebx);
    MEM8(0x807696) = LO8(ebx);
    MEM8(0x807697) = LO8(eax);
    MEM32(0x807668) = ebx;
    MEM32(0x8076B0) = ebx;
    MEM8(0x8086C4) = 1;
    MEM8(0x8086C8) = 1;
    MEM8(0x8086C6) = 1;
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(0x807638) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEMF(0x807688) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002516C0: ;
    eax = MEM32(0x776184);
    (void)0; /* cmp eax, 0x8072F4 - flags set for next jcc */
    MEM32(0x549AE4) = ebx;
    if (CMP_EQ(eax, 0x8072F4)) goto loc_002516E0; /* je: equal / zero */

loc_002516D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_002516DD: ;
    esp = esp + 8;

loc_002516E0: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM32(0x776180) = ebx;
    MEMF(0x84B508) = xmm0; /* movss */
    MEM8(0x8086C6) = 1;
    MEMF(0x80768C) = xmm4; /* movss */
    MEMF(0x807690) = xmm4; /* movss */
    MEM32(0x807668) = ebx;
    MEM8(0x8086C4) = 1;
    MEM8(0x8086C8) = 1;
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    xmm1 = MEMF(esp + 0x10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    MEM8(0x807694) = LO8(ebx);
    MEM8(0x807695) = LO8(ebx);
    MEM8(0x807696) = LO8(ebx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00251848: ;
    xmm0 = MEMF(ebp + 0x1C); /* movss */
    esi = MEM32(ebp + 8);
    MEM8(0x807697) = LO8(eax);
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEM8(esp + 0xF) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00251871: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0025187D: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00251889: ;
    xmm1 = MEMF(ebp + 0x10); /* movss */
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ecx, MEM8(esp + 0xF));
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEM8(0x807664) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(0x807666) = LO8(eax);
    (void)0; /* cmp MEM8(ebp + 0x28), LO8(ebx) - flags set for next jcc */
    MEMF(0x807654) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x14); /* movss */
    MEM8(0x807665) = LO8(edx);
    MEM8(0x807667) = LO8(ecx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebp + 0x28), LO8(ebx))) { sub_002518E1(); return; } /* jne: not equal / not zero */

loc_002518D7: ;
    xmm1 = xmm1 * MEMF(0x648F8C); /* mulss */
    g_seh_ebp = ebp; sub_002518E9(); return; /* tail jmp 0x002518E9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00251A10
 * Original: 0x00251A10 - 0x00251AD5 (197 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A10(void)
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

loc_00251A10: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    edi = ebp + 0x10;
    ecx = ebp + 0x28;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00251A40: ;
    MEMF(ebp + 0x20) = (float)fp_top(); fp_pop(); /* fst */
    esi = MEM32(esp + 0x130);
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x7F);
    PUSH32(esp, esi);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    MEM32(ebp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00251A60: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC0) = LO8(ebx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00251A73: ;
    ecx = MEM32(esp + 0x28);
    esi = 0; /* xor self */
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* cmp LO8(ecx), 0x4D - flags set for next jcc */
    eax = esp + 0x28;
    if (CMP_NE(LO8(ecx), 0x4D)) goto loc_00251A8D; /* jne: not equal / not zero */

loc_00251A84: ;
    if (CMP_NE(HI8(ecx), 0x50)) goto loc_00251A92; /* jne: not equal / not zero */

loc_00251A89: ;
    SET_LO8(edx, 1);
    goto loc_00251A92;

loc_00251A8D: ;
    if (CMP_EQ(LO8(ecx), 0x5C)) goto loc_00251AA1; /* je: equal / zero */

loc_00251A92: ;
    if (CMP_EQ(MEM8(eax), 0x2F)) goto loc_00251AA1; /* je: equal / zero */

loc_00251A97: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    esi++;
    if (CMP_NE(LO8(ecx), 0x5C)) goto loc_00251A92; /* jne: not equal / not zero */

loc_00251AA1: ;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    MEM8(eax) = LO8(ebx);
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00251AC5; /* jne: not equal / not zero */

loc_00251AA7: ;
    if (CMP_BE(esi, ebx)) goto loc_00251AB9; /* jbe: below or equal (unsigned <=) */

loc_00251AAB: ;
    goto loc_00251AB0;

    /* nop */

loc_00251AB0: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + 2) = LO8(edx);
    eax--;
    esi--;
    if ((esi != 0)) goto loc_00251AB0; /* jne: not equal / not zero */

loc_00251AB9: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax) = 0x4D;
    MEM8(eax + 1) = 0x50;

loc_00251AC5: ;
    if (CMP_NE(MEM8(esp + 0x28), LO8(ebx))) { sub_00251AD5(); return; } /* jne: not equal / not zero */

loc_00251ACB: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    g_seh_ebp = ebp; sub_00251AEB(); return; /* tail jmp 0x00251AEB */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00251C70
 * Original: 0x00251C70 - 0x00251C9F (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251C70: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = edi + 0x40;
    PUSH32(esp, ebx);

loc_00251C77: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_00251C9F(); return; } /* jne: not equal / not zero */

loc_00251C81: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00251C9B; /* je: equal / zero */

loc_00251C85: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_00251C9F(); return; } /* jne: not equal / not zero */

loc_00251C91: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00251C77; /* jne: not equal / not zero */

loc_00251C9B: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00251CA4(); return; /* tail jmp 0x00251CA4 */

}

/**
 * sub_00251CE0
 * Original: 0x00251CE0 - 0x00251E64 (388 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251CE0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(edi + 0xC0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00251E5C; /* je: equal / zero */

loc_00251CF9: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00251E5C; /* je: equal / zero */

loc_00251D04: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (TEST_Z(eax, eax)) goto loc_00251E5C; /* je: equal / zero */

loc_00251D14: ;
    if (CMP_GE(MEM32(edi + 0x2C), eax)) goto loc_00251E5C; /* jge: greater or equal (signed >=) */

loc_00251D1D: ;
    PUSH32(esp, esi);
    esi = edi + 0x20;
    PUSH32(esp, 0); sub_0022D580(); /* call 0x0022D580 */

loc_00251D26: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00251D42; /* je: equal / zero */

loc_00251D2A: ;
    ecx = MEM32(edi + 0x2C);
    ecx++;
    MEM32(edi + 0x2C) = ecx;
    eax = ecx;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx + eax * 4);
    eax = ecx + eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002277B0(); /* call 0x002277B0 */

loc_00251D42: ;
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00251D4D; /* jne: not equal / not zero */

loc_00251D49: ;
    eax = 0; /* xor self */
    goto loc_00251D55;

loc_00251D4D: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);

loc_00251D55: ;
    if (CMP_GE(MEM32(edi + 0x2C), eax)) goto loc_00251E5B; /* jge: greater or equal (signed >=) */

loc_00251D5E: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    xmm0 = xmm0 * MEMF(0x649714); /* mulss */
    xmm2 = MEMF(0x75E85C); /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 4); /* subss */
    xmm1 = xmm1 * MEMF(0x649710); /* mulss */
    ebx = MEM32(esp + 0x28);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ebp); /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(0x75E860); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 4); /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(0x75E858); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00251DDE; /* je: equal / zero */

loc_00251DD4: ;
    xmm1 = xmm1 * MEMF(0x648CF0); /* mulss */
    goto loc_00251DE6;

loc_00251DDE: ;
    xmm1 = xmm1 * MEMF(0x6493AC); /* mulss */

loc_00251DE6: ;
    PUSH32(esp, 0x3E99999A);
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00253CD0(); /* call 0x00253CD0 */

loc_00251DF6: ;
    PUSH32(esp, 0x3E99999A);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00253D40(); /* call 0x00253D40 */

loc_00251E06: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    PUSH32(esp, 0x3E99999A);
    if ((xmm0 <= xmm1)) goto loc_00251E1D; /* jbe: below or equal (unsigned <=) */

loc_00251E16: ;
    PUSH32(esp, 0); sub_00253CD0(); /* call 0x00253CD0 */

loc_00251E1B: ;
    goto loc_00251E22;

loc_00251E1D: ;
    PUSH32(esp, 0); sub_00253D40(); /* call 0x00253D40 */

loc_00251E22: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi + 0x2C);
    edx = MEM32(ecx + eax * 8);
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = ecx + eax * 8;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00251420(); /* call 0x00251420 */

loc_00251E5B: ;
    POP32(esp, esi);

loc_00251E5C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00251E70
 * Original: 0x00251E70 - 0x00251EC5 (85 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251E70(void)
{
    float xmm0;

loc_00251E70: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x649368); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64938C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64A43C); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00251CE0(); /* call 0x00251CE0 */

loc_00251EBF: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251ED0
 * Original: 0x00251ED0 - 0x00251F38 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251ED0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00251EDF: ;
    esi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    MEM32(esp + 0x14) = 0x600574;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_00251EFF: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_00251F14: ;
    if (TEST_Z(eax, eax)) { sub_00251F38(); return; } /* je: equal / zero */

loc_00251F18: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00060B80(); /* call 0x00060B80 */

loc_00251F1F: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) { sub_00251F38(); return; } /* je: equal / zero */

loc_00251F28: ;
    eax = edi;
    PUSH32(esp, 0); sub_000614E0(); /* call 0x000614E0 */

loc_00251F2F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00251F70
 * Original: 0x00251F70 - 0x00252021 (177 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00251F70: ;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    eax = esp + 0x3C;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x34) = 5;
    MEM32(esp + 0x38) = 2;
    MEM32(esp + 0x3C) = 3;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00251FBA: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(eax, 4)) goto loc_00251FE9; /* je: equal / zero */

loc_00251FC3: ;
    if (CMP_EQ(eax, 5)) goto loc_00251FE9; /* je: equal / zero */

loc_00251FC8: ;
    esi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0025201B; /* jbe: below or equal (unsigned <=) */

loc_00251FCE: ;
    edi = edi;

loc_00251FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004E2682(); /* call 0x004E2682 */

loc_00251FDA: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    if (CMP_B(esi, eax)) goto loc_00251FD0; /* jb: below (unsigned <) */

loc_00251FE3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_00251FE9: ;
    esi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0025201B; /* jbe: below or equal (unsigned <=) */

loc_00251FEF: ;
    /* nop */

loc_00251FF0: ;
    edx = MEM32(esp + esi * 4 + 0x20);
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0); sub_004E2682(); /* call 0x004E2682 */

loc_00252012: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    if (CMP_B(esi, eax)) goto loc_00251FF0; /* jb: below (unsigned <) */

loc_0025201B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00252030
 * Original: 0x00252030 - 0x002520CE (158 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00252030: ;
    eax = MEM32(0x862C18);
    ecx = MEM32(eax);
    esp = esp - 0xC8;
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002542D0(); /* call 0x002542D0 */

loc_0025204C: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_002520C7; /* jne: not equal / not zero */

loc_00252053: ;
    eax = MEM32(esp + 0xCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00251A10(); /* call 0x00251A10 */

loc_00252067: ;
    esi = MEM32(0x862C18);
    eax = MEM32(esi + 4);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00253FF0(); /* call 0x00253FF0 */

loc_0025207C: ;
    ecx = 1;
    edx = 0x862C14;
    edi = eax;
    PUSH32(esp, 0); sub_00254090(); /* call 0x00254090 */

loc_0025208D: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    eax = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_002520B0; /* je: equal / zero */

loc_0025209F: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002520AD: ;
    esp = esp + 4;

loc_002520B0: ;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = esi;
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_00253DF0(); /* call 0x00253DF0 */

loc_002520C5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002520C7: ;
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

}

/**
 * sub_002520D0
 * Original: 0x002520D0 - 0x00252441 (881 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002520D0(void)
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

loc_002520D0: ;
    eax = 0x1134;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_002520DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1150);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(0x849C4C);
    esi = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, edi);
    ecx = 0x862C10;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x34) = eax;
    MEM8(esp + 0x13) = (CMP_NE(ecx, esi)) ? 1 : 0; /* setne */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00252116: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x862C10;
    MEMF(0x862C08) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025212C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    MEMF(0x862C0C) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x849C70) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002521D1; /* jne: not equal / not zero */

loc_00252145: ;
    ecx = 0x862C04;
    MEM8(0x849C70) = 0;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00252156: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x862C04;
    MEMF(0x862BFC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025216D: ;
    eax = MEM32(esp + 0x115C);
    MEMF(0x862C00) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(eax, esi)) goto loc_002521CB; /* je: equal / zero */

loc_0025217E: ;
    esi = MEM32(0x862C18);
    eax = MEM32(esi);
    ecx = esp + 0x115C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00254340(); /* call 0x00254340 */

loc_0025219A: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_002521BF; /* je: equal / zero */

loc_002521A5: ;
    edi = eax + 8;
    eax = MEM32(esp + 0x115C);
    PUSH32(esp, 0); sub_00251C70(); /* call 0x00251C70 */

loc_002521B4: ;
    eax = MEM32(esp + 0x18);
    MEM32(0x862C20) = eax;
    goto loc_002521D1;

loc_002521BF: ;
    MEM32(0x862C20) = 0;
    goto loc_002521D1;

loc_002521CB: ;
    MEM32(0x862C20) = esi;

loc_002521D1: ;
    ecx = MEM32(esp + 0x1154);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(0x779B8C) = ecx;
    MEM32(0x779B88) = ebx;
    MEM32(0x779B90) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_002521ED: ;
    eax = MEM32(0x779B90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x779B8C), _icall_esp); /* indirect call */
    }

loc_00252208: ;
    esp = esp + 0x14;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2539A0);
    PUSH32(esp, 0x253930);
    PUSH32(esp, 0x779B50);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004E221A(); /* call 0x004E221A */

loc_0025222E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00252256; /* jge: greater or equal (signed >=) */

loc_00252232: ;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, 0x600518);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00252242: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00252253: ;
    esp = esp + 0x18;

loc_00252256: ;
    eax = MEM32(esp + 0x148);
    edi = MEM32(esp + 0x14C);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ebp = eax;
    if (CMP_BE(eax, edi)) goto loc_0025228F; /* jbe: below or equal (unsigned <=) */

loc_0025226A: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x4C;
    PUSH32(esp, 0x6004C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0025227B: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0025228C: ;
    esp = esp + 0x1C;

loc_0025228F: ;
    esi = MEM32(0x84A188);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x20);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_002522A9; /* je: equal / zero */

loc_002522A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002522A6: ;
    esp = esp + 8;

loc_002522A9: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002522B3: ;
    edx = edi + edi;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002522BD: ;
    MEM32(0x849C74) = eax;
    MEM32(0x779B5C) = eax;
    eax = eax + edi;
    MEM32(0x779B58) = eax;
    eax = MEM32(0x779B90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(0x779B50) = edi;
    MEM32(0x779B80) = ebx;
    MEM32(0x779B84) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x779B88), _icall_esp); /* indirect call */
    }

loc_002522EC: ;
    edi = MEM32(esp + 0x20);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00251F70(); /* call 0x00251F70 */

loc_002522F8: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00252307: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002523F2; /* jne: not equal / not zero */

loc_00252313: ;
    MEM32(esp + 0x30) = 0x1E;
    ebp = 0; /* xor self */
    /* nop */

loc_00252320: ;
    if (CMP_NE(MEM32(ebp + 0x849C50), ebx)) goto loc_002523A2; /* jne: not equal / not zero */

loc_00252328: ;
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_00252347: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00252355: ;
    esi = eax;
    if (CMP_NE(esi, ebx)) goto loc_0025235F; /* jne: not equal / not zero */

loc_0025235B: ;
    esi = 0; /* xor self */
    goto loc_0025239C;

loc_0025235F: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0025236A: ;
    if (CMP_NE(eax, ebx)) goto loc_0025237D; /* jne: not equal / not zero */

loc_0025236E: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00252379: ;
    esi = 0; /* xor self */
    goto loc_0025239C;

loc_0025237D: ;
    edx = MEM32(esp + 0x18);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = ebx;

loc_0025239C: ;
    MEM32(ebp + 0x849C50) = esi;

loc_002523A2: ;
    edi = MEM32(ebp + 0x849C50);
    if (CMP_EQ(edi, ebx)) goto loc_002523E6; /* je: equal / zero */

loc_002523AC: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_002523CD: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_002523E0: ;
    MEM32(ebp + 0x779BA0) = eax;

loc_002523E6: ;
    ebp = ebp + 4;
    if (CMP_B(ebp, 8)) goto loc_00252320; /* jb: below (unsigned <) */

loc_002523F2: ;
    SET_LO8(eax, MEM8(esp + 0x114C));
    SET_LO8(edx, MEM8(esp + 0x1148));
    MEM8(0x779B94) = LO8(eax);
    (void)0; /* cmp MEM32(0x849C4C), ebx - flags set for next jcc */
    MEM32(0x779B98) = ebx;
    MEM32(0x779B9C) = ebx;
    MEM32(0x849C60) = 1;
    MEM8(0x849C64) = LO8(edx);
    MEM32(0x849C68) = ebx;
    if (CMP_EQ(MEM32(0x849C4C), ebx)) { sub_00252441(); return; } /* je: equal / zero */

loc_0025242F: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x849C58) = ecx;
    MEM32(0x849C5C) = ebx;
    g_seh_ebp = ebp; sub_0025244B(); return; /* tail jmp 0x0025244B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002524D0
 * Original: 0x002524D0 - 0x0025275A (650 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002524D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x13C;
    edx = MEM32(0x849C4C);
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esp + 0x2C) = ecx;
    MEM8(esp + 0x40) = LO8(ecx);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x24) = eax;
    ecx = 0x40;
    edi = esp + 0x41;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(ebx, (CMP_NE(edx, eax)) ? 1 : 0); /* setne */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    esi = (uint32_t)(-(int32_t)esi);
    PUSH32(esp, edx);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    PUSH32(esp, 0x104);
    edi = esp + 0x48;
    MEM8(esp + 0x17) = LO8(ebx);
    esi = esi & 2;
    PUSH32(esp, 0); sub_00251ED0(); /* call 0x00251ED0 */

loc_00252534: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002525D2; /* jne: not equal / not zero */

loc_0025253F: ;
    ecx = 0x862C10;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00252549: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x862C10;
    MEMF(0x862C08) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025255F: ;
    ecx = 0x862C04;
    MEMF(0x862C0C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(0x849C70) = LO8(ebx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00252575: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x862C04;
    MEMF(0x862BFC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00252588: ;
    edi = MEM32(0x862C18);
    MEMF(0x862C00) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(edi);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00254340(); /* call 0x00254340 */

loc_002525A6: ;
    ebx = MEM32(esp + 0x24);
    esp = esp + 0x10;
    if (CMP_EQ(ebx, edi)) goto loc_002525C4; /* je: equal / zero */

loc_002525B1: ;
    eax = MEM32(ebp + 8);
    edi = ebx + 8;
    PUSH32(esp, 0); sub_00251C70(); /* call 0x00251C70 */

loc_002525BC: ;
    MEM32(0x862C20) = ebx;
    goto loc_002525CE;

loc_002525C4: ;
    MEM32(0x862C20) = 0;

loc_002525CE: ;
    SET_LO8(ebx, MEM8(esp + 0xF));

loc_002525D2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    esi = esi | 5;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E1FED(); /* call 0x004E1FED */

loc_002525E5: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002525FD; /* jge: greater or equal (signed >=) */

loc_002525E9: ;
    PUSH32(esp, 0x600478);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_002525FA: ;
    esp = esp + 0xC;

loc_002525FD: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0025260A; /* jne: not equal / not zero */

loc_00252601: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00251F70(); /* call 0x00251F70 */

loc_0025260A: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00252619: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0025273B; /* jne: not equal / not zero */

loc_00252621: ;
    MEM32(esp + 0x2C) = 0x1E;
    ebx = 0; /* xor self */
    goto loc_00252630;

    /* nop */

loc_00252630: ;
    eax = MEM32(ebx + 0x849C50);
    if (TEST_NZ(eax, eax)) goto loc_002526B8; /* jne: not equal / not zero */

loc_0025263A: ;
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_0025265D: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0025266B: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002526B2; /* je: equal / zero */

loc_00252671: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0025267C: ;
    if (TEST_NZ(eax, eax)) goto loc_0025268F; /* jne: not equal / not zero */

loc_00252680: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0025268B: ;
    esi = 0; /* xor self */
    goto loc_002526B2;

loc_0025268F: ;
    ecx = MEM32(esp + 0x34);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 8) = 0;

loc_002526B2: ;
    MEM32(ebx + 0x849C50) = esi;

loc_002526B8: ;
    edi = MEM32(ebx + 0x849C50);
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) goto loc_002526FE; /* je: equal / zero */

loc_002526C4: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_002526E5: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_002526F8: ;
    MEM32(ebx + 0x779BA0) = eax;

loc_002526FE: ;
    ebx = ebx + 4;
    if (CMP_B(ebx, 8)) goto loc_00252630; /* jb: below (unsigned <) */

loc_0025270A: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO8(ecx, MEM8(ebp + 0x10));
    SET_LO8(ebx, MEM8(esp + 0xF));
    MEM32(0x779B98) = esi;
    MEM32(0x779B9C) = esi;
    MEM32(0x849C60) = 1;
    MEM8(0x849C64) = LO8(eax);
    MEM8(0x779B94) = LO8(ecx);
    MEM32(0x849C68) = esi;

loc_0025273B: ;
    eax = MEM32(0x849C4C);
    if (TEST_Z(eax, eax)) { sub_0025275A(); return; } /* je: equal / zero */

loc_00252744: ;
    edx = MEM32(esp + 0x10);
    MEM32(0x849C58) = edx;
    MEM32(0x849C5C) = 0;
    g_seh_ebp = ebp; sub_00252763(); return; /* tail jmp 0x00252763 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002527F0
 * Original: 0x002527F0 - 0x00252A7E (654 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002527F0(void)
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

loc_002527F0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    /* TODO: rdtsc  */
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0025280F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0025281C: ;
    xmm0 = MEMF(0x849C6C); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    ecx = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00252854; /* jnp: not parity */

loc_00252833: ;
    eax = MEM32(0x75E850);
    ebp = eax;
    ebp = ebp & MEM32(0x75E854);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00252852; /* je: equal / zero */

loc_00252845: ;
    esi = ecx;
    esi = esi - eax;
    eax = MEM32(0x75E854);
    edi = edx;
    edi = edi - eax - _cf; /* sbb */

loc_00252852: ;
    ebp = 0; /* xor self */

loc_00252854: ;
    (void)0; /* cmp MEM32(0x849C60), ebp - flags set for next jcc */
    MEM32(0x75E850) = ecx;
    MEM32(0x75E854) = edx;
    if (CMP_EQ(MEM32(0x849C60), ebp)) goto loc_00252A74; /* je: equal / zero */

loc_0025286C: ;
    eax = MEM32(0x849C4C);
    if (CMP_NE(eax, ebp)) goto loc_00252885; /* jne: not equal / not zero */

loc_00252875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849C60) = ebp;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00252885: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00252890: ;
    xmm0 = MEMF(0x849C6C); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = edi;
    if (1 /* jp after test - parity */) goto loc_002528D6; /* jp: parity */

loc_002528A7: ;
    edi = edi & 0x7FFFFFFF;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    eax = eax & 0x80000000u;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebp;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00252909;

loc_002528D6: ;
    edi = edi & 0x7FFFFFFF;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    eax = eax & 0x80000000u;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebp;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00252909: ;
    xmm1 = MEMF(0x64A720); /* movss */
    MEMF(0x849C6C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x849C6C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00252A50; /* jbe: below or equal (unsigned <=) */

loc_00252928: ;
    xmm0 = xmm0 - xmm1; /* subss */
    ebx++;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00252928; /* ja: above (unsigned >) */

loc_00252932: ;
    esi = 2;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEMF(0x849C6C) = xmm0; /* movss */
    if (CMP_L(ebx, esi)) goto loc_00252947; /* jl: less (signed <) */

loc_00252943: ;
    ebx = esi;
    goto loc_00252950;

loc_00252947: ;
    if (CMP_LE(ebx, 1)) goto loc_00252986; /* jle: less or equal (signed <=) */

loc_0025294C: ;
    /* nop */

loc_00252950: ;
    eax = MEM32(0x849C4C);
    PUSH32(esp, ebp);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E2801(); /* call 0x004E2801 */

loc_00252962: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00252971; /* jge: greater or equal (signed >=) */

loc_00252966: ;
    eax = 3;
    MEM32(esp + 0x10) = eax;
    goto loc_00252975;

loc_00252971: ;
    eax = MEM32(esp + 0x10);

loc_00252975: ;
    ebx--;
    if (CMP_EQ(eax, esi)) goto loc_0025298A; /* je: equal / zero */

loc_0025297A: ;
    if (CMP_EQ(eax, 3)) goto loc_0025298A; /* je: equal / zero */

loc_0025297F: ;
    if (CMP_G(ebx, 1)) goto loc_00252950; /* jg: greater (signed >) */

loc_00252984: ;
    goto loc_0025298A;

loc_00252986: ;
    eax = MEM32(esp + 0x10);

loc_0025298A: ;
    if (CMP_LE(ebx, ebp)) goto loc_00252A50; /* jle: less or equal (signed <=) */

loc_00252992: ;
    if (CMP_EQ(eax, esi)) goto loc_002529CD; /* je: equal / zero */

loc_00252996: ;
    if (CMP_EQ(eax, 3)) goto loc_002529CD; /* je: equal / zero */

loc_0025299B: ;
    edx = MEM32(0x779B9C);
    eax = MEM32(edx * 4 + 0x779BA0);
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x849C4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004E2801(); /* call 0x004E2801 */

loc_002529BB: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002529C9; /* jge: greater or equal (signed >=) */

loc_002529BF: ;
    MEM32(esp + 0x10) = 3;
    goto loc_00252A20;

loc_002529C9: ;
    eax = MEM32(esp + 0x10);

loc_002529CD: ;
    if (CMP_NE(eax, 1)) goto loc_002529FA; /* jne: not equal / not zero */

loc_002529D2: ;
    eax = MEM32(0x779B9C);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebp)) ? 1 : 0); /* sete */
    MEM32(0x779B98) = eax;
    (void)0; /* cmp MEM32(0x849C60), 1 - flags set for next jcc */
    MEM32(0x779B9C) = edx;
    if (CMP_NE(MEM32(0x849C60), 1)) goto loc_00252A50; /* jne: not equal / not zero */

loc_002529F2: ;
    MEM32(0x849C60) = esi;
    goto loc_00252A50;

loc_002529FA: ;
    if (CMP_NE(eax, esi)) goto loc_00252A1B; /* jne: not equal / not zero */

loc_002529FE: ;
    eax = MEM32(0x849C4C);
    PUSH32(esp, eax);
    MEM32(0x849C60) = 3;
    PUSH32(esp, 0); sub_004E2531(); /* call 0x004E2531 */

loc_00252A13: ;
    MEM32(0x849C4C) = ebp;
    goto loc_00252A2F;

loc_00252A1B: ;
    if (CMP_NE(eax, 3)) goto loc_00252A50; /* jne: not equal / not zero */

loc_00252A20: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_00252A25: ;
    MEM32(0x849C60) = 5;

loc_00252A2F: ;
    edi = MEM32(0x849C58);
    if (CMP_EQ(edi, ebp)) goto loc_00252A74; /* je: equal / zero */

loc_00252A39: ;
    MEM32(0x849C58) = ebp;
    MEM32(0x849C4C) = edi;
    MEM32(0x849C60) = esi;
    PUSH32(esp, 0); sub_00251F70(); /* call 0x00251F70 */

loc_00252A50: ;
    if (CMP_EQ(MEM32(0x849C58), ebp)) goto loc_00252A74; /* je: equal / zero */

loc_00252A58: ;
    if (CMP_EQ(MEM32(0x849C5C), 1)) goto loc_00252A74; /* je: equal / zero */

loc_00252A61: ;
    ecx = MEM32(0x849C4C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x849C5C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004E2801(); /* call 0x004E2801 */

loc_00252A74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
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
 * sub_00252A80
 * Original: 0x00252A80 - 0x00252A89 (9 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A80(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00252A90(); return; /* tail jmp 0x00252A90 */

}

/**
 * sub_00252BB0
 * Original: 0x00252BB0 - 0x00252CAE (254 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252BB0(void)
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

loc_00252BB0: ;
    eax = MEM32(0x849C60);
    esp = esp - 0x18;
    if (TEST_Z(eax, eax)) goto loc_00252CAA; /* je: equal / zero */

loc_00252BC0: ;
    if (CMP_EQ(eax, 1)) goto loc_00252CAA; /* je: equal / zero */

loc_00252BC9: ;
    if (CMP_EQ(eax, 3)) goto loc_00252CAA; /* je: equal / zero */

loc_00252BD2: ;
    if (CMP_EQ(eax, 5)) goto loc_00252CAA; /* je: equal / zero */

loc_00252BDB: ;
    SET_LO8(eax, MEM8(0x779B94));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00252CAA; /* je: equal / zero */

loc_00252BE8: ;
    ecx = MEM32(0x849C4C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00252BF9: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    edx = MEM32(esp + 8);
    if (CMP_GE(edx & edx, 0)) goto loc_00252C0B; /* jge: greater or equal (signed >=) */

loc_00252C05: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00252C0B: ;
    eax = MEM32(esp + 0xC);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    xmm1 = MEMF(esp); /* movss */
    xmm2 = MEMF(0x64971C); /* movss */
    xmm2 = xmm2 / xmm1; /* divss */
    MEMF(esp) = xmm2; /* movss */
    if (CMP_GE(eax & eax, 0)) goto loc_00252C36; /* jge: greater or equal (signed >=) */

loc_00252C30: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00252C36: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x649718); /* movss */
    esp = esp - 8;
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    edx = esp + 0x10;
    xmm3 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 4) = xmm3; /* movss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00252D80(); /* call 0x00252D80 */

loc_00252C84: ;
    eax = MEM32(0x862C20);
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00252CAA; /* je: equal / zero */

loc_00252C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x862BFC;
    edi = eax + 8;
    PUSH32(esp, 0); sub_00253DA0(); /* call 0x00253DA0 */

loc_00252C9F: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00251E70(); /* call 0x00251E70 */

loc_00252CA8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00252CAA: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00252CB0
 * Original: 0x00252CB0 - 0x00252D7D (205 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252CB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00252CB0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x849C60);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_00252D77; /* je: equal / zero */

loc_00252CC6: ;
    if (CMP_EQ(eax, 3)) goto loc_00252D77; /* je: equal / zero */

loc_00252CCF: ;
    if (CMP_EQ(eax, 5)) goto loc_00252D77; /* je: equal / zero */

loc_00252CD8: ;
    if (CMP_EQ(eax, 1)) goto loc_00252D77; /* je: equal / zero */

loc_00252CE1: ;
    ecx = MEM32(0x849C4C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004E2615(); /* call 0x004E2615 */

loc_00252CF2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_00252CF9: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_002530B0(); /* call 0x002530B0 */

loc_00252D10: ;
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_00252D1A: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00252D26: ;
    edx = MEM32(0x5499F0);
    eax = MEM32(0x862C20);
    edx = edx | 0x800;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x5473E0) = 1;
    MEM32(0x5499F0) = edx;
    MEM32(0x5473F0) = 1;
    if (TEST_Z(eax, eax)) goto loc_00252D77; /* je: equal / zero */

loc_00252D55: ;
    PUSH32(esp, 1);
    esi = 0x862BFC;
    edi = eax + 8;
    PUSH32(esp, 0); sub_00253DA0(); /* call 0x00253DA0 */

loc_00252D64: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x75E844);
    eax = 0x75E83C;
    PUSH32(esp, 0); sub_00251CE0(); /* call 0x00251CE0 */

loc_00252D77: ;
    POP32(esp, edi);
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
 * sub_00252D80
 * Original: 0x00252D80 - 0x002530AC (812 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252D80(void)
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

loc_00252D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x862BFC;
    PUSH32(esp, 0); sub_00253DA0(); /* call 0x00253DA0 */

loc_00252D93: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    SET_LO8(eax, MEM8(0x849C70));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00252DB8; /* je: equal / zero */

loc_00252DA2: ;
    esi = 0x862C08;
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00253DA0(); /* call 0x00253DA0 */

loc_00252DAE: ;
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_00252DB8: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00252DC3: ;
    fp_push((double)SMEM32(ebp)); /* fild */
    edi = eax;
    eax = MEM32(ebp);
    edi = edi << 0x18;
    edi = edi | 0xFFFFFF;
    if (CMP_GE(eax & eax, 0)) goto loc_00252DDE; /* jge: greater or equal (signed >=) */

loc_00252DD8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00252DDE: ;
    ecx = MEM32(ebp + 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(ebp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00252DF2; /* jge: greater or equal (signed >=) */

loc_00252DEC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00252DF2: ;
    edx = 0x8006;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00252E05: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00252E1E: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00252E37: ;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00252E50: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x1200;
    PUSH32(esp, ebx);
    MEM32(0x549AE4) = 1;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00252E78: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00252E94; /* jb: below (unsigned <) */

loc_00252E85: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00252E94: ;
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
    if (CMP_NE(eax, 2)) goto loc_00252EF1; /* jne: not equal / not zero */

loc_00252EC2: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00252EC7: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00252ECC: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00252EE2; /* jb: below (unsigned <) */

loc_00252ED3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00252EE2: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00252EEA: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00252EEF: ;
    MEM32(esi) = eax;

loc_00252EF1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_00252EF8: ;
    edx = MEM32(0x5499F0);
    eax = 2;
    MEM32(0x547368) = eax;
    MEM32(0x547378) = eax;
    eax = 3;
    ebp = 4;
    MEM32(0x547330) = eax;
    edx = edx | 0x801;
    MEM32(0x547334) = eax;
    esi = 1;
    PUSH32(esp, ebx);
    eax = esi;
    MEM32(0x547360) = ebp;
    MEM32(0x54736C) = ebx;
    MEM32(0x547370) = ebp;
    MEM32(0x54737C) = ebx;
    MEM32(0x5499F0) = edx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00252F52: ;
    eax = MEM32(0x5499F0);
    edx = MEM32(0x779B98);
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    eax = MEM32(edx * 4 + 0x849C50);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(0x5473E0) = esi;
    MEM32(0x5473F0) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00252F82: ;
    ecx = MEM32(0x6B842C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00252F8E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00252F95: ;
    esi = 0x1D;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_00252F9F: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + ebp) = 8;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = eax + ebp;
    MEM32(eax + ebp) = 0x40601818;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm2; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm3; /* movss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm0; /* movss */
    eax = eax + ebp;
    MEM32(eax + ebp) = edi;
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm1; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm1; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm4; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm0; /* movss */
    eax = eax + ebp;
    MEM32(eax + ebp) = edi;
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm3; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm1; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    eax = eax + ebp;
    eax = eax + ebp;
    MEMF(eax) = xmm4; /* movss */
    eax = eax + ebp;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + ebp;
    MEM32(eax) = edi;
    MEMF(eax + ebp) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm3; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm2; /* movss */
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm4; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm0; /* movss */
    eax = eax + ebp;
    MEM32(eax + ebp) = edi;
    eax = eax + ebp;
    MEMF(eax + ebp) = xmm1; /* movss */
    eax = eax + ebp;
    eax = eax + ebp;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + ebp;
    MEM32(eax) = 0x417FC;
    eax = eax + ebp;
    MEM32(eax) = ebx;
    eax = eax + ebp;
    MEM32(edx) = eax;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002530A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_002530A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_002530B0
 * Original: 0x002530B0 - 0x0025312F (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530B0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002530B0: ;
    ecx = MEM32(eax);
    fp_push((double)SMEM32(eax)); /* fild */
    esp = esp - 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(ecx & ecx, 0)) goto loc_002530C2; /* jge: greater or equal (signed >=) */

loc_002530BC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002530C2: ;
    edx = MEM32(eax + 4);
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_002530D6; /* jge: greater or equal (signed >=) */

loc_002530D0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002530D6: ;
    esi = 0x862BFC;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00253DA0(); /* call 0x00253DA0 */

loc_002530E4: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x779B98);
    PUSH32(esp, edx);
    edx = MEM32(ecx * 4 + 0x849C50);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00253130(); /* call 0x00253130 */

loc_0025311E: ;
    esp = esp + 0x20;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0025312A: ;
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
 * sub_00253130
 * Original: 0x00253130 - 0x00253164 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00253130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    eax = MEM32(0x6B8314);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0025314A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00253151: ;
    SET_LO8(eax, MEM8(0x75C14C));
    edi = edi | 0xFFFFFFFFu;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_00253164(); return; } /* ja: above (unsigned >) */

loc_0025315D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002531F1(); return; /* tail jmp 0x002531F1 */

}

/**
 * sub_002539A0
 * Original: 0x002539A0 - 0x002539B8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002539A0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_002539B0; /* je: equal / zero */

loc_002539A8: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_BE(ecx, MEM32(eax))) { sub_002539B8(); return; } /* jbe: below or equal (unsigned <=) */

loc_002539B0: ;
    eax = 0x80004005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002539C0
 * Original: 0x002539C0 - 0x00253A0B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002539C0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002539CB: ;
    if (TEST_NZ(eax, eax)) goto loc_002539FE; /* jne: not equal / not zero */

loc_002539CF: ;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_002539FE; /* je: equal / zero */

loc_002539D5: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002539F5: ;
    esp = esp + 4;
    MEM32(ebx) = 0;

loc_002539FE: ;
    MEM32(ebx) = 0;
    PUSH32(esp, 0); sub_00253B60(); /* call 0x00253B60 */

loc_00253A09: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00253A10
 * Original: 0x00253A10 - 0x00253A47 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A10: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_00253C20(); /* call 0x00253C20 */

loc_00253A28: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) { sub_00253A47(); return; } /* je: equal / zero */

loc_00253A31: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x10) = ebx;
    g_seh_ebp = ebp; sub_00253A49(); return; /* tail jmp 0x00253A49 */

}

/**
 * sub_00253B60
 * Original: 0x00253B60 - 0x00253BBC (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00253B60: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebx + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00253B6D; /* je: equal / zero */

loc_00253B68: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_00253B6D: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    if (TEST_Z(edi, edi)) goto loc_00253BB9; /* je: equal / zero */

loc_00253B75: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00253B95; /* je: equal / zero */

loc_00253B7B: ;
    if (CMP_EQ(MEM32(edi + 0x10), 0x26)) goto loc_00253B86; /* je: equal / zero */

loc_00253B81: ;
    PUSH32(esp, 0); sub_001F1490(); /* call 0x001F1490 */

loc_00253B86: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_00253B8E: ;
    MEM32(edi) = 0;
    POP32(esp, esi);

loc_00253B95: ;
    edi = MEM32(ebx + 4);
    if (TEST_Z(edi, edi)) goto loc_00253BB2; /* je: equal / zero */

loc_00253B9C: ;
    PUSH32(esp, 0); sub_001F0DD0(); /* call 0x001F0DD0 */

loc_00253BA1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00253BAF: ;
    esp = esp + 4;

loc_00253BB2: ;
    MEM32(ebx + 4) = 0;

loc_00253BB9: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00253BC0
 * Original: 0x00253BC0 - 0x00253C02 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BC0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_001F1000(); /* call 0x001F1000 */

loc_00253BE0: ;
    if (CMP_G(eax, 0x26)) goto loc_00253BF0; /* jg: greater (signed >) */

loc_00253BE5: ;
    if (CMP_EQ(eax, 0x26)) goto loc_00253BFE; /* je: equal / zero */

loc_00253BE7: ;
    if (TEST_Z(eax, eax)) goto loc_00253BFE; /* je: equal / zero */

loc_00253BEB: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_00253BF0: ;
    if (CMP_L(eax, 0x3E3)) goto loc_00253BEB; /* jl: less (signed <) */

loc_00253BF7: ;
    if (CMP_G(eax, 0x3E5)) goto loc_00253BEB; /* jg: greater (signed >) */

loc_00253BFE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00253C10
 * Original: 0x00253C10 - 0x00253C1F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C10(void)
{

loc_00253C10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(ecx + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00253C20
 * Original: 0x00253C20 - 0x00253CA4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00253C20: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00253CA4(); return; } /* je: equal / zero */

loc_00253C3B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00253C4F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00253C84; /* je: equal / zero */

loc_00253C5A: ;
    ecx = 0x75E81C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00253C64: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00253C81: ;
    esp = esp + 0x14;

loc_00253C84: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00253C9D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00253CD0
 * Original: 0x00253CD0 - 0x00253D2C (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CD0(void)
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

loc_00253CD0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = MEM32(esi);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esp + 4) = eax;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00253CF0: ;
    /* FPU: fsubr dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00253D2C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00253D06: ;
    ecx = MEM32(esi);
    MEM32(esp + 4) = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00253D13: ;
    /* FPU: fsubr dword ptr [esp + 4] */
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 8); /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00253D40
 * Original: 0x00253D40 - 0x00253D8C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D40(void)
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

loc_00253D40: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    edi = esi + 8;
    ecx = edi;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00253D59: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00253D8C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00253D6E: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00253D75: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 4); /* movss */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00253DA0
 * Original: 0x00253DA0 - 0x00253DBD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253DA0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00253DA0: ;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00253DAB: ;
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00253DBD(); return; } /* jbe: below or equal (unsigned <=) */

loc_00253DB5: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00253DF0
 * Original: 0x00253DF0 - 0x00253E37 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00253DF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00253E20; /* je: equal / zero */

loc_00253DF8: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002545F0(); /* call 0x002545F0 */

loc_00253E05: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00253E20; /* je: equal / zero */

loc_00253E14: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00253E1D: ;
    esp = esp + 4;

loc_00253E20: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00253E40
 * Original: 0x00253E40 - 0x00253EBE (126 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00253E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F590);
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
    PUSH32(esp, 0xCC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00253E77: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_00253E90; /* je: equal / zero */

loc_00253E8E: ;
    MEM32(eax) = eax;

loc_00253E90: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00253EA6; /* je: equal / zero */

loc_00253EA4: ;
    MEM32(ecx) = eax;

loc_00253EA6: ;
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
 * sub_00253EE0
 * Original: 0x00253EE0 - 0x00253FE1 (257 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ebx + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(ebx + 4);
    ebp = 0; /* xor self */
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebx + 8) = ebp;
    if (CMP_EQ(esi, eax)) goto loc_00253FDA; /* je: equal / zero */

loc_00253F05: ;
    PUSH32(esp, edi);

loc_00253F06: ;
    edi = MEM32(esi + 0x1C);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    eax = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(edi, ebp)) goto loc_00253F3E; /* je: equal / zero */

loc_00253F13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00253F19: ;
    if (TEST_NZ(eax, eax)) goto loc_00253F3E; /* jne: not equal / not zero */

loc_00253F1D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00253F3B: ;
    esp = esp + 4;

loc_00253F3E: ;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebp)) goto loc_00253F96; /* je: equal / zero */

loc_00253F4E: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002545F0(); /* call 0x002545F0 */

loc_00253F5B: ;
    edi = MEM32(esi + 0xC);
    esp = esp + 4;
    if (CMP_EQ(edi, ebp)) goto loc_00253F92; /* je: equal / zero */

loc_00253F65: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00253F6B: ;
    if (TEST_NZ(eax, eax)) goto loc_00253F92; /* jne: not equal / not zero */

loc_00253F6F: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00253F8F: ;
    esp = esp + 4;

loc_00253F92: ;
    ebx = MEM32(esp + 0x18);

loc_00253F96: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00253FA5: ;
    if (TEST_NZ(eax, eax)) goto loc_00253FCC; /* jne: not equal / not zero */

loc_00253FA9: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00253FC9: ;
    esp = esp + 4;

loc_00253FCC: ;
    esi = MEM32(esp + 0x10);
    if (CMP_NE(esi, MEM32(ebx + 4))) goto loc_00253F06; /* jne: not equal / not zero */

loc_00253FD9: ;
    POP32(esp, edi);

loc_00253FDA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00253FF0
 * Original: 0x00253FF0 - 0x0025406F (127 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00253FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB30);
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
    PUSH32(esp, 0xCC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00254027: ;
    esp = esp + 0x10;
    ebx = eax;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_00254053; /* je: equal / zero */

loc_0025403D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx) = eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = ecx;
    esi = ebx + 8;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00254120(); /* call 0x00254120 */

loc_00254053: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = ebx;
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
 * sub_00254090
 * Original: 0x00254090 - 0x00254116 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00254090: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0x14E5E0A;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_0025410C; /* jae: above or equal (unsigned >=) */

loc_002540A2: ;
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

loc_002540C6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_002540CF: ;
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

loc_002540F4: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0025410B: ;
    POP32(esp, ebx);

loc_0025410C: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00254120
 * Original: 0x00254120 - 0x00254189 (105 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00254120: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00254190(); /* call 0x00254190 */

loc_00254128: ;
    eax = esi + 0x10;
    ecx = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00254230(); /* call 0x00254230 */

loc_00254134: ;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0x30);
    MEM32(esi + 0x30) = ecx;
    edx = edi + 0x34;
    ecx = MEM32(edx);
    eax = esi + 0x34;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = edi + 0x40;
    edx = esi + 0x40;
    edx = edx - eax;
    /* nop */

loc_00254170: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00254170; /* jne: not equal / not zero */

loc_0025417A: ;
    SET_LO8(eax, MEM8(edi + 0xC0));
    MEM8(esi + 0xC0) = LO8(eax);
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00254190
 * Original: 0x00254190 - 0x002541C1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB20);
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
    if (TEST_NZ(ecx, ecx)) { sub_002541C1(); return; } /* jne: not equal / not zero */

loc_002541BD: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002541C9(); return; /* tail jmp 0x002541C9 */

}

/**
 * sub_00254230
 * Original: 0x00254230 - 0x00254261 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F900);
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
    if (TEST_NZ(ecx, ecx)) { sub_00254261(); return; } /* jne: not equal / not zero */

loc_0025425D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00254269(); return; /* tail jmp 0x00254269 */

}

/**
 * sub_002542D0
 * Original: 0x002542D0 - 0x00254336 (102 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002542D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00254332; /* je: equal / zero */

loc_002542E5: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    /* nop */

loc_002542F0: ;
    esi = ebp;
    ecx = edi + 0x48;

loc_002542F5: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), MEM8(esi))) goto loc_00254319; /* jne: not equal / not zero */

loc_002542FD: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00254315; /* je: equal / zero */

loc_00254301: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), MEM8(esi + 1))) goto loc_00254319; /* jne: not equal / not zero */

loc_0025430B: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002542F5; /* jne: not equal / not zero */

loc_00254315: ;
    ecx = 0; /* xor self */
    goto loc_0025431E;

loc_00254319: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_0025431E: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00254326; /* jne: not equal / not zero */

loc_00254322: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00254326: ;
    edi = MEM32(edi);
    if (CMP_NE(edi, ebx)) goto loc_002542F0; /* jne: not equal / not zero */

loc_0025432C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00254332: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00254340
 * Original: 0x00254340 - 0x002543A4 (100 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254340: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(edi, eax)) { sub_002543A4(); return; } /* je: equal / zero */

loc_00254352: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00254360: ;
    esi = eax;
    ecx = edi + 0x48;

loc_00254365: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00254389; /* jne: not equal / not zero */

loc_0025436D: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00254385; /* je: equal / zero */

loc_00254371: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00254389; /* jne: not equal / not zero */

loc_0025437B: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00254365; /* jne: not equal / not zero */

loc_00254385: ;
    ecx = 0; /* xor self */
    goto loc_0025438E;

loc_00254389: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_0025438E: ;
    if (TEST_Z(ecx, ecx)) goto loc_0025439A; /* je: equal / zero */

loc_00254392: ;
    edi = MEM32(edi);
    if (CMP_NE(edi, MEM32(esp + 0x1C))) goto loc_00254360; /* jne: not equal / not zero */

loc_0025439A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ebp) = edi;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002543B0
 * Original: 0x002543B0 - 0x002543CC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543B0(void)
{

loc_002543B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00254BC0(); /* call 0x00254BC0 */

loc_002543C6: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002543D0
 * Original: 0x002543D0 - 0x002544B8 (232 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002543D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(ebp + 0xC);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FA29C);
    ecx = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002543FF: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ebx = esp + 0x14;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00254D10(); /* call 0x00254D10 */

loc_0025441B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002544AD; /* je: equal / zero */

loc_00254423: ;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) goto loc_0025442E; /* jne: not equal / not zero */

loc_0025442A: ;
    ecx = 0; /* xor self */
    goto loc_00254436;

loc_0025442E: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);

loc_00254436: ;
    if (TEST_Z(edx, edx)) goto loc_00254466; /* je: equal / zero */

loc_0025443A: ;
    eax = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_AE(ecx, eax)) goto loc_00254466; /* jae: above or equal (unsigned >=) */

loc_00254446: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00254DD0(); /* call 0x00254DD0 */

loc_0025445B: ;
    esp = esp + 0x10;
    ebx = ebx + 8;
    MEM32(esi + 8) = ebx;
    goto loc_00254477;

loc_00254466: ;
    eax = MEM32(esi + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00254670(); /* call 0x00254670 */

loc_00254477: ;
    edx = MEM32(ebp + 0xC);
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5FA29C);
    eax = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00254491: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_00254D10(); /* call 0x00254D10 */

loc_002544A5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00254423; /* jne: not equal / not zero */

loc_002544AD: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_002544B8(); return; } /* jne: not equal / not zero */

loc_002544B4: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002544C0(); return; /* tail jmp 0x002544C0 */

}

/**
 * sub_002544F0
 * Original: 0x002544F0 - 0x002545CD (221 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002544F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002544F0: ;
    esp = esp - 0x204;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5FA29C);
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0025451D: ;
    esp = esp + 0x14;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_00246870(); /* call 0x00246870 */

loc_00254531: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002545B0; /* je: equal / zero */

loc_00254535: ;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) goto loc_00254540; /* jne: not equal / not zero */

loc_0025453C: ;
    ecx = 0; /* xor self */
    goto loc_00254548;

loc_00254540: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_00254548: ;
    if (TEST_Z(edx, edx)) goto loc_0025456D; /* je: equal / zero */

loc_0025454C: ;
    eax = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) goto loc_0025456D; /* jae: above or equal (unsigned >=) */

loc_00254558: ;
    eax = MEM32(esi + 8);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(esi + 8) = eax;
    goto loc_00254581;

loc_0025456D: ;
    eax = MEM32(esi + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0); sub_00254950(); /* call 0x00254950 */

loc_00254581: ;
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5FA29C);
    edx = esp + 0x1C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00254598: ;
    esp = esp + 0x14;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_00246870(); /* call 0x00246870 */

loc_002545AC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00254535; /* jne: not equal / not zero */

loc_002545B0: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_002545CD(); return; } /* jne: not equal / not zero */

loc_002545B7: ;
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ebp);
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002545F0
 * Original: 0x002545F0 - 0x0025464D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002545F0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0025464B; /* je: equal / zero */

loc_002545F7: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00254644; /* je: equal / zero */

loc_002545FC: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00254644; /* jne: not equal / not zero */

loc_00254609: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0025460F: ;
    if (TEST_NZ(eax, eax)) goto loc_00254644; /* jne: not equal / not zero */

loc_00254613: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00254644; /* je: equal / zero */

loc_0025461A: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0025463A: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00254644: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebx)) goto loc_002545F7; /* jne: not equal / not zero */

loc_0025464B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254650
 * Original: 0x00254650 - 0x0025466A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254650(void)
{

loc_00254650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00254DD0(); /* call 0x00254DD0 */

loc_00254661: ;
    esp = esp + 0x10;
    eax = edi + esi * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254670
 * Original: 0x00254670 - 0x002546B3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB10);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    MEM32(ebp + -68) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -72) = eax;
    if (TEST_Z(eax, eax)) goto loc_002546A5; /* je: equal / zero */

loc_002546A3: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002546A5: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 4);
    if (TEST_NZ(esi, esi)) { sub_002546B3(); return; } /* jne: not equal / not zero */

loc_002546AF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002546BB(); return; /* tail jmp 0x002546BB */

}

/**
 * sub_00254950
 * Original: 0x00254950 - 0x0025498D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00254950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB00);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = MEMF(eax); /* movss */
    MEMF(ebp + -20) = xmm0; /* movss */
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_0025498D(); return; } /* jne: not equal / not zero */

loc_00254989: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00254995(); return; /* tail jmp 0x00254995 */

}

/**
 * sub_00254BC0
 * Original: 0x00254BC0 - 0x00254C0F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4F0);
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

loc_00254BF4: ;
    if (CMP_EQ(esi, ebx)) { sub_00254C0F(); return; } /* je: equal / zero */

loc_00254BF8: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00254CF0(); /* call 0x00254CF0 */

loc_00254C01: ;
    edi = edi + 8;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00254BF4;

}

/**
 * sub_00254C50
 * Original: 0x00254C50 - 0x00254C6B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C50(void)
{

loc_00254C50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00254EF0(); /* call 0x00254EF0 */

loc_00254C65: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254C70
 * Original: 0x00254C70 - 0x00254CE9 (121 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254C70: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_00254CE6; /* je: equal / zero */

loc_00254C7C: ;
    /* nop */

loc_00254C80: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00254CCD; /* je: equal / zero */

loc_00254C85: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00254CCD; /* jne: not equal / not zero */

loc_00254C92: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00254C98: ;
    if (TEST_NZ(eax, eax)) goto loc_00254CCD; /* jne: not equal / not zero */

loc_00254C9C: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00254CCD; /* je: equal / zero */

loc_00254CA3: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00254CC3: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00254CCD: ;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(ebx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00254CDF; /* je: equal / zero */

loc_00254CDB: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00254CDF: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebp)) goto loc_00254C80; /* jne: not equal / not zero */

loc_00254CE6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00254CF0
 * Original: 0x00254CF0 - 0x00254D07 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00254CF0: ;
    if (TEST_Z(eax, eax)) goto loc_00254D06; /* je: equal / zero */

loc_00254CF4: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00254D06; /* je: equal / zero */

loc_00254D02: ;
    eax = edx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00254D06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00254D10
 * Original: 0x00254D10 - 0x00254DBA (170 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00254D10: ;
    esp = esp - 0x204;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00254D2C: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00254D3E: ;
    ecx = MEM32(esi);
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001F4F70(); /* call 0x001F4F70 */

loc_00254D4D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00254DBA(); return; } /* je: equal / zero */

loc_00254D51: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    esi = MEM32(esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_00254D60; /* jne: not equal / not zero */

loc_00254D5C: ;
    edi = 0; /* xor self */
    goto loc_00254D86;

loc_00254D60: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00254D75: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00254D86; /* je: equal / zero */

loc_00254D82: ;
    edi = MEM32(esp + 8);

loc_00254D86: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_00254DA6; /* je: equal / zero */

loc_00254D8B: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    eax = ebx + 4;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), 0)) goto loc_00254DA6; /* jne: not equal / not zero */

loc_00254D9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00254DA3: ;
    esp = esp + 4;

loc_00254DA6: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00254DAD: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254DD0
 * Original: 0x00254DD0 - 0x00254E1C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4E0);
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

loc_00254E03: ;
    if (CMP_BE(edi & edi, 0)) { sub_00254E1C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00254E07: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00254CF0(); /* call 0x00254CF0 */

loc_00254E10: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00254E03;

}

/**
 * sub_00254E60
 * Original: 0x00254E60 - 0x00254EE1 (129 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254E60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebp, edi)) goto loc_00254EDB; /* je: equal / zero */

loc_00254E6F: ;
    /* nop */

loc_00254E70: ;
    eax = MEM32(esi + -8);
    esi = esi - 8;
    edi = edi - 8;
    if (TEST_Z(eax, eax)) goto loc_00254EC5; /* je: equal / zero */

loc_00254E7D: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00254EC5; /* jne: not equal / not zero */

loc_00254E8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00254E90: ;
    if (TEST_NZ(eax, eax)) goto loc_00254EC5; /* jne: not equal / not zero */

loc_00254E94: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00254EC5; /* je: equal / zero */

loc_00254E9B: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00254EBB: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00254EC5: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00254ED7; /* je: equal / zero */

loc_00254ED3: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00254ED7: ;
    if (CMP_NE(edi, ebp)) goto loc_00254E70; /* jne: not equal / not zero */

loc_00254EDB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00254EF0
 * Original: 0x00254EF0 - 0x00254F3E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00254EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F4D0);
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

loc_00254F23: ;
    if (CMP_EQ(esi, ebx)) { sub_00254F3E(); return; } /* je: equal / zero */

loc_00254F27: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00254CF0(); /* call 0x00254CF0 */

loc_00254F30: ;
    edi = edi + 8;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 8;
    MEM32(ebp + 8) = esi;
    goto loc_00254F23;

}

/**
 * sub_00254F80
 * Original: 0x00254F80 - 0x0025558A (1546 bytes, 356 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254F80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_000DB520(); /* call 0x000DB520 */

loc_00254F9A: ;
    eax = MEM32(0x849D9C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00255000; /* jne: not equal / not zero */

loc_00254FA6: ;
    edi = 0x849D9C;
    eax = 0x6005D8;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_00254FB5: ;
    eax = MEM32(0x849D9C);
    ecx = 0x849DA8;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00254FC4: ;
    edi = 0x849DA0;
    eax = 0x6005C0;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_00254FD3: ;
    eax = MEM32(0x849DA0);
    ecx = 0x849DAC;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00254FE2: ;
    edi = 0x849DA4;
    eax = 0x6005A8;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_00254FF1: ;
    eax = MEM32(0x849DA4);
    ecx = 0x849DB0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00255000: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00255A70(); /* call 0x00255A70 */

loc_00255007: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(0x648E58); /* movss */
    MEM8(0x776154) = 0;
    MEM32(0x776158) = 0;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00255054; /* je: equal / zero */

loc_00255044: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00255054: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0xAF;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = 0xFF;
    if (TEST_Z(eax, eax)) goto loc_00255093; /* je: equal / zero */

loc_00255078: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4C70);
    eax = esi + 0x64;
    ecx = ebp + 0x172;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00255090: ;
    esp = esp + 0x10;

loc_00255093: ;
    PUSH32(esp, 0); sub_00220240(); /* call 0x00220240 */

loc_00255098: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00255584; /* jne: not equal / not zero */

loc_002550A0: ;
    eax = MEM32(0x8086E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 1;
    MEM8(0x8086C6) = LO8(ebx);
    if (TEST_NZ(eax, eax)) goto loc_002550BB; /* jne: not equal / not zero */

loc_002550B4: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_002550B9: ;
    goto loc_002550C0;

loc_002550BB: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_002550C0: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(0x648D14); /* movss */
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    MEMF(0x80761C) = xmm6; /* movss */
    MEMF(0x807620) = xmm6; /* movss */
    MEMF(0x807624) = xmm6; /* movss */
    xmm5 = xmm6; /* movaps */
    xmm4 = xmm6; /* movaps */
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003D3AA0(); /* call 0x003D3AA0 */

loc_00255106: ;
    xmm4 = xmm7; /* movaps */
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3B30(); /* call 0x003D3B30 */

loc_00255111: ;
    xmm0 = MEMF(0x64971C); /* movss */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E58); /* movss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    MEM32(0x8076B0) = 0;
    MEM8(0x8086CA) = 0;
    MEM8(0x807667) = 0xFF;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00255170: ;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = xmm1 + MEMF(0x6496C8); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(0x8086D5) = LO8(ebx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002551C0: ;
    esp = esp + 0x18;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002551CC: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    MEM8(0x8086D5) = 0;
    MEM8(0x8086CA) = LO8(ebx);
    edi = 0; /* xor self */

loc_002551E1: ;
    eax = MEM32(0x849D8C);
    if (TEST_NZ(eax, eax)) goto loc_00255215; /* jne: not equal / not zero */

loc_002551EA: ;
    if (CMP_NE(MEM32(0x849D88), edi)) goto loc_00255215; /* jne: not equal / not zero */

loc_002551F2: ;
    fp_push(MEMF(0x6BE818)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002551FD: ;
    fp_push(MEMF(0x6BE81C)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0025520D: ;
    fp_push(MEMF(0x6BE820)); /* fld float */
    goto loc_00255236;

loc_00255215: ;
    fp_push(MEMF(0x6BE824)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255220: ;
    fp_push(MEMF(0x6BE828)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255230: ;
    fp_push(MEMF(0x6BE82C)); /* fld float */

loc_00255236: ;
    MEM8(0x776170) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255240: ;
    (void)0; /* cmp edi, 5 - flags set for next jcc */
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = 0xFF;
    if (CMP_A(edi, 5)) goto loc_00255396; /* ja: above (unsigned >) */

loc_00255255: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x25558C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0025525Cu) goto loc_0025525C;
    if (_jt == 0x0025527Cu) goto loc_0025527C;
    if (_jt == 0x0025529Cu) goto loc_0025529C;
    if (_jt == 0x002552D8u) goto loc_002552D8;
    if (_jt == 0x0025531Au) goto loc_0025531A;
    if (_jt == 0x0025535Cu) goto loc_0025535C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025525C: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xC14);
    PUSH32(esp, edx);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebp + 0xD4;
    PUSH32(esp, ecx);
    goto loc_0025538C;

loc_0025527C: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0xC10);
    PUSH32(esp, eax);
    ecx = esi + 0xCD;
    PUSH32(esp, ecx);
    edx = ebp + 0xD4;
    PUSH32(esp, edx);
    goto loc_0025538C;

loc_0025529C: ;
    if (CMP_NE(MEM32(0x849D98), 2)) goto loc_002552C1; /* jne: not equal / not zero */

loc_002552A5: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0x64;
    MEM8(0x77616E) = 0xFF;

loc_002552C1: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0xC08);
    PUSH32(esp, ecx);
    edx = esi + 0xEA;
    goto loc_00255384;

loc_002552D8: ;
    if (CMP_NE(MEM32(0x849D98), 2)) goto loc_002552FD; /* jne: not equal / not zero */

loc_002552E1: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0x64;
    MEM8(0x77616E) = 0xFF;

loc_002552FD: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xC0C);
    PUSH32(esp, edx);
    eax = esi + 0x107;
    PUSH32(esp, eax);
    ecx = ebp + 0xD4;
    PUSH32(esp, ecx);
    goto loc_0025538C;

loc_0025531A: ;
    if (CMP_NE(MEM32(0x849D98), 2)) goto loc_00255340; /* jne: not equal / not zero */

loc_00255323: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0xC20);
    PUSH32(esp, eax);
    ecx = esi + 0x124;
    PUSH32(esp, ecx);
    edx = ebp + 0xD4;
    PUSH32(esp, edx);
    goto loc_0025538C;

loc_00255340: ;
    eax = MEM32(0x849800);
    eax = MEM32(eax + 0xC18);
    PUSH32(esp, eax);
    ecx = esi + 0x124;
    PUSH32(esp, ecx);
    edx = ebp + 0xD4;
    PUSH32(esp, edx);
    goto loc_0025538C;

loc_0025535C: ;
    if (CMP_NE(MEM32(0x849D98), ebx)) goto loc_00255371; /* jne: not equal / not zero */

loc_00255364: ;
    eax = MEM32(0x849800);
    eax = MEM32(eax + 0xC20);
    goto loc_0025537D;

loc_00255371: ;
    ecx = MEM32(0x849800);
    eax = MEM32(ecx + 0xC1C);

loc_0025537D: ;
    PUSH32(esp, eax);
    edx = esi + 0x141;

loc_00255384: ;
    eax = ebp + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0025538C: ;
    SET_LO8(ecx, 5);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00255393: ;
    esp = esp + 0xC;

loc_00255396: ;
    edi++;
    if (CMP_B(edi, 6)) goto loc_002551E1; /* jb: below (unsigned <) */

loc_002553A0: ;
    eax = MEM32(0x849D98);
    eax = eax - 0;
    if ((eax == 0)) goto loc_002553C6; /* je: equal / zero */

loc_002553AA: ;
    eax--;
    if ((eax == 0)) goto loc_002553BB; /* je: equal / zero */

loc_002553AD: ;
    eax--;
    if ((eax != 0)) goto loc_002553D1; /* jne: not equal / not zero */

loc_002553B0: ;
    edi = esi;
    eax = ebp;
    PUSH32(esp, 0); sub_002558F0(); /* call 0x002558F0 */

loc_002553B9: ;
    goto loc_002553D1;

loc_002553BB: ;
    edi = esi;
    eax = ebp;
    PUSH32(esp, 0); sub_00255760(); /* call 0x00255760 */

loc_002553C4: ;
    goto loc_002553D1;

loc_002553C6: ;
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0); sub_002555B0(); /* call 0x002555B0 */

loc_002553CE: ;
    esp = esp + 4;

loc_002553D1: ;
    if (CMP_NE(MEM32(0x849D88), 3)) goto loc_00255406; /* jne: not equal / not zero */

loc_002553DA: ;
    if (CMP_BE(MEM32(0x849D8C), 6)) goto loc_00255406; /* jbe: below or equal (unsigned <=) */

loc_002553E3: ;
    fp_push(MEMF(0x6BE818)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002553EE: ;
    fp_push(MEMF(0x6BE81C)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002553FE: ;
    fp_push(MEMF(0x6BE820)); /* fld float */
    goto loc_00255427;

loc_00255406: ;
    fp_push(MEMF(0x6BE824)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255411: ;
    fp_push(MEMF(0x6BE828)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255421: ;
    fp_push(MEMF(0x6BE82C)); /* fld float */

loc_00255427: ;
    MEM8(0x776170) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255431: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xC00);
    MEM8(0x77616F) = LO8(eax);
    PUSH32(esp, edx);
    eax = esi + 0x107;
    ecx = ebp + 0x214;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 5);
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0025545F: ;
    eax = MEM32(0x849D88);
    esp = esp + 0xC;
    if (CMP_NE(eax, 4)) goto loc_0025549D; /* jne: not equal / not zero */

loc_0025546C: ;
    eax = MEM32(0x849D8C);
    if (CMP_BE(eax & eax, 0)) goto loc_0025549D; /* jbe: below or equal (unsigned <=) */

loc_00255475: ;
    if (CMP_AE(eax, 2)) goto loc_0025549D; /* jae: above or equal (unsigned >=) */

loc_0025547A: ;
    fp_push(MEMF(0x6BE818)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255485: ;
    fp_push(MEMF(0x6BE81C)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255495: ;
    fp_push(MEMF(0x6BE820)); /* fld float */
    goto loc_002554BE;

loc_0025549D: ;
    fp_push(MEMF(0x6BE824)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002554A8: ;
    fp_push(MEMF(0x6BE828)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002554B8: ;
    fp_push(MEMF(0x6BE82C)); /* fld float */

loc_002554BE: ;
    MEM8(0x776170) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002554C8: ;
    edx = MEM32(0x849800);
    MEM8(0x77616F) = LO8(eax);
    eax = MEM32(edx + 0xBFC);
    PUSH32(esp, eax);
    esi = esi + 0x124;
    PUSH32(esp, esi);
    ebp = ebp + 0x181;
    PUSH32(esp, ebp);
    SET_LO8(ecx, 5);
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002554F6: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_002561B0(); /* call 0x002561B0 */

loc_00255502: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0025550D: ;
    esi = MEM32(0x849D80);
    ecx = eax;
    ecx = ecx - esi;
    if (CMP_BE(ecx, 0x1F4)) goto loc_00255533; /* jbe: below or equal (unsigned <=) */

loc_0025551F: ;
    SET_LO8(ecx, MEM8(0x849D7D));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x849D7D) = (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0; /* sete */
    MEM32(0x849D80) = eax;

loc_00255533: ;
    SET_LO8(eax, MEM8(0x849D7D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00255584; /* je: equal / zero */

loc_0025553C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = MEMF(esp + 0x18); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm0 = xmm0 + MEMF(0x64A338); /* addss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xFF);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_003587D0(); /* call 0x003587D0 */

loc_00255581: ;
    esp = esp + 0x1C;

loc_00255584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_002555B0
 * Original: 0x002555B0 - 0x00255611 (97 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555B0(void)
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

loc_002555B0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    eax = eax + 0x13B;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = eax;
    /* nop */
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    eax = MEM32(0x849D8C);
    ebx = esi + 1;
    if (CMP_NE(eax, ebx)) { sub_00255611(); return; } /* jne: not equal / not zero */

loc_002555E2: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(0x849D88), ecx)) { sub_00255611(); return; } /* jne: not equal / not zero */

loc_002555EE: ;
    fp_push(MEMF(0x6BE818)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002555F9: ;
    fp_push(MEMF(0x6BE81C)); /* fld float */
    MEM8(0x776171) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00255609: ;
    fp_push(MEMF(0x6BE820)); /* fld float */
    g_seh_ebp = ebp; sub_00255632(); return; /* tail jmp 0x00255632 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00255760
 * Original: 0x00255760 - 0x00255789 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255760(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255760: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    eax = eax + 0x13B;
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = eax;
    ebx = ecx + ecx * 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    MEM32(esp + 0xC) = ecx;
    eax = 0; /* xor self */
    ebx = ebx * 4 + 0x6BE880;
    g_seh_ebp = ebp; sub_002557A3(); return; /* tail jmp 0x002557A3 */

}

/**
 * sub_00255A70
 * Original: 0x00255A70 - 0x00255AC5 (85 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255A70: ;
    esp = esp - 0x10;
    xmm0 = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    eax = MEM32(0x849D8C);
    if (TEST_NZ(eax, eax)) { sub_00255AC5(); return; } /* jne: not equal / not zero */

loc_00255AAA: ;
    if (CMP_NE(MEM32(0x849D88), esi)) { sub_00255AC5(); return; } /* jne: not equal / not zero */

loc_00255AB2: ;
    xmm1 = MEMF(0x648E68); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00255AD3(); return; /* tail jmp 0x00255AD3 */

}

/**
 * sub_00255EB0
 * Original: 0x00255EB0 - 0x00255EDF (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255EB0: ;
    xmm3 = MEMF(0x64A4F4); /* movss */
    xmm5 = MEMF(0x64A764); /* movss */
    xmm4 = MEMF(0x648E14); /* movss */
    esp = esp - 0x1C;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) { sub_00255EDF(); return; } /* jbe: below or equal (unsigned <=) */

loc_00255ED0: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00255EE8(); return; /* tail jmp 0x00255EE8 */

}

/**
 * sub_002561B0
 * Original: 0x002561B0 - 0x002561E7 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002561B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002561B0: ;
    eax = 0x4008;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_002561BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002561C0: ;
    ecx = MEM32(0x849D84);
    esp = esp + 4;
    if (CMP_BE(ecx, eax)) goto loc_002561D5; /* jbe: below or equal (unsigned <=) */

loc_002561CD: ;
    ecx = eax;
    MEM32(0x849D84) = ecx;

loc_002561D5: ;
    if (CMP_BE(ecx, 0x1FFF)) { sub_002561E7(); return; } /* jbe: below or equal (unsigned <=) */

loc_002561DD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x4008;
    esp += 4; return; /* ret */

}

/**
 * sub_002562A0
 * Original: 0x002562A0 - 0x002563D8 (312 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562A0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_002562A0: ;
    esp = esp - 8;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp) = xmm4; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 4) = xmm4; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm1 = MEMF(esp); /* movss */
    eax = 0; /* xor self */
    MEM32(0x8076B0) = eax;
    MEM8(0x8086CA) = LO8(eax);
    PUSH32(esp, 0x5F59F0);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E58); /* movss */
    PUSH32(esp, 0x7FFFFFFF);
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002563CE: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002563E0
 * Original: 0x002563E0 - 0x0025646D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002563E0: ;
    esp = esp - 0x14;
    eax = MEM32(0x8470FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_002563F4: ;
    edx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(0x849D90);
    ecx = edi;
    ecx = ecx - eax;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_NZ(HI8(eax), 1)) goto loc_00256419; /* jne: not equal / not zero */

loc_00256410: ;
    (void)0; /* test HI8(edx), 1 - flags set for next jcc */
    MEM8(esp + 0x17) = LO8(ebx);
    if (TEST_Z(HI8(edx), 1)) goto loc_0025641E; /* je: equal / zero */

loc_00256419: ;
    MEM8(esp + 0x17) = 1;

loc_0025641E: ;
    if (TEST_NZ(MEM8(esp + 0x18), 4)) goto loc_0025642E; /* jne: not equal / not zero */

loc_00256425: ;
    (void)0; /* test LO8(edx), 4 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_Z(LO8(edx), 4)) goto loc_00256433; /* je: equal / zero */

loc_0025642E: ;
    MEM8(esp + 0x13) = 1;

loc_00256433: ;
    if (TEST_NZ(MEM8(esp + 0x18), 8)) goto loc_00256443; /* jne: not equal / not zero */

loc_0025643A: ;
    (void)0; /* test LO8(edx), 8 - flags set for next jcc */
    MEM8(esp + 0x14) = LO8(ebx);
    if (TEST_Z(LO8(edx), 8)) goto loc_00256448; /* je: equal / zero */

loc_00256443: ;
    MEM8(esp + 0x14) = 1;

loc_00256448: ;
    if (TEST_NZ(MEM8(esp + 0x18), 1)) goto loc_00256458; /* jne: not equal / not zero */

loc_0025644F: ;
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    MEM8(esp + 0x15) = LO8(ebx);
    if (TEST_Z(LO8(edx), 1)) goto loc_0025645D; /* je: equal / zero */

loc_00256458: ;
    MEM8(esp + 0x15) = 1;

loc_0025645D: ;
    if (TEST_NZ(MEM8(esp + 0x18), 2)) { sub_0025646D(); return; } /* jne: not equal / not zero */

loc_00256464: ;
    if (TEST_NZ(LO8(edx), 2)) { sub_0025646D(); return; } /* jne: not equal / not zero */

loc_00256469: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0025646F(); return; /* tail jmp 0x0025646F */

}

/**
 * sub_00256BF0
 * Original: 0x00256BF0 - 0x00256C6B (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256BF0: ;
    eax = MEM32(0x849D88);
    if (CMP_A(eax, 5)) goto loc_00256C68; /* ja: above (unsigned >) */

loc_00256BFA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x256C6C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00256C01u) goto loc_00256C01;
    if (_jt == 0x00256C07u) goto loc_00256C07;
    if (_jt == 0x00256C0Du) goto loc_00256C0D;
    if (_jt == 0x00256C22u) goto loc_00256C22;
    if (_jt == 0x00256C3Bu) goto loc_00256C3B;
    if (_jt == 0x00256C55u) goto loc_00256C55;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00256C01: ;
    eax = 0xFFFE;
    esp += 4; return; /* ret */

loc_00256C07: ;
    eax = 0xFFFF;
    esp += 4; return; /* ret */

loc_00256C0D: ;
    ecx = MEM32(0x849D94);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    MEM32(0x849D94) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00256C22: ;
    eax = MEM32(0x849D94);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 2;
    MEM32(0x849D94) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00256C3B: ;
    eax = MEM32(0x849D98);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    edx--;
    edx = edx & 2;
    MEM32(0x849D98) = edx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00256C55: ;
    ecx = MEM32(0x849D98);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ecx, 1)) ? 1 : 0); /* setne */
    MEM32(0x849D98) = eax;

loc_00256C68: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00256C90
 * Original: 0x00256C90 - 0x00256E5B (459 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256C90: ;
    eax = 0x4004;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00256C9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002563E0(); /* call 0x002563E0 */

loc_00256CA1: ;
    edi = eax;
    ebx = 0; /* xor self */
    if (CMP_BE(edi, ebx)) goto loc_00256E22; /* jbe: below or equal (unsigned <=) */

loc_00256CAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(0x849D7D) = 1;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00256CBB: ;
    ebp = eax;
    eax = MEM32(esp + 0x401C);
    esp = esp + 4;
    if (CMP_AE(ebp, eax)) goto loc_00256D8A; /* jae: above or equal (unsigned >=) */

loc_00256CCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002562A0(); /* call 0x002562A0 */

loc_00256CD5: ;
    xmm1 = MEMF(0x64ACFC); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00256D8A; /* jbe: below or equal (unsigned <=) */

loc_00256CE9: ;
    if (CMP_AE(edi, 0xFFFC)) goto loc_00256D8A; /* jae: above or equal (unsigned >=) */

loc_00256CF5: ;
    (void)0; /* cmp MEM32(0x849D84), ebp - flags set for next jcc */
    MEM16(esp + 0xE) = LO16(ebx);
    MEM16(esp + 0xC) = LO16(edi);
    if (CMP_B(MEM32(0x849D84), ebp)) goto loc_00256D1F; /* jb: below (unsigned <) */

loc_00256D07: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00256D12: ;
    eax = ebp + 1;
    esp = esp + 8;
    MEM32(0x849D84) = eax;
    goto loc_00256D8F;

loc_00256D1F: ;
    PUSH32(esp, 0x2000);
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00256D2F: ;
    edx = MEM32(0x849D84);
    PUSH32(esp, 0x2000);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM16(esp + edx * 2 + 0x28) = LO16(ebx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_00256D4E: ;
    edx = MEM32(0x849D84);
    PUSH32(esp, 0x2000);
    eax = esi + edx * 2;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_00256D67: ;
    edx = MEM32(esp + 0x403C);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00256D7A: ;
    eax = MEM32(0x849D84);
    esp = esp + 0x30;
    eax++;
    MEM32(0x849D84) = eax;
    goto loc_00256D8F;

loc_00256D8A: ;
    eax = MEM32(0x849D84);

loc_00256D8F: ;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_00256DF5; /* jne: not equal / not zero */

loc_00256D94: ;
    if (CMP_BE(eax, ebx)) goto loc_00256E21; /* jbe: below or equal (unsigned <=) */

loc_00256D9C: ;
    if (CMP_B(eax, ebp)) goto loc_00256DAD; /* jb: below (unsigned <) */

loc_00256DA0: ;
    MEM16(esi + eax * 2 + -2) = LO16(ebx);
    eax--;
    MEM32(0x849D84) = eax;
    goto loc_00256E21;

loc_00256DAD: ;
    PUSH32(esp, 0x2000);
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00256DBD: ;
    eax = MEM32(0x849D84);
    edx = esi + eax * 2;
    PUSH32(esp, 0x2000);
    MEM16(esp + eax * 2 + 0x1E) = LO16(ebx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_00256DDA: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00256DE5: ;
    eax = MEM32(0x849D84);
    esp = esp + 0x20;
    eax--;
    MEM32(0x849D84) = eax;
    goto loc_00256E21;

loc_00256DF5: ;
    if (CMP_NE(edi, 0xFFFC)) goto loc_00256E09; /* jne: not equal / not zero */

loc_00256DFD: ;
    if (CMP_BE(eax, ebx)) goto loc_00256E21; /* jbe: below or equal (unsigned <=) */

loc_00256E01: ;
    eax--;
    MEM32(0x849D84) = eax;
    goto loc_00256E21;

loc_00256E09: ;
    if (CMP_NE(edi, 0xFFFD)) goto loc_00256E21; /* jne: not equal / not zero */

loc_00256E11: ;
    eax++;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(0x849D84) = eax;
    if (CMP_BE(eax, ebp)) goto loc_00256E21; /* jbe: below or equal (unsigned <=) */

loc_00256E1B: ;
    MEM32(0x849D84) = ebp;

loc_00256E21: ;
    POP32(esp, ebp);

loc_00256E22: ;
    if (CMP_EQ(MEM8(esp + 0x4020), LO8(ebx))) goto loc_00256E4C; /* je: equal / zero */

loc_00256E2B: ;
    edx = MEM32(esp + 0x401C);
    eax = MEM32(esp + 0x4018);
    ecx = MEM32(esp + 0x4010);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00254F80(); /* call 0x00254F80 */

loc_00256E49: ;
    esp = esp + 0x10;

loc_00256E4C: ;
    if (CMP_NE(edi, 0xFFFE)) { sub_00256E5B(); return; } /* jne: not equal / not zero */

loc_00256E54: ;
    eax = 4;
    g_seh_ebp = ebp; sub_00256E7B(); return; /* tail jmp 0x00256E7B */

}

/**
 * sub_00256ED0
 * Original: 0x00256ED0 - 0x00256F13 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256ED0(void)
{
    uint32_t ebp;

loc_00256ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC04;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x2FF;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_00256F0B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00256F20
 * Original: 0x00256F20 - 0x00256F63 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F20(void)
{
    uint32_t ebp;

loc_00256F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC04;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x2FF;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 8;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_00256F5B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00256F70
 * Original: 0x00256F70 - 0x00256FB3 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F70(void)
{
    uint32_t ebp;

loc_00256F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC04;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x2FF;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 9;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_00256FAB: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00256FC0
 * Original: 0x00256FC0 - 0x00257013 (83 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00256FC0: ;
    edx = MEM32(0x849E74);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(eax) = 0x600A78;
    MEM32(eax + 0x20C) = ecx;
    MEM32(eax + 0x210) = ecx;
    MEM32(eax + 0x214) = ecx;
    MEM32(eax + 0x218) = ecx;
    MEM32(eax + 0x21C) = ecx;
    MEM32(eax + 0x6D8) = ecx;
    MEM32(eax + 0x6DC) = ecx;
    MEM16(eax + 8) = LO16(ecx);
    MEM32(eax + 0x208) = ecx;
    MEM32(eax + 0x220) = ecx;
    if (CMP_EQ(edx, ecx)) goto loc_00257012; /* je: equal / zero */

loc_0025700C: ;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;

loc_00257012: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00257020
 * Original: 0x00257020 - 0x00257065 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x208);
    PUSH32(esp, edi);
    edi = esi + 0x208;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = 0x600A78;
    MEM16(esi + 8) = LO16(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0025704A; /* je: equal / zero */

loc_00257041: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257047: ;
    esp = esp + 4;

loc_0025704A: ;
    eax = MEM32(0x849E74);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi) = ebx;
    MEM32(esi + 0x220) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_00257061; /* je: equal / zero */

loc_0025705B: ;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;

loc_00257061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257070
 * Original: 0x00257070 - 0x0025709A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257070: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00257020(); /* call 0x00257020 */

loc_00257078: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00257094; /* je: equal / zero */

loc_0025707F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00257094; /* je: equal / zero */

loc_00257087: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257091: ;
    esp = esp + 4;

loc_00257094: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002570A0
 * Original: 0x002570A0 - 0x002570A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002570A0(void)
{

loc_002570A0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_002570B0
 * Original: 0x002570B0 - 0x00257176 (198 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002570B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002570B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002570BB: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_002570C2: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257176(); return; } /* je: equal / zero */

loc_002570CA: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_002570C2; /* jl: less (signed <) */

loc_002570D6: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(edi + 0x208));
    eax = MEM32(edi + 0x204);
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x200);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 0x1F8));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x602058);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257113: ;
    SET_LO8(ecx, MEM8(edi + 0x34));
    esp = esp + 0x24;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0025716F; /* jbe: below or equal (unsigned <=) */

loc_00257125: ;
    esi = edi + 0x43;

loc_00257128: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0025716F; /* jle: less or equal (signed <=) */

loc_0025712C: ;
    ecx = ZX8(MEM8(esi + -2));
    ebx = ebx + eax;
    ebp = ebp - eax;
    eax = ZX8(MEM8(esi + -1));
    edx = esi + 0x21;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -3));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esi + -7);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -11);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x602000);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257158: ;
    ecx = MEM32(esp + 0x40);
    edx = ZX8(MEM8(edi + 0x34));
    esp = esp + 0x28;
    ecx++;
    esi = esi + 0x70;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, edx)) goto loc_00257128; /* jl: less (signed <) */

loc_0025716F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002571E0
 * Original: 0x002571E0 - 0x00257215 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571E0(void)
{

loc_002571E0: ;
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
    MEM32(eax) = 0x600730;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00257220
 * Original: 0x00257220 - 0x00257226 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257220(void)
{

loc_00257220: ;
    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00257230
 * Original: 0x00257230 - 0x00257275 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257230: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257238: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257240: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257275(); return; } /* je: equal / zero */

loc_00257244: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257240; /* jl: less (signed <) */

loc_00257250: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601FD8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0025726E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257290
 * Original: 0x00257290 - 0x002572D6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257290: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257298: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_002572A0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002572D6(); return; } /* je: equal / zero */

loc_002572A4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_002572A0; /* jl: less (signed <) */

loc_002572B0: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601FC4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002572CF: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257340
 * Original: 0x00257340 - 0x0025738D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257340(void)
{

loc_00257340: ;
    ecx = 0; /* xor self */
    MEM8(eax + 0x34) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 4));
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
    MEM32(eax) = 0x6009A8;
    MEM8(eax + 0x35) = LO8(edx);
    MEM8(eax + 0x36) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM8(eax + 0x37) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257390
 * Original: 0x00257390 - 0x00257396 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257390(void)
{

loc_00257390: ;
    eax = 0x12;
    esp += 4; return; /* ret */

}

/**
 * sub_002573A0
 * Original: 0x002573A0 - 0x00257401 (97 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002573A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002573A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002573A8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_002573B0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257401(); return; } /* je: equal / zero */

loc_002573B4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_002573B0; /* jl: less (signed <) */

loc_002573C0: ;
    edx = 0x600E6C;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x601F78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002573FA: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257420
 * Original: 0x00257420 - 0x0025746B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257420: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257428: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257430: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0025746B(); return; } /* je: equal / zero */

loc_00257434: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257430; /* jl: less (signed <) */

loc_00257440: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x35));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601F4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257464: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257480
 * Original: 0x00257480 - 0x002574BB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257480(void)
{

loc_00257480: ;
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
    MEM32(eax) = 0x600D00;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002574C0
 * Original: 0x002574C0 - 0x0025751A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002574C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002574C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x600D00;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_002574E2; /* je: equal / zero */

loc_002574D1: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002574DF: ;
    esp = esp + 4;

loc_002574E2: ;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x40) = 0;
    ecx = MEM32(esi + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x28;
    MEM32(esi) = 0x5F6980;
    if (TEST_Z(ecx, ecx)) goto loc_00257510; /* je: equal / zero */

loc_00257507: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025750D: ;
    esp = esp + 4;

loc_00257510: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00416870(); /* call 0x00416870 */

loc_00257517: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257520
 * Original: 0x00257520 - 0x00257526 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257520(void)
{

loc_00257520: ;
    eax = 0x4A;
    esp += 4; return; /* ret */

}

/**
 * sub_00257530
 * Original: 0x00257530 - 0x00257576 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257530: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257538: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257540: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257576(); return; } /* je: equal / zero */

loc_00257544: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257540; /* jl: less (signed <) */

loc_00257550: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x44));
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601F30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0025756F: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002575C0
 * Original: 0x002575C0 - 0x002575FB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002575C0(void)
{

loc_002575C0: ;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
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
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600D68;
    MEM32(eax + 0x34) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257600
 * Original: 0x00257600 - 0x00257606 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257600(void)
{

loc_00257600: ;
    eax = 0x1B;
    esp += 4; return; /* ret */

}

/**
 * sub_00257610
 * Original: 0x00257610 - 0x00257655 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257610: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257618: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257620: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257655(); return; } /* je: equal / zero */

loc_00257624: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257620; /* jl: less (signed <) */

loc_00257630: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601F20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0025764E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257670
 * Original: 0x00257670 - 0x002576B1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257670: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x28;
    MEM32(esi) = 0x5F6980;
    if (TEST_Z(ecx, ecx)) goto loc_0025768C; /* je: equal / zero */

loc_00257683: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257689: ;
    esp = esp + 4;

loc_0025768C: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00416870(); /* call 0x00416870 */

loc_00257693: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_002576AB; /* je: equal / zero */

loc_0025769A: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002576A8: ;
    esp = esp + 4;

loc_002576AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002576C0
 * Original: 0x002576C0 - 0x002576F9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002576C0(void)
{

loc_002576C0: ;
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
    MEM32(eax) = 0x5F6A88;
    MEM8(eax + 0x34) = 3;
    MEM8(eax + 0x35) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257700
 * Original: 0x00257700 - 0x00257750 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257700(void)
{
    float xmm0;

loc_00257700: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
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
    MEM32(eax) = 0x600A10;
    MEM32(eax + 0x48) = edx;
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = 1;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM8(eax + 0x4E) = LO8(ecx);
    MEM8(eax + 0x50) = LO8(ecx);
    MEM8(eax + 0x4F) = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00257760
 * Original: 0x00257760 - 0x002577ED (141 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257760(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00257760: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257768: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257770: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002577ED(); return; } /* je: equal / zero */

loc_00257774: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257770; /* jl: less (signed <) */

loc_00257780: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x50));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4F));
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4E));
    fp_push(MEMF(esi + 0x44)); /* fld float */
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4D));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, 0x601E98);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002577E6: ;
    esp = esp + 0x54;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00257800
 * Original: 0x00257800 - 0x00257832 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257800(void)
{

loc_00257800: ;
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
    MEM32(eax) = 0x6006C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00257840
 * Original: 0x00257840 - 0x00257846 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257840(void)
{

loc_00257840: ;
    eax = 0x19;
    esp += 4; return; /* ret */

}

/**
 * sub_00257850
 * Original: 0x00257850 - 0x002578FB (171 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257850: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257858: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257860: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002578FB(); return; } /* je: equal / zero */

loc_00257868: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257860; /* jl: less (signed <) */

loc_00257874: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x7C);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x6C));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5A);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4A);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x40));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, 0x601D38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002578F4: ;
    esp = esp + 0x68;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257920
 * Original: 0x00257920 - 0x00257926 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257920(void)
{

loc_00257920: ;
    eax = 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_00257930
 * Original: 0x00257930 - 0x0025799F (111 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257930: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257938: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257940: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0025799F(); return; } /* je: equal / zero */

loc_00257944: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257940; /* jl: less (signed <) */

loc_00257950: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x4E);
    eax = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x45);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x44);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x42);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x601CD8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257998: ;
    esp = esp + 0x38;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002579C0
 * Original: 0x002579C0 - 0x00257A13 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002579C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002579C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002579C8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_002579D0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257A13(); return; } /* je: equal / zero */

loc_002579D4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_002579D0; /* jl: less (signed <) */

loc_002579E0: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x3D));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x601C94);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257A0C: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257A30
 * Original: 0x00257A30 - 0x00257A7B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257A30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257A38: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257A40: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257A7B(); return; } /* je: equal / zero */

loc_00257A44: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257A40; /* jl: less (signed <) */

loc_00257A50: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x35);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x601C78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257A74: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257AA0
 * Original: 0x00257AA0 - 0x00257AEE (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257AA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257AA8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257AB0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257AEE(); return; } /* je: equal / zero */

loc_00257AB4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257AB0; /* jl: less (signed <) */

loc_00257AC0: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x40));
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x601C50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257AE7: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257B10
 * Original: 0x00257B10 - 0x00257B42 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B10(void)
{

loc_00257B10: ;
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
    MEM32(eax) = 0x600798;
    esp += 4; return; /* ret */

}

/**
 * sub_00257B50
 * Original: 0x00257B50 - 0x00257B56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B50(void)
{

loc_00257B50: ;
    eax = 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00257B60
 * Original: 0x00257B60 - 0x00257BAF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257B60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257B68: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00257B70: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257BAF(); return; } /* je: equal / zero */

loc_00257B74: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257B70; /* jl: less (signed <) */

loc_00257B80: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x38);
    eax = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x601C1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257BA8: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257BC0
 * Original: 0x00257BC0 - 0x00257C19 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257BC0(void)
{

loc_00257BC0: ;
    eax = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x30) = LO8(eax);
    MEM16(esi + 0x32) = LO16(eax);
    MEM8(esi + 0x34) = LO8(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(LO16(ecx));
    PUSH32(esp, 0xB79);
    eax = eax << 3;
    PUSH32(esp, 0x601BDC);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x600DD0;
    MEM16(esi + 0x36) = LO16(ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00257C10: ;
    MEM32(esi + 0x38) = eax;
    esp = esp + 0x10;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00257C20
 * Original: 0x00257C20 - 0x00257C65 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x38;
    MEM32(esi) = 0x600DD0;
    if (TEST_Z(eax, eax)) goto loc_00257C43; /* je: equal / zero */

loc_00257C34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257C3A: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00257C43: ;
    ecx = MEM32(esi + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x28;
    MEM32(esi) = 0x5F6980;
    if (TEST_Z(ecx, ecx)) goto loc_00257C5C; /* je: equal / zero */

loc_00257C53: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257C59: ;
    esp = esp + 4;

loc_00257C5C: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00416870(); return; /* tail jmp 0x00416870 */

}

/**
 * sub_00257C80
 * Original: 0x00257C80 - 0x00257D0C (140 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257C80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257C8B: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_00257C92: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257D0C(); return; } /* je: equal / zero */

loc_00257C96: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257C92; /* jl: less (signed <) */

loc_00257CA2: ;
    edx = 0x600E6C;
    ecx = ZX16(MEM16(esi + 0x36));
    eax = ZX8(MEM8(esi + 0x34));
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x601BB8);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257CC6: ;
    edi = 0; /* xor self */
    esp = esp + 0x18;
    if (CMP_BE(MEM16(esi + 0x36), LO16(edi))) goto loc_00257D05; /* jbe: below or equal (unsigned <=) */

loc_00257CD1: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00257D05; /* jle: less or equal (signed <=) */

loc_00257CD5: ;
    ecx = MEM32(esi + 0x38);
    edx = (uint32_t)(int32_t)SMEM16(ecx + edi * 8 + 6);
    ebx = ebx + eax;
    ebp = ebp - eax;
    eax = ecx + edi * 8;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x601B88);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257CF9: ;
    ecx = ZX16(MEM16(esi + 0x36));
    esp = esp + 0x18;
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00257CD1; /* jl: less (signed <) */

loc_00257D05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257D50
 * Original: 0x00257D50 - 0x00257D82 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D50(void)
{

loc_00257D50: ;
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
    MEM32(eax) = 0x600C98;
    esp += 4; return; /* ret */

}

/**
 * sub_00257D90
 * Original: 0x00257D90 - 0x00257D96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D90(void)
{

loc_00257D90: ;
    eax = 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00257DA0
 * Original: 0x00257DA0 - 0x00257E31 (145 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257DA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00257DAB: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_00257DB2: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00257E31(); return; } /* je: equal / zero */

loc_00257DB6: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00257DB2; /* jl: less (signed <) */

loc_00257DC2: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x38);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x601B5C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257DE5: ;
    ecx = MEM32(esi + 0x38);
    esp = esp + 0x18;
    ebp = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00257E2A; /* jle: less or equal (signed <=) */

loc_00257DF1: ;
    ecx = esi + 0x3C;
    MEM32(esp + 0x18) = ecx;

loc_00257DF8: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00257E2A; /* jle: less or equal (signed <=) */

loc_00257DFC: ;
    edx = MEM32(esp + 0x18);
    edi = edi + eax;
    ebx = ebx - eax;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FBC78);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00257E14: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x38);
    esp = esp + 0x10;
    ebp++;
    edx = edx + 2;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(ebp, ecx)) goto loc_00257DF8; /* jl: less (signed <) */

loc_00257E2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257E40
 * Original: 0x00257E40 - 0x00257E84 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257E40: ;
    eax = esi;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_00257E47: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00257E69; /* je: equal / zero */

loc_00257E4B: ;
    goto loc_00257E50;

    /* nop */

loc_00257E50: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00257E57: ;
    ecx = SX8(LO8(eax));
    if (CMP_EQ(ecx, edi)) { sub_00257E84(); return; } /* je: equal / zero */

loc_00257E5E: ;
    eax = esi;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_00257E65: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00257E50; /* jne: not equal / not zero */

loc_00257E69: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = eax;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x13C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00257EB0
 * Original: 0x00257EB0 - 0x00257EEE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257EB0: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00257EEE(); return; } /* je: equal / zero */

loc_00257EBA: ;
    eax = MEM32(ecx + 8);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(ecx + 0x20);
    ecx = eax + edx * 4;
    ecx = MEM32(ecx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00257ECF: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00257EE0: ;
    esp = esp + 0xC;
    MEM8(esi + 0x100) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257F20
 * Original: 0x00257F20 - 0x00257F4A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00257F50(); /* call 0x00257F50 */

loc_00257F28: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00257F44; /* je: equal / zero */

loc_00257F2F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00257F44; /* je: equal / zero */

loc_00257F37: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257F41: ;
    esp = esp + 4;

loc_00257F44: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257F50
 * Original: 0x00257F50 - 0x00257FA6 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257F50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00257F67; /* je: equal / zero */

loc_00257F58: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257F64: ;
    esp = esp + 4;

loc_00257F67: ;
    MEM32(esi + 0x20) = 0;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x28) = 0;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00257F9E; /* je: equal / zero */

loc_00257F83: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    eax = esi + 0x18;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00257F9E; /* jne: not equal / not zero */

loc_00257F95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257F9B: ;
    esp = esp + 4;

loc_00257F9E: ;
    MEM32(esi) = 0x5FA19C;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257FB0
 * Original: 0x00257FB0 - 0x00258004 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00257FB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi + 0xBDE0;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00257FC0: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00257FD8; /* je: equal / zero */

loc_00257FCB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00257FD5: ;
    esp = esp + 4;

loc_00257FD8: ;
    MEM32(edi + 4) = 0;
    esi = esi + 0xC770;
    edi = 0xF;
    /* nop */

loc_00257FF0: ;
    esi = esi - 0xA50;
    ecx = esi;
    PUSH32(esp, 0); sub_002993A0(); /* call 0x002993A0 */

loc_00257FFD: ;
    edi--;
    if ((edi != 0)) goto loc_00257FF0; /* jne: not equal / not zero */

loc_00258000: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258010
 * Original: 0x00258010 - 0x00258155 (325 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258010: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    MEM32(0x800448) = edx;
    MEM32(0x80044C) = edx;
    MEM32(0x800450) = edx;
    MEM32(0x800454) = edx;
    MEM32(0x800458) = edx;
    MEM32(0x80045C) = edx;
    MEM32(0x800460) = edx;
    MEM32(0x800464) = edx;
    MEM32(0x800468) = edx;
    MEM32(0x80046C) = edx;
    MEM32(0x800470) = edx;
    MEM32(0x800474) = edx;
    MEM32(0x800478) = edx;
    MEM32(0x80047C) = edx;
    MEM32(0x800480) = edx;
    MEM32(0x800484) = edx;
    MEM32(0x800488) = edx;
    MEM32(0x80048C) = edx;
    MEM32(0x800490) = edx;
    MEM32(0x800494) = edx;
    edi = edi;

loc_00258090: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ecx)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(eax + 0x849894) = LO8(edx);
    eax++;
    if (CMP_L(eax, 0x10)) goto loc_00258090; /* jl: less (signed <) */

loc_002580A3: ;
    edx = MEM32(0x863D04);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM8(0x862C41) = LO8(ecx);
    MEM32(0x862C44) = eax;
    MEM32(0x862C48) = eax;
    MEM32(0x86E990) = eax;
    MEM32(0x86E994) = eax;
    MEMF(0x86E998) = xmm0; /* movss */
    MEM32(0x862E64) = eax;
    MEMF(0x862E68) = xmm0; /* movss */
    if (CMP_NE(edx, ecx)) goto loc_002580EA; /* jne: not equal / not zero */

loc_002580E2: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(ecx))) goto loc_002580F6; /* je: equal / zero */

loc_002580EA: ;
    MEM8(0x75E9A2) = LO8(ecx);
    MEM32(0x863D04) = ecx;

loc_002580F6: ;
    PUSH32(esp, ebx);
    MEM8(0x863D12) = LO8(eax);
    eax = 0xFFFFFFFEu;
    MEM32(0x86EA30) = eax;
    MEM32(0x86EA38) = eax;
    MEM32(0x86EA34) = eax;
    MEM32(0x86EA3C) = eax;
    PUSH32(esp, 9);
    PUSH32(esp, 0xC8);
    ebx = 0xA;
    eax = 0x19;
    ecx = 0xB;
    MEM16(0x862CCE) = 1;
    MEM8(0x864EB9) = 3;
    PUSH32(esp, 0); sub_00420570(); /* call 0x00420570 */

loc_00258140: ;
    esp = esp + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0x862C60);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_0025814F: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0025B4D0(); return; /* tail jmp 0x0025B4D0 */

}

/**
 * sub_00258160
 * Original: 0x00258160 - 0x0025818D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258160: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_00258172: ;
    if (CMP_EQ(eax, 2)) { sub_0025818D(); return; } /* je: equal / zero */

loc_00258177: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_0025817E: ;
    if (CMP_EQ(eax, 1)) goto loc_00258188; /* je: equal / zero */

loc_00258183: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_00258188: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002581A0
 * Original: 0x002581A0 - 0x002581E3 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002581A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_002581A3: ;
    SET_LO8(eax, MEM8(0x86E988));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002581D4; /* je: equal / zero */

loc_002581AC: ;
    SET_LO8(eax, MEM8(esi + 0x849DC4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002581D4; /* jne: not equal / not zero */

loc_002581B6: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002581BD: ;
    if (TEST_Z(eax, eax)) goto loc_002581D4; /* je: equal / zero */

loc_002581C1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002581C8: ;
    if (CMP_EQ(eax, 3)) goto loc_002581D4; /* je: equal / zero */

loc_002581CD: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422690(); /* call 0x00422690 */

loc_002581D4: ;
    MEM8(esi + 0x849DC4) = 0;
    esi++;
    if (CMP_L(esi, 2)) goto loc_002581A3; /* jl: less (signed <) */

loc_002581E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002581F0
 * Original: 0x002581F0 - 0x002582A4 (180 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002581F0: ;
    eax = MEM32(0x862D80);
    if (TEST_NZ(eax, eax)) goto loc_0025829C; /* jne: not equal / not zero */

loc_002581FD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0025820B; /* jne: not equal / not zero */

loc_00258206: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025820B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0025825B; /* je: equal / zero */

loc_00258233: ;
    if (CMP_B(MEM32(esi + 0x80), 0x6E0)) goto loc_0025825B; /* jb: below (unsigned <) */

loc_0025823F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00258249: ;
    PUSH32(esp, 0x6E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00258254: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0025827F; /* jne: not equal / not zero */

loc_0025825B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025826D: ;
    PUSH32(esp, 0x6E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00258278: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00258293; /* je: equal / zero */

loc_0025827F: ;
    PUSH32(esp, 0); sub_00256FC0(); /* call 0x00256FC0 */

loc_00258284: ;
    POP32(esp, edi);
    MEM32(0x862D80) = eax;
    POP32(esp, esi);
    MEM8(0x849DC6) = 2;
    esp += 4; return; /* ret */

loc_00258293: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x862D80) = eax;
    POP32(esp, esi);

loc_0025829C: ;
    MEM8(0x849DC6) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_002582B0
 * Original: 0x002582B0 - 0x0025830D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002582B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002582B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x862D80);
    if (TEST_Z(ecx, ecx)) goto loc_0025830B; /* je: equal / zero */

loc_002582BB: ;
    SET_LO8(eax, MEM8(0x849DC6));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002582CD; /* jbe: below or equal (unsigned <=) */

loc_002582C4: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x849DC6) = LO8(eax);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_002582CD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025830B; /* jne: not equal / not zero */

loc_002582CF: ;
    eax = MEM32(0x849E74);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = ecx;
    if (TEST_Z(eax, eax)) goto loc_002582FB; /* je: equal / zero */

loc_002582DB: ;
    eax = ZX8(MEM8(eax + 5));
    edx = ZX8(MEM8(0x862D13));
    edx++;
    eax = eax - edx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    MEM32(esp) = eax;
    if ((eax == 0)) goto loc_002582FB; /* je: equal / zero */

loc_002582F3: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002585F0(); return; /* tail jmp 0x002585F0 */

loc_002582FB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00258301: ;
    MEM32(0x862D80) = 0;

loc_0025830B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258310
 * Original: 0x00258310 - 0x00258394 (132 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258310: ;
    esp = esp - 0x10;
    eax = MEM32(edi + 0x208);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ebx);
    MEM8(esp + 0xC) = LO8(ebx);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(eax, esi)) goto loc_00258354; /* je: equal / zero */

loc_00258333: ;
    eax = MEM32(0x849E74);
    if (CMP_NE(eax, esi)) goto loc_00258346; /* jne: not equal / not zero */

loc_0025833C: ;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    goto loc_00258354;

loc_00258346: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;

loc_00258354: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0025835D: ;
    esp = esp + 4;
    if (CMP_BE(eax & eax, 0)) goto loc_0025836D; /* jbe: below or equal (unsigned <=) */

loc_00258364: ;
    MEM8(esp + 0xB) = 1;
    SET_LO8(ebx, MEM8(esp + 0xB));

loc_0025836D: ;
    if (CMP_EQ(MEM32(edi + 0x208), esi)) goto loc_00258380; /* je: equal / zero */

loc_00258375: ;
    if (CMP_BE(MEM32(esp + 0x10), esi)) goto loc_00258380; /* jbe: below or equal (unsigned <=) */

loc_0025837B: ;
    MEM8(esp + 0xC) = 1;

loc_00258380: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_00258394(); return; } /* jne: not equal / not zero */

loc_00258384: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00258394(); return; } /* jne: not equal / not zero */

loc_0025838C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00258550
 * Original: 0x00258550 - 0x0025858B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258550: ;
    eax = MEM32(edi + 0x208);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x208;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM16(edi + 8) = LO16(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00258571; /* je: equal / zero */

loc_00258568: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025856E: ;
    esp = esp + 4;

loc_00258571: ;
    eax = MEM32(0x849E74);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = ebx;
    MEM32(edi + 0x220) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_00258588; /* je: equal / zero */

loc_00258582: ;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;

loc_00258588: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258590
 * Original: 0x00258590 - 0x002585EC (92 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258590: ;
    eax = MEM32(edi + 0x208);
    if (TEST_NZ(eax, eax)) goto loc_002585B9; /* jne: not equal / not zero */

loc_0025859A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x28F);
    PUSH32(esp, 0x601A8C);
    PUSH32(esp, 0x499A);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002585B0: ;
    esp = esp + 0x10;
    MEM32(edi + 0x208) = eax;

loc_002585B9: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849E74);
    if (TEST_Z(esi, esi)) goto loc_002585D2; /* je: equal / zero */

loc_002585C4: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;

loc_002585D2: ;
    ecx = MEM32(edi + 0x208);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0x499A);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0027B680(); /* call 0x0027B680 */

loc_002585EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002585F0
 * Original: 0x002585F0 - 0x00258620 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002585F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002585F0: ;
    ecx = MEM32(0x849E74);
    if (TEST_Z(ecx, ecx)) goto loc_0025861F; /* je: equal / zero */

loc_002585FA: ;
    SET_LO8(eax, MEM8(ecx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025861F; /* je: equal / zero */

loc_00258601: ;
    eax = ZX8(MEM8(0x862D13));
    eax++;
    eax = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0025861F; /* je: equal / zero */

loc_00258615: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043447A(); /* call 0x0043447A */

loc_0025861F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258620
 * Original: 0x00258620 - 0x00258661 (65 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258620: ;
    ecx = MEM32(eax + 0x220);
    if (CMP_GE(ecx, 0x64)) goto loc_0025865E; /* jge: greater or equal (signed >=) */

loc_0025862B: ;
    edx = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    MEM32(eax + ecx * 4 + 0x224) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + ecx * 4 + 0x228) = edx;
    ecx = MEM32(eax + 0x220);
    ecx = ecx + ecx * 2;
    MEM32(eax + ecx * 4 + 0x22C) = 0;
    MEM32(eax + 0x220) = MEM32(eax + 0x220) + 1;

loc_0025865E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00258670
 * Original: 0x00258670 - 0x00258682 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00258670: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(esi, MEM32(0x84BF90))) { sub_00258682(); return; } /* jne: not equal / not zero */

loc_0025867B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002586A0
 * Original: 0x002586A0 - 0x00258F53 (2227 bytes, 602 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002586A0(void)
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

loc_002586A0: ;
    edx = MEM32(0x863D04);
    esp = esp - 0x238;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 2;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM8(0x862CA1) = 1;
    if (CMP_EQ(edx, edi)) goto loc_00258709; /* je: equal / zero */

loc_002586BF: ;
    if (CMP_NE(MEM32(0x84BF64), edi)) goto loc_00258F49; /* jne: not equal / not zero */

loc_002586CB: ;
    SET_LO8(ecx, MEM8(0x862D91));
    if (CMP_GE(LO8(ecx) & LO8(ecx), 0)) goto loc_002586FF; /* jge: greater or equal (signed >=) */

loc_002586D5: ;
    SET_LO8(eax, MEM8(0x84BF90));
    MEM8(0x862D91) = LO8(eax);
    eax = MEM32(0x84BFA4);
    if (TEST_Z(eax, eax)) goto loc_002586ED; /* je: equal / zero */

loc_002586E8: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_002586ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00422140(); /* call 0x00422140 */

loc_002586F6: ;
    SET_LO8(ecx, MEM8(0x862D91));
    esp = esp + 8;

loc_002586FF: ;
    edx = MEM32(0x863D04);
    if (CMP_NE(edx, edi)) goto loc_0025873E; /* jne: not equal / not zero */

loc_00258709: ;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(0x862D91) = LO8(ecx);
    eax = 0xC;
    goto loc_00258720;

    /* nop */
    /* nop */

loc_00258720: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    SET_LO8(ebx, MEM8(esi + 0x863CE4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00258739; /* je: equal / zero */

loc_0025872F: ;
    SET_LO8(ecx, LO8(eax));
    MEM8(0x862D91) = LO8(ecx);
    eax = 0; /* xor self */

loc_00258739: ;
    eax--;
    if (CMP_G(eax & eax, 0)) goto loc_00258720; /* jg: greater (signed >) */

loc_0025873E: ;
    eax = MEM32(0x86422C);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x10;
    if (TEST_Z(eax, eax)) goto loc_00258913; /* je: equal / zero */

loc_00258750: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00258766; /* jne: not equal / not zero */

loc_00258755: ;
    MEM8(0x862C58) = LO8(ecx);
    MEM32(0x776238) = esi;
    goto loc_00258913;

loc_00258766: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(edx, edi)) goto loc_002587C7; /* jne: not equal / not zero */

loc_00258771: ;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00258844; /* jle: less or equal (signed <=) */

loc_00258779: ;
    esi = 0x863D4C;
    edi = 0x10;
    goto loc_00258790;

loc_00258785: ;
    eax = MEM32(0x86422C);
    /* nop */

loc_00258790: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_00258797: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002587AF; /* jne: not equal / not zero */

loc_0025879E: ;
    MEM8(0x862C58) = LO8(ebx);
    MEM32(0x776238) = edi;
    MEM8(esp + 0xF) = 1;

loc_002587AF: ;
    SET_LO8(ecx, MEM8(0x862D91));
    edx = SX8(LO8(ecx));
    ebx++;
    esi = esi + 0x68;
    if (CMP_L(ebx, edx)) goto loc_00258785; /* jl: less (signed <) */

loc_002587C0: ;
    edi = 2;
    goto loc_00258833;

loc_002587C7: ;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00258844; /* jle: less or equal (signed <=) */

loc_002587CB: ;
    goto loc_002587D0;

    /* nop */

loc_002587D0: ;
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_004216B0(); /* call 0x004216B0 */

loc_002587D9: ;
    ecx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(MEM16(eax), LO16(ecx))) goto loc_002587F7; /* je: equal / zero */

loc_002587E3: ;
    if (CMP_GE(ecx, 0x14)) goto loc_002587F7; /* jge: greater or equal (signed >=) */

loc_002587E8: ;
    SET_LO8(edx, MEM8(eax + ecx * 2));
    MEM8(esp + ecx + 0x14) = LO8(edx);
    ecx++;
    if (CMP_NE(MEM16(eax + ecx * 2), 0)) goto loc_002587E3; /* jne: not equal / not zero */

loc_002587F7: ;
    eax = esp + 0x14;
    MEM8(esp + ecx + 0x14) = 0;
    ecx = MEM32(0x86422C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_0025880D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00258825; /* jne: not equal / not zero */

loc_00258814: ;
    MEM8(0x862C58) = LO8(ebx);
    MEM32(0x776238) = esi;
    MEM8(esp + 0xF) = 1;

loc_00258825: ;
    SET_LO8(ecx, MEM8(0x862D91));
    edx = SX8(LO8(ecx));
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_002587D0; /* jl: less (signed <) */

loc_00258833: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00258913; /* jne: not equal / not zero */

loc_0025883F: ;
    eax = MEM32(0x86422C);

loc_00258844: ;
    xmm0 = MEMF(0x648D40); /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(0x776171) = LO8(ecx);
    MEM8(0x77616E) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0025888A; /* je: equal / zero */

loc_0025887A: ;
    xmm0 = MEMF(0x649678); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0025888A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x601A48);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002588A1: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00258903; /* je: equal / zero */

loc_002588AD: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002588B6: ;
    eax = MEM32(0x86422C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002588C4: ;
    if (TEST_NZ(eax, eax)) goto loc_002588F4; /* jne: not equal / not zero */

loc_002588C8: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_002588F4; /* je: equal / zero */

loc_002588D1: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002588F1: ;
    esp = esp + 4;

loc_002588F4: ;
    MEM32(0x86422C) = 0;
    edi = 2;

loc_00258903: ;
    SET_LO8(ecx, MEM8(0x862D91));
    MEM32(0x776238) = 0;

loc_00258913: ;
    eax = MEM32(0x863D08);
    if (TEST_NZ(eax, eax)) goto loc_00258DD4; /* jne: not equal / not zero */

loc_00258920: ;
    SET_LO8(eax, MEM8(0x776238));
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM8(0x862C58);
    esi = SX8(LO8(ecx));
    if (TEST_Z(LO8(eax), 2)) goto loc_00258936; /* je: equal / zero */

loc_00258933: ;
    ebx++;
    goto loc_0025893B;

loc_00258936: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_002589B2; /* je: equal / zero */

loc_0025893A: ;
    ebx--;

loc_0025893B: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025894F; /* jne: not equal / not zero */

loc_00258947: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0025894F: ;
    (void)0; /* cmp MEM32(0x75E500), edi - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), edi)) goto loc_00258975; /* jne: not equal / not zero */

loc_0025895D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002589B2; /* ja: above (unsigned >) */

loc_00258975: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    ecx = 0xAD2;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    MEM32(0x75E500) = edi;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002589B2: ;
    if (CMP_GE(ebx, esi)) goto loc_002589C1; /* jge: greater or equal (signed >=) */

loc_002589B6: ;
    if (CMP_GE(ebx & ebx, 0)) goto loc_002589C3; /* jge: greater or equal (signed >=) */

loc_002589BA: ;
    ebx = esi + -1;
    if (CMP_GE(ebx & ebx, 0)) goto loc_002589C3; /* jge: greater or equal (signed >=) */

loc_002589C1: ;
    ebx = 0; /* xor self */

loc_002589C3: ;
    PUSH32(esp, 3);
    edi = esp + 0x14;
    MEM8(0x862C58) = LO8(ebx);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002589D8: ;
    SET_LO8(eax, MEM8(0x862D91));
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00258A67; /* jle: less or equal (signed <=) */

loc_002589EA: ;
    ebx = 0x863D40;
    /* nop */

loc_002589F0: ;
    if (CMP_NE(MEM32(0x863D04), 2)) goto loc_00258A10; /* jne: not equal / not zero */

loc_002589F9: ;
    SET_LO8(eax, MEM8(ebx + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258A55; /* je: equal / zero */

loc_00258A00: ;
    if (CMP_GE(MEM8(ebx), 0)) goto loc_00258A55; /* jge: greater or equal (signed >=) */

loc_00258A05: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    goto loc_00258A4C;

loc_00258A10: ;
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00258A19: ;
    esi = MEM32(0x777EC0);
    esp = esp + 4;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00258A43; /* jle: less or equal (signed <=) */

loc_00258A28: ;
    edx = 0x776F24;
    /* nop */

loc_00258A30: ;
    if (CMP_EQ(MEM32(edx), eax)) goto loc_00258A3E; /* je: equal / zero */

loc_00258A34: ;
    ecx++;
    edx = edx + 0x28;
    if (CMP_L(ecx, esi)) goto loc_00258A30; /* jl: less (signed <) */

loc_00258A3C: ;
    goto loc_00258A43;

loc_00258A3E: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00258A55; /* jne: not equal / not zero */

loc_00258A43: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862C58);
    (void)0; /* cmp edi, ecx - flags set for next jcc */

loc_00258A4C: ;
    if (CMP_NE(edi, ecx)) goto loc_00258A55; /* jne: not equal / not zero */

loc_00258A4E: ;
    MEM32(0x776238) = MEM32(0x776238) & 0xFFFFFFEFu;

loc_00258A55: ;
    SET_LO8(eax, MEM8(0x862D91));
    edx = SX8(LO8(eax));
    edi++;
    ebx = ebx + 0x68;
    if (CMP_L(edi, edx)) goto loc_002589F0; /* jl: less (signed <) */

loc_00258A65: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_00258A67: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00258A9C; /* jne: not equal / not zero */

loc_00258A69: ;
    eax = MEM32(0x849800);
    esi = MEM32(eax + 0x88C);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00258A85: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00258A92: ;
    esp = esp + 0x18;
    MEM8(0x849931) = 1;

loc_00258A9C: ;
    (void)0; /* test MEM8(0x776238), 0x20 - flags set for next jcc */
    esi = 2;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_00258ACD; /* je: equal / zero */

loc_00258AAA: ;
    if (CMP_EQ(MEM32(0x863D04), esi)) goto loc_00258ACD; /* je: equal / zero */

loc_00258AB2: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_00258AB7: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00258AC0: ;
    esp = esp + 4;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00258ACD: ;
    SET_LO8(eax, MEM8(0x862D91));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258AEC; /* je: equal / zero */

loc_00258AD6: ;
    if (TEST_Z(MEM8(0x776238), 0x10)) goto loc_00258AEC; /* je: equal / zero */

loc_00258ADF: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00258AE4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258AEC; /* je: equal / zero */

loc_00258AE8: ;
    SET_LO8(ecx, 1);
    goto loc_00258AEE;

loc_00258AEC: ;
    SET_LO8(ecx, 0); /* xor self */

loc_00258AEE: ;
    edx = MEM32(0x776238);
    edx = edx >> 0xC;
    if (TEST_Z(LO8(edx), 1)) goto loc_00258B09; /* je: equal / zero */

loc_00258AFC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00258B01: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258B09; /* je: equal / zero */

loc_00258B05: ;
    SET_LO8(eax, 1);
    goto loc_00258B0B;

loc_00258B09: ;
    SET_LO8(eax, 0); /* xor self */

loc_00258B0B: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00258D34; /* je: equal / zero */

loc_00258B13: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00258B1C: ;
    esp = esp + 4;
    eax = 1;
    PUSH32(esp, 0); sub_00242FE0(); /* call 0x00242FE0 */

loc_00258B29: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00258B30: ;
    (void)0; /* test MEM8(0x77623C), 0x10 - flags set for next jcc */
    MEM8(0x864220) = 0;
    if (TEST_Z(MEM8(0x77623C), 0x10)) goto loc_00258B47; /* je: equal / zero */

loc_00258B40: ;
    MEM8(0x864220) = 0;

loc_00258B47: ;
    if (TEST_Z(MEM8(0x776240), 0x10)) goto loc_00258B57; /* je: equal / zero */

loc_00258B50: ;
    MEM8(0x864220) = 1;

loc_00258B57: ;
    if (TEST_Z(MEM8(0x776244), 0x10)) goto loc_00258B67; /* je: equal / zero */

loc_00258B60: ;
    MEM8(0x864220) = 2;

loc_00258B67: ;
    if (TEST_Z(MEM8(0x776248), 0x10)) goto loc_00258B77; /* je: equal / zero */

loc_00258B70: ;
    MEM8(0x864220) = 3;

loc_00258B77: ;
    eax = MEM32(0x863D04);
    SET_LO8(ecx, MEM8(0x862C58));
    (void)0; /* cmp eax, esi - flags set for next jcc */
    eax = SX8(LO8(ecx));
    if (CMP_NE(eax, esi)) goto loc_00258B9D; /* jne: not equal / not zero */

loc_00258B89: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    SET_LO8(edx, MEM8(eax + 0x863D43));
    (void)0; /* cmp LO8(edx), MEM8(eax + 0x863D44) - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(LO8(edx), MEM8(eax + 0x863D44))) ? 1 : 0); /* setge */
    goto loc_00258BCE;

loc_00258B9D: ;
    if (CMP_LE(MEM32(0x84BF90), eax)) goto loc_00258BCC; /* jle: less or equal (signed <=) */

loc_00258BA5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00258BAC: ;
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00258BBC: ;
    SET_LO8(ecx, MEM8(0x862C58));
    esp = esp + 8;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(eax, esi)) ? 1 : 0); /* setge */
    goto loc_00258BCE;

loc_00258BCC: ;
    SET_LO8(eax, 1);

loc_00258BCE: ;
    if (CMP_GE(LO8(ecx), MEM8(0x862D91))) goto loc_00258CE9; /* jge: greater or equal (signed >=) */

loc_00258BDA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00258CE9; /* jne: not equal / not zero */

loc_00258BE2: ;
    MEM8(0x77627C) = LO8(eax);
    (void)0; /* cmp MEM32(0x863D04), 2 - flags set for next jcc */
    eax = SX8(LO8(ecx));
    if (CMP_NE(MEM32(0x863D04), 2)) goto loc_00258C82; /* jne: not equal / not zero */

loc_00258BF7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    ecx = eax + 0x863D74;
    PUSH32(esp, ecx);
    edx = eax + 0x863D6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00421910(); /* call 0x00421910 */

loc_00258C0D: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x86E990) = eax;
    if (TEST_S(eax, eax)) goto loc_00258F49; /* jl: less (signed <) */

loc_00258C1D: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    SET_LO8(edx, MEM8(0x84BEA0));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = eax + 0x863D84;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00258C57; /* je: equal / zero */

loc_00258C37: ;
    eax = MEM32(ecx);
    MEM32(0x862E54) = eax;
    PUSH32(esp, 0);
    eax = 0x862E54;
    PUSH32(esp, 0); sub_0025D710(); /* call 0x0025D710 */

loc_00258C4A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258C57: ;
    PUSH32(esp, 0x862E54);
    edx = eax + 0x863D6C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D69B(); /* call 0x0048D69B */

loc_00258C69: ;
    PUSH32(esp, 0);
    eax = 0x862E54;
    PUSH32(esp, 0); sub_0025D710(); /* call 0x0025D710 */

loc_00258C75: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258C82: ;
    PUSH32(esp, 0); sub_00258670(); /* call 0x00258670 */

loc_00258C87: ;
    if (TEST_Z(eax, eax)) goto loc_00258F49; /* je: equal / zero */

loc_00258C8F: ;
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_00258C94: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    PUSH32(esp, 0); sub_00421960(); /* call 0x00421960 */

loc_00258CA0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x86E990) = eax;
    if (TEST_S(eax, eax)) goto loc_00258F49; /* jl: less (signed <) */

loc_00258CAD: ;
    MEM8(0x86E98C) = 0;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_00258CB9: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    ecx = MEM32(0x86E990);
    PUSH32(esp, 0x862E54);
    PUSH32(esp, 0); sub_004219D0(); /* call 0x004219D0 */

loc_00258CD0: ;
    PUSH32(esp, 0);
    eax = 0x862E54;
    PUSH32(esp, 0); sub_0025D710(); /* call 0x0025D710 */

loc_00258CDC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258CE9: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_00258F49; /* je: equal / zero */

loc_00258CF6: ;
    ecx = MEM32(0x863D08);
    eax = 5;
    if (CMP_NE(ecx, eax)) goto loc_00258D13; /* jne: not equal / not zero */

loc_00258D05: ;
    SET_LO8(ecx, MEM8(0x75E9A1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00258F49; /* je: equal / zero */

loc_00258D13: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00258D24: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258D34: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258F49; /* je: equal / zero */

loc_00258D3C: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_00258D50; /* jne: not equal / not zero */

loc_00258D46: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_00258D4B: ;
    eax = MEM32(0x6C0224);

loc_00258D50: ;
    if (CMP_EQ(eax, 7)) goto loc_00258D5A; /* je: equal / zero */

loc_00258D55: ;
    if (CMP_NE(eax, 8)) goto loc_00258D70; /* jne: not equal / not zero */

loc_00258D5A: ;
    SET_LO8(eax, MEM8(0x862D91));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00258D70; /* jle: less or equal (signed <=) */

loc_00258D63: ;
    SET_LO8(eax, MEM8(0x847032));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00258F49; /* je: equal / zero */

loc_00258D70: ;
    (void)0; /* test MEM8(0x77623C), 0x10 - flags set for next jcc */
    MEM8(0x864220) = 0;
    if (TEST_Z(MEM8(0x77623C), 0x10)) goto loc_00258D87; /* je: equal / zero */

loc_00258D80: ;
    MEM8(0x864220) = 0;

loc_00258D87: ;
    if (TEST_Z(MEM8(0x776240), 0x10)) goto loc_00258D97; /* je: equal / zero */

loc_00258D90: ;
    MEM8(0x864220) = 1;

loc_00258D97: ;
    if (TEST_Z(MEM8(0x776244), 0x10)) goto loc_00258DA7; /* je: equal / zero */

loc_00258DA0: ;
    MEM8(0x864220) = 2;

loc_00258DA7: ;
    if (TEST_Z(MEM8(0x776248), 0x10)) goto loc_00258DB7; /* je: equal / zero */

loc_00258DB0: ;
    MEM8(0x864220) = 3;

loc_00258DB7: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00258DBE: ;
    if (CMP_EQ(MEM32(0x863D04), esi)) goto loc_00258CF6; /* je: equal / zero */

loc_00258DCA: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_00258DCF: ;
    goto loc_00258CF6;

loc_00258DD4: ;
    if (CMP_NE(eax, 5)) goto loc_00258E5F; /* jne: not equal / not zero */

loc_00258DDD: ;
    if (CMP_EQ(MEM32(0x863D04), edi)) goto loc_00258DEE; /* je: equal / zero */

loc_00258DE5: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_00258DEA: ;
    if (CMP_NE(eax, edi)) goto loc_00258E29; /* jne: not equal / not zero */

loc_00258DEE: ;
    eax = edi;
    esi = 0x862C40;
    MEM8(0x862CA1) = 1;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00258E01: ;
    if (CMP_NE(MEM8(0x86E978), 1)) goto loc_00258F49; /* jne: not equal / not zero */

loc_00258E0E: ;
    eax = MEM32(0x86E990);
    MEM8(0x86E978) = 0;
    PUSH32(esp, 0); sub_00421FB0(); /* call 0x00421FB0 */

loc_00258E1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258E29: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_00258F49; /* je: equal / zero */

loc_00258E36: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00258E3F: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00258E4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x862D91) = 0xFF;
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258E5F: ;
    if (CMP_NE(eax, 1)) goto loc_00258F3E; /* jne: not equal / not zero */

loc_00258E68: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00258E6D: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(0x862E5C); /* movss */
    xmm1 = MEMF(0x648E48); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00258F49; /* ja: above (unsigned >) */

loc_00258E9B: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00258EA5; /* jbe: below or equal (unsigned <=) */

loc_00258EA0: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00258EB2;

loc_00258EA5: ;
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE0))) goto loc_00258F49; /* jbe: below or equal (unsigned <=) */

loc_00258EB2: ;
    xmm0 = xmm0 * MEMF(0x648E1C); /* mulss */
    ecx = 7;
    esi = 0x601A2C;
    edi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = 1;
    ecx = (int32_t)xmm0; /* cvttss2si */
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_00258EDB; /* jns: not sign (positive) */

loc_00258ED7: ;
    eax = 0; /* xor self */
    goto loc_00258EE5;

loc_00258EDB: ;
    if (CMP_BE(eax, 0xD)) goto loc_00258EE5; /* jbe: below or equal (unsigned <=) */

loc_00258EE0: ;
    eax = 0xD;

loc_00258EE5: ;
    MEM16(esp + eax * 2 + 0x28) = 0;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6019F8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00258EF8: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00258F08: ;
    esp = esp + 0xC;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_00258F1D: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00258F28: ;
    ebx = eax;
    eax = 0xE;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00258F34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_00258F3E: ;
    if (CMP_NE(eax, edi)) goto loc_00258F49; /* jne: not equal / not zero */

loc_00258F42: ;
    MEM8(0x862C5C) = 0;

loc_00258F49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00258F60
 * Original: 0x00258F60 - 0x00258F9E (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00258F60: ;
    xmm0 = MEMF(0x776220); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00258F9E(); return; } /* jnp: not parity */

loc_00258F75: ;
    MEM8(0x862D91) = 0xFF;
    MEM8(0x849DCB) = 0;
    MEM8(0x862C58) = 0;
    eax = 0x863D4C;
    /* nop */

loc_00258F90: ;
    MEM8(eax) = 0;
    eax = eax + 0x68;
    if (CMP_L(eax, 0x86422C)) goto loc_00258F90; /* jl: less (signed <) */

loc_00258F9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00259100
 * Original: 0x00259100 - 0x00259107 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259100(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259100: ;
    eax = 0x779BA8;
    g_seh_ebp = ebp; sub_00259110(); return; /* tail jmp 0x00259110 */

}

/**
 * sub_00259130
 * Original: 0x00259130 - 0x002591A4 (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259130: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_002591A2; /* je: equal / zero */

loc_00259139: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_002591A2; /* jle: less or equal (signed <=) */

loc_0025913D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp;
    MEM16(ebx) = 0;
    esi = 0x779BA8;
    goto loc_00259150;

    /* nop */

loc_00259150: ;
    if (TEST_Z(edi, edi)) goto loc_00259199; /* je: equal / zero */

loc_00259154: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_0025915C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00259162: ;
    esp = esp + 0x10;
    edi = edi - eax;
    if ((edi == 0)) goto loc_0025918B; /* je: equal / zero */

loc_00259169: ;
    if (CMP_EQ(esi, 0x779E28)) goto loc_0025918B; /* je: equal / zero */

loc_00259171: ;
    if (CMP_EQ(MEM16(esi + 0x80), 0)) goto loc_0025918B; /* je: equal / zero */

loc_0025917B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6019F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_00259187: ;
    esp = esp + 0xC;
    edi--;

loc_0025918B: ;
    esi = esi + 0x80;
    if (CMP_L(esi, 0x779EA8)) goto loc_00259150; /* jl: less (signed <) */

loc_00259199: ;
    POP32(esp, edi);
    MEM16(ebx + ebp * 2 + -2) = 0;
    POP32(esp, esi);

loc_002591A2: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002591B0
 * Original: 0x002591B0 - 0x002591CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002591B0: ;
    ecx = 0; /* xor self */
    eax = 0x779BA8;
    PUSH32(esp, esi);

loc_002591B8: ;
    if (CMP_EQ(MEM16(eax), 0)) { sub_002591CD(); return; } /* je: equal / zero */

loc_002591BE: ;
    eax = eax + 0x80;
    ecx++;
    if (CMP_L(eax, 0x779EA8)) goto loc_002591B8; /* jl: less (signed <) */

loc_002591CB: ;
    g_seh_ebp = ebp; sub_002591D4(); return; /* tail jmp 0x002591D4 */

}

/**
 * sub_00259240
 * Original: 0x00259240 - 0x0025928E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259240: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM16(0x779C28), LO16(eax))) goto loc_00259250; /* je: equal / zero */

loc_0025924B: ;
    eax = 1;

loc_00259250: ;
    if (CMP_EQ(MEM16(0x779CA8), 0)) goto loc_0025925F; /* je: equal / zero */

loc_0025925A: ;
    eax = 2;

loc_0025925F: ;
    if (CMP_EQ(MEM16(0x779D28), 0)) goto loc_0025926E; /* je: equal / zero */

loc_00259269: ;
    eax = 3;

loc_0025926E: ;
    if (CMP_EQ(MEM16(0x779DA8), 0)) goto loc_0025927D; /* je: equal / zero */

loc_00259278: ;
    eax = 4;

loc_0025927D: ;
    if (CMP_EQ(MEM16(0x779E28), 0)) { sub_0025928E(); return; } /* je: equal / zero */

loc_00259287: ;
    eax = 5;
    g_seh_ebp = ebp; sub_00259297(); return; /* tail jmp 0x00259297 */

}

/**
 * sub_002592D0
 * Original: 0x002592D0 - 0x00259798 (1224 bytes, 330 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002592D0(void)
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

loc_002592D0: ;
    esp = esp - 0x58C;
    xmm0 = MEMF(0x776220); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, ebp);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(ebx);
    if (1 /* jp after test - parity */) { sub_00259798(); return; } /* jp: parity */

loc_002592FD: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 1)) goto loc_00259320; /* jne: not equal / not zero */

loc_00259307: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_002596CE; /* je: equal / zero */

loc_00259314: ;
    MEM8(0x875830) = 1;
    goto loc_002596CE;

loc_00259320: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(eax, ebx)) goto loc_00259334; /* jne: not equal / not zero */

loc_00259329: ;
    MEM8(0x862C5E) = LO8(ebx);
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_00259334: ;
    eax = MEM32(0x849DCC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = 2;
    if (CMP_NE(eax, ebx)) goto loc_0025937B; /* jne: not equal / not zero */

loc_00259342: ;
    PUSH32(esp, 0); sub_00259100(); /* call 0x00259100 */

loc_00259347: ;
    eax = MEM32(0x86EC60);
    if (CMP_EQ(eax, esi)) goto loc_0025936F; /* je: equal / zero */

loc_00259350: ;
    if (CMP_EQ(eax, 3)) goto loc_0025936F; /* je: equal / zero */

loc_00259355: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601998;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259361: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_00259367: ;
    eax = MEM32(0x86EC60);
    esp = esp + 4;

loc_0025936F: ;
    MEM32(0x849DCC) = 1;
    goto loc_00259389;

loc_0025937B: ;
    if (CMP_NE(eax, 1)) goto loc_0025942E; /* jne: not equal / not zero */

loc_00259384: ;
    eax = MEM32(0x86EC60);

loc_00259389: ;
    if (CMP_EQ(eax, esi)) goto loc_00259396; /* je: equal / zero */

loc_0025938D: ;
    if (CMP_NE(eax, 3)) goto loc_0025942E; /* jne: not equal / not zero */

loc_00259396: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00297890(); /* call 0x00297890 */

loc_002593A0: ;
    if (CMP_GE(eax, 0x10)) goto loc_002593DA; /* jge: greater or equal (signed >=) */

loc_002593A5: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00297890(); /* call 0x00297890 */

loc_002593AF: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601948;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002593BC: ;
    PUSH32(esp, eax);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002593CA: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_002593D7: ;
    esp = esp + 0x10;

loc_002593DA: ;
    PUSH32(esp, 0); sub_002598B0(); /* call 0x002598B0 */

loc_002593DF: ;
    MEM8(0x862D91) = 0xFF;
    MEM8(0x862C58) = LO8(ebx);
    eax = 0x863D4C;

loc_002593F1: ;
    MEM8(eax) = LO8(ebx);
    eax = eax + 0x68;
    if (CMP_L(eax, 0x86422C)) goto loc_002593F1; /* jl: less (signed <) */

loc_002593FD: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601900;
    MEM32(0x87BFA8) = 0xFFFFFFFFu;
    MEM8(0x87BFA4) = LO8(ebx);
    MEM8(0x875830) = LO8(ebx);
    MEM32(0x849DCC) = esi;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259425: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_0025942B: ;
    esp = esp + 4;

loc_0025942E: ;
    if (CMP_EQ(MEM8(0x875830), LO8(ebx))) goto loc_00259448; /* je: equal / zero */

loc_00259436: ;
    MEM32(0x776238) = MEM32(0x776238) | 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58C;
    esp += 4; return; /* ret */

loc_00259448: ;
    SET_LO8(eax, MEM8(0x862D91));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_002594FC; /* jne: not equal / not zero */

loc_00259455: ;
    if (CMP_NE(MEM32(0x84BF64), esi)) goto loc_002596CE; /* jne: not equal / not zero */

loc_00259461: ;
    SET_LO8(eax, MEM8(0x84BF90));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x862D91) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002594E2; /* je: equal / zero */

loc_0025946F: ;
    if (CMP_EQ(MEM32(0x84BFA4), ebx)) goto loc_0025947C; /* je: equal / zero */

loc_00259477: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_0025947C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00422140(); /* call 0x00422140 */

loc_00259484: ;
    SET_LO8(eax, MEM8(0x862D91));
    esp = esp + 8;
    if (CMP_NE(LO8(eax), 1)) goto loc_002594A8; /* jne: not equal / not zero */

loc_00259490: ;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6018B0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025949E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    goto loc_002594C0;

loc_002594A8: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601860;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002594B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);

loc_002594C0: ;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002594C5: ;
    edx = esp + 0x28;
    esp = esp + 0x10;
    PUSH32(esp, edx);
    MEM16(esp + 0x9A) = LO16(ebx);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_002594DA: ;
    esp = esp + 4;
    goto loc_002596CE;

loc_002594E2: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601810;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002594EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_002594F4: ;
    esp = esp + 4;
    goto loc_002596CE;

loc_002594FC: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002596A9; /* je: equal / zero */

loc_00259504: ;
    SET_LO8(ecx, MEM8(0x862C58));
    if (CMP_GE(LO8(ecx), LO8(eax))) goto loc_002596A9; /* jge: greater or equal (signed >=) */

loc_00259512: ;
    esi = MEM32(0x87BFA8);
    eax = SX8(LO8(ecx));
    if (CMP_NE(esi, eax)) goto loc_002595B5; /* jne: not equal / not zero */

loc_00259523: ;
    if (CMP_EQ(MEM8(0x87BFA4), 1)) goto loc_0025954D; /* je: equal / zero */

loc_0025952C: ;
    fp_push(MEMF(0x87BFA0)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00259541: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002595B5; /* jbe: below or equal (unsigned <=) */

loc_0025954D: ;
    SET_LO8(eax, MEM8(0x862C58));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 0x577B74);
    MEM8(0x862C58) = LO8(eax);
    MEM32(0x87BFA8) = 0xFFFFFFFFu;
    MEM8(0x87BFA4) = LO8(ebx);
    PUSH32(esp, 0); sub_00259240(); /* call 0x00259240 */

loc_00259573: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6017B8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025957F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00259240(); /* call 0x00259240 */

loc_00259585: ;
    SET_LO8(ecx, MEM8(0x862C58));
    SET_LO8(eax, MEM8(0x862D91));
    esp = esp + 8;
    if (CMP_L(LO8(ecx), LO8(eax))) goto loc_002596CE; /* jl: less (signed <) */

loc_0025959B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601770;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002595A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_002595AD: ;
    esp = esp + 4;
    goto loc_002596CE;

loc_002595B5: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    if (CMP_EQ(esi, eax)) goto loc_00259616; /* je: equal / zero */

loc_002595C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004216B0(); /* call 0x004216B0 */

loc_002595C7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601728;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002595D7: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002595E4: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM16(esp + 0xAA) = LO16(ebx);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_002595F6: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002595FE: ;
    MEMF(0x87BFA0) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM8(0x862C58);
    MEM32(0x87BFA8) = ecx;
    goto loc_002596CE;

loc_00259616: ;
    PUSH32(esp, 0); sub_00258670(); /* call 0x00258670 */

loc_0025961B: ;
    if (TEST_Z(eax, eax)) goto loc_002596CE; /* je: equal / zero */

loc_00259623: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004216B0(); /* call 0x004216B0 */

loc_00259631: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6016E8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259641: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0025964E: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM16(esp + 0xAA) = LO16(ebx);
    PUSH32(esp, 0); sub_002591B0(); /* call 0x002591B0 */

loc_00259660: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_00421960(); /* call 0x00421960 */

loc_0025966F: ;
    ecx = eax;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(0x86E990) = ecx;
    if (CMP_L(ecx, ebx)) goto loc_002596A0; /* jl: less (signed <) */

loc_0025967B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C58);
    PUSH32(esp, 0x862E54);
    MEM8(0x86E98C) = LO8(ebx);
    PUSH32(esp, 0); sub_004219D0(); /* call 0x004219D0 */

loc_00259692: ;
    PUSH32(esp, ebx);
    eax = 0x862E54;
    PUSH32(esp, 0); sub_0025D710(); /* call 0x0025D710 */

loc_0025969D: ;
    esp = esp + 8;

loc_002596A0: ;
    MEM8(0x87BFA4) = 1;
    goto loc_002596CE;

loc_002596A9: ;
    (void)0; /* test MEM8(0x776238), 0x10 - flags set for next jcc */
    MEM8(esp + 0x12) = 1;
    if (TEST_Z(MEM8(0x776238), 0x10)) goto loc_002596CE; /* je: equal / zero */

loc_002596B7: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_002596BC: ;
    if (CMP_EQ(MEM32(0x84BFA4), ebx)) goto loc_002596C9; /* je: equal / zero */

loc_002596C4: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_002596C9: ;
    PUSH32(esp, 0); sub_00239370(); /* call 0x00239370 */

loc_002596CE: ;
    PUSH32(esp, 0x181);
    ebx = esp + 0x29C;
    PUSH32(esp, 0); sub_00259130(); /* call 0x00259130 */

loc_002596DF: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002596E6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_00259758; /* je: equal / zero */

loc_002596F1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00259709; /* je: equal / zero */

loc_002596F9: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6016A0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259705: ;
    esi = eax;
    goto loc_0025970B;

loc_00259709: ;
    esi = 0; /* xor self */

loc_0025970B: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00259723; /* je: equal / zero */

loc_00259713: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601658;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025971F: ;
    ebp = eax;
    goto loc_00259725;

loc_00259723: ;
    ebp = 0; /* xor self */

loc_00259725: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60162C;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259733: ;
    PUSH32(esp, eax);
    esp = esp - 8;
    eax = esp;
    edi = esp + 0x2A4;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00259745: ;
    ecx = esi;
    esi = MEM32(esp + 0x20);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00259754: ;
    ebx = eax;
    goto loc_0025975A;

loc_00259758: ;
    ebx = 0; /* xor self */

loc_0025975A: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00259761: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x28);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x28;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0025977E; /* je: equal / zero */

loc_00259777: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0025977E: ;
    MEM32(esi + 0x38) = ebx;
    eax = MEM32(edi + 0x10);
    eax = eax + 0x28;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002597B0
 * Original: 0x002597B0 - 0x0025988C (220 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002597B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002597B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x863D38);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_002597BF: ;
    eax = MEM32(0x84A19C);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_002597CF; /* jne: not equal / not zero */

loc_002597CA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002597CF: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00259817; /* je: equal / zero */

loc_002597F5: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_00259817; /* jb: below (unsigned <) */

loc_002597FE: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00259808: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00259810: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00259838; /* jne: not equal / not zero */

loc_00259817: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00259829: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00259831: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025988C(); return; } /* je: equal / zero */

loc_00259838: ;
    ecx = MEM32(0x863D38);
    edx = MEM32(0x863D3C);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x600A90;
    MEM32(eax + 0x3C) = edx;
    ecx = (uint32_t)(int32_t)SMEM8(0x863D12);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00259888: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002598B0
 * Original: 0x002598B0 - 0x00259ADE (558 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002598B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002598B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_002598B8: ;
    eax = MEM32(0x84BE58);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = 0xC;
    if (CMP_EQ(eax, ebx)) goto loc_0025990A; /* je: equal / zero */

loc_002598C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64819C);
    PUSH32(esp, 0xDD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002598DB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0025990A; /* je: equal / zero */

loc_002598E7: ;
    (void)0; /* cmp MEM32(0x84BF68), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(MEM32(0x84BF68), esi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648174);
    PUSH32(esp, 0xDD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259902: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025990A: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = 5;
    MEM32(0x84BF6C) = esi;
    MEM32(0x84BF80) = edi;
    esi = 9;
    if (CMP_EQ(eax, ebx)) goto loc_00259966; /* je: equal / zero */

loc_00259924: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xE2F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259937: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_00259966; /* je: equal / zero */

loc_00259943: ;
    (void)0; /* cmp MEM32(0x84BF84), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(MEM32(0x84BF84), esi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648084);
    PUSH32(esp, 0xE30);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025995E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00259966: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84BF88) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_002599B2; /* je: equal / zero */

loc_00259970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259983: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_002599B2; /* je: equal / zero */

loc_0025998F: ;
    (void)0; /* cmp MEM32(0x84BF88), ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(MEM32(0x84BF88), ebx)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE3F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002599AA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_002599B2: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(0x84BF8C);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = 0x1D4;
    MEM32(ecx + 0xC) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_00259A14; /* je: equal / zero */

loc_002599CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE74);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002599DE: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_00259A0E; /* je: equal / zero */

loc_002599EA: ;
    (void)0; /* cmp MEM32(0x84BF88), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_G(MEM32(0x84BF88), 1)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE75);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259A06: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00259A0E: ;
    ecx = MEM32(0x84BF8C);

loc_00259A14: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = 0xF00000;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x10) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_00259A6C; /* je: equal / zero */

loc_00259A23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE74);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259A36: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_00259A66; /* je: equal / zero */

loc_00259A42: ;
    (void)0; /* cmp MEM32(0x84BF88), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(MEM32(0x84BF88), 2)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE75);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259A5E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00259A66: ;
    ecx = MEM32(0x84BF8C);

loc_00259A6C: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ecx + 0x24) = ebx;
    MEM32(ecx + 0x20) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_00259ABA; /* je: equal / zero */

loc_00259A76: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259A89: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_00259AB4; /* je: equal / zero */

loc_00259A95: ;
    (void)0; /* cmp MEM32(0x84BF88), 3 - flags set for next jcc */
    SET_LO8(edx, (CMP_G(MEM32(0x84BF88), 3)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE3F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00259AB1: ;
    esp = esp + 0x10;

loc_00259AB4: ;
    ecx = MEM32(0x84BF8C);

loc_00259ABA: ;
    MEM32(ecx + 0x34) = ebx;
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x38) = ebx;
    MEM32(ecx + 0x3C) = ebx;
    if (CMP_NE(MEM32(0x863D04), 3)) { sub_00259ADE(); return; } /* jne: not equal / not zero */

loc_00259ACF: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00297890(); /* call 0x00297890 */

loc_00259AD9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_00259AE1(); return; /* tail jmp 0x00259AE1 */

}

/**
 * sub_00259C90
 * Original: 0x00259C90 - 0x00259C98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259C90(void)
{

loc_00259C90: ;
    MEM8(0x849DD0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00259CA0
 * Original: 0x00259CA0 - 0x00259DC9 (297 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259CA0: ;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601600;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x48) = ebp;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x50) = ebp;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259CE5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00259D00: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601600;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259D0C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00259D27: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601600;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00259D33: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00259D4E: ;
    eax = MEM32(0x777EC0);
    esi = 0; /* xor self */
    if (CMP_LE(eax, ebp)) goto loc_00259DBA; /* jle: less or equal (signed <=) */

loc_00259D59: ;
    ebx = MEM32(esp + 0x3C);
    edi = 0x776F28;

loc_00259D62: ;
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x38);
    edx = edx + 0x58;
    if (CMP_EQ(ecx, ebp)) goto loc_00259D98; /* je: equal / zero */

loc_00259D6F: ;
    ebp = MEM32(esp + 0x38);
    eax = ebx;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x40);
    ecx = ecx - ebp;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_00259D96; /* jae: above or equal (unsigned >=) */

loc_00259D87: ;
    eax = MEM32(edx);
    MEM32(ebx) = eax;
    ebx = ebx + 4;
    MEM32(esp + 0x3C) = ebx;
    ebp = 0; /* xor self */
    goto loc_00259DAD;

loc_00259D96: ;
    ebp = 0; /* xor self */

loc_00259D98: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00259DA9: ;
    ebx = MEM32(esp + 0x3C);

loc_00259DAD: ;
    eax = MEM32(0x777EC0);
    esi++;
    edi = edi + 0x28;
    if (CMP_L(esi, eax)) goto loc_00259D62; /* jl: less (signed <) */

loc_00259DBA: ;
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);
    esi = 0x908;
    g_seh_ebp = ebp; sub_00259DD0(); return; /* tail jmp 0x00259DD0 */

}

/**
 * sub_0025AB60
 * Original: 0x0025AB60 - 0x0025AD63 (515 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AB60(void)
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

loc_0025AB60: ;
    SET_LO8(eax, MEM8(0x875828));
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0025AB77; /* je: equal / zero */

loc_0025AB6F: ;
    if (CMP_EQ(MEM32(0x86422C), ebx)) goto loc_0025ABCC; /* je: equal / zero */

loc_0025AB77: ;
    SET_LO8(eax, 0x10);
    MEM8(esp + 7) = LO8(eax);
    MEM8(0x87C910) = LO8(eax);
    MEM8(esp + 4) = LO8(ebx);
    MEM8(esp + 5) = LO8(ebx);
    MEM8(esp + 6) = 1;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x87C90E) = LO8(ebx);
    MEM8(0x87C90D) = LO8(ebx);
    MEM8(0x87C90F) = 1;
    MEM8(0x87C911) = LO8(ebx);
    MEM8(0x87C90C) = LO8(ebx);
    MEM8(0x875828) = 1;
    MEM32(0x75A15C) = ecx;
    MEM8(0x75A160) = LO8(eax);
    MEM8(0x849DD0) = LO8(ebx);

loc_0025ABCC: ;
    xmm0 = MEMF(0x776220); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0025AD63(); return; } /* jp: parity */

loc_0025ABE5: ;
    (void)0; /* cmp MEM8(0x875829), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(0x875829), LO8(ebx))) goto loc_0025AC94; /* jne: not equal / not zero */

loc_0025ABF2: ;
    PUSH32(esp, 0x75A15C);
    PUSH32(esp, 0); sub_00259CA0(); /* call 0x00259CA0 */

loc_0025ABFC: ;
    eax = MEM32(0x86422C);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_0025AC11; /* je: equal / zero */

loc_0025AC08: ;
    MEM8(0x849DD0) = 1;
    goto loc_0025AC19;

loc_0025AC11: ;
    if (CMP_EQ(MEM8(0x849DD0), LO8(ebx))) goto loc_0025AC8E; /* je: equal / zero */

loc_0025AC19: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0025AC22: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0025AC29: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0025AC33: ;
    SET_LO8(eax, MEM8(0x75A15D));
    SET_LO8(edx, MEM8(0x75A15C));
    SET_LO8(ecx, MEM8(0x75A15E));
    MEM8(0x87C90E) = LO8(eax);
    SET_LO8(eax, MEM8(0x75A160));
    MEM8(0x87C90D) = LO8(edx);
    SET_LO8(edx, MEM8(0x75A15F));
    MEM8(0x87C911) = LO8(eax);
    eax = 0x87C90C;
    MEM8(0x87C90C) = LO8(ebx);
    MEM8(0x87C90F) = LO8(ecx);
    MEM8(0x87C910) = LO8(edx);
    PUSH32(esp, 0); sub_0025AD80(); /* call 0x0025AD80 */

loc_0025AC7B: ;
    MEM8(0x849DD0) = LO8(ebx);
    MEM8(0x862C58) = LO8(ebx);
    MEM8(0x875829) = 1;

loc_0025AC8E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0025AC94: ;
    ecx = MEM32(0x776238);
    if (TEST_NZ(LO8(ecx), 0x20)) goto loc_0025ACCF; /* jne: not equal / not zero */

loc_0025AC9F: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0025ACA4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025ACCF; /* jne: not equal / not zero */

loc_0025ACA8: ;
    if (TEST_Z(HI8(ecx), 0x20)) goto loc_0025ACC5; /* je: equal / zero */

loc_0025ACAD: ;
    if (CMP_LE(MEM8(0x862D91), 0xFF)) goto loc_0025ACC5; /* jle: less or equal (signed <=) */

loc_0025ACB6: ;
    POP32(esp, edi);
    eax = 0x87C90C;
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_0025AD80(); return; /* tail jmp 0x0025AD80 */

loc_0025ACC5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_002586A0(); return; /* tail jmp 0x002586A0 */

loc_0025ACCF: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0025ACD8: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0025ACEF; /* jne: not equal / not zero */

loc_0025ACE7: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0025ACEF: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0025AD1C; /* jne: not equal / not zero */

loc_0025AD04: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0025AD57; /* ja: above (unsigned >) */

loc_0025AD1C: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0025AD57: ;
    POP32(esp, edi);
    MEM8(0x875829) = LO8(ebx);
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
 * sub_0025AD80
 * Original: 0x0025AD80 - 0x0025AEF9 (377 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_0025AD8A: ;
    eax = MEM32(0x84BE58);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = 0xC;
    if (CMP_EQ(eax, ebx)) goto loc_0025ADDC; /* je: equal / zero */

loc_0025AD9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64819C);
    PUSH32(esp, 0xDD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025ADAD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0025ADDC; /* je: equal / zero */

loc_0025ADB9: ;
    (void)0; /* cmp MEM32(0x84BF68), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(MEM32(0x84BF68), esi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648174);
    PUSH32(esp, 0xDD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025ADD4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025ADDC: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84BF6C) = esi;
    MEM32(0x84BF80) = 5;
    esi = 9;
    if (CMP_EQ(eax, ebx)) goto loc_0025AE37; /* je: equal / zero */

loc_0025ADF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xE2F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AE08: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0025AE37; /* je: equal / zero */

loc_0025AE14: ;
    (void)0; /* cmp MEM32(0x84BF84), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(MEM32(0x84BF84), esi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648084);
    PUSH32(esp, 0xE30);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AE2F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025AE37: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84BF88) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_0025AE83; /* je: equal / zero */

loc_0025AE41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AE54: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0025AE83; /* je: equal / zero */

loc_0025AE60: ;
    (void)0; /* cmp MEM32(0x84BF88), ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(MEM32(0x84BF88), ebx)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE3F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AE7B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025AE83: ;
    ecx = MEM32(0x84BF8C);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = 0x1D4;
    MEM32(ecx + 0xC) = ebx;
    SET_LO8(edx, MEM8(edi + 1));
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    esi = 0xF00000;
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_0025AEF9(); return; } /* jne: not equal / not zero */

loc_0025AEA4: ;
    if (CMP_EQ(eax, ebx)) goto loc_0025AEF1; /* je: equal / zero */

loc_0025AEA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE74);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AEBB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0025AEEB; /* je: equal / zero */

loc_0025AEC7: ;
    (void)0; /* cmp MEM32(0x84BF88), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_G(MEM32(0x84BF88), 1)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE75);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025AEE3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025AEEB: ;
    ecx = MEM32(0x84BF8C);

loc_0025AEF1: ;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x10) = esi;
    g_seh_ebp = ebp; sub_0025AF20(); return; /* tail jmp 0x0025AF20 */

}

/**
 * sub_0025B170
 * Original: 0x0025B170 - 0x0025B1CA (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B170: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = MEM32(0x84B11C);
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x6BF17A) = 1;
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_0025B193: ;
    edi = eax;
    MEM8(0x864635) = 0;
    MEM8(0x864634) = 0;
    MEM8(0x864EB8) = 0;
    ecx = 6;
    esi = 0x862C84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    SET_LO8(eax, MEM8(0x862998));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0025B1CA(); return; } /* je: equal / zero */

loc_0025B1C1: ;
    SET_LO8(eax, MEM8(0x862990));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    g_seh_ebp = ebp; sub_0025B1D1(); return; /* tail jmp 0x0025B1D1 */

}

/**
 * sub_0025B4D0
 * Original: 0x0025B4D0 - 0x0025B6BB (491 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B4D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x847268));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00417FD0(); /* call 0x00417FD0 */

loc_0025B4DE: ;
    PUSH32(esp, 0); sub_00418240(); /* call 0x00418240 */

loc_0025B4E3: ;
    ebx = 4;
    eax = 0x20;
    PUSH32(esp, 0); sub_00418080(); /* call 0x00418080 */

loc_0025B4F2: ;
    eax = 8;
    esi = 0x4C;
    PUSH32(esp, 0); sub_00416B50(); /* call 0x00416B50 */

loc_0025B501: ;
    MEM32(0x84BE70) = 0x25D1E0;
    MEM32(0x84BE74) = 0x25D330;
    MEM32(0x84BE78) = 0x25D590;
    MEM32(0x84BE7C) = 0x25D650;
    MEM32(0x84BE84) = 0x25C980;
    MEM32(0x84BE88) = 0x2644D0;
    MEM32(0x84BE90) = 0x25DC40;
    MEM32(0x84BE94) = 0x25DCB0;
    ebx = 0x6BE944;

loc_0025B556: ;
    eax = MEM32(ebx);
    edi = MEM32(ebx + 4);
    esi = MEM32(ebx + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00416CC0(); /* call 0x00416CC0 */

loc_0025B564: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ebx + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0041B330(); /* call 0x0041B330 */

loc_0025B570: ;
    ebx = ebx + 0x10;
    esp = esp + 8;
    if (CMP_L(ebx, 0x6BED94)) goto loc_0025B556; /* jl: less (signed <) */

loc_0025B57E: ;
    PUSH32(esp, 0); sub_0028A170(); /* call 0x0028A170 */

loc_0025B583: ;
    ebx = 0; /* xor self */
    MEM32(0x863AF0) = ebx;
    MEM8(0x77A558) = LO8(ebx);
    PUSH32(esp, 0); sub_00425CF0(); /* call 0x00425CF0 */

loc_0025B596: ;
    (void)0; /* cmp MEM32(0x863D08), ebx - flags set for next jcc */
    esi = 3;
    if (CMP_NE(MEM32(0x863D08), ebx)) goto loc_0025B5AB; /* jne: not equal / not zero */

loc_0025B5A3: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0025B60A; /* je: equal / zero */

loc_0025B5AB: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = ebx;
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0025B5C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0025B5CF: ;
    edi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0025B5EC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0025B5FE; /* jge: greater or equal (signed >=) */

loc_0025B5F8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0025B5FE: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025B60A: ;
    xmm0 = MEMF(0x648D34); /* movss */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    MEM32(0x86EA10) = esi;
    MEM32(0x86E9BC) = esi;
    MEMF(0x862E5C) = xmm0; /* movss */
    MEMF(0x862E60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    MEM8(0x864EC1) = LO8(ebx);
    MEM8(0x862E58) = LO8(ebx);
    MEM8(0x86E9A2) = LO8(ebx);
    MEM8(0x862C5E) = LO8(ebx);
    MEM8(0x862E6C) = LO8(ebx);
    MEM8(0x862D13) = LO8(ebx);
    MEM8(0x86E9C0) = LO8(ebx);
    MEM16(0x86E9CC) = LO16(ebx);
    MEM8(0x86E9A4) = LO8(ebx);
    MEM32(0x86E9B0) = ebx;
    MEM32(0x86E9B8) = ebx;
    MEM8(0x8758AC) = 1;
    MEM16(0x86E9A0) = 0xFFFE;
    MEM8(0x862D91) = LO8(eax);
    MEM32(0x86E9C4) = eax;
    MEM32(0x86E9C8) = eax;
    MEMF(0x86E9B4) = xmm0; /* movss */
    MEM32(0x86E9A8) = eax;
    MEM32(0x86E9AC) = eax;
    MEMF(0x86EA14) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00262530(); return; /* tail jmp 0x00262530 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025B6C0
 * Original: 0x0025B6C0 - 0x0025B83E (382 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B6C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x86ECF4);
    if (TEST_Z(ecx, ecx)) goto loc_0025B83C; /* je: equal / zero */

loc_0025B6CF: ;
    eax = MEM32(0x86ECF8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0025B83C; /* je: equal / zero */

loc_0025B6E1: ;
    ecx = 0x86ED08;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025B6EB: ;
    fp_push(MEMF(0x86ED00)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0025B713; /* jae: above or equal (unsigned >=) */

loc_0025B6F9: ;
    ecx = 0x86ED08;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025B703: ;
    fp_push(MEMF(0x86ED04)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025B83C; /* jbe: below or equal (unsigned <=) */

loc_0025B713: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x86ECF8);
    PUSH32(esp, ebp);
    ebp = MEM32(0x86ECF4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0025B723: ;
    if (TEST_Z(ebp, ebp)) goto loc_0025B838; /* je: equal / zero */

loc_0025B72B: ;
    esi = ebx;
    esi = esi - ebp;
    esi = (uint32_t)((int32_t)esi >> 2);
    if (TEST_Z(esi, esi)) goto loc_0025B838; /* je: equal / zero */

loc_0025B73A: ;
    SET_LO16(edi, MEM16(ebx + -4));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0025B748: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(esi, esi)) goto loc_0025B759; /* je: equal / zero */

loc_0025B750: ;
    ebx = ebx - 4;
    MEM32(0x86ECF8) = ebx;

loc_0025B759: ;
    if (TEST_Z(eax, eax)) goto loc_0025B723; /* je: equal / zero */

loc_0025B75D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0025B76B; /* jne: not equal / not zero */

loc_0025B766: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025B76B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0025B7B3; /* je: equal / zero */

loc_0025B791: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0025B7B3; /* jb: below (unsigned <) */

loc_0025B79A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025B7A4: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025B7AC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0025B7D4; /* jne: not equal / not zero */

loc_0025B7B3: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025B7C5: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025B7CD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0025B7DD; /* je: equal / zero */

loc_0025B7D4: ;
    PUSH32(esp, 0); sub_00257480(); /* call 0x00257480 */

loc_0025B7D9: ;
    esi = eax;
    goto loc_0025B7DF;

loc_0025B7DD: ;
    esi = 0; /* xor self */

loc_0025B7DF: ;
    SET_LO8(eax, MEM8(0x777EC8));
    MEM8(esi + 0x44) = LO8(eax);
    edi = esi + 0x34;
    eax = 0x86ECE0;
    PUSH32(esp, 0); sub_00264870(); /* call 0x00264870 */

loc_0025B7F4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0025B800: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025B812: ;
    ecx = 0x86ED08;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025B81C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x86ED08;
    MEMF(0x86ED00) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025B832: ;
    MEMF(0x86ED04) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025B838: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025B83C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025B840
 * Original: 0x0025B840 - 0x0025BB78 (824 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B840(void)
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

loc_0025B840: ;
    esp = esp - 0x158;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0025B854: ;
    eax = MEM32(0x86ECE4);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0025B870; /* je: equal / zero */

loc_0025B85F: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025B86D: ;
    esp = esp + 4;

loc_0025B870: ;
    eax = esp + 0x24;
    MEM32(0x86ECE4) = ebp;
    MEM32(0x86ECE8) = ebp;
    MEM32(0x86ECEC) = ebp;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0025B88B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025B950; /* je: equal / zero */

loc_0025B893: ;
    edi = MEM32(esp + 0xC);

loc_0025B897: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0025B8A2: ;
    MEM8(esp + 0x16) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0025B8AC: ;
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + 0x776280;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = MEM32(esi);
    MEM32(esp + 0x18) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0025B8CD: ;
    edx = MEM32(esi);
    SET_LO16(ecx, SX8(LO8(eax)));
    MEM16(esp + 0x20) = LO16(ecx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_0025B8DD: ;
    esi = MEM32(0x86ECE4);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    edx = MEM32(0x86ECE8);
    MEM16(esp + 0x14) = LO16(eax);
    if (CMP_EQ(esi, ebp)) goto loc_0025B92A; /* je: equal / zero */

loc_0025B8F2: ;
    ecx = MEM32(0x86ECEC);
    eax = edx;
    eax = eax - esi;
    ecx = ecx - esi;
    eax = (uint32_t)((int32_t)eax >> 4);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    if (CMP_AE(eax, ecx)) goto loc_0025B92A; /* jae: above or equal (unsigned >=) */

loc_0025B908: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86ECE0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    esi = edx;
    PUSH32(esp, 0); sub_0034A1B0(); /* call 0x0034A1B0 */

loc_0025B91C: ;
    esp = esp + 0x10;
    esi = esi + 0x10;
    MEM32(0x86ECE8) = esi;
    goto loc_0025B93F;

loc_0025B92A: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 1;
    edx = 0x86ECE0;
    PUSH32(esp, 0); sub_00264B80(); /* call 0x00264B80 */

loc_0025B93F: ;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0025B948: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025B897; /* jne: not equal / not zero */

loc_0025B950: ;
    eax = MEM32(0x86ECF4);
    if (CMP_EQ(eax, ebp)) goto loc_0025B96A; /* je: equal / zero */

loc_0025B959: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025B967: ;
    esp = esp + 4;

loc_0025B96A: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x86ECF4) = ebp;
    MEM32(0x86ECF8) = ebp;
    MEM32(0x86ECFC) = ebp;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0025BB41; /* jle: less or equal (signed <=) */

loc_0025B98D: ;
    MEM32(esp + 0xC) = 0x8658A0;
    PUSH32(esp, ebx);

loc_0025B996: ;
    if (CMP_NE(MEM32(0x84A19C), ebp)) goto loc_0025B9A3; /* jne: not equal / not zero */

loc_0025B99E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025B9A3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebp)) goto loc_0025B9EB; /* je: equal / zero */

loc_0025B9C9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0025B9EB; /* jb: below (unsigned <) */

loc_0025B9D2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025B9DC: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025B9E4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebp)) goto loc_0025BA0C; /* jne: not equal / not zero */

loc_0025B9EB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025B9FD: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025BA05: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_0025BA40; /* je: equal / zero */

loc_0025BA0C: ;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ebp;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ebp;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ebp;
    MEM8(eax + 0x30) = 0;
    MEM16(eax + 0x32) = LO16(ebp);
    MEM32(eax) = 0x600658;
    esi = eax;
    goto loc_0025BA42;

loc_0025BA40: ;
    esi = 0; /* xor self */

loc_0025BA42: ;
    ebx = MEM32(0x876758);
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    SET_LO8(edx, MEM8(0x776BD8));
    SET_LO8(eax, MEM8(0x777EC8));
    MEM8(esi + 0x34) = LO8(edx);
    MEM8(esi + 0x35) = LO8(eax);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0025BA71; /* jne: not equal / not zero */

loc_0025BA5E: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0025BA71: ;
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    xmm0 = MEMF(0x87672C); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    SET_LO16(ecx, MEM16(0x776B58));
    MEM16(esi + 0x3E) = LO16(ecx);
    SET_LO16(edx, MEM16(0x776B5A));
    MEM16(esi + 0x40) = LO16(edx);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0025BAAC; /* jne: not equal / not zero */

loc_0025BA99: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0025BAAC: ;
    SET_LO8(eax, MEM8(0x876737));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x3C) = LO8(eax);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0025BAC0: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025BACF: ;
    edi = (uint32_t)(int32_t)SMEM16(ebx);
    edx = MEM32(0x86ECF4);
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    esi = MEM32(0x86ECF8);
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(edx, ebp)) goto loc_0025BB09; /* je: equal / zero */

loc_0025BAE6: ;
    ecx = MEM32(0x86ECFC);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_0025BB09; /* jae: above or equal (unsigned >=) */

loc_0025BAFC: ;
    MEM32(esi) = edi;
    esi = esi + 4;
    MEM32(0x86ECF8) = esi;
    goto loc_0025BB1E;

loc_0025BB09: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x86ECF0);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_0025BB1E: ;
    eax = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebx = ebx + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(eax, edx)) goto loc_0025B996; /* jl: less (signed <) */

loc_0025BB40: ;
    POP32(esp, ebx);

loc_0025BB41: ;
    ecx = 0x86ED08;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025BB4B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x86ED08;
    MEMF(0x86ED00) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025BB61: ;
    POP32(esp, edi);
    MEMF(0x86ED04) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    MEM8(0x84981F) = 0;
    POP32(esp, ebp);
    esp = esp + 0x158;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025BB80
 * Original: 0x0025BB80 - 0x0025C965 (3557 bytes, 948 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
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

loc_0025BB80: ;
    esp = esp - 0x114;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025BB8B: ;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(0x849DB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025BBB7; /* je: equal / zero */

loc_0025BB98: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(0x875824); /* subss */
    xmm1 = MEMF(0x6497D0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0025C95E; /* ja: above (unsigned >) */

loc_0025BBB7: ;
    SET_LO8(eax, MEM8(0x862C40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(0x875824) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BC01; /* jne: not equal / not zero */

loc_0025BBCE: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x837748);
    PUSH32(esp, 0); sub_004A0416(); /* call 0x004A0416 */

loc_0025BBDD: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ecx;
    MEM32(0x84BEEC) = eax;
    MEM32(0x758644) = 0;
    MEM8(0x862C40) = 1;
    goto loc_0025BC11;

loc_0025BC01: ;
    eax = MEM32(0x758644);
    if (TEST_Z(eax, eax)) goto loc_0025BC11; /* je: equal / zero */

loc_0025BC0A: ;
    MEM8(0x862C40) = 0;

loc_0025BC11: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_0025BC25; /* jne: not equal / not zero */

loc_0025BC1B: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_0025BC20: ;
    eax = MEM32(0x6C0224);

loc_0025BC25: ;
    if (CMP_EQ(eax, 6)) goto loc_0025BC40; /* je: equal / zero */

loc_0025BC2A: ;
    if (CMP_EQ(eax, 7)) goto loc_0025BC40; /* je: equal / zero */

loc_0025BC2F: ;
    if (CMP_EQ(eax, 8)) goto loc_0025BC40; /* je: equal / zero */

loc_0025BC34: ;
    PUSH32(esp, 0); sub_002780F0(); /* call 0x002780F0 */

loc_0025BC39: ;
    eax = MEM32(0x6C0224);
    goto loc_0025BC8A;

loc_0025BC40: ;
    ecx = MEM32(0x8470FC);
    edx = MEM32(ecx + 8);
    if (CMP_NE(MEM32(edx + 4), 0x30)) goto loc_0025BC7F; /* jne: not equal / not zero */

loc_0025BC4F: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x875820); /* addss */
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    MEMF(0x875820) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CE0))) goto loc_0025BC8A; /* jbe: below or equal (unsigned <=) */

loc_0025BC70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002A3830(); /* call 0x002A3830 */

loc_0025BC77: ;
    eax = MEM32(0x6C0224);
    esp = esp + 4;

loc_0025BC7F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x875820) = xmm0; /* movss */

loc_0025BC8A: ;
    if (CMP_NE(eax, 1)) goto loc_0025BC99; /* jne: not equal / not zero */

loc_0025BC8F: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_0025BC94: ;
    eax = MEM32(0x6C0224);

loc_0025BC99: ;
    if (CMP_EQ(eax, 6)) goto loc_0025BCCA; /* je: equal / zero */

loc_0025BC9E: ;
    if (CMP_EQ(eax, 7)) goto loc_0025BCCA; /* je: equal / zero */

loc_0025BCA3: ;
    if (CMP_EQ(eax, 8)) goto loc_0025BCCA; /* je: equal / zero */

loc_0025BCA8: ;
    PUSH32(esp, 0); sub_00262630(); /* call 0x00262630 */

loc_0025BCAD: ;
    SET_LO8(eax, MEM8(0x849DC0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025BCCA; /* je: equal / zero */

loc_0025BCB6: ;
    PUSH32(esp, 0x779EB8);
    PUSH32(esp, 0); sub_002626C0(); /* call 0x002626C0 */

loc_0025BCC0: ;
    esp = esp + 4;
    MEM8(0x849DC0) = 0;

loc_0025BCCA: ;
    eax = MEM32(0x863D04);
    PUSH32(esp, ebx);
    ebx = 2;
    if (CMP_NE(eax, ebx)) goto loc_0025BCF7; /* jne: not equal / not zero */

loc_0025BCD9: ;
    SET_LO8(eax, MEM8(0x863D10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BCF7; /* jne: not equal / not zero */

loc_0025BCE2: ;
    PUSH32(esp, 0x863D13);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_0025BCEC: ;
    if (TEST_Z(eax, eax)) goto loc_0025BCF7; /* je: equal / zero */

loc_0025BCF0: ;
    MEM8(0x863D10) = 1;

loc_0025BCF7: ;
    SET_LO8(ecx, MEM8(0x863AF8));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(ecx), LO8(ebx))) ? 1 : 0); /* sete */
    MEM32(0x84BE98) = eax;
    PUSH32(esp, 0); sub_0041ADB0(); /* call 0x0041ADB0 */

loc_0025BD0E: ;
    PUSH32(esp, 0); sub_0041AF10(); /* call 0x0041AF10 */

loc_0025BD13: ;
    PUSH32(esp, 0); sub_00419E90(); /* call 0x00419E90 */

loc_0025BD18: ;
    PUSH32(esp, 0); sub_0041B3C0(); /* call 0x0041B3C0 */

loc_0025BD1D: ;
    MEM32(0x86EA2C) = MEM32(0x86EA2C) + 1;
    PUSH32(esp, 0); sub_002581A0(); /* call 0x002581A0 */

loc_0025BD28: ;
    PUSH32(esp, 0); sub_002582B0(); /* call 0x002582B0 */

loc_0025BD2D: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00297A90(); /* call 0x00297A90 */

loc_0025BD37: ;
    PUSH32(esp, 0); sub_00287E00(); /* call 0x00287E00 */

loc_0025BD3C: ;
    PUSH32(esp, 0); sub_0027A2F0(); /* call 0x0027A2F0 */

loc_0025BD41: ;
    PUSH32(esp, 0); sub_00287B10(); /* call 0x00287B10 */

loc_0025BD46: ;
    SET_LO8(eax, MEM8(0x849DB4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BD54; /* jne: not equal / not zero */

loc_0025BD4F: ;
    PUSH32(esp, 0); sub_0025CEA0(); /* call 0x0025CEA0 */

loc_0025BD54: ;
    PUSH32(esp, esi);
    ebx = 0x862C40;
    PUSH32(esp, 0); sub_002963F0(); /* call 0x002963F0 */

loc_0025BD5F: ;
    esi = ebx;
    PUSH32(esp, 0); sub_002975D0(); /* call 0x002975D0 */

loc_0025BD66: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_0025BD80; /* jne: not equal / not zero */

loc_0025BD6F: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0025BD80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x876728);
    PUSH32(esp, 0); sub_00266C20(); /* call 0x00266C20 */

loc_0025BD8B: ;
    esi = 0x8761E8;
    PUSH32(esp, 0); sub_00266B00(); /* call 0x00266B00 */

loc_0025BD95: ;
    PUSH32(esp, 0); sub_00266AB0(); /* call 0x00266AB0 */

loc_0025BD9A: ;
    eax = MEM32(0x863D08);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    edi = 3;
    if (CMP_EQ(eax, 2)) goto loc_0025BDAD; /* je: equal / zero */

loc_0025BDA9: ;
    if (CMP_NE(eax, edi)) goto loc_0025BDC7; /* jne: not equal / not zero */

loc_0025BDAD: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0x862C40);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025BDC2; /* je: equal / zero */

loc_0025BDBB: ;
    PUSH32(esp, 0); sub_002953E0(); /* call 0x002953E0 */

loc_0025BDC0: ;
    goto loc_0025BDC7;

loc_0025BDC2: ;
    PUSH32(esp, 0); sub_00295660(); /* call 0x00295660 */

loc_0025BDC7: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0025BDD3: ;
    if (TEST_Z(eax, eax)) goto loc_0025BDE9; /* je: equal / zero */

loc_0025BDD7: ;
    PUSH32(esp, 0x849E09);
    PUSH32(esp, 0x849E08);
    PUSH32(esp, 0); sub_0026ACB0(); /* call 0x0026ACB0 */

loc_0025BDE6: ;
    esp = esp + 8;

loc_0025BDE9: ;
    SET_LO8(eax, MEM8(0x849E9F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BDF7; /* jne: not equal / not zero */

loc_0025BDF2: ;
    PUSH32(esp, 0); sub_001FF9C0(); /* call 0x001FF9C0 */

loc_0025BDF7: ;
    eax = 0x75A168;
    MEM8(0x849E9F) = 0;
    PUSH32(esp, 0); sub_00265410(); /* call 0x00265410 */

loc_0025BE08: ;
    SET_LO8(eax, MEM8(0x86E988));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BE7B; /* jne: not equal / not zero */

loc_0025BE11: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 2)) goto loc_0025BE7B; /* je: equal / zero */

loc_0025BE1B: ;
    if (CMP_NE(MEM32(0x863D08), edi)) goto loc_0025C95B; /* jne: not equal / not zero */

loc_0025BE27: ;
    if (CMP_NE(eax, 1)) goto loc_0025BE6C; /* jne: not equal / not zero */

loc_0025BE2C: ;
    SET_LO8(eax, MEM8(0x776541));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025BE6C; /* je: equal / zero */

loc_0025BE35: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0025BE3C: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0025BE41: ;
    PUSH32(esp, 0); sub_002662C0(); /* call 0x002662C0 */

loc_0025BE46: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BE60; /* jne: not equal / not zero */

loc_0025BE4A: ;
    eax = 2;
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_0025BE59: ;
    MEM8(0x862C5F) = 0;

loc_0025BE60: ;
    if (CMP_NE(MEM32(0x863D08), edi)) goto loc_0025C95B; /* jne: not equal / not zero */

loc_0025BE6C: ;
    PUSH32(esp, 0); sub_00260410(); /* call 0x00260410 */

loc_0025BE71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0025BE7B: ;
    PUSH32(esp, 0); sub_0028A2A0(); /* call 0x0028A2A0 */

loc_0025BE80: ;
    PUSH32(esp, 0x75A168);
    PUSH32(esp, 0); sub_00265550(); /* call 0x00265550 */

loc_0025BE8A: ;
    SET_LO8(eax, MEM8(0x862C6C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C95B; /* jne: not equal / not zero */

loc_0025BE97: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esi = esi | 0xFFFFFFFFu;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C041; /* je: equal / zero */

loc_0025BEA8: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0025BFCD; /* jle: less or equal (signed <=) */

loc_0025BEB7: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edi = 0x86561C;

loc_0025BED3: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 1)) goto loc_0025BEDF; /* je: equal / zero */

loc_0025BEDA: ;
    if (CMP_NE(eax, 3)) goto loc_0025BEF3; /* jne: not equal / not zero */

loc_0025BEDF: ;
    xmm1 = xmm1 - MEMF(0x648CE0); /* subss */
    /* comiss xmm1, MEMF(edi + -4) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + -4))) goto loc_0025BEF3; /* jbe: below or equal (unsigned <=) */

loc_0025BEED: ;
    MEM32(edi) = 4;

loc_0025BEF3: ;
    /* comiss xmm0, MEMF(edi + -1844) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + -1844))) goto loc_0025BF97; /* jbe: below or equal (unsigned <=) */

loc_0025BF00: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0025BF0E; /* jne: not equal / not zero */

loc_0025BF09: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025BF0E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0025BF56; /* je: equal / zero */

loc_0025BF34: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0025BF56; /* jb: below (unsigned <) */

loc_0025BF3D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025BF47: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025BF4F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0025BF77; /* jne: not equal / not zero */

loc_0025BF56: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025BF68: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025BF70: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0025BF7E; /* je: equal / zero */

loc_0025BF77: ;
    PUSH32(esp, 0); sub_002571E0(); /* call 0x002571E0 */

loc_0025BF7C: ;
    goto loc_0025BF80;

loc_0025BF7E: ;
    eax = 0; /* xor self */

loc_0025BF80: ;
    ecx = MEM32(edi + 0x288);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025BF8E: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    esi = esi | 0xFFFFFFFFu;

loc_0025BF97: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(0x6BE8D0); /* subss */
    /* comiss xmm2, MEMF(edi + -1848) - sets EFLAGS */
    if ((xmm2 <= MEMF(edi + -1848))) goto loc_0025BFB7; /* jbe: below or equal (unsigned <=) */

loc_0025BFB1: ;
    MEM32(edi) = 4;

loc_0025BFB7: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebx++;
    edi = edi + 0xA50;
    if (CMP_L(ebx, edx)) goto loc_0025BED3; /* jl: less (signed <) */

loc_0025BFCD: ;
    SET_LO8(eax, MEM8(0x86E978));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025BFFD; /* jne: not equal / not zero */

loc_0025BFD6: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_0025BFDB: ;
    if (CMP_NE(eax, 2)) goto loc_0025BFFD; /* jne: not equal / not zero */

loc_0025BFE0: ;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = 0x1000;
    MEM8(0x86E978) = 1;
    PUSH32(esp, 0); sub_00421E80(); /* call 0x00421E80 */

loc_0025BFFA: ;
    esp = esp + 8;

loc_0025BFFD: ;
    eax = MEM32(0x86E994);
    if (TEST_S(eax, eax)) goto loc_0025C041; /* jl: less (signed <) */

loc_0025C006: ;
    SET_LO8(ecx, MEM8(0x864EC1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0025C041; /* jne: not equal / not zero */

loc_0025C010: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025C015: ;
    if (TEST_Z(eax, eax)) goto loc_0025C030; /* je: equal / zero */

loc_0025C019: ;
    eax = MEM32(0x86E994);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_0025C024: ;
    esp = esp + 4;
    edi = esi;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004204C0(); /* call 0x004204C0 */

loc_0025C030: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x86E994) = esi;
    MEMF(0x86E998) = xmm0; /* movss */

loc_0025C041: ;
    if (CMP_EQ(MEM32(0x862E64), esi)) goto loc_0025C098; /* je: equal / zero */

loc_0025C049: ;
    fp_push(MEMF(0x862E68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025C05E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025C098; /* jbe: below or equal (unsigned <=) */

loc_0025C06A: ;
    eax = MEM32(0x862E64);
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025C074: ;
    if (TEST_Z(eax, eax)) goto loc_0025C087; /* je: equal / zero */

loc_0025C078: ;
    ecx = MEM32(0x862E64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_0025C084: ;
    esp = esp + 4;

loc_0025C087: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x862E64) = esi;
    MEMF(0x862E68) = xmm0; /* movss */

loc_0025C098: ;
    eax = MEM32(0x86E994);
    if (TEST_S(eax, eax)) goto loc_0025C0F0; /* jl: less (signed <) */

loc_0025C0A1: ;
    fp_push(MEMF(0x86E998)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025C0B6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025C0F0; /* jbe: below or equal (unsigned <=) */

loc_0025C0C2: ;
    eax = MEM32(0x86E994);
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025C0CC: ;
    if (TEST_Z(eax, eax)) goto loc_0025C0DF; /* je: equal / zero */

loc_0025C0D0: ;
    edx = MEM32(0x86E994);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_0025C0DC: ;
    esp = esp + 4;

loc_0025C0DF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x86E994) = esi;
    MEMF(0x86E998) = xmm0; /* movss */

loc_0025C0F0: ;
    eax = MEM32(0x863D08);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(esp + 0x1F) = 0;
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x12) = 0;
    if (CMP_EQ(eax, 2)) goto loc_0025C119; /* je: equal / zero */

loc_0025C110: ;
    if (CMP_NE(eax, 3)) goto loc_0025C267; /* jne: not equal / not zero */

loc_0025C119: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C267; /* jne: not equal / not zero */

loc_0025C126: ;
    SET_LO8(eax, MEM8(0x849DB4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C267; /* jne: not equal / not zero */

loc_0025C133: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_0025C13D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0025C1E3; /* je: equal / zero */

loc_0025C147: ;
    SET_LO8(eax, MEM8(0x862C5E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C1EC; /* jne: not equal / not zero */

loc_0025C154: ;
    SET_LO8(eax, MEM8(0x86EA4C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C238; /* jne: not equal / not zero */

loc_0025C161: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    /* comiss xmm0, MEMF(esi + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x20))) goto loc_0025C19A; /* jbe: below or equal (unsigned <=) */

loc_0025C175: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0025C17C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0025C18A; /* je: equal / zero */

loc_0025C183: ;
    PUSH32(esp, 0); sub_002571E0(); /* call 0x002571E0 */

loc_0025C188: ;
    goto loc_0025C18C;

loc_0025C18A: ;
    eax = 0; /* xor self */

loc_0025C18C: ;
    ecx = MEM32(esi + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025C19A: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x6BE8D4); /* subss */
    /* comiss xmm1, MEMF(esi + 0x1C) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + 0x1C))) goto loc_0025C1B6; /* jbe: below or equal (unsigned <=) */

loc_0025C1B1: ;
    MEM8(esp + 0x11) = 1;

loc_0025C1B6: ;
    xmm0 = xmm0 - MEMF(0x6BE8D0); /* subss */
    /* comiss xmm0, MEMF(esi + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x1C))) goto loc_0025C1E3; /* jbe: below or equal (unsigned <=) */

loc_0025C1C4: ;
    SET_LO8(eax, MEM8(0x862C64));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C1DE; /* jne: not equal / not zero */

loc_0025C1CD: ;
    edi = 0x6011C0;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_0025C1DC: ;
    goto loc_0025C1E3;

loc_0025C1DE: ;
    PUSH32(esp, 0); sub_0025DD40(); /* call 0x0025DD40 */

loc_0025C1E3: ;
    SET_LO8(eax, MEM8(0x862C5E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C22F; /* je: equal / zero */

loc_0025C1EC: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 + MEMF(0x862C68); /* addss */
    xmm1 = MEMF(0x6BE8D0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esp + 0x13) = 1;
    MEMF(0x862C68) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0025C21B; /* jbe: below or equal (unsigned <=) */

loc_0025C216: ;
    MEM8(esp + 0x12) = 1;

loc_0025C21B: ;
    xmm1 = xmm1 + MEMF(0x648D1C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0025C22F; /* jbe: below or equal (unsigned <=) */

loc_0025C228: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_0025C22F: ;
    SET_LO8(eax, MEM8(0x86EA4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C267; /* je: equal / zero */

loc_0025C238: ;
    xmm0 = MEMF(0x86EA50); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    eax = 0x862C40;
    MEMF(0x86EA50) = xmm0; /* movss */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00297570(); /* call 0x00297570 */

loc_0025C25C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C267; /* je: equal / zero */

loc_0025C260: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_0025C267: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025C26C: ;
    fp_push(MEMF(0x86EB58)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0025C28B; /* ja: above (unsigned >) */

loc_0025C280: ;
    SET_LO8(eax, MEM8(0x86EB5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C28F; /* jne: not equal / not zero */

loc_0025C28B: ;
    SET_LO8(eax, MEM8(esp + 0x1F));

loc_0025C28F: ;
    SET_LO8(ecx, MEM8(0x849DB4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0025C30A; /* jne: not equal / not zero */

loc_0025C299: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0025C2A4; /* je: equal / zero */

loc_0025C29D: ;
    ecx = 0x601188;
    goto loc_0025C2DA;

loc_0025C2A4: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0025C2B3; /* je: equal / zero */

loc_0025C2AC: ;
    ecx = 0x60115C;
    goto loc_0025C2DA;

loc_0025C2B3: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0025C2C2; /* je: equal / zero */

loc_0025C2BB: ;
    ecx = 0x60113C;
    goto loc_0025C2DA;

loc_0025C2C2: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0025C2D1; /* je: equal / zero */

loc_0025C2CA: ;
    ecx = 0x60110C;
    goto loc_0025C2DA;

loc_0025C2D1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C30A; /* je: equal / zero */

loc_0025C2D5: ;
    ecx = 0x6010E0;

loc_0025C2DA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025C2E1: ;
    if (TEST_Z(eax, eax)) goto loc_0025C30A; /* je: equal / zero */

loc_0025C2E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5FAE34);
    edi = eax;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_0025C2F3: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0025C2FE: ;
    ebx = eax;
    eax = 0x13;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0025C30A: ;
    eax = MEM32(0x863D08);
    if (CMP_EQ(eax, 2)) goto loc_0025C319; /* je: equal / zero */

loc_0025C314: ;
    if (CMP_NE(eax, 3)) goto loc_0025C323; /* jne: not equal / not zero */

loc_0025C319: ;
    PUSH32(esp, 0); sub_00264560(); /* call 0x00264560 */

loc_0025C31E: ;
    PUSH32(esp, 0); sub_00261F90(); /* call 0x00261F90 */

loc_0025C323: ;
    SET_LO8(ecx, MEM8(0x864EC1));
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x864EC2) = 0;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0025C3DD; /* jle: less or equal (signed <=) */

loc_0025C33A: ;
    esi = 0x864EC8;
    /* nop */

loc_0025C340: ;
    eax = MEM32(esi + 0x9E0);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ebp = esi;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0025C360; /* je: equal / zero */

loc_0025C34D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_0025C353: ;
    esp = esp + 4;
    MEM32(esi + 0x9E0) = 0xFFFFFFFFu;

loc_0025C360: ;
    if (CMP_NE(MEM32(esi + 0x754), 4)) goto loc_0025C3B5; /* jne: not equal / not zero */

loc_0025C369: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0025C372: ;
    edx = MEM32(0x849800);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x930);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0025C38A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x3C;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0025C399: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_0025C39F: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0x862C40);
    eax = edi;
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_0025C3AE: ;
    edi--;
    esi = esi - 0xA50;

loc_0025C3B5: ;
    if (CMP_NE(MEM32(ebp + 0x75C), 3)) goto loc_0025C3C5; /* jne: not equal / not zero */

loc_0025C3BE: ;
    MEM8(0x864EC2) = 0;

loc_0025C3C5: ;
    SET_LO8(ecx, MEM8(0x864EC1));
    edx = SX8(LO8(ecx));
    edi++;
    esi = esi + 0xA50;
    if (CMP_L(edi, edx)) goto loc_0025C340; /* jl: less (signed <) */

loc_0025C3DD: ;
    eax = MEM32(0x863D08);
    eax--;
    if (CMP_A(eax, 3)) goto loc_0025C65B; /* ja: above (unsigned >) */

loc_0025C3EC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x25C968); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025C3F3u) goto loc_0025C3F3;
    if (_jt == 0x0025C43Au) goto loc_0025C43A;
    if (_jt == 0x0025C469u) goto loc_0025C469;
    if (_jt == 0x0025C547u) goto loc_0025C547;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025C3F3: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x862E5C) - sets EFLAGS */
    if ((xmm0 < MEMF(0x862E5C))) goto loc_0025C65B; /* jb: below (unsigned <) */

loc_0025C406: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601090;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0025C412: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0025C41B: ;
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 1);
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_0025C432: ;
    esp = esp + 4;
    goto loc_0025C65B;

loc_0025C43A: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C65B; /* jne: not equal / not zero */

loc_0025C447: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x862E60) - sets EFLAGS */
    if ((xmm0 < MEMF(0x862E60))) goto loc_0025C65B; /* jb: below (unsigned <) */

loc_0025C45A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_0025C461: ;
    esp = esp + 4;
    goto loc_0025C65B;

loc_0025C469: ;
    eax = MEM32(0x87581C);
    eax++;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(0x87581C) = eax;
    if (CMP_LE(eax, 8)) goto loc_0025C53D; /* jle: less or equal (signed <=) */

loc_0025C47D: ;
    ebp = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(0x87581C) = ebp;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0025C53D; /* jle: less or equal (signed <=) */

loc_0025C48D: ;
    ebx = 0x8658A4;

loc_0025C492: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0025C4A0; /* jne: not equal / not zero */

loc_0025C49B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025C4A0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0025C4E8; /* je: equal / zero */

loc_0025C4C6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0025C4E8; /* jb: below (unsigned <) */

loc_0025C4CF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025C4D9: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025C4E1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0025C509; /* jne: not equal / not zero */

loc_0025C4E8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025C4FA: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025C502: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0025C512; /* je: equal / zero */

loc_0025C509: ;
    PUSH32(esp, 0); sub_002336C0(); /* call 0x002336C0 */

loc_0025C50E: ;
    esi = eax;
    goto loc_0025C514;

loc_0025C512: ;
    esi = 0; /* xor self */

loc_0025C514: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_0025C51D: ;
    eax = MEM32(ebx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025C527: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    ebx = ebx + 0xA50;
    if (CMP_L(ebp, ecx)) goto loc_0025C492; /* jl: less (signed <) */

loc_0025C53D: ;
    PUSH32(esp, 0); sub_0028A4C0(); /* call 0x0028A4C0 */

loc_0025C542: ;
    goto loc_0025C65B;

loc_0025C547: ;
    PUSH32(esp, 0); sub_0028A4C0(); /* call 0x0028A4C0 */

loc_0025C54C: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0025C65B; /* je: equal / zero */

loc_0025C55A: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0025C65B; /* je: equal / zero */

loc_0025C563: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0025C65B; /* je: equal / zero */

loc_0025C56C: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, 0); /* xor self */
    eax = eax + 0xC38;
    edx = 4;
    /* nop */

loc_0025C580: ;
    esi = MEM32(eax + -1744);
    if (TEST_Z(esi, esi)) goto loc_0025C58C; /* je: equal / zero */

loc_0025C58A: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_0025C58C: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0025C593; /* je: equal / zero */

loc_0025C591: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_0025C593: ;
    esi = MEM32(eax + 0x6D0);
    if (TEST_Z(esi, esi)) goto loc_0025C59F; /* je: equal / zero */

loc_0025C59D: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_0025C59F: ;
    esi = MEM32(eax + 0xDA0);
    if (TEST_Z(esi, esi)) goto loc_0025C5AB; /* je: equal / zero */

loc_0025C5A9: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_0025C5AB: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_0025C580; /* jne: not equal / not zero */

loc_0025C5B3: ;
    if (CMP_LE(LO8(ecx), MEM8(0x864634))) goto loc_0025C5C1; /* jle: less or equal (signed <=) */

loc_0025C5BB: ;
    MEM8(0x864634) = LO8(ecx);

loc_0025C5C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0038F940(); /* call 0x0038F940 */

loc_0025C5C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003B7500(); /* call 0x003B7500 */

loc_0025C5CF: ;
    SET_LO8(eax, MEM8(0x849DB4));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025C603; /* jne: not equal / not zero */

loc_0025C5DB: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0025C5E0: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0025C603; /* jne: not equal / not zero */

loc_0025C5E5: ;
    if (CMP_NE(MEM32(eax + 0x560), 0xFFFFFFFFu)) goto loc_0025C603; /* jne: not equal / not zero */

loc_0025C5EE: ;
    if (CMP_EQ(MEM32(0x863D08), 2)) goto loc_0025C603; /* je: equal / zero */

loc_0025C5F7: ;
    PUSH32(esp, 0); sub_0027D8D0(); /* call 0x0027D8D0 */

loc_0025C5FC: ;
    PUSH32(esp, 0); sub_00261500(); /* call 0x00261500 */

loc_0025C601: ;
    goto loc_0025C60A;

loc_0025C603: ;
    MEM8(0x863B01) = 0;

loc_0025C60A: ;
    PUSH32(esp, 0); sub_00261950(); /* call 0x00261950 */

loc_0025C60F: ;
    SET_LO8(eax, MEM8(0x776541));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C656; /* je: equal / zero */

loc_0025C618: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C656; /* je: equal / zero */

loc_0025C621: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0025C638; /* je: equal / zero */

loc_0025C62A: ;
    SET_LO8(eax, MEM8(0x84981F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C638; /* je: equal / zero */

loc_0025C633: ;
    PUSH32(esp, 0); sub_0025B840(); /* call 0x0025B840 */

loc_0025C638: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0025C63F: ;
    ecx = eax;
    PUSH32(esp, 0); sub_001C7670(); /* call 0x001C7670 */

loc_0025C646: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C651; /* je: equal / zero */

loc_0025C64A: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0025C651: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0025C656: ;
    PUSH32(esp, 0); sub_00260410(); /* call 0x00260410 */

loc_0025C65B: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0025B6C0(); /* call 0x0025B6C0 */

loc_0025C662: ;
    PUSH32(esp, 0); sub_00285490(); /* call 0x00285490 */

loc_0025C667: ;
    (void)0; /* cmp MEM32(0x849DBC), edi - flags set for next jcc */
    MEM8(0x863B01) = 0;
    if (CMP_EQ(MEM32(0x849DBC), edi)) goto loc_0025C686; /* je: equal / zero */

loc_0025C676: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_0025C67D: ;
    esp = esp + 4;
    MEM32(0x849DBC) = edi;

loc_0025C686: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C6CE; /* je: equal / zero */

loc_0025C68F: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_0025C694: ;
    if (CMP_NE(eax, 2)) goto loc_0025C6CE; /* jne: not equal / not zero */

loc_0025C699: ;
    eax = esp + 0x20;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_00289250(); /* call 0x00289250 */

loc_0025C6A6: ;
    esi = MEM32(0x862CB0);
    PUSH32(esp, 0); sub_00420770(); /* call 0x00420770 */

loc_0025C6B1: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_004207D0(); /* call 0x004207D0 */

loc_0025C6BA: ;
    esi = MEM32(0x862CB4);
    PUSH32(esp, 0); sub_00420830(); /* call 0x00420830 */

loc_0025C6C5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_00420890(); /* call 0x00420890 */

loc_0025C6CE: ;
    eax = MEM32(0x863D04);
    ebp = 0; /* xor self */
    if (CMP_NE(eax, 3)) goto loc_0025C6EE; /* jne: not equal / not zero */

loc_0025C6DA: ;
    eax = MEM32(0x863D08);
    if (CMP_EQ(eax, 3)) goto loc_0025C6E9; /* je: equal / zero */

loc_0025C6E4: ;
    if (CMP_NE(eax, 2)) goto loc_0025C6EE; /* jne: not equal / not zero */

loc_0025C6E9: ;
    ebp = 1;

loc_0025C6EE: ;
    esi = 0; /* xor self */
    ebx = 0x82E5A0;
    goto loc_0025C700;

    /* nop */
    edi = edi;

loc_0025C700: ;
    if (CMP_NE(MEM32(esi * 4 + 0x849E54), 2)) goto loc_0025C7DA; /* jne: not equal / not zero */

loc_0025C70E: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_0025C75A; /* je: equal / zero */

loc_0025C717: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi, edi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xBA1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025C72E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_0025C75A; /* je: equal / zero */

loc_0025C73A: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xBA2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025C752: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0025C75A: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebx + 8) = ebp;
    if (CMP_EQ(eax, edi)) goto loc_0025C79F; /* je: equal / zero */

loc_0025C761: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi, edi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xB5D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025C778: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_0025C79F; /* je: equal / zero */

loc_0025C784: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xB5E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0025C79C: ;
    esp = esp + 0x10;

loc_0025C79F: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebx) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025C7B4; /* je: equal / zero */

loc_0025C7AA: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_0025C7AF: ;
    if (CMP_NE(eax, 2)) goto loc_0025C7DA; /* jne: not equal / not zero */

loc_0025C7B4: ;
    eax = MEM32(0x86E990);
    if (CMP_L(eax, edi)) goto loc_0025C7CE; /* jl: less (signed <) */

loc_0025C7BD: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025C7C2: ;
    if (TEST_Z(eax, eax)) goto loc_0025C7CE; /* je: equal / zero */

loc_0025C7C6: ;
    edi = MEM32(0x86E990);
    goto loc_0025C7D1;

loc_0025C7CE: ;
    edi = edi | 0xFFFFFFFFu;

loc_0025C7D1: ;
    eax = esi;
    PUSH32(esp, 0); sub_004204C0(); /* call 0x004204C0 */

loc_0025C7D8: ;
    edi = 0; /* xor self */

loc_0025C7DA: ;
    esi++;
    ebx = ebx + 0x68;
    if (CMP_L(esi, 2)) goto loc_0025C700; /* jl: less (signed <) */

loc_0025C7E7: ;
    xmm1 = MEMF(0x862CB8); /* movss */
    xmm1 = xmm1 + MEMF(0x648D1C); /* addss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0025C95A; /* jbe: below or equal (unsigned <=) */

loc_0025C806: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x862CB8) = xmm0; /* movss */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0025C95A; /* jle: less or equal (signed <=) */

loc_0025C81D: ;
    ebx = 0x864EC8;

loc_0025C822: ;
    if (CMP_NE(MEM32(0x84A19C), edi)) goto loc_0025C82F; /* jne: not equal / not zero */

loc_0025C82A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025C82F: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, edi)) goto loc_0025C8A5; /* je: equal / zero */

loc_0025C854: ;
    if (CMP_B(MEM32(eax + 0x80), 0x3C)) goto loc_0025C8A5; /* jb: below (unsigned <) */

loc_0025C85D: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x20) = 0x10;
    if (CMP_EQ(ecx, edi)) goto loc_0025C879; /* je: equal / zero */

loc_0025C86F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0025C874: ;
    esp = esp + 8;
    goto loc_0025C896;

loc_0025C879: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_0025C886: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0025C886; /* ja: above (unsigned >) */

loc_0025C891: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0025C896: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025C89E: ;
    esp = esp + 8;
    if (CMP_NE(eax, edi)) goto loc_0025C8F4; /* jne: not equal / not zero */

loc_0025C8A5: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x20) = 0x10;
    if (CMP_EQ(ecx, edi)) goto loc_0025C8C8; /* je: equal / zero */

loc_0025C8BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0025C8C3: ;
    esp = esp + 8;
    goto loc_0025C8E5;

loc_0025C8C8: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_0025C8D5: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0025C8D5; /* ja: above (unsigned >) */

loc_0025C8E0: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0025C8E5: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025C8ED: ;
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) goto loc_0025C926; /* je: equal / zero */

loc_0025C8F4: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x20) = edi;
    MEM32(eax + 0x28) = edi;
    MEM32(eax + 0x2C) = edi;
    MEM8(eax + 0x30) = 0;
    MEM16(eax + 0x32) = LO16(edi);
    MEM32(eax) = 0x600798;
    goto loc_0025C928;

loc_0025C926: ;
    eax = 0; /* xor self */

loc_0025C928: ;
    MEM8(eax + 0x34) = 0;
    edx = MEM32(ebx + 0x30);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(eax);
    MEM8(eax + 0x35) = 0;
    ecx = MEM32(ebx + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025C944: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    ebx = ebx + 0xA50;
    if (CMP_L(ebp, edx)) goto loc_0025C822; /* jl: less (signed <) */

loc_0025C95A: ;
    POP32(esp, ebp);

loc_0025C95B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0025C95E: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025C9A0
 * Original: 0x0025C9A0 - 0x0025C9CE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C9A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x8470FC);
    ebx = MEM32(eax + 8);
    eax = MEM32(0x849800);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(eax, ebp)) { sub_0025C9CE(); return; } /* jne: not equal / not zero */

loc_0025C9C4: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0025CB10
 * Original: 0x0025CB10 - 0x0025CB39 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CB10: ;
    SET_LO8(ecx, 0); /* xor self */
    esp = esp - 8;
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    edx = 1;
    if (CMP_EQ(LO8(eax), LO8(ecx))) { sub_0025CB39(); return; } /* je: equal / zero */

loc_0025CB1E: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_0025CB30; /* je: equal / zero */

loc_0025CB28: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(esp) = LO8(ecx);
    if (CMP_NE(eax, 2)) goto loc_0025CB33; /* jne: not equal / not zero */

loc_0025CB30: ;
    MEM8(esp) = LO8(edx);

loc_0025CB33: ;
    MEM8(esp + 4) = LO8(edx);
    g_seh_ebp = ebp; sub_0025CB4A(); return; /* tail jmp 0x0025CB4A */

}

/**
 * sub_0025CB70
 * Original: 0x0025CB70 - 0x0025CBCC (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CB70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025CB70: ;
    eax = MEM32(0x84BEE8);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    eax = 0x22;
    /* nop */

loc_0025CB80: ;
    SET_LO8(edx, MEM8(eax + 0x875CE3));
    MEM8(eax + 0x875CE4) = LO8(edx);
    eax--;
    if (CMP_GE(eax, 1)) goto loc_0025CB80; /* jge: greater or equal (signed >=) */

loc_0025CB92: ;
    MEM8(0x875CE4) = LO8(ecx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    /* nop */

loc_0025CBA0: ;
    SET_LO8(ebx, MEM8(ecx + 0x875CE5));
    SET_LO8(edx, MEM8(ecx + 0x875CE4));
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    SET_LO8(edx, LO8(edx) | MEM8(ecx + 0x875CE6));
    SET_LO8(edx, LO8(edx) | MEM8(ecx + 0x875CE8));
    SET_LO8(edx, LO8(edx) | MEM8(ecx + 0x875CE7));
    ecx = ecx + 5;
    SET_LO8(eax, LO8(eax) | LO8(edx));
    if (CMP_L(ecx, 0x23)) goto loc_0025CBA0; /* jl: less (signed <) */

loc_0025CBCA: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CBD0
 * Original: 0x0025CBD0 - 0x0025CBDE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025CBD0: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(0x7FA1F8), 0x47)) { sub_0025CBDE(); return; } /* jne: not equal / not zero */

loc_0025CBDA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CD80
 * Original: 0x0025CD80 - 0x0025CE91 (273 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025CD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(0x849DB5) = 0;
    PUSH32(esp, 0); sub_0025CB70(); /* call 0x0025CB70 */

loc_0025CD8E: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(0x849870));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025CDAB; /* jne: not equal / not zero */

loc_0025CD99: ;
    SET_LO8(eax, MEM8(0x8498B8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025CDB4; /* jne: not equal / not zero */

loc_0025CDA2: ;
    PUSH32(esp, 0); sub_0004DFA0(); /* call 0x0004DFA0 */

loc_0025CDA7: ;
    if (TEST_NZ(eax, eax)) goto loc_0025CDB4; /* jne: not equal / not zero */

loc_0025CDAB: ;
    SET_LO8(eax, MEM8(0x8498D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025CDFD; /* je: equal / zero */

loc_0025CDB4: ;
    SET_LO8(eax, MEM8(0x875818));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025CE8E; /* je: equal / zero */

loc_0025CDC1: ;
    eax = MEM32(0x8470FC);
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(edx, edx)) goto loc_0025CDE9; /* je: equal / zero */

loc_0025CDCF: ;
    esi = MEM32(0x87C820);
    if (CMP_LE(esi & esi, 0)) goto loc_0025CDE9; /* jle: less or equal (signed <=) */

loc_0025CDD9: ;
    edx = MEM32(eax + 0xC);
    if (CMP_NE(edx, esi)) goto loc_0025CDE9; /* jne: not equal / not zero */

loc_0025CDE0: ;
    edx--;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0); sub_0004E310(); /* call 0x0004E310 */

loc_0025CDE9: ;
    POP32(esp, esi);
    MEM32(0x87C820) = 0;
    MEM8(0x875818) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0025CDFD: ;
    if (CMP_EQ(MEM32(0x84BEFC), 5)) goto loc_0025CE6A; /* je: equal / zero */

loc_0025CE06: ;
    SET_LO8(eax, MEM8(0x875819));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025CE13; /* jne: not equal / not zero */

loc_0025CE0F: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0025CE71; /* jne: not equal / not zero */

loc_0025CE13: ;
    SET_LO8(eax, MEM8(0x875818));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025CE29; /* je: equal / zero */

loc_0025CE1C: ;
    edx = MEM32(0x87C820);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0004DF70(); /* call 0x0004DF70 */

loc_0025CE29: ;
    MEM8(0x875818) = 0;
    PUSH32(esp, 0); sub_0025CBD0(); /* call 0x0025CBD0 */

loc_0025CE35: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x875819) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025CE71; /* je: equal / zero */

loc_0025CE3E: ;
    SET_LO8(eax, MEM8(0x875818));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025CE8E; /* jne: not equal / not zero */

loc_0025CE47: ;
    eax = MEM32(0x849DD4);
    if (TEST_NZ(eax, eax)) goto loc_0025CE8E; /* jne: not equal / not zero */

loc_0025CE50: ;
    esi = MEM32(0x8470FC);
    PUSH32(esp, 0); sub_0004E440(); /* call 0x0004E440 */

loc_0025CE5B: ;
    POP32(esp, esi);
    MEM32(0x87C820) = eax;
    MEM8(0x875818) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0025CE6A: ;
    MEM8(0x875819) = 0;

loc_0025CE71: ;
    SET_LO8(eax, MEM8(0x875818));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025CE8E; /* je: equal / zero */

loc_0025CE7A: ;
    edx = MEM32(0x87C820);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0004DF70(); /* call 0x0004DF70 */

loc_0025CE87: ;
    MEM8(0x875818) = 0;

loc_0025CE8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CEA0
 * Original: 0x0025CEA0 - 0x0025D1B7 (791 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CEA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849DD4);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(eax, ebx)) goto loc_0025CF2B; /* jne: not equal / not zero */

loc_0025CEB0: ;
    PUSH32(esp, 0);
    eax = 0x2D3;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025CEBC: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025CF1A; /* je: equal / zero */

loc_0025CEC2: ;
    eax--;
    if ((eax != 0)) goto loc_0025CF26; /* jne: not equal / not zero */

loc_0025CEC5: ;
    MEM32(0x849DD4) = 0;

loc_0025CECF: ;
    PUSH32(esp, 0); sub_0025CD80(); /* call 0x0025CD80 */

loc_0025CED4: ;
    if (CMP_NE(MEM32(0x84BEFC), 5)) goto loc_0025D1B4; /* jne: not equal / not zero */

loc_0025CEE1: ;
    if (CMP_NE(MEM8(0x6BEDEC), 4)) goto loc_0025CF58; /* jne: not equal / not zero */

loc_0025CEEA: ;
    if (CMP_EQ(MEM32(0x84BF00), 0x1512F0)) goto loc_0025D163; /* je: equal / zero */

loc_0025CEFA: ;
    MEM8(0x6BEDEC) = 7;
    PUSH32(esp, 0); sub_0027AFD0(); /* call 0x0027AFD0 */

loc_0025CF06: ;
    MEM32(0x6BEDE8) = ebx;
    PUSH32(esp, 0); sub_0041FE10(); /* call 0x0041FE10 */

loc_0025CF11: ;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0041FF10(); return; /* tail jmp 0x0041FF10 */

loc_0025CF1A: ;
    MEM32(0x849DD4) = 2;
    goto loc_0025CF38;

loc_0025CF26: ;
    eax = MEM32(0x849DD4);

loc_0025CF2B: ;
    if (TEST_Z(eax, eax)) goto loc_0025CECF; /* je: equal / zero */

loc_0025CF2F: ;
    if (CMP_NE(eax, 2)) goto loc_0025D1B4; /* jne: not equal / not zero */

loc_0025CF38: ;
    eax = MEM32(0x6BED98);
    if (TEST_NZ(eax, eax)) goto loc_0025CF4F; /* jne: not equal / not zero */

loc_0025CF41: ;
    PUSH32(esp, 0); sub_00256ED0(); /* call 0x00256ED0 */

loc_0025CF46: ;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0041FE10(); return; /* tail jmp 0x0041FE10 */

loc_0025CF4F: ;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00256F70(); return; /* tail jmp 0x00256F70 */

loc_0025CF58: ;
    eax = MEM32(0x863D04);
    PUSH32(esp, esi);
    esi = 3;
    if (CMP_EQ(eax, esi)) goto loc_0025CF93; /* je: equal / zero */

loc_0025CF67: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025CF93; /* jne: not equal / not zero */

loc_0025CF70: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(0x6BEDE8) = ebx;
    PUSH32(esp, 0); sub_0026CB10(); /* call 0x0026CB10 */

loc_0025CF81: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_0041FE10(); /* call 0x0041FE10 */

loc_0025CF89: ;
    POP32(esp, esi);
    MEM8(0x862D2D) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025CF93: ;
    eax = MEM32(0x84BF00);
    if (CMP_G(eax, 0x80151200u)) goto loc_0025D176; /* jg: greater (signed >) */

loc_0025CFA3: ;
    if (CMP_EQ(eax, 0x80151200u)) goto loc_0025D129; /* je: equal / zero */

loc_0025CFA9: ;
    eax = eax + 0x7FEAF000;
    if (CMP_A(eax, 6)) goto loc_0025D1B3; /* ja: above (unsigned >) */

loc_0025CFB7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x25D1B8); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0025CFBEu) goto loc_0025CFBE;
    if (_jt == 0x0025CFEBu) goto loc_0025CFEB;
    if (_jt == 0x0025D04Eu) goto loc_0025D04E;
    if (_jt == 0x0025D069u) goto loc_0025D069;
    if (_jt == 0x0025D085u) goto loc_0025D085;
    if (_jt == 0x0025D0B8u) goto loc_0025D0B8;
    if (_jt == 0x0025D0FCu) goto loc_0025D0FC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025CFBE: ;
    PUSH32(esp, 0);
    eax = 0x28F;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025CFCA: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025D13E; /* je: equal / zero */

loc_0025CFD4: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025CFDB: ;
    POP32(esp, esi);
    MEM32(0x849DD4) = ebx;
    MEM32(0x6BED98) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025CFEB: ;
    PUSH32(esp, 0);
    eax = 0x28F;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025CFF7: ;
    esp = esp + 4;
    eax--;
    if ((eax != 0)) goto loc_0025CFD4; /* jne: not equal / not zero */

loc_0025CFFD: ;
    (void)0; /* cmp MEM32(0x863D04), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x863D04), esi)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(0x6BEDE8) = ebx;
    PUSH32(esp, 0); sub_0026CB10(); /* call 0x0026CB10 */

loc_0025D01E: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_0041FE10(); /* call 0x0041FE10 */

loc_0025D026: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_0025D1B3; /* je: equal / zero */

loc_0025D033: ;
    PUSH32(esp, 0x86422C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0025D03D: ;
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(0x86422C) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025D04E: ;
    PUSH32(esp, 0);
    eax = 0x2BB;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D05A: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025CFDB; /* je: equal / zero */

loc_0025D064: ;
    goto loc_0025D10B;

loc_0025D069: ;
    PUSH32(esp, 0);
    eax = 0x297;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D075: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0025D1B3; /* je: equal / zero */

loc_0025D080: ;
    goto loc_0025D13E;

loc_0025D085: ;
    PUSH32(esp, 0);
    eax = 0x293;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D091: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025D0AE; /* je: equal / zero */

loc_0025D097: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025D09E: ;
    PUSH32(esp, 0); sub_0041FE10(); /* call 0x0041FE10 */

loc_0025D0A3: ;
    POP32(esp, esi);
    MEM8(0x862C41) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025D0AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002A3B70(); return; /* tail jmp 0x002A3B70 */

loc_0025D0B8: ;
    PUSH32(esp, 0);
    eax = 0x2A7;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D0C4: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025D0E5; /* je: equal / zero */

loc_0025D0CA: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025D0D1: ;
    POP32(esp, esi);
    MEM32(0x849DD4) = ebx;
    MEM32(0x6BED98) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025D0E5: ;
    (void)0; /* cmp MEM32(0x863D04), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x863D04), esi)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    goto loc_0025D153;

loc_0025D0FC: ;
    PUSH32(esp, 0);
    eax = 0x29B;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D108: ;
    esp = esp + 4;

loc_0025D10B: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025D112: ;
    (void)0; /* cmp MEM32(0x863D04), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x863D04), esi)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    MEM8(esp + 0xC) = LO8(ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    goto loc_0025D153;

loc_0025D129: ;
    PUSH32(esp, 0);
    eax = 0x2B7;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D135: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025D16C; /* je: equal / zero */

loc_0025D13B: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025D13E: ;
    (void)0; /* cmp MEM32(0x863D04), esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(0x863D04), esi)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    MEM8(esp + 0xC) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);

loc_0025D153: ;
    PUSH32(esp, ebx);
    MEM32(0x6BEDE8) = ebx;
    PUSH32(esp, 0); sub_0026CB10(); /* call 0x0026CB10 */

loc_0025D15F: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_0025D163: ;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0041FE10(); return; /* tail jmp 0x0041FE10 */

loc_0025D16C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00256F20(); return; /* tail jmp 0x00256F20 */

loc_0025D176: ;
    if (CMP_NE(eax, 0x1512F0)) goto loc_0025D1B3; /* jne: not equal / not zero */

loc_0025D17D: ;
    esi = 0; /* xor self */
    /* nop */

loc_0025D180: ;
    PUSH32(esp, 0); sub_0041FCF0(); /* call 0x0041FCF0 */

loc_0025D185: ;
    if (CMP_NE(eax, 0x1512F0)) goto loc_0025D1AD; /* jne: not equal / not zero */

loc_0025D18C: ;
    PUSH32(esp, 0);
    eax = 0x2A3;
    PUSH32(esp, 0); sub_0025C9A0(); /* call 0x0025C9A0 */

loc_0025D198: ;
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0025D1A8; /* je: equal / zero */

loc_0025D19E: ;
    eax--;
    if ((eax != 0)) goto loc_0025D1AD; /* jne: not equal / not zero */

loc_0025D1A1: ;
    PUSH32(esp, 0); sub_0041FE10(); /* call 0x0041FE10 */

loc_0025D1A6: ;
    goto loc_0025D1AD;

loc_0025D1A8: ;
    PUSH32(esp, 0); sub_00256F20(); /* call 0x00256F20 */

loc_0025D1AD: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_0025D180; /* jl: less (signed <) */

loc_0025D1B3: ;
    POP32(esp, esi);

loc_0025D1B4: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D330
 * Original: 0x0025D330 - 0x0025D371 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0025D330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    SET_LO8(eax, MEM8(0x876758));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 1;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0025D35B; /* jne: not equal / not zero */

loc_0025D34B: ;
    MEM32(0x876758) = MEM32(0x876758) | ebx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0025D35B: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0025D371(); return; } /* jne: not equal / not zero */

loc_0025D364: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) { sub_0025D371(); return; } /* jne: not equal / not zero */

loc_0025D36D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0025D373(); return; /* tail jmp 0x0025D373 */

}

/**
 * sub_0025D590
 * Original: 0x0025D590 - 0x0025D643 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025D590: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025D5A3; /* jne: not equal / not zero */

loc_0025D59E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025D5A3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025D5EB; /* je: equal / zero */

loc_0025D5C9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0025D5EB; /* jb: below (unsigned <) */

loc_0025D5D2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025D5DC: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025D5E4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025D60C; /* jne: not equal / not zero */

loc_0025D5EB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025D5FD: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025D605: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025D643(); return; } /* je: equal / zero */

loc_0025D60C: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
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
    MEM32(eax) = 0x6008D0;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D650
 * Original: 0x0025D650 - 0x0025D703 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025D650: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025D663; /* jne: not equal / not zero */

loc_0025D65E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025D663: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025D6AB; /* je: equal / zero */

loc_0025D689: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0025D6AB; /* jb: below (unsigned <) */

loc_0025D692: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025D69C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025D6A4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025D6CC; /* jne: not equal / not zero */

loc_0025D6AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025D6BD: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025D6C5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025D703(); return; } /* je: equal / zero */

loc_0025D6CC: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
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
    MEM32(eax) = 0x6005F0;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025D710
 * Original: 0x0025D710 - 0x0025D78E (126 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D710(void)
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

loc_0025D710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEM8(0x6BF17A) = 1;
    PUSH32(esp, 0); sub_00264480(); /* call 0x00264480 */

loc_0025D722: ;
    eax = MEM32(0x863D08);
    edi = 1;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_0025D73A; /* jne: not equal / not zero */

loc_0025D732: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0025D751; /* je: equal / zero */

loc_0025D73A: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025D74B: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025D751: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025D756: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    MEMF(0x862E5C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00418320(); /* call 0x00418320 */

loc_0025D768: ;
    esp = esp + 4;
    PUSH32(esp, 0xFFFFFFFFu);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00295E90(); /* call 0x00295E90 */

loc_0025D77B: ;
    SET_LO8(ecx, MEM8(0x84BEA0));
    esi = MEM32(esi);
    eax = eax + 0x41;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) { sub_0025D78E(); return; } /* je: equal / zero */

loc_0025D78A: ;
    MEM32(eax) = esi;
    g_seh_ebp = ebp; sub_0025D796(); return; /* tail jmp 0x0025D796 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025D8F0
 * Original: 0x0025D8F0 - 0x0025DB6D (637 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D8F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0025D8F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    eax = MEM32(0x863D08);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0025D910; /* jne: not equal / not zero */

loc_0025D8FD: ;
    if (CMP_EQ(eax, 1)) goto loc_0025D910; /* je: equal / zero */

loc_0025D902: ;
    if (CMP_EQ(eax, 3)) goto loc_0025D910; /* je: equal / zero */

loc_0025D907: ;
    if (CMP_NE(eax, 2)) goto loc_0025DB6A; /* jne: not equal / not zero */

loc_0025D910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_0025D914: ;
    if (CMP_NE(MEM32(esi * 4 + 0x849E54), 2)) goto loc_0025D940; /* jne: not equal / not zero */

loc_0025D91E: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00420460(); /* call 0x00420460 */

loc_0025D926: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00420340(); /* call 0x00420340 */

loc_0025D92E: ;
    esp = esp + 8;
    edi = edi | 0xFFFFFFFFu;
    eax = esi;
    PUSH32(esp, 0); sub_004204C0(); /* call 0x004204C0 */

loc_0025D93B: ;
    eax = MEM32(0x863D08);

loc_0025D940: ;
    esi++;
    if (CMP_L(esi, 2)) goto loc_0025D914; /* jl: less (signed <) */

loc_0025D946: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0025DAD0; /* je: equal / zero */

loc_0025D953: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_0025D99F; /* je: equal / zero */

loc_0025D95B: ;
    if (CMP_NE(MEM8(0x86E978), 1)) goto loc_0025D974; /* jne: not equal / not zero */

loc_0025D964: ;
    eax = MEM32(0x86E990);
    MEM8(0x86E978) = LO8(ebx);
    PUSH32(esp, 0); sub_00421FB0(); /* call 0x00421FB0 */

loc_0025D974: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_0025D97A: ;
    esp = esp + 4;
    MEM32(0x6BED9C) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_0025D98C: ;
    if (TEST_Z(eax, eax)) goto loc_0025D995; /* je: equal / zero */

loc_0025D990: ;
    PUSH32(esp, 0); sub_00420C70(); /* call 0x00420C70 */

loc_0025D995: ;
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_0025D99A: ;
    goto loc_0025DB57;

loc_0025D99F: ;
    if (CMP_NE(MEM8(0x863D11), LO8(ebx))) goto loc_0025D9AF; /* jne: not equal / not zero */

loc_0025D9A7: ;
    if (CMP_EQ(MEM8(0x75E9A0), LO8(ebx))) goto loc_0025D9BB; /* je: equal / zero */

loc_0025D9AF: ;
    MEM8(0x75E9A0) = LO8(ebx);
    MEM8(0x863D11) = LO8(ebx);

loc_0025D9BB: ;
    if (CMP_NE(eax, 4)) goto loc_0025D9C8; /* jne: not equal / not zero */

loc_0025D9C0: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0025D9E3; /* je: equal / zero */

loc_0025D9C8: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = 4;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025D9DD: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025D9E3: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025D9E8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEMF(0x862E60) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0025DA01; /* jne: not equal / not zero */

loc_0025D9FC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025DA01: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025DA49; /* je: equal / zero */

loc_0025DA27: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0025DA49; /* jb: below (unsigned <) */

loc_0025DA30: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025DA3A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025DA42: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025DA6A; /* jne: not equal / not zero */

loc_0025DA49: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025DA5B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025DA63: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0025DAAF; /* je: equal / zero */

loc_0025DA6A: ;
    ecx = MEM32(0x862CA8);
    edx = MEM32(0x862CAC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x603D90;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esi = eax;
    goto loc_0025DAB1;

loc_0025DAAF: ;
    esi = 0; /* xor self */

loc_0025DAB1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0025DABD: ;
    ecx = MEM32(0x86E99C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0025DACB: ;
    goto loc_0025DB57;

loc_0025DAD0: ;
    PUSH32(esp, 0); sub_00264480(); /* call 0x00264480 */

loc_0025DAD5: ;
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_0025DADA: ;
    (void)0; /* cmp MEM32(0x863D08), ebx - flags set for next jcc */
    MEM8(0x862C5C) = LO8(ebx);
    if (CMP_NE(MEM32(0x863D08), ebx)) goto loc_0025DAF0; /* jne: not equal / not zero */

loc_0025DAE8: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0025DB50; /* je: equal / zero */

loc_0025DAF0: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = ebx;
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0025DB08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0025DB15: ;
    edi = MEM32(0x828B48);
    esi = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - esi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0025DB32: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0025DB44; /* jge: greater or equal (signed >=) */

loc_0025DB3E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0025DB44: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025DB50: ;
    MEM8(0x862D91) = 0xFF;

loc_0025DB57: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEM8(0x86EA4C) = LO8(ebx);
    MEMF(0x86EA50) = xmm0; /* movss */
    POP32(esp, esi);

loc_0025DB6A: ;
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
 * sub_0025DB70
 * Original: 0x0025DB70 - 0x0025DC35 (197 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DB70(void)
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

loc_0025DB70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00264480(); /* call 0x00264480 */

loc_0025DB76: ;
    SET_LO8(eax, MEM8(esp + 8));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0025DB85; /* je: equal / zero */

loc_0025DB80: ;
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_0025DB85: ;
    (void)0; /* cmp MEM8(0x863D11), LO8(ebx) - flags set for next jcc */
    MEM8(0x862C5C) = LO8(ebx);
    if (CMP_NE(MEM8(0x863D11), LO8(ebx))) goto loc_0025DB9B; /* jne: not equal / not zero */

loc_0025DB93: ;
    if (CMP_EQ(MEM8(0x75E9A0), LO8(ebx))) goto loc_0025DBA7; /* je: equal / zero */

loc_0025DB9B: ;
    MEM8(0x75E9A0) = LO8(ebx);
    MEM8(0x863D11) = LO8(ebx);

loc_0025DBA7: ;
    if (CMP_EQ(MEM32(0x863D08), ebx)) goto loc_0025DBC6; /* je: equal / zero */

loc_0025DBAF: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = ebx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DBC0: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0025DBC6: ;
    MEM8(0x862D91) = 0xFF;
    eax = 0x86EC7A;

loc_0025DBD2: ;
    MEM16(eax) = 0xFFFE;
    eax = eax + 0xC;
    if (CMP_L(eax, 0x86ECDA)) goto loc_0025DBD2; /* jl: less (signed <) */

loc_0025DBE1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x86EA50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM8(0x86EA4C) = LO8(ebx);
    MEM8(0x862C5E) = LO8(ebx);
    MEMF(0x862C68) = xmm0; /* movss */
    eax = 0; /* xor self */
    /* nop */

loc_0025DC10: ;
    if (CMP_EQ(MEM8(eax + 0x86E980), LO8(ebx))) goto loc_0025DC1E; /* je: equal / zero */

loc_0025DC18: ;
    MEM8(eax + 0x86E980) = LO8(ebx);

loc_0025DC1E: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0025DC10; /* jl: less (signed <) */

loc_0025DC24: ;
    MEM8(0x86E9A2) = LO8(ebx);
    MEM16(0x86E9A0) = 0xFFFE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025DC40
 * Original: 0x0025DC40 - 0x0025DCAA (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DC40(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0025DC40: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DC45: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648F24)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025DC60; /* jbe: below or equal (unsigned <=) */

loc_0025DC59: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DC5E: ;
    /* fstp st(0) */

loc_0025DC60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DC66: ;
    /* fstp st(0) */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DC6D: ;
    MEMF(0x875814) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0025DC82: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0025DCA8; /* je: equal / zero */

loc_0025DC88: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DC8D: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esi + 0x30);
    SET_LO8(eax, MEM8(esi + 0x76E));
    ecx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0x30) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025DCA8; /* je: equal / zero */

loc_0025DCA1: ;
    MEM8(esi + 0x76E) = 0;

loc_0025DCA8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025DCB0
 * Original: 0x0025DCB0 - 0x0025DD3C (140 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DCB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0025DCB0: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DCB5: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648F24)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025DCD0; /* jbe: below or equal (unsigned <=) */

loc_0025DCC9: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DCCE: ;
    /* fstp st(0) */

loc_0025DCD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DCD6: ;
    /* fstp st(0) */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0025DCE7: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0025DD2F; /* je: equal / zero */

loc_0025DCED: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0025DD0F; /* je: equal / zero */

loc_0025DCF2: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DCF7: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648F24)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0025DD0F; /* jbe: below or equal (unsigned <=) */

loc_0025DD08: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DD0D: ;
    /* fstp st(0) */

loc_0025DD0F: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DD14: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1;
    MEM8(esi + 0xA4C) = 1;
    MEM8(esi + 0xA4E) = 0;
    MEM8(esi + 0xA4F) = 0;

loc_0025DD2F: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0025DD34: ;
    MEMF(0x875810) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025DD40
 * Original: 0x0025DD40 - 0x0025DDED (173 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DD40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025DD40: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0025DD70; /* jle: less or equal (signed <=) */

loc_0025DD57: ;
    edi = 0x864EC8;
    /* nop */

loc_0025DD60: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_0025DD72; /* jne: not equal / not zero */

loc_0025DD65: ;
    eax++;
    edi = edi + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_0025DD60; /* jl: less (signed <) */

loc_0025DD70: ;
    edi = 0; /* xor self */

loc_0025DD72: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0025DD7B: ;
    PUSH32(esp, eax);
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x934);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0025DD92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x2C;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0025DDA1: ;
    esp = esp + 0x18;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0025DDAD: ;
    ecx = edi;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    esi = edx;
    esi = esi >> 0x1F;
    PUSH32(esp, edi);
    esi = esi + edx;
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_0025DDCC: ;
    esp = esp + 4;
    PUSH32(esp, 0x862C40);
    eax = esi;
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_0025DDDB: ;
    esi = MEM32(0x863D04);
    if (CMP_NE(esi, 1)) { sub_0025DDED(); return; } /* jne: not equal / not zero */

loc_0025DDE6: ;
    ebp = ebp | 0xFFFFFFFFu;
    eax = ebp;
    g_seh_ebp = ebp; sub_0025DE04(); return; /* tail jmp 0x0025DE04 */

}

/**
 * sub_0025E1C0
 * Original: 0x0025E1C0 - 0x0025E24D (141 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E1C0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0025E1D6; /* je: equal / zero */

loc_0025E1D0: ;
    MEM8(0x862C65) = LO8(ebx);

loc_0025E1D6: ;
    eax = 0; /* xor self */
    MEM16(esp + 0x28) = LO16(ebx);
    ecx = 0x1F;
    edi = esp + 0x2A;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = (uint32_t)(int32_t)SMEM8(0x862C65);
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = (uint32_t)(int32_t)SMEM8(0x862C64);
    esi = eax;
    MEM32(0x6BED9C) = eax;
    eax = MEM32(0x863D04);
    esi = esi - ecx;
    ebp = 2;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(0x862CB0) = esi;
    MEM32(0x862CB4) = ecx;
    if (CMP_NE(eax, ebp)) { sub_0025E24D(); return; } /* jne: not equal / not zero */

loc_0025E21B: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D67A(); /* call 0x0048D67A */

loc_0025E22A: ;
    if (TEST_NZ(eax, eax)) goto loc_0025E245; /* jne: not equal / not zero */

loc_0025E22E: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00421910(); /* call 0x00421910 */

loc_0025E23D: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_0025EBEB(); return; /* tail jmp 0x0025EBEB */

loc_0025E245: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0025EBEB(); return; /* tail jmp 0x0025EBEB */

}

/**
 * sub_0025ED40
 * Original: 0x0025ED40 - 0x0025EDF2 (178 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ED40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025ED40: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025ED53; /* jne: not equal / not zero */

loc_0025ED4E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025ED53: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025ED9B; /* je: equal / zero */

loc_0025ED79: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0025ED9B; /* jb: below (unsigned <) */

loc_0025ED82: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025ED8C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025ED94: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025EDBC; /* jne: not equal / not zero */

loc_0025ED9B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025EDAD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025EDB5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025EDF2(); return; } /* je: equal / zero */

loc_0025EDBC: ;
    POP32(esp, edi);
    ecx = ecx | 0xFFFFFFFFu;
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
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x600AF8;
    MEM16(eax + 0x34) = LO16(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EE00
 * Original: 0x0025EE00 - 0x0025EE1B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE00(void)
{

loc_0025EE00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025EE0F: ;
    esp = esp + 4;
    MEM16(edi + 0x34) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EE20
 * Original: 0x0025EE20 - 0x0025EFEF (463 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025EE20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ebp + 0x34));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0025EE35: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x862C5C));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0025EFE4; /* je: equal / zero */

loc_0025EE46: ;
    if (CMP_EQ(esi, ebx)) goto loc_0025EFE4; /* je: equal / zero */

loc_0025EE4E: ;
    eax = MEM32(esi + 0x9E0);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(eax, edi)) goto loc_0025EE6A; /* je: equal / zero */

loc_0025EE5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_0025EE61: ;
    esp = esp + 4;
    MEM32(esi + 0x9E0) = edi;

loc_0025EE6A: ;
    if (CMP_NE(MEM8(esi + 0x1A), LO8(ebx))) goto loc_0025EFE4; /* jne: not equal / not zero */

loc_0025EE73: ;
    eax = MEM32(esi + 0x9DC);
    MEM32(esi + 0x9DC) = edi;
    MEM32(esi + 0x9E0) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x9DC) = ecx;
    MEM8(esi + 0x1A) = 1;
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0025EEB7; /* jle: less or equal (signed <=) */

loc_0025EE9F: ;
    edx = 0x864EE2;

loc_0025EEA4: ;
    if (CMP_EQ(MEM8(edx), LO8(ebx))) goto loc_0025EFE4; /* je: equal / zero */

loc_0025EEAC: ;
    ecx++;
    edx = edx + 0xA50;
    if (CMP_L(ecx, eax)) goto loc_0025EEA4; /* jl: less (signed <) */

loc_0025EEB7: ;
    ebp = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0025EFB2; /* jle: less or equal (signed <=) */

loc_0025EEC1: ;
    MEM32(esp + 0x10) = 0x8658A4;
    /* nop */

loc_0025EED0: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0025EEDD; /* jne: not equal / not zero */

loc_0025EED8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025EEDD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025EF25; /* je: equal / zero */

loc_0025EF03: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0025EF25; /* jb: below (unsigned <) */

loc_0025EF0C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025EF16: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025EF1E: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025EF46; /* jne: not equal / not zero */

loc_0025EF25: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025EF37: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025EF3F: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0025EF79; /* je: equal / zero */

loc_0025EF46: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x600800;
    esi = eax;
    goto loc_0025EF7B;

loc_0025EF79: ;
    esi = 0; /* xor self */

loc_0025EF7B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0025EF87: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0025EF95: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    edi = edi + 0xA50;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(ebp, ecx)) goto loc_0025EED0; /* jl: less (signed <) */

loc_0025EFAF: ;
    edi = edi | 0xFFFFFFFFu;

loc_0025EFB2: ;
    eax = MEM32(0x86E994);
    if (CMP_L(eax, ebx)) goto loc_0025EFE4; /* jl: less (signed <) */

loc_0025EFBB: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025EFC0: ;
    if (TEST_Z(eax, eax)) goto loc_0025EFE4; /* je: equal / zero */

loc_0025EFC4: ;
    edx = MEM32(0x86E994);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_0025EFD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    MEM32(0x86E994) = edi;
    MEMF(0x86E998) = xmm0; /* movss */

loc_0025EFE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EFF0
 * Original: 0x0025EFF0 - 0x0025F09F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EFF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025EFF0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025F003; /* jne: not equal / not zero */

loc_0025EFFE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025F003: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025F04B; /* je: equal / zero */

loc_0025F029: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0025F04B; /* jb: below (unsigned <) */

loc_0025F032: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F03C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F044: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025F06C; /* jne: not equal / not zero */

loc_0025F04B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F05D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F065: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025F09F(); return; } /* je: equal / zero */

loc_0025F06C: ;
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
    MEM32(eax) = 0x600800;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F0B0
 * Original: 0x0025F0B0 - 0x0025F0C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0B0(void)
{

loc_0025F0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F0BE: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F0D0
 * Original: 0x0025F0D0 - 0x0025F0E3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0D0(void)
{

loc_0025F0D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F0DC: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F0F0
 * Original: 0x0025F0F0 - 0x0025F12C (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0025F0F0: ;
    eax = MEM32(0x862E64);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0025F126; /* je: equal / zero */

loc_0025F0FA: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0025F0FF: ;
    if (TEST_Z(eax, eax)) goto loc_0025F111; /* je: equal / zero */

loc_0025F103: ;
    eax = MEM32(0x862E64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_0025F10E: ;
    esp = esp + 4;

loc_0025F111: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x862E64) = 0xFFFFFFFFu;
    MEMF(0x862E68) = xmm0; /* movss */

loc_0025F126: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F130
 * Original: 0x0025F130 - 0x0025F1B0 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F130: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0025F13E; /* jne: not equal / not zero */

loc_0025F139: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025F13E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0025F188; /* je: equal / zero */

loc_0025F166: ;
    if (CMP_B(MEM32(esi + 0x80), 0x68)) goto loc_0025F188; /* jb: below (unsigned <) */

loc_0025F16F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F179: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F181: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0025F1A9; /* jne: not equal / not zero */

loc_0025F188: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F19A: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F1A2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0025F1B0(); return; } /* je: equal / zero */

loc_0025F1A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002572F0(); return; /* tail jmp 0x002572F0 */

}

/**
 * sub_0025F1C0
 * Original: 0x0025F1C0 - 0x0025F25A (154 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F1D3: ;
    eax = ZX8(MEM8(edi + 0x35));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F1DE: ;
    eax = ZX8(MEM8(edi + 0x36));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F1E9: ;
    eax = ZX8(MEM8(edi + 0x37));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F1F4: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    esp = esp + 0x10;
    if (CMP_NE(LO8(eax), 1)) goto loc_0025F255; /* jne: not equal / not zero */

loc_0025F1FE: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F20D: ;
    PUSH32(esp, 0x20);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F216: ;
    ebp = edi + 0x40;
    eax = ebp;
    esp = esp + 8;
    edx = eax + 1;

loc_0025F221: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0025F221; /* jne: not equal / not zero */

loc_0025F228: ;
    eax = eax - edx;
    PUSH32(esp, 5);
    ebx = eax;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F233: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0025F253; /* jle: less or equal (signed <=) */

loc_0025F23C: ;
    /* nop */

loc_0025F240: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F24B: ;
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0025F240; /* jl: less (signed <) */

loc_0025F253: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025F255: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F260
 * Original: 0x0025F260 - 0x0025F2EF (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F26F: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F279: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x35) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F283: ;
    PUSH32(esp, 4);
    MEM8(edi + 0x36) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F28D: ;
    MEM8(edi + 0x37) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x35));
    esp = esp + 0x10;
    if (CMP_NE(LO8(eax), 1)) goto loc_0025F2EA; /* jne: not equal / not zero */

loc_0025F29A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F2A3: ;
    PUSH32(esp, 0x20);
    ebx = 0; /* xor self */
    ebp = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F2AE: ;
    ecx = 0; /* xor self */
    eax = eax | ebx;
    ecx = ecx | ebp;
    PUSH32(esp, 5);
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F2C1: ;
    ebp = eax;
    esp = esp + 0xC;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0025F2E3; /* jle: less or equal (signed <=) */

loc_0025F2CA: ;
    /* nop */

loc_0025F2D0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F2D7: ;
    esp = esp + 4;
    MEM8(edi + ebx + 0x40) = LO8(eax);
    ebx++;
    if (CMP_L(ebx, ebp)) goto loc_0025F2D0; /* jl: less (signed <) */

loc_0025F2E3: ;
    MEM8(edi + ebp + 0x40) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025F2EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F2F0
 * Original: 0x0025F2F0 - 0x0025F4F4 (516 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025F2F0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0025F305: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0025F4E9; /* je: equal / zero */

loc_0025F30F: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0025F48B; /* je: equal / zero */

loc_0025F31C: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(LO8(eax), 1)) goto loc_0025F43A; /* jne: not equal / not zero */

loc_0025F328: ;
    eax = esp + 0x10;
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_00289250(); /* call 0x00289250 */

loc_0025F335: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_G(ecx, MEM32(0x862CB0))) goto loc_0025F47A; /* jg: greater (signed >) */

loc_0025F345: ;
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x758));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(edx))) goto loc_0025F47A; /* jne: not equal / not zero */

loc_0025F35D: ;
    PUSH32(esp, 0); sub_002892C0(); /* call 0x002892C0 */

loc_0025F362: ;
    ecx = ZX8(MEM8(edi + 0x34));
    MEM32(ebx + ecx * 4 + 4) = eax;
    esi = ZX8(MEM8(edi + 0x34));
    ecx = edi + 0x40;
    PUSH32(esp, 0); sub_00299E30(); /* call 0x00299E30 */

loc_0025F376: ;
    edx = MEM32(edi + 0x3C);
    eax = MEM32(edi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x34));
    ecx = ebx;
    PUSH32(esp, 0); sub_0029A780(); /* call 0x0029A780 */

loc_0025F389: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0025F390: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0025F3A5; /* je: equal / zero */

loc_0025F397: ;
    SET_LO8(edx, MEM8(edi + 0x34));
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00257340(); /* call 0x00257340 */

loc_0025F3A1: ;
    esi = eax;
    goto loc_0025F3A7;

loc_0025F3A5: ;
    esi = 0; /* xor self */

loc_0025F3A7: ;
    ecx = ZX8(MEM8(edi + 0x34));
    SET_LO8(edx, MEM8(ebx + ecx * 4 + 4));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x36) = LO8(edx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0025F3BE: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0025F3C9: ;
    PUSH32(esp, 0); sub_00289450(); /* call 0x00289450 */

loc_0025F3CE: ;
    edx = ZX8(MEM8(edi + 0x34));
    MEM8(edx + ebx + 0x14) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(ebx + 0x758));
    SET_LO8(edx, 1);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(ebx + 0x758) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x75A));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEM8(ebx + 0x75A) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(edx, MEM8(ebx + 0x18));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(ebx + 0x18) = LO8(edx);
    eax = ZX8(MEM8(edi + 0x34));
    if (TEST_S(eax, eax)) goto loc_0025F47A; /* jl: less (signed <) */

loc_0025F419: ;
    if (CMP_GE(eax, 2)) goto loc_0025F47A; /* jge: greater or equal (signed >=) */

loc_0025F41E: ;
    ecx = ZX8(MEM8(edi + 0x37));
    MEM32(ebx + eax * 4 + 0x9E8) = ecx;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_0025F42E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0025F43A: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0025F47A; /* jne: not equal / not zero */

loc_0025F43E: ;
    esi = ZX8(MEM8(edi + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x758));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0025F47A; /* je: equal / zero */

loc_0025F455: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEM8(ebx + 0x758) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(ebx + 0x75A));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(ebx + 0x75A) = LO8(ecx);

loc_0025F47A: ;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_0025F47F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0025F48B: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025F4E9; /* jne: not equal / not zero */

loc_0025F492: ;
    ecx = ZX8(MEM8(edi + 0x34));
    SET_LO8(eax, MEM8(0x86E980));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(eax))) goto loc_0025F4E4; /* jne: not equal / not zero */

loc_0025F4A6: ;
    SET_LO8(ebx, MEM8(0x86E980));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, 1);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    MEM8(0x86E980) = LO8(ebx);
    SET_LO8(ecx, MEM8(edi + 0x34));
    SET_LO8(ebx, MEM8(0x86E982));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = 0; /* xor self */
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    MEM8(0x86E982) = LO8(ebx);
    SET_LO8(ecx, MEM8(edi + 0x36));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = ZX8(MEM8(edi + 0x34));
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEM32(ecx * 4 + 0x862CC0) = eax;

loc_0025F4E4: ;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_0025F4E9: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F500
 * Original: 0x0025F500 - 0x0025F5AF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025F500: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025F513; /* jne: not equal / not zero */

loc_0025F50E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025F513: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025F55B; /* je: equal / zero */

loc_0025F539: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0025F55B; /* jb: below (unsigned <) */

loc_0025F542: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F54C: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F554: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025F57C; /* jne: not equal / not zero */

loc_0025F55B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F56D: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F575: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025F5AF(); return; } /* je: equal / zero */

loc_0025F57C: ;
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
    MEM32(eax) = 0x600658;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F5C0
 * Original: 0x0025F5C0 - 0x0025F616 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F5C0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0025F5C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F5D3: ;
    eax = ZX8(MEM8(edi + 0x35));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F5DE: ;
    PUSH32(esp, 0xE);
    fp_push(MEMF(edi + 0x38)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0025F5E8: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F5ED: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x3E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F5F8: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x40);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F603: ;
    eax = ZX8(MEM8(edi + 0x3C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F60E: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0025F620
 * Original: 0x0025F620 - 0x0025F690 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F620(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0025F620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F62F: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 4)) goto loc_0025F639; /* je: equal / zero */

loc_0025F636: ;
    eax = eax | 0xFFFFFFF8u;

loc_0025F639: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F643: ;
    PUSH32(esp, 0xE);
    MEM8(edi + 0x35) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F64D: ;
    esp = esp + 8;
    if (TEST_Z(HI8(eax), 0x20)) goto loc_0025F65A; /* je: equal / zero */

loc_0025F655: ;
    eax = eax | 0xFFFFC000u;

loc_0025F65A: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xE);
    MEMF(edi + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F66A: ;
    PUSH32(esp, 0xE);
    MEM16(edi + 0x3E) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F675: ;
    PUSH32(esp, 1);
    MEM16(edi + 0x40) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F680: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(edi + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F7E0
 * Original: 0x0025F7E0 - 0x0025F898 (184 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F7E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025F7E0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025F7F3; /* jne: not equal / not zero */

loc_0025F7EE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025F7F3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025F83B; /* je: equal / zero */

loc_0025F819: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0025F83B; /* jb: below (unsigned <) */

loc_0025F822: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F82C: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F834: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025F85C; /* jne: not equal / not zero */

loc_0025F83B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025F84D: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025F855: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025F898(); return; } /* je: equal / zero */

loc_0025F85C: ;
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
    POP32(esp, edi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600D00;
    POP32(esp, esi);
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F8A0
 * Original: 0x0025F8A0 - 0x0025F8C5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F8A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    eax = ZX8(MEM8(ebx + 0x44));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025F8B5: ;
    ecx = MEM32(ebx + 0x38);
    ebp = 0; /* xor self */
    esp = esp + 4;
    if (CMP_NE(ecx, ebp)) { sub_0025F8C5(); return; } /* jne: not equal / not zero */

loc_0025F8C1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0025F8CD(); return; /* tail jmp 0x0025F8CD */

}

/**
 * sub_0025F960
 * Original: 0x0025F960 - 0x0025FA6F (271 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025F960: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F974: ;
    PUSH32(esp, 5);
    MEM8(edi + 0x44) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F97E: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ebx = eax;
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    edi = edi + 0x34;
    ecx = 0; /* xor self */
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0); sub_002649E0(); /* call 0x002649E0 */

loc_0025F9AA: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0025FA65; /* jle: less or equal (signed <=) */

loc_0025F9B2: ;
    MEM32(esp + 0x24) = ebx;
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_0025F9C0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F9C7: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 8)) goto loc_0025F9D4; /* je: equal / zero */

loc_0025F9CF: ;
    eax = eax | 0xFFFFF000u;

loc_0025F9D4: ;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F9DF: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0025F9EB; /* jns: not sign (positive) */

loc_0025F9E6: ;
    eax = eax | 0xFFFF0000u;

loc_0025F9EB: ;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025F9F6: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0025FA02; /* jns: not sign (positive) */

loc_0025F9FD: ;
    eax = eax | 0xFFFF0000u;

loc_0025FA02: ;
    edx = MEM32(edi + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM16(esp + 0x10) = LO16(eax);
    if (TEST_NZ(edx, edx)) goto loc_0025FA12; /* jne: not equal / not zero */

loc_0025FA0E: ;
    ecx = 0; /* xor self */
    goto loc_0025FA1A;

loc_0025FA12: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 4);

loc_0025FA1A: ;
    if (TEST_Z(edx, edx)) goto loc_0025FA46; /* je: equal / zero */

loc_0025FA1E: ;
    eax = MEM32(edi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 4);
    if (CMP_AE(ecx, eax)) goto loc_0025FA46; /* jae: above or equal (unsigned >=) */

loc_0025FA2A: ;
    ebx = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_0034A1B0(); /* call 0x0034A1B0 */

loc_0025FA3B: ;
    esp = esp + 0x10;
    ebx = ebx + 0x10;
    MEM32(edi + 8) = ebx;
    goto loc_0025FA5B;

loc_0025FA46: ;
    eax = MEM32(edi + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    edx = edi;
    PUSH32(esp, 0); sub_00264B80(); /* call 0x00264B80 */

loc_0025FA5B: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    if ((MEM32(esp + 0x24) != 0)) goto loc_0025F9C0; /* jne: not equal / not zero */

loc_0025FA65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FA70
 * Original: 0x0025FA70 - 0x0025FC69 (505 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025FA70: ;
    esp = esp - 0x1C8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ebp;

loc_0025FAA4: ;
    edx = MEM32(ecx + 0x38);
    if (CMP_EQ(edx, ebp)) { sub_0025FC69(); return; } /* je: equal / zero */

loc_0025FAAF: ;
    eax = MEM32(ecx + 0x3C);
    eax = eax - edx;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax >> 4);
    if (CMP_AE(edx, eax)) { sub_0025FC69(); return; } /* jae: above or equal (unsigned >=) */

loc_0025FAC3: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 0x14);
    eax = eax + ecx;
    MEM8(esp + 0xD8) = 0;
    MEM8(esp + 0x157) = 0;
    SET_LO16(edi, MEM16(eax));
    ecx = 0x862C40;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    ebx = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0025FAF9: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0025FB4A; /* je: equal / zero */

loc_0025FAFF: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0025FB08: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    edx = esp + 0x160;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0025FB18: ;
    eax = 0; /* xor self */
    /* nop */

loc_0025FB20: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x158));
    MEM8(esp + eax + 0xD8) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0025FB20; /* jne: not equal / not zero */

loc_0025FB33: ;
    SET_LO8(eax, MEM8(esi));
    ebx = MEM32(esi + 0x9E8);
    ebp = MEM32(esi + 4);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x12) = (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0; /* setne */
    goto loc_0025FBC8;

loc_0025FB4A: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0025FB5E; /* je: equal / zero */

loc_0025FB53: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_0025FB61; /* jne: not equal / not zero */

loc_0025FB5E: ;
    eax = eax | 0xFFFFFFFFu;

loc_0025FB61: ;
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(LO16(eax), MEM16(ecx))) goto loc_0025FBC8; /* jne: not equal / not zero */

loc_0025FB6A: ;
    SET_LO8(ecx, MEM8(0x862C5C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x12) = (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0; /* setne */
    ecx = 0; /* xor self */
    esi = esp + 0xD8;
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0025FB8A: ;
    (void)0; /* cmp MEM32(0x863D04), 3 - flags set for next jcc */
    ebp = MEM32(0x862CC0);
    esi = MEM32(0x862CD0);
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0025FBC1; /* jne: not equal / not zero */

loc_0025FB9F: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_0025FBC1; /* jne: not equal / not zero */

loc_0025FBA8: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_0025FBB7: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ebx = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0025FBC8; /* jne: not equal / not zero */

loc_0025FBC1: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x11B7);

loc_0025FBC8: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(eax + ecx + 8);
    edi = MEM32(eax + ecx + 4);
    eax = eax + ecx;
    PUSH32(esp, 0x7F);
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0025FBF5: ;
    (void)0; /* cmp ebp, 1 - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(esp + 0xD0) = LO8(ecx);
    MEM32(esp + 0xC8) = edi;
    MEM32(esp + 0xCC) = esi;
    MEM8(esp + 0xD1) = 0;
    MEM8(esp + 0xD2) = LO8(edx);
    MEM32(esp + 0xD4) = 0;
    ecx = esp + 0x44;
    eax = esp + 0x34;
    if (CMP_EQ(ebp, 1)) goto loc_0025FC3D; /* je: equal / zero */

loc_0025FC39: ;
    eax = esp + 0x24;

loc_0025FC3D: ;
    PUSH32(esp, 0); sub_0022D760(); /* call 0x0022D760 */

loc_0025FC42: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x28);
    ecx++;
    eax = eax + 0x10;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    ebp = 0; /* xor self */
    goto loc_0025FAA4;

}

/**
 * sub_0025FD10
 * Original: 0x0025FD10 - 0x0025FDC2 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025FD10: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025FD23; /* jne: not equal / not zero */

loc_0025FD1E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025FD23: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025FD6B; /* je: equal / zero */

loc_0025FD49: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0025FD6B; /* jb: below (unsigned <) */

loc_0025FD52: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025FD5C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025FD64: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025FD8C; /* jne: not equal / not zero */

loc_0025FD6B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025FD7D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025FD85: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025FDC2(); return; } /* je: equal / zero */

loc_0025FD8C: ;
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
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600D68;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025FDD0
 * Original: 0x0025FDD0 - 0x0025FDE6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FDD0(void)
{

loc_0025FDD0: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025FDDF: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FDF0
 * Original: 0x0025FDF0 - 0x0025FE11 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0025FDF0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0025FE10; /* jne: not equal / not zero */

loc_0025FDFE: ;
    xmm0 = (float)(int32_t)MEM32(ecx + 0x34); /* cvtsi2ss */
    MEMF(0x849C30) = xmm0; /* movss */
    MEM8(0x864EBC) = LO8(eax);

loc_0025FE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025FE20
 * Original: 0x0025FE20 - 0x0025FED9 (185 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FE20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025FE20: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0025FE33; /* jne: not equal / not zero */

loc_0025FE2E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0025FE33: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0025FE7B; /* je: equal / zero */

loc_0025FE59: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0025FE7B; /* jb: below (unsigned <) */

loc_0025FE62: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025FE6C: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025FE74: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0025FE9C; /* jne: not equal / not zero */

loc_0025FE7B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0025FE8D: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0025FE95: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0025FED9(); return; } /* je: equal / zero */

loc_0025FE9C: ;
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
    MEM8(eax + 0x34) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5F6AF0;
    MEM32(eax + 0x38) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025FEE0
 * Original: 0x0025FEE0 - 0x0025FF05 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FEE0(void)
{

loc_0025FEE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025FEF3: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0025FEFD: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FF10
 * Original: 0x0025FF10 - 0x0025FF34 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FF10(void)
{

loc_0025FF10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025FF1F: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0025FF29: ;
    esp = esp + 8;
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025FF40
 * Original: 0x0025FF40 - 0x002600F5 (437 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025FF40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0025FF40: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260047; /* je: equal / zero */

loc_0025FF52: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0025FF60: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_002600EC; /* je: equal / zero */

loc_0025FF6A: ;
    edi = ZX8(MEM8(esi + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x75B));
    edx = 1;
    ecx = edi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0025FF8B; /* je: equal / zero */

loc_0025FF81: ;
    eax = ZX8(MEM8(edi + ebx + 0x76C));
    goto loc_0025FF8D;

loc_0025FF8B: ;
    eax = 0; /* xor self */

loc_0025FF8D: ;
    ecx = MEM32(ebx + edi * 4 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_0025FF97: ;
    ecx = ZX8(MEM8(esi + 0x34));
    esp = esp + 4;
    if (TEST_S(ecx, ecx)) goto loc_0025FFCD; /* jl: less (signed <) */

loc_0025FFA2: ;
    if (CMP_GE(ecx, 2)) goto loc_0025FFCD; /* jge: greater or equal (signed >=) */

loc_0025FFA7: ;
    (void)0; /* cmp MEM32(ebx + ecx * 4 + 0xA3C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(ebx + ecx * 4 + 0xA3C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0025FFCD; /* je: equal / zero */

loc_0025FFB6: ;
    ecx = MEM32(ebx + ecx * 4 + 0xA3C);
    edx = MEM32(esi + 0x38);
    MEM32(ecx * 4 + 0x7761A0) = edx;
    MEM8(ecx + 0x7761F4) = LO8(eax);

loc_0025FFCD: ;
    edi = ZX8(MEM8(esi + 0x34));
    MEM8(edi + ebx + 0x76C) = LO8(eax);
    SET_LO8(edx, MEM8(ebx + 0x75B));
    SET_LO8(eax, 1);
    ecx = edi;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(ebx + 0x75B) = LO8(edx);
    ecx = ZX8(MEM8(esi + 0x34));
    edx = MEM32(esi + 0x38);
    MEM32(ebx + ecx * 4 + 4) = edx;
    MEM8(0x862E58) = 1;
    eax = ZX8(MEM8(esi + 0x34));
    if (TEST_S(eax, eax)) goto loc_002600EC; /* jl: less (signed <) */

loc_0026000A: ;
    if (CMP_GE(eax, 2)) goto loc_002600EC; /* jge: greater or equal (signed >=) */

loc_00260013: ;
    (void)0; /* cmp MEM32(ebx + eax * 4 + 0xA3C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(ebx + eax * 4 + 0xA3C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002600EC; /* je: equal / zero */

loc_00260026: ;
    eax = ZX8(MEM8(esi + 0x34));
    edi = ZX8(MEM8(eax + ebx + 0x76C));
    ebx = MEM32(ebx + eax * 4 + 0xA3C);
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_0026003E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00260047: ;
    eax = ZX8(MEM8(esi + 0x34));
    ecx = MEM32(eax * 4 + 0x862CC0);
    if (CMP_EQ(ecx, MEM32(esi + 0x38))) goto loc_002600EC; /* je: equal / zero */

loc_0026005B: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_002600EC; /* je: equal / zero */

loc_0026006B: ;
    eax = ZX8(MEM8(esi + 0x34));
    SET_LO8(ecx, MEM8(eax + 0x864EBF));
    edx = MEM32(eax * 4 + 0x862CC0);
    eax = ZX8(LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_00260085: ;
    MEM8(edi + 0x7761F4) = LO8(eax);
    ecx = ZX8(MEM8(esi + 0x34));
    MEM8(ecx + 0x864EBF) = LO8(eax);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x86E983));
    SET_LO8(edx, 1);
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    SET_LO8(eax, MEM8(0x862CA0));
    MEM8(0x86E983) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x34));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(0x862CA0) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x34));
    ecx = MEM32(esi + 0x38);
    MEM32(eax * 4 + 0x862CC0) = ecx;
    edx = MEM32(esi + 0x38);
    MEM32(edi * 4 + 0x7761A0) = edx;
    eax = ZX8(MEM8(esi + 0x34));
    edi = ZX8(MEM8(eax + 0x864EBF));
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_002600EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00260100
 * Original: 0x00260100 - 0x002601B6 (182 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260100(void)
{
    int _flags = 0; /* fallback flag var */

loc_00260100: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00260113; /* jne: not equal / not zero */

loc_0026010E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00260113: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026015B; /* je: equal / zero */

loc_00260139: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0026015B; /* jb: below (unsigned <) */

loc_00260142: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026014C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260154: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026017C; /* jne: not equal / not zero */

loc_0026015B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026016D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260175: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002601B6(); return; } /* je: equal / zero */

loc_0026017C: ;
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
    MEM8(eax + 0x35) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5F6A88;
    MEM8(eax + 0x34) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002601C0
 * Original: 0x002601C0 - 0x002601E6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002601C0(void)
{

loc_002601C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002601D3: ;
    eax = ZX8(MEM8(edi + 0x35));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002601DE: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002601F0
 * Original: 0x002601F0 - 0x00260214 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002601F0(void)
{

loc_002601F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002601FF: ;
    PUSH32(esp, 4);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260209: ;
    esp = esp + 8;
    MEM8(edi + 0x35) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260220
 * Original: 0x00260220 - 0x0026040E (494 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260220: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    PUSH32(esp, esi);
    eax = 0x862C40;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00260239: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00260403; /* je: equal / zero */

loc_00260247: ;
    eax = ZX8(MEM8(edi + 0x34));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0026027F; /* je: equal / zero */

loc_00260250: ;
    eax--;
    if ((eax == 0)) goto loc_0026026C; /* je: equal / zero */

loc_00260253: ;
    eax--;
    if ((eax != 0)) goto loc_00260403; /* jne: not equal / not zero */

loc_0026025A: ;
    POP32(esp, edi);
    MEM8(0x86E982) = 0;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0026026C: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    POP32(esp, edi);
    MEM8(0x86E982) = LO8(eax);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0026027F: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260403; /* je: equal / zero */

loc_0026028C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edi + 0x35));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002603AC; /* je: equal / zero */

loc_00260298: ;
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM8(0x862C84);
    if (CMP_LE(eax & eax, 0)) goto loc_002602DC; /* jle: less or equal (signed <=) */

loc_002602AD: ;
    ecx = 0x8658A4;
    edx = eax;

loc_002602B4: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002602C4; /* je: equal / zero */

loc_002602BB: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002602CF; /* jne: not equal / not zero */

loc_002602C4: ;
    SET_LO8(eax, MEM8(ecx + -642));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002602CF; /* je: equal / zero */

loc_002602CE: ;
    edi++;

loc_002602CF: ;
    ecx = ecx + 0xA50;
    edx--;
    if ((edx != 0)) goto loc_002602B4; /* jne: not equal / not zero */

loc_002602D8: ;
    ecx = MEM32(esp + 0x10);

loc_002602DC: ;
    ebp--;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_L(edi, ebp)) goto loc_002603A8; /* jl: less (signed <) */

loc_002602E6: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002602F4; /* jne: not equal / not zero */

loc_002602EF: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002602F4: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0026033C; /* je: equal / zero */

loc_0026031A: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0026033C; /* jb: below (unsigned <) */

loc_00260323: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026032D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260335: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00260361; /* jne: not equal / not zero */

loc_0026033C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026034E: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260356: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00260402; /* je: equal / zero */

loc_00260361: ;
    PUSH32(esp, 0); sub_002576C0(); /* call 0x002576C0 */

loc_00260366: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00260402; /* je: equal / zero */

loc_00260370: ;
    ecx = MEM32(esp + 0x10);
    MEM8(esi + 0x34) = 2;
    SET_LO8(edx, MEM8(ecx + 0x35));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x35) = LO8(edx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0026038A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0026039C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_002603A8: ;
    edi = MEM32(esp + 0x10);

loc_002603AC: ;
    if (CMP_EQ(MEM8(ecx + 0x75A), LO8(ebx))) goto loc_00260402; /* je: equal / zero */

loc_002603B4: ;
    MEM8(ecx + 0x75A) = LO8(ebx);
    PUSH32(esp, 0x38);
    MEM8(0x862E58) = 1;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_002603C8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00260402; /* je: equal / zero */

loc_002603CF: ;
    PUSH32(esp, 0); sub_002576C0(); /* call 0x002576C0 */

loc_002603D4: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00260402; /* je: equal / zero */

loc_002603DA: ;
    MEM8(esi + 0x34) = 1;
    SET_LO8(eax, MEM8(edi + 0x35));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x35) = LO8(eax);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002603F0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00260402: ;
    POP32(esp, ebx);

loc_00260403: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00260410
 * Original: 0x00260410 - 0x0026080A (1018 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260410: ;
    esp = esp - 0x4D0;
    SET_LO8(eax, MEM8(0x6BCFEB));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_00260802; /* jle: less or equal (signed <=) */

loc_0026042C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    goto loc_00260440;

    /* nop */

loc_00260440: ;
    eax = MEM32(edx + ebp + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = edx + ebp + 0x568;
    if (CMP_EQ(eax, ebx)) goto loc_002607DD; /* je: equal / zero */

loc_00260456: ;
    (void)0; /* cmp MEM16(edx + ebp + 0x3AE), LO16(ebx) - flags set for next jcc */
    edx = edx + ebp + 0x3AE;
    if (CMP_NE(MEM16(edx + ebp + 0x3AE), LO16(ebx))) goto loc_00260476; /* jne: not equal / not zero */

loc_00260467: ;
    if (CMP_NE(MEM8(ecx + 0x779EA8), LO8(ebx))) goto loc_00260476; /* jne: not equal / not zero */

loc_0026046F: ;
    MEM8(ecx + 0x779EA8) = 0x1E;

loc_00260476: ;
    SET_LO8(eax, MEM8(ecx + 0x779EA8));
    if (CMP_LE(LO8(eax), 1)) goto loc_002607D0; /* jle: less or equal (signed <=) */

loc_00260484: ;
    SET_LO8(eax, LO8(eax) - 1);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(ecx + 0x779EA8) = LO8(eax);
    if (CMP_NE(LO8(eax), 1)) goto loc_002607DD; /* jne: not equal / not zero */

loc_00260494: ;
    eax = MEM32(esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x3A4);
    eax = MEM32(eax + 0x3A8);
    esi--;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = eax;
    if (((int32_t)esi >= 0)) goto loc_002604B4; /* jns: not sign (positive) */

loc_002604AE: ;
    esi = ecx;
    MEM32(esp + 0x18) = esi;

loc_002604B4: ;
    edx = ZX8(MEM8(0x86E980));
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = 2;
    ecx = 0; /* xor self */

loc_002604C7: ;
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_NZ(edx, edi)) goto loc_002604DA; /* jne: not equal / not zero */

loc_002604D2: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_002604C7; /* jl: less (signed <) */

loc_002604D8: ;
    goto loc_002604F6;

loc_002604DA: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x862CCB);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + ebp + 0x238);
    edx = MEM32(ecx);
    eax = eax + ebp;
    MEM32(esp + 0x14) = edx;

loc_002604F6: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esi + ebp + 0x238);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edi = esi + ebp;
    edx = 2;
    if (CMP_EQ(ecx, ebx)) goto loc_00260511; /* je: equal / zero */

loc_0026050F: ;
    edx = MEM32(ecx);

loc_00260511: ;
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + ebp + 0x238);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = 2;
    if (CMP_EQ(ecx, ebx)) goto loc_00260527; /* je: equal / zero */

loc_00260525: ;
    esi = MEM32(ecx);

loc_00260527: ;
    if (CMP_NE(eax, edi)) goto loc_00260535; /* jne: not equal / not zero */

loc_0026052B: ;
    MEM32(esp + 0x14) = 4;
    goto loc_00260547;

loc_00260535: ;
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edi, edx)) ? 1 : 0); /* setne */
    eax = eax + 2;
    MEM32(esp + 0x14) = eax;

loc_00260547: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, esi)) ? 1 : 0); /* sete */
    ebp = 0x5D1274;
    esi = esp + 0x190;
    MEM8(esp + 0x24) = LO8(ecx);
    MEM32(esp + 0x190) = ebx;
    MEM32(esp + 0x194) = ebx;
    MEM32(esp + 0x198) = ebx;
    MEM32(esp + 0x19C) = ebx;
    MEM32(esp + 0x1A0) = ebx;
    MEM32(esp + 0x1A4) = 0x5D12B0;
    MEM32(esp + 0x1A8) = ebx;
    MEM32(esp + 0x1AC) = 0x862C40;
    MEM32(esp + 0x2B0) = ebp;
    MEM32(esp + 0x2B4) = ebx;
    MEM32(esp + 0x2B8) = ebx;
    MEM32(esp + 0x2BC) = ebx;
    MEM32(esp + 0x2C0) = ebx;
    MEM32(esp + 0x2C4) = ebx;
    MEM32(esp + 0x2C8) = ebx;
    MEM32(esp + 0x2CC) = ebx;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_002605DD: ;
    if (CMP_EQ(eax, ebx)) goto loc_002605FE; /* je: equal / zero */

loc_002605E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_002605EA: ;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_002605F5: ;
    esp = esp + 0xC;
    MEM8(esp + 0x38) = LO8(ebx);
    goto loc_00260602;

loc_002605FE: ;
    MEM8(esp + 0x28) = LO8(ebx);

loc_00260602: ;
    edi = MEM32(esp + 0x18);
    esi = esp + 0x50;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = 0x5D12B0;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = 0x862C40;
    MEM32(esp + 0x170) = ebp;
    MEM32(esp + 0x174) = ebx;
    MEM32(esp + 0x178) = ebx;
    MEM32(esp + 0x17C) = ebx;
    MEM32(esp + 0x180) = ebx;
    MEM32(esp + 0x184) = ebx;
    MEM32(esp + 0x188) = ebx;
    MEM32(esp + 0x18C) = ebx;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_0026066F: ;
    if (CMP_EQ(eax, ebx)) goto loc_00260690; /* je: equal / zero */

loc_00260673: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0026067C: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00260687: ;
    esp = esp + 0xC;
    MEM8(esp + 0x4C) = LO8(ebx);
    goto loc_00260694;

loc_00260690: ;
    MEM8(esp + 0x3C) = LO8(ebx);

loc_00260694: ;
    if (CMP_NE(MEM32(esp + 0x10), edi)) goto loc_00260799; /* jne: not equal / not zero */

loc_0026069E: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(esp + 0x1C);
    eax = edx + ecx;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002606C1; /* je: equal / zero */

loc_002606B9: ;
    if (CMP_NE(MEM32(eax + 0x640), ebx)) goto loc_00260703; /* jne: not equal / not zero */

loc_002606C1: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x77A55C);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002606D7: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(0x849800);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x940);
    PUSH32(esp, ecx);

loc_002606EA: ;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_002606EF: ;
    ebp = MEM32(0x84A5F8);
    ecx = MEM32(esp + 0x2C);
    esp = esp + 0x1C;
    ebx = 0; /* xor self */
    goto loc_002607DD;

loc_00260703: ;
    ebx = esp + 0x18;
    PUSH32(esp, 0); sub_00267350(); /* call 0x00267350 */

loc_0026070C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026073A; /* je: equal / zero */

loc_00260710: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x77A55C);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00260726: ;
    ecx = MEM32(0x849800);
    ebx = MEM32(ecx + 0x948);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_002606EA;

loc_0026073A: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x77A55C);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00260750: ;
    esp = esp + 0x10;
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_002673F0(); /* call 0x002673F0 */

loc_0026075C: ;
    PUSH32(esp, eax);
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x944);
    PUSH32(esp, ecx);
    edx = esp + 0x358;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00260776: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ebx = esp + 0x368;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_00260788: ;
    ebp = MEM32(0x84A5F8);
    ecx = MEM32(esp + 0x28);
    esp = esp + 0x18;
    ebx = 0; /* xor self */
    goto loc_002607DD;

loc_00260799: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x2D8;
    PUSH32(esp, 0x601064);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002607B5: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esp + 0x2EC;
    goto loc_002606EA;

loc_002607D0: ;
    if ((ebx != 0)) goto loc_002607DD; /* jne: not equal / not zero */

loc_002607D2: ;
    if (CMP_BE(MEM16(edx), LO16(ebx))) goto loc_002607DD; /* jbe: below or equal (unsigned <=) */

loc_002607D7: ;
    MEM8(ecx + 0x779EA8) = LO8(ebx);

loc_002607DD: ;
    edx = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx++;
    edx = edx + 0x6D0;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(ecx, eax)) goto loc_00260440; /* jl: less (signed <) */

loc_002607FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00260802: ;
    POP32(esp, ebx);
    esp = esp + 0x4D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00260810
 * Original: 0x00260810 - 0x00260890 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260810: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0026081E; /* jne: not equal / not zero */

loc_00260819: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026081E: ;
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
    if (TEST_Z(esi, esi)) goto loc_00260868; /* je: equal / zero */

loc_00260846: ;
    if (CMP_B(MEM32(esi + 0x80), 0x64)) goto loc_00260868; /* jb: below (unsigned <) */

loc_0026084F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00260859: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260861: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00260889; /* jne: not equal / not zero */

loc_00260868: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026087A: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260882: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00260890(); return; } /* je: equal / zero */

loc_00260889: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00257700(); return; /* tail jmp 0x00257700 */

}

/**
 * sub_002608A0
 * Original: 0x002608A0 - 0x002609B6 (278 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002608A0(void)
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

loc_002608A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608B3: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026098E; /* jne: not equal / not zero */

loc_002608C1: ;
    eax = ZX16(MEM16(edi + 0x36));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608CC: ;
    eax = ZX16(MEM16(edi + 0x38));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608D7: ;
    eax = ZX16(MEM16(edi + 0x3A));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608E2: ;
    eax = ZX16(MEM16(edi + 0x3C));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608ED: ;
    eax = ZX16(MEM16(edi + 0x3E));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002608F8: ;
    eax = ZX16(MEM16(edi + 0x40));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260903: ;
    eax = ZX16(MEM16(edi + 0x42));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026090E: ;
    eax = ZX8(MEM8(edi + 0x4D));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260919: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260923: ;
    eax = ZX8(MEM8(edi + 0x50));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026092E: ;
    SET_LO8(eax, MEM8(edi + 0x50));
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260980; /* je: equal / zero */

loc_00260938: ;
    fp_push(MEMF(edi + 0x54)); /* fld float */
    PUSH32(esp, ebx);
    ebx = (int32_t)MEMF(edi + 0x58); /* cvttss2si */
    PUSH32(esp, ebp);
    ebp = (int32_t)MEMF(edi + 0x5C); /* cvttss2si */
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0026094E: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260953: ;
    PUSH32(esp, 0x11);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026095C: ;
    PUSH32(esp, 0x11);
    eax = ebp;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260965: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x61);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260970: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x63);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026097B: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00260980: ;
    eax = ZX8(MEM8(edi + 0x4F));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026098B: ;
    esp = esp + 4;

loc_0026098E: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260998: ;
    eax = ZX8(MEM8(edi + 0x4C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002609A3: ;
    eax = ZX8(MEM8(edi + 0x4E));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002609AE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002609C0
 * Original: 0x002609C0 - 0x00260B83 (451 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002609C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002609C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002609CF: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x34) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00260B51; /* jne: not equal / not zero */

loc_002609DD: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002609E4: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_002609F1; /* je: equal / zero */

loc_002609EC: ;
    eax = eax | 0xFFFFFC00u;

loc_002609F1: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002609FC: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A09; /* je: equal / zero */

loc_00260A04: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A09: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x38) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A14: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A21; /* je: equal / zero */

loc_00260A1C: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A21: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x3A) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A2C: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A39; /* je: equal / zero */

loc_00260A34: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A39: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x3C) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A44: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A51; /* je: equal / zero */

loc_00260A4C: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A51: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x3E) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A5C: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A69; /* je: equal / zero */

loc_00260A64: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A69: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x40) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A74: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00260A81; /* je: equal / zero */

loc_00260A7C: ;
    eax = eax | 0xFFFFFC00u;

loc_00260A81: ;
    PUSH32(esp, 4);
    MEM16(edi + 0x42) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A8C: ;
    PUSH32(esp, 0x20);
    MEM8(edi + 0x4D) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260A96: ;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 1);
    MEMF(edi + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260AAC: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x50) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260B44; /* je: equal / zero */

loc_00260ABA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260AC3: ;
    ebp = eax;
    esp = esp + 4;
    if (TEST_Z(ebp, 0x10000)) goto loc_00260AD6; /* je: equal / zero */

loc_00260AD0: ;
    ebp = ebp | 0xFFFE0000u;

loc_00260AD6: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260ADD: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, 0x10000)) goto loc_00260AF0; /* je: equal / zero */

loc_00260AEA: ;
    ebx = ebx | 0xFFFE0000u;

loc_00260AF0: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260AF7: ;
    esp = esp + 4;
    if (TEST_Z(eax, 0x10000)) goto loc_00260B06; /* je: equal / zero */

loc_00260B01: ;
    eax = eax | 0xFFFE0000u;

loc_00260B06: ;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(edi + 0x54) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(edi + 0x58) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 8);
    MEMF(edi + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B28: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, 8);
    MEM16(edi + 0x60) = LO16(ecx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B37: ;
    esp = esp + 8;
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM16(edi + 0x62) = LO16(edx);

loc_00260B44: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B4B: ;
    esp = esp + 4;
    MEM8(edi + 0x4F) = LO8(eax);

loc_00260B51: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B58: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00260B64; /* jns: not sign (positive) */

loc_00260B5F: ;
    eax = eax | 0xFFFF0000u;

loc_00260B64: ;
    PUSH32(esp, 1);
    MEM32(edi + 0x48) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B6E: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x4C) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260B78: ;
    esp = esp + 8;
    MEM8(edi + 0x4E) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260B90
 * Original: 0x00260B90 - 0x00260C7D (237 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260B90: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00260BA1: ;
    if (TEST_Z(eax, eax)) goto loc_00260C76; /* je: equal / zero */

loc_00260BA9: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00260C22; /* jne: not equal / not zero */

loc_00260BB2: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00260C74; /* jne: not equal / not zero */

loc_00260BBF: ;
    SET_LO8(edx, MEM8(edi + 0x48));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00260BC7: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00260C74; /* je: equal / zero */

loc_00260BD1: ;
    SET_LO8(ebx, MEM8(edi + 0x50));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x62));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x60));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x4E));
    esi = edi + 0x54;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x4C));
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = edi + 0x36;
    ecx = ebp;
    PUSH32(esp, 0); sub_002BEAB0(); /* call 0x002BEAB0 */

loc_00260C00: ;
    SET_LO8(eax, MEM8(edi + 0x4D));
    MEM8(ebp + 0x43D) = LO8(eax);
    SET_LO16(ecx, ZX8(MEM8(edi + 0x4F)));
    esp = esp + 0x14;
    POP32(esp, esi);
    MEM16(ebp + 0x3AE) = LO16(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00260C22: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00260C54; /* jne: not equal / not zero */

loc_00260C26: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260C74; /* je: equal / zero */

loc_00260C2F: ;
    SET_LO8(edx, MEM8(edi + 0x48));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00260C37: ;
    if (TEST_Z(eax, eax)) goto loc_00260C74; /* je: equal / zero */

loc_00260C3B: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00260C74; /* je: equal / zero */

loc_00260C45: ;
    SET_LO8(edx, MEM8(edi + 0x4C));
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM8(eax + 0x38) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00260C54: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00260C74; /* jne: not equal / not zero */

loc_00260C58: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00260C74; /* je: equal / zero */

loc_00260C61: ;
    SET_LO8(edx, MEM8(edi + 0x48));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00260C69: ;
    if (TEST_Z(eax, eax)) goto loc_00260C74; /* je: equal / zero */

loc_00260C6D: ;
    ebx = eax;
    PUSH32(esp, 0); sub_002BECA0(); /* call 0x002BECA0 */

loc_00260C74: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00260C76: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00260C80
 * Original: 0x00260C80 - 0x00260D2F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00260C80: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00260C93; /* jne: not equal / not zero */

loc_00260C8E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00260C93: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00260CDB; /* je: equal / zero */

loc_00260CB9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_00260CDB; /* jb: below (unsigned <) */

loc_00260CC2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00260CCC: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260CD4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00260CFC; /* jne: not equal / not zero */

loc_00260CDB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00260CED: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00260CF5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00260D2F(); return; } /* je: equal / zero */

loc_00260CFC: ;
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
    MEM32(eax) = 0x600868;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00260D40
 * Original: 0x00260D40 - 0x00260DC3 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260D40(void)
{

loc_00260D40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0xD);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D55: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 0xD);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D62: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xD);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D6F: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x43);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D7A: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x41);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D85: ;
    SET_LO8(eax, MEM8(edi + 0x44));
    SET_LO8(eax, (uint32_t)((int32_t)LO8(eax) >> 3));
    eax = SX8(LO8(eax));
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260D95: ;
    SET_LO8(ecx, MEM8(edi + 0x45));
    SET_LO8(ecx, (uint32_t)((int32_t)LO8(ecx) >> 3));
    eax = SX8(LO8(ecx));
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260DA5: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x4E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260DB0: ;
    eax = ZX8(MEM8(edi + 0x4C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00260DBB: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260DD0
 * Original: 0x00260DD0 - 0x00260EC6 (246 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00260DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260DDF: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00260DEC; /* je: equal / zero */

loc_00260DE7: ;
    eax = eax | 0xFFFFE000u;

loc_00260DEC: ;
    eax = eax * 8 + 4;
    PUSH32(esp, 0xD);
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260DFD: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00260E0A; /* je: equal / zero */

loc_00260E05: ;
    eax = eax | 0xFFFFE000u;

loc_00260E0A: ;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0xD);
    MEM32(edi + 0x38) = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260E1B: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00260E28; /* je: equal / zero */

loc_00260E23: ;
    eax = eax | 0xFFFFE000u;

loc_00260E28: ;
    edx = eax * 8 + 4;
    PUSH32(esp, 8);
    MEM32(edi + 0x3C) = edx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260E39: ;
    esp = esp + 4;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00260E45; /* jns: not sign (positive) */

loc_00260E40: ;
    eax = eax | 0xFFFFFF00u;

loc_00260E45: ;
    eax = eax << 8;
    eax = eax + 0x80;
    PUSH32(esp, 8);
    MEM16(edi + 0x42) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260E58: ;
    esp = esp + 4;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00260E64; /* jns: not sign (positive) */

loc_00260E5F: ;
    eax = eax | 0xFFFFFF00u;

loc_00260E64: ;
    eax = eax << 8;
    eax = eax + 0x80;
    PUSH32(esp, 5);
    MEM16(edi + 0x40) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260E77: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00260E81; /* je: equal / zero */

loc_00260E7E: ;
    eax = eax | 0xFFFFFFE0u;

loc_00260E81: ;
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) + 4);
    PUSH32(esp, 5);
    MEM8(edi + 0x44) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260E90: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00260E9A; /* je: equal / zero */

loc_00260E97: ;
    eax = eax | 0xFFFFFFE0u;

loc_00260E9A: ;
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) + 4);
    PUSH32(esp, 0x10);
    MEM8(edi + 0x45) = LO8(eax);
    MEM32(edi + 0x48) = 0;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260EB0: ;
    PUSH32(esp, 1);
    MEM16(edi + 0x4E) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00260EBB: ;
    esp = esp + 8;
    MEM8(edi + 0x4C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00260ED0
 * Original: 0x00260ED0 - 0x002610A8 (472 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00260ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00260ED0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00260EE1: ;
    if (TEST_Z(eax, eax)) goto loc_002610A1; /* je: equal / zero */

loc_00260EE9: ;
    ecx = MEM32(edi + 0x48);
    edx = 1;
    edx = edx << LO8(ecx);
    PUSH32(esp, ebx);
    if (TEST_Z(MEM8(eax + 0x758), LO8(edx))) goto loc_002610A0; /* je: equal / zero */

loc_00260F00: ;
    if (TEST_S(ecx, ecx)) goto loc_002610A0; /* jl: less (signed <) */

loc_00260F08: ;
    if (CMP_GE(ecx, 2)) goto loc_002610A0; /* jge: greater or equal (signed >=) */

loc_00260F11: ;
    ebx = MEM32(eax + ecx * 4 + 0xA3C);
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ebx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002610A0; /* je: equal / zero */

loc_00260F26: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + 0xCC;
    ebp = 0x80;
    goto loc_00260F40;

    /* nop */

loc_00260F40: ;
    eax = MEM32(esi + -104);
    if (TEST_Z(eax, eax)) goto loc_00261091; /* je: equal / zero */

loc_00260F4B: ;
    eax = MEM32(esi + 0x4A4);
    if (TEST_Z(eax, eax)) goto loc_00261091; /* je: equal / zero */

loc_00260F59: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), MEM16(edi + 0x4E))) goto loc_00261091; /* jne: not equal / not zero */

loc_00260F66: ;
    eax = MEM32(esi + 0x170);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00260F71: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(ebx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx;
    if (CMP_NE(eax, ecx)) goto loc_00261091; /* jne: not equal / not zero */

loc_00260F8A: ;
    eax = MEM32(esi + 0x4A4);
    xmm0 = (float)(int32_t)MEM32(edi + 0x34); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + -84); /* subss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(edi + 0x38); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + -80); /* subss */
    xmm2 = MEMF(eax); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = (float)(int32_t)MEM32(edi + 0x3C); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + -76); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    /* comiss xmm3, MEMF(0x649480) - sets EFLAGS */
    if ((xmm3 > MEMF(0x649480))) goto loc_00260FF2; /* ja: above (unsigned >) */

loc_00260FEB: ;
    SET_LO8(ecx, MEM8(edi + 0x4C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00261031; /* je: equal / zero */

loc_00260FF2: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(esi + -84); /* addss */
    MEMF(esi + -84) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm1 = xmm1 + MEMF(esi + -80); /* addss */
    MEMF(esi + -80) = xmm1; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(esi + -76); /* movss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(esi + -76) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_00261034;

loc_00261031: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00261034: ;
    SET_LO16(edx, MEM16(edi + 0x42));
    MEM16(eax + 0xC) = LO16(edx);
    SET_LO16(ecx, MEM16(edi + 0x40));
    MEM16(eax + 0xE) = LO16(ecx);
    SET_LO8(edx, MEM8(edi + 0x44));
    MEM8(eax + 0x10) = LO8(edx);
    SET_LO8(ecx, MEM8(edi + 0x45));
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(eax + 0x14) = xmm0; /* movss */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00261076; /* jbe: below or equal (unsigned <=) */

loc_0026105C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    edx = ZX8(LO8(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    goto loc_00261083;

loc_00261076: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */

loc_00261083: ;
    MEM8(eax + 0x1C) = 1;
    MEM8(eax + 0x1E) = 1;
    SET_LO8(ecx, MEM8(edi + 0x4C));
    MEM8(eax + 0x1D) = LO8(ecx);

loc_00261091: ;
    esi = esi + 0x6D0;
    ebp--;
    if ((ebp != 0)) goto loc_00260F40; /* jne: not equal / not zero */

loc_0026109E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002610A0: ;
    POP32(esp, ebx);

loc_002610A1: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002610B0
 * Original: 0x002610B0 - 0x002611A6 (246 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002610B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002610B0: ;
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002611A4; /* je: equal / zero */

loc_002610C3: ;
    SET_LO8(edx, MEM8(eax + 0x1E));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00261186; /* je: equal / zero */

loc_002610CE: ;
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(eax + 0x14) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_002610F3; /* jbe: below or equal (unsigned <=) */

loc_002610EE: ;
    MEMF(eax + 0x14) = xmm2; /* movss */

loc_002610F3: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_00261143; /* jbe: below or equal (unsigned <=) */

loc_00261105: ;
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x78); /* addss */
    MEMF(ecx + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x7C); /* addss */
    MEMF(ecx + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x80); /* addss */
    MEMF(ecx + 0x80) = xmm1; /* movss */

loc_00261143: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    if (CMP_AE(LO8(edx), 0xFF)) goto loc_00261152; /* jae: above or equal (unsigned >=) */

loc_0026114B: ;
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax + 0x1C) = LO8(edx);
    goto loc_00261156;

loc_00261152: ;
    MEM8(eax + 0x1D) = 1;

loc_00261156: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    xmm0 = MEMF(0x648F48); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x114) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x1C0) = xmm1; /* movss */

loc_00261186: ;
    if (TEST_Z(esi, esi)) goto loc_00261190; /* je: equal / zero */

loc_0026118A: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x10);
    MEM32(esi) = ecx;

loc_00261190: ;
    if (TEST_Z(edi, edi)) goto loc_0026119A; /* je: equal / zero */

loc_00261194: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    MEM32(edi) = edx;

loc_0026119A: ;
    if (TEST_Z(ebx, ebx)) goto loc_002611A4; /* je: equal / zero */

loc_0026119E: ;
    eax = ZX8(MEM8(eax + 0x1D));
    MEM32(ebx) = eax;

loc_002611A4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002611B0
 * Original: 0x002611B0 - 0x00261264 (180 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002611B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002611B0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, ebx)) goto loc_002611C7; /* jne: not equal / not zero */

loc_002611C2: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002611C7: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00261210; /* je: equal / zero */

loc_002611EE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_00261210; /* jb: below (unsigned <) */

loc_002611F7: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261201: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261209: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00261231; /* jne: not equal / not zero */

loc_00261210: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261222: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026122A: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00261264(); return; } /* je: equal / zero */

loc_00261231: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x600868;
    esi = eax;
    g_seh_ebp = ebp; sub_00261266(); return; /* tail jmp 0x00261266 */

}

/**
 * sub_002613C0
 * Original: 0x002613C0 - 0x00261433 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002613C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002613C0: ;
    SET_LO8(eax, MEM8(0x864EC1));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002613FF; /* jle: less or equal (signed <=) */

loc_002613D1: ;
    PUSH32(esp, edi);
    edi = 0x8658A4;

loc_002613D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002611B0(); /* call 0x002611B0 */

loc_002613DF: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002613EC: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esi++;
    edi = edi + 0xA50;
    if (CMP_L(esi, edx)) goto loc_002613D7; /* jl: less (signed <) */

loc_002613FE: ;
    POP32(esp, edi);

loc_002613FF: ;
    SET_LO8(ecx, MEM8(0x863B01));
    eax = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00261430; /* jbe: below or equal (unsigned <=) */

loc_0026140B: ;
    goto loc_00261410;

    /* nop */

loc_00261410: ;
    if (CMP_NE(MEM32(eax * 4 + 0x863B04), ebp)) goto loc_00261424; /* jne: not equal / not zero */

loc_00261419: ;
    MEM32(eax * 4 + 0x863B04) = 0;

loc_00261424: ;
    ecx = ZX8(MEM8(0x863B01));
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00261410; /* jl: less (signed <) */

loc_00261430: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00261440
 * Original: 0x00261440 - 0x002614FC (188 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261440: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0026144E; /* jne: not equal / not zero */

loc_00261449: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026144E: ;
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
    if (TEST_Z(esi, esi)) goto loc_00261498; /* je: equal / zero */

loc_00261476: ;
    if (CMP_B(MEM32(esi + 0x80), 0x20)) goto loc_00261498; /* jb: below (unsigned <) */

loc_0026147F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261489: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261491: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002614B5; /* jne: not equal / not zero */

loc_00261498: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002614AA: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002614B2: ;
    esp = esp + 8;

loc_002614B5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x570) = eax;
    if (TEST_Z(eax, eax)) goto loc_002614F9; /* je: equal / zero */

loc_002614BF: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM8(eax + 0x1C) = 1;
    SET_LO16(eax, MEM16(esp + 0x10));
    edi = MEM32(ebx + 0x23C);
    MEM16(ebx + 0xCC) = LO16(eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002614F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00261500
 * Original: 0x00261500 - 0x00261517 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261500: ;
    SET_LO8(eax, MEM8(0x864EC1));
    esp = esp - 0x64;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00261517(); return; } /* jne: not equal / not zero */

loc_0026150C: ;
    MEM8(0x863B01) = 0;
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00261910
 * Original: 0x00261910 - 0x0026194A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261910: ;
    SET_LO8(ecx, MEM8(0x863D11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00261949; /* je: equal / zero */

loc_0026191A: ;
    SET_LO8(ecx, MEM8(0x863B01));
    if (CMP_AE(LO8(ecx), 0x40)) goto loc_00261949; /* jae: above or equal (unsigned >=) */

loc_00261925: ;
    ecx = ZX8(LO8(ecx));
    MEM32(ecx * 4 + 0x863B04) = eax;
    edx = ZX8(MEM8(0x863B01));
    eax = MEM32(eax + 0xB0);
    MEM32(edx * 4 + 0x863C04) = eax;
    MEM8(0x863B01) = MEM8(0x863B01) + 1;

loc_00261949: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00261950
 * Original: 0x00261950 - 0x00261A8F (319 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261950(void)
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

loc_00261950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00261956: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00261A8D; /* jbe: below or equal (unsigned <=) */

loc_00261971: ;
    SET_LO8(eax, MEM8(0x864EC1));
    xmm0 = MEMF(esp); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(0x87580C) = xmm0; /* movss */
    MEM32(esp + 4) = ebx;
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_00261A8C; /* jle: less or equal (signed <=) */

loc_00261992: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x8658A4;
    /* nop */

loc_002619A0: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_00261A6B; /* je: equal / zero */

loc_002619AC: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002619B9; /* jne: not equal / not zero */

loc_002619B4: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002619B9: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00261A01; /* je: equal / zero */

loc_002619DF: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00261A01; /* jb: below (unsigned <) */

loc_002619E8: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002619F2: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002619FA: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00261A22; /* jne: not equal / not zero */

loc_00261A01: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261A13: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261A1B: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00261A5E; /* je: equal / zero */

loc_00261A22: ;
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x600D68;
    MEM32(eax + 0x34) = ecx;
    goto loc_00261A60;

loc_00261A5E: ;
    eax = 0; /* xor self */

loc_00261A60: ;
    ecx = MEM32(ebp);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00261A6B: ;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_002619A0; /* jl: less (signed <) */

loc_00261A89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00261A8C: ;
    POP32(esp, ebx);

loc_00261A8D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00261A90
 * Original: 0x00261A90 - 0x00261B38 (168 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00261A90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00261B38(); return; } /* je: equal / zero */

loc_00261AA0: ;
    SET_LO8(eax, MEM8(0x864EC1));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) { sub_00261B38(); return; } /* jle: less or equal (signed <=) */

loc_00261AAF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00261AB1: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA50);
    esi = esi + 0x864EC8;
    ecx = 0; /* xor self */

loc_00261AC1: ;
    SET_LO8(ebx, MEM8(esi + 0x758));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(ebx), LO8(edx))) goto loc_00261B10; /* je: equal / zero */

loc_00261AD2: ;
    if (TEST_S(ecx, ecx)) goto loc_00261B10; /* jl: less (signed <) */

loc_00261AD6: ;
    if (CMP_GE(ecx, 2)) goto loc_00261B10; /* jge: greater or equal (signed >=) */

loc_00261ADB: ;
    edx = MEM32(esi + ecx * 4 + 0xA3C);
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(edx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00261B10; /* je: equal / zero */

loc_00261AEC: ;
    ebx = MEM32(esp + 0x14);
    ebx = ZX16(MEM16(ebx + 0x60));
    if (CMP_NE(edx, ebx)) goto loc_00261B10; /* jne: not equal / not zero */

loc_00261AF8: ;
    eax = ecx;
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00261B01: ;
    ebp = eax;
    SET_LO8(eax, MEM8(0x864EC1));
    ecx = 2;
    edi = SX8(LO8(eax));

loc_00261B10: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_00261AC1; /* jl: less (signed <) */

loc_00261B16: ;
    ecx = SX8(LO8(eax));
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00261AB1; /* jl: less (signed <) */

loc_00261B1E: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(ebp, ebp)) { sub_00261B38(); return; } /* je: equal / zero */

loc_00261B24: ;
    SET_LO8(ecx, MEM8(ebp));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00261B30; /* je: equal / zero */

loc_00261B2B: ;
    if (CMP_NE(LO8(ecx), 0x20)) { sub_00261B38(); return; } /* jne: not equal / not zero */

loc_00261B30: ;
    eax = MEM32(0x75E864);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00261B40
 * Original: 0x00261B40 - 0x00261BFC (188 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261B40: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00261B53; /* jne: not equal / not zero */

loc_00261B4E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00261B53: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00261B9B; /* je: equal / zero */

loc_00261B79: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00261B9B; /* jb: below (unsigned <) */

loc_00261B82: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261B8C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261B94: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00261BBC; /* jne: not equal / not zero */

loc_00261B9B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261BAD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261BB5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00261BFC(); return; } /* je: equal / zero */

loc_00261BBC: ;
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
    MEM8(eax + 0x3D) = LO8(ebx);
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600BC8;
    MEM32(eax + 0x34) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00261C10
 * Original: 0x00261C10 - 0x00261CC8 (184 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261C10: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00261C23; /* jne: not equal / not zero */

loc_00261C1E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00261C23: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00261C6B; /* je: equal / zero */

loc_00261C49: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00261C6B; /* jb: below (unsigned <) */

loc_00261C52: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261C5C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261C64: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00261C8C; /* jne: not equal / not zero */

loc_00261C6B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261C7D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261C85: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00261CC8(); return; } /* je: equal / zero */

loc_00261C8C: ;
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
    MEM32(eax + 0x34) = ebx;
    MEM8(eax + 0x3D) = LO8(ebx);
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600BC8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00261CD0
 * Original: 0x00261CD0 - 0x00261D7B (171 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261CD0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX8(MEM8(ebx + 0x3D));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xA;
    MEM32(esp + 0x14) = 0x14;
    MEM32(esp + 0x18) = 0x20;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261D06: ;
    eax = ZX8(MEM8(ebx + 0x3D));
    esp = esp + 4;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00261D2B; /* je: equal / zero */

loc_00261D12: ;
    eax--;
    if ((eax != 0)) goto loc_00261D73; /* jne: not equal / not zero */

loc_00261D15: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x3C);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261D20: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00261D2B: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    if (CMP_NE(ecx, 0x45)) goto loc_00261D3D; /* jne: not equal / not zero */

loc_00261D38: ;
    eax = 2;

loc_00261D3D: ;
    ecx = eax + 9;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, edi);
    edx = (uint32_t)((int32_t)edx >> 2);
    edi = edx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    PUSH32(esp, 2);
    eax = edi;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261D5B: ;
    esp = esp + 4;
    if (CMP_LE(edi & edi, 0)) goto loc_00261D72; /* jle: less or equal (signed <=) */

loc_00261D62: ;
    eax = MEM32(esp + edi * 4 + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x38);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261D6F: ;
    esp = esp + 4;

loc_00261D72: ;
    POP32(esp, edi);

loc_00261D73: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261D80
 * Original: 0x00261D80 - 0x00261DFE (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261D80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261D80: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xA;
    MEM32(esp + 0x14) = 0x14;
    MEM32(esp + 0x18) = 0x20;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261DB2: ;
    MEM8(edi + 0x3D) = LO8(eax);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00261DD8; /* je: equal / zero */

loc_00261DC0: ;
    eax--;
    if ((eax != 0)) goto loc_00261DF6; /* jne: not equal / not zero */

loc_00261DC3: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261DCA: ;
    esp = esp + 4;
    MEM8(edi + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00261DD8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261DDF: ;
    esp = esp + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_00261DF6; /* jle: less or equal (signed <=) */

loc_00261DE6: ;
    eax = MEM32(esp + eax * 4 + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261DF0: ;
    MEM32(edi + 0x38) = eax;
    esp = esp + 4;

loc_00261DF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261E00
 * Original: 0x00261E00 - 0x00261E3C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261E00: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00261E36; /* jne: not equal / not zero */

loc_00261E09: ;
    eax = ZX8(MEM8(ecx + 0x3D));
    eax = eax - 0;
    if ((eax == 0)) goto loc_00261E28; /* je: equal / zero */

loc_00261E12: ;
    eax--;
    if ((eax != 0)) goto loc_00261E36; /* jne: not equal / not zero */

loc_00261E15: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035F8E0(); /* call 0x0035F8E0 */

loc_00261E1F: ;
    esp = esp + 4;
    eax = 1;
    esp += 4; return; /* ret */

loc_00261E28: ;
    ecx = MEM32(ecx + 0x38);
    MEM32(0x801A34) = ecx;
    PUSH32(esp, 0); sub_0035FC90(); /* call 0x0035FC90 */

loc_00261E36: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00261E40
 * Original: 0x00261E40 - 0x00261EF5 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00261E40: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00261E53; /* jne: not equal / not zero */

loc_00261E4E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00261E53: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00261E9B; /* je: equal / zero */

loc_00261E79: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00261E9B; /* jb: below (unsigned <) */

loc_00261E82: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261E8C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261E94: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00261EBC; /* jne: not equal / not zero */

loc_00261E9B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00261EAD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00261EB5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00261EF5(); return; } /* je: equal / zero */

loc_00261EBC: ;
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
    MEM8(eax + 0x35) = LO8(ebx);
    MEM8(eax + 0x34) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600B60;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00261F00
 * Original: 0x00261F00 - 0x00261F2C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261F00(void)
{

loc_00261F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261F13: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x35));
    PUSH32(esp, 8);
    eax = eax & 0xFF;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00261F24: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261F30
 * Original: 0x00261F30 - 0x00261F54 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261F30(void)
{

loc_00261F30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261F3F: ;
    PUSH32(esp, 8);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00261F49: ;
    esp = esp + 8;
    MEM8(edi + 0x35) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00261F60
 * Original: 0x00261F60 - 0x00261F8F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00261F60: ;
    SET_LO8(edx, MEM8(ecx + 0x34));
    eax = 1;
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_00261F8E; /* je: equal / zero */

loc_00261F6C: ;
    SET_LO8(edx, MEM8(0x862C5C));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00261F8E; /* jne: not equal / not zero */

loc_00261F76: ;
    SET_LO8(ecx, MEM8(ecx + 0x35));
    MEM8(0x863B00) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x863AFC) = xmm0; /* movss */

loc_00261F8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00261F90
 * Original: 0x00261F90 - 0x002620B7 (295 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00261F90(void)
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

loc_00261F90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00261F96: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x875808)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002620B5; /* ja: above (unsigned >) */

loc_00261FB4: ;
    SET_LO8(eax, MEM8(0x864EC1));
    xmm0 = MEMF(esp); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(0x875808) = xmm0; /* movss */
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_002620B3; /* jle: less or equal (signed <=) */

loc_00261FD4: ;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x8658A4;
    PUSH32(esp, edi);
    edi = edi;

loc_00261FE0: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00261FED; /* jne: not equal / not zero */

loc_00261FE8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00261FED: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00262035; /* je: equal / zero */

loc_00262013: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_00262035; /* jb: below (unsigned <) */

loc_0026201C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262026: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026202E: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00262056; /* jne: not equal / not zero */

loc_00262035: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262047: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026204F: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00262087; /* je: equal / zero */

loc_00262056: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
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
    MEM32(eax) = 0x600C30;
    goto loc_00262089;

loc_00262087: ;
    eax = 0; /* xor self */

loc_00262089: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00262097: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    esi = esi + 0xA50;
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(ebp, edx)) goto loc_00261FE0; /* jl: less (signed <) */

loc_002620B1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002620B3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002620B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002620C0
 * Original: 0x002620C0 - 0x0026216F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002620C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002620C0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002620D3; /* jne: not equal / not zero */

loc_002620CE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002620D3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026211B; /* je: equal / zero */

loc_002620F9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0026211B; /* jb: below (unsigned <) */

loc_00262102: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026210C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00262114: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026213C; /* jne: not equal / not zero */

loc_0026211B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026212D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00262135: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0026216F(); return; } /* je: equal / zero */

loc_0026213C: ;
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
    MEM32(eax) = 0x600C30;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00262180
 * Original: 0x00262180 - 0x0026222F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00262180: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00262193; /* jne: not equal / not zero */

loc_0026218E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00262193: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002621DB; /* je: equal / zero */

loc_002621B9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_002621DB; /* jb: below (unsigned <) */

loc_002621C2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002621CC: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002621D4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002621FC; /* jne: not equal / not zero */

loc_002621DB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002621ED: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002621F5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0026222F(); return; } /* je: equal / zero */

loc_002621FC: ;
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
    MEM32(eax) = 0x600798;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00262240
 * Original: 0x00262240 - 0x0026226F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00262240: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00262253: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0026226F(); return; } /* jne: not equal / not zero */

loc_0026225D: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00262267: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00262290
 * Original: 0x00262290 - 0x002622BB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00262290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0026229F: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x34) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002622BB(); return; } /* jne: not equal / not zero */

loc_002622A9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002622B0: ;
    esp = esp + 4;
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002622D0
 * Original: 0x002622D0 - 0x002623E7 (279 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002622D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002622D0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_002622E1: ;
    if (TEST_Z(eax, eax)) goto loc_002623E0; /* je: equal / zero */

loc_002622E9: ;
    SET_LO8(ecx, MEM8(ebp + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002623DA; /* jne: not equal / not zero */

loc_002622F4: ;
    edx = MEM32(eax + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    ecx = esi;
    ecx = ecx - edx;
    edx = edi;
    edx = edx - ebx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x3C) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_002623AB; /* jle: less or equal (signed <=) */

loc_00262319: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = eax;
    if (CMP_LE(ebx, 0x7F)) goto loc_0026232D; /* jle: less or equal (signed <=) */

loc_00262328: ;
    ebx = 0x7F;

loc_0026232D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0026233B; /* jne: not equal / not zero */

loc_00262336: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026233B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00262383; /* je: equal / zero */

loc_00262361: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_00262383; /* jb: below (unsigned <) */

loc_0026236A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262374: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026237C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002623A4; /* jne: not equal / not zero */

loc_00262383: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262395: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026239D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002623B5; /* je: equal / zero */

loc_002623A4: ;
    PUSH32(esp, 0); sub_00257B10(); /* call 0x00257B10 */

loc_002623A9: ;
    goto loc_002623B7;

loc_002623AB: ;
    ebx = 0x64;
    goto loc_0026232D;

loc_002623B5: ;
    eax = 0; /* xor self */

loc_002623B7: ;
    edx = MEM32(eax);
    MEM8(eax + 0x34) = 1;
    MEM32(eax + 0x38) = 0;
    MEM8(eax + 0x35) = LO8(ebx);
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002623D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002623DA: ;
    SET_LO8(edx, MEM8(ebp + 0x35));
    MEM8(eax + 0x40) = LO8(edx);

loc_002623E0: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002623F0
 * Original: 0x002623F0 - 0x00262432 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002623F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002623F0: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    ecx = 0x10;
    eax = eax + 0x6D00;

loc_00262407: ;
    ebx = ZX8(MEM8(esi + ecx));
    if (CMP_EQ(ebx, edx)) goto loc_00262414; /* je: equal / zero */

loc_0026240F: ;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_0026241F; /* jne: not equal / not zero */

loc_00262414: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    if (CMP_EQ(ebx, edi)) goto loc_0026242F; /* je: equal / zero */

loc_0026241F: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x80)) goto loc_00262407; /* jl: less (signed <) */

loc_0026242D: ;
    eax = 0; /* xor self */

loc_0026242F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00262440
 * Original: 0x00262440 - 0x0026249A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00262440: ;
    SET_LO8(ecx, MEM8(0x878784));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00262476; /* jne: not equal / not zero */

loc_0026244F: ;
    edx = MEM32(0x878784);
    PUSH32(esp, esi);
    edx = edx | eax;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_00262468: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00262472: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00262476: ;
    eax = MEM32(0x878764);
    ecx = MEM32(0x878768);
    if (CMP_EQ(eax, ecx)) goto loc_00262493; /* je: equal / zero */

loc_00262485: ;
    if (CMP_EQ(MEM16(eax), LO16(edi))) goto loc_00262491; /* je: equal / zero */

loc_0026248A: ;
    eax = eax + 2;
    if (CMP_NE(eax, ecx)) goto loc_00262485; /* jne: not equal / not zero */

loc_00262491: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */

loc_00262493: ;
    SET_LO8(eax, (CMP_NE(eax, ecx)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002624A0
 * Original: 0x002624A0 - 0x00262522 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002624A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002624A0: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x878784));
    PUSH32(esp, edi);
    edi = eax;
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_002624DA; /* jne: not equal / not zero */

loc_002624B3: ;
    edx = MEM32(0x878784);
    PUSH32(esp, esi);
    edx = edx | eax;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_002624CC: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002624D6: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_002624DA: ;
    eax = MEM32(0x878764);
    ecx = MEM32(0x878768);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 4) = edi;
    if (CMP_EQ(eax, ecx)) goto loc_00262511; /* je: equal / zero */

loc_002624ED: ;
    /* nop */

loc_002624F0: ;
    if (CMP_EQ(MEM16(eax), LO16(edi))) goto loc_0026250D; /* je: equal / zero */

loc_002624F5: ;
    eax = eax + 2;
    if (CMP_NE(eax, ecx)) goto loc_002624F0; /* jne: not equal / not zero */

loc_002624FC: ;
    edi = esp + 4;
    eax = 0x878760;
    PUSH32(esp, 0); sub_00293A90(); /* call 0x00293A90 */

loc_0026250A: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026250D: ;
    if (CMP_NE(eax, ecx)) goto loc_0026251F; /* jne: not equal / not zero */

loc_00262511: ;
    edi = esp + 4;
    eax = 0x878760;
    PUSH32(esp, 0); sub_00293A90(); /* call 0x00293A90 */

loc_0026251F: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00262530
 * Original: 0x00262530 - 0x002625CC (156 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00262530: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x878784));
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00262566; /* jne: not equal / not zero */

loc_00262541: ;
    edx = MEM32(0x878784);
    edx = edx | eax;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_00262559: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00262563: ;
    esp = esp + 4;

loc_00262566: ;
    eax = MEM32(0x878774);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00262582; /* je: equal / zero */

loc_00262571: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026257F: ;
    esp = esp + 4;

loc_00262582: ;
    eax = MEM32(0x878764);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x878774) = esi;
    MEM32(0x878778) = esi;
    MEM32(0x87877C) = esi;
    MEM16(0x878780) = 0x80;
    if (CMP_EQ(eax, esi)) goto loc_002625B7; /* je: equal / zero */

loc_002625A6: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002625B4: ;
    esp = esp + 4;

loc_002625B7: ;
    MEM32(0x878764) = esi;
    MEM32(0x878768) = esi;
    MEM32(0x87876C) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002625D0
 * Original: 0x002625D0 - 0x00262619 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002625D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002625D0: ;
    if (TEST_NZ(MEM8(0x878784), 1)) goto loc_00262601; /* jne: not equal / not zero */

loc_002625D9: ;
    edx = MEM32(0x878784);
    PUSH32(esp, esi);
    edx = edx | 1;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_002625F3: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002625FD: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00262601: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00262619(); return; } /* jne: not equal / not zero */

loc_0026260A: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) { sub_00262619(); return; } /* je: equal / zero */

loc_00262613: ;
    eax = 0xFFFFAFFEu;
    esp += 4; return; /* ret */

}

/**
 * sub_00262630
 * Original: 0x00262630 - 0x002626B5 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262630: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026263E: ;
    ebx = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    esp = esp - 0x10;
    ebp = esp;
    ecx = 0x231040;
    MEM32(ebp) = ecx;
    edx = 0; /* xor self */
    MEM32(ebp + 4) = edx;
    esi = 0; /* xor self */
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    MEM32(ebp + 8) = esi;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, 0); sub_002332F0(); /* call 0x002332F0 */

loc_00262667: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_002626AD; /* jne: not equal / not zero */

loc_0026266E: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0026267D; /* je: equal / zero */

loc_00262678: ;
    if (CMP_NE(eax, 0x46)) goto loc_002626AD; /* jne: not equal / not zero */

loc_0026267D: ;
    eax = MEM32(0x847104);
    ecx = MEM32(eax + 4);
    if (TEST_Z(HI8(ecx), 4)) goto loc_002626AD; /* je: equal / zero */

loc_0026268A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x601044);
    PUSH32(esp, 0); sub_00262850(); /* call 0x00262850 */

loc_00262699: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002626AD; /* je: equal / zero */

loc_002626A0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002626C0(); /* call 0x002626C0 */

loc_002626AA: ;
    esp = esp + 4;

loc_002626AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_002626C0
 * Original: 0x002626C0 - 0x002627B5 (245 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002626C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002626C0: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_002626FA; /* je: equal / zero */

loc_002626C9: ;
    xmm1 = MEMF(0x776220); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_002627B4; /* jae: above or equal (unsigned >=) */

loc_002626E2: ;
    MEM8(0x776278) = 0;
    MEM8(0x77625E) = 1;
    MEMF(0x776220) = xmm0; /* movss */
    goto loc_00262707;

loc_002626FA: ;
    eax = MEM32(0x849B84);
    if (TEST_NZ(eax, eax)) goto loc_002627B4; /* jne: not equal / not zero */

loc_00262707: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_0026271D; /* je: equal / zero */

loc_00262710: ;
    PUSH32(esp, 0x86422C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026271A: ;
    esp = esp + 4;

loc_0026271D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0026272B; /* jne: not equal / not zero */

loc_00262726: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026272B: ;
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
    if (TEST_Z(esi, esi)) goto loc_00262775; /* je: equal / zero */

loc_00262753: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7B)) goto loc_00262775; /* jb: below (unsigned <) */

loc_0026275C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262766: ;
    PUSH32(esp, 0x7B);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026276E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00262792; /* jne: not equal / not zero */

loc_00262775: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00262787: ;
    PUSH32(esp, 0x7B);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026278F: ;
    esp = esp + 8;

loc_00262792: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x86422C) = eax;
    if (TEST_Z(eax, eax)) goto loc_002627B2; /* je: equal / zero */

loc_0026279B: ;
    esi = MEM32(esp + 0xC);
    ecx = 0x1E;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00240810(); return; /* tail jmp 0x00240810 */

loc_002627B2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002627B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002627C0
 * Original: 0x002627C0 - 0x0026281D (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002627C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002627C0: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0x24)) goto loc_002627DD; /* je: equal / zero */

loc_002627C9: ;
    /* nop */

loc_002627D0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026281A; /* je: equal / zero */

loc_002627D4: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_NE(LO8(ecx), 0x24)) goto loc_002627D0; /* jne: not equal / not zero */

loc_002627DD: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0026281A; /* je: equal / zero */

loc_002627E2: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    edx = 0; /* xor self */
    if (CMP_L(LO8(ecx), 0x41)) goto loc_002627FD; /* jl: less (signed <) */

loc_002627ED: ;
    /* nop */

loc_002627F0: ;
    MEM8(edx + esi) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    edx++;
    eax++;
    if (CMP_GE(LO8(ecx), 0x41)) goto loc_002627F0; /* jge: greater or equal (signed >=) */

loc_002627FD: ;
    MEM8(edx + esi) = 0;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0x22)) goto loc_00262815; /* je: equal / zero */

loc_00262808: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026281A; /* je: equal / zero */

loc_0026280C: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_NE(LO8(ecx), 0x22)) goto loc_00262808; /* jne: not equal / not zero */

loc_00262815: ;
    if (CMP_NE(MEM8(eax), 0)) { sub_0026281D(); return; } /* jne: not equal / not zero */

loc_0026281A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00262850
 * Original: 0x00262850 - 0x002628F4 (164 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00262850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00262850: ;
    esp = esp - 0x114;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x1E;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    SET_LO8(eax, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM8(ebp + 0x64) = LO8(eax);
    MEM8(ebp + 0x6D) = LO8(eax);
    MEM8(ebp + 0x63) = LO8(eax);
    MEM8(ebp + 0x6A) = LO8(eax);
    MEM8(ebp + 0x6B) = LO8(eax);
    eax = MEM32(esp + 0x138);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    MEM32(ebp + 0x40) = 0x626F52;
    MEM8(ebp + 0x61) = 0;
    MEM8(ebp + 0x62) = 1;
    MEM8(ebp + 0x67) = 0xF;
    MEM8(ebp + 0x66) = 0;
    MEM8(ebp + 0x6C) = 0x10;
    MEM8(ebp + 0x68) = 0;
    MEM8(ebp + 0x60) = 0;
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_002628BE: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_002628E8; /* je: equal / zero */

loc_002628C5: ;
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_002628D3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x98);
    MEM32(esp + 0xC) = ecx;
    if (TEST_NZ(eax, eax)) { sub_002628F4(); return; } /* jne: not equal / not zero */

loc_002628E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_002628E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00263010
 * Original: 0x00263010 - 0x0026305F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263010: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x777EC4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    esi = esi << 6;
    eax = eax + eax * 4;
    edx = MEM32(eax * 8 + 0x776F28);
    eax = MEM32(edx + 4);
    esi = esi + 0x777ED0;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(edi, eax)) goto loc_00263050; /* je: equal / zero */

loc_0026304C: ;
    edi = eax;
    SET_LO8(ebx, 1);

loc_00263050: ;
    PUSH32(esp, 0); sub_0023B9F0(); /* call 0x0023B9F0 */

loc_00263055: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0026305F(); return; } /* je: equal / zero */

loc_00263059: ;
    edx = MEM32(esp + 0x1C);
    g_seh_ebp = ebp; sub_00263071(); return; /* tail jmp 0x00263071 */

}

/**
 * sub_002630B0
 * Original: 0x002630B0 - 0x002631F4 (324 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002630B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002630B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1E8;
    edx = MEM32(0x777EC4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x29;
    edi = esp + 0x148;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edx, edi)) goto loc_0026310E; /* jle: less or equal (signed <=) */

loc_002630DD: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = ecx + ecx * 4;
    ecx = MEM32(ecx * 8 + 0x776F28);
    esi = MEM32(ecx + 4);
    ecx = 0x777EE4;

loc_002630F6: ;
    if (CMP_NE(MEM32(ecx + 4), esi)) goto loc_00263106; /* jne: not equal / not zero */

loc_002630FB: ;
    edi = MEM32(ecx);
    MEM32(esp + edi * 4 + 0x148) = eax;
    edi = 0; /* xor self */

loc_00263106: ;
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, edx)) goto loc_002630F6; /* jl: less (signed <) */

loc_0026310E: ;
    eax = esp + 8;
    MEM8(0x864228) = 0;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = 0x5D12B0;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = 0x862C40;
    MEM32(esp + 0x128) = 0x5D1274;
    MEM32(esp + 0x12C) = edi;
    MEM32(esp + 0x130) = edi;
    MEM32(esp + 0x134) = edi;
    MEM32(esp + 0x140) = edi;
    MEM32(esp + 0x144) = edi;
    MEM32(esp + 0x138) = 2;
    MEM32(esp + 0x13C) = 0x186A0;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0026318A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002631EE; /* je: equal / zero */

loc_0026318E: ;
    edi = edi;

loc_00263190: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0026319B: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864228);
    SET_LO8(edx, MEM8(esp + eax * 4 + 0x148));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x13);
    MEM8(ecx + ebx) = LO8(edx);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002631B6: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864228);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x13);
    MEM8(ecx + ebx + 1) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(0x864228);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x13);
    MEM8(edx + ebx + 2) = 0;
    SET_LO8(edx, MEM8(0x864228));
    SET_LO8(edx, LO8(edx) + 1);
    eax = esp + 8;
    MEM8(0x864228) = LO8(edx);
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_002631EA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00263190; /* jne: not equal / not zero */

loc_002631EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00263200
 * Original: 0x00263200 - 0x002632B9 (185 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263200(void)
{
    int _flags = 0; /* fallback flag var */

loc_00263200: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00263213; /* jne: not equal / not zero */

loc_0026320E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00263213: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026325B; /* je: equal / zero */

loc_00263239: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0026325B; /* jb: below (unsigned <) */

loc_00263242: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026324C: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00263254: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026327C; /* jne: not equal / not zero */

loc_0026325B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026326D: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00263275: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002632B9(); return; } /* je: equal / zero */

loc_0026327C: ;
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
    MEM8(eax + 0x34) = LO8(ebx);
    MEM16(eax + 0x36) = LO16(ebx);
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600DD0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002632C0
 * Original: 0x002632C0 - 0x0026332D (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002632C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002632C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002632D4: ;
    eax = ZX16(MEM16(edi + 0x36));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002632DF: ;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_BE(MEM16(edi + 0x36), LO16(ebx))) goto loc_00263327; /* jbe: below or equal (unsigned <=) */

loc_002632EA: ;
    /* nop */

loc_002632F0: ;
    eax = MEM32(edi + 0x38);
    eax = MEM32(eax + ebx * 8);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002632FD: ;
    ecx = MEM32(edi + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(ecx + ebx * 8 + 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026330C: ;
    edx = MEM32(edi + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(edx + ebx * 8 + 6);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026331B: ;
    eax = ZX16(MEM16(edi + 0x36));
    esp = esp + 0xC;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_002632F0; /* jl: less (signed <) */

loc_00263327: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263330
 * Original: 0x00263330 - 0x002633C9 (153 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00263330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0026333F: ;
    PUSH32(esp, 8);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00263349: ;
    esp = esp + 8;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(edi + 0x36) = LO16(eax);
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_002633C4; /* jbe: below or equal (unsigned <=) */

loc_00263355: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x2720);
    eax = eax << 3;
    PUSH32(esp, 0x601A8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0026336E: ;
    ebx = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp MEM16(edi + 0x36), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 0x38) = eax;
    if (CMP_BE(MEM16(edi + 0x36), LO16(ebx))) goto loc_002633C3; /* jbe: below or equal (unsigned <=) */

loc_0026337C: ;
    /* nop */

loc_00263380: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00263387: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, 0x10);
    MEM32(ecx + ebx * 8) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00263394: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002633A0; /* jns: not sign (positive) */

loc_0026339B: ;
    eax = eax | 0xFFFF0000u;

loc_002633A0: ;
    edx = MEM32(edi + 0x38);
    PUSH32(esp, 0x10);
    MEM16(edx + ebx * 8 + 4) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002633AF: ;
    ecx = MEM32(edi + 0x38);
    MEM16(ecx + ebx * 8 + 6) = LO16(eax);
    edx = ZX16(MEM16(edi + 0x36));
    esp = esp + 4;
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_00263380; /* jl: less (signed <) */

loc_002633C3: ;
    POP32(esp, ebx);

loc_002633C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002633D0
 * Original: 0x002633D0 - 0x002637F8 (1064 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002633D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002633D0: ;
    eax = MEM32(0x863D08);
    esp = esp - 0x454;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(eax, 3)) goto loc_002637EB; /* jne: not equal / not zero */

loc_002633E7: ;
    eax = ZX8(MEM8(ebx + 0x34));
    eax = eax - 0;
    if ((eax == 0)) goto loc_00263441; /* je: equal / zero */

loc_002633F0: ;
    eax--;
    if ((eax != 0)) goto loc_002637EB; /* jne: not equal / not zero */

loc_002633F7: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002637EB; /* jne: not equal / not zero */

loc_00263404: ;
    eax = 0; /* xor self */
    MEM8(0x864EB8) = 1;
    if (CMP_BE(MEM16(ebx + 0x36), LO16(eax))) goto loc_002637EB; /* jbe: below or equal (unsigned <=) */

loc_00263417: ;
    ecx = MEM32(ebx + 0x38);
    if (((int32_t)(MEM32(ecx + eax * 8) - 0) >= 0)) goto loc_0026342B; /* jns: not sign (positive) */

loc_00263420: ;
    edx = ecx;
    ecx = edx + eax * 8;
    MEM32(ecx) = MEM32(ecx) & 0x7FFFFFFF;

loc_0026342B: ;
    ecx = ZX16(MEM16(ebx + 0x36));
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00263417; /* jl: less (signed <) */

loc_00263434: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 4; return; /* ret */

loc_00263441: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002637EB; /* je: equal / zero */

loc_0026344E: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    eax = 0x862C40;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00263464: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_002637EB; /* je: equal / zero */

loc_00263470: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    ecx = esp + 0x54;
    edx = edx + 0x68;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, edi);
    goto loc_002634A0;

    /* nop */
    goto loc_002634A0;

    /* nop */

loc_002634A0: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(ecx + eax), 1)) goto loc_002636E3; /* jne: not equal / not zero */

loc_002634B0: ;
    eax = edx + -104;
    edi = esp + 0x24;
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_002634C0: ;
    if (TEST_Z(eax, eax)) goto loc_002634E8; /* je: equal / zero */

loc_002634C4: ;
    ebp = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    ebp = ebp & 3;
    ebp = ebp << 0x10;
    edx = edx & 0xFFFF;
    MEM16(esp + 0x1E) = 1;
    ebp = ebp | edx;
    MEM16(esp + 0x1C) = 0;

loc_002634E8: ;
    edx = MEM32(esp + 0x20);

loc_002634EC: ;
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 0x36), LO16(ecx))) goto loc_00263544; /* jbe: below or equal (unsigned <=) */

loc_002634F6: ;
    goto loc_00263500;

    /* nop */
    /* nop */

loc_00263500: ;
    eax = MEM32(ebx + 0x38);
    SET_LO16(edi, MEM16(esp + 0x1E));
    (void)0; /* cmp MEM16(eax + ecx * 8 + 6), LO16(edi) - flags set for next jcc */
    eax = eax + ecx * 8;
    if (CMP_NE(MEM16(eax + ecx * 8 + 6), LO16(edi))) goto loc_00263537; /* jne: not equal / not zero */

loc_00263512: ;
    SET_LO16(edi, MEM16(esp + 0x1C));
    if (CMP_NE(MEM16(eax + 4), LO16(edi))) goto loc_00263537; /* jne: not equal / not zero */

loc_0026351D: ;
    if (CMP_NE(MEM32(eax), ebp)) goto loc_00263537; /* jne: not equal / not zero */

loc_00263521: ;
    eax = MEM32(ebx + 0x38);
    edi = MEM32(eax + ecx * 8);
    eax = eax + ecx * 8;
    edi = edi | 0x80000000u;
    esi = 1;
    MEM32(eax) = edi;

loc_00263537: ;
    eax = ZX16(MEM16(ebx + 0x36));
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_00263500; /* jl: less (signed <) */

loc_00263540: ;
    if (TEST_NZ(esi, esi)) goto loc_00263561; /* jne: not equal / not zero */

loc_00263544: ;
    eax = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    esi++;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x30) = eax;

loc_00263561: ;
    eax = MEM32(esp + 0x2C);
    eax++;
    edx = edx + 0x6D0;
    (void)0; /* cmp eax, 0x80 - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_L(eax, 0x80)) goto loc_002634A0; /* jl: less (signed <) */

loc_0026357F: ;
    eax = ZX16(MEM16(ebx + 0x36));
    if (CMP_LE(eax & eax, 0)) goto loc_002635B3; /* jle: less or equal (signed <=) */

loc_00263587: ;
    ebx = MEM32(ebx + 0x38);
    /* nop */

loc_00263590: ;
    if (((int32_t)(MEM32(ebx) - 0) < 0)) goto loc_002635AD; /* js: sign (negative) */

loc_00263595: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    ecx = esp + ecx * 8 + 0x5C;
    MEM32(ecx) = edx;
    edx = MEM32(ebx + 4);
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = MEM32(ecx) | 0x80000000u;

loc_002635AD: ;
    ebx = ebx + 8;
    eax--;
    if ((eax != 0)) goto loc_00263590; /* jne: not equal / not zero */

loc_002635B3: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x29C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(eax, eax)) goto loc_002637E8; /* je: equal / zero */

loc_002635C9: ;
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_00263746; /* je: equal / zero */

loc_002635D5: ;
    ebp = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00263746; /* jle: less or equal (signed <=) */

loc_002635E1: ;
    ecx = ZX8(MEM8(esi + 0x299));
    MEM32(esp + 0x28) = ecx;
    /* nop */

loc_002635F0: ;
    ecx = MEM32(esp + 0x28);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00263649; /* jle: less or equal (signed <=) */

loc_002635F8: ;
    esi = MEM32(esp + 0x10);
    SET_LO16(edi, MEM16(esp + edx * 8 + 0x62));
    esi = ZX8(MEM8(esi + 0x299));
    ecx = esp + ebp * 8 + 0x34;
    /* nop */

loc_00263610: ;
    if (CMP_NE(LO16(edi), MEM16(eax + 6))) goto loc_0026363B; /* jne: not equal / not zero */

loc_00263616: ;
    SET_LO16(ebx, MEM16(esp + edx * 8 + 0x60));
    if (CMP_NE(LO16(ebx), MEM16(eax + 4))) goto loc_0026363B; /* jne: not equal / not zero */

loc_00263621: ;
    ebx = MEM32(esp + edx * 8 + 0x5C);
    if (CMP_NE(ebx, MEM32(eax))) goto loc_0026363B; /* jne: not equal / not zero */

loc_00263629: ;
    if (CMP_GE(ebp, 5)) goto loc_0026363B; /* jge: greater or equal (signed >=) */

loc_0026362E: ;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + edx * 8 + 0x60);
    MEM32(ecx + 4) = ebx;
    ebp++;
    ecx = ecx + 8;

loc_0026363B: ;
    eax = eax + 8;
    esi--;
    if ((esi != 0)) goto loc_00263610; /* jne: not equal / not zero */

loc_00263641: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);

loc_00263649: ;
    edx++;
    if (CMP_L(edx, ebx)) goto loc_002635F0; /* jl: less (signed <) */

loc_0026364E: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00263746; /* jle: less or equal (signed <=) */

loc_00263656: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    MEM8(edx + 0x298) = 1;
    if (TEST_NZ(eax, eax)) goto loc_0026366F; /* jne: not equal / not zero */

loc_0026366A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026366F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002636B7; /* je: equal / zero */

loc_00263695: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_002636B7; /* jb: below (unsigned <) */

loc_0026369E: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002636A8: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002636B0: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002636D8; /* jne: not equal / not zero */

loc_002636B7: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002636C9: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002636D1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00263721; /* je: equal / zero */

loc_002636D8: ;
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0); sub_00257BC0(); /* call 0x00257BC0 */

loc_002636E1: ;
    goto loc_00263723;

loc_002636E3: ;
    eax = ZX8(MEM8(edx + 0x38));
    eax--;
    if ((eax == 0)) goto loc_0026370A; /* je: equal / zero */

loc_002636EA: ;
    eax--;
    if ((eax != 0)) goto loc_002634EC; /* jne: not equal / not zero */

loc_002636F1: ;
    SET_LO16(eax, MEM16(edx + -4));
    SET_LO16(ecx, MEM16(edx + 0x44));
    ebp = MEM32(edx);
    MEM16(esp + 0x1E) = LO16(eax);
    MEM16(esp + 0x1C) = LO16(ecx);
    goto loc_002634EC;

loc_0026370A: ;
    SET_LO16(eax, MEM16(edx + 0x44));
    ebp = MEM32(edx);
    MEM16(esp + 0x1E) = 0x35;
    MEM16(esp + 0x1C) = LO16(eax);
    goto loc_002634EC;

loc_00263721: ;
    eax = 0; /* xor self */

loc_00263723: ;
    edi = MEM32(eax + 0x38);
    ecx = ebp + ebp;
    esi = esp + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    MEM8(eax + 0x34) = 1;
    ecx = MEM32(ecx + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00263746: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00263756: ;
    if (TEST_NZ(eax, eax)) goto loc_00263791; /* jne: not equal / not zero */

loc_0026375A: ;
    eax = MEM32(edi + 0x29C);
    if (TEST_Z(eax, eax)) goto loc_00263791; /* je: equal / zero */

loc_00263764: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00263784: ;
    esp = esp + 4;
    MEM32(edi + 0x29C) = 0;

loc_00263791: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(edi + 0x29C) = 0;
    MEM8(edi + 0x299) = 0;
    if (TEST_Z(ebx, ebx)) goto loc_002637E8; /* je: equal / zero */

loc_002637A6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x27C3);
    esi = ebx * 8;
    PUSH32(esp, 0x601A8C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002637BF: ;
    ecx = esi;
    edx = ecx;
    MEM32(edi + 0x29C) = eax;
    ecx = ecx >> 2;
    edi = eax;
    eax = MEM32(esp + 0x20);
    esi = esp + 0x6C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    esp = esp + 0x10;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM8(eax + 0x299) = LO8(ebx);

loc_002637E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002637EB: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 4; return; /* ret */

}

/**
 * sub_00263800
 * Original: 0x00263800 - 0x002638B8 (184 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00263800: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00263813; /* jne: not equal / not zero */

loc_0026380E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00263813: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00263861; /* je: equal / zero */

loc_00263839: ;
    if (CMP_B(MEM32(esi + 0x80), 0x140)) goto loc_00263861; /* jb: below (unsigned <) */

loc_00263845: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026384F: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026385A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00263885; /* jne: not equal / not zero */

loc_00263861: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00263873: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026387E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002638B8(); return; } /* je: equal / zero */

loc_00263885: ;
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
    MEM32(eax) = 0x600C98;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002638C0
 * Original: 0x002638C0 - 0x00263910 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002638C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002638C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002638D4: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002638DE: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 8;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0026390A; /* jle: less or equal (signed <=) */

loc_002638EA: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x3C;
    edi = edi;

loc_002638F0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002638FB: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 4;
    ebx++;
    ebp = ebp + 2;
    if (CMP_L(ebx, eax)) goto loc_002638F0; /* jl: less (signed <) */

loc_00263909: ;
    POP32(esp, ebp);

loc_0026390A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00263970
 * Original: 0x00263970 - 0x002643CD (2653 bytes, 753 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00263970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00263970: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, esi);
    eax = 0x862C40;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00263989: ;
    if (TEST_Z(eax, eax)) goto loc_002643C2; /* je: equal / zero */

loc_00263991: ;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 0x1D - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0x1D)) goto loc_002639AB; /* je: equal / zero */

loc_0026399D: ;
    if (CMP_EQ(eax, 0x46)) goto loc_002639AB; /* je: equal / zero */

loc_002639A2: ;
    if (CMP_NE(eax, 0x47)) goto loc_00263A6C; /* jne: not equal / not zero */

loc_002639AB: ;
    SET_LO8(eax, MEM8(ebx + 0x34));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_00263A6C; /* jl: less (signed <) */

loc_002639B6: ;
    if (CMP_G(LO8(eax), 1)) goto loc_00263A6C; /* jg: greater (signed >) */

loc_002639BE: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00263A71; /* jne: not equal / not zero */

loc_002639CB: ;
    PUSH32(esp, esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_002639D6: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002643C0; /* je: equal / zero */

loc_002639E0: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_002639EA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00263A6C; /* je: equal / zero */

loc_002639F1: ;
    PUSH32(esp, 0); sub_00257D50(); /* call 0x00257D50 */

loc_002639F6: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00263A6C; /* je: equal / zero */

loc_002639FC: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00263A1D; /* je: equal / zero */

loc_00263A05: ;
    eax--;
    if ((eax == 0)) goto loc_00263A1D; /* je: equal / zero */

loc_00263A08: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00263A10: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00263A1D: ;
    MEM8(esi + 0x34) = 2;
    ecx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = ecx;
    eax = MEM32(ebx + 0x38);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00263A52; /* jle: less or equal (signed <=) */

loc_00263A30: ;
    edx = ebx;
    eax = esi + 0x3C;
    edx = edx - esi;
    goto loc_00263A40;

    /* nop */

loc_00263A40: ;
    SET_LO16(ebp, MEM16(edx + eax));
    MEM16(eax) = LO16(ebp);
    ebp = MEM32(ebx + 0x38);
    ecx++;
    eax = eax + 2;
    if (CMP_L(ecx, ebp)) goto loc_00263A40; /* jl: less (signed <) */

loc_00263A52: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00263A5E: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00263A6C: ;
    SET_LO8(eax, MEM8(0x862C5C));

loc_00263A71: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    if (CMP_A(ecx, 3)) goto loc_002643C0; /* ja: above (unsigned >) */

loc_00263A7E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2643D0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00263A85u) goto loc_00263A85;
    if (_jt == 0x00263DE2u) goto loc_00263DE2;
    if (_jt == 0x00264112u) goto loc_00264112;
    if (_jt == 0x00264275u) goto loc_00264275;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00263A85: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002643C0; /* jne: not equal / not zero */

loc_00263A8D: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_002649C0(); /* call 0x002649C0 */

loc_00263A96: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x7270;
    edx = 0x1C;
    esi = esi | 0xFFFFFFFFu;
    goto loc_00263AB0;

    /* nop */

loc_00263AB0: ;
    if (CMP_NE(MEM8(eax + -1232), 1)) goto loc_00263AC6; /* jne: not equal / not zero */

loc_00263AB9: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00263AC6; /* je: equal / zero */

loc_00263ABF: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_00263AC6: ;
    if (CMP_NE(MEM8(eax + 0x200), 1)) goto loc_00263AE0; /* jne: not equal / not zero */

loc_00263ACF: ;
    ecx = MEM32(eax + 0x6D0);
    if (TEST_Z(ecx, ecx)) goto loc_00263AE0; /* je: equal / zero */

loc_00263AD9: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_00263AE0: ;
    if (CMP_NE(MEM8(eax + 0x8D0), 1)) goto loc_00263AFA; /* jne: not equal / not zero */

loc_00263AE9: ;
    ecx = MEM32(eax + 0xDA0);
    if (TEST_Z(ecx, ecx)) goto loc_00263AFA; /* je: equal / zero */

loc_00263AF3: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_00263AFA: ;
    if (CMP_NE(MEM8(eax + 0xFA0), 1)) goto loc_00263B14; /* jne: not equal / not zero */

loc_00263B03: ;
    ecx = MEM32(eax + 0x1470);
    if (TEST_Z(ecx, ecx)) goto loc_00263B14; /* je: equal / zero */

loc_00263B0D: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_00263B14: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_00263AB0; /* jne: not equal / not zero */

loc_00263B1C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00263CBB; /* jle: less or equal (signed <=) */

loc_00263B33: ;
    ebp = ecx;
    ebp = ebp + 0x3C;
    ebx = 1;
    /* nop */

loc_00263B40: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp);
    edx = MEM32(0x84A5F8);
    SET_LO8(eax, 0); /* xor self */
    MEM32(esp + 0x18) = esi;
    edx = edx + 0x6DAC;
    edi = 0x1C;
    goto loc_00263B60;

    /* nop */

loc_00263B60: ;
    if (CMP_NE(MEM8(edx + -12), 1)) goto loc_00263B9C; /* jne: not equal / not zero */

loc_00263B66: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx);
    if (CMP_NE(ecx, esi)) goto loc_00263B9C; /* jne: not equal / not zero */

loc_00263B6D: ;
    ecx = MEM32(edx + 0x4C4);
    if (TEST_Z(ecx, ecx)) goto loc_00263B9C; /* je: equal / zero */

loc_00263B77: ;
    if (CMP_EQ(MEM8(ecx + 0x3C), 0)) goto loc_00263B9C; /* je: equal / zero */

loc_00263B7D: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_00263B90; /* je: equal / zero */

loc_00263B85: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263B93; /* jne: not equal / not zero */

loc_00263B90: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263B93: ;
    MEM16(ecx + 0xC6E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263B9C: ;
    if (CMP_NE(MEM8(edx + 0x6C4), 1)) goto loc_00263BDF; /* jne: not equal / not zero */

loc_00263BA5: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x6D0);
    if (CMP_NE(ecx, esi)) goto loc_00263BDF; /* jne: not equal / not zero */

loc_00263BB0: ;
    ecx = MEM32(edx + 0xB94);
    if (TEST_Z(ecx, ecx)) goto loc_00263BDF; /* je: equal / zero */

loc_00263BBA: ;
    if (CMP_EQ(MEM8(ecx + 0x3C), 0)) goto loc_00263BDF; /* je: equal / zero */

loc_00263BC0: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_00263BD3; /* je: equal / zero */

loc_00263BC8: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263BD6; /* jne: not equal / not zero */

loc_00263BD3: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263BD6: ;
    MEM16(ecx + 0xC6E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263BDF: ;
    if (CMP_NE(MEM8(edx + 0xD94), 1)) goto loc_00263C22; /* jne: not equal / not zero */

loc_00263BE8: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xDA0);
    if (CMP_NE(ecx, esi)) goto loc_00263C22; /* jne: not equal / not zero */

loc_00263BF3: ;
    ecx = MEM32(edx + 0x1264);
    if (TEST_Z(ecx, ecx)) goto loc_00263C22; /* je: equal / zero */

loc_00263BFD: ;
    if (CMP_EQ(MEM8(ecx + 0x3C), 0)) goto loc_00263C22; /* je: equal / zero */

loc_00263C03: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_00263C16; /* je: equal / zero */

loc_00263C0B: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263C19; /* jne: not equal / not zero */

loc_00263C16: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263C19: ;
    MEM16(ecx + 0xC6E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263C22: ;
    if (CMP_NE(MEM8(edx + 0x1464), 1)) goto loc_00263C65; /* jne: not equal / not zero */

loc_00263C2B: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x1470);
    if (CMP_NE(ecx, esi)) goto loc_00263C65; /* jne: not equal / not zero */

loc_00263C36: ;
    ecx = MEM32(edx + 0x1934);
    if (TEST_Z(ecx, ecx)) goto loc_00263C65; /* je: equal / zero */

loc_00263C40: ;
    if (CMP_EQ(MEM8(ecx + 0x3C), 0)) goto loc_00263C65; /* je: equal / zero */

loc_00263C46: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_00263C59; /* je: equal / zero */

loc_00263C4E: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263C5C; /* jne: not equal / not zero */

loc_00263C59: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263C5C: ;
    MEM16(ecx + 0xC6E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263C65: ;
    edx = edx + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_00263B60; /* jne: not equal / not zero */

loc_00263C72: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00263CA0; /* jne: not equal / not zero */

loc_00263C76: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_00263C8B: ;
    ecx = ebx;
    edx = esp + 0x1C;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_00263C98: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;

loc_00263CA0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x38);
    eax++;
    ebp = ebp + 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_00263B40; /* jl: less (signed <) */

loc_00263CBB: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00263DAF; /* je: equal / zero */

loc_00263CC7: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00263CD9: ;
    ebp = eax;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00263CE9; /* jne: not equal / not zero */

loc_00263CE4: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00263CE9: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00263D37; /* je: equal / zero */

loc_00263D0F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x140)) goto loc_00263D37; /* jb: below (unsigned <) */

loc_00263D1B: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00263D25: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00263D30: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00263D5B; /* jne: not equal / not zero */

loc_00263D37: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00263D49: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00263D54: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00263DAF; /* je: equal / zero */

loc_00263D5B: ;
    PUSH32(esp, 0); sub_00257D50(); /* call 0x00257D50 */

loc_00263D60: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00263DAF; /* je: equal / zero */

loc_00263D66: ;
    ecx = MEM32(esp + 0x20);
    MEM8(esi + 0x34) = 2;
    MEM32(esi + 0x38) = 0;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_00263D95; /* je: equal / zero */

loc_00263D7B: ;
    goto loc_00263D80;

    /* nop */

loc_00263D80: ;
    SET_LO16(edi, MEM16(eax + 8));
    edx = MEM32(esi + 0x38);
    MEM16(esi + edx * 2 + 0x3C) = LO16(edi);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_00263D80; /* jne: not equal / not zero */

loc_00263D95: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00263DA1: ;
    ecx = MEM32(ebp + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00263DAF: ;
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00263DB8: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_002643C0; /* je: equal / zero */

loc_00263DC8: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00263DD2: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00263DE2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002643C0; /* jne: not equal / not zero */

loc_00263DEA: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_002649C0(); /* call 0x002649C0 */

loc_00263DF3: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x7270;
    edx = 0x1C;
    esi = esi | 0xFFFFFFFFu;

loc_00263E05: ;
    if (CMP_NE(MEM8(eax + -1232), 2)) goto loc_00263E18; /* jne: not equal / not zero */

loc_00263E0E: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00263E18; /* je: equal / zero */

loc_00263E14: ;
    MEM16(ecx + 0x4E) = LO16(esi);

loc_00263E18: ;
    if (CMP_NE(MEM8(eax + 0x200), 2)) goto loc_00263E2F; /* jne: not equal / not zero */

loc_00263E21: ;
    ecx = MEM32(eax + 0x6D0);
    if (TEST_Z(ecx, ecx)) goto loc_00263E2F; /* je: equal / zero */

loc_00263E2B: ;
    MEM16(ecx + 0x4E) = LO16(esi);

loc_00263E2F: ;
    if (CMP_NE(MEM8(eax + 0x8D0), 2)) goto loc_00263E46; /* jne: not equal / not zero */

loc_00263E38: ;
    ecx = MEM32(eax + 0xDA0);
    if (TEST_Z(ecx, ecx)) goto loc_00263E46; /* je: equal / zero */

loc_00263E42: ;
    MEM16(ecx + 0x4E) = LO16(esi);

loc_00263E46: ;
    if (CMP_NE(MEM8(eax + 0xFA0), 2)) goto loc_00263E5D; /* jne: not equal / not zero */

loc_00263E4F: ;
    ecx = MEM32(eax + 0x1470);
    if (TEST_Z(ecx, ecx)) goto loc_00263E5D; /* je: equal / zero */

loc_00263E59: ;
    MEM16(ecx + 0x4E) = LO16(esi);

loc_00263E5D: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_00263E05; /* jne: not equal / not zero */

loc_00263E65: ;
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x38);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00263FEE; /* jle: less or equal (signed <=) */

loc_00263E76: ;
    ebp = ebp + 0x3C;
    /* nop */

loc_00263E80: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp);
    edx = MEM32(0x84A5F8);
    SET_LO8(eax, 0); /* xor self */
    MEM32(esp + 0x18) = esi;
    edx = edx + 0x6DAC;
    edi = 0x1C;
    goto loc_00263EA0;

    /* nop */

loc_00263EA0: ;
    if (CMP_NE(MEM8(edx + -12), 2)) goto loc_00263EDA; /* jne: not equal / not zero */

loc_00263EA6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx);
    if (CMP_NE(ecx, esi)) goto loc_00263EDA; /* jne: not equal / not zero */

loc_00263EAD: ;
    ecx = MEM32(edx + 0x4C4);
    if (TEST_Z(ecx, ecx)) goto loc_00263EDA; /* je: equal / zero */

loc_00263EB7: ;
    if (CMP_EQ(MEM8(ecx + 0x54), 0)) goto loc_00263EDA; /* je: equal / zero */

loc_00263EBD: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00263ED1; /* je: equal / zero */

loc_00263EC6: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263ED4; /* jne: not equal / not zero */

loc_00263ED1: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263ED4: ;
    MEM16(ecx + 0x4E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263EDA: ;
    if (CMP_NE(MEM8(edx + 0x6C4), 2)) goto loc_00263F1B; /* jne: not equal / not zero */

loc_00263EE3: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x6D0);
    if (CMP_NE(ecx, esi)) goto loc_00263F1B; /* jne: not equal / not zero */

loc_00263EEE: ;
    ecx = MEM32(edx + 0xB94);
    if (TEST_Z(ecx, ecx)) goto loc_00263F1B; /* je: equal / zero */

loc_00263EF8: ;
    if (CMP_EQ(MEM8(ecx + 0x54), 0)) goto loc_00263F1B; /* je: equal / zero */

loc_00263EFE: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00263F12; /* je: equal / zero */

loc_00263F07: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263F15; /* jne: not equal / not zero */

loc_00263F12: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263F15: ;
    MEM16(ecx + 0x4E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263F1B: ;
    if (CMP_NE(MEM8(edx + 0xD94), 2)) goto loc_00263F5C; /* jne: not equal / not zero */

loc_00263F24: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xDA0);
    if (CMP_NE(ecx, esi)) goto loc_00263F5C; /* jne: not equal / not zero */

loc_00263F2F: ;
    ecx = MEM32(edx + 0x1264);
    if (TEST_Z(ecx, ecx)) goto loc_00263F5C; /* je: equal / zero */

loc_00263F39: ;
    if (CMP_EQ(MEM8(ecx + 0x54), 0)) goto loc_00263F5C; /* je: equal / zero */

loc_00263F3F: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00263F53; /* je: equal / zero */

loc_00263F48: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263F56; /* jne: not equal / not zero */

loc_00263F53: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263F56: ;
    MEM16(ecx + 0x4E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263F5C: ;
    if (CMP_NE(MEM8(edx + 0x1464), 2)) goto loc_00263F9D; /* jne: not equal / not zero */

loc_00263F65: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x1470);
    if (CMP_NE(ecx, esi)) goto loc_00263F9D; /* jne: not equal / not zero */

loc_00263F70: ;
    ecx = MEM32(edx + 0x1934);
    if (TEST_Z(ecx, ecx)) goto loc_00263F9D; /* je: equal / zero */

loc_00263F7A: ;
    if (CMP_EQ(MEM8(ecx + 0x54), 0)) goto loc_00263F9D; /* je: equal / zero */

loc_00263F80: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00263F94; /* je: equal / zero */

loc_00263F89: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00263F97; /* jne: not equal / not zero */

loc_00263F94: ;
    eax = eax | 0xFFFFFFFFu;

loc_00263F97: ;
    MEM16(ecx + 0x4E) = LO16(eax);
    SET_LO8(eax, 1);

loc_00263F9D: ;
    edx = edx + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_00263EA0; /* jne: not equal / not zero */

loc_00263FAA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00263FDB; /* jne: not equal / not zero */

loc_00263FAE: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_00263FC3: ;
    ecx = 1;
    edx = esp + 0x1C;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_00263FD3: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;

loc_00263FDB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x38);
    ebx++;
    ebp = ebp + 2;
    if (CMP_L(ebx, ecx)) goto loc_00263E80; /* jl: less (signed <) */

loc_00263FEE: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_002640DF; /* je: equal / zero */

loc_00263FFA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0026400C: ;
    ebp = eax;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0026401C; /* jne: not equal / not zero */

loc_00264017: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026401C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0026406A; /* je: equal / zero */

loc_00264042: ;
    if (CMP_B(MEM32(esi + 0x80), 0x140)) goto loc_0026406A; /* jb: below (unsigned <) */

loc_0026404E: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00264058: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00264063: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0026408E; /* jne: not equal / not zero */

loc_0026406A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026407C: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00264087: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002640DF; /* je: equal / zero */

loc_0026408E: ;
    PUSH32(esp, 0); sub_00257D50(); /* call 0x00257D50 */

loc_00264093: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002640DF; /* je: equal / zero */

loc_00264099: ;
    ecx = MEM32(esp + 0x20);
    MEM8(esi + 0x34) = 3;
    MEM32(esi + 0x38) = 0;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_002640C5; /* je: equal / zero */

loc_002640AE: ;
    edi = edi;

loc_002640B0: ;
    SET_LO16(edi, MEM16(eax + 8));
    edx = MEM32(esi + 0x38);
    MEM16(esi + edx * 2 + 0x3C) = LO16(edi);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_002640B0; /* jne: not equal / not zero */

loc_002640C5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002640D1: ;
    ecx = MEM32(ebp + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002640DF: ;
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_002640E8: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_002643C0; /* je: equal / zero */

loc_002640F8: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00264102: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00264112: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002643C0; /* je: equal / zero */

loc_0026411A: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0026412C: ;
    if (TEST_Z(eax, eax)) goto loc_002643C0; /* je: equal / zero */

loc_00264134: ;
    SET_LO8(ecx, MEM8(eax + 0x9DA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002643C0; /* je: equal / zero */

loc_00264142: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x9D8);
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_002643C0; /* jle: less or equal (signed <=) */

loc_0026415C: ;
    ecx = MEM32(0x84A5F8);
    ecx = ecx + 0x6DAC;
    ebp = edi;
    MEM32(esp + 0x14) = ecx;
    ebp = ebp + 0x3C;

loc_00264171: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp);
    eax = MEM32(esp + 0x14);
    edi = 0x1C;
    edi = edi;

loc_00264180: ;
    if (CMP_NE(MEM8(eax + -12), 1)) goto loc_002641AB; /* jne: not equal / not zero */

loc_00264186: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(ecx, edx)) goto loc_002641AB; /* jne: not equal / not zero */

loc_0026418D: ;
    ecx = MEM32(eax + 0x4C4);
    if (TEST_Z(ecx, ecx)) goto loc_002641AB; /* je: equal / zero */

loc_00264197: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0xC6E);
    if (CMP_NE(ebx, esi)) goto loc_002641AB; /* jne: not equal / not zero */

loc_002641A2: ;
    MEM16(ecx + 0xC6E) = 0xFFFF;

loc_002641AB: ;
    if (CMP_NE(MEM8(eax + 0x6C4), 1)) goto loc_002641DD; /* jne: not equal / not zero */

loc_002641B4: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6D0);
    if (CMP_NE(ecx, edx)) goto loc_002641DD; /* jne: not equal / not zero */

loc_002641BF: ;
    ecx = MEM32(eax + 0xB94);
    if (TEST_Z(ecx, ecx)) goto loc_002641DD; /* je: equal / zero */

loc_002641C9: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0xC6E);
    if (CMP_NE(ebx, esi)) goto loc_002641DD; /* jne: not equal / not zero */

loc_002641D4: ;
    MEM16(ecx + 0xC6E) = 0xFFFF;

loc_002641DD: ;
    if (CMP_NE(MEM8(eax + 0xD94), 1)) goto loc_0026420F; /* jne: not equal / not zero */

loc_002641E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xDA0);
    if (CMP_NE(ecx, edx)) goto loc_0026420F; /* jne: not equal / not zero */

loc_002641F1: ;
    ecx = MEM32(eax + 0x1264);
    if (TEST_Z(ecx, ecx)) goto loc_0026420F; /* je: equal / zero */

loc_002641FB: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0xC6E);
    if (CMP_NE(ebx, esi)) goto loc_0026420F; /* jne: not equal / not zero */

loc_00264206: ;
    MEM16(ecx + 0xC6E) = 0xFFFF;

loc_0026420F: ;
    if (CMP_NE(MEM8(eax + 0x1464), 1)) goto loc_00264241; /* jne: not equal / not zero */

loc_00264218: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1470);
    if (CMP_NE(ecx, edx)) goto loc_00264241; /* jne: not equal / not zero */

loc_00264223: ;
    ecx = MEM32(eax + 0x1934);
    if (TEST_Z(ecx, ecx)) goto loc_00264241; /* je: equal / zero */

loc_0026422D: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0xC6E);
    if (CMP_NE(ebx, esi)) goto loc_00264241; /* jne: not equal / not zero */

loc_00264238: ;
    MEM16(ecx + 0xC6E) = 0xFFFF;

loc_00264241: ;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_00264180; /* jne: not equal / not zero */

loc_0026424D: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x38);
    eax++;
    ebp = ebp + 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00264171; /* jl: less (signed <) */

loc_00264268: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00264275: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002643C0; /* je: equal / zero */

loc_0026427D: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0026428F: ;
    if (TEST_Z(eax, eax)) goto loc_002643C0; /* je: equal / zero */

loc_00264297: ;
    SET_LO8(ecx, MEM8(eax + 0x9DA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002643C0; /* je: equal / zero */

loc_002642A5: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x9D8);
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_002643C0; /* jle: less or equal (signed <=) */

loc_002642BF: ;
    ecx = MEM32(0x84A5F8);
    ecx = ecx + 0x6DAC;
    ebp = edi;
    MEM32(esp + 0x14) = ecx;
    ebp = ebp + 0x3C;
    goto loc_002642E0;

    /* nop */
    /* nop */

loc_002642E0: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp);
    eax = MEM32(esp + 0x14);
    edi = 0x1C;
    /* nop */

loc_002642F0: ;
    if (CMP_NE(MEM8(eax + -12), 2)) goto loc_00264315; /* jne: not equal / not zero */

loc_002642F6: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(ecx, edx)) goto loc_00264315; /* jne: not equal / not zero */

loc_002642FD: ;
    ecx = MEM32(eax + 0x4C4);
    if (TEST_Z(ecx, ecx)) goto loc_00264315; /* je: equal / zero */

loc_00264307: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x4E);
    if (CMP_NE(ebx, esi)) goto loc_00264315; /* jne: not equal / not zero */

loc_0026430F: ;
    MEM16(ecx + 0x4E) = 0xFFFF;

loc_00264315: ;
    if (CMP_NE(MEM8(eax + 0x6C4), 2)) goto loc_00264341; /* jne: not equal / not zero */

loc_0026431E: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6D0);
    if (CMP_NE(ecx, edx)) goto loc_00264341; /* jne: not equal / not zero */

loc_00264329: ;
    ecx = MEM32(eax + 0xB94);
    if (TEST_Z(ecx, ecx)) goto loc_00264341; /* je: equal / zero */

loc_00264333: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x4E);
    if (CMP_NE(ebx, esi)) goto loc_00264341; /* jne: not equal / not zero */

loc_0026433B: ;
    MEM16(ecx + 0x4E) = 0xFFFF;

loc_00264341: ;
    if (CMP_NE(MEM8(eax + 0xD94), 2)) goto loc_0026436D; /* jne: not equal / not zero */

loc_0026434A: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xDA0);
    if (CMP_NE(ecx, edx)) goto loc_0026436D; /* jne: not equal / not zero */

loc_00264355: ;
    ecx = MEM32(eax + 0x1264);
    if (TEST_Z(ecx, ecx)) goto loc_0026436D; /* je: equal / zero */

loc_0026435F: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x4E);
    if (CMP_NE(ebx, esi)) goto loc_0026436D; /* jne: not equal / not zero */

loc_00264367: ;
    MEM16(ecx + 0x4E) = 0xFFFF;

loc_0026436D: ;
    if (CMP_NE(MEM8(eax + 0x1464), 2)) goto loc_00264399; /* jne: not equal / not zero */

loc_00264376: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1470);
    if (CMP_NE(ecx, edx)) goto loc_00264399; /* jne: not equal / not zero */

loc_00264381: ;
    ecx = MEM32(eax + 0x1934);
    if (TEST_Z(ecx, ecx)) goto loc_00264399; /* je: equal / zero */

loc_0026438B: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x4E);
    if (CMP_NE(ebx, esi)) goto loc_00264399; /* jne: not equal / not zero */

loc_00264393: ;
    MEM16(ecx + 0x4E) = 0xFFFF;

loc_00264399: ;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_002642F0; /* jne: not equal / not zero */

loc_002643A5: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x38);
    eax++;
    ebp = ebp + 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_002642E0; /* jl: less (signed <) */

loc_002643C0: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_002643C2: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
