/**
 * Burnout 3 - Recompiled code chunk 28
 * Functions: 250 (0x00277820 - 0x0028A2F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00277820
 * Original: 0x00277820 - 0x00277886 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00277820: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(0x849800);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 4);
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEM8(0x776171) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);
    if (CMP_EQ(esi, ecx)) goto loc_00277884; /* je: equal / zero */

loc_00277847: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00277852: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00277874; /* je: equal / zero */

loc_00277859: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027786A: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00277874: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00277881: ;
    esp = esp + 0xC;

loc_00277884: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00277890
 * Original: 0x00277890 - 0x002778C6 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277890: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002778C6(); return; } /* je: equal / zero */

loc_0027789C: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x838);
    edx = MEM32(eax + 0x83C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002778BC: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_002778C3: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002778E7(); return; /* tail jmp 0x002778E7 */

}

/**
 * sub_00277940
 * Original: 0x00277940 - 0x00277CC3 (899 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277940(void)
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

loc_00277940: ;
    eax = 0x1058;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0027794A: ;
    MEM8(0x87583D) = MEM8(0x87583D) + 1;
    SET_LO8(edx, MEM8(0x862D11));
    PUSH32(esp, ebx);
    eax = SX8(LO8(edx));
    ebx = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_GE(eax, ebx)) goto loc_00277969; /* jge: greater or equal (signed >=) */

loc_00277961: ;
    MEM8(0x862D11) = LO8(ebx);
    SET_LO8(edx, LO8(ebx));

loc_00277969: ;
    eax = MEM32(esp + 0x1068);
    ecx = SX8(LO8(edx));
    if (CMP_LE(ecx, eax)) goto loc_0027797E; /* jle: less or equal (signed <=) */

loc_00277977: ;
    MEM8(0x862D11) = LO8(eax);
    SET_LO8(edx, LO8(eax));

loc_0027797E: ;
    SET_LO8(eax, MEM8(0x862D10));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_00277A07; /* jne: not equal / not zero */

loc_00277989: ;
    ebp = ZX16(MEM16(esp + 0x1074));
    edi = SX8(LO8(edx));
    esi = 1;
    ecx = edi;
    esi = esi << LO8(ecx);
    if (TEST_Z(ebp, esi)) goto loc_00277A07; /* je: equal / zero */

loc_002779A1: ;
    edx = 2;
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_00277AD2; /* je: equal / zero */

loc_002779AE: ;
    esi = MEM32(esp + 0x1070);
    ecx = edi + -1;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    if (CMP_L(ecx, ebx)) ecx = MEM32(esp + 0x1070); /* cmovl */

loc_002779C2: ;
    if (CMP_EQ(ecx, edi)) goto loc_002779D1; /* je: equal / zero */

loc_002779C6: ;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(ebp, eax)) goto loc_002779E2; /* je: equal / zero */

loc_002779D1: ;
    eax = MEM32(esp + 0x1080);
    if (TEST_Z(eax, eax)) goto loc_002779EB; /* je: equal / zero */

loc_002779DC: ;
    if (CMP_EQ(MEM8(ecx + eax), 0)) goto loc_002779EB; /* je: equal / zero */

loc_002779E2: ;
    ecx--;
    if (CMP_GE(ecx, ebx)) goto loc_002779C2; /* jge: greater or equal (signed >=) */

loc_002779E7: ;
    ecx = esi;
    goto loc_002779C2;

loc_002779EB: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x862D11) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277A6C; /* jne: not equal / not zero */

loc_002779FD: ;
    xmm0 = MEMF(0x7F9F48); /* movss */
    goto loc_00277A6C;

loc_00277A07: ;
    SET_LO16(esi, MEM16(esp + 0x1074));
    edi = SX8(LO8(edx));
    edx = MEM32(esp + 0x1070);
    ecx = edi + 1;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = ebx; /* cmovg */

loc_00277A21: ;
    if (CMP_EQ(ecx, edi)) goto loc_00277A33; /* je: equal / zero */

loc_00277A25: ;
    eax = 1;
    eax = eax << LO8(ecx);
    ebp = ZX16(LO16(esi));
    if (TEST_Z(ebp, eax)) goto loc_00277A44; /* je: equal / zero */

loc_00277A33: ;
    eax = MEM32(esp + 0x1080);
    if (TEST_Z(eax, eax)) goto loc_00277A4D; /* je: equal / zero */

loc_00277A3E: ;
    if (CMP_EQ(MEM8(ecx + eax), 0)) goto loc_00277A4D; /* je: equal / zero */

loc_00277A44: ;
    ecx++;
    if (CMP_LE(ecx, edx)) goto loc_00277A21; /* jle: less or equal (signed <=) */

loc_00277A49: ;
    ecx = ebx;
    goto loc_00277A21;

loc_00277A4D: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x862D11) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277A67; /* jne: not equal / not zero */

loc_00277A5F: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00277A67: ;
    edx = 2;

loc_00277A6C: ;
    (void)0; /* cmp MEM32(0x75E500), edx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), edx)) goto loc_00277A92; /* jne: not equal / not zero */

loc_00277A7A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00277AD2; /* ja: above (unsigned >) */

loc_00277A92: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(0x75E500) = edx;
    ecx = 0xAD2;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00277AD2: ;
    edx = 0; /* xor self */
    MEM32(esp + 0x15) = edx;
    ebp = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x19) = edx;
    ecx = 0xF;
    edi = esp + 0x2C;
    MEM32(esp + 0x28) = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(esp + 0x14) = LO8(eax);
    (void)0; /* cmp ebx, MEM32(esp + 0x1070) - flags set for next jcc */
    MEM32(esp + 0x1D) = edx;
    MEM16(esp + 0x21) = LO16(edx);
    MEM8(esp + 0x23) = LO8(edx);
    edi = ebx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_G(ebx, MEM32(esp + 0x1070))) goto loc_00277BF9; /* jg: greater (signed >) */

loc_00277B13: ;
    ecx = MEM32(esp + 0x106C);
    eax = ZX16(MEM16(esp + 0x1074));
    edx = MEM32(0x849800);
    esi = ecx + ebx;
    esi = esi << 2;
    ebx = ebx << 8;
    MEM32(esp + 0x24) = eax;
    ebx = esp + ebx + 0x68;
    /* nop */

loc_00277B40: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(ecx, eax)) goto loc_00277BE0; /* je: equal / zero */

loc_00277B55: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(0x77616E) = 0xFF;
    if (CMP_NE(eax, edi)) goto loc_00277B82; /* jne: not equal / not zero */

loc_00277B67: ;
    MEM32(esp + 0x10) = ebp;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0xFF;
    goto loc_00277B97;

loc_00277B82: ;
    MEM8(0x776171) = 0x32;
    MEM8(0x776170) = 0x32;
    MEM8(0x77616F) = 0xAF;

loc_00277B97: ;
    eax = MEM32(edi * 4 + 0x849E10);
    if (TEST_Z(eax, eax)) goto loc_00277BC6; /* je: equal / zero */

loc_00277BA2: ;
    ecx = MEM32(esi + edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60315C);
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00277BB7: ;
    edx = MEM32(0x849800);
    esp = esp + 0x14;
    MEM32(esp + ebp * 4 + 0x28) = ebx;
    goto loc_00277BCD;

loc_00277BC6: ;
    eax = MEM32(esi + edx);
    MEM32(esp + ebp * 4 + 0x28) = eax;

loc_00277BCD: ;
    eax = MEM32(esp + 0x1080);
    if (TEST_Z(eax, eax)) goto loc_00277BDF; /* je: equal / zero */

loc_00277BD8: ;
    SET_LO8(ecx, MEM8(edi + eax));
    MEM8(esp + ebp + 0x14) = LO8(ecx);

loc_00277BDF: ;
    ebp++;

loc_00277BE0: ;
    eax = MEM32(esp + 0x1070);
    edi++;
    esi = esi + 4;
    ebx = ebx + 0x100;
    if (CMP_LE(edi, eax)) goto loc_00277B40; /* jle: less or equal (signed <=) */

loc_00277BF9: ;
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277C40; /* jne: not equal / not zero */

loc_00277C04: ;
    SET_LO8(eax, MEM8(esp + 0x1074));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00277C2C; /* je: equal / zero */

loc_00277C0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00226F80(); /* call 0x00226F80 */

loc_00277C16: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00277C1E: ;
    ebx = eax;
    eax = 6;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00277C2A: ;
    goto loc_00277C40;

loc_00277C2C: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00277C33: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x24);
    eax = eax + 0x24;
    MEM8(edx + 0x30) = 1;

loc_00277C40: ;
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1074);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_00277C5C: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    MEM32(0x849E10) = eax;
    MEM32(0x849E14) = eax;
    MEM32(0x849E18) = eax;
    MEM32(0x849E1C) = eax;
    MEM32(0x849E20) = eax;
    MEM32(0x849E24) = eax;
    MEM32(0x849E28) = eax;
    MEM32(0x849E2C) = eax;
    MEM32(0x849E30) = eax;
    MEM32(0x849E34) = eax;
    MEM32(0x849E38) = eax;
    MEM32(0x849E3C) = eax;
    MEM32(0x849E40) = eax;
    MEM32(0x849E44) = eax;
    MEM32(0x849E48) = eax;
    POP32(esp, ebp);
    MEM16(0x849E0C) = 0;
    MEM32(0x849E4C) = eax;
    POP32(esp, ebx);
    esp = esp + 0x1058;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00277CD0
 * Original: 0x00277CD0 - 0x002780E2 (1042 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277CD0(void)
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

loc_00277CD0: ;
    eax = 0x18C8;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00277CDA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(ecx));
    eax = esp + 0x110;
    ecx = 0x10;
    edi = edi;

loc_00277CF0: ;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = 0;
    MEM8(eax + 9) = 0;
    edx = 0; /* xor self */
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0x89) = 0;
    MEM16(eax + -256) = LO16(edx);
    MEM16(eax + -128) = LO16(edx);
    eax = eax + 0x18C;
    ecx--;
    if ((ecx != 0)) goto loc_00277CF0; /* jne: not equal / not zero */

loc_00277D2C: ;
    SET_LO8(edx, MEM8(0x862D11));
    SET_LO8(ebx, MEM8(0x87583C));
    eax = MEM32(esp + 0x18D8);
    ecx = SX8(LO8(edx));
    SET_LO8(ebx, LO8(ebx) + 1);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(0x87583C) = LO8(ebx);
    if (CMP_GE(ecx, eax)) goto loc_00277D56; /* jge: greater or equal (signed >=) */

loc_00277D4E: ;
    SET_LO8(edx, LO8(eax));
    MEM8(0x862D11) = LO8(edx);

loc_00277D56: ;
    eax = MEM32(esp + 0x18DC);
    ecx = SX8(LO8(edx));
    if (CMP_LE(ecx, eax)) goto loc_00277D6C; /* jle: less or equal (signed <=) */

loc_00277D64: ;
    SET_LO8(edx, LO8(eax));
    MEM8(0x862D11) = LO8(edx);

loc_00277D6C: ;
    SET_LO8(ebx, MEM8(0x862D10));
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_00277E69; /* jne: not equal / not zero */

loc_00277D7D: ;
    eax = SX8(LO8(edx));
    ebp = 1;
    ecx = eax;
    ebp = ebp << LO8(ecx);
    esi = ZX16(LO16(edi));
    if (TEST_Z(esi, ebp)) goto loc_00277E69; /* je: equal / zero */

loc_00277D94: ;
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    ebp = MEM32(esp + 0x18E0);
    if (TEST_Z(LO8(ebx), 2)) goto loc_00277F37; /* je: equal / zero */

loc_00277DA4: ;
    edx = MEM32(esp + 0x18E4);
    ecx = eax + -1;
    if (CMP_GE(ecx, ebp)) goto loc_00277DB4; /* jge: greater or equal (signed >=) */

loc_00277DB2: ;
    ecx = edx;

loc_00277DB4: ;
    if (CMP_EQ(ecx, eax)) goto loc_00277DD5; /* je: equal / zero */

loc_00277DB8: ;
    goto loc_00277DC0;

    /* nop */

loc_00277DC0: ;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_NZ(esi, ebx)) goto loc_00277DD5; /* jne: not equal / not zero */

loc_00277DCB: ;
    ecx--;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    if (CMP_L(ecx, ebp)) ecx = edx; /* cmovl */
    if (CMP_NE(ecx, eax)) goto loc_00277DC0; /* jne: not equal / not zero */

loc_00277DD5: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, LO8(ecx));
    MEM8(0x862D11) = LO8(edx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277DEE; /* jne: not equal / not zero */

loc_00277DE6: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00277DEE: ;
    ecx = MEM32(0x75E500);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00277E1F; /* jne: not equal / not zero */

loc_00277E03: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00277F37; /* ja: above (unsigned >) */

loc_00277E1F: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00277E5E: ;
    SET_LO8(edx, MEM8(0x862D11));
    goto loc_00277F37;

loc_00277E69: ;
    esi = MEM32(esp + 0x18E4);
    ebx = MEM32(esp + 0x18E0);
    eax = SX8(LO8(edx));
    ecx = eax + 1;
    if (CMP_LE(ecx, esi)) goto loc_00277E83; /* jle: less or equal (signed <=) */

loc_00277E81: ;
    ecx = ebx;

loc_00277E83: ;
    if (CMP_EQ(ecx, eax)) goto loc_00277EA5; /* je: equal / zero */

loc_00277E87: ;
    edx = ZX16(LO16(edi));
    /* nop */

loc_00277E90: ;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    if (TEST_NZ(edx, ebp)) goto loc_00277EA5; /* jne: not equal / not zero */

loc_00277E9B: ;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    if (CMP_G(ecx, esi)) ecx = ebx; /* cmovg */
    if (CMP_NE(ecx, eax)) goto loc_00277E90; /* jne: not equal / not zero */

loc_00277EA5: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, LO8(ecx));
    MEM8(0x862D11) = LO8(edx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277EBE; /* jne: not equal / not zero */

loc_00277EB6: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00277EBE: ;
    ecx = MEM32(0x75E500);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00277EEB; /* jne: not equal / not zero */

loc_00277ED3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00277F30; /* ja: above (unsigned >) */

loc_00277EEB: ;
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
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00277F2A: ;
    SET_LO8(edx, MEM8(0x862D11));

loc_00277F30: ;
    ebp = MEM32(esp + 0x18E0);

loc_00277F37: ;
    eax = MEM32(esp + 0x18E4);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    esi = ebp;
    MEM32(esp + 0x10) = ebx;
    if (CMP_G(ebp, eax)) goto loc_00278023; /* jg: greater (signed >) */

loc_00277F4E: ;
    eax = MEM32(esp + 0x18DC);
    ecx = ZX16(LO16(edi));
    ebp = ebp + eax;
    MEM32(esp + 0x14) = ecx;
    edi = esp + 0x18;
    ebp = ebp << 2;

loc_00277F65: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    if (TEST_Z(ecx, eax)) goto loc_00278010; /* je: equal / zero */

loc_00277F7A: ;
    edx = SX8(LO8(edx));
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM8(0x77616E) = 0xFF;
    if (CMP_NE(edx, esi)) goto loc_00277FA3; /* jne: not equal / not zero */

loc_00277F88: ;
    MEM32(esp + 0x10) = ebx;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0xFF;
    goto loc_00277FB8;

loc_00277FA3: ;
    MEM8(0x776171) = 0x32;
    MEM8(0x776170) = 0x32;
    MEM8(0x77616F) = 0xAF;

loc_00277FB8: ;
    eax = MEM32(esi * 4 + 0x849E10);
    if (TEST_Z(eax, eax)) goto loc_00277FE2; /* je: equal / zero */

loc_00277FC3: ;
    PUSH32(esp, eax);
    eax = MEM32(0x849800);
    ecx = MEM32(eax + ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60315C);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00277FDD: ;
    esp = esp + 0x14;
    goto loc_00277FF7;

loc_00277FE2: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + ebp);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00277FF4: ;
    esp = esp + 0xC;

loc_00277FF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x18F4), _icall_esp); /* indirect call */
    }

loc_00278000: ;
    SET_LO8(edx, MEM8(0x862D11));
    esp = esp + 8;
    ebx++;
    edi = edi + 0x18C;

loc_00278010: ;
    eax = MEM32(esp + 0x18E4);
    esi++;
    ebp = ebp + 4;
    if (CMP_LE(esi, eax)) goto loc_00277F65; /* jle: less or equal (signed <=) */

loc_00278023: ;
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00278054; /* jne: not equal / not zero */

loc_0027802E: ;
    SET_LO8(eax, MEM8(0x849C0E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00278054; /* jne: not equal / not zero */

loc_00278037: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00278054; /* je: equal / zero */

loc_00278040: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00278047: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x24);
    eax = eax + 0x24;
    MEM8(ecx + 0x30) = 1;

loc_00278054: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18EC);
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_0027806B: ;
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    MEM32(0x849E10) = ecx;
    MEM32(0x849E14) = ecx;
    MEM32(0x849E18) = ecx;
    MEM32(0x849E1C) = ecx;
    MEM32(0x849E20) = ecx;
    MEM32(0x849E24) = ecx;
    MEM32(0x849E28) = ecx;
    MEM32(0x849E2C) = ecx;
    MEM32(0x849E30) = ecx;
    MEM32(0x849E34) = ecx;
    MEM32(0x849E38) = ecx;
    MEM32(0x849E3C) = ecx;
    MEM32(0x849E40) = ecx;
    MEM32(0x849E44) = ecx;
    MEM32(0x849E48) = ecx;
    POP32(esp, edi);
    MEM16(0x849E0C) = 0;
    MEM32(0x849E4C) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x18C8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002780F0
 * Original: 0x002780F0 - 0x002782EB (507 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002780F0(void)
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

loc_002780F0: ;
    PUSH32(esp, 0); sub_0042E3AF(); /* call 0x0042E3AF */

loc_002780F5: ;
    if (CMP_NE(eax, 1)) goto loc_002782EA; /* jne: not equal / not zero */

loc_002780FE: ;
    SET_LO8(edx, 0); /* xor self */
    eax = 0x8470FC;
    PUSH32(esp, ebx);

loc_00278106: ;
    if (CMP_GE(eax, 0x847104)) goto loc_00278114; /* jge: greater or equal (signed >=) */

loc_0027810D: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    goto loc_00278119;

loc_00278114: ;
    ecx = 0x75A0B4;

loc_00278119: ;
    if (TEST_NZ(MEM8(ecx + 8), 0x30)) goto loc_0027812B; /* jne: not equal / not zero */

loc_0027811F: ;
    eax = eax + 4;
    if (CMP_L(eax, 0x84710C)) goto loc_00278106; /* jl: less (signed <) */

loc_00278129: ;
    goto loc_0027812D;

loc_0027812B: ;
    SET_LO8(edx, 1);

loc_0027812D: ;
    eax = MEM32(0x776238);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x849E54);
    ebx = 7;
    if (TEST_NZ(eax, eax)) goto loc_0027814A; /* jne: not equal / not zero */

loc_00278141: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0027814A; /* jne: not equal / not zero */

loc_00278145: ;
    if (CMP_NE(ecx, 2)) goto loc_00278163; /* jne: not equal / not zero */

loc_0027814A: ;
    SET_LO8(eax, MEM8(0x6BEDEC));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_00278168; /* jne: not equal / not zero */

loc_00278153: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    eax = eax & ebx;
    MEM8(0x6BEDEC) = LO8(eax);
    goto loc_00278168;

loc_00278163: ;
    SET_LO8(eax, MEM8(0x6BEDEC));

loc_00278168: ;
    eax = SX8(LO8(eax));
    if (CMP_A(eax, 5)) goto loc_002782E9; /* ja: above (unsigned >) */

loc_00278174: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x2782EC); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0027817Cu) goto loc_0027817C;
    if (_jt == 0x00278248u) goto loc_00278248;
    if (_jt == 0x00278284u) goto loc_00278284;
    if (_jt == 0x0027829Bu) goto loc_0027829B;
    if (_jt == 0x002782E8u) goto loc_002782E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027817C: ;
    xmm0 = MEMF(0x75863C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) goto loc_002782E8; /* jb: below (unsigned <) */

loc_00278191: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00278196: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002782E8; /* jbe: below or equal (unsigned <=) */

loc_002781AE: ;
    eax = MEM32(0x84BEFC);
    if (CMP_EQ(eax, 2)) goto loc_002781C0; /* je: equal / zero */

loc_002781B8: ;
    if (TEST_NZ(eax, eax)) goto loc_002782E8; /* jne: not equal / not zero */

loc_002781C0: ;
    SET_LO8(eax, MEM8(0x862C40));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002781D5; /* jne: not equal / not zero */

loc_002781C9: ;
    PUSH32(esp, 0); sub_0041F160(); /* call 0x0041F160 */

loc_002781CE: ;
    MEM8(0x862C40) = 1;

loc_002781D5: ;
    eax = MEM32(0x758644);
    if (TEST_Z(eax, eax)) goto loc_002781E5; /* je: equal / zero */

loc_002781DE: ;
    MEM8(0x862C40) = 0;

loc_002781E5: ;
    eax = MEM32(0x84BEEC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x862C44) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0027823F; /* jle: less or equal (signed <=) */

loc_002781F8: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0026A530(); /* call 0x0026A530 */

loc_002781FF: ;
    ecx = MEM32(0x862C44);
    PUSH32(esp, 0); sub_0026D4C0(); /* call 0x0026D4C0 */

loc_0027820A: ;
    if (TEST_NZ(eax, eax)) goto loc_0027823F; /* jne: not equal / not zero */

loc_0027820E: ;
    eax = ecx;
    PUSH32(esp, 0); sub_0041F240(); /* call 0x0041F240 */

loc_00278215: ;
    if (TEST_Z(eax, eax)) goto loc_00278235; /* je: equal / zero */

loc_00278219: ;
    eax = MEM32(0x86422C);
    if (TEST_NZ(eax, eax)) goto loc_00278235; /* jne: not equal / not zero */

loc_00278222: ;
    POP32(esp, esi);
    MEM8(0x6BEDEC) = LO8(ebx);
    MEM32(0x6BEDE8) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00278235: ;
    POP32(esp, esi);
    MEM8(0x6BEDEC) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027823F: ;
    POP32(esp, esi);
    MEM8(0x6BEDEC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00278248: ;
    edx = MEM32(0x862C44);
    if (CMP_GE(edx, MEM32(0x84BEEC))) goto loc_002782E8; /* jge: greater or equal (signed >=) */

loc_0027825A: ;
    ecx = MEM32(0x849E74);
    if (TEST_Z(ecx, ecx)) goto loc_00278275; /* je: equal / zero */

loc_00278264: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_0027826B: ;
    MEM32(0x849E74) = 0;

loc_00278275: ;
    PUSH32(esp, 0); sub_0041F7B0(); /* call 0x0041F7B0 */

loc_0027827A: ;
    POP32(esp, esi);
    MEM8(0x6BEDEC) = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00278284: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) goto loc_002782E8; /* jne: not equal / not zero */

loc_0027828D: ;
    POP32(esp, esi);
    MEM8(0x6BEDEC) = 5;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0027AFD0(); return; /* tail jmp 0x0027AFD0 */

loc_0027829B: ;
    esi = 0x862C40;
    MEM8(0x6BEDEC) = LO8(ebx);
    PUSH32(esp, 0); sub_00296840(); /* call 0x00296840 */

loc_002782AB: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00268EE0(); /* call 0x00268EE0 */

loc_002782B2: ;
    eax = ZX8(MEM8(0x862D13));
    MEM32(0x849E54) = 2;
    MEM32(0x6BEDE8) = 0;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002782D2: ;
    if (TEST_Z(eax, eax)) goto loc_002782E8; /* je: equal / zero */

loc_002782D6: ;
    PUSH32(esp, 0x849E09);
    PUSH32(esp, 0x849E08);
    PUSH32(esp, 0); sub_0026ACB0(); /* call 0x0026ACB0 */

loc_002782E5: ;
    esp = esp + 8;

loc_002782E8: ;
    POP32(esp, esi);

loc_002782E9: ;
    POP32(esp, ebx);

loc_002782EA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00278310
 * Original: 0x00278310 - 0x0027836B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_0027831B: ;
    ebp = eax;
    ebx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00278363; /* jle: less or equal (signed <=) */

loc_00278323: ;
    goto loc_00278330;

    /* nop */
    /* nop */

loc_00278330: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_0027833E: ;
    if (CMP_NE(MEM32(esp + 0x14), eax)) goto loc_0027835E; /* jne: not equal / not zero */

loc_00278344: ;
    if (CMP_NE(MEM32(esp + 0x18), edx)) goto loc_0027835E; /* jne: not equal / not zero */

loc_0027834A: ;
    edi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_00278358: ;
    if (CMP_EQ(eax, MEM32(esp + 0x1C))) { sub_0027836B(); return; } /* je: equal / zero */

loc_0027835E: ;
    ebx++;
    if (CMP_L(ebx, ebp)) goto loc_00278330; /* jl: less (signed <) */

loc_00278363: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00278380
 * Original: 0x00278380 - 0x002783B2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00278380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx + 0x3C;
    ebx = 2;
    /* nop */

loc_00278390: ;
    eax = MEM32(edi + -8);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027839A: ;
    eax = MEM32(edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002783A3: ;
    esp = esp + 8;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00278390; /* jne: not equal / not zero */

loc_002783AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002783C0
 * Original: 0x002783C0 - 0x002783F2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002783C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002783C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx + 0x3C;
    ebx = 2;
    /* nop */

loc_002783D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002783D7: ;
    PUSH32(esp, 2);
    MEM32(edi + -8) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002783E1: ;
    MEM32(edi) = eax;
    esp = esp + 8;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_002783D0; /* jne: not equal / not zero */

loc_002783EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278400
 * Original: 0x00278400 - 0x00278417 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278400(void)
{

loc_00278400: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x34) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x3C) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278420
 * Original: 0x00278420 - 0x002784A2 (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00278420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00278431: ;
    if (TEST_Z(eax, eax)) goto loc_0027849B; /* je: equal / zero */

loc_00278435: ;
    edx = MEM32(esi + 0x34);
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_NZ(edx, edx)) goto loc_00278440; /* jne: not equal / not zero */

loc_0027843E: ;
    SET_LO8(ecx, 1);

loc_00278440: ;
    edx = MEM32(esi + 0x38);
    if (TEST_NZ(edx, edx)) goto loc_00278449; /* jne: not equal / not zero */

loc_00278447: ;
    SET_LO8(ecx, 1);

loc_00278449: ;
    MEM8(eax + 0x774) = LO8(ecx);
    edx = esi + 0x3C;
    eax = eax + 0x778;
    esi = 2;
    /* nop */

loc_00278460: ;
    ecx = MEM32(edx);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0027847D; /* je: equal / zero */

loc_00278467: ;
    ecx--;
    if ((ecx == 0)) goto loc_00278475; /* je: equal / zero */

loc_0027846A: ;
    ecx--;
    if ((ecx != 0)) goto loc_00278483; /* jne: not equal / not zero */

loc_0027846D: ;
    MEM32(eax) = 3;
    goto loc_00278483;

loc_00278475: ;
    MEM32(eax) = 1;
    goto loc_00278483;

loc_0027847D: ;
    MEM32(eax) = 2;

loc_00278483: ;
    edx = edx + 4;
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00278460; /* jne: not equal / not zero */

loc_0027848C: ;
    eax = MEM32(0x849E74);
    if (TEST_Z(eax, eax)) goto loc_0027849B; /* je: equal / zero */

loc_00278495: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0027B300(); /* call 0x0027B300 */

loc_0027849B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002784B0
 * Original: 0x002784B0 - 0x00278570 (192 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002784B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002784B0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002784C3; /* jne: not equal / not zero */

loc_002784BE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002784C3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027850B; /* je: equal / zero */

loc_002784E9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0027850B; /* jb: below (unsigned <) */

loc_002784F2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002784FC: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00278504: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027852C; /* jne: not equal / not zero */

loc_0027850B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027851D: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00278525: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00278570(); return; } /* je: equal / zero */

loc_0027852C: ;
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
    MEM32(eax) = 0x602470;
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00278580
 * Original: 0x00278580 - 0x00278CB6 (1846 bytes, 526 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00278580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x1268;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00278590: ;
    SET_LO8(eax, MEM8(0x849C0E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00278C9F; /* jne: not equal / not zero */

loc_002785A1: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_002785DF; /* je: equal / zero */

loc_002785AA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA3D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002785BD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002785DF; /* je: equal / zero */

loc_002785C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002785DC: ;
    esp = esp + 0x10;

loc_002785DF: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) goto loc_00278C9F; /* jne: not equal / not zero */

loc_002785EC: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_002785F1: ;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_00278C9F; /* je: equal / zero */

loc_002785FC: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00258160(); /* call 0x00258160 */

loc_00278608: ;
    if (TEST_Z(eax, eax)) goto loc_00278CAE; /* je: equal / zero */

loc_00278610: ;
    esi = ZX8(MEM8(0x862D13));
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_00278621: ;
    ebp = eax;
    ebx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(0x862D2C) = 0;
    if (CMP_LE(ebp & ebp, 0)) goto loc_002786AC; /* jle: less or equal (signed <=) */

loc_00278630: ;
    edi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_0027863E: ;
    if (CMP_EQ(eax, 2)) goto loc_00278648; /* je: equal / zero */

loc_00278643: ;
    if (CMP_NE(eax, 3)) goto loc_00278671; /* jne: not equal / not zero */

loc_00278648: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00278656: ;
    if (CMP_NE(eax, MEM32(0x862D18))) goto loc_00278671; /* jne: not equal / not zero */

loc_0027865E: ;
    if (CMP_NE(edx, MEM32(0x862D1C))) goto loc_00278671; /* jne: not equal / not zero */

loc_00278666: ;
    MEM8(esp + 0x17) = 1;
    MEM8(0x862D2C) = LO8(ebx);

loc_00278671: ;
    ebx++;
    if (CMP_L(ebx, ebp)) goto loc_00278630; /* jl: less (signed <) */

loc_00278676: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002786AC; /* je: equal / zero */

loc_0027867E: ;
    esi = ZX8(MEM8(0x862D13));
    ebx = (uint32_t)(int32_t)SMEM8(0x862D2C);
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_00278691: ;
    if (CMP_GE(ebx, eax)) goto loc_002786AC; /* jge: greater or equal (signed >=) */

loc_00278695: ;
    edi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_002786A3: ;
    if (CMP_EQ(eax, 3)) goto loc_0027874B; /* je: equal / zero */

loc_002786AC: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_002786B1: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_002786B6: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002786BD: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_00278714; /* je: equal / zero */

loc_002786C8: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6028B0;
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002786D8: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602884;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002786E6: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601090;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002786F3: ;
    esp = esp - 8;
    ecx = esp;
    edi = eax;
    eax = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00278701: ;
    edx = esi;
    esi = MEM32(esp + 0x24);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00278710: ;
    esi = eax;
    goto loc_00278716;

loc_00278714: ;
    esi = 0; /* xor self */

loc_00278716: ;
    eax = esi + 0xC;
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x100;
    MEM32(esp + 0x20) = 0x276CD0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0027873A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0026AA60(); /* call 0x0026AA60 */

loc_00278740: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027874B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_0027875E: ;
    ebx = edx;
    PUSH32(esp, 0x28);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edi = eax;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00422B70(); /* call 0x00422B70 */

loc_00278777: ;
    esi = ZX8(MEM8(0x862D13));
    eax = esp + 0x38;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0); sub_004270D0(); /* call 0x004270D0 */

loc_0027879F: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6025A8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002787AC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x884;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002787BF: ;
    esp = esp + 0x14;
    esi = esp + 0x878;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002787CE: ;
    eax = MEM32(0x84C13C);
    eax = eax - 0;
    MEM32(0x862C70) = edi;
    MEM32(0x862C74) = ebx;
    if ((eax == 0)) goto loc_00278B82; /* je: equal / zero */

loc_002787E8: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_002789BA; /* jne: not equal / not zero */

loc_002787F1: ;
    eax = MEM32(0x82E7DC);
    ecx = MEM32(0x84C1F0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x82DB38;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = 0x1F;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0027881B; /* jbe: below or equal (unsigned <=) */

loc_00278811: ;
    ecx = MEM32(0x84C1EC);
    if (TEST_NZ(ecx, ecx)) goto loc_0027882C; /* jne: not equal / not zero */

loc_0027881B: ;
    if (TEST_Z(eax, eax)) goto loc_00278831; /* je: equal / zero */

loc_0027881F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00278825: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00278831; /* je: equal / zero */

loc_0027882C: ;
    MEM8(esp + 0x17) = 1;

loc_00278831: ;
    eax = MEM32(0x84C1FC);
    edx = MEM32(0x84C1F8);
    MEM32(0x862C7C) = eax;
    eax = MEM32(0x84BF64);
    eax = eax - 0;
    MEM32(0x862C78) = edx;
    if ((eax == 0)) goto loc_00278A9A; /* je: equal / zero */

loc_00278855: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_002789BA; /* jne: not equal / not zero */

loc_0027885E: ;
    eax = MEM32(0x84BF90);
    if (CMP_LE(eax & eax, 0)) goto loc_00278A3C; /* jle: less or equal (signed <=) */

loc_0027886B: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00278874: ;
    esi = eax;
    PUSH32(esp, 0); sub_00234C90(); /* call 0x00234C90 */

loc_0027887B: ;
    esi = eax;
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00278886: ;
    ebx = eax;
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00421550(); /* call 0x00421550 */

loc_00278891: ;
    ebp = eax;
    eax = 0; /* xor self */
    MEM16(esp + 0xA84) = 0;
    ecx = 0x1FF;
    edi = esp + 0xA86;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esp = esp + 0xC;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_002788E9; /* je: equal / zero */

loc_002788B7: ;
    ecx = esi + esi * 4;
    edx = MEM32(ecx * 8 + 0x776F28);
    eax = MEM32(edx + 0x58);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602580;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002788D1: ;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002788DF: ;
    esp = esp + 0xC;
    esi = 1;
    goto loc_00278905;

loc_002788E9: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602544;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002788F5: ;
    PUSH32(esp, eax);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00278900: ;
    esp = esp + 8;
    esi = 0; /* xor self */

loc_00278905: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0xA7C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00278917: ;
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602518;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00278928: ;
    PUSH32(esp, eax);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00278936: ;
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0xA8C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_0027894B: ;
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004216B0(); /* call 0x004216B0 */

loc_00278954: ;
    esp = esp + 0x1C;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6024F0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00278964: ;
    PUSH32(esp, eax);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00278972: ;
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0xA88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00278987: ;
    esp = esp + 0x14;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0xA84;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_0027899F: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002789AA: ;
    ebx = eax;
    eax = 0xE;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_002789B6: ;
    if (TEST_NZ(esi, esi)) goto loc_002789EF; /* jne: not equal / not zero */

loc_002789BA: ;
    ecx = MEM32(0x862C74);
    edx = MEM32(0x862C70);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00422D20(); /* call 0x00422D20 */

loc_002789D4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002789E3; /* je: equal / zero */

loc_002789DB: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFFFE;

loc_002789E3: ;
    if (CMP_EQ(MEM16(esp + 0x18), 0)) goto loc_00278CAE; /* je: equal / zero */

loc_002789EF: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x27));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    ecx = ecx + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x103);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00278A15: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) goto loc_00278C6C; /* je: equal / zero */

loc_00278A25: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 3)) goto loc_00278CAE; /* ja: above (unsigned >) */

loc_00278A35: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x278CB8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00278BD0u) goto loc_00278BD0;
    if (_jt == 0x00278C24u) goto loc_00278C24;
    if (_jt == 0x00278C36u) goto loc_00278C36;
    if (_jt == 0x00278C51u) goto loc_00278C51;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00278A3C: ;
    eax = MEM32(0x86E984);
    if (CMP_EQ(eax, 2)) goto loc_00278A4F; /* je: equal / zero */

loc_00278A46: ;
    if (CMP_NE(eax, 3)) goto loc_002789BA; /* jne: not equal / not zero */

loc_00278A4F: ;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6024DC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00278A5D: ;
    PUSH32(esp, 0x5FAE34);
    edi = eax;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_00278A69: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00278A74: ;
    ebx = eax;
    eax = 0x13;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00278A80: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x13);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00278A8E: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_00278A95: ;
    goto loc_002789BA;

loc_00278A9A: ;
    esi = 1;
    PUSH32(esp, 0); sub_00420E80(); /* call 0x00420E80 */

loc_00278AA4: ;
    esi = 5;
    MEM32(0x84BF80) = 6;
    PUSH32(esp, 0); sub_00421060(); /* call 0x00421060 */

loc_00278AB8: ;
    eax = MEM32(0x862C7C);
    ecx = MEM32(0x862C78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278ACC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D4);
    eax = 1;
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278ADD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = 2;
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278AEB: ;
    eax = MEM32(0x86E984);
    esp = esp + 0x18;
    eax = eax - 2;
    PUSH32(esp, 0);
    if ((eax == 0)) goto loc_00278B13; /* je: equal / zero */

loc_00278AFA: ;
    eax--;
    eax = 3;
    if ((eax == 0)) goto loc_00278B0F; /* je: equal / zero */

loc_00278B02: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278B09: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    goto loc_00278B23;

loc_00278B0F: ;
    PUSH32(esp, 0);
    goto loc_00278B1A;

loc_00278B13: ;
    PUSH32(esp, 0x10);
    eax = 3;

loc_00278B1A: ;
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278B1F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00278B23: ;
    eax = 4;
    PUSH32(esp, 0); sub_004210C0(); /* call 0x004210C0 */

loc_00278B2D: ;
    esp = esp + 0x10;
    esi = 6;
    PUSH32(esp, 0); sub_00420EE0(); /* call 0x00420EE0 */

loc_00278B3A: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00420F40(); /* call 0x00420F40 */

loc_00278B41: ;
    edi = 0x10;
    esi = 1;
    PUSH32(esp, 0); sub_00420FD0(); /* call 0x00420FD0 */

loc_00278B50: ;
    esi = 2;
    PUSH32(esp, 0); sub_00420F40(); /* call 0x00420F40 */

loc_00278B5A: ;
    esi = 3;
    PUSH32(esp, 0); sub_00420F40(); /* call 0x00420F40 */

loc_00278B64: ;
    esi = 4;
    PUSH32(esp, 0); sub_00420F40(); /* call 0x00420F40 */

loc_00278B6E: ;
    esi = 5;
    PUSH32(esp, 0); sub_00420F40(); /* call 0x00420F40 */

loc_00278B78: ;
    PUSH32(esp, 0); sub_00421140(); /* call 0x00421140 */

loc_00278B7D: ;
    goto loc_002789BA;

loc_00278B82: ;
    edx = MEM32(0x862D1C);
    eax = MEM32(0x862D18);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00278310(); /* call 0x00278310 */

loc_00278B9D: ;
    ebx = eax;
    esp = esp + 0xC;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_002789BA; /* je: equal / zero */

loc_00278BAB: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00278BB0: ;
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_004276F0(); /* call 0x004276F0 */

loc_00278BC2: ;
    esp = esp + 8;
    MEM8(0x862D2C) = LO8(ebx);
    goto loc_002789BA;

loc_00278BD0: ;
    edx = MEM32(0x862C74);
    eax = MEM32(0x862C70);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00422D20(); /* call 0x00422D20 */

loc_00278BE9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00278C09; /* jne: not equal / not zero */

loc_00278BF0: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00278BF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00276CE0(); /* call 0x00276CE0 */

loc_00278BFE: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C09: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00278C0E: ;
    MEM8(0x862D12) = 0x43;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C24: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00278C29: ;
    PUSH32(esp, 0); sub_00276CA0(); /* call 0x00276CA0 */

loc_00278C2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C36: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00278C3B: ;
    MEM8(0x862D12) = 0x45;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C51: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00278C56: ;
    MEM8(0x862D12) = 0x38;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C6C: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00278CAE; /* je: equal / zero */

loc_00278C70: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00278C75: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00278C7A: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    edi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00427360(); /* call 0x00427360 */

loc_00278C8F: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00278C97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278C9F: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00278CA4: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00278CA9: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00278CAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00278CD0
 * Original: 0x00278CD0 - 0x00278CEF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278CD0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00278CD0: ;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00278CDB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00278CEA: ;
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00278CF0
 * Original: 0x00278CF0 - 0x00278D22 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00278CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAF0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = edx;
    if (CMP_BE(edi, 0x15555555)) { sub_00278D22(); return; } /* jbe: below or equal (unsigned <=) */

loc_00278D1D: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00278E20
 * Original: 0x00278E20 - 0x00278E50 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00278E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAE0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = edx;
    if (CMP_BE(ecx, 0xFFFFFFF)) { sub_00278E50(); return; } /* jbe: below or equal (unsigned <=) */

loc_00278E4B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00278F30
 * Original: 0x00278F30 - 0x00278F60 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00278F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F870);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    if (CMP_BE(edx, 0x1FFFFFFF)) { sub_00278F60(); return; } /* jbe: below or equal (unsigned <=) */

loc_00278F5B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00279020
 * Original: 0x00279020 - 0x00279050 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8B0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = edx;
    if (CMP_BE(ecx, 0x7FFFFFF)) { sub_00279050(); return; } /* jbe: below or equal (unsigned <=) */

loc_0027904B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00279110
 * Original: 0x00279110 - 0x00279135 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279110: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edi;
    if (CMP_BE(esi & esi, 0)) goto loc_00279131; /* jbe: below or equal (unsigned <=) */

loc_00279116: ;
    edx = esi;
    PUSH32(esp, ebx);
    /* nop */

loc_00279120: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    edx--;
    if ((edx != 0)) goto loc_00279120; /* jne: not equal / not zero */

loc_00279130: ;
    POP32(esp, ebx);

loc_00279131: ;
    eax = edi + esi * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00279140
 * Original: 0x00279140 - 0x0027915E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279140(void)
{

loc_00279140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002797F0(); /* call 0x002797F0 */

loc_00279151: ;
    eax = esi;
    eax = eax << 5;
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279160
 * Original: 0x00279160 - 0x0027919E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAD0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    ebx = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -44) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -40) = edx;
    ecx = MEM32(ebx + 4);
    if (TEST_NZ(ecx, ecx)) { sub_0027919E(); return; } /* jne: not equal / not zero */

loc_0027919A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002791A6(); return; /* tail jmp 0x002791A6 */

}

/**
 * sub_00279390
 * Original: 0x00279390 - 0x002793CA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAC0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    ecx = 8;
    esi = edx;
    edi = ebp + -80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(ebx + 4);
    if (TEST_NZ(edx, edx)) { sub_002793CA(); return; } /* jne: not equal / not zero */

loc_002793C6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002793D2(); return; /* tail jmp 0x002793D2 */

}

/**
 * sub_002795E0
 * Original: 0x002795E0 - 0x0027963D (93 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002795E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002795E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    if (CMP_EQ(ecx, ebx)) { sub_0027963D(); return; } /* je: equal / zero */

loc_002795F1: ;
    ecx = ecx + 8;
    if (CMP_EQ(ecx, ebx)) { sub_0027963D(); return; } /* je: equal / zero */

loc_002795F8: ;
    esi = MEM32(edx);
    if (CMP_NE(esi, MEM32(ecx))) goto loc_00279606; /* jne: not equal / not zero */

loc_002795FE: ;
    esi = MEM32(edx + 4);
    if (CMP_EQ(esi, MEM32(ecx + 4))) goto loc_0027960A; /* je: equal / zero */

loc_00279606: ;
    edx = ecx;
    goto loc_002795F1;

loc_0027960A: ;
    ecx = ecx + 8;
    if (CMP_EQ(ecx, ebx)) goto loc_00279634; /* je: equal / zero */

loc_00279611: ;
    PUSH32(esp, ebp);

loc_00279612: ;
    esi = MEM32(ecx);
    ebp = MEM32(edx);
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    edi = MEM32(ecx + 4);
    if (CMP_NE(ebp, esi)) goto loc_00279624; /* jne: not equal / not zero */

loc_0027961D: ;
    ebp = MEM32(edx + 4);
    if (CMP_EQ(ebp, edi)) goto loc_0027962C; /* je: equal / zero */

loc_00279624: ;
    edx = edx + 8;
    MEM32(edx) = esi;
    MEM32(edx + 4) = edi;

loc_0027962C: ;
    ecx = ecx + 8;
    if (CMP_NE(ecx, ebx)) goto loc_00279612; /* jne: not equal / not zero */

loc_00279633: ;
    POP32(esp, ebp);

loc_00279634: ;
    POP32(esp, edi);
    edx = edx + 8;
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00279650
 * Original: 0x00279650 - 0x0027966C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279650(void)
{

loc_00279650: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227DF0(); /* call 0x00227DF0 */

loc_00279666: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279670
 * Original: 0x00279670 - 0x0027968C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279670(void)
{

loc_00279670: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00279C00(); /* call 0x00279C00 */

loc_00279686: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279690
 * Original: 0x00279690 - 0x002796B2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279690(void)
{

loc_00279690: ;
    eax = eax - ecx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 3);
    esi = eax * 8;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_002796A9: ;
    esp = esp + 0xC;
    eax = eax + esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002796C0
 * Original: 0x002796C0 - 0x002796DB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002796C0(void)
{

loc_002796C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279C70(); /* call 0x00279C70 */

loc_002796D5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002796E0
 * Original: 0x002796E0 - 0x002796FB (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002796E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002796E0: ;
    if (CMP_EQ(eax, edx)) goto loc_002796FA; /* je: equal / zero */

loc_002796E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002796E6: ;
    edi = eax;
    eax = eax + 0x20;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = 8;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(eax, edx)) goto loc_002796E6; /* jne: not equal / not zero */

loc_002796F8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002796FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00279700
 * Original: 0x00279700 - 0x0027971E (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279700(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279700: ;
    if (CMP_EQ(ebx, edx)) goto loc_0027971D; /* je: equal / zero */

loc_00279704: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00279706: ;
    edx = edx - 0x20;
    eax = eax - 0x20;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = 8;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(edx, ebx)) goto loc_00279706; /* jne: not equal / not zero */

loc_0027971B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0027971D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00279720
 * Original: 0x00279720 - 0x002797BA (154 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279720: ;
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
    if (CMP_LE(eax, 0x20)) goto loc_002797A3; /* jle: less or equal (signed <=) */

loc_0027973B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_00279740: ;
    if (CMP_LE(esi & esi, 0)) { sub_002797BA(); return; } /* jle: less or equal (signed <=) */

loc_00279744: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279880(); /* call 0x00279880 */

loc_00279750: ;
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
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    edx = eax;
    ecx = ecx - ebp;
    edx = edx - ebx;
    esp = esp + 0xC;
    ecx = ecx & 0xFFFFFFF8u;
    edx = edx & 0xFFFFFFF8u;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(edx, ecx)) goto loc_00279789; /* jge: greater or equal (signed >=) */

loc_0027977E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00279720(); /* call 0x00279720 */

loc_00279785: ;
    ebx = ebp;
    goto loc_00279794;

loc_00279789: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00279720(); /* call 0x00279720 */

loc_00279790: ;
    edi = MEM32(esp + 0x1C);

loc_00279794: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0xC;
    if (CMP_G(eax, 0x20)) goto loc_00279740; /* jg: greater (signed >) */

loc_002797A3: ;
    if (CMP_LE(eax, 1)) goto loc_002797B2; /* jle: less or equal (signed <=) */

loc_002797A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00279B00(); /* call 0x00279B00 */

loc_002797AF: ;
    esp = esp + 8;

loc_002797B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002797F0
 * Original: 0x002797F0 - 0x00279839 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002797F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002797F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1C0);
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

loc_00279820: ;
    if (CMP_BE(edi & edi, 0)) { sub_00279839(); return; } /* jbe: below or equal (unsigned <=) */

loc_00279824: ;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00279860(); /* call 0x00279860 */

loc_0027982D: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x20;
    MEM32(ebp + 8) = esi;
    goto loc_00279820;

}

/**
 * sub_00279860
 * Original: 0x00279860 - 0x00279874 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279860: ;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00279872; /* je: equal / zero */

loc_00279867: ;
    PUSH32(esp, esi);
    ecx = 8;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);

loc_00279872: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279880
 * Original: 0x00279880 - 0x00279A92 (530 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279880: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = ebx;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = ebp + eax * 8;
    PUSH32(esp, edi);
    eax = ebx + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00279CE0(); /* call 0x00279CE0 */

loc_002798AA: ;
    esp = esp + 0xC;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    eax = esi;
    edi = esi + 8;
    if (CMP_AE(ebp, esi)) goto loc_002798E0; /* jae: above or equal (unsigned >=) */

loc_002798B6: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax + 4);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = MEM32(eax + -8);
    ebx = MEM32(eax);
    if (CMP_B(ecx, edx)) goto loc_002798DC; /* jb: below (unsigned <) */

loc_002798C5: ;
    if (CMP_A(ecx, edx)) goto loc_002798CB; /* ja: above (unsigned >) */

loc_002798C7: ;
    if (CMP_B(esi, ebx)) goto loc_002798DC; /* jb: below (unsigned <) */

loc_002798CB: ;
    if (CMP_B(edx, ecx)) goto loc_002798DC; /* jb: below (unsigned <) */

loc_002798CF: ;
    if (CMP_A(edx, ecx)) goto loc_002798D5; /* ja: above (unsigned >) */

loc_002798D1: ;
    if (CMP_B(ebx, esi)) goto loc_002798DC; /* jb: below (unsigned <) */

loc_002798D5: ;
    eax = eax + 0xFFFFFFF8u;
    if (CMP_B(ebp, eax)) goto loc_002798B6; /* jb: below (unsigned <) */

loc_002798DC: ;
    ebx = MEM32(esp + 0x40);

loc_002798E0: ;
    if (CMP_AE(edi, ebx)) goto loc_00279914; /* jae: above or equal (unsigned >=) */

loc_002798E4: ;
    ebx = MEM32(eax);
    esi = MEM32(eax + 4);
    /* nop */

loc_002798F0: ;
    ecx = MEM32(edi + 4);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = MEM32(edi);
    if (CMP_B(ecx, esi)) goto loc_00279914; /* jb: below (unsigned <) */

loc_002798F9: ;
    if (CMP_A(ecx, esi)) goto loc_002798FF; /* ja: above (unsigned >) */

loc_002798FB: ;
    if (CMP_B(edx, ebx)) goto loc_00279914; /* jb: below (unsigned <) */

loc_002798FF: ;
    if (CMP_B(esi, ecx)) goto loc_00279914; /* jb: below (unsigned <) */

loc_00279903: ;
    if (CMP_A(esi, ecx)) goto loc_00279909; /* ja: above (unsigned >) */

loc_00279905: ;
    if (CMP_B(ebx, edx)) goto loc_00279914; /* jb: below (unsigned <) */

loc_00279909: ;
    ecx = MEM32(esp + 0x40);
    edi = edi + 8;
    if (CMP_B(edi, ecx)) goto loc_002798F0; /* jb: below (unsigned <) */

loc_00279914: ;
    ebx = eax;
    ecx = edi;
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_00279920: ;
    if (CMP_AE(ecx, MEM32(esp + 0x40))) goto loc_0027996F; /* jae: above or equal (unsigned >=) */

loc_00279926: ;
    edx = MEM32(eax + 4);
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    esi = MEM32(eax);
    ebp = MEM32(ecx);
    if (CMP_B(edx, MEM32(ecx + 4))) goto loc_00279964; /* jb: below (unsigned <) */

loc_00279932: ;
    if (CMP_A(edx, MEM32(ecx + 4))) goto loc_00279938; /* ja: above (unsigned >) */

loc_00279934: ;
    if (CMP_B(esi, ebp)) goto loc_00279964; /* jb: below (unsigned <) */

loc_00279938: ;
    if (CMP_B(MEM32(ecx + 4), edx)) goto loc_0027996F; /* jb: below (unsigned <) */

loc_0027993D: ;
    if (CMP_A(MEM32(ecx + 4), edx)) goto loc_00279943; /* ja: above (unsigned >) */

loc_0027993F: ;
    if (CMP_B(ebp, esi)) goto loc_0027996F; /* jb: below (unsigned <) */

loc_00279943: ;
    edx = edi;
    ebp = MEM32(edx + 4);
    esi = MEM32(edx);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    edx = MEM32(esp + 0x20);
    edi = edi + 8;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;

loc_00279964: ;
    edx = MEM32(esp + 0x40);
    ecx = ecx + 8;
    if (CMP_B(ecx, edx)) goto loc_00279926; /* jb: below (unsigned <) */

loc_0027996F: ;
    if (CMP_BE(ebx, MEM32(esp + 0x3C))) goto loc_002799CD; /* jbe: below or equal (unsigned <=) */

loc_00279975: ;
    edx = ebx + -8;

loc_00279978: ;
    esi = MEM32(edx + 4);
    (void)0; /* cmp esi, MEM32(eax + 4) - flags set for next jcc */
    ebp = MEM32(eax);
    if (CMP_B(esi, MEM32(eax + 4))) goto loc_002799B7; /* jb: below (unsigned <) */

loc_00279982: ;
    if (CMP_A(esi, MEM32(eax + 4))) goto loc_0027998C; /* ja: above (unsigned >) */

loc_00279984: ;
    (void)0; /* cmp MEM32(edx), ebp - flags set for next jcc */
    ebx = MEM32(esp + 0x10);
    if (CMP_B(MEM32(edx), ebp)) goto loc_002799B7; /* jb: below (unsigned <) */

loc_0027998C: ;
    if (CMP_B(MEM32(eax + 4), esi)) goto loc_002799C9; /* jb: below (unsigned <) */

loc_00279991: ;
    if (CMP_A(MEM32(eax + 4), esi)) goto loc_00279997; /* ja: above (unsigned >) */

loc_00279993: ;
    if (CMP_B(ebp, MEM32(edx))) goto loc_002799C9; /* jb: below (unsigned <) */

loc_00279997: ;
    ebp = MEM32(eax + -4);
    esi = MEM32(eax + -8);
    eax = eax - 8;
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(edx);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(edx + 4) = esi;

loc_002799B7: ;
    esi = MEM32(esp + 0x3C);
    ebx = ebx - 8;
    edx = edx - 8;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_B(esi, ebx)) goto loc_00279978; /* jb: below (unsigned <) */

loc_002799C9: ;
    (void)0; /* cmp ebx, MEM32(esp + 0x3C) - flags set for next jcc */

loc_002799CD: ;
    edx = MEM32(esp + 0x40);
    if (CMP_NE(ebx, MEM32(esp + 0x3C))) goto loc_00279A29; /* jne: not equal / not zero */

loc_002799D3: ;
    if (CMP_EQ(ecx, edx)) { sub_00279A92(); return; } /* je: equal / zero */

loc_002799DB: ;
    if (CMP_EQ(edi, ecx)) goto loc_002799F3; /* je: equal / zero */

loc_002799DF: ;
    ebp = MEM32(edi);
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(eax) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edi) = edx;
    MEM32(edi + 4) = esi;

loc_002799F3: ;
    esi = eax;
    ebp = MEM32(esi);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esi + 4);
    edx = ecx;
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(edx);
    MEM32(esi) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(esi + 4) = ebp;
    esi = MEM32(esp + 0x14);
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x18);
    edi = edi + 8;
    ecx = ecx + 8;
    eax = eax + 8;
    MEM32(edx + 4) = esi;
    goto loc_00279920;

loc_00279A29: ;
    ebx = ebx - 8;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(ecx, edx)) goto loc_00279A6C; /* jne: not equal / not zero */

loc_00279A34: ;
    eax = eax - 8;
    if (CMP_EQ(ebx, eax)) goto loc_00279A4F; /* je: equal / zero */

loc_00279A3B: ;
    ebp = MEM32(eax);
    edx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;

loc_00279A4F: ;
    ebp = MEM32(edi + -8);
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = edi - 8;
    MEM32(eax) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edi) = edx;
    MEM32(edi + 4) = esi;
    goto loc_00279920;

loc_00279A6C: ;
    edx = ecx;
    ebp = MEM32(edx + 4);
    esi = MEM32(edx);
    MEM32(esp + 0x30) = ebp;
    ebp = MEM32(ebx);
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edx + 4) = ebp;
    edx = MEM32(esp + 0x30);
    ecx = ecx + 8;
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = edx;
    goto loc_00279920;

}

/**
 * sub_00279AB0
 * Original: 0x00279AB0 - 0x00279B00 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279AB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = edi - ebx;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 1)) goto loc_00279AFD; /* jle: less or equal (signed <=) */

loc_00279AC6: ;
    PUSH32(esp, esi);

loc_00279AC7: ;
    ecx = MEM32(ebx + edi + -4);
    eax = MEM32(ebx + edi + -8);
    edx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebx + edi + -8) = edx;
    edx = MEM32(ebx + 4);
    esi = edi + -8;
    esi = (uint32_t)((int32_t)esi >> 3);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    MEM32(ebx + edi + -4) = edx;
    PUSH32(esp, 0); sub_00279E30(); /* call 0x00279E30 */

loc_00279AEC: ;
    edi = edi - 8;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0xC;
    if (CMP_G(eax, 1)) goto loc_00279AC7; /* jg: greater (signed >) */

loc_00279AFC: ;
    POP32(esp, esi);

loc_00279AFD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00279B00
 * Original: 0x00279B00 - 0x00279B79 (121 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279B00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(ebx, ebp)) goto loc_00279B76; /* je: equal / zero */

loc_00279B0E: ;
    PUSH32(esp, esi);
    esi = ebx + 8;
    if (CMP_EQ(esi, ebp)) goto loc_00279B75; /* je: equal / zero */

loc_00279B16: ;
    PUSH32(esp, edi);

loc_00279B17: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, MEM32(ebx + 4) - flags set for next jcc */
    edx = MEM32(esi);
    if (CMP_A(ecx, MEM32(ebx + 4))) goto loc_00279B37; /* ja: above (unsigned >) */

loc_00279B21: ;
    if (CMP_B(ecx, MEM32(ebx + 4))) goto loc_00279B27; /* jb: below (unsigned <) */

loc_00279B23: ;
    if (CMP_AE(edx, MEM32(ebx))) goto loc_00279B37; /* jae: above or equal (unsigned >=) */

loc_00279B27: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    eax = esi + 8;
    if (CMP_EQ(ebx, esi)) goto loc_00279B6D; /* je: equal / zero */

loc_00279B2E: ;
    if (CMP_EQ(esi, eax)) goto loc_00279B6D; /* je: equal / zero */

loc_00279B32: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    goto loc_00279B65;

loc_00279B37: ;
    edi = MEM32(esi + -4);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = esi + -8;
    if (CMP_A(ecx, edi)) goto loc_00279B6D; /* ja: above (unsigned >) */

loc_00279B41: ;
    if (CMP_B(ecx, edi)) goto loc_00279B47; /* jb: below (unsigned <) */

loc_00279B43: ;
    if (CMP_AE(edx, MEM32(eax))) goto loc_00279B6D; /* jae: above or equal (unsigned >=) */

loc_00279B47: ;
    edi = eax;
    eax = eax - 8;
    if (CMP_B(ecx, MEM32(eax + 4))) goto loc_00279B47; /* jb: below (unsigned <) */

loc_00279B51: ;
    if (CMP_A(ecx, MEM32(eax + 4))) goto loc_00279B57; /* ja: above (unsigned >) */

loc_00279B53: ;
    if (CMP_B(edx, MEM32(eax))) goto loc_00279B47; /* jb: below (unsigned <) */

loc_00279B57: ;
    if (CMP_EQ(edi, esi)) goto loc_00279B6D; /* je: equal / zero */

loc_00279B5B: ;
    eax = esi + 8;
    if (CMP_EQ(esi, eax)) goto loc_00279B6D; /* je: equal / zero */

loc_00279B62: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00279B65: ;
    PUSH32(esp, 0); sub_00279F00(); /* call 0x00279F00 */

loc_00279B6A: ;
    esp = esp + 0xC;

loc_00279B6D: ;
    esi = esi + 8;
    if (CMP_NE(esi, ebp)) goto loc_00279B17; /* jne: not equal / not zero */

loc_00279B74: ;
    POP32(esp, edi);

loc_00279B75: ;
    POP32(esp, esi);

loc_00279B76: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00279B80
 * Original: 0x00279B80 - 0x00279BD7 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1B0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);

loc_00279BB1: ;
    if (CMP_EQ(ecx, edx)) { sub_00279BD7(); return; } /* je: equal / zero */

loc_00279BB5: ;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_00279BC9; /* je: equal / zero */

loc_00279BBF: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;

loc_00279BC9: ;
    eax = eax + 8;
    MEM32(ebp + 0x10) = eax;
    ecx = ecx + 8;
    MEM32(ebp + 8) = ecx;
    goto loc_00279BB1;

}

/**
 * sub_00279C00
 * Original: 0x00279C00 - 0x00279C4B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F290);
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

loc_00279C30: ;
    if (CMP_EQ(esi, ebx)) { sub_00279C4B(); return; } /* je: equal / zero */

loc_00279C34: ;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00279860(); /* call 0x00279860 */

loc_00279C3D: ;
    edi = edi + 0x20;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x20;
    MEM32(ebp + 8) = esi;
    goto loc_00279C30;

}

/**
 * sub_00279C70
 * Original: 0x00279C70 - 0x00279CBB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00279C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F280);
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

loc_00279CA0: ;
    if (CMP_EQ(esi, ebx)) { sub_00279CBB(); return; } /* je: equal / zero */

loc_00279CA4: ;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00279860(); /* call 0x00279860 */

loc_00279CAD: ;
    edi = edi + 0x20;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x20;
    MEM32(ebp + 8) = esi;
    goto loc_00279CA0;

}

/**
 * sub_00279CE0
 * Original: 0x00279CE0 - 0x00279D59 (121 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279CE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x28)) { sub_00279D59(); return; } /* jle: less or equal (signed <=) */

loc_00279CF5: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    PUSH32(esp, ebx);
    eax = eax + edx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 3);
    esi = eax;
    PUSH32(esp, edi);
    esi = esi << 4;
    edx = esi + ecx;
    edi = eax * 8;
    eax = edi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00279DB0(); /* call 0x00279DB0 */

loc_00279D20: ;
    ebx = MEM32(esp + 0x24);
    ecx = edi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - edi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279DB0(); /* call 0x00279DB0 */

loc_00279D33: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - edi;
    eax = eax - esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279DB0(); /* call 0x00279DB0 */

loc_00279D45: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279DB0(); /* call 0x00279DB0 */

loc_00279D51: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00279D70
 * Original: 0x00279D70 - 0x00279DAE (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279D70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    esi = esi - ebx;
    esi = (uint32_t)((int32_t)esi >> 3);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 1);
    if (CMP_LE(edi & edi, 0)) goto loc_00279DAA; /* jle: less or equal (signed <=) */

loc_00279D8D: ;
    /* nop */

loc_00279D90: ;
    eax = MEM32(ebx + edi * 8 + -4);
    ecx = MEM32(ebx + edi * 8 + -8);
    edi--;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00279E30(); /* call 0x00279E30 */

loc_00279DA3: ;
    esp = esp + 0xC;
    if (CMP_G(edi & edi, 0)) goto loc_00279D90; /* jg: greater (signed >) */

loc_00279DAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00279DB0
 * Original: 0x00279DB0 - 0x00279E2F (127 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279DB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(edx, MEM32(ecx + 4))) goto loc_00279DDE; /* ja: above (unsigned >) */

loc_00279DC2: ;
    if (CMP_B(edx, MEM32(ecx + 4))) goto loc_00279DCA; /* jb: below (unsigned <) */

loc_00279DC4: ;
    edx = MEM32(eax);
    if (CMP_AE(edx, MEM32(ecx))) goto loc_00279DDE; /* jae: above or equal (unsigned >=) */

loc_00279DCA: ;
    edi = MEM32(ecx);
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;

loc_00279DDE: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx + 4);
    if (CMP_A(esi, MEM32(eax + 4))) goto loc_00279E08; /* ja: above (unsigned >) */

loc_00279DEA: ;
    if (CMP_B(esi, MEM32(eax + 4))) goto loc_00279DF2; /* jb: below (unsigned <) */

loc_00279DEC: ;
    esi = MEM32(edx);
    if (CMP_AE(esi, MEM32(eax))) goto loc_00279E08; /* jae: above or equal (unsigned >=) */

loc_00279DF2: ;
    esi = MEM32(edx);
    edi = MEM32(edx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    POP32(esp, ebx);

loc_00279E08: ;
    edx = MEM32(eax + 4);
    if (CMP_A(edx, MEM32(ecx + 4))) goto loc_00279E2C; /* ja: above (unsigned >) */

loc_00279E10: ;
    if (CMP_B(edx, MEM32(ecx + 4))) goto loc_00279E18; /* jb: below (unsigned <) */

loc_00279E12: ;
    edx = MEM32(eax);
    if (CMP_AE(edx, MEM32(ecx))) goto loc_00279E2C; /* jae: above or equal (unsigned >=) */

loc_00279E18: ;
    edi = MEM32(ecx);
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;

loc_00279E2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279E30
 * Original: 0x00279E30 - 0x00279E98 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279E30: ;
    edx = MEM32(esp + 4);
    ecx = eax + eax + 2;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_GE(ecx, esi)) goto loc_00279E6F; /* jge: greater or equal (signed >=) */

loc_00279E3F: ;
    PUSH32(esp, ebx);

loc_00279E40: ;
    ebx = MEM32(edx + ecx * 8 + 4);
    if (CMP_A(ebx, MEM32(edx + ecx * 8 + -4))) goto loc_00279E56; /* ja: above (unsigned >) */

loc_00279E4A: ;
    if (CMP_B(ebx, MEM32(edx + ecx * 8 + -4))) goto loc_00279E55; /* jb: below (unsigned <) */

loc_00279E4C: ;
    ebx = MEM32(edx + ecx * 8);
    if (CMP_AE(ebx, MEM32(edx + ecx * 8 + -8))) goto loc_00279E56; /* jae: above or equal (unsigned >=) */

loc_00279E55: ;
    ecx--;

loc_00279E56: ;
    ebx = MEM32(edx + ecx * 8);
    MEM32(edx + eax * 8) = ebx;
    ebx = MEM32(edx + ecx * 8 + 4);
    MEM32(edx + eax * 8 + 4) = ebx;
    eax = ecx;
    ecx = ecx + ecx + 2;
    if (CMP_L(ecx, esi)) goto loc_00279E40; /* jl: less (signed <) */

loc_00279E6E: ;
    POP32(esp, ebx);

loc_00279E6F: ;
    if (CMP_NE(ecx, esi)) goto loc_00279E83; /* jne: not equal / not zero */

loc_00279E71: ;
    ecx = MEM32(edx + esi * 8 + -8);
    MEM32(edx + eax * 8) = ecx;
    ecx = MEM32(edx + esi * 8 + -4);
    MEM32(edx + eax * 8 + 4) = ecx;
    eax = esi + -1;

loc_00279E83: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00279EA0(); /* call 0x00279EA0 */

loc_00279E93: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279EA0
 * Original: 0x00279EA0 - 0x00279EF6 (86 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279EA0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(edi, esi)) goto loc_00279EEB; /* jge: greater or equal (signed >=) */

loc_00279EBD: ;
    /* nop */

loc_00279EC0: ;
    edx = MEM32(ecx + eax * 8 + 4);
    if (CMP_A(edx, ebx)) goto loc_00279EEB; /* ja: above (unsigned >) */

loc_00279EC8: ;
    if (CMP_B(edx, ebx)) goto loc_00279ED1; /* jb: below (unsigned <) */

loc_00279ECA: ;
    edx = MEM32(ecx + eax * 8);
    if (CMP_AE(edx, ebp)) goto loc_00279EEB; /* jae: above or equal (unsigned >=) */

loc_00279ED1: ;
    edx = MEM32(ecx + eax * 8);
    MEM32(ecx + esi * 8) = edx;
    edx = MEM32(ecx + eax * 8 + 4);
    MEM32(ecx + esi * 8 + 4) = edx;
    esi = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(edi, esi)) goto loc_00279EC0; /* jl: less (signed <) */

loc_00279EEB: ;
    MEM32(ecx + esi * 8) = ebp;
    MEM32(ecx + esi * 8 + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00279F00
 * Original: 0x00279F00 - 0x00279FD6 (214 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279F00: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    esi = esi - ebp;
    ecx = ebx;
    ecx = ecx - ebp;
    esi = (uint32_t)((int32_t)esi >> 3);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    eax = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00279F32; /* je: equal / zero */

loc_00279F27: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edi;
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(edx, edx)) goto loc_00279F27; /* jne: not equal / not zero */

loc_00279F32: ;
    if (CMP_GE(eax, ecx)) goto loc_00279FCE; /* jge: greater or equal (signed >=) */

loc_00279F3A: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00279FCE; /* jle: less or equal (signed <=) */

loc_00279F42: ;
    edi = ebp + eax * 8;
    MEM32(esp + 0x28) = eax;
    /* nop */

loc_00279F50: ;
    eax = MEM32(edi + 4);
    ebp = MEM32(edi);
    MEM32(esp + 0x1C) = eax;
    eax = edi + esi * 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = edi;
    if (CMP_NE(eax, ebx)) goto loc_00279F68; /* jne: not equal / not zero */

loc_00279F62: ;
    eax = esp + 0x24;
    goto loc_00279F70;

loc_00279F68: ;
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x2C;

loc_00279F70: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edi)) goto loc_00279FB7; /* je: equal / zero */

loc_00279F76: ;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = ebx;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    edx = ecx;
    if (CMP_GE(esi, eax)) goto loc_00279F9A; /* jge: greater or equal (signed >=) */

loc_00279F8D: ;
    ecx = ecx + esi * 8;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x10;
    goto loc_00279FB1;

loc_00279F9A: ;
    ecx = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1FFFFFFF);
    eax = eax + esi;
    eax = ecx + eax * 8;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_00279FB1: ;
    ecx = MEM32(eax);
    if (CMP_NE(ecx, edi)) goto loc_00279F76; /* jne: not equal / not zero */

loc_00279FB7: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    edi = edi - 8;
    eax--;
    MEM32(edx) = ebp;
    MEM32(edx + 4) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((eax != 0)) goto loc_00279F50; /* jne: not equal / not zero */

loc_00279FCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00279FE0
 * Original: 0x00279FE0 - 0x00279FE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279FE0(void)
{

loc_00279FE0: ;
    eax = 0x2F;
    esp += 4; return; /* ret */

}

/**
 * sub_00279FF0
 * Original: 0x00279FF0 - 0x0027A04A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00279FF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00279FF8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027A000: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027A04A(); return; } /* je: equal / zero */

loc_0027A004: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027A000; /* jl: less (signed <) */

loc_0027A010: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3A);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x603BD0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027A043: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027A060
 * Original: 0x0027A060 - 0x0027A15C (252 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A060(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0027A060: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027A06E; /* jne: not equal / not zero */

loc_0027A069: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027A06E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027A0C0; /* je: equal / zero */

loc_0027A096: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB4)) goto loc_0027A0C0; /* jb: below (unsigned <) */

loc_0027A0A2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A0AC: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A0B7: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_0027A0E6; /* jne: not equal / not zero */

loc_0027A0C0: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A0D2: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A0DD: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_0027A159; /* je: equal / zero */

loc_0027A0E6: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0027A159; /* je: equal / zero */

loc_0027A0F0: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0027A159; /* je: equal / zero */

loc_0027A0F5: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0027A159; /* je: equal / zero */

loc_0027A0FA: ;
    esi = edi + 0x10;
    MEM32(edi + 0xB0) = 0;
    PUSH32(esp, 0); sub_0027A390(); /* call 0x0027A390 */

loc_0027A10C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM8(edi + 8) = LO8(edx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027A125: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x863AF4);
    if (TEST_NZ(eax, eax)) goto loc_0027A140; /* jne: not equal / not zero */

loc_0027A135: ;
    MEM32(0x863AF4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027A140: ;
    ecx = MEM32(eax + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_0027A153; /* je: equal / zero */

loc_0027A14A: ;
    eax = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0027A140; /* jne: not equal / not zero */

loc_0027A150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027A153: ;
    MEM32(eax + 0xB0) = edi;

loc_0027A159: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027A160
 * Original: 0x0027A160 - 0x0027A1E6 (134 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A160(void)
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

loc_0027A160: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x863AF4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027A170: ;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(esi, esi)) goto loc_0027A1E2; /* je: equal / zero */

loc_0027A178: ;
    xmm0 = MEMF(esp + 8); /* movss */
    edi = edi;

loc_0027A180: ;
    /* comiss xmm0, MEMF(esi + 0xC) - sets EFLAGS */
    edx = MEM32(esi + 0xB0);
    if ((xmm0 <= MEMF(esi + 0xC))) goto loc_0027A1DA; /* jbe: below or equal (unsigned <=) */

loc_0027A18C: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0xB0) = 0;
    MEMF(esi + 0xC) = xmm0; /* movss */
    if (TEST_NZ(edi, edi)) goto loc_0027A1A7; /* jne: not equal / not zero */

loc_0027A19F: ;
    MEM32(0x863AF4) = edx;
    goto loc_0027A1AD;

loc_0027A1A7: ;
    MEM32(edi + 0xB0) = edx;

loc_0027A1AD: ;
    eax = MEM32(0x863AF0);
    if (TEST_NZ(eax, eax)) goto loc_0027A1C0; /* jne: not equal / not zero */

loc_0027A1B6: ;
    MEM32(0x863AF0) = esi;
    goto loc_0027A1D8;

    edi = edi;

loc_0027A1C0: ;
    ecx = MEM32(eax + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_0027A1D2; /* je: equal / zero */

loc_0027A1CA: ;
    eax = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0027A1C0; /* jne: not equal / not zero */

loc_0027A1D0: ;
    goto loc_0027A1D8;

loc_0027A1D2: ;
    MEM32(eax + 0xB0) = esi;

loc_0027A1D8: ;
    esi = edi;

loc_0027A1DA: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = esi;
    esi = edx;
    if (TEST_NZ(edx, edx)) goto loc_0027A180; /* jne: not equal / not zero */

loc_0027A1E2: ;
    POP32(esp, edi);
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
 * sub_0027A1F0
 * Original: 0x0027A1F0 - 0x0027A2EC (252 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A1F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0027A1F0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027A1FE; /* jne: not equal / not zero */

loc_0027A1F9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027A1FE: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027A250; /* je: equal / zero */

loc_0027A226: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB4)) goto loc_0027A250; /* jb: below (unsigned <) */

loc_0027A232: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A23C: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A247: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_0027A276; /* jne: not equal / not zero */

loc_0027A250: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A262: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A26D: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_0027A2E9; /* je: equal / zero */

loc_0027A276: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0027A2E9; /* je: equal / zero */

loc_0027A280: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0027A2E9; /* je: equal / zero */

loc_0027A285: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0027A2E9; /* je: equal / zero */

loc_0027A28A: ;
    esi = edi + 0x10;
    MEM32(edi + 0xB0) = 0;
    PUSH32(esp, 0); sub_0027A390(); /* call 0x0027A390 */

loc_0027A29C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM8(edi + 8) = LO8(edx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027A2B5: ;
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x863AF0);
    if (TEST_NZ(eax, eax)) goto loc_0027A2D0; /* jne: not equal / not zero */

loc_0027A2C1: ;
    MEM32(0x863AF0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027A2D0: ;
    ecx = MEM32(eax + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_0027A2E3; /* je: equal / zero */

loc_0027A2DA: ;
    eax = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0027A2D0; /* jne: not equal / not zero */

loc_0027A2E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027A2E3: ;
    MEM32(eax + 0xB0) = edi;

loc_0027A2E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027A2F0
 * Original: 0x0027A2F0 - 0x0027A38C (156 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A2F0(void)
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

loc_0027A2F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0027A160(); /* call 0x0027A160 */

loc_0027A2F7: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(0x776154) = 2;
    MEMF(0x77614C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0027AA10(); /* call 0x0027AA10 */

loc_0027A313: ;
    ecx = MEM32(0x863AF0);
    eax = ecx;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0027A32B; /* je: equal / zero */

loc_0027A321: ;
    eax = MEM32(eax + 0xB0);
    if (CMP_NE(eax, ebx)) goto loc_0027A321; /* jne: not equal / not zero */

loc_0027A32B: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0027A383; /* je: equal / zero */

loc_0027A32F: ;
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027A338: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi)); /* fld float */
    POP32(esp, esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0027A383; /* jbe: below or equal (unsigned <=) */

loc_0027A349: ;
    eax = MEM32(0x863AF0);
    MEM32(esp + 4) = eax;
    eax = MEM32(eax + 0xB0);
    if (CMP_EQ(eax, ebx)) goto loc_0027A370; /* je: equal / zero */

loc_0027A35C: ;
    MEM32(0x863AF0) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027A366: ;
    eax = MEM32(0x863AF0);
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0027A376;

loc_0027A370: ;
    MEM32(0x863AF0) = ebx;

loc_0027A376: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0027A380: ;
    esp = esp + 4;

loc_0027A383: ;
    MEM8(0x776154) = LO8(ebx);
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
 * sub_0027A390
 * Original: 0x0027A390 - 0x0027A498 (264 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A390(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027A390: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebx), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM16(ebx), LO16(eax))) goto loc_0027A490; /* je: equal / zero */

loc_0027A39E: ;
    ecx = ebx;

loc_0027A3A0: ;
    SET_LO16(ecx, MEM16(ecx));
    if (CMP_NE(LO16(ecx), 0xA7)) goto loc_0027A47C; /* jne: not equal / not zero */

loc_0027A3AE: ;
    SET_LO16(ecx, MEM16(ebx + edx * 2 + 2));
    edx++;
    if (CMP_NE(LO16(ecx), 0x6B)) goto loc_0027A3E4; /* jne: not equal / not zero */

loc_0027A3BA: ;
    ecx = MEM32(0x77A580);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0027A44A; /* je: equal / zero */

loc_0027A3C9: ;
    edi = 0x77A580;
    edi = edi;

loc_0027A3D0: ;
    MEM16(esi + eax * 2) = LO16(ecx);
    edi = edi + 2;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    eax++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0027A3D0; /* jne: not equal / not zero */

loc_0027A3E2: ;
    goto loc_0027A44A;

loc_0027A3E4: ;
    if (CMP_NE(LO16(ecx), 0x76)) goto loc_0027A414; /* jne: not equal / not zero */

loc_0027A3EA: ;
    ecx = MEM32(0x77A55C);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0027A44A; /* je: equal / zero */

loc_0027A3F5: ;
    edi = 0x77A55C;
    /* nop */

loc_0027A400: ;
    MEM16(esi + eax * 2) = LO16(ecx);
    edi = edi + 2;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    eax++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0027A400; /* jne: not equal / not zero */

loc_0027A412: ;
    goto loc_0027A44A;

loc_0027A414: ;
    MEM16(esi + eax * 2) = 0xA7;
    SET_LO16(ecx, MEM16(ebx + edx * 2));
    eax++;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0027A43C; /* je: equal / zero */

loc_0027A424: ;
    if (CMP_EQ(LO16(ecx), 0xA7)) goto loc_0027A43C; /* je: equal / zero */

loc_0027A42B: ;
    MEM16(esi + eax * 2) = LO16(ecx);
    eax++;
    edx++;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + edx * 2));
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0027A424; /* jne: not equal / not zero */

loc_0027A43C: ;
    SET_LO16(ecx, MEM16(ebx + edx * 2));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0027A490; /* je: equal / zero */

loc_0027A445: ;
    MEM16(esi + eax * 2) = LO16(ecx);
    eax++;

loc_0027A44A: ;
    SET_LO16(ecx, MEM16(ebx + edx * 2));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0027A465; /* je: equal / zero */

loc_0027A453: ;
    if (CMP_EQ(LO16(ecx), 0xA7)) goto loc_0027A465; /* je: equal / zero */

loc_0027A45A: ;
    SET_LO16(ecx, MEM16(ebx + edx * 2 + 2));
    edx++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0027A453; /* jne: not equal / not zero */

loc_0027A465: ;
    if (CMP_NE(MEM16(ebx + edx * 2 + -2), 0x73)) goto loc_0027A481; /* jne: not equal / not zero */

loc_0027A46D: ;
    MEM16(esi + eax * 2) = 0x27;
    eax++;
    MEM16(esi + eax * 2) = 0x73;
    goto loc_0027A480;

loc_0027A47C: ;
    MEM16(esi + eax * 2) = LO16(ecx);

loc_0027A480: ;
    eax++;

loc_0027A481: ;
    edx++;
    (void)0; /* cmp MEM16(ebx + edx * 2), 0 - flags set for next jcc */
    ecx = ebx + edx * 2;
    if (CMP_NE(MEM16(ebx + edx * 2), 0)) goto loc_0027A3A0; /* jne: not equal / not zero */

loc_0027A490: ;
    MEM16(esi + eax * 2) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027A4A0
 * Original: 0x0027A4A0 - 0x0027A72B (651 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A4A0: ;
    esp = esp - 0x16C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x180);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0027A4BC: ;
    edi = MEM32(esp + 0x184);
    esi = esp + 0x3C;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_0027A4CC: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0027A6BA; /* je: equal / zero */

loc_0027A4D6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0027A4DF: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0027A4EA: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x2C) = LO8(ebx);
    eax = esp + 0x1C;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0027A502; /* jne: not equal / not zero */

loc_0027A4FD: ;
    eax = 0x575574;

loc_0027A502: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x77A580);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027A514: ;
    esp = esp + 0x10;
    edx = 0; /* xor self */
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0027A522: ;
    edi = ebp;
    esi = esp + 0x3C;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_0027A52D: ;
    if (CMP_EQ(eax, ebx)) goto loc_0027A6C3; /* je: equal / zero */

loc_0027A535: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0027A53E: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0027A549: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x2C) = LO8(ebx);
    eax = esp + 0x1C;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0027A561; /* jne: not equal / not zero */

loc_0027A55C: ;
    eax = 0x575574;

loc_0027A561: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x77A55C);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027A573: ;
    ecx = MEM32(0x849800);
    edx = MEM32(esp + 0x190);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + edx * 4);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0027A060(); /* call 0x0027A060 */

loc_0027A591: ;
    eax = MEM32(0x863D04);
    esp = esp + 0x20;
    if (CMP_EQ(eax, 1)) goto loc_0027A720; /* je: equal / zero */

loc_0027A5A2: ;
    eax = MEM32(esp + 0x184);
    ebx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ebx;
    edi = esp + 0x30;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_0027A5C4: ;
    if (TEST_Z(eax, eax)) goto loc_0027A720; /* je: equal / zero */

loc_0027A5CC: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ebx;
    edi = esp + 0x34;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_0027A5E3: ;
    if (TEST_Z(eax, eax)) goto loc_0027A720; /* je: equal / zero */

loc_0027A5EB: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_0027A720; /* jle: less or equal (signed <=) */

loc_0027A5FE: ;
    eax = MEM32(esp + 0x180);
    eax = eax + 0xFFFFFDB5u;
    MEM32(esp + 0x38) = eax;
    ebp = 0x8658A4;

loc_0027A613: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0027A620; /* jne: not equal / not zero */

loc_0027A61B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027A620: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027A668; /* je: equal / zero */

loc_0027A646: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027A668; /* jb: below (unsigned <) */

loc_0027A64F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A659: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A661: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027A689; /* jne: not equal / not zero */

loc_0027A668: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A67A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A682: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0027A6CC; /* je: equal / zero */

loc_0027A689: ;
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
    MEM32(eax) = 0x603B28;
    goto loc_0027A6CE;

loc_0027A6BA: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    goto loc_0027A4FD;

loc_0027A6C3: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    goto loc_0027A55C;

loc_0027A6CC: ;
    eax = 0; /* xor self */

loc_0027A6CE: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM16(eax + 0x36) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM8(eax + 0x38) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x34));
    MEM16(eax + 0x3A) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x38));
    MEM8(eax + 0x3C) = LO8(edx);
    edx = MEM32(eax);
    MEM16(eax + 0x34) = LO16(ecx);
    ecx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0027A702: ;
    eax = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, edx)) goto loc_0027A613; /* jl: less (signed <) */

loc_0027A720: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x16C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027A730
 * Original: 0x0027A730 - 0x0027A7DF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A730(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027A730: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0027A743; /* jne: not equal / not zero */

loc_0027A73E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027A743: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027A78B; /* je: equal / zero */

loc_0027A769: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027A78B; /* jb: below (unsigned <) */

loc_0027A772: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A77C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A784: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027A7AC; /* jne: not equal / not zero */

loc_0027A78B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027A79D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027A7A5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0027A7DF(); return; } /* je: equal / zero */

loc_0027A7AC: ;
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
    MEM32(eax) = 0x603B28;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027A7F0
 * Original: 0x0027A7F0 - 0x0027A837 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A7F0(void)
{

loc_0027A7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX16(MEM16(edi + 0x34));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027A803: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027A80E: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027A819: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x3A);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027A824: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027A82F: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A840
 * Original: 0x0027A840 - 0x0027A89D (93 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A840(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027A840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027A84F: ;
    PUSH32(esp, 0x10);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027A85A: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027A866; /* jns: not sign (positive) */

loc_0027A861: ;
    eax = eax | 0xFFFF0000u;

loc_0027A866: ;
    PUSH32(esp, 2);
    MEM16(edi + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027A871: ;
    PUSH32(esp, 0x10);
    MEM8(edi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027A87B: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027A887; /* jns: not sign (positive) */

loc_0027A882: ;
    eax = eax | 0xFFFF0000u;

loc_0027A887: ;
    PUSH32(esp, 2);
    MEM16(edi + 0x3A) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027A892: ;
    esp = esp + 4;
    MEM8(edi + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A8A0
 * Original: 0x0027A8A0 - 0x0027A919 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A8A0: ;
    esp = esp - 0x154;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO16(eax, MEM16(ebp + 0x36));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_0027A8B9: ;
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x3C);
    edi = eax;
    SET_LO16(eax, MEM16(ebp + 0x3A));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_0027A8C8: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(edi, edi)) { sub_0027A919(); return; } /* je: equal / zero */

loc_0027A8CE: ;
    edi = ZX16(MEM16(edi + 0x60));
    edx = 0; /* xor self */
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0027A8DD: ;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_0027A8E6: ;
    if (TEST_Z(eax, eax)) goto loc_0027A90D; /* je: equal / zero */

loc_0027A8EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0027A8F3: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0027A8FE: ;
    esp = esp + 0xC;
    ecx = esp + 0x10;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_0027A91E(); return; /* tail jmp 0x0027A91E */

loc_0027A90D: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_0027A91E(); return; /* tail jmp 0x0027A91E */

}

/**
 * sub_0027A9D0
 * Original: 0x0027A9D0 - 0x0027AA0E (62 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0027A9D0: ;
    SET_LO8(ecx, MEM8(0x77A558));
    if (CMP_GE(LO8(ecx), 8)) goto loc_0027AA0D; /* jge: greater or equal (signed >=) */

loc_0027A9DB: ;
    SET_LO8(edx, MEM8(esp + 8));
    xmm0 = MEMF(0x648CF4); /* movss */
    eax = SX8(LO8(ecx));
    eax = eax << 3;
    MEM8(eax + 0x77A518) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x77A519) = LO8(edx);
    MEMF(eax + 0x77A51C) = xmm0; /* movss */
    MEM8(0x77A558) = LO8(ecx);

loc_0027AA0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AA10
 * Original: 0x0027AA10 - 0x0027AEF9 (1257 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AA10(void)
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

loc_0027AA10: ;
    SET_LO8(eax, MEM8(0x86E9C0));
    esp = esp - 0xA4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027AA34; /* je: equal / zero */

loc_0027AA1F: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027AA24: ;
    fp_push(MEMF(0x86EA0C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027AEF2; /* ja: above (unsigned >) */

loc_0027AA34: ;
    SET_LO8(eax, MEM8(0x77A558));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0027AEF1; /* jle: less or equal (signed <=) */

loc_0027AA48: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x77A518;
    esi = 0x77A520;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = esi;
    goto loc_0027AA70;

    /* nop */

loc_0027AA70: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(ebp * 8 + 0x77A51C) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp * 8 + 0x77A51C))) goto loc_0027AACC; /* jb: below (unsigned <) */

loc_0027AA7D: ;
    SET_LO8(eax, LO8(eax) - 1);
    ecx = SX8(LO8(eax));
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM8(0x77A558) = LO8(eax);
    if (CMP_GE(ebp, ecx)) goto loc_0027AA97; /* jge: greater or equal (signed >=) */

loc_0027AA8B: ;
    ecx = ecx - ebp;
    ecx = ecx << 1;
    ecx = ecx & 0x3FFFFFFE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0027AA97: ;
    ebx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    eax = 8;
    ebx = ebx - 0x1A;
    edi = edi - 0x14;
    esi = esi - eax;
    ebp--;
    ecx = ecx - eax;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = ecx;
    goto loc_0027AEAD;

loc_0027AACC: ;
    ebx = (uint32_t)(int32_t)SMEM8(ebp * 8 + 0x77A519);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ecx = MEM32(ebx + edx + 0x568);
    ebx = ebx + edx;
    if (TEST_Z(ecx, ecx)) goto loc_0027AAF4; /* je: equal / zero */

loc_0027AAE7: ;
    if (CMP_EQ(MEM32(ecx + 0x204), 2)) goto loc_0027AEAD; /* je: equal / zero */

loc_0027AAF4: ;
    eax = ZX16(MEM16(ebx + 0x60));
    if (TEST_S(eax, eax)) goto loc_0027AB47; /* jl: less (signed <) */

loc_0027AAFC: ;
    if (CMP_GE(eax, 0x10)) goto loc_0027AB47; /* jge: greater or equal (signed >=) */

loc_0027AB01: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027AB47; /* je: equal / zero */

loc_0027AB13: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = MEM32(eax + edx + -1644);
    (void)0; /* cmp esi, 0x35 - flags set for next jcc */
    eax = eax + edx + -1744;
    if (CMP_NE(esi, 0x35)) goto loc_0027AB47; /* jne: not equal / not zero */

loc_0027AB2F: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_0027AB47; /* je: equal / zero */

loc_0027AB39: ;
    esi = MEM32(eax + 0xCA0);
    if (TEST_Z(esi, esi)) goto loc_0027AEAD; /* je: equal / zero */

loc_0027AB47: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0027AB71; /* je: equal / zero */

loc_0027AB50: ;
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0027AB71; /* je: equal / zero */

loc_0027AB5A: ;
    xmm1 = MEMF(ecx + 0x66C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x13) = 1;
    if ((xmm1 > xmm0)) goto loc_0027AB71; /* ja: above (unsigned >) */

loc_0027AB6C: ;
    MEM8(esp + 0x13) = 0;

loc_0027AB71: ;
    edi = (uint32_t)(int32_t)SMEM8(edi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027AB7E: ;
    esi = esp + 0x34;
    ecx = edi;
    PUSH32(esp, 0); sub_00344F50(); /* call 0x00344F50 */

loc_0027AB89: ;
    edi = eax;
    ebp = 0; /* xor self */
    if (CMP_NE(edi, ebp)) goto loc_0027ABA6; /* jne: not equal / not zero */

loc_0027AB91: ;
    edx = MEM32(esp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx * 8 + 0x77A51C) = xmm0; /* movss */
    goto loc_0027AEA3;

loc_0027ABA6: ;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm0 = xmm0 - MEMF(eax * 8 + 0x77A51C); /* subss */
    xmm2 = MEMF(0x648D10); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, 0xB4);
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0027AC0B; /* jbe: below or equal (unsigned <=) */

loc_0027ABD8: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0027ABFA; /* jbe: below or equal (unsigned <=) */

loc_0027ABEE: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_0027AC58;

loc_0027ABFA: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0027AC05; /* jbe: below or equal (unsigned <=) */

loc_0027ABFF: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0027AC05: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_0027AC58;

loc_0027AC0B: ;
    /* comiss xmm2, MEMF(eax * 8 + 0x77A51C) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax * 8 + 0x77A51C))) goto loc_0027AC65; /* jbe: below or equal (unsigned <=) */

loc_0027AC15: ;
    xmm2 = MEMF(eax * 8 + 0x77A51C); /* movss */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0027AC43; /* jbe: below or equal (unsigned <=) */

loc_0027AC3B: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_0027AC4E;

loc_0027AC43: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0027AC4E; /* jbe: below or equal (unsigned <=) */

loc_0027AC48: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0027AC4E: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */

loc_0027AC58: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0027AC63: ;
    SET_LO8(ebx, LO8(eax));

loc_0027AC65: ;
    PUSH32(esp, 0x1B);
    eax = 0x5000;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0027AC73: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0027AC98; /* je: equal / zero */

loc_0027AC7A: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603BA8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027AC86: ;
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027AC93: ;
    esp = esp + 0xC;
    goto loc_0027ACC9;

loc_0027AC98: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = 0x603BA4;
    if (CMP_G(edi, ebp)) goto loc_0027ACA6; /* jg: greater (signed >) */

loc_0027ACA1: ;
    esi = 0x5F59F0;

loc_0027ACA6: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9C58;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027ACB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x603B90);
    ecx = esp + 0x44;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027ACC6: ;
    esp = esp + 0x18;

loc_0027ACC9: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEM32(0x776158) = ebp;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027AD08; /* je: equal / zero */

loc_0027ACF8: ;
    xmm0 = MEMF(0x649678); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0027AD08: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM8(0x77616E) = LO8(ebx);
    if (CMP_GE(edi, ebp)) goto loc_0027AD29; /* jge: greater or equal (signed >=) */

loc_0027AD12: ;
    MEM8(0x776171) = 0xE1;
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    goto loc_0027AD3E;

loc_0027AD29: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;

loc_0027AD3E: ;
    (void)0; /* cmp MEM32(0x84A144), ebp - flags set for next jcc */
    esi = 0x96;
    if (CMP_EQ(MEM32(0x84A144), ebp)) goto loc_0027AD6A; /* je: equal / zero */

loc_0027AD4B: ;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(edx * 8 + 0x77A519);
    eax = eax - ebp;
    if ((eax == 0)) goto loc_0027AD65; /* je: equal / zero */

loc_0027AD5B: ;
    eax--;
    if ((eax != 0)) goto loc_0027AD6A; /* jne: not equal / not zero */

loc_0027AD5E: ;
    esi = 0x145;
    goto loc_0027AD6A;

loc_0027AD65: ;
    esi = 0x55;

loc_0027AD6A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027AD75; /* je: equal / zero */

loc_0027AD72: ;
    esi = esi + 0x1A;

loc_0027AD75: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0027AD8D: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(ecx * 8 + 0x77A51C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx * 8 + 0x77A51C))) goto loc_0027AE38; /* jbe: below or equal (unsigned <=) */

loc_0027ADAA: ;
    xmm1 = MEMF(0x648D40); /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027ADE1; /* je: equal / zero */

loc_0027ADD1: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0027ADE1: ;
    if (CMP_GE(edi, ebp)) goto loc_0027ADFC; /* jge: greater or equal (signed >=) */

loc_0027ADE5: ;
    MEM8(0x776171) = 0xE1;
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    goto loc_0027AE13;

loc_0027ADFC: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    SET_LO8(ebx, LO8(ebx) >> 1);

loc_0027AE13: ;
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0027AE31: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0xC;

loc_0027AE38: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    eax = MEM32(0x6BAF28);
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(ecx * 8 + 0x77A51C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    MEM32(0x776158) = ebp;
    MEMF(ecx * 8 + 0x77A51C) = xmm0; /* movss */

loc_0027AEA3: ;
    edx = MEM32(0x84A5F8);
    ebp = MEM32(esp + 0x18);

loc_0027AEAD: ;
    edi = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(0x77A558));
    edi = edi + 0x1A;
    esi = esi + 0x14;
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x28);
    ecx = SX8(LO8(eax));
    ebp++;
    esi = esi + 8;
    edi = edi + 8;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = edi;
    if (CMP_L(ebp, ecx)) goto loc_0027AA70; /* jl: less (signed <) */

loc_0027AEEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027AEF1: ;
    POP32(esp, ebp);

loc_0027AEF2: ;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027AF00
 * Original: 0x0027AF00 - 0x0027AF08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF00(void)
{

loc_0027AF00: ;
    eax = 0x80004001u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027AF10
 * Original: 0x0027AF10 - 0x0027AF18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF10(void)
{

loc_0027AF10: ;
    eax = 0x80004001u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0027AF20
 * Original: 0x0027AF20 - 0x0027AFAE (142 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027AF20: ;
    MEM32(0x849E78) = eax;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x77A5A4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0027AF39; /* jne: not equal / not zero */

loc_0027AF34: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027AF39: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027AF83; /* je: equal / zero */

loc_0027AF61: ;
    if (CMP_B(MEM32(esi + 0x80), 0x78)) goto loc_0027AF83; /* jb: below (unsigned <) */

loc_0027AF6A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027AF74: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027AF7C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027AFA4; /* jne: not equal / not zero */

loc_0027AF83: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027AF95: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027AF9D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0027AFAB; /* je: equal / zero */

loc_0027AFA4: ;
    edi = eax;
    PUSH32(esp, 0); sub_0027B080(); /* call 0x0027B080 */

loc_0027AFAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AFB0
 * Original: 0x0027AFB0 - 0x0027AFCC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AFB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027AFB0: ;
    ecx = MEM32(0x849E74);
    if (TEST_Z(ecx, ecx)) goto loc_0027AFCB; /* je: equal / zero */

loc_0027AFBA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_0027AFC1: ;
    MEM32(0x849E74) = 0;

loc_0027AFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AFD0
 * Original: 0x0027AFD0 - 0x0027B053 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AFD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027AFD0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027AFDE; /* jne: not equal / not zero */

loc_0027AFD9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027AFDE: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027B028; /* je: equal / zero */

loc_0027B006: ;
    if (CMP_B(MEM32(esi + 0x80), 0x78)) goto loc_0027B028; /* jb: below (unsigned <) */

loc_0027B00F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027B019: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027B021: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027B049; /* jne: not equal / not zero */

loc_0027B028: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027B03A: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027B042: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0027B050; /* je: equal / zero */

loc_0027B049: ;
    edi = eax;
    PUSH32(esp, 0); sub_0027B080(); /* call 0x0027B080 */

loc_0027B050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B060
 * Original: 0x0027B060 - 0x0027B078 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B060(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B060: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849E74);
    if (TEST_Z(esi, esi)) goto loc_0027B076; /* je: equal / zero */

loc_0027B06B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0027B7D0(); /* call 0x0027B7D0 */

loc_0027B076: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B080
 * Original: 0x0027B080 - 0x0027B213 (403 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B080: ;
    esp = esp - 0x28;
    ecx = MEM32(0x849E78);
    edx = MEM32(0x77A5A4);
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    ebx = 0; /* xor self */
    MEM32(esp + 0x2C) = eax;
    ebp = edi + 0x14;
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(edi) = 0x603C30;
    MEM32(0x849E74) = edi;
    MEM8(edi + 4) = LO8(ebx);
    MEM8(edi + 5) = LO8(ebx);
    MEM8(edi + 6) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM8(edi + 0x10) = 1;
    MEM32(esp + 0x14) = 0xF;
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x1C) = 0x28;
    MEM32(esp + 0x2C) = 0x32;
    PUSH32(esp, 0); sub_0043463C(); /* call 0x0043463C */

loc_0027B10A: ;
    if (TEST_S(eax, eax)) goto loc_0027B20B; /* jl: less (signed <) */

loc_0027B112: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343C0(); /* call 0x004343C0 */

loc_0027B11D: ;
    edx = MEM32(0x561A20);
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343BB(); /* call 0x004343BB */

loc_0027B12D: ;
    ecx = MEM32(0x561A9C);
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343BB(); /* call 0x004343BB */

loc_0027B13D: ;
    eax = MEM32(0x561B18);
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343BB(); /* call 0x004343BB */

loc_0027B14C: ;
    xmm0 = MEMF(0x64908C); /* movss */
    ecx = 0; /* xor self */
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEMF(edi + 0x74) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    esi = edi + 0x28;
    if (CMP_GE(ecx, 2)) goto loc_0027B173; /* jge: greater or equal (signed >=) */

loc_0027B167: ;
    edx = MEM32(ecx * 4 + 0x8470FC);
    eax = MEM32(edx + 8);
    goto loc_0027B178;

loc_0027B173: ;
    eax = 0x75A0B4;

loc_0027B178: ;
    eax = ZX8(MEM8(eax + 2));
    if (CMP_L(eax, ebx)) goto loc_0027B189; /* jl: less (signed <) */

loc_0027B180: ;
    if (CMP_GE(eax, 4)) goto loc_0027B189; /* jge: greater or equal (signed >=) */

loc_0027B185: ;
    MEM8(esi) = LO8(eax);
    goto loc_0027B18C;

loc_0027B189: ;
    MEM8(esi) = 0xFF;

loc_0027B18C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + -16) = 0xFFFFFFFFu;
    MEM32(esi + -8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEM8(esi + 0x16) = LO8(ebx);
    MEM8(0x86E989) = 1;
    SET_LO8(eax, MEM8(esi));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0027B1EE; /* je: equal / zero */

loc_0027B1B4: ;
    ecx = MEM32(ebp);
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343CF(); /* call 0x004343CF */

loc_0027B1C1: ;
    if (TEST_S(eax, eax)) goto loc_0027B20A; /* jl: less (signed <) */

loc_0027B1C5: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0027B1CE: ;
    edx = MEM32(ebp);
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x561A9C);
    if (TEST_NZ(eax, eax)) goto loc_0027B1E2; /* jne: not equal / not zero */

loc_0027B1DD: ;
    eax = MEM32(0x561B8C);

loc_0027B1E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B1EA: ;
    ecx = MEM32(esp + 0xC);

loc_0027B1EE: ;
    ecx++;
    esi = esi + 0x28;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(ecx, 2)) goto loc_0027B167; /* jl: less (signed <) */

loc_0027B1FF: ;
    eax = MEM32(ebp);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00434463(); /* call 0x00434463 */

loc_0027B20A: ;
    POP32(esp, esi);

loc_0027B20B: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B220
 * Original: 0x0027B220 - 0x0027B250 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B220(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B220: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM32(esi) = 0x603C30;
    PUSH32(esp, 0); sub_004346DF(); /* call 0x004346DF */

loc_0027B232: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0027B24A; /* je: equal / zero */

loc_0027B239: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0027B247: ;
    esp = esp + 4;

loc_0027B24A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B300
 * Original: 0x0027B300 - 0x0027B49B (411 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B300: ;
    esp = esp - 0x180;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x190);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00434416(); /* call 0x00434416 */

loc_0027B324: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B48C; /* jne: not equal / not zero */

loc_0027B32C: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    if (CMP_BE(eax & eax, 0)) goto loc_0027B48C; /* jbe: below or equal (unsigned <=) */

loc_0027B33C: ;
    ebp = esp + 0x28;

loc_0027B340: ;
    ebx = 0; /* xor self */
    eax = esi + 0x3E;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = eax;

loc_0027B355: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -22);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0027B429; /* je: equal / zero */

loc_0027B366: ;
    edi = MEM32(ebp + 4);
    esi = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002962E0(); /* call 0x002962E0 */

loc_0027B378: ;
    if (TEST_Z(eax, eax)) goto loc_0027B38A; /* je: equal / zero */

loc_0027B37C: ;
    SET_LO8(ecx, MEM8(eax + 0x774));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027B38A; /* je: equal / zero */

loc_0027B386: ;
    SET_LO8(ebx, 1);
    goto loc_0027B3A9;

loc_0027B38A: ;
    if (CMP_EQ(MEM32(0x75864C), 0xFFFFFFFFu)) goto loc_0027B3A7; /* je: equal / zero */

loc_0027B393: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_0027B39C: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027B3A7; /* je: equal / zero */

loc_0027B3A3: ;
    SET_LO8(ebx, 1);
    goto loc_0027B3A9;

loc_0027B3A7: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0027B3A9: ;
    eax = MEM32(esp + 0x194);
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027B3EC; /* je: equal / zero */

loc_0027B3B7: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    esp = esp - 0xC;
    edx = ebp;
    esi = MEM32(edx);
    ecx = esp;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0); sub_0043443F(); /* call 0x0043443F */

loc_0027B3DE: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0027B429; /* jne: not equal / not zero */

loc_0027B3E2: ;
    MEM32(esp + 0x14) = 0;
    goto loc_0027B429;

loc_0027B3EC: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0027B421; /* je: equal / zero */

loc_0027B3F5: ;
    edx = MEM32(esp + 0x24);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ecx = ebp;
    esi = MEM32(ecx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043443F(); /* call 0x0043443F */

loc_0027B41F: ;
    goto loc_0027B429;

loc_0027B421: ;
    MEM32(esp + 0x14) = 0xFFFF;

loc_0027B429: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    ebx++;
    eax = eax + 0x28;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = eax;
    if (CMP_B(ebx, 2)) goto loc_0027B355; /* jb: below (unsigned <) */

loc_0027B446: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x194);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    esp = esp - 0xC;
    ecx = ebp;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043443F(); /* call 0x0043443F */

loc_0027B474: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    eax++;
    ebp = ebp + 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(eax, ecx)) goto loc_0027B340; /* jb: below (unsigned <) */

loc_0027B48C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B4A0
 * Original: 0x0027B4A0 - 0x0027B516 (118 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B4A0: ;
    edx = MEM32(0x849E74);
    if (TEST_Z(edx, edx)) goto loc_0027B511; /* je: equal / zero */

loc_0027B4AA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = eax + 0x28;
    /* nop */

loc_0027B4C0: ;
    edi = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_EQ(edi, ecx)) goto loc_0027B4D7; /* je: equal / zero */

loc_0027B4C7: ;
    esi++;
    eax = eax + 0x28;
    if (CMP_L(esi, 2)) goto loc_0027B4C0; /* jl: less (signed <) */

loc_0027B4D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    esp += 20; return; /* ret 16 */

loc_0027B4D7: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0027B50F; /* je: equal / zero */

loc_0027B4DC: ;
    SET_LO8(eax, 1);
    ecx = esi;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(edx + 4) = LO8(eax);
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    eax = MEM32(0x863D04);
    if (CMP_EQ(MEM32(0x84BEFC), 2)) goto loc_0027B4F8; /* je: equal / zero */

loc_0027B4F3: ;
    if (CMP_NE(eax, 2)) goto loc_0027B50F; /* jne: not equal / not zero */

loc_0027B4F8: ;
    if (CMP_NE(eax, 3)) goto loc_0027B504; /* jne: not equal / not zero */

loc_0027B4FD: ;
    eax = esi;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_0027B504: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    PUSH32(esp, 0); sub_0028B890(); /* call 0x0028B890 */

loc_0027B50F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0027B511: ;
    eax = 0; /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027B520
 * Original: 0x0027B520 - 0x0027B585 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B520: ;
    eax = MEM32(ebx + 0x14);
    esp = esp - 0x16C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00434416(); /* call 0x00434416 */

loc_0027B53B: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B57C; /* jne: not equal / not zero */

loc_0027B53F: ;
    eax = MEM32(esp + 8);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0027B57C; /* jbe: below or equal (unsigned <=) */

loc_0027B549: ;
    edi = esp + 0xC;
    /* nop */

loc_0027B550: ;
    esp = esp - 0xC;
    eax = edi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343FA(); /* call 0x004343FA */

loc_0027B570: ;
    eax = MEM32(esp + 8);
    esi++;
    edi = edi + 0xC;
    if (CMP_B(esi, eax)) goto loc_0027B550; /* jb: below (unsigned <) */

loc_0027B57C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x16C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B590
 * Original: 0x0027B590 - 0x0027B676 (230 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002962E0(); /* call 0x002962E0 */

loc_0027B5A6: ;
    if (TEST_Z(eax, eax)) goto loc_0027B671; /* je: equal / zero */

loc_0027B5AE: ;
    SET_LO8(ecx, MEM8(eax + 0x774));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0027B671; /* jne: not equal / not zero */

loc_0027B5BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_0027B5C5: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027B671; /* jne: not equal / not zero */

loc_0027B5D0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0027B60E; /* je: equal / zero */

loc_0027B5D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA53);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0027B5EC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0027B60E; /* je: equal / zero */

loc_0027B5F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA54);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0027B60B: ;
    esp = esp + 0x10;

loc_0027B60E: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) goto loc_0027B671; /* jne: not equal / not zero */

loc_0027B617: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_0027B61C: ;
    eax = ZX16(MEM16(eax + 0xA));
    eax = ~eax;
    eax = eax & 1;
    if ((eax == 0)) goto loc_0027B671; /* je: equal / zero */

loc_0027B627: ;
    eax = MEM32(0x849E74);
    if (TEST_Z(eax, eax)) goto loc_0027B63C; /* je: equal / zero */

loc_0027B630: ;
    SET_LO8(ecx, MEM8(eax + 0x3E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0027B643; /* jne: not equal / not zero */

loc_0027B63C: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027B671; /* je: equal / zero */

loc_0027B643: ;
    ecx = edi;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    edx = esi;
    esi = MEM32(ebx + 0x14);
    MEM32(edi) = ecx;
    eax = 0; /* xor self */
    MEM32(edi + 4) = edx;
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_0043441B(); /* call 0x0043441B */

loc_0027B669: ;
    if (TEST_Z(eax, eax)) goto loc_0027B671; /* je: equal / zero */

loc_0027B66D: ;
    MEM8(ebx + 4) = 0xFF;

loc_0027B671: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027B680
 * Original: 0x0027B680 - 0x0027B702 (130 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B680(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ebx + ebx * 4 + 5;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + eax * 8);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) { sub_0027B702(); return; } /* je: equal / zero */

loc_0027B692: ;
    ecx = MEM32(0x561B18);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B6A3: ;
    eax = MEM32(0x561B18);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B6B3: ;
    eax = MEM32(esi + 0x14);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343D9(); /* call 0x004343D9 */

loc_0027B6C2: ;
    if (TEST_NZ(eax, eax)) { sub_0027B702(); return; } /* jne: not equal / not zero */

loc_0027B6C6: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, MEM32(0x561B18))) { sub_0027B702(); return; } /* jne: not equal / not zero */

loc_0027B6D2: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3A98);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00434468(); /* call 0x00434468 */

loc_0027B6EB: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B6FA; /* jne: not equal / not zero */

loc_0027B6EF: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(esi + 5) = LO8(ebx);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;

loc_0027B6FA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B710
 * Original: 0x0027B710 - 0x0027B76F (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B710(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 6));
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_0027B75C; /* jbe: below or equal (unsigned <=) */

loc_0027B71F: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + eax * 8);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0027B75B; /* je: equal / zero */

loc_0027B72F: ;
    edx = MEM32(esi + 0x14);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343D9(); /* call 0x004343D9 */

loc_0027B73E: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(eax, MEM32(0x561B18))) goto loc_0027B75B; /* jne: not equal / not zero */

loc_0027B74A: ;
    ecx = MEM32(0x561A9C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B75B: ;
    POP32(esp, edi);

loc_0027B75C: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 6) = LO8(ebx);
    MEM8(esi + 5) = LO8(ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B770
 * Original: 0x0027B770 - 0x0027B7CF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B770(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B770: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x28);
    eax = 0; /* xor self */
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0027B7C6; /* je: equal / zero */

loc_0027B78F: ;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0027B794: ;
    if (TEST_Z(eax, eax)) goto loc_0027B7B3; /* je: equal / zero */

loc_0027B798: ;
    edx = MEM32(0x561A9C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B7A9: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM8(esi + 5) = LO8(eax);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0027B7B3: ;
    ecx = MEM32(0x561B8C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B7C4: ;
    eax = 0; /* xor self */

loc_0027B7C6: ;
    POP32(esp, edi);
    MEM8(esi + 5) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027B7D0
 * Original: 0x0027B7D0 - 0x0027B847 (119 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B7D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027B842; /* jne: not equal / not zero */

loc_0027B7DB: ;
    SET_LO8(eax, MEM8(esi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027B842; /* jne: not equal / not zero */

loc_0027B7E2: ;
    eax = ebx + ebx * 4 + 5;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + eax * 8);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0027B841; /* je: equal / zero */

loc_0027B7F0: ;
    ecx = MEM32(0x561B18);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B801: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B841; /* jne: not equal / not zero */

loc_0027B805: ;
    eax = MEM32(esi + 0x14);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343D9(); /* call 0x004343D9 */

loc_0027B814: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B841; /* jne: not equal / not zero */

loc_0027B818: ;
    eax = MEM32(0x849E74);
    SET_LO8(eax, MEM8(eax + 0x10));
    ecx = MEM32(esi + 0x14);
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00434471(); /* call 0x00434471 */

loc_0027B838: ;
    if (TEST_NZ(eax, eax)) goto loc_0027B841; /* jne: not equal / not zero */

loc_0027B83C: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(esi + 6) = LO8(ebx);

loc_0027B841: ;
    POP32(esp, edi);

loc_0027B842: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B850
 * Original: 0x0027B850 - 0x0027B864 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B850(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B850: ;
    eax = MEM32(0x849E74);
    if (CMP_EQ(LO8(ecx), MEM8(eax + 0x10))) goto loc_0027B863; /* je: equal / zero */

loc_0027B85A: ;
    PUSH32(esp, eax);
    MEM8(eax + 0x10) = LO8(ecx);
    PUSH32(esp, 0); sub_0027B300(); /* call 0x0027B300 */

loc_0027B863: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B870
 * Original: 0x0027B870 - 0x0027B8CC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B870: ;
    eax = edi + edi * 4 + 5;
    PUSH32(esp, ebp);
    ebp = esi + eax * 8;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    if (CMP_EQ(ebx, eax)) goto loc_0027B8CA; /* je: equal / zero */

loc_0027B880: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0027B88F; /* je: equal / zero */

loc_0027B885: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043450E(); /* call 0x0043450E */

loc_0027B88F: ;
    MEM8(ebp) = LO8(ebx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004343CF(); /* call 0x004343CF */

loc_0027B89C: ;
    eax = edi;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0027B8A3: ;
    if (TEST_Z(eax, eax)) goto loc_0027B8B9; /* je: equal / zero */

loc_0027B8A7: ;
    eax = MEM32(0x561A9C);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B8B7: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027B8B9: ;
    edx = MEM32(0x561B8C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004343D4(); /* call 0x004343D4 */

loc_0027B8CA: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B8D0
 * Original: 0x0027B8D0 - 0x0027B91D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B8D0(void)
{

loc_0027B8D0: ;
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
    MEM32(eax) = 0x603E60;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM16(eax + 0x34) = 0xFFFE;
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x37) = LO8(ecx);
    MEM8(eax + 0x36) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B920
 * Original: 0x0027B920 - 0x0027B977 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B920(void)
{

loc_0027B920: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x40) = edx;
    edx = MEM32(esp + 8);
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
    MEM32(eax) = 0x603E60;
    MEM32(eax + 0x44) = edx;
    MEM16(eax + 0x34) = 0xFFFE;
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x37) = LO8(ecx);
    MEM8(eax + 0x36) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B980
 * Original: 0x0027B980 - 0x0027B986 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B980(void)
{

loc_0027B980: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B990
 * Original: 0x0027B990 - 0x0027B9F7 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B990(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027B990: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027B998: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027B9A0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027B9F7(); return; } /* je: equal / zero */

loc_0027B9A4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027B9A0; /* jl: less (signed <) */

loc_0027B9B0: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x3A));
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x603FF8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027B9F0: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027BA10
 * Original: 0x0027BA10 - 0x0027BA52 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA10(void)
{

loc_0027BA10: ;
    edx = MEM32(esp + 8);
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
    MEM32(eax) = 0x603DF8;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027BA60
 * Original: 0x0027BA60 - 0x0027BA66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA60(void)
{

loc_0027BA60: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BA70
 * Original: 0x0027BA70 - 0x0027BA76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA70(void)
{

loc_0027BA70: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BA80
 * Original: 0x0027BA80 - 0x0027BA86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA80(void)
{

loc_0027BA80: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BA90
 * Original: 0x0027BA90 - 0x0027BAD9 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027BA90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027BA98: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027BAA0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027BAD9(); return; } /* je: equal / zero */

loc_0027BAA4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027BAA0; /* jl: less (signed <) */

loc_0027BAB0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x603FDC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027BAD2: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027BAF0
 * Original: 0x0027BAF0 - 0x0027BB22 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BAF0(void)
{

loc_0027BAF0: ;
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
    MEM32(eax) = 0x603ED0;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BB30
 * Original: 0x0027BB30 - 0x0027BB36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BB30(void)
{

loc_0027BB30: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BB40
 * Original: 0x0027BB40 - 0x0027BC0A (202 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027BB40: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0027BB53; /* jne: not equal / not zero */

loc_0027BB4E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027BB53: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027BBA1; /* je: equal / zero */

loc_0027BB79: ;
    if (CMP_B(MEM32(esi + 0x80), 0x218)) goto loc_0027BBA1; /* jb: below (unsigned <) */

loc_0027BB85: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027BB8F: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027BB9A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027BBC5; /* jne: not equal / not zero */

loc_0027BBA1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027BBB3: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027BBBE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0027BC0A(); return; } /* je: equal / zero */

loc_0027BBC5: ;
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
    MEM32(eax + 0x200) = ebx;
    MEM32(eax + 0x204) = ebx;
    MEM8(eax + 0x209) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600938;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD90
 * Original: 0x0027BD90 - 0x0027BEAF (287 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BD90: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ebx = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BDA4: ;
    PUSH32(esp, 0x10);
    MEM8(ebx + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BDAE: ;
    MEM16(ebx + 0x1F8) = LO16(eax);
    ecx = 0; /* xor self */
    eax = 0xFFFFFFBDu;
    esp = esp + 8;
    eax = eax - ebx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x2C) = ecx;
    edi = ebx + 0x43;
    MEM32(esp + 0x18) = eax;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebx + 0x34));
    if (TEST_Z(LO8(ecx), LO8(eax))) { sub_0027BEAF(); return; } /* je: equal / zero */

loc_0027BDE2: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BDE9: ;
    PUSH32(esp, 0x20);
    ebp = 0; /* xor self */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BDF6: ;
    ecx = MEM32(esp + 0x2C);
    edx = 0; /* xor self */
    eax = eax | ebp;
    edx = edx | ecx;
    PUSH32(esp, 5);
    MEM32(edi + -11) = eax;
    MEM32(edi + -7) = edx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE0D: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0027BE2E; /* jle: less or equal (signed <=) */

loc_0027BE18: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE1F: ;
    esp = esp + 4;
    MEM8(edi + ebp) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_0027BE18; /* jl: less (signed <) */

loc_0027BE2E: ;
    eax = MEM32(esp + 0x18);
    eax = eax + edi;
    eax = eax + ebp;
    PUSH32(esp, 5);
    MEM8(eax + ebx + 0x43) = 0;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE42: ;
    PUSH32(esp, 1);
    MEM8(edi + -3) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE4C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(edi + -2) = LO8(ecx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE5B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 5);
    MEM8(edi + -1) = LO8(edx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE6A: ;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0027BEA0; /* jle: less or equal (signed <=) */

loc_0027BE73: ;
    ebp = edi + 0x21;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    edi = edi;

loc_0027BE80: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027BE87: ;
    MEM16(ebp) = LO16(eax);
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    ebp = ebp + 2;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0027BE80; /* jne: not equal / not zero */

loc_0027BE9C: ;
    ecx = MEM32(esp + 0x1C);

loc_0027BEA0: ;
    eax = MEM32(esp + 0x2C);
    eax = eax + ecx;
    MEM16(ebx + eax * 2 + 0x64) = 0;
    g_seh_ebp = ebp; sub_0027BEC2(); return; /* tail jmp 0x0027BEC2 */

}

/**
 * sub_0027BF60
 * Original: 0x0027BF60 - 0x0027C161 (513 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BF60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BF60: ;
    esp = esp - 0x10;
    eax = MEM32(0x862CA8);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(ebx + 0x200) = eax;
    ecx = MEM32(0x862CAC);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(ebx + 0x204) = ecx;
    MEM8(ebx + 0x34) = 0;
    ebp = 0; /* xor self */
    edi = ebx + 0x38;
    /* nop */
    ecx = MEM32(0x863D04);
    eax = 2;
    if (CMP_EQ(ecx, eax)) goto loc_0027BFC0; /* je: equal / zero */

loc_0027BF9F: ;
    if (CMP_NE(MEM32(ebp * 4 + 0x849E54), eax)) goto loc_0027BFF0; /* jne: not equal / not zero */

loc_0027BFA8: ;
    esi = edi + 0xB;
    ecx = ebp;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0027BFB2: ;
    eax = ebp;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_0027BFB9: ;
    MEM32(edi) = eax;
    MEM32(edi + 4) = edx;
    goto loc_0027BFE2;

loc_0027BFC0: ;
    eax = ZX8(MEM8(0x864220));
    if (CMP_NE(ebp, eax)) goto loc_0027BFF0; /* jne: not equal / not zero */

loc_0027BFCB: ;
    esi = edi + 0xB;
    ecx = ebp;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0027BFD5: ;
    MEM32(edi) = 1;
    MEM32(edi + 4) = 0;

loc_0027BFE2: ;
    SET_LO8(eax, MEM8(ebx + 0x34));
    SET_LO8(edx, 1);
    ecx = ebp;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(ebx + 0x34) = LO8(eax);

loc_0027BFF0: ;
    esi = MEM32(ebp * 4 + 0x862CD0);
    if (TEST_Z(esi, esi)) { sub_0027C161(); return; } /* je: equal / zero */

loc_0027BFFF: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0027C02C; /* jne: not equal / not zero */

loc_0027C008: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_0027C02C; /* jne: not equal / not zero */

loc_0027C011: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_0027C020: ;
    ebx = MEM32(esp + 0x14);
    esp = esp + 4;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0027C033; /* jne: not equal / not zero */

loc_0027C02C: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11B7);

loc_0027C033: ;
    esi = MEM32(0x84A5F8);
    MEM8(edi + 8) = LO8(eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027C041: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027C046: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0027C061; /* jne: not equal / not zero */

loc_0027C04F: ;
    if (TEST_Z(esi, esi)) goto loc_0027C061; /* je: equal / zero */

loc_0027C053: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0027C061; /* je: equal / zero */

loc_0027C05D: ;
    SET_LO8(ecx, 1);
    goto loc_0027C063;

loc_0027C061: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0027C063: ;
    SET_LO16(esi, MEM16(esi + 0x60));
    SET_LO8(eax, 0); /* xor self */
    if (CMP_AE(LO16(esi), 2)) goto loc_0027C080; /* jae: above or equal (unsigned >=) */

loc_0027C06F: ;
    SET_LO8(edx, MEM8(0x849B80));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0027C07E; /* jne: not equal / not zero */

loc_0027C079: ;
    if (TEST_NZ(LO16(esi), LO16(esi))) goto loc_0027C080; /* jne: not equal / not zero */

loc_0027C07E: ;
    SET_LO8(eax, 1);

loc_0027C080: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027C0B6; /* je: equal / zero */

loc_0027C084: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C0B6; /* je: equal / zero */

loc_0027C088: ;
    eax = ZX16(LO16(esi));
    eax = MEM32(eax * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    eax = ecx;
    eax = eax >> 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM16(esp + 0x18) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C0B6; /* je: equal / zero */

loc_0027C0AF: ;
    eax = 1;
    goto loc_0027C0B8;

loc_0027C0B6: ;
    eax = 0; /* xor self */

loc_0027C0B8: ;
    esi = MEM32(0x84A5F8);
    MEM8(edi + 9) = LO8(eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027C0C6: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027C0CB: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0027C0E6; /* jne: not equal / not zero */

loc_0027C0D4: ;
    if (TEST_Z(esi, esi)) goto loc_0027C0E6; /* je: equal / zero */

loc_0027C0D8: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0027C0E6; /* je: equal / zero */

loc_0027C0E2: ;
    SET_LO8(ecx, 1);
    goto loc_0027C0E8;

loc_0027C0E6: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0027C0E8: ;
    SET_LO16(esi, MEM16(esi + 0x60));
    SET_LO8(eax, 0); /* xor self */
    if (CMP_AE(LO16(esi), 2)) goto loc_0027C105; /* jae: above or equal (unsigned >=) */

loc_0027C0F4: ;
    SET_LO8(edx, MEM8(0x849B80));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0027C103; /* jne: not equal / not zero */

loc_0027C0FE: ;
    if (TEST_NZ(LO16(esi), LO16(esi))) goto loc_0027C105; /* jne: not equal / not zero */

loc_0027C103: ;
    SET_LO8(eax, 1);

loc_0027C105: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027C138; /* je: equal / zero */

loc_0027C109: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C138; /* je: equal / zero */

loc_0027C10D: ;
    eax = ZX16(LO16(esi));
    eax = MEM32(eax * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    SET_LO8(eax, LO8(edx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1A) = ecx;
    MEM16(esp + 0x1E) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C138; /* je: equal / zero */

loc_0027C131: ;
    eax = 1;
    goto loc_0027C13A;

loc_0027C138: ;
    eax = 0; /* xor self */

loc_0027C13A: ;
    MEM8(edi + 0xA) = LO8(eax);
    esi = MEM32(ebp * 4 + 0x862CD0);
    esi = esi + 0x11C0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0027C150: ;
    PUSH32(esp, 0x21);
    eax = edi + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027C15C: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_0027C173(); return; /* tail jmp 0x0027C173 */

}

/**
 * sub_0027C1A0
 * Original: 0x0027C1A0 - 0x0027C68B (1259 bytes, 375 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C1A0(void)
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

loc_0027C1A0: ;
    esp = esp - 0x114;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C67E; /* je: equal / zero */

loc_0027C1BA: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0027C1C9: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0027C67D; /* je: equal / zero */

loc_0027C1D3: ;
    eax = MEM32(edi + 0x754);
    if (TEST_NZ(eax, eax)) goto loc_0027C67D; /* jne: not equal / not zero */

loc_0027C1E1: ;
    SET_LO8(ecx, MEM8(ebx + 0x34));
    MEM8(edi + 0x758) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x34));
    MEM8(edi + 0x18) = LO8(edx);
    eax = esp + 0x10;
    edx = esp + 0xC;
    MEM8(0x862E58) = 1;
    PUSH32(esp, 0); sub_00289250(); /* call 0x00289250 */

loc_0027C204: ;
    (void)0; /* cmp MEM16(ebx + 0x1F8), 0x1D4 - flags set for next jcc */
    MEM8(esp + 0xA) = 1;
    if (CMP_EQ(MEM16(ebx + 0x1F8), 0x1D4)) goto loc_0027C219; /* je: equal / zero */

loc_0027C214: ;
    MEM8(esp + 0xA) = 0;

loc_0027C219: ;
    SET_LO8(eax, MEM8(ebx + 0x208));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x863D04);
    ebp = 2;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(esi, ebp)) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x11) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C24F; /* je: equal / zero */

loc_0027C239: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0027C24F; /* jne: not equal / not zero */

loc_0027C23D: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296990(); /* call 0x00296990 */

loc_0027C24B: ;
    MEM8(esp + 0x11) = LO8(eax);

loc_0027C24F: ;
    SET_LO8(eax, MEM8(ebx + 0x209));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C292; /* je: equal / zero */

loc_0027C25E: ;
    eax = MEM32(0x862CB4);
    if (CMP_LE(eax & eax, 0)) goto loc_0027C292; /* jle: less or equal (signed <=) */

loc_0027C267: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0027C26E: ;
    if (TEST_Z(eax, eax)) goto loc_0027C292; /* je: equal / zero */

loc_0027C272: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_0027C279: ;
    if (CMP_NE(eax, MEM32(ebx + 0x210))) goto loc_0027C292; /* jne: not equal / not zero */

loc_0027C281: ;
    if (CMP_NE(edx, MEM32(ebx + 0x214))) goto loc_0027C292; /* jne: not equal / not zero */

loc_0027C289: ;
    MEM8(esp + 0x13) = 1;
    SET_LO8(eax, 1);
    goto loc_0027C2A0;

loc_0027C292: ;
    eax = MEM32(0x862CB0);
    ecx = MEM32(esp + 0x14);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(ecx, eax)) ? 1 : 0); /* setle */

loc_0027C2A0: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027C59F; /* je: equal / zero */

loc_0027C2AC: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027C59F; /* je: equal / zero */

loc_0027C2B8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C59F; /* je: equal / zero */

loc_0027C2C0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027C2E5; /* je: equal / zero */

loc_0027C2C8: ;
    eax = MEM32(0x862CB4);
    if (CMP_LE(eax & eax, 0)) goto loc_0027C2E5; /* jle: less or equal (signed <=) */

loc_0027C2D1: ;
    ecx = eax;
    eax = MEM32(0x862CB0);
    ecx--;
    eax++;
    MEM32(0x862CB4) = ecx;
    MEM32(0x862CB0) = eax;

loc_0027C2E5: ;
    edx = ZX8(MEM8(ebx + 0x208));
    PUSH32(esp, 0x48);
    MEM32(edi + 0x9D4) = edx;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0027C2F9: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0027C317; /* je: equal / zero */

loc_0027C300: ;
    ecx = MEM32(ebx + 0x204);
    edx = MEM32(ebx + 0x200);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0027B920(); /* call 0x0027B920 */

loc_0027C313: ;
    esi = eax;
    goto loc_0027C319;

loc_0027C317: ;
    esi = 0; /* xor self */

loc_0027C319: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_0027C321: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0027C32D: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0027C338: ;
    MEM8(edi + 0x758) = 0;
    esi = 0; /* xor self */

loc_0027C341: ;
    SET_LO8(eax, MEM8(ebx + 0x34));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0027C36E; /* je: equal / zero */

loc_0027C351: ;
    PUSH32(esp, 0); sub_00289450(); /* call 0x00289450 */

loc_0027C356: ;
    SET_LO8(edx, 1);
    ecx = esi;
    MEM8(esi + edi + 0x14) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x758));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(edi + 0x758) = LO8(eax);

loc_0027C36E: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_0027C341; /* jl: less (signed <) */

loc_0027C374: ;
    MEM8(edi + 0x1B) = 0;
    if (CMP_EQ(MEM32(0x863D04), ebp)) goto loc_0027C3F0; /* je: equal / zero */

loc_0027C380: ;
    SET_LO8(eax, MEM8(0x864EC1));
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0027C3F0; /* jle: less or equal (signed <=) */

loc_0027C38B: ;
    ebp = 0x864EC8;

loc_0027C390: ;
    if (CMP_EQ(ebp, edi)) goto loc_0027C3D9; /* je: equal / zero */

loc_0027C394: ;
    eax = ZX8(MEM8(ebp + 0x758));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0027C3A6; /* je: equal / zero */

loc_0027C3A1: ;
    ecx = 1;

loc_0027C3A6: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0027C3AB; /* je: equal / zero */

loc_0027C3AA: ;
    ecx++;

loc_0027C3AB: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0027C3D9; /* jne: not equal / not zero */

loc_0027C3AF: ;
    PUSH32(esp, 0x862C40);
    eax = esi;
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_0027C3BB: ;
    MEM8(0x862E58) = 1;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    esi--;
    ebp = ebp - 0xA50;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0027C3D7: ;
    edi = eax;

loc_0027C3D9: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esi++;
    ebp = ebp + 0xA50;
    if (CMP_L(esi, ecx)) goto loc_0027C390; /* jl: less (signed <) */

loc_0027C3EB: ;
    ebp = 2;

loc_0027C3F0: ;
    MEM32(edi + 0x754) = ebp;
    edx = MEM32(ebx + 0x200);
    MEM32(edi + 0x28) = edx;
    eax = MEM32(ebx + 0x204);
    MEM32(edi + 0x2C) = eax;
    ecx = edi + 0x38A;
    edx = edi + 0x9F8;
    eax = edi + 0x7A4;
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    ebp = ebx + 0x38;
    MEM32(esp + 0x1C) = eax;
    goto loc_0027C430;

    /* nop */

loc_0027C430: ;
    SET_LO8(eax, MEM8(ebx + 0x34));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0027C540; /* je: equal / zero */

loc_0027C444: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x10);
    ecx = ebp + 0xB;
    PUSH32(esp, ecx);
    edx = edx + 0xFFFFFFF0u;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0027C457: ;
    eax = MEM32(esp + 0x28);
    MEM8(eax) = 0;
    SET_LO8(eax, MEM8(esi + edi + 0x7BC));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027C479; /* jne: not equal / not zero */

loc_0027C46C: ;
    MEM8(esi + edi + 0x7BC) = 1;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_0027C479: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_0029A780(); /* call 0x0029A780 */

loc_0027C48A: ;
    if (TEST_S(esi, esi)) goto loc_0027C4AB; /* jl: less (signed <) */

loc_0027C48E: ;
    if (CMP_GE(esi, 2)) goto loc_0027C4AB; /* jge: greater or equal (signed >=) */

loc_0027C493: ;
    ecx = ZX8(MEM8(ebp + 8));
    eax = MEM32(esp + 0x14);
    MEM32(eax + -16) = ecx;
    edx = ZX8(MEM8(ebp + 9));
    MEM32(eax) = edx;
    ecx = ZX8(MEM8(ebp + 0xA));
    MEM32(eax + 0x10) = ecx;

loc_0027C4AB: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x20);
    edx = ebp + 0x2C;
    PUSH32(esp, edx);
    eax = eax + 0xFFFFFFC0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027C4BE: ;
    ecx = MEM32(esp + 0x24);
    MEM16(ecx) = 0;
    SET_LO8(eax, MEM8(edi + 0x7BA));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027C559; /* jne: not equal / not zero */

loc_0027C4D8: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603FB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027C4E4: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0027C4EE: ;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 0x603FA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0027C4FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x40;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0027C50D: ;
    eax = MEM32(0x863D04);
    esp = esp + 0x1C;
    if (CMP_NE(eax, 3)) goto loc_0027C537; /* jne: not equal / not zero */

loc_0027C51A: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0027C523: ;
    PUSH32(esp, eax);
    ecx = esi;
    edx = edi;
    PUSH32(esp, 0); sub_0029A7D0(); /* call 0x0029A7D0 */

loc_0027C52D: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00289090(); /* call 0x00289090 */

loc_0027C534: ;
    esp = esp + 0xC;

loc_0027C537: ;
    MEM8(edi + 0x7BA) = 1;
    goto loc_0027C555;

loc_0027C540: ;
    if (TEST_S(esi, esi)) goto loc_0027C559; /* jl: less (signed <) */

loc_0027C544: ;
    if (CMP_GE(esi, 2)) goto loc_0027C559; /* jge: greater or equal (signed >=) */

loc_0027C549: ;
    ecx = 0x587BE4;
    ebx = edi;
    PUSH32(esp, 0); sub_00299E30(); /* call 0x00299E30 */

loc_0027C555: ;
    ebx = MEM32(esp + 0x20);

loc_0027C559: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + 4;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    esi++;
    eax = eax + 0x11;
    ecx = ecx + 0x12C;
    ebp = ebp + 0x70;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(esi, 4)) goto loc_0027C430; /* jl: less (signed <) */

loc_0027C58A: ;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_0027C58F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0027C59F: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027C5AD; /* jne: not equal / not zero */

loc_0027C5A8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027C5AD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0027C5F5; /* je: equal / zero */

loc_0027C5D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027C5F5; /* jb: below (unsigned <) */

loc_0027C5DC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C5E6: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C5EE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027C616; /* jne: not equal / not zero */

loc_0027C5F5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C607: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C60F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0027C62D; /* je: equal / zero */

loc_0027C616: ;
    ecx = MEM32(ebx + 0x204);
    edx = MEM32(ebx + 0x200);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0027BA10(); /* call 0x0027BA10 */

loc_0027C629: ;
    esi = eax;
    goto loc_0027C62F;

loc_0027C62D: ;
    esi = 0; /* xor self */

loc_0027C62F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0027C63B: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027C64C; /* jne: not equal / not zero */

loc_0027C643: ;
    MEM32(esi + 0x34) = 0;
    goto loc_0027C65B;

loc_0027C64C: ;
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    eax++;
    MEM32(esi + 0x34) = eax;

loc_0027C65B: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0027C666: ;
    MEM32(edi + 0x754) = 1;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027C675: ;
    MEMF(edi + 0x750) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0027C67D: ;
    POP32(esp, edi);

loc_0027C67E: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027C690
 * Original: 0x0027C690 - 0x0027C710 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C690: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027C69E; /* jne: not equal / not zero */

loc_0027C699: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027C69E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027C6E8; /* je: equal / zero */

loc_0027C6C6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0027C6E8; /* jb: below (unsigned <) */

loc_0027C6CF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C6D9: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C6E1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027C709; /* jne: not equal / not zero */

loc_0027C6E8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C6FA: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C702: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0027C710(); return; } /* je: equal / zero */

loc_0027C709: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0027B8D0(); return; /* tail jmp 0x0027B8D0 */

}

/**
 * sub_0027C720
 * Original: 0x0027C720 - 0x0027C788 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027C720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027C734: ;
    eax = ZX8(MEM8(edi + 0x36));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027C73F: ;
    esp = esp + 8;
    ebx = 0; /* xor self */

loc_0027C744: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x36));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0027C763; /* je: equal / zero */

loc_0027C754: ;
    eax = ZX8(MEM8(ebx + edi + 0x37));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027C760: ;
    esp = esp + 4;

loc_0027C763: ;
    ebx++;
    if (CMP_L(ebx, 4)) goto loc_0027C744; /* jl: less (signed <) */

loc_0027C769: ;
    eax = MEM32(edi + 0x44);
    ebx = MEM32(edi + 0x40);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027C776: ;
    PUSH32(esp, 0x20);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027C77F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C790
 * Original: 0x0027C790 - 0x0027C7D6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027C7A1: ;
    PUSH32(esp, 4);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027C7AC: ;
    esp = esp + 8;
    ebx = 0; /* xor self */
    MEM8(edi + 0x36) = LO8(eax);
    ebp = 0; /* xor self */
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x36));
    if (TEST_Z(LO8(ecx), LO8(eax))) { sub_0027C7D6(); return; } /* je: equal / zero */

loc_0027C7C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027C7CD: ;
    esp = esp + 4;
    MEM8(edi + ebp + 0x37) = LO8(eax);
    g_seh_ebp = ebp; sub_0027C7DA(); return; /* tail jmp 0x0027C7DA */

}

/**
 * sub_0027C810
 * Original: 0x0027C810 - 0x0027C881 (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C810: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x758));
    ebp = ecx;
    MEM8(ebp + 0x36) = LO8(eax);
    SET_LO16(ecx, MEM16(edi + 0x9D8));
    MEM16(ebp + 0x34) = LO16(ecx);
    MEM8(edi + 0x758) = 0;
    esi = 0; /* xor self */
    ebx = edi + 4;
    /* nop */

loc_0027C840: ;
    SET_LO8(eax, MEM8(ebp + 0x36));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0027C871; /* je: equal / zero */

loc_0027C850: ;
    PUSH32(esp, 0); sub_002892C0(); /* call 0x002892C0 */

loc_0027C855: ;
    MEM32(ebx) = eax;
    SET_LO8(eax, MEM8(edi + 0x758));
    SET_LO8(edx, 1);
    ecx = esi;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(edi + 0x758) = LO8(eax);
    SET_LO8(eax, MEM8(ebx));
    MEM8(esi + ebp + 0x37) = LO8(eax);

loc_0027C871: ;
    esi++;
    ebx = ebx + 4;
    if (CMP_L(esi, 4)) goto loc_0027C840; /* jl: less (signed <) */

loc_0027C87A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C890
 * Original: 0x0027C890 - 0x0027CA49 (441 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C890(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027C890: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027CA42; /* jne: not equal / not zero */

loc_0027C8A0: ;
    eax = MEM32(0x863D08);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(eax, ebx)) { sub_0027CA49(); return; } /* jne: not equal / not zero */

loc_0027C8B3: ;
    eax = MEM32(0x86E99C);
    if (CMP_NE(eax, MEM32(edi + 8))) { sub_0027CA49(); return; } /* jne: not equal / not zero */

loc_0027C8C1: ;
    ecx = MEM32(edi + 0x40);
    if (CMP_NE(ecx, MEM32(0x862CA8))) { sub_0027CA49(); return; } /* jne: not equal / not zero */

loc_0027C8D0: ;
    edx = MEM32(edi + 0x44);
    if (CMP_NE(edx, MEM32(0x862CAC))) { sub_0027CA49(); return; } /* jne: not equal / not zero */

loc_0027C8DF: ;
    PUSH32(esp, esi);
    eax = 2;
    esi = 0x862C40;
    MEM8(0x862CA1) = LO8(ebx);
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_0027C8F5: ;
    SET_LO16(eax, MEM16(edi + 0x34));
    MEM16(0x86E9A0) = LO16(eax);
    MEM8(0x86E9A2) = LO8(ebx);
    SET_LO8(ecx, MEM8(edi + 0x36));
    eax = esi;
    MEM8(0x86E980) = LO8(ecx);
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_0027C915: ;
    ebx = eax;
    MEM32(ebx + 0x754) = 2;
    edx = ZX8(MEM8(edi + 0x37));
    MEM32(0x862CC0) = edx;
    eax = ZX8(MEM8(edi + 0x38));
    MEM32(0x862CC4) = eax;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x864EBB) = 0;
    if (TEST_NZ(eax, eax)) goto loc_0027C949; /* jne: not equal / not zero */

loc_0027C944: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027C949: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0027C991; /* je: equal / zero */

loc_0027C96F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0027C991; /* jb: below (unsigned <) */

loc_0027C978: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C982: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C98A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027C9B2; /* jne: not equal / not zero */

loc_0027C991: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027C9A3: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027C9AB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0027C9BB; /* je: equal / zero */

loc_0027C9B2: ;
    PUSH32(esp, 0); sub_0027BAF0(); /* call 0x0027BAF0 */

loc_0027C9B7: ;
    esi = eax;
    goto loc_0027C9BD;

loc_0027C9BB: ;
    esi = 0; /* xor self */

loc_0027C9BD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0027C9C9: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0027C9F0; /* jle: less or equal (signed <=) */

loc_0027C9D6: ;
    ecx = 0x864EC8;
    goto loc_0027C9E0;

    /* nop */

loc_0027C9E0: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0027C9F2; /* jne: not equal / not zero */

loc_0027C9E5: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_0027C9E0; /* jl: less (signed <) */

loc_0027C9F0: ;
    ecx = 0; /* xor self */

loc_0027C9F2: ;
    eax = MEM32(ecx + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0027CA00: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_0027CA05: ;
    eax = MEM32(0x84BFA4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0027CA14; /* je: equal / zero */

loc_0027CA0F: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_0027CA14: ;
    PUSH32(esp, 0x12);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0027CA1D: ;
    esp = esp + 4;
    PUSH32(esp, 0x603F8C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(0x849DCB) = 0;
    MEM32(0x849DCC) = edi;
    PUSH32(esp, 0); sub_0029A610(); /* call 0x0029A610 */

loc_0027CA3A: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0027CA42: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CA50
 * Original: 0x0027CA50 - 0x0027CB05 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CA50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027CA50: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0027CA63; /* jne: not equal / not zero */

loc_0027CA5E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027CA63: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027CAAB; /* je: equal / zero */

loc_0027CA89: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027CAAB; /* jb: below (unsigned <) */

loc_0027CA92: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CA9C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CAA4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027CACC; /* jne: not equal / not zero */

loc_0027CAAB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CABD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CAC5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0027CB05(); return; } /* je: equal / zero */

loc_0027CACC: ;
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
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x603DF8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CB10
 * Original: 0x0027CB10 - 0x0027CB42 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CB10(void)
{

loc_0027CB10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3C);
    ebx = MEM32(edi + 0x38);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027CB26: ;
    PUSH32(esp, 0x20);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027CB2F: ;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027CB39: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CB50
 * Original: 0x0027CB50 - 0x0027CB8C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CB50(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CB50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027CB61: ;
    PUSH32(esp, 0x20);
    ebx = 0; /* xor self */
    ebp = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027CB6C: ;
    ecx = 0; /* xor self */
    eax = eax | ebx;
    ecx = ecx | ebp;
    PUSH32(esp, 2);
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027CB7F: ;
    esp = esp + 0xC;
    MEM32(edi + 0x34) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CB90
 * Original: 0x0027CB90 - 0x0027CC70 (224 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027CB90: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027CC6A; /* jne: not equal / not zero */

loc_0027CB9D: ;
    if (CMP_NE(MEM32(0x863D08), 1)) goto loc_0027CC6A; /* jne: not equal / not zero */

loc_0027CBAA: ;
    eax = MEM32(0x86E99C);
    if (CMP_NE(eax, MEM32(ecx + 8))) goto loc_0027CC6A; /* jne: not equal / not zero */

loc_0027CBB8: ;
    edx = MEM32(ecx + 0x38);
    if (CMP_NE(edx, MEM32(0x862CA8))) goto loc_0027CC6A; /* jne: not equal / not zero */

loc_0027CBC7: ;
    eax = MEM32(ecx + 0x3C);
    if (CMP_NE(eax, MEM32(0x862CAC))) goto loc_0027CC6A; /* jne: not equal / not zero */

loc_0027CBD6: ;
    eax = MEM32(ecx + 0x34);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0027CBF2; /* je: equal / zero */

loc_0027CBDE: ;
    eax--;
    if ((eax == 0)) goto loc_0027CBEB; /* je: equal / zero */

loc_0027CBE1: ;
    eax--;
    if ((eax != 0)) goto loc_0027CC40; /* jne: not equal / not zero */

loc_0027CBE4: ;
    ecx = 0x603F38;
    goto loc_0027CBF7;

loc_0027CBEB: ;
    ecx = 0x603F60;
    goto loc_0027CBF7;

loc_0027CBF2: ;
    ecx = 0x6024DC;

loc_0027CBF7: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027CBFE: ;
    if (TEST_Z(eax, eax)) goto loc_0027CC40; /* je: equal / zero */

loc_0027CC02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5FAE34);
    edi = eax;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_0027CC12: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027CC1D: ;
    ebx = eax;
    eax = 0x13;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0027CC29: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x13);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027CC37: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0027CC3E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0027CC40: ;
    eax = MEM32(0x86422C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x849DBC) = 1;
    if (TEST_Z(eax, eax)) goto loc_0027CC6A; /* je: equal / zero */

loc_0027CC53: ;
    PUSH32(esp, 0x86422C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0027CC5D: ;
    esp = esp + 4;
    MEM32(0x86422C) = 0;

loc_0027CC6A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0027CD30
 * Original: 0x0027CD30 - 0x0027CD62 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CD30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CD30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027CD41: ;
    PUSH32(esp, 0x20);
    ebx = 0; /* xor self */
    ebp = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027CD4C: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    eax = eax | ebx;
    ecx = ecx | ebp;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CD70
 * Original: 0x0027CD70 - 0x0027CE78 (264 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CD70(void)
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

loc_0027CD70: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027CE71; /* je: equal / zero */

loc_0027CD80: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0027CD8F: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) { sub_0027CE78(); return; } /* je: equal / zero */

loc_0027CD99: ;
    ecx = MEM32(ebx + 0x28);
    if (CMP_NE(ecx, MEM32(ebp + 0x38))) { sub_0027CE78(); return; } /* jne: not equal / not zero */

loc_0027CDA5: ;
    edx = MEM32(ebx + 0x2C);
    if (CMP_NE(edx, MEM32(ebp + 0x3C))) { sub_0027CE78(); return; } /* jne: not equal / not zero */

loc_0027CDB1: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027CDBF; /* jne: not equal / not zero */

loc_0027CDBA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027CDBF: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027CE09; /* je: equal / zero */

loc_0027CDE7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027CE09; /* jb: below (unsigned <) */

loc_0027CDF0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CDFA: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CE02: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027CE2A; /* jne: not equal / not zero */

loc_0027CE09: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CE1B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CE23: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0027CE39; /* je: equal / zero */

loc_0027CE2A: ;
    ecx = MEM32(ebp + 0x3C);
    edx = MEM32(ebp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0027CE80(); /* call 0x0027CE80 */

loc_0027CE37: ;
    goto loc_0027CE3B;

loc_0027CE39: ;
    eax = 0; /* xor self */

loc_0027CE3B: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0027CE46: ;
    MEM32(ebx + 0x754) = 3;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027CE55: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    MEMF(ebx + 0x750) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(ebx + 0x76E) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027CE71: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027CE80
 * Original: 0x0027CE80 - 0x0027CEC2 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CE80(void)
{

loc_0027CE80: ;
    edx = MEM32(esp + 8);
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
    MEM32(eax) = 0x603D28;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027CED0
 * Original: 0x0027CED0 - 0x0027CF85 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027CED0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0027CEE3; /* jne: not equal / not zero */

loc_0027CEDE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027CEE3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0027CF2B; /* je: equal / zero */

loc_0027CF09: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0027CF2B; /* jb: below (unsigned <) */

loc_0027CF12: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CF1C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CF24: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0027CF4C; /* jne: not equal / not zero */

loc_0027CF2B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027CF3D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027CF45: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0027CF85(); return; } /* je: equal / zero */

loc_0027CF4C: ;
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
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x603D28;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CF90
 * Original: 0x0027CF90 - 0x0027CFB4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CF90(void)
{

loc_0027CF90: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x38);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027CFA3: ;
    PUSH32(esp, 0x20);
    eax = edi;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027CFAC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CFC0
 * Original: 0x0027CFC0 - 0x0027D003 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CFC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027CFC0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027CFFD; /* jne: not equal / not zero */

loc_0027CFC9: ;
    if (CMP_NE(MEM32(0x863D08), 4)) goto loc_0027CFFD; /* jne: not equal / not zero */

loc_0027CFD2: ;
    eax = MEM32(0x86E99C);
    if (CMP_NE(eax, MEM32(ecx + 8))) goto loc_0027CFFD; /* jne: not equal / not zero */

loc_0027CFDC: ;
    edx = MEM32(ecx + 0x38);
    if (CMP_NE(edx, MEM32(0x862CA8))) goto loc_0027CFFD; /* jne: not equal / not zero */

loc_0027CFE7: ;
    eax = MEM32(ecx + 0x3C);
    (void)0; /* cmp eax, MEM32(0x862CAC) - flags set for next jcc */
    eax = 1;
    if (CMP_NE(eax, MEM32(0x862CAC))) goto loc_0027D002; /* jne: not equal / not zero */

loc_0027CFF7: ;
    MEM32(0x849DBC) = eax;
    esp += 4; return; /* ret */

loc_0027CFFD: ;
    eax = 1;

loc_0027D002: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D010
 * Original: 0x0027D010 - 0x0027D016 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D010(void)
{

loc_0027D010: ;
    eax = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D020
 * Original: 0x0027D020 - 0x0027D0DE (190 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D020: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D02B: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_0027D032: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D0DE(); return; } /* je: equal / zero */

loc_0027D03A: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D032; /* jl: less (signed <) */

loc_0027D046: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(edi + 0x40));
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x60467C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D065: ;
    SET_LO8(ecx, MEM8(edi + 0x40));
    esp = esp + 0x14;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0027D0D7; /* jbe: below or equal (unsigned <=) */

loc_0027D077: ;
    esi = edi + 0x5E;
    /* nop */

loc_0027D080: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0027D0D7; /* jle: less or equal (signed <=) */

loc_0027D084: ;
    edx = ZX8(MEM8(esi + 1));
    ecx = (uint32_t)(int32_t)SMEM8(esi + -1);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -3));
    ebx = ebx + eax;
    ebp = ebp - eax;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + -4));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + -6);
    PUSH32(esp, edx);
    edx = MEM32(esi + -10);
    PUSH32(esp, eax);
    eax = MEM32(esi + -14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x604620);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D0BD: ;
    ecx = MEM32(esp + 0x48);
    edx = ZX8(MEM8(edi + 0x40));
    esp = esp + 0x30;
    ecx++;
    esi = esi + 0xA0;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0027D080; /* jl: less (signed <) */

loc_0027D0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027D100
 * Original: 0x0027D100 - 0x0027D1DB (219 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D100(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0027D100: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D108: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027D110: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D1DB(); return; } /* je: equal / zero */

loc_0027D118: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D110; /* jl: less (signed <) */

loc_0027D124: ;
    edx = 0x600E6C;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x74));
    esp = esp - 0x18;
    eax = MEM32(esi + 0x64);
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x70)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x5D));
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x60)); /* fld float */
    eax = ZX8(MEM8(esi + 0x5C));
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x48));
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x42));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3E));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, 0x6044A8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D1D1: ;
    esp = esp + 0x94;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027D1F0
 * Original: 0x0027D1F0 - 0x0027D231 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D1F0(void)
{

loc_0027D1F0: ;
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
    MEM32(eax) = 0x604198;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM16(eax + 0x44) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D240
 * Original: 0x0027D240 - 0x0027D246 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D240(void)
{

loc_0027D240: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D250
 * Original: 0x0027D250 - 0x0027D2A6 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D250(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027D250: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D258: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027D260: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D2A6(); return; } /* je: equal / zero */

loc_0027D264: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D260; /* jl: less (signed <) */

loc_0027D270: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x604458);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D29F: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027D2C0
 * Original: 0x0027D2C0 - 0x0027D2F8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D2C0(void)
{

loc_0027D2C0: ;
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
    MEM32(eax) = 0x604208;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM8(eax + 0x35) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D300
 * Original: 0x0027D300 - 0x0027D306 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D300(void)
{

loc_0027D300: ;
    eax = 0x21;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D310
 * Original: 0x0027D310 - 0x0027D3A9 (153 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D310(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0027D310: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D318: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027D320: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D3A9(); return; } /* je: equal / zero */

loc_0027D328: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D320; /* jl: less (signed <) */

loc_0027D334: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x56);
    fp_push(MEMF(esi + 0x50)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3A);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    esp = esp - 0x30;
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    MEMD(esp + 0x20) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    MEMD(esp + 0x18) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x36);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x6043A8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D3A2: ;
    esp = esp + 0x60;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027D3C0
 * Original: 0x0027D3C0 - 0x0027D3F5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D3C0(void)
{

loc_0027D3C0: ;
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
    MEM32(eax) = 0x604280;
    MEM8(eax + 0x40) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D400
 * Original: 0x0027D400 - 0x0027D406 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D400(void)
{

loc_0027D400: ;
    eax = 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D410
 * Original: 0x0027D410 - 0x0027D463 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D410(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027D410: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D418: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0027D420: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D463(); return; } /* je: equal / zero */

loc_0027D424: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D420; /* jl: less (signed <) */

loc_0027D430: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x40);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x604374);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D45C: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027D480
 * Original: 0x0027D480 - 0x0027D52B (171 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D480: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0027D48B: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_0027D492: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0027D52B(); return; } /* je: equal / zero */

loc_0027D49A: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0027D492; /* jl: less (signed <) */

loc_0027D4A6: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x3A));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x604330);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D4D4: ;
    SET_LO8(ecx, MEM8(esi + 0x3A));
    esp = esp + 0x20;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0027D524; /* jbe: below or equal (unsigned <=) */

loc_0027D4E6: ;
    edi = esi + 0x3C;
    /* nop */

loc_0027D4F0: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0027D524; /* jle: less or equal (signed <=) */

loc_0027D4F4: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebp = ebp - eax;
    PUSH32(esp, 0x60431C);
    ebx = ebx + eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0027D50D: ;
    ecx = MEM32(esp + 0x2C);
    edx = ZX8(MEM8(esi + 0x3A));
    esp = esp + 0x14;
    ecx++;
    edi = edi + 4;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0027D4F0; /* jl: less (signed <) */

loc_0027D524: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027D540
 * Original: 0x0027D540 - 0x0027D72F (495 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D540(void)
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

loc_0027D540: ;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* cmp MEM32(0x863D08), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_0027D72C; /* jne: not equal / not zero */

loc_0027D553: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0027D72C; /* je: equal / zero */

loc_0027D561: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0027D72C; /* je: equal / zero */

loc_0027D56A: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0027D72C; /* je: equal / zero */

loc_0027D573: ;
    edx = edi + 0xA38;
    eax = ebx;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_0027D580: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027D72C; /* je: equal / zero */

loc_0027D588: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edi + ebx * 4 + 0xA3C);
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0027D596: ;
    PUSH32(esp, 0); sub_00266580(); /* call 0x00266580 */

loc_0027D59B: ;
    ebp = MEM32(eax + 0x288);
    ecx = esi;
    eax = eax + 0x288;
    edx = 1;
    edx = edx << LO8(ecx);
    ebp = ebp | edx;
    MEM32(eax) = ebp;
    eax = ZX8(MEM8(edi + ebx + 0x76C));
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0027D5C3; /* jge: greater or equal (signed >=) */

loc_0027D5C1: ;
    ecx = 0; /* xor self */

loc_0027D5C3: ;
    ecx = ecx << 6;
    ecx = ecx + 0x777ED0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi * 4 + 0x800408) = ecx;
    ebp = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0027D5DB; /* jge: greater or equal (signed >=) */

loc_0027D5D9: ;
    ebp = 0; /* xor self */

loc_0027D5DB: ;
    ebp = ebp << 6;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, MEM8(ebp + 0x777EE0));
    MEM8(esi + 0x800488) = LO8(ecx);
    if (CMP_GE(eax & eax, 0)) goto loc_0027D5F0; /* jge: greater or equal (signed >=) */

loc_0027D5EE: ;
    eax = 0; /* xor self */

loc_0027D5F0: ;
    eax = eax << 6;
    edx = MEM32(eax + 0x777F04);
    MEM32(esi * 4 + 0x800448) = edx;
    eax = MEM32(edi + ebx * 4 + 4);
    MEM32(esi * 4 + 0x7761A0) = eax;
    ecx = MEM32(edi + ebx * 4 + 4);
    SET_LO8(ebx, MEM8(0x8497F7));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = esi;
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(0x8497F7) = LO8(ebx);
    PUSH32(esp, 0); sub_0032D230(); /* call 0x0032D230 */

loc_0027D628: ;
    eax = esi;
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_0027D62F: ;
    MEM32(edi + 0x75C) = 3;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027D63E: ;
    MEMF(edi + 0x760) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEA);
    if (CMP_L(esi, eax)) goto loc_0027D669; /* jl: less (signed <) */

loc_0027D64F: ;
    SET_LO8(ecx, MEM8(0x6BCFEA));
    SET_LO8(eax, MEM8(0x6BCFEB));
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x6BCFEA) = LO8(ecx);
    MEM8(0x6BCFEB) = LO8(eax);

loc_0027D669: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B22E0(); /* call 0x002B22E0 */

loc_0027D66F: ;
    edx = MEM32(0x84A5F8);
    xmm0 = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm1 = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ebx = ecx + edx;
    MEMF(ebx + 0x78) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    MEMF(ebx + 0x80) = xmm1; /* movss */
    ecx = MEM32(ebx + 0x78);
    edx = MEM32(ebx + 0x7C);
    eax = ebx + 0x84;
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 0x80);
    MEM32(eax + 4) = edx;
    esp = esp + 4;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x870ED4);
    ecx = ebx;
    MEMF(ebx + 0x3B8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_0027D6D5: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0027D6DA: ;
    PUSH32(esp, 0); sub_002662C0(); /* call 0x002662C0 */

loc_0027D6DF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027D6F7; /* jne: not equal / not zero */

loc_0027D6E3: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = 0; /* xor self */
    ecx = 0xB;
    edi = edi + 0x776280;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0027D6F7: ;
    SET_LO8(ecx, MEM8(esi * 4 + 0x7761A0));
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    xmm0 = MEMF(0x648D34); /* movss */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM32(eax + 0x776288) = edx;
    MEM8(ebx + 0x57C) = LO8(ecx);
    MEMF(esi * 4 + 0x776B60) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0027D72C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0027D730
 * Original: 0x0027D730 - 0x0027D8D0 (416 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D730: ;
    eax = MEM32(0x863D08);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 3)) goto loc_0027D74B; /* je: equal / zero */

loc_0027D742: ;
    if (CMP_NE(eax, 4)) goto loc_0027D85D; /* jne: not equal / not zero */

loc_0027D74B: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_0027D85D; /* je: equal / zero */

loc_0027D759: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0027D85D; /* je: equal / zero */

loc_0027D762: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0027D85D; /* je: equal / zero */

loc_0027D76B: ;
    esi = 0; /* xor self */
    ebx = ebp + 0xA3C;

loc_0027D773: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x758));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0027D842; /* je: equal / zero */

loc_0027D78A: ;
    if (TEST_S(esi, esi)) goto loc_0027D842; /* jl: less (signed <) */

loc_0027D792: ;
    if (CMP_GE(esi, 2)) goto loc_0027D842; /* jge: greater or equal (signed >=) */

loc_0027D79B: ;
    edi = MEM32(ebx);
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edi, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027D842; /* je: equal / zero */

loc_0027D7AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00241C00(); /* call 0x00241C00 */

loc_0027D7B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003B7300(); /* call 0x003B7300 */

loc_0027D7B8: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027D7D5; /* je: equal / zero */

loc_0027D7C4: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x9D8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00395CD0(); /* call 0x00395CD0 */

loc_0027D7D2: ;
    esp = esp + 8;

loc_0027D7D5: ;
    ecx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_0027D7F9; /* je: equal / zero */

loc_0027D7EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0027D7F6: ;
    esp = esp + 0xC;

loc_0027D7F9: ;
    edx = MEM32(0x84A1B0);
    MEM8(edx + edi) = 0;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0027D808: ;
    PUSH32(esp, 0); sub_00266580(); /* call 0x00266580 */

loc_0027D80D: ;
    edx = eax + 0x288;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(edx);
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(edx) = ecx;
    ecx = MEM32(0x7FCB48);
    ecx = ecx & eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    eax = MEM32(0x84A1AC);
    MEM32(0x7FCB48) = ecx;
    MEM32(edi + eax + 0xC) = 1;

loc_0027D842: ;
    esi++;
    ebx = ebx + 4;
    if (CMP_L(esi, 2)) goto loc_0027D773; /* jl: less (signed <) */

loc_0027D84F: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00390280(); /* call 0x00390280 */

loc_0027D856: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B7E80(); /* call 0x003B7E80 */

loc_0027D85D: ;
    eax = 0; /* xor self */
    edx = ebp + 0xA3C;

loc_0027D865: ;
    if (TEST_S(eax, eax)) goto loc_0027D899; /* jl: less (signed <) */

loc_0027D869: ;
    if (CMP_GE(eax, 8)) goto loc_0027D899; /* jge: greater or equal (signed >=) */

loc_0027D86E: ;
    edi = MEM32(edx);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(edi, ebx)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027D899; /* je: equal / zero */

loc_0027D87C: ;
    ecx = MEM32(eax + ebp + 0xA3C);
    if (TEST_S(ecx, ecx)) goto loc_0027D892; /* jl: less (signed <) */

loc_0027D887: ;
    if (CMP_GE(ecx, 0x10)) goto loc_0027D892; /* jge: greater or equal (signed >=) */

loc_0027D88C: ;
    MEM8(ecx + 0x849894) = LO8(ebx);

loc_0027D892: ;
    MEM32(eax + ebp + 0xA3C) = ebx;

loc_0027D899: ;
    eax = eax + 4;
    edx = edx + 4;
    if (CMP_L(eax, 8)) goto loc_0027D865; /* jl: less (signed <) */

loc_0027D8A4: ;
    esi = ebp + 0x38C;
    edi = 2;
    /* nop */

loc_0027D8B0: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0027D8BC; /* je: equal / zero */

loc_0027D8B6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0027D8BC: ;
    MEM32(esi) = 0;
    esi = esi + 0x12C;
    edi--;
    if ((edi != 0)) goto loc_0027D8B0; /* jne: not equal / not zero */

loc_0027D8CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D8D0
 * Original: 0x0027D8D0 - 0x0027D902 (50 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D8D0: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(eax, 1)) { sub_0027D902(); return; } /* jge: greater or equal (signed >=) */

loc_0027D8F8: ;
    MEM32(esp + 0xC) = 1;
    g_seh_ebp = ebp; sub_0027D90F(); return; /* tail jmp 0x0027D90F */

}

/**
 * sub_0027DFF0
 * Original: 0x0027DFF0 - 0x0027E056 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DFF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027DFF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(ecx), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(esi + 0x34) = LO8(ecx);
    edx = MEM32(0x863D08);
    MEM32(esi + 0x38) = edx;
    SET_LO8(ecx, MEM8(0x86E980));
    MEM8(esi + 0x3C) = LO8(ecx);
    SET_LO8(edx, MEM8(0x86E981));
    MEM8(esi + 0x3D) = LO8(edx);
    ecx = 0; /* xor self */
    /* nop */

loc_0027E020: ;
    SET_LO8(ebx, MEM8(0x86E983));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(ebx))) goto loc_0027E041; /* jne: not equal / not zero */

loc_0027E031: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(ecx + 0x864EBF) = LO8(eax);
    MEM8(0x86E983) = MEM8(0x86E983) | LO8(edx);

loc_0027E041: ;
    SET_LO8(edx, MEM8(ecx + 0x864EBF));
    MEM8(esi + ecx + 0x3E) = LO8(edx);
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_0027E020; /* jl: less (signed <) */

loc_0027E051: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E060
 * Original: 0x0027E060 - 0x0027E0E0 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E060: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0027E06E; /* jne: not equal / not zero */

loc_0027E069: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0027E06E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0027E0B8; /* je: equal / zero */

loc_0027E096: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0027E0B8; /* jb: below (unsigned <) */

loc_0027E09F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027E0A9: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027E0B1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0027E0D9; /* jne: not equal / not zero */

loc_0027E0B8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0027E0CA: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0027E0D2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0027E0E0(); return; } /* je: equal / zero */

loc_0027E0D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002336C0(); return; /* tail jmp 0x002336C0 */

}

/**
 * sub_0027E0F0
 * Original: 0x0027E0F0 - 0x0027E16B (123 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027E0F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027E104: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027E11B; /* je: equal / zero */

loc_0027E10E: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027E118: ;
    esp = esp + 4;

loc_0027E11B: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3C);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027E126: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3D);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027E131: ;
    esp = esp + 8;
    ebx = 0; /* xor self */

loc_0027E136: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x3C);
    if (TEST_Z(ecx, eax)) goto loc_0027E15F; /* je: equal / zero */

loc_0027E147: ;
    edx = ZX8(MEM8(ebx + edi + 0x3E));
    edx = edx << 6;
    eax = MEM32(edx + 0x777EFC);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027E15C: ;
    esp = esp + 4;

loc_0027E15F: ;
    ebx++;
    if (CMP_L(ebx, 2)) goto loc_0027E136; /* jl: less (signed <) */

loc_0027E165: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E170
 * Original: 0x0027E170 - 0x0027E1F5 (133 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebp = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027E181: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x34) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027E198; /* je: equal / zero */

loc_0027E18B: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027E192: ;
    esp = esp + 4;
    MEM32(ebp + 0x38) = eax;

loc_0027E198: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027E19F: ;
    PUSH32(esp, 4);
    MEM8(ebp + 0x3C) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027E1A9: ;
    esp = esp + 8;
    MEM8(ebp + 0x3D) = LO8(eax);
    ebx = 0; /* xor self */
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x3C);
    if (TEST_Z(ecx, eax)) { sub_0027E1F5(); return; } /* je: equal / zero */

loc_0027E1C2: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027E1C9: ;
    edi = MEM32(0x777EC4);
    esp = esp + 4;
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0027E1EC; /* jle: less or equal (signed <=) */

loc_0027E1D8: ;
    edx = 0x777EFC;
    /* nop */

loc_0027E1E0: ;
    if (CMP_EQ(MEM32(edx), eax)) goto loc_0027E1EF; /* je: equal / zero */

loc_0027E1E4: ;
    ecx++;
    edx = edx + 0x40;
    if (CMP_L(ecx, edi)) goto loc_0027E1E0; /* jl: less (signed <) */

loc_0027E1EC: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0027E1EF: ;
    MEM8(ebx + ebp + 0x3E) = LO8(ecx);
    g_seh_ebp = ebp; sub_0027E1FA(); return; /* tail jmp 0x0027E1FA */

}

/**
 * sub_0027E210
 * Original: 0x0027E210 - 0x0027E294 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E210(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0027E210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0027E222: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0027E28C; /* je: equal / zero */

loc_0027E228: ;
    SET_LO8(ecx, MEM8(edi + 0x3E));
    MEM8(esi + 0x76C) = LO8(ecx);
    MEM8(esi + 0x75B) = MEM8(esi + 0x75B) | 1;
    SET_LO8(edx, MEM8(edi + 0x3F));
    MEM8(esi + 0x76D) = LO8(edx);
    MEM8(esi + 0x75B) = MEM8(esi + 0x75B) | 2;
    SET_LO8(eax, MEM8(edi + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027E263; /* je: equal / zero */

loc_0027E24F: ;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x75C) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0027E25D: ;
    MEMF(esi + 0x760) = (float)fp_top(); fp_popp(); /* fstp */

loc_0027E263: ;
    SET_LO8(ecx, MEM8(edi + 0x3C));
    MEM8(esi + 0x758) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x3D));
    MEM8(esi + 0x759) = LO8(edx);
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027E28C; /* je: equal / zero */

loc_0027E27E: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027E28C; /* je: equal / zero */

loc_0027E285: ;
    MEM8(0x862E58) = 1;

loc_0027E28C: ;
    POP32(esp, edi);
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
 * sub_0027E2A0
 * Original: 0x0027E2A0 - 0x0027E2CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E2A0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x86E980));
    PUSH32(esp, esi);
    MEM8(eax + 0x40) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x862C5C));
    esi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0027E2CA(); return; } /* je: equal / zero */

loc_0027E2B9: ;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    MEM8(eax + 0x38) = 1;
    MEM32(eax + 0x3C) = edx;
    g_seh_ebp = ebp; sub_0027E2CE(); return; /* tail jmp 0x0027E2CE */

}

/**
 * sub_0027EC80
 * Original: 0x0027EC80 - 0x0027EC9E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EC80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0027EC80: ;
    eax = MEM32(ecx + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    if ((eax == 0)) { sub_0027EC9E(); return; } /* je: equal / zero */

loc_0027EC9A: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_0027ECB0
 * Original: 0x0027ECB0 - 0x0027F12B (1147 bytes, 362 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ECB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027ECB0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x40));
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ECC9: ;
    esi = MEM32(edi + 0x34);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x40));
    esp = esp + 4;
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0027F122; /* je: equal / zero */

loc_0027ECE3: ;
    edx = esi + esi * 4;
    edx = edx << 5;
    eax = ZX8(MEM8(edx + edi + 0x5B));
    PUSH32(esp, ebp);
    ebp = edx + edi + 0x44;
    PUSH32(esp, 5);
    eax = eax >> 3;
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ECFF: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    esp = esp + 4;
    if (CMP_BE(LO8(eax), 0x1F)) goto loc_0027ED10; /* jbe: below or equal (unsigned <=) */

loc_0027ED09: ;
    eax = 0x1F;
    goto loc_0027ED13;

loc_0027ED10: ;
    eax = ZX8(LO8(eax));

loc_0027ED13: ;
    MEM8(ebp + 0x16) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, 5);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED22: ;
    eax = ZX8(MEM8(ebp + 0x66));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED2D: ;
    SET_LO8(eax, MEM8(ebp + 0x66));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027ED48; /* je: equal / zero */

loc_0027ED37: ;
    eax = ZX8(MEM8(ebp + 0x18));
    PUSH32(esp, 5);
    eax = eax >> 3;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED45: ;
    esp = esp + 4;

loc_0027ED48: ;
    eax = ZX8(MEM8(ebp + 0x3D));
    PUSH32(esp, 5);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED55: ;
    eax = ZX8(MEM8(ebp + 0x3F));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED60: ;
    eax = ZX8(MEM8(ebp + 0x1B));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED6B: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED75: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED7F: ;
    eax = ZX8(MEM8(ebp + 0x50));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED8A: ;
    eax = ZX8(MEM8(ebp + 0x42));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027ED95: ;
    eax = ZX8(MEM8(ebp + 0x51));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDA0: ;
    eax = ZX8(MEM8(ebp + 0x43));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDAB: ;
    eax = ZX8(MEM8(ebp + 0x54));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDB6: ;
    SET_LO8(eax, MEM8(ebp + 0x1B));
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027EDE6; /* je: equal / zero */

loc_0027EDC0: ;
    eax = ZX16(MEM16(ebp + 0x4C));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDCB: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDD6: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4F);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDE1: ;
    esp = esp + 0xC;
    goto loc_0027EE24;

loc_0027EDE6: ;
    eax = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EDF0: ;
    SET_LO8(edx, MEM8(ebp + 4));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE03: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE0D: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE17: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE21: ;
    esp = esp + 0x14;

loc_0027EE24: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0027EE3B; /* je: equal / zero */

loc_0027EE2B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x3C);
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE38: ;
    esp = esp + 4;

loc_0027EE3B: ;
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EE49; /* jne: not equal / not zero */

loc_0027EE42: ;
    SET_LO8(eax, MEM8(ebp + 0x43));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027EE60; /* je: equal / zero */

loc_0027EE49: ;
    SET_LO16(eax, MEM16(ebp + 0x46));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) >> 9));
    eax = SX16(LO16(eax));
    PUSH32(esp, 6);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE5D: ;
    esp = esp + 4;

loc_0027EE60: ;
    SET_LO16(ecx, MEM16(ebp + 0x44));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) >> 9));
    eax = SX16(LO16(ecx));
    PUSH32(esp, 6);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE74: ;
    eax = MEM32(ebp + 0x68);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE7E: ;
    eax = MEM32(ebp + 0x6C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE88: ;
    eax = ZX8(MEM8(ebp + 0x9C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EE96: ;
    SET_LO8(eax, MEM8(ebp + 0x65));
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEA0: ;
    SET_LO8(eax, MEM8(ebp + 0x91));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEAA: ;
    SET_LO8(eax, MEM8(ebp + 0x52));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEB1: ;
    SET_LO8(eax, MEM8(ebp + 0x55));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEB8: ;
    SET_LO8(eax, MEM8(ebp + 0x41));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEBF: ;
    SET_LO8(eax, MEM8(ebp + 0x3D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* je: equal / zero */

loc_0027EEC6: ;
    eax = MEM32(ebp + 0x70);
    if (TEST_NZ(eax, eax)) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EECD: ;
    SET_LO8(eax, MEM8(ebp + 0x80));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EED7: ;
    SET_LO8(eax, MEM8(ebp + 0x81));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027EEF0; /* jne: not equal / not zero */

loc_0027EEE1: ;
    eax = MEM32(ebp + 0x84);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x3C) = 0;
    if (TEST_Z(eax, eax)) goto loc_0027EEF5; /* je: equal / zero */

loc_0027EEF0: ;
    MEM8(esp + 0x3C) = 1;

loc_0027EEF5: ;
    SET_LO8(edx, MEM8(esp + 0x3C));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF09: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F121; /* je: equal / zero */

loc_0027EF18: ;
    eax = ZX8(MEM8(ebp + 0x65));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF23: ;
    eax = ZX8(MEM8(ebp + 0x91));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF31: ;
    SET_LO8(eax, MEM8(ebp + 0x91));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027EF69; /* je: equal / zero */

loc_0027EF3E: ;
    eax = ZX8(MEM8(ebp + 0x92));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF4C: ;
    eax = MEM32(ebp + 0x94);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF59: ;
    eax = MEM32(ebp + 0x98);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF66: ;
    esp = esp + 0xC;

loc_0027EF69: ;
    eax = ZX8(MEM8(ebp + 0x52));
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF76: ;
    SET_LO8(eax, MEM8(ebp + 0x52));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027EFD7; /* je: equal / zero */

loc_0027EF80: ;
    eax = (int32_t)MEMF(ebp + 0x24); /* cvttss2si */
    edx = (int32_t)MEMF(ebp + 0x2C); /* cvttss2si */
    edi = (int32_t)MEMF(ebp + 0x28); /* cvttss2si */
    PUSH32(esp, 0xE);
    eax = (uint32_t)((int32_t)eax >> 2);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EF9D: ;
    eax = edi;
    PUSH32(esp, 0xE);
    eax = (uint32_t)((int32_t)eax >> 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EFA9: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0xE);
    eax = (uint32_t)((int32_t)eax >> 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EFB7: ;
    edi = 0xA;
    esp = esp + 0xC;
    ecx = edi;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00269E00(); /* call 0x00269E00 */

loc_0027EFCA: ;
    ecx = esi;
    PUSH32(esp, ecx);
    eax = ebp + 0x30;
    ecx = ebx;
    PUSH32(esp, 0); sub_0026A2A0(); /* call 0x0026A2A0 */

loc_0027EFD7: ;
    eax = ZX8(MEM8(ebp + 0x55));
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EFE4: ;
    SET_LO8(eax, MEM8(ebp + 0x55));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F011; /* je: equal / zero */

loc_0027EFEE: ;
    SET_LO8(edx, MEM8(ebp + 0x19));
    SET_LO8(edx, (uint32_t)((int32_t)LO8(edx) >> 2));
    eax = SX8(LO8(edx));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027EFFE: ;
    SET_LO8(eax, MEM8(ebp + 0x1A));
    SET_LO8(eax, (uint32_t)((int32_t)LO8(eax) >> 2));
    eax = SX8(LO8(eax));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F00E: ;
    esp = esp + 8;

loc_0027F011: ;
    eax = ZX8(MEM8(ebp + 0x41));
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F01E: ;
    SET_LO8(eax, MEM8(ebp + 0x41));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F036; /* je: equal / zero */

loc_0027F028: ;
    eax = ZX8(MEM8(ebp + 0x40));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F033: ;
    esp = esp + 4;

loc_0027F036: ;
    SET_LO8(eax, MEM8(ebp + 0x3D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027F062; /* jne: not equal / not zero */

loc_0027F03D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    PUSH32(esp, 0x10);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F04A: ;
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F054: ;
    eax = ZX8(MEM8(ebp + 0x64));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F05F: ;
    esp = esp + 0xC;

loc_0027F062: ;
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F06E: ;
    eax = MEM32(ebp + 0x70);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0027F0A8; /* je: equal / zero */

loc_0027F078: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F082: ;
    eax = MEM32(ebp + 0x74);
    esp = esp + 4;
    if (CMP_NE(eax, 5)) goto loc_0027F094; /* jne: not equal / not zero */

loc_0027F08D: ;
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, 0x20);
    goto loc_0027F09E;

loc_0027F094: ;
    if (CMP_NE(eax, 6)) goto loc_0027F0A8; /* jne: not equal / not zero */

loc_0027F099: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, 2);

loc_0027F09E: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F0A5: ;
    esp = esp + 4;

loc_0027F0A8: ;
    eax = ZX8(MEM8(ebp + 0x80));
    PUSH32(esp, 2);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F0B8: ;
    eax = ZX8(MEM8(ebp + 0x81));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F0C6: ;
    edi = MEM32(ebp + 0x84);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(esp + 0x44) = LO8(eax);
    PUSH32(esp, 1);
    eax = ecx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F0E5: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F121; /* je: equal / zero */

loc_0027F0F0: ;
    eax = MEM32(ebp + 0x84);
    PUSH32(esp, 2);
    eax--;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F0FE: ;
    eax = MEM32(ebp + 0x84);
    esp = esp + 4;
    eax--;
    if ((eax == 0)) goto loc_0027F10F; /* je: equal / zero */

loc_0027F10A: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0027F121; /* jne: not equal / not zero */

loc_0027F10F: ;
    eax = MEM32(ebp + 0x8C);
    PUSH32(esp, 2);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0027F11E: ;
    esp = esp + 4;

loc_0027F121: ;
    POP32(esp, ebp);

loc_0027F122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F130
 * Original: 0x0027F130 - 0x0027F629 (1273 bytes, 354 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F130: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, 1);
    ebp = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F143: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(ebp + 0x40) = LO8(eax);
    MEM8(ebp + 0x38) = LO8(ebx);
    MEM32(ebp + 0x34) = ebx;
    if (TEST_Z(LO8(eax), 1)) goto loc_0027F620; /* je: equal / zero */

loc_0027F159: ;
    PUSH32(esp, 5);
    MEM8(ebp + 0x5D) = LO8(ebx);
    MEM8(ebp + 0x5E) = LO8(ebx);
    MEM16(ebp + 0x58) = 0xCCCC;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F16C: ;
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) + 4);
    PUSH32(esp, 5);
    MEM8(ebp + 0x5B) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F17B: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x5A) = LO8(eax);
    MEM8(ebp + 0xAB) = LO8(ebx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F18B: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + 0xAA) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F1AF; /* je: equal / zero */

loc_0027F19D: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1A4: ;
    SET_LO8(eax, LO8(eax) << 3);
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) + 4);
    MEM8(ebp + 0x5C) = LO8(eax);

loc_0027F1AF: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1B6: ;
    PUSH32(esp, 4);
    MEM8(ebp + 0x81) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1C3: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x83) = LO8(eax);
    MEM8(ebp + 0x82) = LO8(ebx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1D6: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), 1)) goto loc_0027F1E0; /* je: equal / zero */

loc_0027F1DD: ;
    eax = eax | 0xFFFFFFFEu;

loc_0027F1E0: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, 8);
    MEM8(ebp + 0x5F) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1EF: ;
    PUSH32(esp, 1);
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F1F9: ;
    PUSH32(esp, 1);
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F203: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x94) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F210: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x86) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F21D: ;
    PUSH32(esp, 2);
    MEM8(ebp + 0x95) = LO8(eax);
    MEM8(ebp + 0x97) = LO8(ebx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F230: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x87) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F23D: ;
    MEM8(ebp + 0x98) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x5F));
    esp = esp + 0x1C;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F27A; /* je: equal / zero */

loc_0027F24D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F254: ;
    PUSH32(esp, 3);
    MEM16(ebp + 0x90) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F262: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0x92) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F26F: ;
    esp = esp + 0xC;
    MEM8(ebp + 0x93) = LO8(eax);
    goto loc_0027F2E8;

loc_0027F27A: ;
    PUSH32(esp, 1);
    MEM16(ebp + 0x90) = LO16(ebx);
    MEM8(ebp + 0x92) = LO8(ebx);
    MEM8(ebp + 0x93) = LO8(ebx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F294: ;
    PUSH32(esp, 1);
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F29E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x10);
    MEM8(ebp + 0x48) = LO8(ecx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F2AD: ;
    esp = esp + 0xC;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027F2B9; /* jns: not sign (positive) */

loc_0027F2B4: ;
    eax = eax | 0xFFFF0000u;

loc_0027F2B9: ;
    PUSH32(esp, 0x10);
    MEM32(ebp + 0x4C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F2C3: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027F2CF; /* jns: not sign (positive) */

loc_0027F2CA: ;
    eax = eax | 0xFFFF0000u;

loc_0027F2CF: ;
    PUSH32(esp, 0x10);
    MEM32(ebp + 0x50) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F2D9: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027F2E5; /* jns: not sign (positive) */

loc_0027F2E0: ;
    eax = eax | 0xFFFF0000u;

loc_0027F2E5: ;
    MEM32(ebp + 0x54) = eax;

loc_0027F2E8: ;
    if (CMP_EQ(MEM32(ebp + 0x64), ebx)) goto loc_0027F2FD; /* je: equal / zero */

loc_0027F2ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F2F4: ;
    esp = esp + 4;
    MEM8(ebp + 0x80) = LO8(eax);

loc_0027F2FD: ;
    if (CMP_NE(MEM8(ebp + 0x86), LO8(ebx))) goto loc_0027F30D; /* jne: not equal / not zero */

loc_0027F305: ;
    if (CMP_EQ(MEM8(ebp + 0x87), LO8(ebx))) goto loc_0027F32D; /* je: equal / zero */

loc_0027F30D: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F314: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0027F31E; /* je: equal / zero */

loc_0027F31B: ;
    eax = eax | 0xFFFFFFC0u;

loc_0027F31E: ;
    eax = eax << 9;
    eax = eax + 0x100;
    MEM16(ebp + 0x8A) = LO16(eax);

loc_0027F32D: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F334: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0027F33E; /* je: equal / zero */

loc_0027F33B: ;
    eax = eax | 0xFFFFFFC0u;

loc_0027F33E: ;
    eax = eax << 9;
    eax = eax + 0x100;
    PUSH32(esp, 3);
    MEM16(ebp + 0x88) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F354: ;
    PUSH32(esp, 2);
    MEM32(ebp + 0xAC) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F361: ;
    PUSH32(esp, 1);
    MEM32(ebp + 0xB0) = eax;
    MEM8(ebp + 0x9A) = LO8(ebx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F374: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(ebp + 0xE0) = LO8(edx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F386: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0027F5DE; /* je: equal / zero */

loc_0027F391: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F398: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(ebp + 0xA9) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F3AA: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + 0xD5) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F3EB; /* je: equal / zero */

loc_0027F3BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F3C3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 3);
    MEM8(ebp + 0xD6) = LO8(ecx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F3D5: ;
    PUSH32(esp, 5);
    MEM32(ebp + 0xD8) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F3E2: ;
    esp = esp + 0xC;
    MEM32(ebp + 0xDC) = eax;

loc_0027F3EB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F3F2: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + 0x96) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F48A; /* je: equal / zero */

loc_0027F408: ;
    PUSH32(esp, edi);
    ebx = 2;
    eax = 0x10;
    PUSH32(esp, 0); sub_002650B0(); /* call 0x002650B0 */

loc_0027F418: ;
    edi = eax;
    eax = 0x10;
    PUSH32(esp, 0); sub_002650B0(); /* call 0x002650B0 */

loc_0027F424: ;
    MEM32(esp + 0x10) = eax;
    eax = 0x10;
    PUSH32(esp, 0); sub_002650B0(); /* call 0x002650B0 */

loc_0027F432: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(ebp + 0x68) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    edi = 0xA;
    MEMF(ebp + 0x6C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = edi;
    esi = esp + 0x20;
    MEMF(ebp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269E00(); /* call 0x00269E00 */

loc_0027F45F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 0); sub_0026A380(); /* call 0x0026A380 */

loc_0027F470: ;
    edx = MEM32(eax);
    esi = MEM32(esp + 0x4C);
    ecx = ebp + 0x74;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ebx = 0; /* xor self */
    POP32(esp, edi);

loc_0027F48A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F491: ;
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + 0x99) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F4CC; /* je: equal / zero */

loc_0027F49E: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F4A5: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0027F4AF; /* je: equal / zero */

loc_0027F4AC: ;
    eax = eax | 0xFFFFFFC0u;

loc_0027F4AF: ;
    SET_LO8(eax, LO8(eax) << 2);
    PUSH32(esp, 6);
    MEM8(ebp + 0x5D) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F4BC: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0027F4C6; /* je: equal / zero */

loc_0027F4C3: ;
    eax = eax | 0xFFFFFFC0u;

loc_0027F4C6: ;
    SET_LO8(eax, LO8(eax) << 2);
    MEM8(ebp + 0x5E) = LO8(eax);

loc_0027F4CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F4D3: ;
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + 0x85) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027F4F0; /* je: equal / zero */

loc_0027F4E0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F4E7: ;
    esp = esp + 4;
    MEM8(ebp + 0x84) = LO8(eax);

loc_0027F4F0: ;
    if (CMP_NE(MEM8(ebp + 0x81), LO8(ebx))) goto loc_0027F52F; /* jne: not equal / not zero */

loc_0027F4F8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F4FF: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0027F50B; /* jns: not sign (positive) */

loc_0027F506: ;
    eax = eax | 0xFFFF0000u;

loc_0027F50B: ;
    PUSH32(esp, 3);
    MEM16(ebp + 0xA0) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F519: ;
    PUSH32(esp, 8);
    MEM32(ebp + 0xA4) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F526: ;
    esp = esp + 8;
    MEM8(ebp + 0xA8) = LO8(eax);

loc_0027F52F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F536: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0xB4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0027F57C; /* je: equal / zero */

loc_0027F543: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F54A: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(ebp + 0xB8) = eax;
    if (CMP_NE(eax, 5)) goto loc_0027F567; /* jne: not equal / not zero */

loc_0027F558: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F55F: ;
    MEM32(ebp + 0xBC) = eax;
    goto loc_0027F579;

loc_0027F567: ;
    if (CMP_NE(eax, 6)) goto loc_0027F57C; /* jne: not equal / not zero */

loc_0027F56C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F573: ;
    MEM32(ebp + 0xC0) = eax;

loc_0027F579: ;
    esp = esp + 4;

loc_0027F57C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F583: ;
    PUSH32(esp, 1);
    MEM8(ebp + 0xC4) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F590: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(ebp + 0xC5) = LO8(ecx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F5A2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0027F60E; /* je: equal / zero */

loc_0027F5A9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F5B0: ;
    esp = esp + 4;
    eax++;
    MEM32(ebp + 0xC8) = eax;
    eax--;
    if ((eax == 0)) goto loc_0027F5C2; /* je: equal / zero */

loc_0027F5BD: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0027F614; /* jne: not equal / not zero */

loc_0027F5C2: ;
    PUSH32(esp, 2);
    MEM32(ebp + 0xCC) = 1;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0027F5D3: ;
    esp = esp + 4;
    MEM32(ebp + 0xD0) = eax;
    goto loc_0027F614;

loc_0027F5DE: ;
    MEM8(ebp + 0xA9) = LO8(ebx);
    MEM8(ebp + 0xD5) = LO8(ebx);
    MEM8(ebp + 0x96) = LO8(ebx);
    MEM8(ebp + 0x99) = LO8(ebx);
    MEM8(ebp + 0x85) = LO8(ebx);
    MEM32(ebp + 0xB4) = ebx;
    MEM8(ebp + 0xC4) = LO8(ebx);
    MEM8(ebp + 0xC5) = LO8(ebx);

loc_0027F60E: ;
    MEM32(ebp + 0xC8) = ebx;

loc_0027F614: ;
    SET_LO8(edx, MEM8(ebp + 0x96));
    MEM8(ebp + 0xE1) = LO8(edx);

loc_0027F620: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F630
 * Original: 0x0027F630 - 0x0028035B (3371 bytes, 852 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F630(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F630: ;
    esp = esp - 0x40;
    eax = MEM32(0x863D08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 3;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edi = ecx;
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(eax, esi)) goto loc_00280350; /* jne: not equal / not zero */

loc_0027F64D: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0027F65C: ;
    ebp = eax;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x24) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0028034F; /* je: equal / zero */

loc_0027F66A: ;
    if (CMP_NE(MEM8(0x863AF8), 1)) goto loc_0027F710; /* jne: not equal / not zero */

loc_0027F677: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F6A0; /* je: equal / zero */

loc_0027F690: ;
    xmm0 = MEMF(0x64A70C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0027F6A0: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0027F6A9: ;
    PUSH32(esp, eax);
    ecx = ebp;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    ecx = ecx + 0x64;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0027F6D8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027F704; /* je: equal / zero */

loc_0027F6F4: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0027F704: ;
    if (CMP_NE(MEM32(0x863D08), esi)) goto loc_0028033B; /* jne: not equal / not zero */

loc_0027F710: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x47)) goto loc_0028033B; /* je: equal / zero */

loc_0027F71E: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_0028033B; /* je: equal / zero */

loc_0027F727: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0028033B; /* je: equal / zero */

loc_0027F730: ;
    if (CMP_NE(eax, MEM32(0x7FA1F4))) goto loc_0028033B; /* jne: not equal / not zero */

loc_0027F73C: ;
    if (CMP_NE(MEM32(ebp + 0x75C), esi)) goto loc_0028034F; /* jne: not equal / not zero */

loc_0027F748: ;
    esi = MEM32(edi + 0x34);
    SET_LO8(eax, MEM8(edi + 0x40));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    MEM8(esp + 0xF) = 0;
    MEM32(esp + 0x30) = esi;
    MEM32(0x849E84) = 0;
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_002802F3; /* je: equal / zero */

loc_0027F772: ;
    edx = MEM32(esp + 0x28);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    edi = eax + ebp + 0x2A0;
    ecx = esi + esi * 4;
    ecx = ecx << 5;
    PUSH32(esp, ebx);
    ebx = ecx + edx + 0x44;
    edx = ebp + 0xA38;
    eax = esi;
    MEM32(esp + 0x24) = edi;
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_0027F7BB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027F820; /* jne: not equal / not zero */

loc_0027F7BF: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0027F7C8: ;
    MEM32(0x849E84) = 1;
    ecx = 0; /* xor self */

loc_0027F7D4: ;
    if (CMP_EQ(MEM8(ecx + 0x849894), 0xFF)) goto loc_0027F7E5; /* je: equal / zero */

loc_0027F7DD: ;
    ecx++;
    if (CMP_L(ecx, 0x10)) goto loc_0027F7D4; /* jl: less (signed <) */

loc_0027F7E3: ;
    goto loc_0027F801;

loc_0027F7E5: ;
    edx = MEM32(esp + 0x14);
    eax = esi;
    MEM8(ecx + 0x7761F4) = 0;
    PUSH32(esp, 0); sub_00299350(); /* call 0x00299350 */

loc_0027F7F7: ;
    MEM32(0x849E84) = 2;

loc_0027F801: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0027D540(); /* call 0x0027D540 */

loc_0027F816: ;
    esp = esp + 0xC;
    MEM8(esp + 0x13) = 1;
    goto loc_0027F874;

loc_0027F820: ;
    eax = MEM32(ebp + esi * 4 + 0xA3C);
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    eax = MEM32(eax + 0x64);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(0x849E84) = 3;
    if (CMP_EQ(eax, 1)) goto loc_0027F877; /* je: equal / zero */

loc_0027F847: ;
    if (CMP_EQ(eax, 5)) goto loc_0027F877; /* je: equal / zero */

loc_0027F84C: ;
    if (CMP_EQ(eax, 0x2E)) goto loc_0027F877; /* je: equal / zero */

loc_0027F851: ;
    if (CMP_EQ(eax, 0x42)) goto loc_0027F877; /* je: equal / zero */

loc_0027F856: ;
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0027F85F: ;
    edx = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0); sub_00299300(); /* call 0x00299300 */

loc_0027F86A: ;
    MEM32(0x849E84) = 4;

loc_0027F874: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0027F877: ;
    edx = MEM32(esp + 0x14);
    eax = esi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_0027F882: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002802A9; /* je: equal / zero */

loc_0027F88A: ;
    eax = esi;
    ecx = edx;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_0027F893: ;
    ebp = eax;
    SET_LO8(eax, MEM8(edi + 0x6C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027F8A0; /* jne: not equal / not zero */

loc_0027F89C: ;
    MEM8(edi + 0x6C) = 1;

loc_0027F8A0: ;
    eax = ZX8(MEM8(edi + 0x6C));
    MEMF(edi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(edi + 0x68) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x41));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027F8F4; /* jne: not equal / not zero */

loc_0027F8C5: ;
    if (CMP_EQ(MEM32(edi + 0x120), 0xFFFFFFFFu)) goto loc_0027F8F4; /* je: equal / zero */

loc_0027F8CE: ;
    ecx = edi + 0xF0;
    PUSH32(esp, 0); sub_00285230(); /* call 0x00285230 */

loc_0027F8D9: ;
    fp_push(MEMF(0x648D10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0027F8F4; /* jbe: below or equal (unsigned <=) */

loc_0027F8E7: ;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0); sub_002677A0(); /* call 0x002677A0 */

loc_0027F8F4: ;
    SET_LO8(eax, MEM8(ebx + 0x56));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027FC03; /* je: equal / zero */

loc_0027F8FF: ;
    PUSH32(esp, 0xFF);
    ebx = ebp;
    PUSH32(esp, 0); sub_000B2CE0(); /* call 0x000B2CE0 */

loc_0027F90B: ;
    eax = MEM32(ebp + 0x568);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0027FBFF; /* je: equal / zero */

loc_0027F91C: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_0027FBFF; /* jge: greater or equal (signed >=) */

loc_0027F933: ;
    SET_LO8(edx, MEM8(eax + 0x2BC));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0027F951; /* je: equal / zero */

loc_0027F93F: ;
    MEM8(eax + 0x2BC) = LO8(ecx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ecx;

loc_0027F951: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ecx)) goto loc_0027FBFF; /* jne: not equal / not zero */

loc_0027F963: ;
    MEM32(eax + 0x208) = 8;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_0027F97A: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0027F99B: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    esi = 0x170;
    MEM8(0x7FCB46) = 3;
    if (CMP_NE(eax, 0xE)) goto loc_0027F9C4; /* jne: not equal / not zero */

loc_0027F9B6: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_0027F9C4; /* je: equal / zero */

loc_0027F9BE: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_0027F9C4: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_0027F9DD; /* je: equal / zero */

loc_0027F9D2: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_0027F9DD; /* je: equal / zero */

loc_0027F9DA: ;
    esi = esi | 0xFFFFFFFFu;

loc_0027F9DD: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0027FA05; /* je: equal / zero */

loc_0027F9E5: ;
    if (CMP_EQ(eax, ebx)) goto loc_0027FA05; /* je: equal / zero */

loc_0027F9E9: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_0027FA05; /* je: equal / zero */

loc_0027F9F3: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_0027FA05; /* jne: not equal / not zero */

loc_0027F9FB: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_0027FA03: ;
    ebx = 0; /* xor self */

loc_0027FA05: ;
    eax = eax | 0xFFFFFFFFu;
    if (CMP_EQ(esi, eax)) goto loc_0027FA5E; /* je: equal / zero */

loc_0027FA0C: ;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    MEM32(edx + 0x478) = eax;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    edx = esi;
    MEM32(ecx + 0x3DC) = eax;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0027FA45: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0027FA5E; /* je: equal / zero */

loc_0027FA51: ;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x48D) = 1;

loc_0027FA5E: ;
    edx = MEM32(ebp + 0x200);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEM8(ebp + 0x234) = LO8(eax);
    MEM8(ebp + 0x20C) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    eax = MEM32(ebp + 0x568);
    edx = edx | 0x200;
    MEM32(ebp + 0x200) = edx;
    MEM16(ebp + 0x3AE) = LO16(ebx);
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEM16(ebp + 0x1EC) = LO16(ebx);
    MEM16(ebp + 0x1EE) = LO16(ebx);
    MEM16(eax + 0x5E) = LO16(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x2D2) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x70) = LO8(ebx);
    eax = MEM32(ebp + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_0027FAEC; /* je: equal / zero */

loc_0027FADB: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0027FAEC; /* je: equal / zero */

loc_0027FAE3: ;
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8CF) = LO8(ebx);

loc_0027FAEC: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_0027FAFB; /* je: equal / zero */

loc_0027FAF4: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_0027FAFB: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_0027FB02: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_0027FB08: ;
    PUSH32(esp, 8);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_0027FB16: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027FB2F; /* jne: not equal / not zero */

loc_0027FB22: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0027FBB4; /* jne: not equal / not zero */

loc_0027FB2F: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0027FB5E; /* jne: not equal / not zero */

loc_0027FB3E: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x5F4) = xmm0; /* movss */

loc_0027FB5E: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0027FB9E; /* jne: not equal / not zero */

loc_0027FB6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0027FB75: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0027FB83: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_0027FB93: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_0027FB9B: ;
    esp = esp + 8;

loc_0027FB9E: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    edi = MEM32(edx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_0027FBB0: ;
    edi = MEM32(esp + 0x24);

loc_0027FBB4: ;
    eax = MEM32(esp + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0027FBFF; /* jne: not equal / not zero */

loc_0027FBBC: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_0027FBFF; /* jne: not equal / not zero */

loc_0027FBC5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0027FBCF: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0027FBEA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_0027FBFC: ;
    esp = esp + 8;

loc_0027FBFF: ;
    ebx = MEM32(esp + 0x20);

loc_0027FC03: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0027FC42; /* je: equal / zero */

loc_0027FC0D: ;
    SET_LO8(edx, MEM8(ebx + 0x55));
    MEM8(eax + 0x2BC) = LO8(edx);
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2BC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027FC42; /* je: equal / zero */

loc_0027FC26: ;
    ecx = ZX8(MEM8(ebx + 0x16));
    edx = 0; /* xor self */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 0x110) = xmm0; /* movss */
    SET_HI8(edx, MEM8(ebx + 0x17));
    MEM16(ebp + 0x170) = LO16(edx);

loc_0027FC42: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    edx = ZX16(MEM16(edi + 0x22));
    MEM8(edi + 0xC) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x1A));
    MEM8(edi + 0xD) = LO8(ecx);
    eax = ZX8(MEM8(ebx + 0x17));
    eax = eax << 8;
    eax = eax - edx;
    (void)0; /* cmp eax, 0x7FFF - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(eax, 0x7FFF)) goto loc_0027FC6D; /* jle: less or equal (signed <=) */

loc_0027FC66: ;
    eax = eax - 0x10000;
    goto loc_0027FC79;

loc_0027FC6D: ;
    if (CMP_GE(eax, 0xFFFF8001u)) goto loc_0027FC7D; /* jge: greater or equal (signed >=) */

loc_0027FC74: ;
    eax = eax + 0x10000;

loc_0027FC79: ;
    MEM32(esp + 0x14) = eax;

loc_0027FC7D: ;
    if (CMP_G(eax, 0x3000)) goto loc_0027FC8B; /* jg: greater (signed >) */

loc_0027FC84: ;
    if (CMP_GE(eax, 0xFFFFD000u)) goto loc_0027FC93; /* jge: greater or equal (signed >=) */

loc_0027FC8B: ;
    MEM32(esp + 0x14) = 0;

loc_0027FC93: ;
    eax = MEM32(esp + 0x14);
    esi = edi + 0xF0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00284D50(); /* call 0x00284D50 */

loc_0027FCA3: ;
    ebx = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(ebx + 0x17));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM16(edi + 4) = LO16(ecx);
    ecx = ZX8(MEM8(edi + 0x6C));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, MEM16(edi + 4));
    MEM16(edi + 0x22) = LO16(edx);
    MEM16(edi + 0x20) = LO16(eax);
    eax = ZX8(MEM8(ebx + 0x16));
    eax = eax << 2;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027FCFF; /* je: equal / zero */

loc_0027FCDF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ebx), 0)) ? 1 : 0); /* setne */
    eax = 0x5A02CC;
    PUSH32(esp, ecx);
    goto loc_0027FD5C;

loc_0027FCFF: ;
    xmm0 = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x78); /* subss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0xC); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x7C); /* subss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0x10); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x80); /* subss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    ecx = MEM32(ebx);
    xmm0 = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0xC); /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = esp + 0x14;
    PUSH32(esp, edx);

loc_0027FD5C: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00284DC0(); /* call 0x00284DC0 */

loc_0027FD63: ;
    SET_LO8(eax, MEM8(ebx + 0x4F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027FFC3; /* jne: not equal / not zero */

loc_0027FD6E: ;
    xmm2 = MEMF(edi + 0x10); /* movss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm3, MEMF(0x649288) - sets EFLAGS */
    if ((xmm3 <= MEMF(0x649288))) goto loc_0027FE4A; /* jbe: below or equal (unsigned <=) */

loc_0027FDA7: ;
    xmm0 = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0xC); /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0x10); /* cvtsi2ss */
    edx = MEM32(esp + 0x18);
    eax = ebp + 0x78;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 8) = edx;
    ecx = ebp + 0x84;
    edx = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = ecx;
    edx = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x3B8) = edx;
    edx = ebp + 0x6BC;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    eax = ebp;
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E0150(); /* call 0x002E0150 */

loc_0027FE2D: ;
    PUSH32(esp, 0x870ED4);
    ecx = ebp;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_0027FE39: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */

loc_0027FE4A: ;
    xmm2 = MEMF(edi + 0x10); /* movss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm3, MEMF(0x64A594) - sets EFLAGS */
    if ((xmm3 <= MEMF(0x64A594))) goto loc_0027FFC3; /* jbe: below or equal (unsigned <=) */

loc_0027FE83: ;
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    xmm1 = MEMF(ebp + 0x78); /* movss */
    xmm2 = MEMF(ebp + 0x80); /* movss */
    xmm3 = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x14); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    PUSH32(esp, 0x2000);
    ecx = 0x794;
    eax = 0x6042E8;
    esi = ebp;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_0027FEEE: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    esi = esp + 0x4C;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_0027FF02: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027FFBA; /* je: equal / zero */

loc_0027FF0D: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x10); /* addss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x14); /* addss */
    esi = ebp + 0x78;
    MEMF(ebp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x80); /* addss */
    MEMF(ebp + 0x80) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    eax = esi;
    ecx = MEM32(eax);
    edx = ebp + 0x84;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_002E0150(); /* call 0x002E0150 */

loc_0027FF74: ;
    PUSH32(esp, 0x870ED4);
    ecx = ebp;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_0027FF80: ;
    ecx = MEM32(ebp + 0x7C);
    eax = MEM32(esi);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0x3B8) = ecx;
    ecx = MEM32(esi + 4);
    edx = ebp + 0x6BC;
    MEM32(edx) = eax;
    eax = MEM32(esi + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    MEMF(edi + 0xF0) = xmm0; /* movss */
    MEMF(edi + 0xF4) = xmm0; /* movss */
    MEMF(edi + 0xF8) = xmm0; /* movss */

loc_0027FFBA: ;
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_0027FFBF: ;
    ebx = MEM32(esp + 0x20);

loc_0027FFC3: ;
    SET_LO8(eax, MEM8(ebx + 0x66));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027FFD2; /* je: equal / zero */

loc_0027FFCA: ;
    SET_LO8(ecx, MEM8(ebx + 0x18));
    MEM8(edi + 0x24) = LO8(ecx);
    goto loc_0027FFD6;

loc_0027FFD2: ;
    MEM8(edi + 0x24) = 0;

loc_0027FFD6: ;
    SET_LO8(edx, MEM8(ebx + 0x50));
    MEM8(edi + 0x56) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x51));
    MEM8(edi + 0x30) = LO8(eax);
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00280051; /* je: equal / zero */

loc_0027FFEC: ;
    SET_LO8(ecx, MEM8(ebx + 0x53));
    MEM8(eax + 0x2C1) = LO8(ecx);
    SET_LO8(eax, MEM8(ebx + 0x67));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028000B; /* je: equal / zero */

loc_0027FFFC: ;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x8C) = 1;
    goto loc_00280018;

loc_0028000B: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x8C) = 0;

loc_00280018: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x534));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00280051; /* jne: not equal / not zero */

loc_00280028: ;
    MEM8(eax + 0x534) = 1;
    ecx = MEM32(ebp + 0x7C);
    edx = ebp + 0x78;
    MEM32(ebp + 0x3B8) = ecx;
    ecx = MEM32(edx);
    eax = ebp + 0x84;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00280051: ;
    SET_LO8(eax, MEM8(ebx + 0x3D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028008E; /* jne: not equal / not zero */

loc_00280058: ;
    esi = MEM32(ebx + 0x60);
    if (CMP_EQ(esi, 4)) goto loc_0028008E; /* je: equal / zero */

loc_00280060: ;
    SET_LO16(eax, MEM16(ebx + 0x5C));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00280069: ;
    if (TEST_Z(eax, eax)) goto loc_0028008E; /* je: equal / zero */

loc_0028006D: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    ecx = MEM32(ebp + 0x568);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx + 0x3A4) = LO8(eax);
    edx = ZX8(MEM8(ebx + 0x64));
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x3A8) = edx;

loc_0028008E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x1C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002800BE; /* je: equal / zero */

loc_002800A5: ;
    MEM32(eax + 0xBC) = 2;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(ebx + 0x54));
    MEM8(edx + 0x2E1) = LO8(eax);

loc_002800BE: ;
    MEM8(ebp + 0x136) = MEM8(ebp + 0x136) & 0xBF;
    ebx = MEM32(esp + 0x20);
    SET_LO8(ecx, MEM8(ebx + 0x67));
    eax = MEM32(esp + 0x24);
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x65));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + 0x66));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x1B));
    MEM8(eax + 0x25) = LO8(edx);
    ecx = MEM32(ebx + 0x1C);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(ebx + 0x20);
    MEM32(eax + 0x2C) = edx;
    esi = ebx + 0x68;
    edi = eax + 0x70;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(ebx + 0x52));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00280130; /* je: equal / zero */

loc_00280104: ;
    ecx = ebx + 0x24;
    esi = MEM32(ecx);
    edx = eax + 0x34;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = ebx + 0x30;
    esi = MEM32(edx);
    ecx = eax + 0x40;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_00280130: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x4A);
    xmm0 = MEMF(0x649794); /* movss */
    edi = MEM32(esp + 0x34);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x48);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 - MEMF(0x648E6C); /* subss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    SET_LO16(ecx, MEM16(ebx + 0x4C));
    MEM16(eax + 0x54) = LO16(ecx);
    SET_LO8(edx, MEM8(ebx + 0x4E));
    MEM8(eax + 0x6D) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + 0x4F));
    MEM8(eax + 0x6E) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x3D));
    MEM8(eax + 0x62) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + 0x3C));
    edx = MEM32(esp + 0x28);
    MEM8(eax + 0x63) = LO8(ecx);
    eax = ZX8(MEM8(ebx + 0x3F));
    SET_LO16(esi, MEM16(edx + edi * 4 + 0xA3C));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0028019D: ;
    SET_LO8(eax, MEM8(ebx + 0x3F));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028024D; /* jne: not equal / not zero */

loc_002801AB: ;
    ecx = MEM32(esp + 0x28);
    ecx = MEM32(ecx + edi * 4 + 0xA3C);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_NZ(MEM32(0x7FCB48), eax)) goto loc_00280208; /* jne: not equal / not zero */

loc_002801C5: ;
    edx = ZX16(MEM16(ebp + 0x60));
    eax = MEM32(0x84A1AC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    MEM32(edx + eax + 0x10) = 0xFFFF;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(0x84A1AC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    MEM32(ecx + edx + 0xC) = 0x42;
    ecx = ebp;
    PUSH32(esp, 0); sub_002CCCE0(); /* call 0x002CCCE0 */

loc_002801F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_00280205: ;
    esp = esp + 0x18;

loc_00280208: ;
    ecx = MEM32(esp + 0x28);
    SET_LO16(esi, MEM16(ecx + edi * 4 + 0xA3C));
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0028021D: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + edi * 4 + 0xA3C);
    eax = MEM32(0x7FCB48);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + 0x568);
    esp = esp + 4;
    MEM8(ecx + 0x38D) = 1;
    eax = eax | edx;
    MEM32(0x7FCB48) = eax;
    goto loc_0028025E;

loc_0028024D: ;
    ebp = MEM32(ebp + 0x568);
    if (TEST_Z(ebp, ebp)) goto loc_0028025E; /* je: equal / zero */

loc_00280257: ;
    MEM8(ebp + 0x38D) = 0;

loc_0028025E: ;
    eax = MEM32(esp + 0x24);
    MEM8(eax + 0x6C) = 1;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x44);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(ebx + 0x42));
    MEM8(eax + 0x58) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x43));
    MEM8(eax + 0x59) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + 0x42));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028029D; /* jne: not equal / not zero */

loc_0028028E: ;
    SET_LO8(ecx, MEM8(ebx + 0x43));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028029D; /* jne: not equal / not zero */

loc_00280295: ;
    MEM16(ebx + 0x46) = 0;
    goto loc_002802A5;

loc_0028029D: ;
    SET_LO16(ecx, MEM16(ebx + 0x46));
    MEM16(eax + 0x60) = LO16(ecx);

loc_002802A5: ;
    edi = MEM32(esp + 0x24);

loc_002802A9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x6C) = 0;
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002802F3; /* je: equal / zero */

loc_002802B6: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_002802BD: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002802D6; /* je: equal / zero */

loc_002802C4: ;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002575C0(); /* call 0x002575C0 */

loc_002802D2: ;
    esi = eax;
    goto loc_002802D8;

loc_002802D6: ;
    esi = 0; /* xor self */

loc_002802D8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002802E4: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002802F3: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + 0x38));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028034F; /* je: equal / zero */

loc_002802FE: ;
    xmm0 = MEMF(0x849C30); /* movss */
    ecx = eax;
    xmm1 = (float)(int32_t)MEM32(ecx + 0x3C); /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CE0))) goto loc_00280327; /* ja: above (unsigned >) */

loc_0028031A: ;
    xmm2 = MEMF(0x648D74); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0028034F; /* jbe: below or equal (unsigned <=) */

loc_00280327: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(0x849C30) = xmm1; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0028033B: ;
    SET_LO8(eax, MEM8(edi + 0x38));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028034F; /* je: equal / zero */

loc_00280342: ;
    xmm0 = (float)(int32_t)MEM32(edi + 0x3C); /* cvtsi2ss */
    MEMF(0x849C30) = xmm0; /* movss */

loc_0028034F: ;
    POP32(esp, ebp);

loc_00280350: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00280360
 * Original: 0x00280360 - 0x0028040F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00280360: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00280373; /* jne: not equal / not zero */

loc_0028036E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00280373: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002803BB; /* je: equal / zero */

loc_00280399: ;
    if (CMP_B(MEM32(esi + 0x80), 0x4C)) goto loc_002803BB; /* jb: below (unsigned <) */

loc_002803A2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002803AC: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002803B4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002803DC; /* jne: not equal / not zero */

loc_002803BB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002803CD: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002803D5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0028040F(); return; } /* je: equal / zero */

loc_002803DC: ;
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
    MEM32(eax) = 0x6040B8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00280420
 * Original: 0x00280420 - 0x0028044A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280420(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x3A));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00280435: ;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00280440: ;
    esp = esp + 8;
    ebx = edi + 0x3C;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_00280450(); return; /* tail jmp 0x00280450 */

}

/**
 * sub_002804B0
 * Original: 0x002804B0 - 0x00280559 (169 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002804B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002804B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ebx = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002804C1: ;
    PUSH32(esp, 1);
    MEM8(ebx + 0x3A) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002804CB: ;
    esp = esp + 8;
    MEM8(ebx + 0x34) = LO8(eax);
    edi = ebx + 0x3C;
    ebp = 0; /* xor self */

loc_002804D6: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebx + 0x3A));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00280514; /* je: equal / zero */

loc_002804E6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002804ED: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 8)) goto loc_002804FA; /* je: equal / zero */

loc_002804F5: ;
    eax = eax | 0xFFFFF000u;

loc_002804FA: ;
    PUSH32(esp, 0x10);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00280504: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00280510; /* jns: not sign (positive) */

loc_0028050B: ;
    eax = eax | 0xFFFF0000u;

loc_00280510: ;
    MEM16(edi + 2) = LO16(eax);

loc_00280514: ;
    edi = edi + 4;
    ebp++;
    if (CMP_L(ebp, 2)) goto loc_002804D6; /* jl: less (signed <) */

loc_0028051D: ;
    SET_LO8(eax, MEM8(ebx + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00280552; /* je: equal / zero */

loc_00280524: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028052B: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00280537; /* jns: not sign (positive) */

loc_00280532: ;
    eax = eax | 0xFFFF0000u;

loc_00280537: ;
    PUSH32(esp, 0x10);
    MEM16(ebx + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00280542: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0028054E; /* jns: not sign (positive) */

loc_00280549: ;
    eax = eax | 0xFFFF0000u;

loc_0028054E: ;
    MEM16(ebx + 0x38) = LO16(eax);

loc_00280552: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280560
 * Original: 0x00280560 - 0x00280616 (182 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00280560: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00280571: ;
    if (TEST_Z(eax, eax)) goto loc_0028060F; /* je: equal / zero */

loc_00280579: ;
    (void)0; /* test MEM8(edi + 0x3A), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edi + 0x3C;
    if (TEST_Z(MEM8(edi + 0x3A), 1)) goto loc_002805B4; /* je: equal / zero */

loc_00280583: ;
    if (TEST_Z(MEM8(eax + 0x758), 1)) goto loc_002805B4; /* je: equal / zero */

loc_0028058C: ;
    ecx = MEM32(eax + 0xA3C);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ecx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002805B4; /* je: equal / zero */

loc_0028059C: ;
    SET_LO16(edx, MEM16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    MEM16(ecx + 0x776280) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 2));
    MEM16(ecx + 0x776282) = LO16(edx);

loc_002805B4: ;
    SET_LO8(edx, MEM8(edi + 0x3A));
    SET_LO8(ecx, 2);
    esi = esi + 4;
    if (TEST_Z(LO8(ecx), LO8(edx))) goto loc_002805F2; /* je: equal / zero */

loc_002805C0: ;
    if (TEST_Z(MEM8(eax + 0x758), LO8(ecx))) goto loc_002805F2; /* je: equal / zero */

loc_002805C8: ;
    eax = MEM32(eax + 0xA40);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002805F2; /* je: equal / zero */

loc_002805D8: ;
    ecx = eax;
    SET_LO16(eax, MEM16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    MEM16(ecx + 0x776280) = LO16(eax);
    SET_LO16(edx, MEM16(esi + 2));
    MEM16(ecx + 0x776282) = LO16(edx);

loc_002805F2: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028060F; /* je: equal / zero */

loc_002805FA: ;
    SET_LO16(eax, MEM16(edi + 0x36));
    MEM16(0x776B58) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x38));
    MEM16(0x776B5A) = LO16(ecx);

loc_0028060F: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00280620
 * Original: 0x00280620 - 0x002806A6 (134 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00280620: ;
    MEM8(ecx + 0x34) = 0;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, 1);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00280646; /* je: equal / zero */

loc_0028062F: ;
    MEM8(ecx + 0x34) = LO8(edx);
    SET_LO16(eax, MEM16(0x776B58));
    MEM16(ecx + 0x36) = LO16(eax);
    SET_LO16(eax, MEM16(0x776B5A));
    MEM16(ecx + 0x38) = LO16(eax);

loc_00280646: ;
    SET_LO8(eax, MEM8(0x86E980));
    MEM8(ecx + 0x3A) = LO8(eax);
    eax = ecx + 0x3C;
    if (TEST_Z(MEM8(0x86E980), LO8(edx))) goto loc_00280678; /* je: equal / zero */

loc_00280659: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862CCB);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    SET_LO16(edx, MEM16(ecx + 0x776282));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(ecx, MEM16(ecx + 0x776280));
    MEM16(eax) = LO16(ecx);

loc_00280678: ;
    SET_LO8(ecx, MEM8(0x86E980));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), 2)) goto loc_002806A5; /* je: equal / zero */

loc_00280686: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862CCC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    SET_LO16(edx, MEM16(ecx + 0x776282));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(ecx, MEM16(ecx + 0x776280));
    MEM16(eax) = LO16(ecx);

loc_002806A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002806B0
 * Original: 0x002806B0 - 0x0028074C (156 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002806B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002806B0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00280730; /* jle: less or equal (signed <=) */

loc_002806C8: ;
    edi = 0x865904;
    /* nop */

loc_002806D0: ;
    ebx = ZX8(MEM8(edi + -740));
    ebp = edi + -2620;
    ecx = 0; /* xor self */
    esi = edi;

loc_002806E1: ;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(ebx, eax)) goto loc_0028070D; /* je: equal / zero */

loc_002806EC: ;
    if (TEST_S(ecx, ecx)) goto loc_0028070D; /* jl: less (signed <) */

loc_002806F0: ;
    if (CMP_GE(ecx, 2)) goto loc_0028070D; /* jge: greater or equal (signed >=) */

loc_002806F5: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0028070D; /* je: equal / zero */

loc_00280701: ;
    edx = MEM32(esp + 0x18);
    edx = ZX16(MEM16(edx + 0x60));
    if (CMP_EQ(eax, edx)) { sub_0028074C(); return; } /* je: equal / zero */

loc_0028070D: ;
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, 2)) goto loc_002806E1; /* jl: less (signed <) */

loc_00280716: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx++;
    edi = edi + 0xA50;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, eax)) goto loc_002806D0; /* jl: less (signed <) */

loc_00280730: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    POP32(esp, ebp);
    MEM32(ecx) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00280770
 * Original: 0x00280770 - 0x0028093E (462 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280770: ;
    ecx = MEM32(0x777EC4);
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00280938; /* jle: less or equal (signed <=) */

loc_00280789: ;
    eax = 0x777EFC;
    PUSH32(esp, esi);
    /* nop */

loc_00280790: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_002807A3; /* je: equal / zero */

loc_00280794: ;
    edi++;
    eax = eax + 0x40;
    if (CMP_L(edi, ecx)) goto loc_00280790; /* jl: less (signed <) */

loc_0028079C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_002807A3: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00280937; /* je: equal / zero */

loc_002807AC: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x14) = eax;

loc_002807C3: ;
    ecx = MEM32(0x84A5F8);
    eax = eax + ecx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_00280826; /* je: equal / zero */

loc_002807D9: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002807DE: ;
    if (CMP_NE(eax, ebp)) goto loc_00280826; /* jne: not equal / not zero */

loc_002807E2: ;
    if (TEST_Z(ebx, ebx)) goto loc_00280809; /* je: equal / zero */

loc_002807E6: ;
    ecx = MEM32(esp + 0x30);
    eax = esi;
    eax = eax - ebx;
    ecx = ecx - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_00280809; /* jae: above or equal (unsigned >=) */

loc_002807FA: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    esi = esi + 4;
    MEM32(esp + 0x2C) = esi;
    goto loc_00280826;

loc_00280809: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_0028081E: ;
    esi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);

loc_00280826: ;
    eax = MEM32(esp + 0x14);
    eax = eax + 0x6D0;
    (void)0; /* cmp eax, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x36800)) goto loc_002807C3; /* jl: less (signed <) */

loc_0028083A: ;
    edx = ZX16(MEM16(ebp + 0x3AE));
    SET_LO8(eax, MEM8(ebp + 0xB4));
    ecx = MEM32(ebp + 0x568);
    SET_LO16(esi, MEM16(ebp + 0x60));
    edi = edi << 6;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0xBC);
    MEM8(esp + 0x1C) = LO8(eax);
    edi = edi + 0x777ED0;
    PUSH32(esp, 0xD);
    eax = edi;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00280875: ;
    eax = ZX8(MEM8(ebp + 0x250));
    MEM32(esp + 0x18) = eax;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_00280889: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_00280899: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    MEM8(ebp + 0x250) = LO8(ecx);
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    esp = esp + 0x1C;
    ecx = ebp;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_002808BD: ;
    SET_LO16(edx, MEM16(esp + 0x18));
    SET_LO8(eax, MEM8(esp + 0x1C));
    ecx = MEM32(ebp + 0x568);
    MEM16(ebp + 0x3AE) = LO16(edx);
    edx = MEM32(esp + 0x20);
    MEM8(ebp + 0xB4) = LO8(eax);
    MEM32(ecx + 0xBC) = edx;
    esi = 0; /* xor self */

loc_002808E5: ;
    if (TEST_Z(ebx, ebx)) goto loc_00280936; /* je: equal / zero */

loc_002808E9: ;
    eax = MEM32(esp + 0x2C);
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(esi, eax)) goto loc_00280909; /* jae: above or equal (unsigned >=) */

loc_002808F6: ;
    ecx = MEM32(ebx + esi * 4);
    edi = MEM32(ecx + 0x23C);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_00280906: ;
    esi++;
    goto loc_002808E5;

loc_00280909: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0028090F: ;
    if (TEST_NZ(eax, eax)) goto loc_00280936; /* jne: not equal / not zero */

loc_00280913: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00280933: ;
    esp = esp + 4;

loc_00280936: ;
    POP32(esp, ebx);

loc_00280937: ;
    POP32(esp, esi);

loc_00280938: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00280940
 * Original: 0x00280940 - 0x00280A6E (302 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280940: ;
    eax = MEM32(0x863D08);
    esp = esp - 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(eax, 3)) goto loc_00280A69; /* jne: not equal / not zero */

loc_00280956: ;
    if (TEST_Z(ebp, ebp)) goto loc_00280A69; /* je: equal / zero */

loc_0028095E: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00280A69; /* je: equal / zero */

loc_0028096C: ;
    (void)0; /* cmp MEM32(ebp + 0x64), 1 - flags set for next jcc */
    MEM32(esp + 4) = ebp;
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_00280A69; /* jne: not equal / not zero */

loc_0028097A: ;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00267210(); /* call 0x00267210 */

loc_00280983: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00280A69; /* je: equal / zero */

loc_0028098B: ;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00267450(); /* call 0x00267450 */

loc_00280994: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00280A69; /* jne: not equal / not zero */

loc_0028099C: ;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00267330(); /* call 0x00267330 */

loc_002809A5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00280A69; /* jne: not equal / not zero */

loc_002809AD: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = esp + 8;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_002809B9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00280A68; /* jne: not equal / not zero */

loc_002809C1: ;
    PUSH32(esp, esi);
    esi = esp + 0x10;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_002673D0(); /* call 0x002673D0 */

loc_002809D7: ;
    if (TEST_Z(eax, eax)) goto loc_00280A67; /* je: equal / zero */

loc_002809DF: ;
    esi = MEM32(esp + 0x10);
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM8(eax + 0x75B), LO8(edx))) goto loc_00280A67; /* je: equal / zero */

loc_002809F4: ;
    edi = ZX8(MEM8(eax + esi + 0x76C));
    eax = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(eax + 0x51C));
    ecx = MEM32(eax + 0x3F4);
    esi = edi;
    esi = esi << 6;
    esi = esi + 0x777ED0;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00280A29; /* je: equal / zero */

loc_00280A1D: ;
    eax = MEM32(eax + 0x520);
    if (TEST_Z(eax, eax)) goto loc_00280A29; /* je: equal / zero */

loc_00280A27: ;
    ecx = eax;

loc_00280A29: ;
    if (TEST_Z(ecx, ecx)) goto loc_00280A67; /* je: equal / zero */

loc_00280A2D: ;
    if (TEST_Z(esi, esi)) goto loc_00280A67; /* je: equal / zero */

loc_00280A31: ;
    edx = MEM32(ecx + 0x14);
    if (CMP_NE(edx, MEM32(esi + 0x14))) goto loc_00280A49; /* jne: not equal / not zero */

loc_00280A39: ;
    eax = MEM32(ecx + 8);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_00280A49; /* jne: not equal / not zero */

loc_00280A41: ;
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(ecx, MEM32(esi + 0x18))) goto loc_00280A67; /* je: equal / zero */

loc_00280A49: ;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_00280A53: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00280770(); /* call 0x00280770 */

loc_00280A5C: ;
    esp = esp + 4;
    MEM8(ebp + 0x234) = 0;
    POP32(esp, ebx);

loc_00280A67: ;
    POP32(esp, esi);

loc_00280A68: ;
    POP32(esp, edi);

loc_00280A69: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00280A70
 * Original: 0x00280A70 - 0x00280B24 (180 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00280A70: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00280940(); /* call 0x00280940 */

loc_00280A7E: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_002806B0(); /* call 0x002806B0 */

loc_00280A96: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00280B24(); return; } /* jne: not equal / not zero */

loc_00280AA1: ;
    esi = ZX16(MEM16(edi + 0x60));
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00280AB3: ;
    SET_LO8(eax, MEM8(0x876758));
    edx = MEM32(0x84A1B0);
    esp = esp + 0xC;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    MEM8(edx + esi) = 0;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00280AD9; /* jne: not equal / not zero */

loc_00280AC9: ;
    MEM32(0x876758) = MEM32(0x876758) | ebx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00280AD9: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00280AEB; /* jne: not equal / not zero */

loc_00280AE2: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_00280AF9; /* je: equal / zero */

loc_00280AEB: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00280AFE; /* je: equal / zero */

loc_00280AF9: ;
    eax = 0x8761EC;

loc_00280AFE: ;
    ecx = esi;
    edx = ebx;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax + 0x288);
    POP32(esp, edi);
    MEM8(esi + 0x849894) = 0xFF;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + 0x288) = ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00281AA0
 * Original: 0x00281AA0 - 0x00281AF8 (88 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00281AA0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_00281AAC: ;
    ecx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ecx)) goto loc_00281ACC; /* je: equal / zero */

loc_00281AB5: ;
    edx = MEM32(esp);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x12C);
    eax = eax + edx;
    MEM32(eax + 0x2CC) = ecx;
    MEM8(eax + 0x303) = LO8(ecx);

loc_00281ACC: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, MEM8(eax + 0x309));
    MEM8(eax + 0x308) = LO8(edx);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x309) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x36C) = LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281B00
 * Original: 0x00281B00 - 0x00281B10 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00281B00: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00281B10(); return; } /* jne: not equal / not zero */

loc_00281B0C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00281B80
 * Original: 0x00281B80 - 0x002820A3 (1315 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00281B80: ;
    esp = esp - 0x4C;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(eax + 0x60));
    eax = 0xFFFFFFFEu;
    ebx = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    (void)0; /* cmp MEM8(0x863D11), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_00282098; /* je: equal / zero */

loc_00281BB0: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_00281BC3; /* je: equal / zero */

loc_00281BBA: ;
    if (CMP_NE(eax, 2)) goto loc_00282098; /* jne: not equal / not zero */

loc_00281BC3: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = esi + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00281BDC: ;
    if (TEST_NZ(eax, eax)) goto loc_00281BFB; /* jne: not equal / not zero */

loc_00281BE0: ;
    ecx = ZX16(MEM16(edi + 0x60));

loc_00281BE4: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_00281BF7; /* je: equal / zero */

loc_00281BF0: ;
    if (CMP_L(eax, 2)) goto loc_00281BE4; /* jl: less (signed <) */

loc_00281BF5: ;
    goto loc_00281BFB;

loc_00281BF7: ;
    if (CMP_NE(eax, ebx)) goto loc_00281C16; /* jne: not equal / not zero */

loc_00281BFB: ;
    eax = MEM32(0x84A5F8);
    esi = esi + eax;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00281C0D: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_EQ(eax, ebx)) eax = esi; /* cmove */
    ebp = ZX16(MEM16(eax + 0x60));

loc_00281C16: ;
    edi = MEM32(0x84A5F8);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = MEM32(ecx + edi + 0x64);
    (void)0; /* cmp eax, 0x35 - flags set for next jcc */
    esi = ecx + edi;
    if (CMP_NE(eax, 0x35)) goto loc_00281C61; /* jne: not equal / not zero */

loc_00281C30: ;
    eax = esi;
    PUSH32(esp, 0); sub_00394EE0(); /* call 0x00394EE0 */

loc_00281C37: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00281C55; /* jne: not equal / not zero */

loc_00281C3C: ;
    esi = MEM32(esi + 0x570);
    eax = MEM32(esi + 0x1F0);
    if (CMP_EQ(eax, ebx)) goto loc_00281C59; /* je: equal / zero */

loc_00281C4C: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00281C59; /* je: equal / zero */

loc_00281C55: ;
    ebp = eax;
    goto loc_00281C61;

loc_00281C59: ;
    edx = MEM32(esp + 0x64);
    ebp = ZX16(MEM16(edx + 0x60));

loc_00281C61: ;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00281C87; /* je: equal / zero */

loc_00281C66: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edi;
    edi = esp + 0x20;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_00281C7D: ;
    if (TEST_NZ(eax, eax)) goto loc_00281C97; /* jne: not equal / not zero */

loc_00281C81: ;
    MEM32(esp + 0x24) = ebp;
    goto loc_00281C8F;

loc_00281C87: ;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;

loc_00281C8F: ;
    MEM32(esp + 0x20) = 1;

loc_00281C97: ;
    eax = MEM32(esp + 0x64);
    edi = esp + 0x18;
    esi = esp + 0x1C;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_00281CA8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x64);
    if (TEST_NZ(eax, eax)) goto loc_00281CC4; /* jne: not equal / not zero */

loc_00281CB0: ;
    SET_LO16(eax, MEM16(edx + 0xAC));
    MEM16(esp + 0x1C) = LO16(eax);
    MEM32(esp + 0x18) = 1;

loc_00281CC4: ;
    (void)0; /* cmp MEM32(esp + 0x18), 1 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(MEM32(esp + 0x18), 1)) goto loc_00281D98; /* jne: not equal / not zero */

loc_00281CD3: ;
    eax = MEM32(edx + 0x64);
    if (CMP_NE(eax, 0x35)) goto loc_00281D35; /* jne: not equal / not zero */

loc_00281CDB: ;
    eax = MEM32(edx + 0x570);
    if (CMP_EQ(eax, ebx)) goto loc_00281DB0; /* je: equal / zero */

loc_00281CE9: ;
    esi = MEM32(eax + 0x784);
    PUSH32(esp, esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00281CFA: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00281DB7; /* jne: not equal / not zero */

loc_00281D06: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_00281D10: ;
    ecx = SX16(LO16(eax));
    if (CMP_NE(ecx, esi)) goto loc_00281DAA; /* jne: not equal / not zero */

loc_00281D1B: ;
    if (CMP_EQ(MEM8(esp + 0x84), LO8(ebx))) goto loc_00281DAA; /* je: equal / zero */

loc_00281D28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_00281D35: ;
    if (CMP_EQ(eax, 0x3C)) goto loc_00281D79; /* je: equal / zero */

loc_00281D3A: ;
    if (CMP_EQ(eax, 0x34)) goto loc_00281D79; /* je: equal / zero */

loc_00281D3F: ;
    if (CMP_EQ(eax, 0x36)) goto loc_00281D79; /* je: equal / zero */

loc_00281D44: ;
    if (CMP_EQ(eax, 0x37)) goto loc_00281D79; /* je: equal / zero */

loc_00281D49: ;
    if (CMP_EQ(eax, 0x38)) goto loc_00281D79; /* je: equal / zero */

loc_00281D4E: ;
    ecx = edx;
    PUSH32(esp, 0); sub_003B8010(); /* call 0x003B8010 */

loc_00281D55: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00281DB0; /* je: equal / zero */

loc_00281D59: ;
    ecx = MEM32(edx + 0x570);
    if (CMP_EQ(ecx, ebx)) goto loc_00281DB0; /* je: equal / zero */

loc_00281D63: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_00281D68: ;
    if (TEST_Z(eax, eax)) goto loc_00281DB0; /* je: equal / zero */

loc_00281D6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_00281D79: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00281D83: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00281DB7; /* jne: not equal / not zero */

loc_00281D8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_00281D98: ;
    edi = MEM32(esp + 0x1C);
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00281DA6: ;
    MEM32(esp + 0x10) = eax;

loc_00281DAA: ;
    if (CMP_NE(MEM32(esp + 0x10), ebx)) goto loc_00281DB7; /* jne: not equal / not zero */

loc_00281DB0: ;
    MEM8(esp + 0x84) = LO8(ebx);

loc_00281DB7: ;
    (void)0; /* cmp MEM8(0x864EC1), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x28) = ebx;
    if (CMP_LE(MEM8(0x864EC1), LO8(ebx))) goto loc_00282096; /* jle: less or equal (signed <=) */

loc_00281DC7: ;
    MEM32(esp + 0x14) = 0x864EC8;
    /* nop */

loc_00281DD0: ;
    if (CMP_EQ(MEM8(esp + 0x84), LO8(ebx))) goto loc_00281DE7; /* je: equal / zero */

loc_00281DD9: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(esp + 0x10), eax)) goto loc_00282070; /* jne: not equal / not zero */

loc_00281DE7: ;
    esi = MEM32(esp + 0x60);
    esi = esi + 0x78;
    ecx = esp + 0x44;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x78);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x6C);
    ebp = 0; /* xor self */
    if (CMP_NE(eax, 6)) goto loc_00281E6E; /* jne: not equal / not zero */

loc_00281E2C: ;
    edx = MEM32(esp + 0x64);
    edx = edx + 0x78;
    eax = esp + 0x38;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x30) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ebp = esp + 0x38;

loc_00281E6E: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00281E7B; /* jne: not equal / not zero */

loc_00281E76: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00281E7B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00281EC9; /* je: equal / zero */

loc_00281EA1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_00281EC9; /* jb: below (unsigned <) */

loc_00281EAD: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00281EB7: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00281EC2: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00281EED; /* jne: not equal / not zero */

loc_00281EC9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00281EDB: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00281EE6: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00281F27; /* je: equal / zero */

loc_00281EED: ;
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
    MEM32(eax) = 0x604048;
    MEM32(eax + 0x34) = 1;
    esi = eax;
    goto loc_00281F29;

loc_00281F27: ;
    esi = 0; /* xor self */

loc_00281F29: ;
    eax = MEM32(esp + 0x7C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_00281F5C: ;
    SET_LO8(edx, MEM8(esp + 0x70));
    SET_LO8(eax, MEM8(esp + 0x74));
    MEM8(esi + 0x5C) = LO8(edx);
    edx = MEM32(esp + 0x64);
    MEM8(esi + 0x5D) = LO8(eax);
    eax = MEM32(edx + 0x64);
    eax--;
    if ((eax == 0)) goto loc_00281FEB; /* je: equal / zero */

loc_00281F74: ;
    eax = eax - 0x34;
    if ((eax != 0)) goto loc_00282013; /* jne: not equal / not zero */

loc_00281F7D: ;
    eax = MEM32(edx + 0x570);
    (void)0; /* cmp MEM8(eax + 0xE00), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(eax + 0xE04); /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xE01);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xE08); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xE0C); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    if (CMP_EQ(MEM8(eax + 0xE00), LO8(ebx))) goto loc_00282013; /* je: equal / zero */

loc_00281FBC: ;
    eax = MEM32(esp + 0x50);
    MEM32(esi + 0x4C) = ecx;
    ecx = esi + 0x50;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(esi + 0x44) = 2;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edx + 0x570);
    MEM8(ecx + 0xE00) = LO8(ebx);
    goto loc_00282013;

loc_00281FEB: ;
    eax = MEM32(edx + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00282013; /* je: equal / zero */

loc_00281FF5: ;
    if (CMP_EQ(MEM8(eax + 0x2DB), LO8(ebx))) goto loc_00282013; /* je: equal / zero */

loc_00281FFD: ;
    MEM32(esi + 0x44) = 1;
    edx = MEM32(edx + 0x568);
    SET_LO8(eax, MEM8(edx + 0x36D));
    MEM8(esi + 0x48) = LO8(eax);

loc_00282013: ;
    if (CMP_EQ(MEM8(esp + 0x80), LO8(ebx))) goto loc_0028202D; /* je: equal / zero */

loc_0028201C: ;
    if (CMP_NE(MEM32(esi + 0x44), ebx)) goto loc_0028202D; /* jne: not equal / not zero */

loc_00282021: ;
    edi = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(esp + 0x10), edi)) goto loc_0028203D; /* jne: not equal / not zero */

loc_0028202B: ;
    goto loc_00282031;

loc_0028202D: ;
    edi = MEM32(esp + 0x14);

loc_00282031: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028203D: ;
    eax = MEM32(esi + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO16(ecx, MEM16(edi + 0x9D8));
    MEM16(esi + 0x84) = LO16(ecx);
    if (CMP_EQ(eax, ebx)) goto loc_0028205D; /* je: equal / zero */

loc_00282052: ;
    if (CMP_L(MEM32(eax), ebx)) goto loc_0028205D; /* jl: less (signed <) */

loc_00282056: ;
    eax = 1;
    goto loc_0028205F;

loc_0028205D: ;
    eax = 0; /* xor self */

loc_0028205F: ;
    edx = MEM32(esi);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(edi + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00282070: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(eax, ecx)) goto loc_00281DD0; /* jl: less (signed <) */

loc_00282096: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00282098: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_002820B0
 * Original: 0x002820B0 - 0x0028216F (191 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002820B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002820B0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002820C3; /* jne: not equal / not zero */

loc_002820BE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002820C3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00282111; /* je: equal / zero */

loc_002820E9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_00282111; /* jb: below (unsigned <) */

loc_002820F5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002820FF: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028210A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00282135; /* jne: not equal / not zero */

loc_00282111: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00282123: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028212E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0028216F(); return; } /* je: equal / zero */

loc_00282135: ;
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
    MEM32(eax) = 0x604048;
    MEM32(eax + 0x34) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282180
 * Original: 0x00282180 - 0x0028223B (187 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00282180: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00282193; /* jne: not equal / not zero */

loc_0028218E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00282193: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002821E1; /* je: equal / zero */

loc_002821B9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_002821E1; /* jb: below (unsigned <) */

loc_002821C5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002821CF: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002821DA: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00282205; /* jne: not equal / not zero */

loc_002821E1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002821F3: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002821FE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0028223B(); return; } /* je: equal / zero */

loc_00282205: ;
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
    MEM32(eax) = 0x604048;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282250
 * Original: 0x00282250 - 0x0028229C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00282262: ;
    SET_LO8(eax, MEM8(0x86E9A2));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0028229C(); return; } /* je: equal / zero */

loc_0028226E: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00282282; /* je: equal / zero */

loc_00282277: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00282285; /* jne: not equal / not zero */

loc_00282282: ;
    eax = eax | 0xFFFFFFFFu;

loc_00282285: ;
    if (CMP_NE(MEM16(edi + 0x3C), LO16(eax))) { sub_0028229C(); return; } /* jne: not equal / not zero */

loc_0028228B: ;
    PUSH32(esp, 1);
    eax = 1;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00282297: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002822B3(); return; /* tail jmp 0x002822B3 */

}

/**
 * sub_002824B0
 * Original: 0x002824B0 - 0x002824F7 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002824B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002824B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002824BF: ;
    PUSH32(esp, 1);
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002824C9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002824F7(); return; } /* je: equal / zero */

loc_002824D0: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_002824DE: ;
    if (TEST_Z(eax, eax)) goto loc_002824EF; /* je: equal / zero */

loc_002824E2: ;
    SET_LO16(ecx, MEM16(eax + 0x9D8));
    MEM16(edi + 0x3C) = LO16(ecx);
    g_seh_ebp = ebp; sub_0028250E(); return; /* tail jmp 0x0028250E */

loc_002824EF: ;
    MEM16(edi + 0x3C) = 0xFFFE;
    g_seh_ebp = ebp; sub_0028250E(); return; /* tail jmp 0x0028250E */

}

/**
 * sub_00282720
 * Original: 0x00282720 - 0x00282A84 (868 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282720: ;
    eax = MEM32(0x863D08);
    esp = esp - 0x20;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_NE(eax, 3)) goto loc_00282A7A; /* jne: not equal / not zero */

loc_00282734: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00282742: ;
    if (TEST_Z(eax, eax)) goto loc_00282A7A; /* je: equal / zero */

loc_0028274A: ;
    SET_LO8(eax, MEM8(ebp + 0x3E));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), 1)) goto loc_00282774; /* jne: not equal / not zero */

loc_00282757: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x3C);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_00282763: ;
    if (TEST_NZ(eax, eax)) goto loc_00282784; /* jne: not equal / not zero */

loc_00282767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00282774: ;
    esi = ZX8(LO8(eax));
    SET_LO16(eax, MEM16(ebp + 0x3C));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00282780: ;
    if (TEST_Z(eax, eax)) goto loc_00282788; /* je: equal / zero */

loc_00282784: ;
    ebx = ZX16(MEM16(eax + 0x60));

loc_00282788: ;
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (CMP_NE(LO8(eax), 1)) goto loc_0028279D; /* jne: not equal / not zero */

loc_0028278F: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x40);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_0028279B: ;
    goto loc_002827A9;

loc_0028279D: ;
    esi = ZX8(LO8(eax));
    SET_LO16(eax, MEM16(ebp + 0x40));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_002827A9: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00282A77; /* je: equal / zero */

loc_002827B3: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00282A77; /* je: equal / zero */

loc_002827BC: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00282A77; /* je: equal / zero */

loc_002827C7: ;
    ecx = MEM32(0x84A5F8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ebx = ebx + ecx;
    edi = ebx;
    eax = MEM32(edi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (TEST_Z(eax, eax)) goto loc_00282A77; /* je: equal / zero */

loc_002827E6: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002827F1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(eax, eax)) goto loc_002827FD; /* je: equal / zero */

loc_002827F9: ;
    MEM32(esp + 0x10) = eax;

loc_002827FD: ;
    edx = MEM32(edi + 0x64);
    if (CMP_EQ(edx, 0x2E)) goto loc_00282A77; /* je: equal / zero */

loc_00282809: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x64);
    if (CMP_EQ(ecx, 0x2E)) goto loc_00282A77; /* je: equal / zero */

loc_00282819: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x2E)) goto loc_00282A77; /* je: equal / zero */

loc_00282825: ;
    if (CMP_EQ(edx, 0x42)) goto loc_00282A77; /* je: equal / zero */

loc_0028282E: ;
    if (CMP_EQ(ecx, 0x42)) goto loc_00282A77; /* je: equal / zero */

loc_00282837: ;
    if (CMP_EQ(eax, 0x42)) goto loc_00282A77; /* je: equal / zero */

loc_00282840: ;
    if (CMP_NE(eax, 0x3C)) goto loc_00282853; /* jne: not equal / not zero */

loc_00282845: ;
    SET_LO8(eax, MEM8(esi + 0x234));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00282A77; /* ja: above (unsigned >) */

loc_00282853: ;
    ecx = MEM32(ebp + 0x38);
    SET_LO8(edx, MEM8(ebp + 0x5D));
    ecx = ecx & 0xFFFF;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = 0x743A10;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0028287A; /* je: equal / zero */

loc_0028286F: ;
    eax = edi;
    PUSH32(esp, 0); sub_002EF1B0(); /* call 0x002EF1B0 */

loc_00282876: ;
    MEM32(esp + 0x14) = eax;

loc_0028287A: ;
    SET_LO8(eax, MEM8(ebp + 0x5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002829F1; /* je: equal / zero */

loc_00282885: ;
    ebx = MEM32(0x84A5F8);
    ebx = ebx + 0x36800;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F2E90(); /* call 0x002F2E90 */

loc_00282897: ;
    edx = ebx + 0x78;
    PUSH32(esp, edx);
    ecx = ebp + 0x68;
    eax = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_002828A8: ;
    SET_LO8(eax, MEM8(ebp + 0x74));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002828CB; /* je: equal / zero */

loc_002828B2: ;
    edx = ebp + 0x78;
    ecx = MEM32(edx);
    eax = ebx + 0x68C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_002828CB: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_000ADA00(); /* call 0x000ADA00 */

loc_002828D2: ;
    ecx = eax;
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_002828F2; /* je: equal / zero */

loc_002828DF: ;
    eax = MEM32(esp + 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002828EA: ;
    eax = edi;
    edi = MEM32(esp + 0x20);
    goto loc_002828F4;

loc_002828F2: ;
    eax = 0; /* xor self */

loc_002828F4: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx + 0x23C) = eax;
    eax = 0; /* xor self */
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ebx + 0x251) = 0;
    MEM16(ebx + 0x174) = LO16(eax);
    MEM16(ebx + 0x170) = LO16(eax);
    MEM16(ebx + 0x60) = 0x80;
    MEM8(ebx + 0x1D8) = LO8(edx);
    MEM32(ebx + 0x53C) = eax;
    SET_LO8(eax, MEM8(ebp + 0x5D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x849E80) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00282971; /* jne: not equal / not zero */

loc_00282939: ;
    if (CMP_NE(ecx, 0x4E)) goto loc_00282971; /* jne: not equal / not zero */

loc_0028293E: ;
    SET_LO8(edx, MEM8(edi + 0x135));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = edi;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00282960; /* je: equal / zero */

loc_0028294A: ;
    eax = ZX8(LO8(edx));
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx + -1744;

loc_00282960: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_00282971; /* jne: not equal / not zero */

loc_00282966: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00395F00(); /* call 0x00395F00 */

loc_0028296D: ;
    ecx = MEM32(esp + 0x18);

loc_00282971: ;
    eax = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x7C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x80);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ebp + 0x60);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x5D));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x5C));
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002EF1D0(); /* call 0x002EF1D0 */

loc_002829BA: ;
    eax = MEM32(ebx + 0x23C);
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x849E80) = 0;
    if (TEST_Z(eax, eax)) goto loc_002829E5; /* je: equal / zero */

loc_002829CE: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(eax) = 0;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002829E2: ;
    esp = esp + 4;

loc_002829E5: ;
    MEM32(ebx + 0x23C) = 0;
    goto loc_00282A33;

loc_002829F1: ;
    eax = esi + 0x78;
    ebx = MEM32(eax);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x58) = ebx;
    PUSH32(esp, 0); sub_002EF1D0(); /* call 0x002EF1D0 */

loc_00282A30: ;
    esp = esp + 0x30;

loc_00282A33: ;
    eax = MEM32(ebp + 0x44);
    eax--;
    if ((eax == 0)) goto loc_00282A56; /* je: equal / zero */

loc_00282A39: ;
    eax--;
    if ((eax != 0)) goto loc_00282A77; /* jne: not equal / not zero */

loc_00282A3C: ;
    ebx = MEM32(ebp + 0x4C);
    edi = ebp + 0x50;
    eax = esi;
    PUSH32(esp, 0); sub_001B6150(); /* call 0x001B6150 */

loc_00282A49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00282A56: ;
    PUSH32(esp, 0); sub_002CE110(); /* call 0x002CE110 */

loc_00282A5B: ;
    MEM16(esi + 0x3AE) = 0;
    ecx = ZX8(MEM8(ebp + 0x48));
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B3CF0(); /* call 0x000B3CF0 */

loc_00282A74: ;
    esp = esp + 0xC;

loc_00282A77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00282A7A: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00282A90
 * Original: 0x00282A90 - 0x00282B32 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282A90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00282A90: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(ecx + 0x38) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM16(ecx + 0x3C) = LO16(edx);
    MEM8(ecx + 0x3E) = LO8(eax);
    if (CMP_NE(LO8(eax), 1)) goto loc_00282AC5; /* jne: not equal / not zero */

loc_00282AAB: ;
    eax = MEM32(0x84A5F8);
    edx = SX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    SET_LO16(edx, MEM16(edx + eax + 0xAC));
    MEM16(ecx + 0x3C) = LO16(edx);

loc_00282AC5: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0x14));
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM16(ecx + 0x40) = LO16(eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    MEM8(ecx + 0x42) = LO8(edx);
    edx = 0; /* xor self */
    MEM32(ecx + 0x64) = eax;
    PUSH32(esp, edi);
    MEM32(ecx + 0x44) = edx;
    MEM8(ecx + 0x48) = LO8(edx);
    MEM8(ecx + 0x5C) = LO8(edx);
    MEM8(ecx + 0x5D) = LO8(edx);
    edi = MEM32(esi);
    eax = ecx + 0x68;
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    MEM32(eax + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x28);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    POP32(esp, edi);
    MEMF(ecx + 0x60) = xmm0; /* movss */
    POP32(esp, esi);
    if (CMP_EQ(eax, edx)) { sub_00282B32(); return; } /* je: equal / zero */

loc_00282B18: ;
    MEM8(ecx + 0x74) = 1;
    edx = MEM32(eax);
    ecx = ecx + 0x78;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00282B40
 * Original: 0x00282B40 - 0x00282BA1 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00282B40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x77A5AC);
    if (TEST_Z(esi, esi)) goto loc_00282B9F; /* je: equal / zero */

loc_00282B4B: ;
    PUSH32(esp, edi);
    /* nop */

loc_00282B50: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi);
    eax = edi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00282B60; /* je: equal / zero */

loc_00282B5E: ;
    MEM32(eax) = ecx;

loc_00282B60: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00282B73: ;
    if (TEST_NZ(eax, eax)) goto loc_00282B98; /* jne: not equal / not zero */

loc_00282B77: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00282B95: ;
    esp = esp + 4;

loc_00282B98: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00282B50; /* jne: not equal / not zero */

loc_00282B9E: ;
    POP32(esp, edi);

loc_00282B9F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00282BB0
 * Original: 0x00282BB0 - 0x00282C70 (192 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00282BB0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00282BBE; /* jne: not equal / not zero */

loc_00282BB9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00282BBE: ;
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
    if (TEST_Z(esi, esi)) goto loc_00282C08; /* je: equal / zero */

loc_00282BE6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_00282C08; /* jb: below (unsigned <) */

loc_00282BEF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00282BF9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00282C01: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00282C25; /* jne: not equal / not zero */

loc_00282C08: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00282C1A: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00282C22: ;
    esp = esp + 8;

loc_00282C25: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    edx = MEM32(0x77A5AC);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = 0x77A5A8;
    if (TEST_Z(edx, edx)) goto loc_00282C61; /* je: equal / zero */

loc_00282C50: ;
    edx = 0x77A5AC;

loc_00282C55: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(esi, esi)) goto loc_00282C55; /* jne: not equal / not zero */

loc_00282C61: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00282C70
 * Original: 0x00282C70 - 0x00282CB5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00282C70: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00282C7E; /* je: equal / zero */

loc_00282C7C: ;
    MEM32(eax) = ecx;

loc_00282C7E: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00282C91: ;
    if (TEST_NZ(eax, eax)) goto loc_00282CB4; /* jne: not equal / not zero */

loc_00282C95: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00282CB3: ;
    POP32(esp, ecx);

loc_00282CB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00282CC0
 * Original: 0x00282CC0 - 0x00282E02 (322 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282CC0: ;
    ecx = MEM32(edi + 8);
    eax = ecx;
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_00282DCB; /* je: equal / zero */

loc_00282CD0: ;
    eax--;
    if ((eax == 0)) goto loc_00282D5C; /* je: equal / zero */

loc_00282CD7: ;
    if (CMP_L(ecx, 2)) goto loc_00282DF8; /* jl: less (signed <) */

loc_00282CE0: ;
    if (CMP_G(ecx, 0x21)) goto loc_00282DF8; /* jg: greater (signed >) */

loc_00282CE9: ;
    eax = MEM32(edi + 0xC);
    if (TEST_S(eax, eax)) goto loc_00282DF8; /* jl: less (signed <) */

loc_00282CF4: ;
    esi = MEM32(edi + 0x10);
    if (TEST_S(esi, esi)) goto loc_00282DF8; /* jl: less (signed <) */

loc_00282CFF: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ebx = eax;
    PUSH32(esp, 0); sub_0038F870(); /* call 0x0038F870 */

loc_00282D14: ;
    ecx = eax;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00282DF8; /* je: equal / zero */

loc_00282D24: ;
    if (TEST_Z(ecx, ecx)) goto loc_00282DF8; /* je: equal / zero */

loc_00282D2C: ;
    esi = MEM32(edi + 8);
    eax = esi + -2;
    edx = eax;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, ebp);
    edx = edx & 7;
    ebp = eax;
    (void)0; /* cmp esi, 0x1A - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi, 0x1A)) ? 1 : 0); /* setge */
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038DB60(); /* call 0x0038DB60 */

loc_00282D4E: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esi = edi;
    PUSH32(esp, 0); sub_00282C70(); /* call 0x00282C70 */

loc_00282D59: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00282D5C: ;
    ecx = MEM32(edi + 0xC);
    if (TEST_S(ecx, ecx)) goto loc_00282DF8; /* jl: less (signed <) */

loc_00282D67: ;
    eax = MEM32(edi + 0x10);
    if (TEST_S(eax, eax)) goto loc_00282DF8; /* jl: less (signed <) */

loc_00282D72: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = eax + edx;
    ecx = ecx + edx;
    esi = eax;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00282DF8; /* je: equal / zero */

loc_00282D94: ;
    if (TEST_Z(esi, esi)) goto loc_00282DF8; /* je: equal / zero */

loc_00282D98: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x24)) goto loc_00282DB8; /* je: equal / zero */

loc_00282DA0: ;
    if (CMP_NE(eax, 0x2B)) goto loc_00282DF8; /* jne: not equal / not zero */

loc_00282DA5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002BE870(); /* call 0x002BE870 */

loc_00282DAB: ;
    esp = esp + 4;
    esi = edi;
    PUSH32(esp, 0); sub_00282C70(); /* call 0x00282C70 */

loc_00282DB5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00282DB8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B8C70(); /* call 0x002B8C70 */

loc_00282DBE: ;
    esp = esp + 4;
    esi = edi;
    PUSH32(esp, 0); sub_00282C70(); /* call 0x00282C70 */

loc_00282DC8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00282DCB: ;
    SET_LO8(edx, MEM8(edi + 0x14));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00282DD3: ;
    if (TEST_Z(eax, eax)) goto loc_00282DF8; /* je: equal / zero */

loc_00282DD7: ;
    esi = MEM32(edi + 0xC);
    edx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esi + edx + 0x568);
    esi = esi + edx;
    if (TEST_Z(ecx, ecx)) goto loc_00282DF8; /* je: equal / zero */

loc_00282DF3: ;
    PUSH32(esp, 0); sub_00072560(); /* call 0x00072560 */

loc_00282DF8: ;
    esi = edi;
    PUSH32(esp, 0); sub_00282C70(); /* call 0x00282C70 */

loc_00282DFF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00282E10
 * Original: 0x00282E10 - 0x00282EE4 (212 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282E10(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00282E10: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (TEST_S(eax, eax)) { sub_00282EE4(); return; } /* jl: less (signed <) */

loc_00282E1E: ;
    if (CMP_GE(eax, 0x80)) { sub_00282EE4(); return; } /* jge: greater or equal (signed >=) */

loc_00282E29: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00282E4C; /* jne: not equal / not zero */

loc_00282E43: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00282E4C: ;
    eax = edi;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00282E79; /* je: equal / zero */

loc_00282E53: ;
    eax--;
    if ((eax != 0)) goto loc_00282E97; /* jne: not equal / not zero */

loc_00282E56: ;
    if (TEST_S(esi, esi)) goto loc_00282E43; /* jl: less (signed <) */

loc_00282E5A: ;
    if (CMP_G(esi, 0x80)) goto loc_00282E43; /* jg: greater (signed >) */

loc_00282E62: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(esi + ecx + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00282E43; /* je: equal / zero */

loc_00282E73: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00282E79: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00282E82: ;
    if (TEST_Z(eax, eax)) goto loc_00282E73; /* je: equal / zero */

loc_00282E86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000725A0(); /* call 0x000725A0 */

loc_00282E8C: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00282E43; /* jne: not equal / not zero */

loc_00282E93: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00282E97: ;
    if (CMP_L(edi, 2)) goto loc_00282E43; /* jl: less (signed <) */

loc_00282E9C: ;
    if (CMP_G(edi, 0x21)) goto loc_00282E43; /* jg: greater (signed >) */

loc_00282EA1: ;
    PUSH32(esp, 0); sub_0038F870(); /* call 0x0038F870 */

loc_00282EA6: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00282E73; /* je: equal / zero */

loc_00282EAC: ;
    if (CMP_NE(MEM32(esi + 0x64), 0x35)) goto loc_00282E73; /* jne: not equal / not zero */

loc_00282EB2: ;
    edi = edi + 0xFFFFFFFEu;
    edi = edi & 7;
    if ((edi == 0)) goto loc_00282EC7; /* je: equal / zero */

loc_00282EBA: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_0038EE40(); /* call 0x0038EE40 */

loc_00282EC3: ;
    if (TEST_Z(eax, eax)) goto loc_00282E73; /* je: equal / zero */

loc_00282EC7: ;
    eax = ebx;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_0038EDD0(); /* call 0x0038EDD0 */

loc_00282ED2: ;
    if (TEST_NZ(eax, eax)) goto loc_00282E73; /* jne: not equal / not zero */

loc_00282ED6: ;
    PUSH32(esp, 0); sub_00397960(); /* call 0x00397960 */

loc_00282EDB: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00282EF0
 * Original: 0x00282EF0 - 0x00282F1B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00282EF0: ;
    if (CMP_EQ(eax, 1)) { sub_00282F1B(); return; } /* je: equal / zero */

loc_00282EF5: ;
    if (CMP_L(eax, 2)) goto loc_00282EFF; /* jl: less (signed <) */

loc_00282EFA: ;
    if (CMP_LE(eax, 0x21)) { sub_00282F1B(); return; } /* jle: less or equal (signed <=) */

loc_00282EFF: ;
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00282F08: ;
    if (TEST_Z(eax, eax)) { sub_00282F1B(); return; } /* je: equal / zero */

loc_00282F0C: ;
    if (TEST_Z(MEM8(eax + 0xC8), 1)) { sub_00282F1B(); return; } /* je: equal / zero */

loc_00282F15: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00282F20
 * Original: 0x00282F20 - 0x00282F51 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00282F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00282F20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_L(ebp, 2)) { sub_00282F51(); return; } /* jl: less (signed <) */

loc_00282F2C: ;
    if (CMP_G(ebp, 0x21)) { sub_00282F51(); return; } /* jg: greater (signed >) */

loc_00282F31: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebx = (uint32_t)(int32_t)SMEM16(eax + ecx + 0xAC);
    ebx = ebx | 0x10000;
    MEM32(esp + 8) = ebx;
    g_seh_ebp = ebp; sub_00282F57(); return; /* tail jmp 0x00282F57 */

}

/**
 * sub_00283230
 * Original: 0x00283230 - 0x002832EE (190 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00283230: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00283243; /* jne: not equal / not zero */

loc_0028323E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00283243: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028328B; /* je: equal / zero */

loc_00283269: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0028328B; /* jb: below (unsigned <) */

loc_00283272: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028327C: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00283284: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002832AC; /* jne: not equal / not zero */

loc_0028328B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028329D: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002832A5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002832EE(); return; } /* je: equal / zero */

loc_002832AC: ;
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
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x604198;
    MEM16(eax + 0x44) = LO16(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00283300
 * Original: 0x00283300 - 0x00283343 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283300(void)
{

loc_00283300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283312: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028331C: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283326: ;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283330: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x44);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028333B: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00283350
 * Original: 0x00283350 - 0x002833CC (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00283350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028335F: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00283369; /* je: equal / zero */

loc_00283366: ;
    eax = eax | 0xFFFFFFC0u;

loc_00283369: ;
    PUSH32(esp, 0xA);
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00283373: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00283380; /* je: equal / zero */

loc_0028337B: ;
    eax = eax | 0xFFFFFC00u;

loc_00283380: ;
    PUSH32(esp, 0xA);
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028338A: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 2)) goto loc_00283397; /* je: equal / zero */

loc_00283392: ;
    eax = eax | 0xFFFFFC00u;

loc_00283397: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x3C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002833A1: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002833AD; /* jns: not sign (positive) */

loc_002833A8: ;
    eax = eax | 0xFFFF0000u;

loc_002833AD: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x40) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002833B7: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002833C3; /* jns: not sign (positive) */

loc_002833BE: ;
    eax = eax | 0xFFFF0000u;

loc_002833C3: ;
    MEM16(edi + 0x44) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002833D0
 * Original: 0x002833D0 - 0x00283741 (881 bytes, 281 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002833D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002833D0: ;
    eax = MEM32(0x863D08);
    esp = esp - 0x10;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(eax, 3)) goto loc_00283737; /* jne: not equal / not zero */

loc_002833E4: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028362C; /* je: equal / zero */

loc_002833F4: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00283402: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(eax, eax)) goto loc_00283734; /* je: equal / zero */

loc_0028340E: ;
    ecx = MEM32(ebx + 0x38);
    if (CMP_GE(ecx, 2)) goto loc_00283423; /* jge: greater or equal (signed >=) */

loc_00283416: ;
    edi = MEM32(eax + ecx * 4 + 0xA3C);
    MEM32(esp + 0x14) = edi;
    goto loc_0028342C;

loc_00283423: ;
    ecx = ecx + 0xFFFFFFFEu;
    MEM32(esp + 0x14) = ecx;
    edi = ecx;

loc_0028342C: ;
    ecx = MEM32(ebx + 0x40);
    if (CMP_GE(ecx, 2)) goto loc_00283441; /* jge: greater or equal (signed >=) */

loc_00283434: ;
    esi = MEM32(eax + ecx * 4 + 0xA3C);
    MEM32(esp + 0x10) = esi;
    goto loc_0028344A;

loc_00283441: ;
    ecx = ecx + 0xFFFFFFFEu;
    MEM32(esp + 0x10) = ecx;
    esi = ecx;

loc_0028344A: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00282E10(); /* call 0x00282E10 */

loc_0028345A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00283734; /* je: equal / zero */

loc_00283465: ;
    ebp = MEM32(ebx + 0x34);
    if (CMP_L(ebp, 2)) goto loc_002834F1; /* jl: less (signed <) */

loc_00283471: ;
    if (CMP_G(ebp, 0x21)) goto loc_002834F1; /* jg: greater (signed >) */

loc_00283476: ;
    if (TEST_S(edi, edi)) goto loc_00283734; /* jl: less (signed <) */

loc_0028347E: ;
    if (CMP_GE(edi, 0x10)) goto loc_00283734; /* jge: greater or equal (signed >=) */

loc_00283487: ;
    ecx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + ecx;
    PUSH32(esp, 0); sub_0038F870(); /* call 0x0038F870 */

loc_0028349A: ;
    ecx = eax;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00283500; /* je: equal / zero */

loc_002834A6: ;
    if (TEST_Z(ecx, ecx)) goto loc_00283500; /* je: equal / zero */

loc_002834AA: ;
    eax = ebp;
    eax = eax + 0xFFFFFFFEu;
    edx = eax;
    edx = edx & 7;
    eax = (uint32_t)((int32_t)eax >> 3);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = eax;
    if (TEST_S(edx, edx)) goto loc_00283734; /* jl: less (signed <) */

loc_002834C1: ;
    if (CMP_GE(edx, 8)) goto loc_00283734; /* jge: greater or equal (signed >=) */

loc_002834CA: ;
    if (TEST_S(esi, esi)) goto loc_00283734; /* jl: less (signed <) */

loc_002834D2: ;
    if (CMP_GE(esi, 4)) goto loc_00283734; /* jge: greater or equal (signed >=) */

loc_002834DB: ;
    (void)0; /* cmp ebp, 0x1A - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebp, 0x1A)) ? 1 : 0); /* setge */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0038DB60(); /* call 0x0038DB60 */

loc_002834EC: ;
    esp = esp + 0xC;
    goto loc_00283500;

loc_002834F1: ;
    edx = MEM32(ebx + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00282BB0(); /* call 0x00282BB0 */

loc_002834FD: ;
    esp = esp + 0x10;

loc_00283500: ;
    eax = MEM32(ebx + 0x3C);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00282EF0(); /* call 0x00282EF0 */

loc_0028350E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00283734; /* jne: not equal / not zero */

loc_00283519: ;
    if (CMP_L(esi, 2)) goto loc_0028352B; /* jl: less (signed <) */

loc_0028351E: ;
    if (CMP_G(esi, 0x21)) goto loc_0028352B; /* jg: greater (signed >) */

loc_00283523: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 0x10000;

loc_0028352B: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00283734; /* jle: less or equal (signed <=) */

loc_0028353A: ;
    MEM32(esp + 0x18) = 0x8658A4;

loc_00283542: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00283550; /* jne: not equal / not zero */

loc_0028354B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00283550: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00283598; /* je: equal / zero */

loc_00283576: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_00283598; /* jb: below (unsigned <) */

loc_0028357F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00283589: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00283591: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002835B9; /* jne: not equal / not zero */

loc_00283598: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002835AA: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002835B2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002835C2; /* je: equal / zero */

loc_002835B9: ;
    PUSH32(esp, 0); sub_0027D1F0(); /* call 0x0027D1F0 */

loc_002835BE: ;
    esi = eax;
    goto loc_002835C4;

loc_002835C2: ;
    esi = 0; /* xor self */

loc_002835C4: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x9D8));
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_002835EB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002835F7: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00283605: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    edi = edi + 0xA50;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(ebp, ecx)) goto loc_00283542; /* jl: less (signed <) */

loc_0028361F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0028362C: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebx + 0x44));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028363C: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_002836D8; /* jne: not equal / not zero */

loc_00283646: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028365A; /* je: equal / zero */

loc_0028364F: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_0028365D; /* jne: not equal / not zero */

loc_0028365A: ;
    eax = eax | 0xFFFFFFFFu;

loc_0028365D: ;
    if (CMP_NE(LO16(eax), LO16(edi))) goto loc_00283734; /* jne: not equal / not zero */

loc_00283666: ;
    eax = MEM32(ebx + 0x38);
    if (CMP_GE(eax, 2)) goto loc_00283677; /* jge: greater or equal (signed >=) */

loc_0028366E: ;
    PUSH32(esp, 0); sub_00289430(); /* call 0x00289430 */

loc_00283673: ;
    ecx = eax;
    goto loc_0028367A;

loc_00283677: ;
    ecx = eax + -2;

loc_0028367A: ;
    eax = MEM32(ebx + 0x40);
    if (CMP_GE(eax, 2)) goto loc_00283689; /* jge: greater or equal (signed >=) */

loc_00283682: ;
    PUSH32(esp, 0); sub_00289430(); /* call 0x00289430 */

loc_00283687: ;
    goto loc_0028368C;

loc_00283689: ;
    eax = eax + 0xFFFFFFFEu;

loc_0028368C: ;
    edx = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00282BB0(); /* call 0x00282BB0 */

loc_0028369B: ;
    eax = MEM32(ebx + 0x34);
    esp = esp + 0x10;
    if (CMP_L(eax, 0x1A)) goto loc_00283734; /* jl: less (signed <) */

loc_002836AA: ;
    if (CMP_G(eax, 0x21)) goto loc_00283734; /* jg: greater (signed >) */

loc_002836B3: ;
    ebx = MEM32(ebx + 0x38);
    if (TEST_S(ebx, ebx)) goto loc_00283734; /* jl: less (signed <) */

loc_002836BA: ;
    if (CMP_GE(ebx, 2)) goto loc_00283734; /* jge: greater or equal (signed >=) */

loc_002836BF: ;
    eax = ebx;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296470(); /* call 0x00296470 */

loc_002836CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002836D8: ;
    edi = MEM32(ebx + 0x38);
    if (CMP_GE(edi, 2)) goto loc_002836FA; /* jge: greater or equal (signed >=) */

loc_002836E0: ;
    edx = esi + 0xA38;
    eax = edi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_002836ED: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00283734; /* je: equal / zero */

loc_002836F1: ;
    ebp = MEM32(esi + edi * 4 + 0xA3C);
    goto loc_002836FD;

loc_002836FA: ;
    ebp = edi + -2;

loc_002836FD: ;
    edi = MEM32(ebx + 0x40);
    if (CMP_GE(edi, 2)) goto loc_0028371F; /* jge: greater or equal (signed >=) */

loc_00283705: ;
    edx = esi + 0xA38;
    eax = edi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_00283712: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00283734; /* je: equal / zero */

loc_00283716: ;
    esi = MEM32(esi + edi * 4 + 0xA3C);
    goto loc_00283722;

loc_0028371F: ;
    esi = edi + -2;

loc_00283722: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00282BB0(); /* call 0x00282BB0 */

loc_00283731: ;
    esp = esp + 0x10;

loc_00283734: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00283737: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00283750
 * Original: 0x00283750 - 0x002837FA (170 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00283750: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x18));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x38) = 0xFFFFFFFFu;
    if (CMP_GE(eax, edi)) goto loc_002837CD; /* jge: greater or equal (signed >=) */

loc_0028377E: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00283793; /* je: equal / zero */

loc_00283787: ;
    ecx = MEM32(0x86E9A0);
    if (CMP_NE(LO16(ecx), 0xFFFFFFFEu)) goto loc_00283796; /* jne: not equal / not zero */

loc_00283793: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_00283796: ;
    if (CMP_NE(LO16(ebx), LO16(ecx))) goto loc_002837A7; /* jne: not equal / not zero */

loc_0028379B: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x849894);
    MEM32(esi + 0x38) = edx;
    goto loc_002837D3;

loc_002837A7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = eax + MEM32(0x84A5F8);
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_002837BD: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002837D3; /* je: equal / zero */

loc_002837C4: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x38) = edx;
    goto loc_002837D3;

loc_002837CD: ;
    eax = eax + 2;
    MEM32(esi + 0x38) = eax;

loc_002837D3: ;
    eax = MEM32(esp + 0x1C);
    (void)0; /* test eax, 0x10000 - flags set for next jcc */
    MEM32(esi + 0x40) = 0xFFFFFFFFu;
    if (TEST_Z(eax, 0x10000)) { sub_002837FA(); return; } /* je: equal / zero */

loc_002837E5: ;
    eax = eax & 0xFFFF;
    eax = eax + 2;
    MEM32(esi + 0x40) = eax;
    POP32(esp, edi);
    MEM16(esi + 0x44) = LO16(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00283860
 * Original: 0x00283860 - 0x00283960 (256 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00283860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    SET_LO8(edx, 0); /* xor self */
    MEM8(ecx + 0x34) = LO8(edx);
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x31C);
    MEM32(ecx + 0x3C) = esi;
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x320);
    MEM32(ecx + 0x40) = esi;
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x324);
    MEM32(ecx + 0x44) = esi;
    esi = MEM32(eax + 0x568);
    SET_LO16(esi, MEM16(esi + 0x316));
    MEM16(ecx + 0x54) = LO16(esi);
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x318);
    MEM32(ecx + 0x48) = esi;
    esi = MEM32(eax + 0x568);
    esi = MEM32(esi + 0x328);
    MEM32(ecx + 0x4C) = esi;
    esi = MEM32(eax + 0x568);
    SET_LO16(esi, MEM16(esi + 0x32C));
    MEM16(ecx + 0x56) = LO16(esi);
    eax = MEM32(eax + 0x568);
    eax = MEM32(eax + 0x330);
    (void)0; /* cmp eax, 0x60728B5 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_A(eax, 0x60728B5)) goto loc_0028392E; /* ja: above (unsigned >) */

loc_002838EB: ;
    if (CMP_EQ(eax, 0x60728B5)) goto loc_00283927; /* je: equal / zero */

loc_002838ED: ;
    if (CMP_A(eax, 0x425DAB5)) goto loc_00283919; /* ja: above (unsigned >) */

loc_002838F4: ;
    if (CMP_EQ(eax, 0x425DAB5)) goto loc_00283912; /* je: equal / zero */

loc_002838F6: ;
    if (CMP_EQ(eax, 0xDEF7B5)) goto loc_0028390B; /* je: equal / zero */

loc_002838FD: ;
    if (CMP_NE(eax, 0x3397E15)) goto loc_0028395A; /* jne: not equal / not zero */

loc_00283904: ;
    MEM8(ecx + 0x36) = 7;
    esp += 8; return; /* ret 4 */

loc_0028390B: ;
    MEM8(ecx + 0x36) = 4;
    esp += 8; return; /* ret 4 */

loc_00283912: ;
    MEM8(ecx + 0x36) = 1;
    esp += 8; return; /* ret 4 */

loc_00283919: ;
    if (CMP_NE(eax, 0x4CE50B5)) goto loc_0028395A; /* jne: not equal / not zero */

loc_00283920: ;
    MEM8(ecx + 0x36) = 2;
    esp += 8; return; /* ret 4 */

loc_00283927: ;
    MEM8(ecx + 0x36) = 8;
    esp += 8; return; /* ret 4 */

loc_0028392E: ;
    if (CMP_A(eax, 0xE8C47C5)) goto loc_00283953; /* ja: above (unsigned >) */

loc_00283935: ;
    if (CMP_EQ(eax, 0xE8C47C5)) goto loc_0028395A; /* je: equal / zero */

loc_00283937: ;
    if (CMP_EQ(eax, 0x6E46F85)) goto loc_0028394C; /* je: equal / zero */

loc_0028393E: ;
    if (CMP_NE(eax, 0x92187C5)) goto loc_0028395A; /* jne: not equal / not zero */

loc_00283945: ;
    MEM8(ecx + 0x36) = 3;
    esp += 8; return; /* ret 4 */

loc_0028394C: ;
    MEM8(ecx + 0x36) = 5;
    esp += 8; return; /* ret 4 */

loc_00283953: ;
    if (CMP_EQ(eax, 0xEE7C2C5)) { sub_00283960(); return; } /* je: equal / zero */

loc_0028395A: ;
    MEM8(ecx + 0x36) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00283970
 * Original: 0x00283970 - 0x002839BC (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283970(void)
{

loc_00283970: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x34) = 1;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x37) = LO8(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x10;
    edi = MEM32(edx);
    esi = ecx + 0x3C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(ecx + 0x54) = LO16(edx);
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x48) = edx;
    SET_LO8(edx, MEM8(eax + 0xC));
    MEM8(ecx + 0x36) = LO8(edx);
    SET_LO16(eax, MEM16(eax + 0x1E));
    POP32(esp, edi);
    MEM16(ecx + 0x56) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002839C0
 * Original: 0x002839C0 - 0x00283A9C (220 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002839C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002839C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x1C));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(LO8(eax), 0xFF)) goto loc_002839E2; /* jle: less or equal (signed <=) */

loc_002839D2: ;
    esi = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + eax;

loc_002839E2: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_002839EA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(edi + 0x34) = 3;
    MEM16(edi + 0x38) = 0xFFFE;
    MEM8(edi + 0x3A) = 0;
    SET_LO8(ecx, MEM8(ebx));
    MEM8(edi + 0x37) = LO8(ecx);
    if (TEST_Z(esi, esi)) goto loc_00283A96; /* je: equal / zero */

loc_00283A05: ;
    eax = MEM32(esi + 0x64);
    ebx = 1;
    if (CMP_NE(eax, ebx)) goto loc_00283A87; /* jne: not equal / not zero */

loc_00283A11: ;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_00283A16: ;
    if (TEST_NZ(eax, eax)) goto loc_00283A45; /* jne: not equal / not zero */

loc_00283A1A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_00283A26: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00283A96; /* je: equal / zero */

loc_00283A2D: ;
    SET_LO16(eax, MEM16(eax + 0x9D8));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM16(edi + 0x38) = LO16(eax);
    MEM8(edi + 0x3A) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00283A45: ;
    eax = ZX16(MEM16(esi + 0x60));
    if (TEST_S(eax, eax)) goto loc_00283A61; /* jl: less (signed <) */

loc_00283A4D: ;
    if (CMP_GE(eax, 2)) goto loc_00283A61; /* jge: greater or equal (signed >=) */

loc_00283A52: ;
    SET_LO8(eax, MEM8(eax + 0x862CCB));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00283A61; /* je: equal / zero */

loc_00283A5C: ;
    ecx = SX8(LO8(eax));
    goto loc_00283A64;

loc_00283A61: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_00283A64: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_00283A77; /* je: equal / zero */

loc_00283A6C: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00283A7A; /* jne: not equal / not zero */

loc_00283A77: ;
    eax = eax | 0xFFFFFFFFu;

loc_00283A7A: ;
    MEM16(edi + 0x38) = LO16(eax);
    MEM8(edi + 0x3A) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00283A87: ;
    SET_LO16(edx, MEM16(esi + 0xAC));
    MEM16(edi + 0x38) = LO16(edx);
    MEM8(edi + 0x3A) = 0xFF;

loc_00283A96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00283AA0
 * Original: 0x00283AA0 - 0x00283B55 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00283AA0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00283AB3; /* jne: not equal / not zero */

loc_00283AAE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00283AB3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00283AFB; /* je: equal / zero */

loc_00283AD9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x58)) goto loc_00283AFB; /* jb: below (unsigned <) */

loc_00283AE2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00283AEC: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00283AF4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00283B1C; /* jne: not equal / not zero */

loc_00283AFB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00283B0D: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00283B15: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00283B55(); return; } /* je: equal / zero */

loc_00283B1C: ;
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
    MEM8(eax + 0x35) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604208;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00283B60
 * Original: 0x00283B60 - 0x00283C7F (287 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00283B60(void)
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

loc_00283B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283B73: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x56);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283B7E: ;
    eax = ZX8(MEM8(edi + 0x34));
    esp = esp + 8;
    if (CMP_A(eax, 0xD)) goto loc_00283C14; /* ja: above (unsigned >) */

loc_00283B8E: ;
    eax = ZX8(MEM8(eax + 0x283C90));
    { uint32_t _jt = MEM32(eax * 4 + 0x283C80); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00283B9Cu) goto loc_00283B9C;
    if (_jt == 0x00283BBAu) goto loc_00283BBA;
    if (_jt == 0x00283BD5u) goto loc_00283BD5;
    if (_jt == 0x00283BF0u) goto loc_00283BF0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00283B9C: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x55);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BA7: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x36);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BB2: ;
    eax = ZX8(MEM8(edi + 0x37));
    PUSH32(esp, 1);
    goto loc_00283C0C;

loc_00283BBA: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x55);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BC5: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x36);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BD0: ;
    esp = esp + 8;
    goto loc_00283C14;

loc_00283BD5: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x36);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BE0: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x55);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BEB: ;
    esp = esp + 8;
    goto loc_00283C14;

loc_00283BF0: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x38);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283BFB: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C06: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x55);
    PUSH32(esp, 8);

loc_00283C0C: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C11: ;
    esp = esp + 0xC;

loc_00283C14: ;
    ecx = (int32_t)MEMF(edi + 0x3C); /* cvttss2si */
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) >> 1));
    eax = SX16(LO16(ecx));
    PUSH32(esp, 0xF);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C26: ;
    edx = (int32_t)MEMF(edi + 0x40); /* cvttss2si */
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) >> 1));
    eax = SX16(LO16(edx));
    PUSH32(esp, 0xF);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C38: ;
    eax = (int32_t)MEMF(edi + 0x44); /* cvttss2si */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) >> 1));
    eax = SX16(LO16(eax));
    PUSH32(esp, 0xF);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C4A: ;
    PUSH32(esp, 0x10);
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edi + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00283C63: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C6B: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00283C72: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00283C77: ;
    esp = esp + 0x14;
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
 * sub_00284410
 * Original: 0x00284410 - 0x002846EB (731 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284410: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_L(eax, ebx)) goto loc_002846E9; /* jl: less (signed <) */

loc_0028441F: ;
    if (CMP_GE(eax, 2)) goto loc_002846E9; /* jge: greater or equal (signed >=) */

loc_00284428: ;
    SET_LO8(eax, MEM8(eax + 0x862CCB));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_002846E9; /* je: equal / zero */

loc_00284436: ;
    eax = SX8(LO8(eax));
    if (CMP_L(eax, ebx)) goto loc_002846E9; /* jl: less (signed <) */

loc_00284441: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    PUSH32(esp, ebp);
    ebp = eax;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002846E8; /* je: equal / zero */

loc_00284460: ;
    (void)0; /* cmp MEM8(eax + 0x314), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM8(eax + 0x314), LO8(ebx))) goto loc_0028452F; /* je: equal / zero */

loc_0028446E: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028447B; /* jne: not equal / not zero */

loc_00284476: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028447B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002844C3; /* je: equal / zero */

loc_002844A1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x58)) goto loc_002844C3; /* jb: below (unsigned <) */

loc_002844AA: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002844B4: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002844BC: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002844E4; /* jne: not equal / not zero */

loc_002844C3: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002844D5: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002844DD: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002844ED; /* je: equal / zero */

loc_002844E4: ;
    PUSH32(esp, 0); sub_0027D2C0(); /* call 0x0027D2C0 */

loc_002844E9: ;
    esi = eax;
    goto loc_002844EF;

loc_002844ED: ;
    esi = 0; /* xor self */

loc_002844EF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_002844F7: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_NE(MEM8(ecx + 0x314), 2)) goto loc_0028450A; /* jne: not equal / not zero */

loc_00284506: ;
    MEM8(esi + 0x34) = 2;

loc_0028450A: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x35) = LO8(edx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028451D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028452F: ;
    eax = MEM32(ebp + 0x568);
    edi = MEM32(eax + 0x368);
    if (CMP_EQ(edi, ebx)) goto loc_002846E6; /* je: equal / zero */

loc_00284543: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00284550; /* jne: not equal / not zero */

loc_0028454B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00284550: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00284598; /* je: equal / zero */

loc_00284576: ;
    if (CMP_B(MEM32(esi + 0x80), 0x58)) goto loc_00284598; /* jb: below (unsigned <) */

loc_0028457F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00284589: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00284591: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002845B9; /* jne: not equal / not zero */

loc_00284598: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002845AA: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002845B2: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002845F2; /* je: equal / zero */

loc_002845B9: ;
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
    MEM32(eax) = 0x604208;
    MEM8(eax + 0x34) = LO8(ebx);
    MEM8(eax + 0x35) = LO8(ebx);
    esi = eax;
    goto loc_002845F4;

loc_002845F2: ;
    esi = 0; /* xor self */

loc_002845F4: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xC);
    eax = eax + 0xFFFFFFFCu;
    if (CMP_A(eax, 0x22)) goto loc_002846AE; /* ja: above (unsigned >) */

loc_00284604: ;
    ecx = ZX8(MEM8(eax + 0x28471C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2846EC); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00284612u) goto loc_00284612;
    if (_jt == 0x0028461Fu) goto loc_0028461F;
    if (_jt == 0x00284630u) goto loc_00284630;
    if (_jt == 0x0028463Eu) goto loc_0028463E;
    if (_jt == 0x0028464Cu) goto loc_0028464C;
    if (_jt == 0x0028465Au) goto loc_0028465A;
    if (_jt == 0x00284668u) goto loc_00284668;
    if (_jt == 0x00284676u) goto loc_00284676;
    if (_jt == 0x00284684u) goto loc_00284684;
    if (_jt == 0x00284692u) goto loc_00284692;
    if (_jt == 0x002846A0u) goto loc_002846A0;
    if (_jt == 0x002846AEu) goto loc_002846AE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00284612: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x70), _icall_esp); /* indirect call */
    }

loc_0028461A: ;
    goto loc_002846B6;

loc_0028461F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_00284627: ;
    MEM8(esi + 0x34) = 4;
    goto loc_002846B6;

loc_00284630: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x6C), _icall_esp); /* indirect call */
    }

loc_00284638: ;
    MEM8(esi + 0x34) = 5;
    goto loc_002846B6;

loc_0028463E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_00284646: ;
    MEM8(esi + 0x34) = 6;
    goto loc_002846B6;

loc_0028464C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x6C), _icall_esp); /* indirect call */
    }

loc_00284654: ;
    MEM8(esi + 0x34) = 7;
    goto loc_002846B6;

loc_0028465A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x70), _icall_esp); /* indirect call */
    }

loc_00284662: ;
    MEM8(esi + 0x34) = 8;
    goto loc_002846B6;

loc_00284668: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x6C), _icall_esp); /* indirect call */
    }

loc_00284670: ;
    MEM8(esi + 0x34) = 9;
    goto loc_002846B6;

loc_00284676: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x70), _icall_esp); /* indirect call */
    }

loc_0028467E: ;
    MEM8(esi + 0x34) = 0xA;
    goto loc_002846B6;

loc_00284684: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x70), _icall_esp); /* indirect call */
    }

loc_0028468C: ;
    MEM8(esi + 0x34) = 0xB;
    goto loc_002846B6;

loc_00284692: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x70), _icall_esp); /* indirect call */
    }

loc_0028469A: ;
    MEM8(esi + 0x34) = 0xC;
    goto loc_002846B6;

loc_002846A0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x70), _icall_esp); /* indirect call */
    }

loc_002846A8: ;
    MEM8(esi + 0x34) = 0xD;
    goto loc_002846B6;

loc_002846AE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_002846B6: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x35) = LO8(ecx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002846C9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002846DB: ;
    edi = MEM32(edi + 0x20);
    if (CMP_NE(edi, ebx)) goto loc_00284543; /* jne: not equal / not zero */

loc_002846E6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002846E8: ;
    POP32(esp, ebp);

loc_002846E9: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00284740
 * Original: 0x00284740 - 0x002847A8 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284740: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x314) = 0;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x368);
    if (TEST_Z(esi, esi)) { sub_002847A8(); return; } /* je: equal / zero */

loc_00284763: ;
    PUSH32(esp, edi);

loc_00284764: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0028476D: ;
    if (TEST_NZ(eax, eax)) goto loc_00284792; /* jne: not equal / not zero */

loc_00284771: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0028478F: ;
    esp = esp + 4;

loc_00284792: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00284764; /* jne: not equal / not zero */

loc_00284798: ;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x368) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002847C0
 * Original: 0x002847C0 - 0x00284872 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002847C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002847C0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002847D3; /* jne: not equal / not zero */

loc_002847CE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002847D3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028481B; /* je: equal / zero */

loc_002847F9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0028481B; /* jb: below (unsigned <) */

loc_00284802: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028480C: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00284814: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028483C; /* jne: not equal / not zero */

loc_0028481B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028482D: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00284835: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00284872(); return; } /* je: equal / zero */

loc_0028483C: ;
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
    MEM8(eax + 0x40) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604280;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00284880
 * Original: 0x00284880 - 0x002848BC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284880(void)
{
    int _flags = 0; /* fallback flag var */

loc_00284880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x40);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00284893: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002848AA; /* jne: not equal / not zero */

loc_0028489D: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002848A7: ;
    esp = esp + 4;

loc_002848AA: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002848B4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002848C0
 * Original: 0x002848C0 - 0x00284901 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002848C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002848C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002848CF: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x40) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002848E6; /* jne: not equal / not zero */

loc_002848D9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002848E0: ;
    esp = esp + 4;
    MEM32(edi + 0x38) = eax;

loc_002848E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002848ED: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002848F9; /* jns: not sign (positive) */

loc_002848F4: ;
    eax = eax | 0xFFFF0000u;

loc_002848F9: ;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00284910
 * Original: 0x00284910 - 0x00284A1E (270 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284910: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00284922: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00284A16; /* je: equal / zero */

loc_0028492C: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x3C);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_00284938: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00284A15; /* je: equal / zero */

loc_00284942: ;
    ecx = edi;
    PUSH32(esp, 0); sub_003B8010(); /* call 0x003B8010 */

loc_00284949: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00284A15; /* je: equal / zero */

loc_00284951: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x570);
    if (TEST_Z(esi, esi)) goto loc_00284A14; /* je: equal / zero */

loc_00284960: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_00284967: ;
    if (TEST_Z(eax, eax)) goto loc_00284A14; /* je: equal / zero */

loc_0028496F: ;
    SET_LO8(eax, MEM8(ebx + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002849D4; /* je: equal / zero */

loc_00284976: ;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00284A14; /* jle: less or equal (signed <=) */

loc_0028497C: ;
    if (CMP_G(LO8(eax), 2)) goto loc_00284A14; /* jg: greater (signed >) */

loc_00284984: ;
    SET_LO8(ecx, MEM8(edi + 0x251));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00284A14; /* je: equal / zero */

loc_00284992: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_002849A2: ;
    eax = ZX8(MEM8(edi + 0x251));
    edx = ZX16(MEM16(edi + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, edx);
    edx = eax + ecx + -1744;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_002849C7: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002849D4: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_002849D9: ;
    esi = eax;
    PUSH32(esp, 0); sub_00266A00(); /* call 0x00266A00 */

loc_002849E0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00284A14; /* je: equal / zero */

loc_002849E4: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00284A14; /* jne: not equal / not zero */

loc_002849EE: ;
    eax = MEM32(ebx + 0x38);
    ecx = ebp + 0xA38;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_002849FC: ;
    ecx = MEM32(eax + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edi;
    MEMF(ecx + 0x664) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EA150(); /* call 0x002EA150 */

loc_00284A14: ;
    POP32(esp, esi);

loc_00284A15: ;
    POP32(esp, edi);

loc_00284A16: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00284A20
 * Original: 0x00284A20 - 0x00284ACF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00284A20: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00284A33; /* jne: not equal / not zero */

loc_00284A2E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00284A33: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00284A7B; /* je: equal / zero */

loc_00284A59: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00284A7B; /* jb: below (unsigned <) */

loc_00284A62: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00284A6C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00284A74: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00284A9C; /* jne: not equal / not zero */

loc_00284A7B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00284A8D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00284A95: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00284ACF(); return; } /* je: equal / zero */

loc_00284A9C: ;
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
    MEM32(eax) = 0x5F6A20;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00284AE0
 * Original: 0x00284AE0 - 0x00284B0F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284AE0(void)
{

loc_00284AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00284AF3: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x35);
    eax = eax << 6;
    eax = MEM32(eax + 0x777EFC);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00284B07: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00284B10
 * Original: 0x00284B10 - 0x00284B57 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00284B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00284B1F: ;
    PUSH32(esp, 0x20);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00284B29: ;
    esi = MEM32(0x777EC4);
    esp = esp + 8;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00284B4C; /* jle: less or equal (signed <=) */

loc_00284B38: ;
    edx = 0x777EFC;
    /* nop */

loc_00284B40: ;
    if (CMP_EQ(MEM32(edx), eax)) { sub_00284B57(); return; } /* je: equal / zero */

loc_00284B44: ;
    ecx++;
    edx = edx + 0x40;
    if (CMP_L(ecx, esi)) goto loc_00284B40; /* jl: less (signed <) */

loc_00284B4C: ;
    eax = eax | 0xFFFFFFFFu;
    MEM8(edi + 0x35) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00284B60
 * Original: 0x00284B60 - 0x00284C6D (269 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00284B72: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00284C65; /* je: equal / zero */

loc_00284B7C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00284C6A; /* je: equal / zero */

loc_00284B8E: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    SET_LO8(edx, MEM8(esi + 0x758));
    eax = eax << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_00284C65; /* je: equal / zero */

loc_00284BA2: ;
    if (TEST_S(ecx, ecx)) goto loc_00284C65; /* jl: less (signed <) */

loc_00284BAA: ;
    if (CMP_GE(ecx, 2)) goto loc_00284C65; /* jge: greater or equal (signed >=) */

loc_00284BB3: ;
    PUSH32(esp, ebx);
    (void)0; /* cmp MEM32(esi + ecx * 4 + 0xA3C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(esi + ecx * 4 + 0xA3C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00284C64; /* je: equal / zero */

loc_00284BC7: ;
    if (TEST_Z(MEM8(esi + 0x75B), LO8(eax))) goto loc_00284C64; /* je: equal / zero */

loc_00284BD3: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    SET_LO8(ebx, MEM8(ecx + esi + 0x76C));
    SET_LO8(edx, MEM8(edi + 0x35));
    MEM8(ecx + esi + 0x76C) = LO8(edx);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x75B));
    PUSH32(esp, ebp);
    edx = SX8(LO8(ebx));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esi + 0x75B) = LO8(ecx);
    ebp = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    ecx = ZX8(MEM8(esi + ebp + 0x76C));
    if (CMP_EQ(ecx, edx)) goto loc_00284C41; /* je: equal / zero */

loc_00284C0E: ;
    PUSH32(esp, 1);
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_00292E10(); /* call 0x00292E10 */

loc_00284C19: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00284C41; /* je: equal / zero */

loc_00284C20: ;
    edi = (uint32_t)(int32_t)SMEM8(edi + 0x35);
    ebx = MEM32(esi + ebp * 4 + 0xA3C);
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_00284C30: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(0x862E58) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00284C41: ;
    ecx = ebp;
    SET_LO8(eax, 1);
    MEM8(esi + ebp + 0x76C) = LO8(ebx);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x75B));
    POP32(esp, ebp);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esi + 0x75B) = LO8(ecx);
    MEM8(0x862E58) = 1;

loc_00284C64: ;
    POP32(esp, ebx);

loc_00284C65: ;
    eax = 1;

loc_00284C6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00284C70
 * Original: 0x00284C70 - 0x00284D4A (218 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284C70: ;
    if (TEST_S(ebx, ebx)) goto loc_00284D49; /* jl: less (signed <) */

loc_00284C78: ;
    if (CMP_GE(ebx, 0x10)) goto loc_00284D49; /* jge: greater or equal (signed >=) */

loc_00284C81: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = MEM32(esi + ecx + 0x568);
    esi = esi + ecx;
    if (TEST_Z(eax, eax)) goto loc_00284D48; /* je: equal / zero */

loc_00284CA1: ;
    ecx = MEM32(ebx * 4 + 0x800408);
    MEM32(eax + 0x640) = ecx;
    edx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00284CF3; /* je: equal / zero */

loc_00284CBD: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x46)) goto loc_00284CF3; /* je: equal / zero */

loc_00284CC7: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_00284CF3; /* je: equal / zero */

loc_00284CCC: ;
    if (CMP_EQ(eax, 0x47)) goto loc_00284CF3; /* je: equal / zero */

loc_00284CD1: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F06F0(); /* call 0x002F06F0 */

loc_00284CE3: ;
    eax = MEM32(esi + 0x568);
    esp = esp + 0x14;
    MEM8(eax + 0x661) = 1;

loc_00284CF3: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = edi;
    if (CMP_GE(edi & edi, 0)) goto loc_00284CFB; /* jge: greater or equal (signed >=) */

loc_00284CF9: ;
    eax = 0; /* xor self */

loc_00284CFB: ;
    eax = eax << 6;
    eax = eax + 0x777ED0;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx * 4 + 0x800408) = eax;
    eax = edi;
    if (CMP_GE(edi & edi, 0)) goto loc_00284D12; /* jge: greater or equal (signed >=) */

loc_00284D10: ;
    eax = 0; /* xor self */

loc_00284D12: ;
    eax = eax << 6;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x777EE0));
    MEM8(ebx + 0x800488) = LO8(ecx);
    eax = edi;
    if (CMP_GE(edi & edi, 0)) goto loc_00284D29; /* jge: greater or equal (signed >=) */

loc_00284D27: ;
    eax = 0; /* xor self */

loc_00284D29: ;
    eax = eax << 6;
    edx = MEM32(eax + 0x777F04);
    eax = ebx;
    MEM32(ebx * 4 + 0x800448) = edx;
    PUSH32(esp, 0); sub_0032D230(); /* call 0x0032D230 */

loc_00284D40: ;
    eax = ebx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002B4F70(); return; /* tail jmp 0x002B4F70 */

loc_00284D48: ;
    POP32(esp, esi);

loc_00284D49: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00284D50
 * Original: 0x00284D50 - 0x00284DB3 (99 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284D50(void)
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

loc_00284D50: ;
    esp = esp - 8;
    xmm0 = MEMF(0x7FA210); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00284D65: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00284D9D; /* jnp: not parity */

loc_00284D7B: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(0x649888); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x20); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_00284D9D; /* ja: above (unsigned >) */

loc_00284D98: ;
    MEMF(esp) = xmm0; /* movss */

loc_00284D9D: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(esp); /* divss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00284DC0
 * Original: 0x00284DC0 - 0x00284EE9 (297 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00284DC0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00284DC0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi);
    edx = esi + 0x10;
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(edx + 8) = edi;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x78); /* subss */
    eax = MEM32(eax + 8);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x7C); /* subss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x80); /* subss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = eax;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(esp + 0x1C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(0x648D18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00284E7B; /* jbe: below or equal (unsigned <=) */

loc_00284E66: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_00284E7B: ;
    xmm0 = MEMF(0x7FA210); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00284E8E: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00284ED2; /* jnp: not parity */

loc_00284EB2: ;
    xmm2 = MEMF(0x649888); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x20); /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00284ECC; /* jbe: below or equal (unsigned <=) */

loc_00284EC7: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00284EDD;

loc_00284ECC: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00284ED2: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_00284EE9(); return; } /* ja: above (unsigned >) */

loc_00284EDD: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00284EE9(); return; } /* jne: not equal / not zero */

loc_00284EE5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00284EEE(); return; /* tail jmp 0x00284EEE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00285000
 * Original: 0x00285000 - 0x0028505D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285000(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00285000: ;
    PUSH32(esp, ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285059; /* je: equal / zero */

loc_00285005: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00285012: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00285020: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0028503C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0028504C; /* jge: greater or equal (signed >=) */

loc_00285046: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0028504C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 8);
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */

loc_00285059: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00285060
 * Original: 0x00285060 - 0x00285154 (244 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285060(void)
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

loc_00285060: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0028506E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    xmm0 = MEMF(0x649888); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0028509A; /* jnp: not parity */

loc_00285092: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x1C); /* subss */

loc_0028509A: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x1C) = xmm1; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00285154(); return; } /* jne: not equal / not zero */

loc_002850AA: ;
    xmm1 = xmm1 - MEMF(esi + 0x24); /* subss */
    xmm2 = MEMF(0x648D80); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) { sub_00285154(); return; } /* ja: above (unsigned >) */

loc_002850C0: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0xC) = eax;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(edi + 0x80) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00285196(); return; /* tail jmp 0x00285196 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002851E0
 * Original: 0x002851E0 - 0x00285221 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002851E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002851E0: ;
    if (CMP_NE(MEM32(esi + 0x30), 0xFFFFFFFFu)) goto loc_00285220; /* jne: not equal / not zero */

loc_002851E6: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002851F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00285201: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0028521D: ;
    MEM32(esi + 0x30) = eax;

loc_00285220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00285230
 * Original: 0x00285230 - 0x00285289 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285230(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00285230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00285241: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0028524F: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0028526B: ;
    eax = eax - MEM32(esi + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00285280; /* jge: greater or equal (signed >=) */

loc_0028527A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00285280: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
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
 * sub_00285290
 * Original: 0x00285290 - 0x002852CA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285290(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00285290: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(ecx) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002852CA(); return; } /* jp: parity */

loc_0028529D: ;
    xmm0 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002852CA(); return; } /* jp: parity */

loc_002852AC: ;
    xmm0 = MEMF(edx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002852CA(); return; } /* jp: parity */

loc_002852BB: ;
    eax = 1;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_002852E0
 * Original: 0x002852E0 - 0x00285312 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002852E0(void)
{

loc_002852E0: ;
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
    MEM32(eax) = 0x6046A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00285320
 * Original: 0x00285320 - 0x00285326 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285320(void)
{

loc_00285320: ;
    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_00285330
 * Original: 0x00285330 - 0x00285437 (263 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285330: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0028533F: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_00285346: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00285437(); return; } /* je: equal / zero */

loc_0028534E: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00285346; /* jl: less (signed <) */

loc_0028535A: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(ebx + 0x51));
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x50);
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ebx + 0x4E));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x604998);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0028538D: ;
    SET_LO8(ecx, MEM8(ebx + 0x4C));
    esp = esp + 0x24;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00285430; /* jle: less or equal (signed <=) */

loc_002853A3: ;
    ebx = ebx + 0xC0;
    PUSH32(esp, ebp);
    /* nop */

loc_002853B0: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0028542F; /* jle: less or equal (signed <=) */

loc_002853B4: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + -44);
    PUSH32(esp, edx);
    edi = edi - eax;
    PUSH32(esp, 0x604984);
    esi = esi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002853C9: ;
    SET_LO8(ecx, MEM8(ebx));
    esp = esp + 0x10;
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_002853F8; /* jle: less or equal (signed <=) */

loc_002853D4: ;
    if (CMP_LE(eax & eax, 0)) goto loc_002853F8; /* jle: less or equal (signed <=) */

loc_002853D8: ;
    PUSH32(esp, 0x5F224C);
    edi = edi - eax;
    PUSH32(esp, 0x5F7650);
    esi = esi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002853ED: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    esp = esp + 0x10;
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_002853D4; /* jl: less (signed <) */

loc_002853F8: ;
    edx = ZX8(MEM8(ebx + 1));
    esi = esi + eax;
    edi = edi - eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x604960);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00285411: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x30);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x4C);
    esp = esp + 0x14;
    ecx++;
    ebx = ebx + 0x80;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(ecx, edx)) goto loc_002853B0; /* jl: less (signed <) */

loc_0028542F: ;
    POP32(esp, ebp);

loc_00285430: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00285450
 * Original: 0x00285450 - 0x0028548D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285450(void)
{

loc_00285450: ;
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
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600AF8;
    MEM16(eax + 0x34) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00285490
 * Original: 0x00285490 - 0x002858B6 (1062 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285490(void)
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

loc_00285490: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002858B2; /* je: equal / zero */

loc_002854A0: ;
    SET_LO8(eax, MEM8(0x86ECD8));
    MEM8(esp) = LO8(eax);
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM8(0x86ECD8) = 0;
    if (CMP_NE(eax, 2)) goto loc_002854BE; /* jne: not equal / not zero */

loc_002854BA: ;
    SET_LO8(ebx, 1);
    goto loc_002854D7;

loc_002854BE: ;
    if (CMP_EQ(eax, 1)) goto loc_002854D5; /* je: equal / zero */

loc_002854C3: ;
    if (CMP_NE(eax, 3)) goto loc_002854D5; /* jne: not equal / not zero */

loc_002854C8: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_002854CD: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    goto loc_002854D7;

loc_002854D5: ;
    SET_LO8(ebx, 0); /* xor self */

loc_002854D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002854DF: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x875860)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00285527; /* ja: above (unsigned >) */

loc_002854FB: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00285527; /* je: equal / zero */

loc_002854FF: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028553F; /* je: equal / zero */

loc_00285508: ;
    SET_LO8(eax, MEM8(0x862E58));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285527; /* je: equal / zero */

loc_00285511: ;
    eax = MEM32(0x86E990);
    if (TEST_S(eax, eax)) goto loc_00285527; /* jl: less (signed <) */

loc_0028551A: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0028551F: ;
    if (TEST_NZ(eax, eax)) goto loc_002855CB; /* jne: not equal / not zero */

loc_00285527: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028553F; /* je: equal / zero */

loc_00285530: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_002855AE; /* je: equal / zero */

loc_0028553A: ;
    if (CMP_EQ(eax, 2)) goto loc_002855B7; /* je: equal / zero */

loc_0028553F: ;
    if (CMP_NE(MEM8(esp + 0x10), 1)) goto loc_002857AC; /* jne: not equal / not zero */

loc_0028554A: ;
    edi = 0x60494C;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00285559: ;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60115C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00285567: ;
    PUSH32(esp, 0x5FAE34);
    edi = eax;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_00285573: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0028557E: ;
    ebx = eax;
    eax = 0x13;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0028558A: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x13);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00285598: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0028559F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_002855A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002855AE: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_002855B3: ;
    if (TEST_Z(eax, eax)) goto loc_0028553F; /* je: equal / zero */

loc_002855B7: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028553F; /* je: equal / zero */

loc_002855BF: ;
    MEM8(0x86ECD8) = 1;
    goto loc_002857AC;

loc_002855CB: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(0x875860) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00289830(); /* call 0x00289830 */

loc_002855DE: ;
    SET_LO8(ebx, MEM8(0x864EC1));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_0028572E; /* jle: less or equal (signed <=) */

loc_002855F4: ;
    ebp = 0x865620;
    /* nop */

loc_00285600: ;
    if (CMP_EQ(MEM32(ebp + -4), 1)) goto loc_00285714; /* je: equal / zero */

loc_0028560A: ;
    eax = ZX8(MEM8(ebp));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_00285619; /* je: equal / zero */

loc_00285614: ;
    ecx = 1;

loc_00285619: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0028561E; /* je: equal / zero */

loc_0028561D: ;
    ecx++;

loc_0028561E: ;
    if (TEST_Z(ecx, ecx)) goto loc_00285714; /* je: equal / zero */

loc_00285626: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00285634; /* jne: not equal / not zero */

loc_0028562F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00285634: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00285682; /* je: equal / zero */

loc_0028565A: ;
    if (CMP_B(MEM32(esi + 0x80), 0x878)) goto loc_00285682; /* jb: below (unsigned <) */

loc_00285666: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00285670: ;
    PUSH32(esp, 0x878);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028567B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002856A6; /* jne: not equal / not zero */

loc_00285682: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00285694: ;
    PUSH32(esp, 0x878);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028569F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002856AF; /* je: equal / zero */

loc_002856A6: ;
    PUSH32(esp, 0); sub_002852E0(); /* call 0x002852E0 */

loc_002856AB: ;
    esi = eax;
    goto loc_002856B1;

loc_002856AF: ;
    esi = 0; /* xor self */

loc_002856B1: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + -1855));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_002856C6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002856D2: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x280);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(0x86EE84);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_00298240(); /* call 0x00298240 */

loc_002856F5: ;
    ecx = 1;
    edx = 0x86EE80;
    edi = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_00285706: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    SET_LO8(ebx, MEM8(0x864EC1));

loc_00285714: ;
    eax = MEM32(esp + 0x14);
    edx = SX8(LO8(ebx));
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_00285600; /* jl: less (signed <) */

loc_0028572E: ;
    eax = MEM32(0x86EA48);
    eax++;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    MEM8(0x862E58) = 0;
    MEM8(0x862E59) = 0;
    MEM8(0x864EBE) = 0;
    MEM32(0x86EA48) = eax;
    if (CMP_L(eax, 0x10)) goto loc_0028575D; /* jl: less (signed <) */

loc_00285753: ;
    MEM32(0x86EA48) = 0;

loc_0028575D: ;
    esi = 0; /* xor self */
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_002857A2; /* jle: less or equal (signed <=) */

loc_00285763: ;
    eax = 0x865620;

loc_00285768: ;
    ecx = ZX8(MEM8(eax));
    edx = 0; /* xor self */
    if (TEST_Z(LO8(ecx), 1)) goto loc_00285777; /* je: equal / zero */

loc_00285772: ;
    edx = 1;

loc_00285777: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0028577D; /* je: equal / zero */

loc_0028577C: ;
    edx++;

loc_0028577D: ;
    if (TEST_Z(edx, edx)) goto loc_00285795; /* je: equal / zero */

loc_00285781: ;
    MEM8(eax + -1856) = 0;
    MEM8(eax + -1855) = 0;
    SET_LO8(ebx, MEM8(0x864EC1));

loc_00285795: ;
    ecx = SX8(LO8(ebx));
    esi++;
    eax = eax + 0xA50;
    if (CMP_L(esi, ecx)) goto loc_00285768; /* jl: less (signed <) */

loc_002857A2: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E90(); /* call 0x00296E90 */

loc_002857AC: ;
    ebp = MEM32(0x86EE84);
    esi = MEM32(ebp);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_EQ(esi, ebp)) goto loc_00285885; /* je: equal / zero */

loc_002857BF: ;
    /* nop */

loc_002857C0: ;
    SET_LO16(edi, MEM16(esi + 0xC));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_002857CE: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028580C; /* je: equal / zero */

loc_002857D9: ;
    if (TEST_Z(edi, edi)) goto loc_0028580C; /* je: equal / zero */

loc_002857DD: ;
    SET_LO8(eax, MEM8(edi + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002858B6(); return; } /* je: equal / zero */

loc_002857E8: ;
    PUSH32(esp, 0); sub_00299CB0(); /* call 0x00299CB0 */

loc_002857ED: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002858B6(); return; } /* je: equal / zero */

loc_002857F5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00285804: ;
    MEM8(edi + 0x1B) = 0;
    SET_LO8(ebx, 1);
    goto loc_00285820;

loc_0028580C: ;
    ecx = MEM32(esi + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00285819; /* je: equal / zero */

loc_00285813: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00285819: ;
    MEM32(esi + 8) = 0;

loc_00285820: ;
    ebp = MEM32(0x86EE84);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    edi = MEM32(esi);
    if (CMP_EQ(esi, ebp)) goto loc_00285877; /* je: equal / zero */

loc_0028582C: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0028583F: ;
    if (TEST_NZ(eax, eax)) goto loc_00285866; /* jne: not equal / not zero */

loc_00285843: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00285863: ;
    esp = esp + 4;

loc_00285866: ;
    eax = MEM32(0x86EE88);
    ebp = MEM32(0x86EE84);
    eax--;
    MEM32(0x86EE88) = eax;

loc_00285877: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00285885; /* jne: not equal / not zero */

loc_0028587D: ;
    if (CMP_NE(esi, ebp)) goto loc_002857C0; /* jne: not equal / not zero */

loc_00285885: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002858AE; /* je: equal / zero */

loc_0028589E: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_002858AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002858B2: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00285980
 * Original: 0x00285980 - 0x00285F77 (1527 bytes, 405 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285980: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285F70; /* je: equal / zero */

loc_00285993: ;
    SET_LO8(edx, MEM8(0x864EBE));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x874) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x871) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002859BE; /* je: equal / zero */

loc_002859B2: ;
    SET_LO8(ecx, MEM8(0x86EA44));
    MEM8(ebp + 0x872) = LO8(ecx);

loc_002859BE: ;
    SET_LO8(edx, MEM8(0x86EA48));
    MEM8(ebp + 0x873) = LO8(edx);
    MEM8(ebp + 0x4C) = 0;
    SET_LO8(eax, MEM8(0x862C5F));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(ebp + 0x50) = LO8(eax);
    eax = MEM32(0x86E990);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_002859E3: ;
    esi = eax;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421DC0(); /* call 0x00421DC0 */

loc_002859EF: ;
    edx = MEM32(eax);
    ecx = ebp + 0x3C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi);
    MEM32(ebp + 0x34) = ecx;
    edx = MEM32(esi + 4);
    MEM32(ebp + 0x38) = edx;
    eax = 0; /* xor self */
    ecx = ebp + 0x70;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM16(ebp + 0x94) = 0xFFFF;
    edx = MEM32(0x863D08);
    MEM32(ebp + 0xBC) = edx;
    SET_LO8(eax, MEM8(0x86E980));
    MEM8(ebp + 0xC0) = LO8(eax);
    SET_LO8(ecx, MEM8(0x86E982));
    edx = ebp + 0x98;
    eax = ebp + 0xC4;
    MEM8(ebp + 0xC1) = LO8(ecx);
    edi = 0; /* xor self */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x10) = eax;

loc_00285A74: ;
    SET_LO8(eax, MEM8(0x86E980));
    ebx = 1;
    ecx = edi;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00285C35; /* je: equal / zero */

loc_00285A8A: ;
    if (TEST_Z(MEM8(0x86E983), LO8(ebx))) goto loc_00285AD8; /* je: equal / zero */

loc_00285A92: ;
    edx = MEM32(0x777EC4);
    MEM8(edi + ebp + 0xE4) = 1;
    ecx = ZX8(MEM8(edi + 0x864EBF));
    ecx = ecx << 6;
    esi = MEM32(ecx + 0x777EFC);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00285ACC; /* jle: less or equal (signed <=) */

loc_00285AB6: ;
    ecx = 0x777EFC;
    goto loc_00285AC0;

    /* nop */

loc_00285AC0: ;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_00285ACF; /* je: equal / zero */

loc_00285AC4: ;
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, edx)) goto loc_00285AC0; /* jl: less (signed <) */

loc_00285ACC: ;
    eax = eax | 0xFFFFFFFFu;

loc_00285ACF: ;
    MEM8(edi + ebp + 0xE8) = LO8(eax);
    goto loc_00285AE0;

loc_00285AD8: ;
    MEM8(edi + ebp + 0xE4) = 0;

loc_00285AE0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi * 4 + 0x862CC0);
    MEM32(eax) = edx;
    if (CMP_NE(MEM32(0x863D04), 2)) goto loc_00285B23; /* jne: not equal / not zero */

loc_00285AF6: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00285B04; /* jne: not equal / not zero */

loc_00285B01: ;
    eax = eax | 0xFFFFFFFFu;

loc_00285B04: ;
    eax = SX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax & 0xFFFF;
    esi = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0; /* xor self */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x2C);
    esi = esi | edx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    goto loc_00285B33;

loc_00285B23: ;
    eax = edi;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_00285B2A: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_00285B33: ;
    esi = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x862CC8));
    edx = edx & ebx;
    edx = edx | esi;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(edi + ebp + 0xB8) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x862CC9));
    MEM8(edi + ebp + 0xD4) = LO8(ecx);
    (void)0; /* cmp MEM32(0x863D04), 3 - flags set for next jcc */
    esi = MEM32(edi * 4 + 0x862CD0);
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00285B8C; /* jne: not equal / not zero */

loc_00285B6C: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_00285B8C; /* jne: not equal / not zero */

loc_00285B75: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_00285B84: ;
    esp = esp + 4;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00285B93; /* jne: not equal / not zero */

loc_00285B8C: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11B7);

loc_00285B93: ;
    esi = MEM32(0x84A5F8);
    MEM8(edi + ebp + 0xD8) = LO8(eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00285BA5: ;
    PUSH32(esp, 0); sub_00345200(); /* call 0x00345200 */

loc_00285BAA: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00285BDD; /* jne: not equal / not zero */

loc_00285BAE: ;
    edx = ZX16(MEM16(esi + 0x60));
    eax = MEM32(edx * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    eax = ecx;
    eax = eax >> 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM16(esp + 0x20) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285BDD; /* je: equal / zero */

loc_00285BD6: ;
    eax = 1;
    goto loc_00285BDF;

loc_00285BDD: ;
    eax = 0; /* xor self */

loc_00285BDF: ;
    esi = MEM32(0x84A5F8);
    MEM8(ebp + 0xDC) = LO8(eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00285BF0: ;
    PUSH32(esp, 0); sub_00345200(); /* call 0x00345200 */

loc_00285BF5: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00285C2B; /* jne: not equal / not zero */

loc_00285BF9: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = MEM32(eax * 4 + 0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax + 4));
    SET_LO8(eax, LO8(edx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM16(esp + 0x18) = LO16(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285C2B; /* je: equal / zero */

loc_00285C1E: ;
    eax = 1;
    MEM8(ebp + 0xE0) = LO8(eax);
    goto loc_00285C3D;

loc_00285C2B: ;
    eax = 0; /* xor self */
    MEM8(ebp + 0xE0) = LO8(eax);
    goto loc_00285C3D;

loc_00285C35: ;
    MEM8(edi + ebp + 0xB8) = 0;

loc_00285C3D: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x10);
    edi++;
    edx = edx + 8;
    ecx = ecx + 4;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(edi, 2)) goto loc_00285A74; /* jl: less (signed <) */

loc_00285C5D: ;
    MEM8(ebp + 0x4C) = MEM8(ebp + 0x4C) + 1;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00285F0F; /* jle: less or equal (signed <=) */

loc_00285C75: ;
    esi = 0x8658A0;
    /* nop */

loc_00285C80: ;
    SET_LO8(eax, MEM8(esi + -640));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285EF1; /* je: equal / zero */

loc_00285C8E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_004181D0(); /* call 0x004181D0 */

loc_00285C96: ;
    if (TEST_Z(eax, eax)) goto loc_00285EF1; /* je: equal / zero */

loc_00285C9E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(edx, MEM8(0x84BEA0));
    eax = MEM32(eax);
    ecx = ecx << 7;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = ecx + ebp + 0x70;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00285CB9; /* je: equal / zero */

loc_00285CB5: ;
    MEM32(ecx) = eax;
    goto loc_00285CCA;

loc_00285CB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D886(); /* call 0x0048D886 */

loc_00285CC2: ;
    if (TEST_NZ(eax, eax)) goto loc_00285EF1; /* jne: not equal / not zero */

loc_00285CCA: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO16(eax, MEM16(esi));
    edx = edx << 7;
    MEM16(edx + ebp + 0x94) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    edx = MEM32(esi + -636);
    ecx = ecx << 7;
    MEM32(ecx + ebp + 0xBC) = edx;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(ecx, MEM8(esi + -640));
    eax = eax << 7;
    MEM8(eax + ebp + 0xC0) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(eax, MEM8(esi + -638));
    edx = edx << 7;
    MEM8(edx + ebp + 0xC1) = LO8(eax);
    edx = esi + 0x40;
    MEM8(esp + 0x2C) = 0;
    ecx = 0; /* xor self */
    edi = esi + 0x10;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_00285D30: ;
    SET_LO8(edx, MEM8(esi + -640));
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_00285EAE; /* je: equal / zero */

loc_00285D45: ;
    ebx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + -2496));
    edx = edx & eax;
    edx = edx | ebx;
    ebx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    ebx = ebx << 7;
    ebx = ebx + ecx;
    MEM8(ebx + ebp + 0xB8) = LO8(edx);
    (void)0; /* test MEM8(esi + -637), LO8(eax) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    if (TEST_Z(MEM8(esi + -637), LO8(eax))) goto loc_00285DDB; /* je: equal / zero */

loc_00285D76: ;
    eax = eax << 7;
    eax = eax + ecx;
    MEM8(eax + ebp + 0xE4) = 1;
    edx = ZX8(MEM8(esi + ecx + -620));
    edx = edx << 6;
    eax = MEM32(edx + 0x777EFC);
    edx = MEM32(0x777EC4);
    MEM32(esp + 0x1C) = eax;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00285DC6; /* jle: less or equal (signed <=) */

loc_00285DA4: ;
    edx = 0x777EFC;
    /* nop */

loc_00285DB0: ;
    ebx = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(edx), ebx)) goto loc_00285DC9; /* je: equal / zero */

loc_00285DB8: ;
    ebx = MEM32(0x777EC4);
    eax++;
    edx = edx + 0x40;
    if (CMP_L(eax, ebx)) goto loc_00285DB0; /* jl: less (signed <) */

loc_00285DC6: ;
    eax = eax | 0xFFFFFFFFu;

loc_00285DC9: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    edx = edx << 7;
    edx = edx + ecx;
    MEM8(edx + ebp + 0xE8) = LO8(eax);
    goto loc_00285DE8;

loc_00285DDB: ;
    eax = eax << 7;
    eax = eax + ecx;
    MEM8(eax + ebp + 0xE4) = 0;

loc_00285DE8: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    eax = MEM32(edi + -2532);
    edx = edx << 5;
    edx = edx + ecx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + edx * 4 + 0xC4) = eax;
    if (TEST_S(ecx, ecx)) goto loc_00285E1A; /* jl: less (signed <) */

loc_00285E02: ;
    if (CMP_GE(ecx, 2)) goto loc_00285E1A; /* jge: greater or equal (signed >=) */

loc_00285E07: ;
    SET_LO8(eax, MEM8(esi + ecx + 0x50));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285E1A; /* je: equal / zero */

loc_00285E0F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    edx = MEM32(edx + 4);
    goto loc_00285E1E;

loc_00285E1A: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */

loc_00285E1E: ;
    ebx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    ebx = ebx << 4;
    ebx = ebx + ecx;
    MEM32(ebp + ebx * 8 + 0x98) = eax;
    MEM32(ebp + ebx * 8 + 0x9C) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(eax, MEM8(esi + ecx + -2500));
    edx = edx << 7;
    edx = edx + ecx;
    MEM8(edx + ebp + 0xD4) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(eax, MEM8(edi));
    edx = edx << 7;
    edx = edx + ecx;
    MEM8(edx + ebp + 0xD8) = LO8(eax);
    eax = MEM32(edi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    eax = eax << 7;
    eax = eax + ecx;
    MEM8(eax + ebp + 0xDC) = LO8(edx);
    eax = MEM32(edi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    eax = eax << 7;
    eax = eax + ecx;
    MEM8(eax + ebp + 0xE0) = LO8(edx);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    eax = eax << 4;
    eax = eax + ecx;
    edx = MEM32(ebp + eax * 8 + 0x98);
    edx = edx | MEM32(ebp + eax * 8 + 0x9C);
    if ((edx != 0)) goto loc_00285EBF; /* jne: not equal / not zero */

loc_00285EA7: ;
    MEM8(esp + 0x2C) = 1;
    goto loc_00285EBF;

loc_00285EAE: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    eax = eax << 7;
    eax = eax + ecx;
    MEM8(eax + ebp + 0xB8) = 0;

loc_00285EBF: ;
    ebx = MEM32(esp + 0x10);
    ecx++;
    ebx = ebx + 8;
    edi = edi + 4;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(ecx, 2)) goto loc_00285D30; /* jl: less (signed <) */

loc_00285ED7: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00285EF1; /* jne: not equal / not zero */

loc_00285EDF: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4C);
    ecx = ecx << 7;
    MEM8(ecx + ebp + 0xEC) = 0;
    MEM8(ebp + 0x4C) = MEM8(ebp + 0x4C) + 1;

loc_00285EF1: ;
    eax = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_00285C80; /* jl: less (signed <) */

loc_00285F0F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    SET_LO16(ecx, MEM16(eax * 8 + 0x776F26));
    MEM16(ebp + 0x4E) = LO16(ecx);
    edi = ebp + 0x52;
    ecx = 6;
    esi = 0x862C84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    SET_LO8(edx, MEM8(0x862C64));
    MEM8(ebp + 0x4D) = LO8(edx);
    SET_LO8(eax, MEM8(0x862C9F));
    POP32(esp, edi);
    MEM8(ebp + 0x51) = LO8(eax);
    SET_LO8(eax, MEM8(0x862E59));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00285F69; /* jne: not equal / not zero */

loc_00285F53: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00285F69; /* jne: not equal / not zero */

loc_00285F5B: ;
    MEM8(ebp + 0x870) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_00285F69: ;
    MEM8(ebp + 0x870) = 1;

loc_00285F70: ;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00285F80
 * Original: 0x00285F80 - 0x00286009 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00285F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00285F80: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(edx, MEM8(edi + 0x871));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FA1: ;
    SET_LO8(eax, MEM8(edi + 0x871));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00285FBF; /* je: equal / zero */

loc_00285FAE: ;
    eax = ZX8(MEM8(edi + 0x872));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FBC: ;
    esp = esp + 4;

loc_00285FBF: ;
    eax = ZX8(MEM8(edi + 0x873));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FCD: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    PUSH32(esp, 4);
    eax--;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FD9: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FE4: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    /* nop */

loc_00285FF0: ;
    eax = ZX8(MEM8(ebx + edi + 0x34));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00285FFC: ;
    esp = esp + 4;
    ebx++;
    if (CMP_B(ebx, 8)) goto loc_00285FF0; /* jb: below (unsigned <) */

loc_00286005: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00286010(); return; /* tail jmp 0x00286010 */

}

/**
 * sub_00286490
 * Original: 0x00286490 - 0x002869E2 (1362 bytes, 419 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286490: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864A4: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x871) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002864C6; /* je: equal / zero */

loc_002864B6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864BD: ;
    esp = esp + 4;
    MEM8(edi + 0x872) = LO8(eax);

loc_002864C6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864CD: ;
    PUSH32(esp, 4);
    MEM8(edi + 0x873) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864DA: ;
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 1);
    MEM8(edi + 0x4C) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864E6: ;
    esp = esp + 0xC;
    MEM8(edi + 0x50) = LO8(eax);
    ebx = 0; /* xor self */
    edi = edi;

loc_002864F0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002864F7: ;
    esp = esp + 4;
    MEM8(ebx + edi + 0x34) = LO8(eax);
    ebx++;
    if (CMP_B(ebx, 8)) goto loc_002864F0; /* jb: below (unsigned <) */

loc_00286504: ;
    ebx = 0; /* xor self */

loc_00286506: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028650D: ;
    esp = esp + 4;
    MEM8(ebx + edi + 0x3C) = LO8(eax);
    ebx++;
    if (CMP_B(ebx, 0x10)) goto loc_00286506; /* jb: below (unsigned <) */

loc_0028651A: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0028654C; /* jle: less or equal (signed <=) */

loc_00286523: ;
    ebp = edi + 0xBC;
    /* nop */

loc_00286530: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286537: ;
    MEM32(ebp) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    esp = esp + 4;
    ebx++;
    ebp = ebp + 0x80;
    if (CMP_L(ebx, eax)) goto loc_00286530; /* jl: less (signed <) */

loc_0028654C: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00286616; /* jle: less or equal (signed <=) */

loc_0028655F: ;
    MEM32(esp + 0x10) = 0x31;
    ebx = edi + 0xC0;
    /* nop */

loc_00286570: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286577: ;
    PUSH32(esp, 1);
    MEM8(ebx) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286580: ;
    esp = esp + 8;
    MEM8(ebx + 1) = LO8(eax);
    ebp = 0; /* xor self */
    goto loc_00286590;

    /* nop */

loc_00286590: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    edx = 1;
    ecx = ebp;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_002865E5; /* je: equal / zero */

loc_002865A0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002865A7: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    PUSH32(esp, 1);
    MEM32(edi + ecx * 4) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002865B7: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + ebp + 0x24) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002865D5; /* je: equal / zero */

loc_002865C7: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002865CE: ;
    esp = esp + 4;
    MEM8(ebx + ebp + 0x28) = LO8(eax);

loc_002865D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002865DC: ;
    esp = esp + 4;
    MEM8(ebx + ebp + -8) = LO8(eax);
    goto loc_002865EA;

loc_002865E5: ;
    MEM8(ebx + ebp + -8) = 0;

loc_002865EA: ;
    ebp++;
    if (CMP_L(ebp, 2)) goto loc_00286590; /* jl: less (signed <) */

loc_002865F0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    edx = edx + 0x20;
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ebx = ebx + 0x80;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, edx)) goto loc_00286570; /* jl: less (signed <) */

loc_00286616: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028661D: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x870) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286638; /* je: equal / zero */

loc_0028662A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286631: ;
    esp = esp + 4;
    MEM16(edi + 0x4E) = LO16(eax);

loc_00286638: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028663F: ;
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 5);
    MEM8(edi + 0x52) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028664B: ;
    PUSH32(esp, 3);
    MEM8(edi + 0x53) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286655: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x54) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028665F: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x55) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286669: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x56) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286673: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x57) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028667D: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x58) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286687: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x59) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286691: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5A) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028669B: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5B) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866A5: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5C) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866AF: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5D) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866B9: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5E) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866C3: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x5F) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866CD: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x60) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866D7: ;
    esp = esp + 0x40;
    PUSH32(esp, 4);
    MEM8(edi + 0x61) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866E4: ;
    PUSH32(esp, 6);
    MEM8(edi + 0x62) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866EE: ;
    PUSH32(esp, 5);
    MEM8(edi + 0x63) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002866F8: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x64) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286702: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x65) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028670C: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x66) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286716: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x67) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286720: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x68) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028672A: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x69) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286734: ;
    PUSH32(esp, 6);
    MEM8(edi + 0x6A) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028673E: ;
    MEM8(edi + 0x6B) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x52));
    PUSH32(esp, 2);
    MEM8(edi + 0x4D) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028674E: ;
    MEM8(edi + 0x51) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x4C));
    esp = esp + 0x2C;
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00286788; /* jle: less or equal (signed <=) */

loc_0028675D: ;
    ebx = edi + 0x94;

loc_00286763: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028676A: ;
    esp = esp + 4;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM16(ebx) = LO16(eax);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00286779; /* jne: not equal / not zero */

loc_00286776: ;
    MEM16(ebx) = LO16(eax);

loc_00286779: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    ebp++;
    ebx = ebx + 0x80;
    if (CMP_L(ebp, ecx)) goto loc_00286763; /* jl: less (signed <) */

loc_00286788: ;
    SET_LO8(eax, MEM8(edi + 0x871));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00286850; /* jne: not equal / not zero */

loc_00286796: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00286872; /* jle: less or equal (signed <=) */

loc_002867A9: ;
    ebp = edi + 0xED;
    /* nop */

loc_002867B0: ;
    ecx = 0; /* xor self */
    MEM8(ebp) = 0;
    MEM32(esp + 0x10) = ecx;
    ebx = ebp + -85;
    /* nop */

loc_002867C0: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -45);
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_00286814; /* je: equal / zero */

loc_002867CF: ;
    SET_LO8(eax, MEM8(ecx + ebp + -53));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286814; /* je: equal / zero */

loc_002867D7: ;
    PUSH32(esp, 0x20);
    MEM8(ebp) = 1;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002867E2: ;
    PUSH32(esp, 0x20);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002867ED: ;
    ecx = eax;
    eax = 0; /* xor self */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x20);
    edx = 0; /* xor self */
    edx = edx | eax;
    PUSH32(esp, 5);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286807: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    MEM8(ecx + ebp + -25) = LO8(eax);
    goto loc_00286826;

loc_00286814: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    MEM8(ecx + ebp + -25) = 0xF;

loc_00286826: ;
    ecx++;
    ebx = ebx + 8;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, 2)) goto loc_002867C0; /* jl: less (signed <) */

loc_00286833: ;
    eax = MEM32(esp + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ebp = ebp + 0x80;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, edx)) goto loc_002867B0; /* jl: less (signed <) */

loc_0028684E: ;
    goto loc_00286872;

loc_00286850: ;
    SET_LO8(ecx, MEM8(edi + 0x4C));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00286872; /* jle: less or equal (signed <=) */

loc_00286859: ;
    ecx = edi + 0xED;
    /* nop */

loc_00286860: ;
    MEM8(ecx) = 0;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ecx = ecx + 0x80;
    if (CMP_L(eax, edx)) goto loc_00286860; /* jl: less (signed <) */

loc_00286872: ;
    SET_LO8(eax, MEM8(edi + 0x871));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00286920; /* jne: not equal / not zero */

loc_00286880: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00286942; /* jle: less or equal (signed <=) */

loc_00286893: ;
    ebx = edi + 0x70;
    goto loc_002868A0;

    /* nop */
    /* nop */

loc_002868A0: ;
    MEM8(ebx + 0x7C) = 0;
    eax = ZX8(MEM8(ebx + 0x49));
    ecx = ZX8(MEM8(ebx + 0x48));
    eax = eax | ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_002868E9; /* je: equal / zero */

loc_002868B4: ;
    MEM8(ebx + 0x7C) = 1;
    ebp = 0; /* xor self */
    /* nop */

loc_002868C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002868C7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002868DD; /* je: equal / zero */

loc_002868CE: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002868D5: ;
    esp = esp + 4;
    MEM8(ebx + ebp) = LO8(eax);
    goto loc_002868E1;

loc_002868DD: ;
    MEM8(ebx + ebp) = 0;

loc_002868E1: ;
    ebp++;
    if (CMP_B(ebp, 0x24)) goto loc_002868C0; /* jb: below (unsigned <) */

loc_002868E7: ;
    goto loc_00286907;

loc_002868E9: ;
    edx = 0; /* xor self */
    eax = ebx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;

loc_00286907: ;
    eax = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ebx = ebx + 0x80;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, ecx)) goto loc_002868A0; /* jl: less (signed <) */

loc_0028691E: ;
    goto loc_00286942;

loc_00286920: ;
    SET_LO8(ecx, MEM8(edi + 0x4C));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00286942; /* jle: less or equal (signed <=) */

loc_00286929: ;
    ecx = edi + 0xEC;
    /* nop */

loc_00286930: ;
    MEM8(ecx) = 0;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ecx = ecx + 0x80;
    if (CMP_L(eax, edx)) goto loc_00286930; /* jl: less (signed <) */

loc_00286942: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002869C8; /* jle: less or equal (signed <=) */

loc_00286951: ;
    ebp = edi;

loc_00286953: ;
    ebx = 0; /* xor self */

loc_00286955: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xC0);
    if (TEST_Z(ecx, eax)) goto loc_002869AB; /* je: equal / zero */

loc_00286969: ;
    SET_LO8(eax, MEM8(ebx + ebp + 0xB8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002869AB; /* je: equal / zero */

loc_00286974: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028697B: ;
    PUSH32(esp, 1);
    MEM8(ebx + ebp + 0xD8) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00286989: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(ebx + ebp + 0xDC) = LO8(edx);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028699C: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(ebx + ebp + 0xE0) = LO8(eax);

loc_002869AB: ;
    ebx++;
    if (CMP_L(ebx, 2)) goto loc_00286955; /* jl: less (signed <) */

loc_002869B1: ;
    eax = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4C);
    eax++;
    ebp = ebp + 0x80;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, ecx)) goto loc_00286953; /* jl: less (signed <) */

loc_002869C8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002869CF: ;
    esp = esp + 4;
    MEM8(edi + 0x874) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002869F0
 * Original: 0x002869F0 - 0x00287970 (3968 bytes, 1076 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002869F0(void)
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

loc_002869F0: ;
    esp = esp - 0x158;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x874));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286A41; /* je: equal / zero */

loc_00286A07: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_00286A21; /* jne: not equal / not zero */

loc_00286A10: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00286A21: ;
    SET_LO8(eax, MEM8(0x87674D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286A3A; /* je: equal / zero */

loc_00286A2A: ;
    MEM8(0x87674D) = 0;
    MEM8(0x87674E) = 0;
    goto loc_00286A41;

loc_00286A3A: ;
    MEM8(0x87674E) = 1;

loc_00286A41: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00287970(); return; } /* jne: not equal / not zero */

loc_00286A4E: ;
    eax = MEM32(0x863D08);
    if (CMP_EQ(eax, 3)) goto loc_00286A61; /* je: equal / zero */

loc_00286A58: ;
    if (CMP_NE(eax, 2)) { sub_00287970(); return; } /* jne: not equal / not zero */

loc_00286A61: ;
    SET_LO8(eax, MEM8(0x86EA4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286A77; /* je: equal / zero */

loc_00286A6A: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x158;
    esp += 4; return; /* ret */

loc_00286A77: ;
    SET_LO8(eax, MEM8(ebp + 0x871));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286AA8; /* je: equal / zero */

loc_00286A85: ;
    eax = ZX8(MEM8(ebp + 0x872));
    (void)0; /* cmp MEM32(0x86EA44), eax - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(MEM32(0x86EA44), eax)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00286AA8; /* je: equal / zero */

loc_00286A99: ;
    edi = 0x60492C;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00286AA8: ;
    ecx = ZX8(MEM8(ebp + 0x873));
    MEM32(0x86EA44) = ecx;
    SET_LO8(eax, MEM8(ebp + 0x871));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x862C5E));
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286AD6; /* je: equal / zero */

loc_00286AC5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00286ADE; /* jne: not equal / not zero */

loc_00286AC9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x158;
    esp += 4; return; /* ret */

loc_00286AD6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286D02; /* je: equal / zero */

loc_00286ADE: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00286D02; /* jne: not equal / not zero */

loc_00286AE6: ;
    eax = MEM32(0x862E64);
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_EQ(eax, ebx)) goto loc_00286B11; /* je: equal / zero */

loc_00286AF2: ;
    edi = 0x6048D8;

loc_00286AF7: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00286B01: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x158;
    esp += 4; return; /* ret */

loc_00286B11: ;
    edx = MEM32(0x86E990);
    MEM32(0x86E990) = ebx;
    MEM8(0x862C5E) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_004181D0(); /* call 0x004181D0 */

loc_00286B30: ;
    if (TEST_NZ(eax, eax)) goto loc_00286B3B; /* jne: not equal / not zero */

loc_00286B34: ;
    edi = 0x6048A4;
    goto loc_00286AF7;

loc_00286B3B: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0); sub_00418030(); /* call 0x00418030 */

loc_00286B49: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    esi = ebp + 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00421910(); /* call 0x00421910 */

loc_00286B56: ;
    MEM32(0x86E990) = eax;
    edi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004204C0(); /* call 0x004204C0 */

loc_00286B64: ;
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    edx = esp + 0x58;
    PUSH32(esp, 0); sub_00418060(); /* call 0x00418060 */

loc_00286B72: ;
    ecx = MEM32(esp + 0x44);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEM32(0x862E54) = ecx;
    PUSH32(esp, 0); sub_00418320(); /* call 0x00418320 */

loc_00286B86: ;
    edi = eax;
    esp = esp + 0x18;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00286B95: ;
    esi = eax;
    if (CMP_EQ(MEM32(esi + 0x9E0), ebx)) goto loc_00286BA4; /* je: equal / zero */

loc_00286B9F: ;
    PUSH32(esp, 0); sub_0029A730(); /* call 0x0029A730 */

loc_00286BA4: ;
    eax = MEM32(esi + 0x9DC);
    MEM32(esi + 0x9E0) = eax;
    MEM32(esi + 0x9DC) = edi;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x86E99C) = edi;
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00286C82; /* jle: less or equal (signed <=) */

loc_00286BD1: ;
    edi = 0x8658A4;
    goto loc_00286BE0;

    /* nop */
    /* nop */

loc_00286BE0: ;
    SET_LO8(eax, MEM8(edi + -2524));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = edi + -2524;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00286C64; /* jne: not equal / not zero */

loc_00286BF0: ;
    eax = MEM32(edi);
    PUSH32(esp, 0); sub_004181D0(); /* call 0x004181D0 */

loc_00286BF7: ;
    if (TEST_Z(eax, eax)) goto loc_00286CC9; /* je: equal / zero */

loc_00286BFF: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0); sub_00418030(); /* call 0x00418030 */

loc_00286C0D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00286CD3; /* jne: not equal / not zero */

loc_00286C18: ;
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    edx = esp + 0x48;
    PUSH32(esp, 0); sub_00418060(); /* call 0x00418060 */

loc_00286C29: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00286CDD; /* jne: not equal / not zero */

loc_00286C34: ;
    if (CMP_EQ(MEM32(edi + 4), ebx)) goto loc_00286C3E; /* je: equal / zero */

loc_00286C39: ;
    PUSH32(esp, 0); sub_0029A730(); /* call 0x0029A730 */

loc_00286C3E: ;
    ecx = MEM32(edi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(edi + 4) = ecx;
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_00418320(); /* call 0x00418320 */

loc_00286C4F: ;
    esp = esp + 4;
    PUSH32(esp, 0x604814);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    MEM32(edi) = eax;
    PUSH32(esp, 0); sub_0029A610(); /* call 0x0029A610 */

loc_00286C61: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00286C64: ;
    eax = MEM32(esp + 0x24);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    edi = edi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(eax, ecx)) goto loc_00286BE0; /* jl: less (signed <) */

loc_00286C82: ;
    edx = MEM32(esp + 0x10);
    MEM32(0x862E64) = edx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00286C91: ;
    MEMF(0x862E68) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00286CA1: ;
    PUSH32(esp, 0x38);
    edi = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00286CAA: ;
    ecx = eax;
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_00286CE7; /* je: equal / zero */

loc_00286CB3: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_00286CBD: ;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_00285450(); /* call 0x00285450 */

loc_00286CC5: ;
    esi = eax;
    goto loc_00286CE9;

loc_00286CC9: ;
    edi = 0x604884;
    goto loc_00286AF7;

loc_00286CD3: ;
    edi = 0x60486C;
    goto loc_00286AF7;

loc_00286CDD: ;
    edi = 0x604850;
    goto loc_00286AF7;

loc_00286CE7: ;
    esi = 0; /* xor self */

loc_00286CE9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00286CF4: ;
    ecx = MEM32(edi + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00286D02: ;
    SET_LO8(eax, MEM8(ebp + 0x870));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    MEM16(esp + 0x40) = LO16(edx);
    MEM8(esp + 0x42) = LO8(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286D38; /* je: equal / zero */

loc_00286D23: ;
    SET_LO16(edi, MEM16(ebp + 0x4E));
    PUSH32(esp, 0); sub_00234CC0(); /* call 0x00234CC0 */

loc_00286D2C: ;
    MEM8(0x77627C) = LO8(eax);
    MEM8(0x849FB0) = 1;

loc_00286D38: ;
    MEM8(0x862C9E) = 0;
    esi = ebp + 0x52;
    ecx = 6;
    edi = 0x862C84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    SET_LO8(eax, MEM8(ebp + 0x51));
    MEM8(0x862C9F) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x50));
    MEM8(0x862C5F) = LO8(ecx);
    SET_LO8(edx, MEM8(ebp + 0x4D));
    MEM8(0x862C64) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0x4C));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002876FE; /* jle: less or equal (signed <=) */

loc_00286D7B: ;
    ebx = MEM32(0x863D04);
    if (CMP_NE(ebx, 1)) goto loc_00286D8B; /* jne: not equal / not zero */

loc_00286D86: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00286D9F;

loc_00286D8B: ;
    if (CMP_NE(MEM16(0x86E9A0), 0xFFFFFFFEu)) goto loc_00286D9A; /* jne: not equal / not zero */

loc_00286D95: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00286D9F;

loc_00286D9A: ;
    eax = MEM32(0x86E9A0);

loc_00286D9F: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 7;
    ebp = ecx + edx;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebp + 0x94));
    (void)0; /* cmp LO16(edi), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(LO16(edi), LO16(eax))) goto loc_0028755E; /* je: equal / zero */

loc_00286DC3: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00286DCD: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00287091; /* jne: not equal / not zero */

loc_00286DDB: ;
    SET_LO8(eax, MEM8(ebp + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028778D; /* je: equal / zero */

loc_00286DE9: ;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_00286DF3: ;
    SET_LO8(ecx, MEM8(0x84BEA0));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = ebp + 0x70;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00286E08; /* je: equal / zero */

loc_00286E00: ;
    eax = MEM32(esi);
    MEM32(esp + 0x2C) = eax;
    goto loc_00286E1C;

loc_00286E08: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D69B(); /* call 0x0048D69B */

loc_00286E14: ;
    if (TEST_NZ(eax, eax)) goto loc_00287797; /* jne: not equal / not zero */

loc_00286E1C: ;
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_00418D90(); /* call 0x00418D90 */

loc_00286E25: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00286ECA; /* je: equal / zero */

loc_00286E2E: ;
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00286E39: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00286E69; /* je: equal / zero */

loc_00286E3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_00286E45: ;
    edi = edi - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    esp = esp + 4;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_00286E69: ;
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_00418D90(); /* call 0x00418D90 */

loc_00286E72: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00286ECA; /* je: equal / zero */

loc_00286E77: ;
    ebx = eax;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002962A0(); /* call 0x002962A0 */

loc_00286E83: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00286EB3; /* je: equal / zero */

loc_00286E89: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_00286E8F: ;
    edi = edi - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    esp = esp + 4;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_00286EB3: ;
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_00418D90(); /* call 0x00418D90 */

loc_00286EBC: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00286ECA; /* je: equal / zero */

loc_00286EC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_00286EC7: ;
    esp = esp + 4;

loc_00286ECA: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00418320(); /* call 0x00418320 */

loc_00286ED4: ;
    edi = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + 0x94));
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00295E90(); /* call 0x00295E90 */

loc_00286EF0: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_00286F13; /* jne: not equal / not zero */

loc_00286EF6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_00286EFC: ;
    esp = esp + 4;
    edi = 0x6047A4;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00286F0E: ;
    goto loc_002876E3;

loc_00286F13: ;
    edi = ebx + 0x41;
    ecx = 9;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0xBC);
    MEM32(ebx + 0x75C) = ecx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00286F2E: ;
    ecx = ebx + 0x9E8;
    MEMF(ebx + 0x760) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(edx, MEM8(ebp + 0xC0));
    MEM8(ebx + 0x758) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0xC1));
    edx = ebx + 0x34A;
    MEM8(ebx + 0x75A) = LO8(eax);
    esi = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = edx;
    edi = ecx;

loc_00286F64: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebx + 0x758));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00287042; /* je: equal / zero */

loc_00286F7B: ;
    edx = MEM32(esp + 0x28);
    MEM16(edx) = 0;
    SET_LO8(eax, MEM8(ebp + 0xED));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00286FA1; /* jne: not equal / not zero */

loc_00286F8E: ;
    edi = 0x60477C;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00286F9D: ;
    edi = MEM32(esp + 0x14);

loc_00286FA1: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = ecx << 4;
    ecx = ecx + esi;
    edx = MEM32(eax + ecx * 8 + 0x9C);
    eax = MEM32(eax + ecx * 8 + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0029A780(); /* call 0x0029A780 */

loc_00286FC7: ;
    SET_LO8(eax, MEM8(esi + ebp + 0xE4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00286FF4; /* je: equal / zero */

loc_00286FD2: ;
    SET_LO8(ecx, MEM8(esi + ebp + 0xE8));
    MEM8(esi + ebx + 0x76C) = LO8(ecx);
    SET_LO8(eax, MEM8(ebx + 0x75B));
    SET_LO8(edx, 1);
    ecx = esi;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(ebx + 0x75B) = LO8(eax);

loc_00286FF4: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = eax << 5;
    eax = eax + esi;
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = MEM32(ecx + eax * 4 + 0xC4);
    MEM32(edi + -2532) = edx;
    SET_LO8(eax, MEM8(esi + ebp + 0xD4));
    MEM8(esi + ebx + 0x14) = LO8(eax);
    if (TEST_S(esi, esi)) goto loc_00287042; /* jl: less (signed <) */

loc_0028701D: ;
    if (CMP_GE(esi, 2)) goto loc_00287042; /* jge: greater or equal (signed >=) */

loc_00287022: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + ebp + 0xD8);
    MEM32(edi) = ecx;
    edx = ZX8(MEM8(esi + ebp + 0xDC));
    MEM32(edi + 0x10) = edx;
    eax = ZX8(MEM8(esi + ebp + 0xE0));
    MEM32(edi + 0x20) = eax;

loc_00287042: ;
    edx = MEM32(esp + 0x28);
    esi++;
    edx = edx + 0x12C;
    edi = edi + 4;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(esi, 2)) goto loc_00286F64; /* jl: less (signed <) */

loc_00287061: ;
    ecx = ebx;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    ecx = edx;
    ecx = ecx >> 0x1F;
    PUSH32(esp, 0x60475C);
    ecx = ecx + edx;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(esp + ecx + 0x3C) = 1;
    PUSH32(esp, 0); sub_0029A610(); /* call 0x0029A610 */

loc_0028708C: ;
    goto loc_002876E3;

loc_00287091: ;
    ecx = esi;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM8(esp + eax + 0x34) = 1;
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_002870D1; /* jle: less or equal (signed <=) */

loc_002870BC: ;
    edx = 0x864EC8;

loc_002870C1: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_002870D3; /* jne: not equal / not zero */

loc_002870C6: ;
    ecx++;
    edx = edx + 0xA50;
    if (CMP_L(ecx, eax)) goto loc_002870C1; /* jl: less (signed <) */

loc_002870D1: ;
    edx = 0; /* xor self */

loc_002870D3: ;
    if (CMP_NE(esi, edx)) goto loc_002871FE; /* jne: not equal / not zero */

loc_002870DB: ;
    SET_LO8(eax, MEM8(ebp + 0xB8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002871FE; /* je: equal / zero */

loc_002870E9: ;
    SET_LO8(eax, MEM8(ebp + 0xED));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028712C; /* jne: not equal / not zero */

loc_002870F3: ;
    SET_LO8(eax, MEM8(esi + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028710F; /* je: equal / zero */

loc_002870FD: ;
    eax = MEM32(esi + 0xA18);
    eax = eax | MEM32(esi + 0xA1C);
    if ((eax != 0)) goto loc_002871FE; /* jne: not equal / not zero */

loc_0028710F: ;
    if (CMP_NE(ebx, 3)) goto loc_002871FE; /* jne: not equal / not zero */

loc_00287118: ;
    edi = 0x604730;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_00287127: ;
    goto loc_002871FE;

loc_0028712C: ;
    eax = MEM32(ebp + 0x98);
    (void)0; /* cmp eax, MEM32(esi + 0xA18) - flags set for next jcc */
    ebp = MEM32(ebp + 0x9C);
    if (CMP_NE(eax, MEM32(esi + 0xA18))) goto loc_00287148; /* jne: not equal / not zero */

loc_00287140: ;
    if (CMP_EQ(ebp, MEM32(esi + 0xA1C))) goto loc_0028714F; /* je: equal / zero */

loc_00287148: ;
    MEM8(esi + 0x780) = 1;

loc_0028714F: ;
    MEM32(esi + 0xA18) = eax;
    MEM32(esi + 0xA1C) = ebp;
    SET_LO8(eax, MEM8(esi + 0x7BA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0xA28) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002871FE; /* jne: not equal / not zero */

loc_00287170: ;
    SET_LO8(eax, MEM8(esi + 0x7BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002871FE; /* je: equal / zero */

loc_0028717E: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603FB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0028718A: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00287194: ;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, 0x603FA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002871A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x84;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_002871B6: ;
    eax = MEM32(0x863D04);
    esp = esp + 0x1C;
    if (CMP_NE(eax, 3)) goto loc_002871F7; /* jne: not equal / not zero */

loc_002871C3: ;
    SET_LO8(eax, MEM8(esi + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002871F7; /* je: equal / zero */

loc_002871CD: ;
    ecx = MEM32(esi + 0xA18);
    edx = MEM32(esi + 0xA1C);
    eax = ecx;
    eax = eax | edx;
    if ((eax == 0)) goto loc_002871F7; /* je: equal / zero */

loc_002871DF: ;
    edi = ecx;
    eax = 0; /* xor self */
    ecx = esi;
    ebx = edx;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_002871EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00289090(); /* call 0x00289090 */

loc_002871F4: ;
    esp = esp + 0xC;

loc_002871F7: ;
    MEM8(esi + 0x7BA) = 1;

loc_002871FE: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(edi + 0xBC);
    esi = MEM32(esp + 0x28);
    MEM32(esi + 0x75C) = edx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00287217: ;
    MEMF(esi + 0x760) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(edi + 0xC0));
    MEM8(esi + 0x758) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0xC1));
    edi = esi + 0xA3C;
    edx = esi + 0xA18;
    MEM8(esi + 0x75A) = LO8(ecx);
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x24) = edx;
    goto loc_00287250;

    /* nop */

loc_00287250: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xC0);
    (void)0; /* test eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, edx)) goto loc_0028750E; /* je: equal / zero */

loc_00287270: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 5;
    ecx = ecx + ebp;
    ebx = MEM32(edx + ecx * 4 + 0xC4);
    edx = edx + ecx * 4 + 0xC4;
    if (CMP_EQ(MEM32(edi + -2616), ebx)) goto loc_002872BB; /* je: equal / zero */

loc_00287293: ;
    if (TEST_S(ebp, ebp)) goto loc_002872B3; /* jl: less (signed <) */

loc_00287297: ;
    if (CMP_GE(ebp, 2)) goto loc_002872B3; /* jge: greater or equal (signed >=) */

loc_0028729C: ;
    eax = MEM32(edi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002872AF; /* je: equal / zero */

loc_002872A8: ;
    MEM32(eax * 4 + 0x7761A0) = ebx;

loc_002872AF: ;
    eax = MEM32(esp + 0x10);

loc_002872B3: ;
    ecx = MEM32(edx);
    MEM32(edi + -2616) = ecx;

loc_002872BB: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(ecx, MEM8(edx + ebp + 0xE4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00287455; /* je: equal / zero */

loc_002872CE: ;
    ecx = edx;
    SET_LO8(ebx, MEM8(ecx + ebp + 0xE8));
    if (TEST_NZ(MEM8(esi + 0x75B), LO8(eax))) goto loc_0028734A; /* jne: not equal / not zero */

loc_002872DF: ;
    ecx = ebp;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esi + ebp + 0x76C) = LO8(ebx);
    SET_LO8(ecx, MEM8(esi + 0x75B));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(esi + 0x75B) = LO8(ecx);
    if (TEST_S(ebp, ebp)) goto loc_00287455; /* jl: less (signed <) */

loc_00287302: ;
    if (CMP_GE(ebp, 2)) goto loc_00287455; /* jge: greater or equal (signed >=) */

loc_0028730B: ;
    eax = MEM32(edi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00287455; /* je: equal / zero */

loc_0028731B: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00287322: ;
    esi = MEM32(esp + 0x18);
    edi = ZX8(LO8(ebx));
    ebx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_00287334: ;
    eax = MEM32(esp + 0x14);
    SET_LO16(esi, MEM16(esi));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00287342: ;
    esp = esp + 8;
    goto loc_00287451;

loc_0028734A: ;
    if (CMP_EQ(MEM8(esi + ebp + 0x76C), LO8(ebx))) goto loc_00287455; /* je: equal / zero */

loc_00287357: ;
    ecx = ebp;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esi + ebp + 0x76C) = LO8(ebx);
    SET_LO8(ecx, MEM8(esi + 0x75B));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(esi + 0x75B) = LO8(ecx);
    if (TEST_S(ebp, ebp)) goto loc_00287455; /* jl: less (signed <) */

loc_0028737A: ;
    if (CMP_GE(ebp, 2)) goto loc_00287455; /* jge: greater or equal (signed >=) */

loc_00287383: ;
    (void)0; /* cmp MEM32(edi), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(edi), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287455; /* je: equal / zero */

loc_00287391: ;
    edi = esi + 0xA38;
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_002873A0: ;
    if (CMP_EQ(MEM32(eax + 0x64), 1)) goto loc_002873B4; /* je: equal / zero */

loc_002873A6: ;
    ecx = ebp;
    edx = edi;
    PUSH32(esp, 0); sub_00299300(); /* call 0x00299300 */

loc_002873AF: ;
    goto loc_00287455;

loc_002873B4: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ecx + 0x874));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002873FF; /* jne: not equal / not zero */

loc_002873C2: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_002873C7: ;
    SET_LO8(ecx, MEM8(eax + 0x565));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002873FF; /* jne: not equal / not zero */

loc_002873D1: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002873DE: ;
    edi = ZX8(LO8(ebx));
    ebx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_002873EC: ;
    eax = MEM32(esp + 0x14);
    SET_LO16(esi, MEM16(esi));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002873FA: ;
    esp = esp + 8;
    goto loc_00287451;

loc_002873FF: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_00287455; /* jne: not equal / not zero */

loc_00287408: ;
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_00287411: ;
    edx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(edx);
    MEM8(eax + 0x7761F4) = LO8(ebx);
    SET_LO16(esi, MEM16(edi + 0x60));
    eax = ZX8(LO8(ebx));
    eax = eax << 6;
    eax = eax + 0x777ED0;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00287435: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_0028743E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_0028744E: ;
    esp = esp + 0x1C;

loc_00287451: ;
    esi = MEM32(esp + 0x28);

loc_00287455: ;
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, MEM8(eax + ebp + 0xB8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028750E; /* je: equal / zero */

loc_00287468: ;
    SET_LO8(ecx, MEM8(eax + 0xED));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002874AB; /* jne: not equal / not zero */

loc_00287472: ;
    if (TEST_S(ebp, ebp)) goto loc_00287491; /* jl: less (signed <) */

loc_00287476: ;
    if (CMP_GE(ebp, 2)) goto loc_00287491; /* jge: greater or equal (signed >=) */

loc_0028747B: ;
    SET_LO8(eax, MEM8(esi + ebp + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287491; /* je: equal / zero */

loc_00287486: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    eax = eax | MEM32(ecx + 4);
    if ((eax != 0)) goto loc_002874D1; /* jne: not equal / not zero */

loc_00287491: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_002874D1; /* jne: not equal / not zero */

loc_0028749A: ;
    edi = 0x60477C;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00297500(); /* call 0x00297500 */

loc_002874A9: ;
    goto loc_002874D1;

loc_002874AB: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = ecx << 4;
    ecx = ecx + ebp;
    edx = MEM32(eax + ecx * 8 + 0x9C);
    eax = MEM32(eax + ecx * 8 + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_0029A780(); /* call 0x0029A780 */

loc_002874D1: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(ecx + ebp + 0xD4));
    MEM8(esi + ebp + 0x14) = LO8(edx);
    if (TEST_S(ebp, ebp)) goto loc_0028750E; /* jl: less (signed <) */

loc_002874E4: ;
    if (CMP_GE(ebp, 2)) goto loc_0028750E; /* jge: greater or equal (signed >=) */

loc_002874E9: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + ebp + 0xD8);
    eax = MEM32(esp + 0x14);
    MEM32(eax + -84) = edx;
    edx = ZX8(MEM8(ecx + ebp + 0xDC));
    MEM32(eax + -68) = edx;
    ecx = ZX8(MEM8(ecx + ebp + 0xE0));
    MEM32(eax + -52) = ecx;

loc_0028750E: ;
    if (CMP_NE(MEM32(esi + 0x75C), 2)) goto loc_00287539; /* jne: not equal / not zero */

loc_00287517: ;
    if (TEST_S(ebp, ebp)) goto loc_00287539; /* jl: less (signed <) */

loc_0028751B: ;
    if (CMP_GE(ebp, 2)) goto loc_00287539; /* jge: greater or equal (signed >=) */

loc_00287520: ;
    edi = MEM32(esp + 0x14);
    (void)0; /* cmp MEM32(edi), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(edi), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028753D; /* je: equal / zero */

loc_0028752E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_00287534: ;
    esp = esp + 4;
    goto loc_0028753D;

loc_00287539: ;
    edi = MEM32(esp + 0x14);

loc_0028753D: ;
    edx = MEM32(esp + 0x24);
    ebp++;
    edx = edx + 8;
    edi = edi + 4;
    (void)0; /* cmp ebp, 2 - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(ebp, 2)) goto loc_00287250; /* jl: less (signed <) */

loc_00287559: ;
    goto loc_002876E3;

loc_0028755E: ;
    ebp = 0; /* xor self */

loc_00287560: ;
    eax = MEM32(esp + 0x20);
    ecx = ebp;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xC0);
    if (TEST_Z(ecx, edx)) goto loc_002876D9; /* je: equal / zero */

loc_0028757C: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + ebp + 0xB8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287596; /* je: equal / zero */

loc_00287589: ;
    SET_LO8(edx, MEM8(esi + ebp + 0xD4));
    MEM8(ebp + 0x862CC9) = LO8(edx);

loc_00287596: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebp * 4 + 0x862CC0);
    eax = eax << 5;
    eax = eax + ebp;
    eax = ecx + eax * 4 + 0xC4;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edx)) goto loc_002875D3; /* je: equal / zero */

loc_002875B7: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_002875CA; /* je: equal / zero */

loc_002875C3: ;
    MEM32(edx * 4 + 0x7761A0) = ecx;

loc_002875CA: ;
    edx = MEM32(eax);
    MEM32(ebp * 4 + 0x862CC0) = edx;

loc_002875D3: ;
    SET_LO8(eax, MEM8(esi + ebp + 0xE4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002876D9; /* je: equal / zero */

loc_002875E2: ;
    eax = MEM32(esp + 0x20);
    SET_LO8(ebx, MEM8(eax + ebp + 0xE8));
    ecx = ZX8(MEM8(ebp + 0x864EBF));
    esi = SX8(LO8(ebx));
    if (CMP_EQ(ecx, esi)) goto loc_002876D9; /* je: equal / zero */

loc_002875FF: ;
    if (CMP_EQ(MEM8(ebp + 0x862CCB), 0xFF)) goto loc_002876D9; /* je: equal / zero */

loc_0028760C: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_002876D9; /* je: equal / zero */

loc_00287619: ;
    ecx = ebp;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(ebp + 0x864EBF) = LO8(ebx);
    MEM8(0x86E983) = MEM8(0x86E983) | LO8(edx);
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(eax + 0x874));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00287681; /* jne: not equal / not zero */

loc_00287639: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0028763E: ;
    SET_LO8(ecx, MEM8(eax + 0x565));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00287681; /* jne: not equal / not zero */

loc_00287648: ;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00287657: ;
    ebx = (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB);
    edi = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_00287669: ;
    SET_LO16(esi, (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB));
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0028767C: ;
    esp = esp + 8;
    goto loc_002876D9;

loc_00287681: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_002876D9; /* jne: not equal / not zero */

loc_0028768A: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB);
    edx = MEM32(0x84A5F8);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    MEM8(eax + 0x7761F4) = LO8(ebx);
    eax = esi;
    SET_LO16(esi, MEM16(edi + edx + 0x60));
    edi = edi + edx;
    eax = eax << 6;
    eax = eax + 0x777ED0;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002876BD: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_002876C6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_002876D6: ;
    esp = esp + 0x1C;

loc_002876D9: ;
    ebp++;
    if (CMP_L(ebp, 2)) goto loc_00287560; /* jl: less (signed <) */

loc_002876E3: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4C);
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, edx)) goto loc_00286D7B; /* jl: less (signed <) */

loc_002876FC: ;
    ebx = 0; /* xor self */

loc_002876FE: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(ecx, ebx)) goto loc_0028782B; /* jle: less or equal (signed <=) */

loc_0028771B: ;
    goto loc_00287720;

    /* nop */

loc_00287720: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00287816; /* jne: not equal / not zero */

loc_0028772C: ;
    ebp = MEM32(esp + 0x18);
    ebp = ebp - MEM32(esp + 0x24);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    esi = eax + 0x864EC8;
    eax = MEM32(esi + 0x9DC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0028775F; /* je: equal / zero */

loc_0028774D: ;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp eax, MEM32(ecx + 8) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, MEM32(ecx + 8))) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00287816; /* jne: not equal / not zero */

loc_0028775F: ;
    edi = MEM32(0x8755F4);
    if (CMP_NE(edi, ebx)) goto loc_002877A9; /* jne: not equal / not zero */

loc_00287769: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_00287770: ;
    edi = eax;
    esp = esp + 4;
    if (CMP_EQ(edi, ebx)) goto loc_002877A1; /* je: equal / zero */

loc_00287779: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00287788: ;
    esp = esp + 8;
    goto loc_002877A3;

loc_0028778D: ;
    edi = 0x6047F4;
    goto loc_00286AF7;

loc_00287797: ;
    edi = 0x6047D4;
    goto loc_00286AF7;

loc_002877A1: ;
    edi = 0; /* xor self */

loc_002877A3: ;
    MEM32(0x8755F4) = edi;

loc_002877A9: ;
    ecx = MEM32(edi + 4);
    edi = MEM32(edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60470C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_002877BE: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002877CF; /* je: equal / zero */

loc_002877CB: ;
    eax = MEM32(esp + 0x10);

loc_002877CF: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_002877D9: ;
    PUSH32(esp, eax);
    edx = esp + 0x70;
    PUSH32(esp, 0x603FA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002877E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x84;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_002877FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_00287801: ;
    esp = esp + 0x20;
    PUSH32(esp, 0x862C40);
    eax = ebp;
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_00287810: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    ebx = 0; /* xor self */

loc_00287816: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00287720; /* jl: less (signed <) */

loc_0028782B: ;
    PUSH32(esp, 0); sub_0028BD90(); /* call 0x0028BD90 */

loc_00287830: ;
    PUSH32(esp, 0x862C40);
    MEM8(0x864EBB) = 1;
    PUSH32(esp, 0); sub_00296E90(); /* call 0x00296E90 */

loc_00287841: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028784E; /* jne: not equal / not zero */

loc_00287849: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028784E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00287896; /* je: equal / zero */

loc_00287874: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_00287896; /* jb: below (unsigned <) */

loc_0028787D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00287887: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028788F: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002878E5; /* jne: not equal / not zero */

loc_00287896: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x10) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_002878B9; /* je: equal / zero */

loc_002878AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002878B4: ;
    esp = esp + 8;
    goto loc_002878D6;

loc_002878B9: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_002878C6: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_002878C6; /* ja: above (unsigned >) */

loc_002878D1: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_002878D6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002878DE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00287919; /* je: equal / zero */

loc_002878E5: ;
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
    MEM8(eax + 0x30) = 0;
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax) = 0x603ED0;
    esi = eax;
    goto loc_0028791B;

loc_00287919: ;
    esi = 0; /* xor self */

loc_0028791B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00287927: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_00287950; /* jle: less or equal (signed <=) */

loc_00287934: ;
    edx = 0x864EC8;
    /* nop */

loc_00287940: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_00287952; /* jne: not equal / not zero */

loc_00287945: ;
    eax++;
    edx = edx + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_00287940; /* jl: less (signed <) */

loc_00287950: ;
    edx = 0; /* xor self */

loc_00287952: ;
    ecx = MEM32(edx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00287960: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
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
 * sub_00287980
 * Original: 0x00287980 - 0x00287A2F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00287980: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00287993; /* jne: not equal / not zero */

loc_0028798E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00287993: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002879DB; /* je: equal / zero */

loc_002879B9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_002879DB; /* jb: below (unsigned <) */

loc_002879C2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002879CC: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002879D4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002879FC; /* jne: not equal / not zero */

loc_002879DB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002879ED: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002879F5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00287A2F(); return; } /* je: equal / zero */

loc_002879FC: ;
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
    MEM32(eax) = 0x603ED0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287A40
 * Original: 0x00287A40 - 0x00287A65 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00287A40: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287A5F; /* je: equal / zero */

loc_00287A49: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00287A57: ;
    if (TEST_Z(eax, eax)) goto loc_00287A5F; /* je: equal / zero */

loc_00287A5B: ;
    MEM8(eax + 0x1B) = 1;

loc_00287A5F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00287A70
 * Original: 0x00287A70 - 0x00287AEB (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00287A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F540);
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
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00287AA4: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_00287ABD; /* je: equal / zero */

loc_00287ABB: ;
    MEM32(eax) = eax;

loc_00287ABD: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00287AD3; /* je: equal / zero */

loc_00287AD1: ;
    MEM32(ecx) = eax;

loc_00287AD3: ;
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
 * sub_00287B10
 * Original: 0x00287B10 - 0x00287C7D (365 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00287B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849E88);
    ebx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(0x849E8C) = LO8(ebx);
    if (TEST_Z(esi, esi)) goto loc_00287C7A; /* je: equal / zero */

loc_00287B28: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00287B30: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    ebp = MEM32(esi + 0x90);
    edi = edi | 0xFFFFFFFFu;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00287B55; /* jb: below (unsigned <) */

loc_00287B51: ;
    edi = 0; /* xor self */
    goto loc_00287BC4;

loc_00287B55: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_NZ(ebx, eax)) goto loc_00287BC4; /* jne: not equal / not zero */

loc_00287B64: ;
    if (CMP_GE(ecx, 2)) goto loc_00287B75; /* jge: greater or equal (signed >=) */

loc_00287B69: ;
    edx = MEM32(ecx * 4 + 0x8470FC);
    edx = MEM32(edx + 8);
    goto loc_00287B7A;

loc_00287B75: ;
    edx = 0x75A0B4;

loc_00287B7A: ;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x849E8C));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    SET_LO8(eax, MEM8(esi + 6));
    (void)0; /* cmp LO8(eax), 0xCE - flags set for next jcc */
    MEM8(0x849E8C) = LO8(ecx);
    ecx = MEM32(edx + 0x14);
    if (CMP_LE(LO8(eax), 0xCE)) goto loc_00287B9B; /* jle: less or equal (signed <=) */

loc_00287B96: ;
    if (CMP_LE(ecx, 0xFFFFFFCEu)) goto loc_00287BA4; /* jle: less or equal (signed <=) */

loc_00287B9B: ;
    if (CMP_GE(LO8(eax), 0x32)) goto loc_00287BAC; /* jge: greater or equal (signed >=) */

loc_00287B9F: ;
    if (CMP_L(ecx, 0x32)) goto loc_00287BAC; /* jl: less (signed <) */

loc_00287BA4: ;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) - MEM8(esi + 5));
    MEM8(esi + 5) = LO8(eax);

loc_00287BAC: ;
    MEM8(esi + 6) = LO8(ecx);
    eax = MEM32(edx + 8);
    if (TEST_Z(HI8(eax), 1)) goto loc_00287BC4; /* je: equal / zero */

loc_00287BB7: ;
    SET_LO8(edx, MEM8(esi + 5));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    ecx++;
    edi = ecx;

loc_00287BC4: ;
    SET_LO8(ecx, MEM8(esi + 4));
    edx = 1;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00287C6E; /* je: equal / zero */

loc_00287BD9: ;
    eax = MEM32(esi + 0x8C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x849E88) = ebp;
    if (TEST_Z(eax, eax)) goto loc_00287BF6; /* je: equal / zero */

loc_00287BE9: ;
    ecx = MEM32(esi + 0x88);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00287BF3: ;
    esp = esp + 8;

loc_00287BF6: ;
    eax = MEM32(esi + 0x88);
    if (TEST_Z(eax, eax)) goto loc_00287C41; /* je: equal / zero */

loc_00287C00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00287C06: ;
    if (TEST_NZ(eax, eax)) goto loc_00287C41; /* jne: not equal / not zero */

loc_00287C0A: ;
    eax = MEM32(esi + 0x88);
    if (TEST_Z(eax, eax)) goto loc_00287C41; /* je: equal / zero */

loc_00287C14: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00287C34: ;
    esp = esp + 4;
    MEM32(esi + 0x88) = 0;

loc_00287C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00287C47: ;
    if (TEST_NZ(eax, eax)) goto loc_00287C6E; /* jne: not equal / not zero */

loc_00287C4B: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00287C6B: ;
    esp = esp + 4;

loc_00287C6E: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = ebp;
    if (TEST_NZ(ebp, ebp)) goto loc_00287B30; /* jne: not equal / not zero */

loc_00287C78: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00287C7A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00287C80
 * Original: 0x00287C80 - 0x00287DF1 (369 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00287C80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x849E88);
    ebp = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00287DEE; /* je: equal / zero */

loc_00287C92: ;
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0xFF);
    goto loc_00287CA0;

    /* nop */

loc_00287CA0: ;
    SET_LO8(ecx, MEM8(esi + 4));
    edi = MEM32(esi + 0x90);
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(ebp, edx)) goto loc_00287DD6; /* jne: not equal / not zero */

loc_00287CB8: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648F58); /* movss */
    MEM8(0x776171) = 0;
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(ebx);
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287CF6; /* je: equal / zero */

loc_00287CE6: ;
    xmm0 = MEMF(0x649DDC); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00287CF6: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00287D08: ;
    SET_LO8(eax, MEM8(esi + 5));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x77616E) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287D2F; /* je: equal / zero */

loc_00287D18: ;
    MEM8(0x776171) = 0x32;
    MEM8(0x776170) = 0x32;
    MEM8(0x77616F) = 0xAF;
    goto loc_00287D43;

loc_00287D2F: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = LO8(ebx);

loc_00287D43: ;
    PUSH32(esp, 0x604A0C);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00287D59: ;
    SET_LO8(eax, MEM8(esi + 5));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x77616E) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287D7F; /* je: equal / zero */

loc_00287D69: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = LO8(ebx);
    goto loc_00287D94;

loc_00287D7F: ;
    MEM8(0x776171) = 0x32;
    MEM8(0x776170) = 0x32;
    MEM8(0x77616F) = 0xAF;

loc_00287D94: ;
    PUSH32(esp, 0x604A04);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00287DAA: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00287DD6; /* je: equal / zero */

loc_00287DC6: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00287DD6: ;
    SET_LO8(ecx, MEM8(esi + 4));
    edx = 1;
    edx = edx << LO8(ecx);
    esi = edi;
    ebp = ebp | edx;
    if (TEST_NZ(edi, edi)) goto loc_00287CA0; /* jne: not equal / not zero */

loc_00287DEC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00287DEE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00287E00
 * Original: 0x00287E00 - 0x002880EC (748 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00287E00(void)
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

loc_00287E00: ;
    esp = esp - 0x24;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00287E08: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ZX8(MEM8(0x849E8D));
    if (CMP_A(eax, 0x14)) goto loc_002880E8; /* ja: above (unsigned >) */

loc_00287E1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x2881EC)); return; /* indirect tail jmp */

    SET_LO8(eax, MEM8(0x849E94));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002880E6; /* je: equal / zero */

loc_00287E31: ;
    POP32(esp, edi);
    MEM8(0x849E8D) = LO8(eax);
    MEM8(0x849E94) = 0;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    eax = MEM32(0x77A5BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00424720(); /* call 0x00424720 */

loc_00287E7B: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(0x849E8D) = 0xA;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    if (TEST_NZ(eax, eax)) goto loc_002880E6; /* jne: not equal / not zero */

loc_00287E9E: ;
    MEM8(0x849E8D) = LO8(eax);
    PUSH32(esp, 0); sub_00423D30(); /* call 0x00423D30 */

loc_00287EA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004248F0(); /* call 0x004248F0 */

loc_00287EBA: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(0x849E8D) = 0xC;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    MEM8(0x849E8D) = 0;
    PUSH32(esp, 0); sub_00423D30(); /* call 0x00423D30 */

loc_00287EE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    POP32(esp, edi);
    MEM8(0x849E8D) = 0x10;
    MEM8(0x849E9C) = 1;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    eax = MEM32(0x77A5BC);
    PUSH32(esp, 0); sub_00258160(); /* call 0x00258160 */

loc_00287F3C: ;
    if (TEST_Z(eax, eax)) goto loc_002880E6; /* je: equal / zero */

loc_00287F44: ;
    eax = MEM32(0x77A5BC);
    PUSH32(esp, 0); sub_004227A0(); /* call 0x004227A0 */

loc_00287F4E: ;
    eax++;
    MEM16(0x77A5C4) = LO16(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = SX16(LO16(eax));
    PUSH32(esp, 0x162);
    eax = eax << 5;
    PUSH32(esp, 0x604A14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00287F6D: ;
    MEM32(0x849E90) = eax;
    eax = MEM32(0x77A5BC);
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_00287F7F: ;
    (void)0; /* cmp MEM16(0x77A5C4), 1 - flags set for next jcc */
    ecx = MEM32(0x849E90);
    MEM32(ecx) = eax;
    eax = MEM32(0x849E90);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x849E90);
    MEM32(ecx + 8) = 0xFFFFFFFFu;
    if (CMP_LE(MEM16(0x77A5C4), 1)) goto loc_00287FEB; /* jle: less or equal (signed <=) */

loc_00287FA6: ;
    edi = 0x20;
    esi = 0; /* xor self */
    /* nop */

loc_00287FB0: ;
    ecx = MEM32(0x77A5BC);
    eax = esi;
    PUSH32(esp, 0); sub_00422800(); /* call 0x00422800 */

loc_00287FBD: ;
    ecx = MEM32(0x849E90);
    MEM32(edi + ecx) = eax;
    eax = MEM32(0x849E90);
    MEM32(edi + eax + 4) = edx;
    ecx = MEM32(0x849E90);
    eax = (uint32_t)(int32_t)SMEM16(0x77A5C4);
    MEM32(edi + ecx + 8) = esi;
    esi++;
    edx = esi + 1;
    edi = edi + 0x20;
    if (CMP_L(edx, eax)) goto loc_00287FB0; /* jl: less (signed <) */

loc_00287FEB: ;
    eax = MEM32(0x849E90);
    if (TEST_Z(eax, eax)) goto loc_002880E6; /* je: equal / zero */

loc_00287FF8: ;
    POP32(esp, edi);
    MEM16(0x77A5B4) = 0;
    MEM8(0x849E8D) = 0x12;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    SET_LO16(eax, MEM16(0x77A5B4));
    esi = 0; /* xor self */
    (void)0; /* cmp LO16(eax), MEM16(0x77A5C4) - flags set for next jcc */
    MEM16(0x77A5B0) = LO16(eax);
    if (CMP_GE(LO16(eax), MEM16(0x77A5C4))) goto loc_00288069; /* jge: greater or equal (signed >=) */

loc_0028802A: ;
    /* nop */

loc_00288030: ;
    if (CMP_GE(esi, 0xA)) goto loc_00288069; /* jge: greater or equal (signed >=) */

loc_00288035: ;
    ecx = SX16(LO16(eax));
    eax = MEM32(0x849E90);
    ecx = ecx << 5;
    edx = MEM32(ecx + eax + 4);
    eax = MEM32(ecx + eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00288290(); /* call 0x00288290 */

loc_0028804E: ;
    SET_LO16(eax, MEM16(0x77A5B4));
    esp = esp + 8;
    SET_LO16(eax, LO16(eax) + 1);
    esi++;
    (void)0; /* cmp LO16(eax), MEM16(0x77A5C4) - flags set for next jcc */
    MEM16(0x77A5B4) = LO16(eax);
    if (CMP_L(LO16(eax), MEM16(0x77A5C4))) goto loc_00288030; /* jl: less (signed <) */

loc_00288069: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004250F0(); /* call 0x004250F0 */

loc_00288072: ;
    esp = esp + 8;
    POP32(esp, edi);
    MEM8(0x849E8D) = 0x13;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    SET_LO16(eax, MEM16(0x77A5B0));
    (void)0; /* cmp LO16(eax), MEM16(0x77A5B4) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_GE(LO16(eax), MEM16(0x77A5B4))) goto loc_002880CA; /* jge: greater or equal (signed >=) */

loc_0028809B: ;
    goto loc_002880A0;

    /* nop */

loc_002880A0: ;
    esi = MEM32(0x849E90);
    ebx = SX16(LO16(eax));
    ebx = ebx << 5;
    ebx = ebx + esi;
    PUSH32(esp, 0); sub_00288320(); /* call 0x00288320 */

loc_002880B3: ;
    SET_LO16(eax, MEM16(0x77A5B0));
    SET_LO16(eax, LO16(eax) + 1);
    (void)0; /* cmp LO16(eax), MEM16(0x77A5B4) - flags set for next jcc */
    MEM16(0x77A5B0) = LO16(eax);
    if (CMP_L(LO16(eax), MEM16(0x77A5B4))) goto loc_002880A0; /* jl: less (signed <) */

loc_002880CA: ;
    PUSH32(esp, 0); sub_004251D0(); /* call 0x004251D0 */

loc_002880CF: ;
    SET_LO16(eax, MEM16(0x77A5C4));
    if (CMP_GE(MEM16(0x77A5B4), LO16(eax))) { sub_002880EC(); return; } /* jge: greater or equal (signed >=) */

loc_002880DE: ;
    MEM8(0x849E8D) = 0x12;
    POP32(esp, ebx);

loc_002880E6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002880E8: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00288290
 * Original: 0x00288290 - 0x0028831A (138 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288290: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77A5B6);
    eax--;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_002882D2; /* je: equal / zero */

loc_002882A6: ;
    eax--;
    if ((eax == 0)) goto loc_002882BF; /* je: equal / zero */

loc_002882A9: ;
    eax--;
    if ((eax != 0)) goto loc_00288304; /* jne: not equal / not zero */

loc_002882AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    esi = 3;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_002882BA: ;
    esp = esp + 8;
    goto loc_00288304;

loc_002882BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    esi = 2;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_002882CD: ;
    esp = esp + 8;
    goto loc_00288304;

loc_002882D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    esi = 1;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_002882E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = esi;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_002882E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 2;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_002882F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 3;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_00288301: ;
    esp = esp + 0x20;

loc_00288304: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77A5B6);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00425080(); /* call 0x00425080 */

loc_00288312: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288320
 * Original: 0x00288320 - 0x00288480 (352 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288320: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77A5B6);
    eax--;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0028835F; /* je: equal / zero */

loc_0028832C: ;
    eax--;
    if ((eax == 0)) goto loc_0028834C; /* je: equal / zero */

loc_0028832F: ;
    eax--;
    if ((eax != 0)) goto loc_002883EB; /* jne: not equal / not zero */

loc_00288336: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = ebx + 0xC;
    PUSH32(esp, ecx);
    eax = 3;
    goto loc_002883D9;

loc_0028834C: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx + 0xC;
    eax = 2;
    goto loc_002883D9;

loc_0028835F: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    edi = ebx + 0xC;
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_00288375: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00288382; /* jne: not equal / not zero */

loc_0028837C: ;
    MEM32(edi) = 0;

loc_00288382: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    edi = ebx + 0x10;
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_00288398: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002883A5; /* jne: not equal / not zero */

loc_0028839F: ;
    MEM32(edi) = 0;

loc_002883A5: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ebx + 0x14;
    eax = 1;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_002883BB: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002883C8; /* jne: not equal / not zero */

loc_002883C2: ;
    MEM32(edi) = 0;

loc_002883C8: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edi = ebx + 0x18;
    PUSH32(esp, edx);
    eax = 1;

loc_002883D9: ;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_002883DE: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002883EB; /* jne: not equal / not zero */

loc_002883E5: ;
    MEM32(edi) = 0;

loc_002883EB: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    esi = (uint32_t)(int32_t)SMEM8(0x77A5B6);
    PUSH32(esp, eax);
    edi = ebx + 0x1C;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00425320(); /* call 0x00425320 */

loc_00288403: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00288410; /* jne: not equal / not zero */

loc_0028840A: ;
    MEM32(edi) = 0x7FFFFFFF;

loc_00288410: ;
    if (CMP_NE(MEM8(0x77A5B6), 1)) goto loc_0028847D; /* jne: not equal / not zero */

loc_00288419: ;
    esi = 0; /* xor self */
    goto loc_00288420;

    /* nop */

loc_00288420: ;
    if (CMP_NE(MEM32(esi * 4 + 0x849E54), 2)) goto loc_00288477; /* jne: not equal / not zero */

loc_0028842A: ;
    eax = esi;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_00288431: ;
    ecx = MEM32(ebx);
    if (CMP_NE(ecx, eax)) goto loc_00288477; /* jne: not equal / not zero */

loc_00288437: ;
    eax = MEM32(ebx + 4);
    if (CMP_NE(eax, edx)) goto loc_00288477; /* jne: not equal / not zero */

loc_0028843E: ;
    eax = MEM32(esi * 4 + 0x862CD0);
    if (TEST_Z(eax, eax)) goto loc_00288477; /* je: equal / zero */

loc_00288449: ;
    edx = MEM32(ebx + 0xC);
    ecx = eax;
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(esi * 4 + 0x862CD0);
    ecx = MEM32(ebx + 0x14);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi * 4 + 0x862CD0);
    eax = MEM32(ebx + 0x18);
    MEM32(edx + 0x1C) = eax;
    ecx = MEM32(esi * 4 + 0x862CD0);
    edx = MEM32(edi);
    MEM32(ecx + 0x24) = edx;

loc_00288477: ;
    esi++;
    if (CMP_L(esi, 2)) goto loc_00288420; /* jl: less (signed <) */

loc_0028847D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00288480
 * Original: 0x00288480 - 0x002884A9 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288480(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288480: ;
    xmm0 = MEMF(0x648F7C); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    edx = esi + 0x1C;
    ebx = 6;
    g_seh_ebp = ebp; sub_002884B0(); return; /* tail jmp 0x002884B0 */

}

/**
 * sub_002884F0
 * Original: 0x002884F0 - 0x0028856D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002884F0(void)
{

loc_002884F0: ;
    PUSH32(esp, esi);
    esi = ecx;
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
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604B48;
    ecx = MEM32(esi);
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x6C) = ecx;
    esi = MEM32(edx);
    ecx = eax + 0x70;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x80;
    ecx = 9;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00288570
 * Original: 0x00288570 - 0x00288576 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288570(void)
{

loc_00288570: ;
    eax = 0x26;
    esp += 4; return; /* ret */

}

/**
 * sub_00288580
 * Original: 0x00288580 - 0x002885E4 (100 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288580: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00288588: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00288590: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002885E4(); return; } /* je: equal / zero */

loc_00288594: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00288590; /* jl: less (signed <) */

loc_002885A0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x3E);
    ecx = esi + 0x3F;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3D);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x604BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002885DD: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00288660
 * Original: 0x00288660 - 0x00288715 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288660(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288660: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00288673; /* jne: not equal / not zero */

loc_0028866E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00288673: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002886BB; /* je: equal / zero */

loc_00288699: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_002886BB; /* jb: below (unsigned <) */

loc_002886A2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002886AC: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002886B4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002886DC; /* jne: not equal / not zero */

loc_002886BB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002886CD: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002886D5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00288715(); return; } /* je: equal / zero */

loc_002886DC: ;
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
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x600A90;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288720
 * Original: 0x00288720 - 0x00288754 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288720(void)
{

loc_00288720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0x1D4;
    edi = ecx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00288735: ;
    eax = MEM32(edi + 0x3C);
    ebx = MEM32(edi + 0x38);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00288742: ;
    PUSH32(esp, 0x20);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028874B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00288760
 * Original: 0x00288760 - 0x002887A4 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288771: ;
    (void)0; /* cmp eax, 0x1D4 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 0x1D4)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x20);
    MEM8(edi + 0x40) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288783: ;
    PUSH32(esp, 0x20);
    ebx = 0; /* xor self */
    ebp = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028878E: ;
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    eax = eax | ebx;
    ecx = ecx | ebp;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002887B0
 * Original: 0x002887B0 - 0x0028890C (348 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002887B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002887B0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00288900; /* je: equal / zero */

loc_002887C5: ;
    if (CMP_NE(MEM32(0x863D04), 2)) goto loc_00288900; /* jne: not equal / not zero */

loc_002887D2: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00288900; /* je: equal / zero */

loc_002887DD: ;
    eax = MEM32(0x863D08);
    if (CMP_EQ(eax, 3)) goto loc_002887F0; /* je: equal / zero */

loc_002887E7: ;
    if (CMP_NE(eax, 2)) goto loc_00288900; /* jne: not equal / not zero */

loc_002887F0: ;
    esi = MEM32(0x86EA24);
    eax = MEM32(esi);
    PUSH32(esp, esi);
    edi = ebp + 0x38;
    PUSH32(esp, eax);
    edx = edi;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00289050(); /* call 0x00289050 */

loc_00288808: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    if (CMP_NE(eax, esi)) goto loc_00288900; /* jne: not equal / not zero */

loc_00288817: ;
    if (CMP_B(MEM32(0x86EA28), 0xA)) goto loc_0028882A; /* jb: below (unsigned <) */

loc_00288820: ;
    esi = 0x86EA20;
    PUSH32(esp, 0); sub_00288FE0(); /* call 0x00288FE0 */

loc_0028882A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    ebx = 0x86EA20;
    PUSH32(esp, 0); sub_00289020(); /* call 0x00289020 */

loc_00288837: ;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_00288841: ;
    esi = eax;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421DC0(); /* call 0x00421DC0 */

loc_0028884D: ;
    PUSH32(esp, 0xA8);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00288859: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002888FF; /* je: equal / zero */

loc_00288864: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    PUSH32(esp, 0x863D13);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_002884F0(); /* call 0x002884F0 */

loc_00288879: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002888FF; /* je: equal / zero */

loc_00288883: ;
    eax = esp + 0x14;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00289250(); /* call 0x00289250 */

loc_00288890: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F24);
    MEM32(edi + 0x34) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(edi + 0x38) = 0;
    (void)0; /* cmp MEM8(0x862C9C), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM8(0x862C9C), 1)) ? 1 : 0); /* sete */
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) - LO8(edx));
    MEM8(edi + 0x3C) = LO8(eax);
    MEM8(edi + 0x3E) = LO8(ecx);
    SET_LO8(edx, MEM8(0x862C64));
    esi = edi + 0x3F;
    PUSH32(esp, 0x604BB0);
    PUSH32(esp, esi);
    MEM8(edi + 0x3D) = LO8(edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002888DA: ;
    eax = ZX8(MEM8(0x86E980));
    esp = esp + 8;
    ecx = 0; /* xor self */

loc_002888E6: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(eax, edx)) { sub_0028890C(); return; } /* jne: not equal / not zero */

loc_002888F1: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_002888E6; /* jl: less (signed <) */

loc_002888F7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_002888FF: ;
    POP32(esp, ebx);

loc_00288900: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00288940
 * Original: 0x00288940 - 0x002889FE (190 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288940: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00288953; /* jne: not equal / not zero */

loc_0028894E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00288953: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002889A1; /* je: equal / zero */

loc_00288979: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA8)) goto loc_002889A1; /* jb: below (unsigned <) */

loc_00288985: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028898F: ;
    PUSH32(esp, 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028899A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002889C5; /* jne: not equal / not zero */

loc_002889A1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002889B3: ;
    PUSH32(esp, 0xA8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002889BE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002889FE(); return; } /* je: equal / zero */

loc_002889C5: ;
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
    MEM32(eax + 0x60) = ebx;
    MEM32(eax + 0x64) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604B48;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288A10
 * Original: 0x00288A10 - 0x00288A4B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288A10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x64);
    ebx = MEM32(edi + 0x60);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00288A27: ;
    PUSH32(esp, 0x20);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00288A30: ;
    eax = MEM32(esi);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi + 0x68;
    if (TEST_NZ(eax, eax)) { sub_00288A4B(); return; } /* jne: not equal / not zero */

loc_00288A3C: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, 0); sub_0041DF20(); /* call 0x0041DF20 */

loc_00288A46: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_00288A61(); return; /* tail jmp 0x00288A61 */

}

/**
 * sub_00288B40
 * Original: 0x00288B40 - 0x00288B8D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288B51: ;
    PUSH32(esp, 0x20);
    ebx = 0; /* xor self */
    ebp = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288B5C: ;
    eax = eax | ebx;
    ecx = 0; /* xor self */
    esp = esp + 8;
    ecx = ecx | ebp;
    MEM32(edi + 0x60) = eax;
    MEM32(edi + 0x64) = ecx;
    ebx = edi + 0x68;
    ebp = 8;

loc_00288B73: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288B7A: ;
    esp = esp + 4;
    MEM8(ebx) = LO8(eax);
    ebx++;
    ebp--;
    if ((ebp != 0)) goto loc_00288B73; /* jne: not equal / not zero */

loc_00288B83: ;
    ebx = edi + 0x70;
    ebp = 0x10;
    g_seh_ebp = ebp; sub_00288B90(); return; /* tail jmp 0x00288B90 */

}

/**
 * sub_00288C20
 * Original: 0x00288C20 - 0x00288DF2 (466 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288C20(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00288C20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00288DE7; /* jne: not equal / not zero */

loc_00288C34: ;
    eax = MEM32(ebx + 0x60);
    if (CMP_NE(eax, MEM32(0x863D38))) goto loc_00288DE7; /* jne: not equal / not zero */

loc_00288C43: ;
    ecx = MEM32(ebx + 0x64);
    if (CMP_NE(ecx, MEM32(0x863D3C))) goto loc_00288DE7; /* jne: not equal / not zero */

loc_00288C52: ;
    MEM32(esp + 0x10) = 0;
    ebp = 0x863D4C;
    /* nop */

loc_00288C60: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_00288CAE; /* je: equal / zero */

loc_00288C66: ;
    esi = ebx + 0x3F;
    eax = ebp;
    goto loc_00288C70;

    /* nop */

loc_00288C70: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_00288C94; /* jne: not equal / not zero */

loc_00288C78: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00288C90; /* je: equal / zero */

loc_00288C7C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_00288C94; /* jne: not equal / not zero */

loc_00288C86: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00288C70; /* jne: not equal / not zero */

loc_00288C90: ;
    eax = 0; /* xor self */
    goto loc_00288C99;

loc_00288C94: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00288C99: ;
    if (TEST_NZ(eax, eax)) goto loc_00288CAE; /* jne: not equal / not zero */

loc_00288C9D: ;
    ecx = 4;
    edi = ebp + 0x28;
    esi = ebx + 0x70;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00288CC4; /* je: equal / zero */

loc_00288CAE: ;
    edx = MEM32(esp + 0x10);
    edx++;
    ebp = ebp + 0x68;
    (void)0; /* cmp ebp, 0x86422C - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(ebp, 0x86422C)) goto loc_00288C60; /* jl: less (signed <) */

loc_00288CC2: ;
    goto loc_00288CD3;

loc_00288CC4: ;
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x68);
    edi = edi + 0x863D40;
    if ((edi != 0)) goto loc_00288D20; /* jne: not equal / not zero */

loc_00288CD3: ;
    edi = 0; /* xor self */
    eax = 0x863D4C;
    /* nop */

loc_00288CE0: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00288CFB; /* je: equal / zero */

loc_00288CE5: ;
    eax = eax + 0x68;
    edi++;
    if (CMP_L(eax, 0x86422C)) goto loc_00288CE0; /* jl: less (signed <) */

loc_00288CF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00288CFB: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x68);
    edi = edi + 0x863D40;
    if ((edi == 0)) goto loc_00288DE7; /* je: equal / zero */

loc_00288D0A: ;
    PUSH32(esp, 0x20);
    ecx = ebx + 0x3F;
    PUSH32(esp, ecx);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00288D19: ;
    esp = esp + 0xC;
    MEM8(edi + 0x2B) = 0;

loc_00288D20: ;
    edx = MEM32(0x777EC0);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00288D40; /* jle: less or equal (signed <=) */

loc_00288D2C: ;
    esi = MEM32(ebx + 0x34);
    ecx = 0x776F24;

loc_00288D34: ;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_00288D43; /* je: equal / zero */

loc_00288D38: ;
    eax++;
    ecx = ecx + 0x28;
    if (CMP_L(eax, edx)) goto loc_00288D34; /* jl: less (signed <) */

loc_00288D40: ;
    eax = eax | 0xFFFFFFFFu;

loc_00288D43: ;
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = 0;
    SET_LO8(eax, MEM8(ebx + 0x3C));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x3E));
    MEM8(edi + 3) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x3D));
    MEM8(edi + 4) = LO8(edx);
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00288D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00288D76: ;
    ebp = MEM32(0x828B48);
    esi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - esi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00288D94: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00288DA6; /* jge: greater or equal (signed >=) */

loc_00288DA0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00288DA6: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ebx + 0x70;
    esi = ebx + 0x80;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0x68);
    MEM32(edi + 0x2C) = eax;
    ecx = MEM32(ebx + 0x6C);
    MEM32(edi + 0x30) = ecx;
    ecx = MEM32(edx);
    eax = edi + 0x34;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    edi = edi + 0x44;
    ecx = 9;
    MEM32(eax + 0xC) = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00288DE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00288E00
 * Original: 0x00288E00 - 0x00288EAF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288E00: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00288E13; /* jne: not equal / not zero */

loc_00288E0E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00288E13: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00288E5B; /* je: equal / zero */

loc_00288E39: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_00288E5B; /* jb: below (unsigned <) */

loc_00288E42: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00288E4C: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00288E54: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00288E7C; /* jne: not equal / not zero */

loc_00288E5B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00288E6D: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00288E75: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00288EAF(); return; } /* je: equal / zero */

loc_00288E7C: ;
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
    MEM32(eax) = 0x604AE0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288EC0
 * Original: 0x00288EC0 - 0x00288F13 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288ECF: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288ED9: ;
    esp = esp + 8;
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    MEM32(edi + 0x38) = eax;
    if (CMP_L(eax, 0x20)) goto loc_00288EFE; /* jl: less (signed <) */

loc_00288EE4: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288EEB: ;
    ecx = MEM32(edi + 0x38);
    ecx = ecx + 0xFFFFFFE0u;
    eax = ecx;
    esp = esp + 4;
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    MEM32(edi + 0x38) = ecx;
    if (CMP_GE(eax, 0x20)) goto loc_00288EE4; /* jge: greater or equal (signed >=) */

loc_00288EFE: ;
    edi = MEM32(edi + 0x38);
    if (TEST_Z(edi, edi)) goto loc_00288F0E; /* je: equal / zero */

loc_00288F05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00288F0B: ;
    esp = esp + 4;

loc_00288F0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00288F20
 * Original: 0x00288F20 - 0x00288FCF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288F20: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00288F33; /* jne: not equal / not zero */

loc_00288F2E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00288F33: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00288F7B; /* je: equal / zero */

loc_00288F59: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_00288F7B; /* jb: below (unsigned <) */

loc_00288F62: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00288F6C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00288F74: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00288F9C; /* jne: not equal / not zero */

loc_00288F7B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00288F8D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00288F95: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00288FCF(); return; } /* je: equal / zero */

loc_00288F9C: ;
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
    MEM32(eax) = 0x604A78;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00288FE0
 * Original: 0x00288FE0 - 0x00289011 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00288FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00288FE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_0028900F; /* je: equal / zero */

loc_00288FEA: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00289005: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    eax--;
    MEM32(esi + 8) = eax;

loc_0028900F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289020
 * Original: 0x00289020 - 0x00289048 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289020(void)
{

loc_00289020: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00298240(); /* call 0x00298240 */

loc_0028902F: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_0028903D: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00289050
 * Original: 0x00289050 - 0x0028907E (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289050: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(ecx, edi)) { sub_0028907E(); return; } /* je: equal / zero */

loc_0028905D: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    edx = MEM32(edx + 4);
    PUSH32(esp, ebx);

loc_00289064: ;
    ebx = MEM32(ecx + 8);
    if (CMP_NE(ebx, esi)) goto loc_00289072; /* jne: not equal / not zero */

loc_0028906B: ;
    ebx = MEM32(ecx + 0xC);
    if (CMP_EQ(ebx, edx)) goto loc_00289078; /* je: equal / zero */

loc_00289072: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, edi)) goto loc_00289064; /* jne: not equal / not zero */

loc_00289078: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00289090
 * Original: 0x00289090 - 0x00289242 (434 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289090(void)
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

loc_00289090: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(0x862E6C));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    eax = SX8(LO8(edx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_LE(eax & eax, 0)) goto loc_002890CA; /* jle: less or equal (signed <=) */

loc_002890AC: ;
    ecx = 0x862E70;

loc_002890B1: ;
    ebp = MEM32(ecx);
    if (CMP_NE(ebp, ebx)) goto loc_002890C2; /* jne: not equal / not zero */

loc_002890B7: ;
    ebp = MEM32(ecx + 4);
    if (CMP_EQ(ebp, edi)) goto loc_0028915A; /* je: equal / zero */

loc_002890C2: ;
    esi++;
    ecx = ecx + 0x20;
    if (CMP_L(esi, eax)) goto loc_002890B1; /* jl: less (signed <) */

loc_002890CA: ;
    if (CMP_NE(LO8(edx), 0x64)) goto loc_002891BA; /* jne: not equal / not zero */

loc_002890D3: ;
    xmm0 = MEMF(0x862E78); /* movss */
    eax = 0; /* xor self */
    edx = 1;
    ecx = 0x862EB8;

loc_002890E7: ;
    /* comiss xmm0, MEMF(ecx + -32) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + -32))) goto loc_002890F4; /* jbe: below or equal (unsigned <=) */

loc_002890ED: ;
    xmm0 = MEMF(ecx + -32); /* movss */
    eax = edx;

loc_002890F4: ;
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx))) goto loc_00289100; /* jbe: below or equal (unsigned <=) */

loc_002890F9: ;
    xmm0 = MEMF(ecx); /* movss */
    eax = edx + 1;

loc_00289100: ;
    /* comiss xmm0, MEMF(ecx + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x20))) goto loc_0028910E; /* jbe: below or equal (unsigned <=) */

loc_00289106: ;
    xmm0 = MEMF(ecx + 0x20); /* movss */
    eax = edx + 2;

loc_0028910E: ;
    /* comiss xmm0, MEMF(ecx + 0x40) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x40))) goto loc_0028911C; /* jbe: below or equal (unsigned <=) */

loc_00289114: ;
    xmm0 = MEMF(ecx + 0x40); /* movss */
    eax = edx + 3;

loc_0028911C: ;
    ecx = ecx + 0x80;
    edx = edx + 4;
    if (CMP_L(ecx, 0x863AB8)) goto loc_002890E7; /* jl: less (signed <) */

loc_0028912D: ;
    if (CMP_GE(edx, 0x64)) goto loc_002891C2; /* jge: greater or equal (signed >=) */

loc_00289136: ;
    ecx = edx;
    ecx = ecx << 5;
    ecx = ecx + 0x862E78;

loc_00289141: ;
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx))) goto loc_0028914C; /* jbe: below or equal (unsigned <=) */

loc_00289146: ;
    xmm0 = MEMF(ecx); /* movss */
    eax = edx;

loc_0028914C: ;
    ecx = ecx + 0x20;
    edx++;
    if (CMP_L(ecx, 0x863AF8)) goto loc_00289141; /* jl: less (signed <) */

loc_00289158: ;
    goto loc_002891C2;

loc_0028915A: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00289167: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00289175: ;
    edi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00289193: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002891A5; /* jge: greater or equal (signed >=) */

loc_0028919F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002891A5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi << 5;
    POP32(esp, edi);
    MEMF(esi + 0x862E78) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002891BA: ;
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(0x862E6C) = LO8(edx);

loc_002891C2: ;
    eax = eax << 5;
    eax = eax + 0x862E70;
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_002891E1: ;
    esp = esp + 0xC;
    MEM8(esi + 0x1C) = 0;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002891F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00289203: ;
    edi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00289221: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00289233; /* jge: greater or equal (signed >=) */

loc_0028922D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00289233: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_00289250
 * Original: 0x00289250 - 0x002892B8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289250(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289250: ;
    MEM32(edx) = 0;
    MEM32(eax) = 0;
    if (TEST_Z(MEM8(0x86E980), 1)) goto loc_00289267; /* je: equal / zero */

loc_00289265: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_00289267: ;
    if (TEST_Z(MEM8(0x86E980), 2)) goto loc_00289272; /* je: equal / zero */

loc_00289270: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_00289272: ;
    SET_LO8(eax, MEM8(0x864EC1));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002892B6; /* jle: less or equal (signed <=) */

loc_0028927E: ;
    ecx = 0x86561C;

loc_00289283: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 1)) goto loc_002892A4; /* je: equal / zero */

loc_0028928A: ;
    if (CMP_EQ(eax, 3)) goto loc_002892A4; /* je: equal / zero */

loc_0028928F: ;
    if (CMP_EQ(eax, 4)) goto loc_002892A4; /* je: equal / zero */

loc_00289294: ;
    if (TEST_Z(MEM8(ecx + 4), 1)) goto loc_0028929C; /* je: equal / zero */

loc_0028929A: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_0028929C: ;
    if (TEST_Z(MEM8(ecx + 4), 2)) goto loc_002892A4; /* je: equal / zero */

loc_002892A2: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_002892A4: ;
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esi++;
    ecx = ecx + 0xA50;
    if (CMP_L(esi, eax)) goto loc_00289283; /* jl: less (signed <) */

loc_002892B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002892C0
 * Original: 0x002892C0 - 0x0028936C (172 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002892C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002892C0: ;
    esp = esp - 0x10;
    ecx = ZX8(MEM8(0x86E980));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(LO8(ecx), 1)) goto loc_002892F2; /* je: equal / zero */

loc_002892E4: ;
    eax = MEM32(0x862CC0);
    edx = MEM32(esp + eax * 4);
    eax = esp + eax * 4;
    edx++;
    MEM32(eax) = edx;

loc_002892F2: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00289305; /* je: equal / zero */

loc_002892F7: ;
    eax = MEM32(0x862CC4);
    ecx = MEM32(esp + eax * 4);
    eax = esp + eax * 4;
    ecx++;
    MEM32(eax) = ecx;

loc_00289305: ;
    eax = (uint32_t)(int32_t)SMEM8(0x864EC1);
    if (CMP_LE(eax & eax, 0)) goto loc_0028935A; /* jle: less or equal (signed <=) */

loc_00289310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x865620;
    ecx = 0x864ED0;
    edi = eax;
    /* nop */

loc_00289320: ;
    edx = ZX8(MEM8(esi));
    if (TEST_Z(LO8(edx), 1)) goto loc_00289336; /* je: equal / zero */

loc_00289328: ;
    eax = MEM32(ecx + -4);
    ebx = MEM32(esp + eax * 4 + 0xC);
    eax = esp + eax * 4 + 0xC;
    ebx++;
    MEM32(eax) = ebx;

loc_00289336: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_00289348; /* je: equal / zero */

loc_0028933B: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + eax * 4 + 0xC);
    eax = esp + eax * 4 + 0xC;
    edx++;
    MEM32(eax) = edx;

loc_00289348: ;
    esi = esi + 0xA50;
    ecx = ecx + 0xA50;
    edi--;
    if ((edi != 0)) goto loc_00289320; /* jne: not equal / not zero */

loc_00289357: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0028935A: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(edx, ecx)) ? 1 : 0); /* setge */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00289370
 * Original: 0x00289370 - 0x002893E9 (121 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289370: ;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_002893E1; /* jle: less or equal (signed <=) */

loc_0028938A: ;
    ebp = 0x865904;
    /* nop */

loc_00289390: ;
    edi = ZX8(MEM8(ebp + -740));
    ecx = 0; /* xor self */
    esi = ebp;
    goto loc_002893A0;

    /* nop */

loc_002893A0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(edi, edx)) goto loc_002893C6; /* je: equal / zero */

loc_002893AB: ;
    if (TEST_S(ecx, ecx)) goto loc_002893C6; /* jl: less (signed <) */

loc_002893AF: ;
    if (CMP_GE(ecx, 2)) goto loc_002893C6; /* jge: greater or equal (signed >=) */

loc_002893B4: ;
    edx = MEM32(esi);
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(edx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002893C6; /* je: equal / zero */

loc_002893C0: ;
    if (CMP_EQ(edx, MEM32(esp + 0x10))) { sub_002893E9(); return; } /* je: equal / zero */

loc_002893C6: ;
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, 2)) goto loc_002893A0; /* jl: less (signed <) */

loc_002893CF: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_00289390; /* jl: less (signed <) */

loc_002893E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289400
 * Original: 0x00289400 - 0x00289424 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289400: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00289406: ;
    if (TEST_NZ(eax, eax)) goto loc_00289421; /* jne: not equal / not zero */

loc_0028940A: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edi = edi;

loc_00289410: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_00289423; /* je: equal / zero */

loc_0028941C: ;
    if (CMP_L(eax, 2)) goto loc_00289410; /* jl: less (signed <) */

loc_00289421: ;
    eax = 0; /* xor self */

loc_00289423: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00289430
 * Original: 0x00289430 - 0x00289447 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289430(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289430: ;
    if (TEST_S(eax, eax)) { sub_00289447(); return; } /* jl: less (signed <) */

loc_00289434: ;
    if (CMP_GE(eax, 2)) { sub_00289447(); return; } /* jge: greater or equal (signed >=) */

loc_00289439: ;
    SET_LO8(eax, MEM8(eax + 0x862CCB));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_00289447(); return; } /* je: equal / zero */

loc_00289443: ;
    eax = SX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_00289450
 * Original: 0x00289450 - 0x002894F3 (163 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289450: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002894F0; /* je: equal / zero */

loc_0028945D: ;
    eax = ZX8(MEM8(0x86E980));
    edx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_00289477; /* je: equal / zero */

loc_0028946A: ;
    SET_LO8(ecx, MEM8(0x862CC9));
    edx = 1;
    edx = edx << LO8(ecx);

loc_00289477: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0028948A; /* je: equal / zero */

loc_0028947B: ;
    SET_LO8(ecx, MEM8(0x862CCA));
    eax = 1;
    eax = eax << LO8(ecx);
    edx = edx | eax;

loc_0028948A: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_002894D5; /* jle: less or equal (signed <=) */

loc_00289496: ;
    PUSH32(esp, ebx);
    eax = 0x865620;
    esi = ecx;
    PUSH32(esp, edi);
    /* nop */

loc_002894A0: ;
    ebx = ZX8(MEM8(eax));
    if (TEST_Z(LO8(ebx), 1)) goto loc_002894B7; /* je: equal / zero */

loc_002894A8: ;
    SET_LO8(ecx, MEM8(eax + -1860));
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx | edi;

loc_002894B7: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_002894CB; /* je: equal / zero */

loc_002894BC: ;
    SET_LO8(ecx, MEM8(eax + -1859));
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx | edi;

loc_002894CB: ;
    eax = eax + 0xA50;
    esi--;
    if ((esi != 0)) goto loc_002894A0; /* jne: not equal / not zero */

loc_002894D3: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002894D5: ;
    eax = 0; /* xor self */

loc_002894D7: ;
    esi = 1;
    ecx = eax;
    esi = esi << LO8(ecx);
    if (TEST_Z(edx, esi)) goto loc_002894EA; /* je: equal / zero */

loc_002894E4: ;
    eax++;
    if (CMP_L(eax, 0x20)) goto loc_002894D7; /* jl: less (signed <) */

loc_002894EA: ;
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, 0x20)) goto loc_002894F2; /* jne: not equal / not zero */

loc_002894F0: ;
    SET_LO8(eax, 0xF);

loc_002894F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00289500
 * Original: 0x00289500 - 0x00289587 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289500: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_00289522; /* jne: not equal / not zero */

loc_0028950C: ;
    if (TEST_S(esi, esi)) goto loc_00289583; /* jl: less (signed <) */

loc_00289510: ;
    ecx = MEM32(0x84A5F8);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00289522: ;
    SET_LO8(eax, MEM8(0x86E9A2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028955B; /* je: equal / zero */

loc_0028952B: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00289539; /* jne: not equal / not zero */

loc_00289536: ;
    eax = eax | 0xFFFFFFFFu;

loc_00289539: ;
    if (CMP_NE(LO16(edi), LO16(eax))) goto loc_0028955B; /* jne: not equal / not zero */

loc_0028953E: ;
    SET_LO8(eax, MEM8(esi + 0x862CCB));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_00289583; /* jl: less (signed <) */

loc_00289548: ;
    eax = SX8(LO8(eax));

loc_0028954B: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0028955B: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00289565: ;
    if (TEST_Z(eax, eax)) goto loc_00289583; /* je: equal / zero */

loc_00289569: ;
    if (TEST_S(esi, esi)) goto loc_00289583; /* jl: less (signed <) */

loc_0028956D: ;
    if (CMP_GE(esi, 2)) goto loc_00289583; /* jge: greater or equal (signed >=) */

loc_00289572: ;
    eax = MEM32(eax + esi * 4 + 0xA3C);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028954B; /* jne: not equal / not zero */

loc_00289583: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00289590
 * Original: 0x00289590 - 0x002895F2 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289590: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_002895F2(); return; } /* je: equal / zero */

loc_0028959B: ;
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) { sub_002895F2(); return; } /* je: equal / zero */

loc_002895A4: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_002895BC; /* jne: not equal / not zero */

loc_002895AD: ;
    eax = ZX16(MEM16(eax + 0x60));
    MEM32(edi) = eax;
    MEM16(esi) = 0;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002895BC: ;
    ecx = MEM32(0x86E9A0);
    if (CMP_NE(LO16(ecx), 0xFFFFFFFEu)) goto loc_002895CB; /* jne: not equal / not zero */

loc_002895C8: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_002895CB: ;
    MEM16(esi) = LO16(ecx);
    eax = ZX16(MEM16(eax + 0x60));
    ecx = 0; /* xor self */

loc_002895D4: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x862CCB);
    if (CMP_EQ(edx, eax)) goto loc_002895E9; /* je: equal / zero */

loc_002895DF: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_002895D4; /* jl: less (signed <) */

loc_002895E5: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002895E9: ;
    MEM32(edi) = ecx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00289620
 * Original: 0x00289620 - 0x0028963F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289620: ;
    eax = MEM32(eax * 4 + 0x862CD0);
    if (TEST_Z(eax, eax)) { sub_0028963F(); return; } /* je: equal / zero */

loc_0028962B: ;
    eax = eax + 0x11C0;
    if ((eax == 0)) { sub_0028963F(); return; } /* je: equal / zero */

loc_00289632: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0028963B: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00289650
 * Original: 0x00289650 - 0x00289693 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289650(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289650: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    esi = esp + 4;
    MEM8(esp + 4) = 0;
    MEM8(esp + 0x83) = 0;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0028966F: ;
    eax = esp + 4;
    edx = edi;
    ecx = eax;
    edx = edx - ecx;
    POP32(esp, esi);
    /* nop */

loc_00289680: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00289680; /* jne: not equal / not zero */

loc_0028968A: ;
    eax = edi;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_002896A0
 * Original: 0x002896A0 - 0x002896C8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002896A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002896A0: ;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 2)) { sub_002896C8(); return; } /* jne: not equal / not zero */

loc_002896AB: ;
    edi = MEM32(ecx * 4 + 0x862CD0);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_002896B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x604C7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002896C3: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00289760
 * Original: 0x00289760 - 0x0028982A (202 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = eax;
    ebp = 0x77A5C8;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    ebp = ebp - ebx;
    edi = 0xD;
    /* nop */

loc_00289780: ;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(eax + ebp), ecx)) goto loc_0028978F; /* jne: not equal / not zero */

loc_00289787: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00289795; /* je: equal / zero */

loc_0028978F: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00289795; /* je: equal / zero */

loc_00289794: ;
    esi++;

loc_00289795: ;
    eax = eax + 4;
    edi--;
    if ((edi != 0)) goto loc_00289780; /* jne: not equal / not zero */

loc_0028979B: ;
    if (TEST_Z(esi, esi)) { sub_0028982A(); return; } /* je: equal / zero */

loc_002897A3: ;
    PUSH32(esp, 0); sub_00420CF0(); /* call 0x00420CF0 */

loc_002897A8: ;
    edi = 0; /* xor self */
    esi = ebx;
    /* nop */

loc_002897B0: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(esi + ebp), eax)) goto loc_002897BF; /* jne: not equal / not zero */

loc_002897B7: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002897DF; /* je: equal / zero */

loc_002897BF: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002897DF; /* je: equal / zero */

loc_002897C4: ;
    ebx = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00420D80(); /* call 0x00420D80 */

loc_002897D2: ;
    eax = MEM32(esi);
    esp = esp + 8;
    ebx++;
    MEM32(esi + ebp) = eax;
    MEM32(esp + 0x10) = ebx;

loc_002897DF: ;
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, 0xD)) goto loc_002897B0; /* jl: less (signed <) */

loc_002897E8: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_002897ED: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    eax = MEM32(0x84BE58);
    SET_LO8(ecx, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(ecx);
    if (TEST_Z(eax, eax)) goto loc_00289819; /* je: equal / zero */

loc_00289800: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6481BC);
    PUSH32(esp, 0xDCB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00289816: ;
    esp = esp + 0x10;

loc_00289819: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = 1;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0041E860(); return; /* tail jmp 0x0041E860 */

}

/**
 * sub_00289830
 * Original: 0x00289830 - 0x002898F3 (195 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289830: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 0x3C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002898EF; /* je: equal / zero */

loc_00289840: ;
    eax = MEM32(0x863D04);
    PUSH32(esp, esi);
    esi = 2;
    if (CMP_EQ(eax, esi)) goto loc_002898EE; /* je: equal / zero */

loc_00289853: ;
    eax = esp + 8;
    edx = esp + 4;
    PUSH32(esp, 0); sub_00289250(); /* call 0x00289250 */

loc_00289860: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = eax + ecx;
    if (CMP_GE(edx, 1)) goto loc_00289875; /* jge: greater or equal (signed >=) */

loc_00289870: ;
    edx = 1;

loc_00289875: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x862C40;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00296A30(); /* call 0x00296A30 */

loc_00289892: ;
    esi = 3;
    ecx = 0x862C40;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0); sub_00296A30(); /* call 0x00296A30 */

loc_002898A5: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862C64);
    MEM32(esp + 0x3C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    edx = eax + eax * 4;
    eax = MEM32(edx * 8 + 0x776F24);
    SET_LO8(edx, MEM8(0x862C9C));
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), 1)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00289760(); /* call 0x00289760 */

loc_002898EA: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_002898EE: ;
    POP32(esp, esi);

loc_002898EF: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00289900
 * Original: 0x00289900 - 0x00289986 (134 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289900: ;
    ecx = ZX8(MEM8(0x86E980));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), 1)) goto loc_00289922; /* je: equal / zero */

loc_00289910: ;
    esi = MEM32(0x862CC0);
    edx = SX8(LO8(eax));
    if (CMP_NE(esi, edx)) goto loc_00289922; /* jne: not equal / not zero */

loc_0028991D: ;
    ebp = 1;

loc_00289922: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00289935; /* je: equal / zero */

loc_00289927: ;
    edx = MEM32(0x862CC4);
    ecx = SX8(LO8(eax));
    if (CMP_NE(edx, ecx)) goto loc_00289935; /* jne: not equal / not zero */

loc_00289934: ;
    ebp++;

loc_00289935: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00289981; /* jle: less or equal (signed <=) */

loc_00289940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = 0x865620;
    edx = 0x864ED0;
    edi = ecx;
    edi = edi;

loc_00289950: ;
    ecx = ZX8(MEM8(esi));
    if (TEST_Z(LO8(ecx), 1)) goto loc_00289961; /* je: equal / zero */

loc_00289958: ;
    ebx = SX8(LO8(eax));
    if (CMP_NE(MEM32(edx + -4), ebx)) goto loc_00289961; /* jne: not equal / not zero */

loc_00289960: ;
    ebp++;

loc_00289961: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00289970; /* je: equal / zero */

loc_00289966: ;
    ebx = MEM32(edx);
    ecx = SX8(LO8(eax));
    if (CMP_NE(ebx, ecx)) goto loc_00289970; /* jne: not equal / not zero */

loc_0028996F: ;
    ebp++;

loc_00289970: ;
    esi = esi + 0xA50;
    edx = edx + 0xA50;
    edi--;
    if ((edi != 0)) goto loc_00289950; /* jne: not equal / not zero */

loc_0028997F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00289981: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00289990
 * Original: 0x00289990 - 0x00289A1B (139 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00289996: ;
    MEM32(esp) = eax;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002899B8; /* je: equal / zero */

loc_002899A0: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002899B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax << 2;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002899C4: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    ebp = eax;
    ebx = 0; /* xor self */
    /* nop */

loc_002899D0: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) { sub_00289A1B(); return; } /* je: equal / zero */

loc_002899D7: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_AE(edi, eax)) { sub_00289A1B(); return; } /* jae: above or equal (unsigned >=) */

loc_002899F3: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + ebx + 0x18);
    eax = eax + ebx;
    if (CMP_B(ecx, 8)) goto loc_00289A0E; /* jb: below (unsigned <) */

loc_00289A01: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + edi * 4) = eax;
    edi++;
    ebx = ebx + 0x1C;
    goto loc_002899D0;

loc_00289A0E: ;
    eax = eax + 4;
    MEM32(ebp + edi * 4) = eax;
    edi++;
    ebx = ebx + 0x1C;
    goto loc_002899D0;

}

/**
 * sub_00289A80
 * Original: 0x00289A80 - 0x00289B1F (159 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289A80: ;
    eax = MEM32(edi);
    esp = esp - 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00289A9B; /* je: equal / zero */

loc_00289A8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00289A95: ;
    MEM32(edi) = 0;

loc_00289A9B: ;
    esi = edi + 0x10;
    MEM32(edi + 0xC) = 0;
    PUSH32(esp, 0); sub_000A2320(); /* call 0x000A2320 */

loc_00289AAA: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = 7;
    MEM32(esp + 0x20) = 0;
    MEM16(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00289AC7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ebp;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_00289AD6: ;
    ecx = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_000A1610(); /* call 0x000A1610 */

loc_00289AE1: ;
    if (CMP_B(MEM32(esp + 0x20), 8)) goto loc_00289B01; /* jb: below (unsigned <) */

loc_00289AE8: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00289B01; /* je: equal / zero */

loc_00289AF4: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00289AFE: ;
    esp = esp + 4;

loc_00289B01: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00289B07: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_00289B1F(); return; } /* jne: not equal / not zero */

loc_00289B0E: ;
    POP32(esp, esi);
    MEM32(edi + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00289B40
 * Original: 0x00289B40 - 0x00289B80 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289B40: ;
    SET_LO8(ecx, MEM8(0x8761E0));
    PUSH32(esp, ebp);
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00289B73; /* jne: not equal / not zero */

loc_00289B52: ;
    esi = MEM32(0x8761E0);
    esi = esi | eax;
    eax = MEM32(0x75E98C);
    PUSH32(esp, eax);
    MEM32(0x8761E0) = esi;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00289B6B: ;
    esp = esp + 4;
    MEM32(0x8761DC) = eax;

loc_00289B73: ;
    (void)0; /* cmp MEM32(ebx + 0x18), 8 - flags set for next jcc */
    esi = ebx + 4;
    if (CMP_B(MEM32(ebx + 0x18), 8)) { sub_00289B80(); return; } /* jb: below (unsigned <) */

loc_00289B7C: ;
    eax = MEM32(esi);
    g_seh_ebp = ebp; sub_00289B82(); return; /* tail jmp 0x00289B82 */

}

/**
 * sub_00289BF0
 * Original: 0x00289BF0 - 0x00289D51 (353 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289BF0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    eax = eax - 0;
    if ((eax == 0)) { sub_00289D51(); return; } /* je: equal / zero */

loc_00289C02: ;
    eax--;
    if ((eax == 0)) goto loc_00289C0D; /* je: equal / zero */

loc_00289C05: ;
    eax--;

loc_00289C06: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00289C0D: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00289C06; /* je: equal / zero */

loc_00289C13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00289C19: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_00289C2F; /* je: equal / zero */

loc_00289C23: ;
    if (CMP_EQ(eax, 1)) goto loc_00289C38; /* je: equal / zero */

loc_00289C28: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00289C2F: ;
    if (CMP_NE(eax, 1)) goto loc_00289D35; /* jne: not equal / not zero */

loc_00289C38: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x10;
    ecx = ebp;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_00289C43: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00289C4C: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_00289C5B: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0D07(); /* call 0x004A0D07 */

loc_00289C64: ;
    if (CMP_NE(eax, 1)) goto loc_00289D34; /* jne: not equal / not zero */

loc_00289C6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = eax;
    MEM32(esp + 0x10) = 0x1C;
    goto loc_00289C80;

    /* nop */

loc_00289C80: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_00289CC9; /* je: equal / zero */

loc_00289C87: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_AE(edi, eax)) goto loc_00289CC9; /* jae: above or equal (unsigned >=) */

loc_00289CA3: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(ecx + edi * 4), 0)) goto loc_00289CBB; /* je: equal / zero */

loc_00289CAD: ;
    ebx = MEM32(esi + 0x14);
    ebx = ebx + MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00289B40(); /* call 0x00289B40 */

loc_00289CB9: ;
    SET_LO8(ebx, 1);

loc_00289CBB: ;
    eax = MEM32(esp + 0x10);
    edi++;
    eax = eax + 0x1C;
    MEM32(esp + 0x10) = eax;
    goto loc_00289C80;

loc_00289CC9: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebx = MEM32(esi + 0x14);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00289D20; /* je: equal / zero */

loc_00289CD0: ;
    ecx = ebx + 0x1C;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_00289CDD: ;
    edi = 2;
    ebp = 0x38;

loc_00289CE7: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00289D25; /* je: equal / zero */

loc_00289CEE: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_AE(edi, eax)) goto loc_00289D25; /* jae: above or equal (unsigned >=) */

loc_00289D0A: ;
    ebx = MEM32(esi + 0x14);
    ecx = ebx + ebp;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00289E80(); /* call 0x00289E80 */

loc_00289D1A: ;
    edi++;
    ebp = ebp + 0x1C;
    goto loc_00289CE7;

loc_00289D20: ;
    PUSH32(esp, 0); sub_00289B40(); /* call 0x00289B40 */

loc_00289D25: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00289D2F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00289D34: ;
    POP32(esp, ebp);

loc_00289D35: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00289D3D: ;
    MEM32(esi) = 0;
    MEM32(esi + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00289D70
 * Original: 0x00289D70 - 0x00289D92 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289D70: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(ebx);
    edi = 0; /* xor self */
    /* nop */
    eax = MEM32(esp + 0x38);
    esi = MEM32(eax + 0x14);
    if (CMP_B(MEM32(esi + 0x18), 8)) { sub_00289D92(); return; } /* jb: below (unsigned <) */

loc_00289D8D: ;
    eax = MEM32(esi + 4);
    g_seh_ebp = ebp; sub_00289D95(); return; /* tail jmp 0x00289D95 */

}

/**
 * sub_00289E80
 * Original: 0x00289E80 - 0x00289F69 (233 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00289E80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    if (CMP_AE(MEM32(esi + 0x14), ebp)) goto loc_00289E97; /* jae: above or equal (unsigned >=) */

loc_00289E90: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_00289E97: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = eax - ebp;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_B(eax, edi)) edi = eax; /* cmovb */
    eax = eax | 0xFFFFFFFFu;
    eax = eax - edx;
    if (CMP_A(eax, edi)) goto loc_00289EB4; /* ja: above (unsigned >) */

loc_00289EAD: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_00289EB4: ;
    if (CMP_BE(edi & edi, 0)) goto loc_00289F61; /* jbe: below or equal (unsigned <=) */

loc_00289EBC: ;
    ebp = MEM32(ebx + 0x14);
    ebp = ebp + edi;
    if (CMP_BE(ebp, 0x7FFFFFFE)) goto loc_00289ED0; /* jbe: below or equal (unsigned <=) */

loc_00289EC9: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_00289ED0: ;
    eax = MEM32(ebx + 0x18);
    if (CMP_AE(eax, ebp)) goto loc_00289EF7; /* jae: above or equal (unsigned >=) */

loc_00289ED7: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000A3490(); /* call 0x000A3490 */

loc_00289EE2: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */

loc_00289EE4: ;
    if (CMP_BE(ebp & ebp, 0)) goto loc_00289F61; /* jbe: below or equal (unsigned <=) */

loc_00289EE6: ;
    ecx = MEM32(esi + 0x18);
    eax = 8;
    if (CMP_B(ecx, eax)) goto loc_00289F21; /* jb: below (unsigned <) */

loc_00289EF2: ;
    esi = MEM32(esi + 4);
    goto loc_00289F24;

loc_00289EF7: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00289EE4; /* jne: not equal / not zero */

loc_00289EFB: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(eax, 8)) goto loc_00289F11; /* jb: below (unsigned <) */

loc_00289F03: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    MEM16(eax) = LO16(ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00289F11: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM16(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00289F21: ;
    esi = esi + 4;

loc_00289F24: ;
    (void)0; /* cmp MEM32(ebx + 0x18), eax - flags set for next jcc */
    edx = ebx + 4;
    if (CMP_B(MEM32(ebx + 0x18), eax)) goto loc_00289F30; /* jb: below (unsigned <) */

loc_00289F2C: ;
    eax = MEM32(edx);
    goto loc_00289F32;

loc_00289F30: ;
    eax = edx;

loc_00289F32: ;
    ecx = edi + edi;
    edi = MEM32(esp + 0x10);
    esi = esi + edi * 2;
    edi = MEM32(ebx + 0x14);
    edi = eax + edi * 2;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    (void)0; /* cmp MEM32(ebx + 0x18), 8 - flags set for next jcc */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(MEM32(ebx + 0x18), 8)) goto loc_00289F5B; /* jb: below (unsigned <) */

loc_00289F59: ;
    edx = MEM32(edx);

loc_00289F5B: ;
    MEM16(edx + ebp * 2) = 0;

loc_00289F61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00289F70
 * Original: 0x00289F70 - 0x00289FD2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289F70(void)
{

loc_00289F70: ;
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
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x3E) = LO16(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x44) = LO8(ecx);
    PUSH32(esp, esi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604CE8;
    esi = MEM32(edx);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    SET_LO16(edx, MEM16(edx + 8));
    MEM16(ecx + 8) = LO16(edx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00289FE0
 * Original: 0x00289FE0 - 0x00289FE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289FE0(void)
{

loc_00289FE0: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_00289FF0
 * Original: 0x00289FF0 - 0x0028A03F (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00289FF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00289FF8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0028A000: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0028A03F(); return; } /* je: equal / zero */

loc_0028A004: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0028A000; /* jl: less (signed <) */

loc_0028A010: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x44));
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x604D9C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0028A038: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028A050
 * Original: 0x0028A050 - 0x0028A094 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A050(void)
{

loc_0028A050: ;
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
    MEM32(eax) = 0x604C80;
    MEM8(eax + 0x34) = LO8(edx);
    MEM16(eax + 0x36) = 0xFFFD;
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028A0A0
 * Original: 0x0028A0A0 - 0x0028A0E9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A0A0(void)
{

loc_0028A0A0: ;
    ecx = 0; /* xor self */
    MEM8(eax + 0x34) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 4));
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
    MEM32(eax) = 0x604C80;
    MEM16(eax + 0x36) = LO16(edx);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028A0F0
 * Original: 0x0028A0F0 - 0x0028A0F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A0F0(void)
{

loc_0028A0F0: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0028A100
 * Original: 0x0028A100 - 0x0028A15A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028A100: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0028A108: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0028A110: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0028A15A(); return; } /* je: equal / zero */

loc_0028A114: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0028A110; /* jl: less (signed <) */

loc_0028A120: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3A);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x604D50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0028A153: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028A170
 * Original: 0x0028A170 - 0x0028A1BD (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A170(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028A170: ;
    esp = esp - 0x11C;
    eax = 1;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edx = 2;
    MEM16(esp + 0xC) = LO16(eax);
    MEM16(esp + 0xE) = LO16(eax);
    PUSH32(esp, esi);
    MEM8(0x862CE8) = LO8(ebx);
    MEM16(esp + 8) = LO16(ebx);
    MEM16(esp + 0xA) = LO16(ebx);
    MEM16(esp + 0xC) = LO16(ebx);
    MEM16(esp + 0xE) = LO16(ebx);
    MEM16(esp + 0x14) = LO16(edx);
    MEM16(esp + 0x16) = LO16(edx);
    eax = 0x86EC7A;
    ecx = esp + 8;
    g_seh_ebp = ebp; sub_0028A1C0(); return; /* tail jmp 0x0028A1C0 */

}

/**
 * sub_0028A2A0
 * Original: 0x0028A2A0 - 0x0028A2E2 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028A2A0: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028A2E1; /* je: equal / zero */

loc_0028A2A9: ;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    /* nop */

loc_0028A2B0: ;
    eax = MEM32(ecx * 4 + 0x862CD0);
    if (CMP_EQ(eax, edx)) goto loc_0028A2D5; /* je: equal / zero */

loc_0028A2BB: ;
    eax = ZX8(MEM8(eax + 0x11BA));
    if (CMP_L(eax, edx)) goto loc_0028A2CB; /* jl: less (signed <) */

loc_0028A2C6: ;
    if (CMP_L(eax, 0x24)) goto loc_0028A2CD; /* jl: less (signed <) */

loc_0028A2CB: ;
    eax = 0; /* xor self */

loc_0028A2CD: ;
    MEM8(ecx + 0x6BF178) = LO8(eax);
    goto loc_0028A2DB;

loc_0028A2D5: ;
    MEM8(ecx + 0x6BF178) = LO8(edx);

loc_0028A2DB: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_0028A2B0; /* jl: less (signed <) */

loc_0028A2E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028A2F0
 * Original: 0x0028A2F0 - 0x0028A325 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028A2F0: ;
    SET_LO8(edx, MEM8(esi + 0x862CCB));
    (void)0; /* cmp LO8(edx), 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(LO8(edx), 0xFF)) { sub_0028A325(); return; } /* je: equal / zero */

loc_0028A2FC: ;
    ebx = MEM32(0x84A5F8);
    edx = SX8(LO8(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = edx + ebx;
    edx = MEM32(edx + 0x568);
    if (TEST_Z(edx, edx)) { sub_0028A325(); return; } /* je: equal / zero */

loc_0028A317: ;
    SET_LO8(eax, MEM8(edx + 0x38D));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0028A325(); return; } /* je: equal / zero */

loc_0028A321: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
