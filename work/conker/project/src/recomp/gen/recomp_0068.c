/**
 * Burnout 3 - Recompiled code chunk 68
 * Functions: 250 (0x0052F250 - 0x0053B940)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0052F250
 * Original: 0x0052F250 - 0x0052F3FA (426 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052F250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (CMP_NE(eax, MEM32(esi + 0x38))) goto loc_0052F354; /* jne: not equal / not zero */

loc_0052F25D: ;
    if (CMP_EQ(MEM32(esi + 0x34), 0)) goto loc_0052F269; /* je: equal / zero */

loc_0052F263: ;
    if (CMP_EQ(MEM8(esi + 0x10), 0)) goto loc_0052F280; /* je: equal / zero */

loc_0052F269: ;
    eax = MEM32(esi + 0x2C);
    if (CMP_L(eax, 5)) goto loc_0052F2B6; /* jl: less (signed <) */

loc_0052F271: ;
    if (CMP_LE(eax, 7)) goto loc_0052F286; /* jle: less or equal (signed <=) */

loc_0052F276: ;
    if (CMP_EQ(eax, 8)) goto loc_0052F280; /* je: equal / zero */

loc_0052F27B: ;
    if (CMP_NE(eax, 0xD)) goto loc_0052F2B6; /* jne: not equal / not zero */

loc_0052F280: ;
    SET_LO8(eax, 0); /* xor self */

loc_0052F282: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_0052F286: ;
    if (CMP_NE(MEM8(ebp + 8), 0)) goto loc_0052F3F3; /* jne: not equal / not zero */

loc_0052F290: ;
    ecx = ebx + esi + 0x20;
    eax = edi + esi + 0x20;

loc_0052F298: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), MEM8(eax))) goto loc_0052F3F3; /* je: equal / zero */

loc_0052F2A2: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);
    goto loc_0052F3F3;

loc_0052F2B6: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052AB91(); /* call 0x0052AB91 */

loc_0052F2BD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F2C7; /* je: equal / zero */

loc_0052F2C1: ;
    if (CMP_NE(MEM32(esi + 0x30), 0)) goto loc_0052F280; /* jne: not equal / not zero */

loc_0052F2C7: ;
    if (CMP_NE(MEM8(ebp + 8), 0)) goto loc_0052F3F3; /* jne: not equal / not zero */

loc_0052F2D1: ;
    SET_LO8(ecx, MEM8(ebx + esi + 0x20));
    eax = edi + esi + 0x20;
    if (CMP_EQ(LO8(ecx), MEM8(eax))) goto loc_0052F2EE; /* je: equal / zero */

loc_0052F2DD: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(ebx + esi + 0x20) = LO8(ecx);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_0052F2EE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = esi + 4;
    MEM32(ebp + 8) = eax;

loc_0052F2F8: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052F302: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F342; /* je: equal / zero */

loc_0052F306: ;
    if (CMP_EQ(MEM32(esi + 0x30), 0)) goto loc_0052F312; /* je: equal / zero */

loc_0052F30C: ;
    if (CMP_EQ(MEM32(ebp + -4), 2)) goto loc_0052F342; /* je: equal / zero */

loc_0052F312: ;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    edx = MEM32(ebp + 8);
    if (CMP_NE(ebx, 4)) goto loc_0052F31E; /* jne: not equal / not zero */

loc_0052F31A: ;
    PUSH32(esp, ebx);
    POP32(esp, ecx);
    goto loc_0052F324;

loc_0052F31E: ;
    eax = MEM32(edx);
    ecx = MEM32(eax + ebx * 4 + 0x1C);

loc_0052F324: ;
    if (CMP_NE(edi, 4)) goto loc_0052F32D; /* jne: not equal / not zero */

loc_0052F329: ;
    PUSH32(esp, edi);
    POP32(esp, eax);
    goto loc_0052F333;

loc_0052F32D: ;
    eax = MEM32(edx);
    eax = MEM32(eax + edi * 4 + 0x1C);

loc_0052F333: ;
    edx = MEM32(edx);
    MEM32(edx + ebx * 4 + 0x1C) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(eax + edi * 4 + 0x1C) = ecx;

loc_0052F342: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    if (CMP_LE(MEM32(ebp + -4), 2)) goto loc_0052F2F8; /* jle: less or equal (signed <=) */

loc_0052F34F: ;
    goto loc_0052F3F3;

loc_0052F354: ;
    if (CMP_NE(eax, MEM32(esi + 0x3C))) goto loc_0052F280; /* jne: not equal / not zero */

loc_0052F35D: ;
    if (CMP_EQ(MEM32(esi + 0x34), 0)) goto loc_0052F36D; /* je: equal / zero */

loc_0052F363: ;
    if (CMP_NE(MEM8(esi + 0x10), 0)) goto loc_0052F280; /* jne: not equal / not zero */

loc_0052F36D: ;
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(eax, 1)) goto loc_0052F397; /* je: equal / zero */

loc_0052F375: ;
    if (CMP_LE(eax, 1)) goto loc_0052F280; /* jle: less or equal (signed <=) */

loc_0052F37B: ;
    if (CMP_G(eax, 4)) goto loc_0052F280; /* jg: greater (signed >) */

loc_0052F384: ;
    if (CMP_NE(MEM8(ebp + 8), 0)) goto loc_0052F3F3; /* jne: not equal / not zero */

loc_0052F38A: ;
    ecx = ebx + esi + 0x28;
    eax = edi + esi + 0x28;
    goto loc_0052F298;

loc_0052F397: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052AB91(); /* call 0x0052AB91 */

loc_0052F39E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052F280; /* jne: not equal / not zero */

loc_0052F3A6: ;
    if (CMP_NE(MEM8(ebp + 8), LO8(eax))) goto loc_0052F3F3; /* jne: not equal / not zero */

loc_0052F3AB: ;
    SET_LO8(ecx, MEM8(ebx + esi + 0x28));
    eax = edi + esi + 0x28;
    if (CMP_EQ(LO8(ecx), MEM8(eax))) goto loc_0052F3C8; /* je: equal / zero */

loc_0052F3B7: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(ebx + esi + 0x28) = LO8(ecx);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_0052F3C8: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    if (CMP_NE(ebx, eax)) goto loc_0052F3D3; /* jne: not equal / not zero */

loc_0052F3CF: ;
    ecx = eax;
    goto loc_0052F3DA;

loc_0052F3D3: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + ebx * 4 + 0x1C);

loc_0052F3DA: ;
    if (CMP_EQ(edi, eax)) goto loc_0052F3E5; /* je: equal / zero */

loc_0052F3DE: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + edi * 4 + 0x1C);

loc_0052F3E5: ;
    edx = MEM32(esi + 0xC);
    MEM32(edx + ebx * 4 + 0x1C) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax + edi * 4 + 0x1C) = ecx;

loc_0052F3F3: ;
    SET_LO8(eax, 1);
    goto loc_0052F282;

}

/**
 * sub_0052F3FA
 * Original: 0x0052F3FA - 0x0052F51C (290 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F3FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052F3FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 4;

loc_0052F408: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = esi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052F41D: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = MEM32(ebx);
    PUSH32(esp, 0); sub_0052CE1F(); /* call 0x0052CE1F */

loc_0052F427: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F518; /* je: equal / zero */

loc_0052F42F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = ebx + 4;
    if (CMP_LE(MEM32(ebp + -4), 2)) goto loc_0052F408; /* jle: less or equal (signed <=) */

loc_0052F43B: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x34), ebx - flags set for next jcc */
    edi = 0x648C78;
    if (CMP_EQ(MEM32(esi + 0x34), ebx)) goto loc_0052F470; /* je: equal / zero */

loc_0052F447: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0); sub_0052BA04(); /* call 0x0052BA04 */

loc_0052F468: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F518; /* je: equal / zero */

loc_0052F470: ;
    if (CMP_EQ(MEM32(esi + 0x38), ebx)) goto loc_0052F4C6; /* je: equal / zero */

loc_0052F475: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, 0); sub_0052BA04(); /* call 0x0052BA04 */

loc_0052F496: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F518; /* je: equal / zero */

loc_0052F49A: ;
    if (CMP_EQ(MEM32(esi + 0x30), ebx)) goto loc_0052F4C6; /* je: equal / zero */

loc_0052F49F: ;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 4) = ecx;
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, 0); sub_00530B08(); /* call 0x00530B08 */

loc_0052F4BF: ;
    if (CMP_EQ(eax, 1)) goto loc_0052F518; /* je: equal / zero */

loc_0052F4C4: ;
    ebx = 0; /* xor self */

loc_0052F4C6: ;
    if (CMP_EQ(MEM32(esi + 0x3C), ebx)) { sub_0052F51C(); return; } /* je: equal / zero */

loc_0052F4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, 0); sub_0052BA04(); /* call 0x0052BA04 */

loc_0052F4EC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F518; /* je: equal / zero */

loc_0052F4F0: ;
    if (CMP_EQ(MEM32(esi + 0x2C), ebx)) { sub_0052F51C(); return; } /* je: equal / zero */

loc_0052F4F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0); sub_00530AB8(); /* call 0x00530AB8 */

loc_0052F514: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052F51C(); return; } /* jne: not equal / not zero */

loc_0052F518: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052F52F(); return; /* tail jmp 0x0052F52F */

}

/**
 * sub_0052F535
 * Original: 0x0052F535 - 0x0052F593 (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F535(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052F535: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = 0; /* xor self */
    eax = esi + 4;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = eax;
    edi = 0x648C78;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = MEM32(eax + 0x10);
    ebx = ebp + ecx * 4 + -36;
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_Z(eax, eax)) { sub_0052F593(); return; } /* je: equal / zero */

loc_0052F569: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052F570: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052F593(); return; } /* je: equal / zero */

loc_0052F574: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    ecx = esi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052F582: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052F58B: ;
    if (TEST_Z(eax, eax)) { sub_0052F593(); return; } /* je: equal / zero */

loc_0052F58F: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0052F595(); return; /* tail jmp 0x0052F595 */

}

/**
 * sub_0052F696
 * Original: 0x0052F696 - 0x0052F700 (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F696(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F696: ;
    eax = 0x47FFDC;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052F6A0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_00529E39(); /* call 0x00529E39 */

loc_0052F6B0: ;
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    MEM32(ebx) = 0x648C5C;
    MEM32(ebx + 4) = 0x648C90;
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x10) = edi;
    eax = ebx + 0x14;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, 0); sub_0052F8AE(); /* call 0x0052F8AE */

loc_0052F6D6: ;
    esi = ebx + 0x28;
    eax = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_0052F8AE(); /* call 0x0052F8AE */

loc_0052F6E3: ;
    eax = ebx + 0x3C;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0); sub_0052F8AE(); /* call 0x0052F8AE */

loc_0052F6EE: ;
    MEM8(ebp + -4) = 4;
    eax = ebx + 0x54;
    MEM32(ebx + 0x50) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -24) = eax;
    g_seh_ebp = ebp; sub_0052F702(); return; /* tail jmp 0x0052F702 */

}

/**
 * sub_0052F8AE
 * Original: 0x0052F8AE - 0x0052F8CB (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F8AE(void)
{

loc_0052F8AE: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = 0x648CB0;
    MEM32(eax) = 0x648C30;
    MEM32(eax + 0x10) = 0x648C2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F8CB
 * Original: 0x0052F8CB - 0x0052F8D0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F8CB(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F8CB: ;
    g_seh_ebp = ebp; sub_00531E8C(); return; /* tail jmp 0x00531E8C */

}

/**
 * sub_0052F8F4
 * Original: 0x0052F8F4 - 0x0052F9AA (182 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F8F4(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F8F4: ;
    eax = 0x47F31E;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052F8FE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esi;
    MEM32(esi) = 0x648C5C;
    ebx = esi + 0x14;
    eax = ebx;
    eax = (uint32_t)(-(int32_t)eax);
    ecx = esi + 0x24;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    edi = 0x535D9C;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -4) = 4;
    PUSH32(esp, 0); sub_00531BB9(); /* call 0x00531BB9 */

loc_0052F92F: ;
    eax = esi + 0x28;
    eax = (uint32_t)(-(int32_t)eax);
    ecx = esi + 0x38;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00531BB9(); /* call 0x00531BB9 */

loc_0052F943: ;
    eax = esi + 0x3C;
    eax = (uint32_t)(-(int32_t)eax);
    ecx = esi + 0x4C;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00531BB9(); /* call 0x00531BB9 */

loc_0052F957: ;
    ecx = esi + 0x3C;
    MEM8(ebp + -4) = 3;
    PUSH32(esp, 0); sub_00531E8C(); /* call 0x00531E8C */

loc_0052F963: ;
    ecx = esi + 0x28;
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0); sub_00531E8C(); /* call 0x00531E8C */

loc_0052F96F: ;
    ecx = ebx;
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0); sub_00531E8C(); /* call 0x00531E8C */

loc_0052F97A: ;
    ecx = esi + 4;
    MEM8(ebp + -4) = 0;
    PUSH32(esp, 0); sub_00531CE6(); /* call 0x00531CE6 */

loc_0052F986: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    ecx = 0x535D8C;
    MEM32(esi) = 0x648C7C;
    PUSH32(esp, 0); sub_00531B30(); /* call 0x00531B30 */

loc_0052F99B: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052F9AA
 * Original: 0x0052F9AA - 0x0052F9E0 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F9AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F9AA: ;
    eax = 0x47FC46;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052F9B4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax--;
    if ((eax == 0)) { sub_0052F9E0(); return; } /* je: equal / zero */

loc_0052F9BE: ;
    eax--;
    if ((eax == 0)) goto loc_0052F9D6; /* je: equal / zero */

loc_0052F9C1: ;
    eax--;
    if ((eax == 0)) goto loc_0052F9C8; /* je: equal / zero */

loc_0052F9C4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052F9FD(); return; /* tail jmp 0x0052F9FD */

loc_0052F9C8: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0052FA99(); /* call 0x0052FA99 */

loc_0052F9D4: ;
    g_seh_ebp = ebp; sub_0052F9FD(); return; /* tail jmp 0x0052F9FD */

loc_0052F9D6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0052FA0B(); /* call 0x0052FA0B */

loc_0052F9DE: ;
    g_seh_ebp = ebp; sub_0052F9FD(); return; /* tail jmp 0x0052F9FD */

}

/**
 * sub_0052FA0B
 * Original: 0x0052FA0B - 0x0052FA38 (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FA0B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FA0B: ;
    eax = 0x47FC34;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052FA15: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -20));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    esi = esi + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_0052FA2D: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_0052FA38(); return; } /* je: equal / zero */

loc_0052FA33: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0052FA88(); return; /* tail jmp 0x0052FA88 */

}

/**
 * sub_0052FA99
 * Original: 0x0052FA99 - 0x0052FAF3 (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FA99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FA99: ;
    eax = 0x47FC34;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052FAA3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052FAB1: ;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_Z(eax, eax)) { sub_0052FAF3(); return; } /* je: equal / zero */

loc_0052FABC: ;
    if (CMP_EQ(MEM8(ebp + 0x10), 0)) goto loc_0052FACA; /* je: equal / zero */

loc_0052FAC2: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x50);
    goto loc_0052FACC;

loc_0052FACA: ;
    esi = 0; /* xor self */

loc_0052FACC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x10) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FAE1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0052FAF1: ;
    g_seh_ebp = ebp; sub_0052FAF5(); return; /* tail jmp 0x0052FAF5 */

}

/**
 * sub_0052FB04
 * Original: 0x0052FB04 - 0x0052FB1D (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FB04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052FB04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 8), 0xC - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + -4));
    if (CMP_NE(MEM32(ebp + 8), 0xC)) { sub_0052FB1D(); return; } /* jne: not equal / not zero */

loc_0052FB12: ;
    ecx = 0x100;
    PUSH32(esp, ecx);
    eax = eax + 0x3C;
    g_seh_ebp = ebp; sub_0052FB23(); return; /* tail jmp 0x0052FB23 */

}

/**
 * sub_0052FB33
 * Original: 0x0052FB33 - 0x0052FBA4 (113 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FB33(void)
{
    uint32_t ebp;

loc_0052FB33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0);
    edi = 0x648C78;
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FB4E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FB5F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FB72: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebx;
    PUSH32(esp, 0); sub_0052FB04(); /* call 0x0052FB04 */

loc_0052FB7C: ;
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_0052C390(); /* call 0x0052C390 */

loc_0052FB84: ;
    PUSH32(esp, MEM32(esi + 8));
    edi = ebx + 0x28;
    eax = edi;
    PUSH32(esp, 0); sub_00531DEC(); /* call 0x00531DEC */

loc_0052FB91: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = esi;
    PUSH32(esp, edi);
    edi = ebp + -4;
    PUSH32(esp, 0); sub_00531E58(); /* call 0x00531E58 */

loc_0052FB9F: ;
    eax = esi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052FBA4
 * Original: 0x0052FBA4 - 0x0052FBC9 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FBA4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052FBA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx + 0x3C;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_0052FBC0: ;
    if (TEST_NZ(eax, eax)) { sub_0052FBC9(); return; } /* jne: not equal / not zero */

loc_0052FBC4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    g_seh_ebp = ebp; sub_0052FC40(); return; /* tail jmp 0x0052FC40 */

}

/**
 * sub_0052FCB1
 * Original: 0x0052FCB1 - 0x0052FCF3 (66 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FCB1(void)
{
    uint32_t ebp;

loc_0052FCB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0);
    esi = 0x648C78;
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FCCF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052FCE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0x50));
    PUSH32(esp, 0); sub_0052C390(); /* call 0x0052C390 */

loc_0052FCEA: ;
    MEM32(ebx + 0x50) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052FCF3
 * Original: 0x0052FCF3 - 0x0052FD49 (86 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FCF3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052FCF3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebx) = MEM32(ebx) & 0;
    eax = MEM32(ecx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052FD3C; /* je: equal / zero */

loc_0052FD0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0052FD11;

loc_0052FD0E: ;
    eax = MEM32(ebp + 8);

loc_0052FD11: ;
    eax = MEM32(eax + 4);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0052D6F6(); /* call 0x0052D6F6 */

loc_0052FD1D: ;
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    esi = eax;
    eax = MEM32(ebp + 8);
    edi = ebx + ecx * 4 + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebx) = MEM32(ebx) + 1;
    eax = MEM32(eax + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0052FD0E; /* jne: not equal / not zero */

loc_0052FD3A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0052FD3C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052FD49(); /* call 0x0052FD49 */

loc_0052FD42: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FD49
 * Original: 0x0052FD49 - 0x0052FE31 (232 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FD49(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052FD49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    if (CMP_LE(edx & edx, 0)) goto loc_0052FE2D; /* jle: less or equal (signed <=) */

loc_0052FD5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    MEM32(ebp + -4) = 2;
    ecx = eax + 0x14;
    esi = 0xF00000;
    POP32(esp, ebx);

loc_0052FD71: ;
    edi = MEM32(ecx + -16);
    edi = edi & esi;
    if (CMP_NE(edi, esi)) goto loc_0052FE14; /* jne: not equal / not zero */

loc_0052FD7E: ;
    eax = 0; /* xor self */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + -4);
    eax--;
    if (CMP_GE(eax, edx)) goto loc_0052FDBB; /* jge: greater or equal (signed >=) */

loc_0052FD8F: ;
    eax = MEM32(ecx + -4);
    eax = eax >> 0x14;
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 4);
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx);
    edi = eax;
    edi = edi >> 0xF;
    edi = edi & ebx;
    eax = eax & ebx;
    MEM8(ebp + edi + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_0052FDBB: ;
    if (CMP_GE(MEM32(ebp + -4), edx)) goto loc_0052FDED; /* jge: greater or equal (signed >=) */

loc_0052FDC0: ;
    eax = MEM32(ecx + 8);
    eax = eax >> 0x14;
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0x10);
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0xC);
    edx = eax;
    edx = edx >> 0xF;
    edx = edx & ebx;
    eax = eax & ebx;
    MEM8(ebp + edx + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_0052FDED: ;
    (void)0; /* cmp MEM8(ebp + -9), 0 - flags set for next jcc */
    PUSH32(esp, 0xB);
    POP32(esp, eax);
    if (CMP_EQ(MEM8(ebp + -9), 0)) goto loc_0052FE02; /* je: equal / zero */

loc_0052FDF6: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0052FE02; /* jle: less or equal (signed <=) */

loc_0052FDFA: ;
    eax--;
    if (CMP_NE(MEM8(ebp + eax + -20), 0)) goto loc_0052FDF6; /* jne: not equal / not zero */

loc_0052FE02: ;
    edx = MEM32(ecx + -16);
    eax = eax << 0x14;
    eax = eax ^ edx;
    eax = eax & esi;
    eax = eax ^ edx;
    MEM32(ecx + -16) = eax;
    eax = MEM32(ebp + 8);

loc_0052FE14: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = MEM32(ebp + -4);
    edx = MEM32(eax);
    edi = edi + 0xFFFFFFFEu;
    ecx = ecx + 0xC;
    if (CMP_L(edi, edx)) goto loc_0052FD71; /* jl: less (signed <) */

loc_0052FE2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0052FE2D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FE31
 * Original: 0x0052FE31 - 0x0052FEEB (186 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FE31(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FE31: ;
    eax = 0x480050;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052FE3B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052F696(); /* call 0x0052F696 */

loc_0052FE4B: ;
    edx = 0; /* xor self */
    MEM32(ebp + -4) = edx;
    edi = ebx + 0x88;
    MEM32(ebx) = 0x648C54;
    MEM32(edi) = 0x648C88;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = edx;
    eax = ebx + 0x28;
    MEM8(ebp + -4) = 1;
    MEM32(ebp + -16) = eax;
    eax = MEM32(eax + 8);
    if (CMP_NE(eax, edx)) goto loc_0052FE8C; /* jne: not equal / not zero */

loc_0052FE79: ;
    eax = 0; /* xor self */

loc_0052FE7B: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(eax, edx)) goto loc_0052FEE6; /* je: equal / zero */

loc_0052FE82: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 8);
    goto loc_0052FEAE;

loc_0052FE8A: ;
    eax = ecx;

loc_0052FE8C: ;
    ecx = MEM32(eax + 0x10);
    if (CMP_NE(ecx, edx)) goto loc_0052FE8A; /* jne: not equal / not zero */

loc_0052FE93: ;
    goto loc_0052FE7B;

loc_0052FE95: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_0052B4B8(); /* call 0x0052B4B8 */

loc_0052FE9E: ;
    if (CMP_NE(MEM32(esi + 4), 1)) goto loc_0052FEAB; /* jne: not equal / not zero */

loc_0052FEA4: ;
    MEM32(esi + 4) = 6;

loc_0052FEAB: ;
    esi = MEM32(esi + 0x30);

loc_0052FEAE: ;
    if (CMP_NE(MEM32(esi + 0x30), 0)) goto loc_0052FE95; /* jne: not equal / not zero */

loc_0052FEB4: ;
    if (CMP_NE(MEM32(esi + 4), 1)) goto loc_0052FEC1; /* jne: not equal / not zero */

loc_0052FEBA: ;
    MEM32(esi + 4) = 6;

loc_0052FEC1: ;
    esi = MEM32(esi + 0x34);
    if (TEST_Z(esi, esi)) goto loc_0052FED1; /* je: equal / zero */

loc_0052FEC8: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052A45B(); /* call 0x0052A45B */

loc_0052FECF: ;
    goto loc_0052FEC1;

loc_0052FED1: ;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + -16);
    PUSH32(esp, 0); sub_00532831(); /* call 0x00532831 */

loc_0052FEDC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0052FE82; /* jne: not equal / not zero */

loc_0052FEE3: ;
    ebx = MEM32(ebp + 8);

loc_0052FEE6: ;
    esi = MEM32(ebx + 8);
    g_seh_ebp = ebp; sub_0052FF06(); return; /* tail jmp 0x0052FF06 */

}

/**
 * sub_0052FF41
 * Original: 0x0052FF41 - 0x0052FF7F (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FF41(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FF41: ;
    eax = 0x47F3A2;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052FF4B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    MEM32(esi) = 0x648C54;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = esi + 0x88;
    PUSH32(esp, 0); sub_00531D63(); /* call 0x00531D63 */

loc_0052FF67: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_0052F8F4(); /* call 0x0052F8F4 */

loc_0052FF72: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052FF7F
 * Original: 0x0052FF7F - 0x0053003F (192 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FF7F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FF7F: ;
    eax = 0x48008C;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052FF89: ;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    eax = 0x648C88;
    PUSH32(esp, edi);
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -88) = ebx;
    MEM32(ebp + -84) = ebx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -112) = eax;
    MEM32(ebp + -104) = ebx;
    MEM32(ebp + -100) = ebx;
    eax = 0x648C90;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -60) = ebx;
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -52) = ebx;
    MEM32(ebp + -80) = 0x648C98;
    MEM32(ebp + -72) = ebx;
    MEM32(ebp + -68) = ebx;
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = 4;
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_00532808(); /* call 0x00532808 */

loc_0052FFE4: ;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, 0); sub_00532808(); /* call 0x00532808 */

loc_0052FFF2: ;
    eax = esi + 0x54;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053000D: ;
    MEM32(ebp + -28) = eax;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(ebp + -4) = 5;
    if (CMP_EQ(eax, ebx)) { sub_0053003F(); return; } /* je: equal / zero */

loc_00530018: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -32) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0053002D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0053003D: ;
    g_seh_ebp = ebp; sub_00530041(); return; /* tail jmp 0x00530041 */

}

/**
 * sub_0053063A
 * Original: 0x0053063A - 0x00530689 (79 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053063A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053063A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    esi = esi + 0x28;

loc_00530648: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_00530653: ;
    if (TEST_Z(eax, eax)) goto loc_0053067A; /* je: equal / zero */

loc_00530657: ;
    ecx = MEM32(eax + 8);
    eax = ecx;
    goto loc_00530666;

loc_0053065E: ;
    if (CMP_EQ(eax, MEM32(ebp + 8))) { sub_00530689(); return; } /* je: equal / zero */

loc_00530663: ;
    eax = MEM32(eax + 0x30);

loc_00530666: ;
    if (TEST_NZ(eax, eax)) goto loc_0053065E; /* jne: not equal / not zero */

loc_0053066A: ;
    eax = ecx;
    goto loc_00530676;

loc_0053066E: ;
    if (CMP_EQ(eax, MEM32(ebp + 8))) { sub_00530689(); return; } /* je: equal / zero */

loc_00530673: ;
    eax = MEM32(eax + 0x34);

loc_00530676: ;
    if (TEST_NZ(eax, eax)) goto loc_0053066E; /* jne: not equal / not zero */

loc_0053067A: ;
    edi++;
    if (CMP_LE(edi, 0xC)) goto loc_00530648; /* jle: less or equal (signed <=) */

loc_00530680: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053068D
 * Original: 0x0053068D - 0x005306DB (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053068D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053068D: ;
    eax = 0x47FD9C;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_00530697: ;
    esp = esp - 0x20;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_005306AC; /* jne: not equal / not zero */

loc_005306A6: ;
    eax = ebp + -32;
    MEM32(ebp + 0x10) = eax;

loc_005306AC: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0xC);
    POP32(esp, esi);
    esi = esi - eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0xC);
    MEM32(eax) = esi;
    POP32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    edi = edi + 0x28;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_005306CD: ;
    if (TEST_Z(eax, eax)) { sub_005306DB(); return; } /* je: equal / zero */

loc_005306D1: ;
    eax = esi + 1;
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_005306DE(); return; /* tail jmp 0x005306DE */

}

/**
 * sub_00530835
 * Original: 0x00530835 - 0x005308EF (186 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530835(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00530835: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(MEM32(ebp + 8), 0)) { sub_005308EF(); return; } /* jl: less (signed <) */

loc_00530848: ;
    if (CMP_G(MEM32(ebp + 8), 0xC)) { sub_005308EF(); return; } /* jg: greater (signed >) */

loc_00530852: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = eax + 0x28;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_00530863: ;
    if (TEST_Z(eax, eax)) { sub_005308EF(); return; } /* je: equal / zero */

loc_0053086B: ;
    esi = MEM32(eax + 8);
    ebx = 0; /* xor self */
    ebx++;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, 0xF);
    edi = 0x648C78;
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0053088B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_00530895: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005308EB; /* je: equal / zero */

loc_00530899: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00531DEC(); /* call 0x00531DEC */

loc_005308A4: ;
    goto loc_005308C9;

loc_005308A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_005308BB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_005308C5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005308D4; /* je: equal / zero */

loc_005308C9: ;
    esi = MEM32(esi + 0x34);
    if (TEST_NZ(esi, esi)) goto loc_005308A6; /* jne: not equal / not zero */

loc_005308D0: ;
    SET_LO8(eax, LO8(ebx));
    g_seh_ebp = ebp; sub_005308F1(); return; /* tail jmp 0x005308F1 */

loc_005308D4: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi + 8) = eax;
    eax = esi;
    edi = ebp + 8;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_00531E58(); /* call 0x00531E58 */

loc_005308EB: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_005308F1(); return; /* tail jmp 0x005308F1 */

}

/**
 * sub_005308F8
 * Original: 0x005308F8 - 0x00530AA5 (429 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005308F8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005308F8: ;
    eax = 0x47FD8A;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_00530902: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esi;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0053063A(); /* call 0x0053063A */

loc_0053091B: ;
    if (CMP_NE(eax, MEM32(ebp + 8))) goto loc_0053092D; /* jne: not equal / not zero */

loc_00530920: ;
    if (CMP_NE(MEM32(ebx + 4), 1)) goto loc_00530935; /* jne: not equal / not zero */

loc_00530926: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00530AA7(); return; /* tail jmp 0x00530AA7 */

loc_0053092D: ;
    if (CMP_GE(eax & eax, 0)) { sub_00530AA5(); return; } /* jge: greater or equal (signed >=) */

loc_00530935: ;
    edi = MEM32(ebx + 0x30);
    if (TEST_Z(edi, edi)) goto loc_005309CD; /* je: equal / zero */

loc_00530940: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_00530950: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005308F8(); /* call 0x005308F8 */

loc_00530962: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00530AA5(); return; } /* je: equal / zero */

loc_0053096A: ;
    esi = 0; /* xor self */
    esi++;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax + 4) = ecx;
    ecx = edi;
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0053098F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005309B7; /* jne: not equal / not zero */

loc_00530993: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052BC3D(); /* call 0x0052BC3D */

loc_005309A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052C87B(); /* call 0x0052C87B */

loc_005309AF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00530AA5(); return; } /* je: equal / zero */

loc_005309B7: ;
    if (CMP_NE(MEM8(ebp + 0x20), 0)) goto loc_00530926; /* jne: not equal / not zero */

loc_005309C1: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax + 0x28;
    PUSH32(esp, eax);
    goto loc_005309F1;

loc_005309CD: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    edi = esi + 0x28;
    PUSH32(esp, MEM32(ebp + 8));
    eax = edi;
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_005309E0: ;
    if (TEST_NZ(eax, eax)) goto loc_00530A0D; /* jne: not equal / not zero */

loc_005309E4: ;
    if (CMP_NE(MEM8(ebp + 0x20), LO8(eax))) goto loc_00530926; /* jne: not equal / not zero */

loc_005309ED: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);

loc_005309F1: ;
    eax = ebx;
    edi = ebp + 0x20;
    PUSH32(esp, 0); sub_00531E58(); /* call 0x00531E58 */

loc_005309FB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 4) = 1;
    MEM32(ebx + 8) = eax;
    goto loc_00530926;

loc_00530A0D: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_00530A1A: ;
    edi = MEM32(eax + 8);
    goto loc_00530A21;

loc_00530A1F: ;
    edi = eax;

loc_00530A21: ;
    eax = MEM32(edi + 0x34);
    if (TEST_NZ(eax, eax)) goto loc_00530A1F; /* jne: not equal / not zero */

loc_00530A28: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -20;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052BC3D(); /* call 0x0052BC3D */

loc_00530A38: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, 0);
    MEM8(ebp + -4) = 1;
    esi = 0x648C78;
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_00530A52: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(eax) = esi;
    PUSH32(esp, edi);
    edi = ebx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052C390(); /* call 0x0052C390 */

loc_00530A6C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00530AA5(); return; } /* je: equal / zero */

loc_00530A70: ;
    if (CMP_NE(MEM8(ebp + 0x20), 0)) goto loc_00530926; /* jne: not equal / not zero */

loc_00530A7A: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0052B2D1(); /* call 0x0052B2D1 */

loc_00530A81: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00530A7A; /* jne: not equal / not zero */

loc_00530A85: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebx + 8) = eax;
    eax = ebx;
    edi = ebp + 8;
    MEM32(ebx + 4) = 1;
    PUSH32(esp, 0); sub_00531E58(); /* call 0x00531E58 */

loc_00530AA0: ;
    goto loc_00530926;

}

/**
 * sub_00530AB8
 * Original: 0x00530AB8 - 0x00530B08 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530AB8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530AB8: ;
    eax = 0x47FEEA;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_00530AC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_00530AC9: ;
    PUSH32(esp, 0); sub_0052B2D1(); /* call 0x0052B2D1 */

loc_00530ACE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00530AC9; /* jne: not equal / not zero */

loc_00530AD2: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    eax = esp;
    MEM32(ebp + 0x1C) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_005308F8(); /* call 0x005308F8 */

loc_00530AF9: ;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00530B08
 * Original: 0x00530B08 - 0x00530B63 (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530B08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530B08: ;
    eax = 0x47FEEA;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_00530B12: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_00530B1A: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0052B2D1(); /* call 0x0052B2D1 */

loc_00530B21: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00530B1A; /* jne: not equal / not zero */

loc_00530B25: ;
    eax = MEM32(ebx + 8);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    esi = MEM32(ebp + 0x18);
    edi = 0x648C78;
    if (CMP_EQ(eax, 1)) { sub_00530B63(); return; } /* je: equal / zero */

loc_00530B35: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(eax + 4) = esi;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_005308F8(); /* call 0x005308F8 */

loc_00530B57: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00530B63(); return; } /* je: equal / zero */

loc_00530B5B: ;
    eax = MEM32(ebx + 8);
    g_seh_ebp = ebp; sub_00530BFE(); return; /* tail jmp 0x00530BFE */

}

/**
 * sub_00530C0E
 * Original: 0x00530C0E - 0x00530C27 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530C0E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00530C0E: ;
    (void)0; /* cmp MEM8(0x5351A9), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM8(0x5351A9), 0)) goto loc_00530C1F; /* je: equal / zero */

loc_00530C1A: ;
    PUSH32(esp, 0); sub_00530C27(); /* call 0x00530C27 */

loc_00530C1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005317DB(); /* call 0x005317DB */

loc_00530C25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00530C27
 * Original: 0x00530C27 - 0x00530C63 (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530C27(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00530C27: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x90);
    if (TEST_NZ(ecx, ecx)) goto loc_00530C5A; /* jne: not equal / not zero */

loc_00530C35: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00530C56; /* je: equal / zero */

loc_00530C3C: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00530C63(); /* call 0x00530C63 */

loc_00530C48: ;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_00530C50: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_00530C3C; /* jne: not equal / not zero */

loc_00530C56: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00530C58: ;
    ecx = eax;

loc_00530C5A: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00530C58; /* jne: not equal / not zero */

loc_00530C61: ;
    goto loc_00530C35;

}

/**
 * sub_00530C63
 * Original: 0x00530C63 - 0x00530C8A (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530C63(void)
{
    int _flags = 0; /* fallback flag var */

loc_00530C63: ;
    if (CMP_EQ(MEM32(eax + 0x2C), 0)) goto loc_00530C87; /* je: equal / zero */

loc_00530C69: ;
    if (CMP_EQ(MEM32(eax + 0x30), 0)) goto loc_00530C87; /* je: equal / zero */

loc_00530C6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052DA66(); /* call 0x0052DA66 */

loc_00530C76: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, eax);
    edi = edi + 0x88;
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_00530C86: ;
    POP32(esp, edi);

loc_00530C87: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00530C8A
 * Original: 0x00530C8A - 0x00530CF5 (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530C8A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00530C8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(eax + 0x90);
    eax = eax + 0x88;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00530CEC; /* jne: not equal / not zero */

loc_00530CA2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -8) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_00530CE7; /* je: equal / zero */

loc_00530CAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00530CAE: ;
    edi = MEM32(esi + 4);
    if (CMP_EQ(MEM32(edi + 0x2C), 0)) goto loc_00530CBD; /* je: equal / zero */

loc_00530CB7: ;
    if (CMP_NE(MEM32(edi + 0x30), 0)) goto loc_00530CD6; /* jne: not equal / not zero */

loc_00530CBD: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0052E4E3(); /* call 0x0052E4E3 */

loc_00530CC4: ;
    MEM32(ebp + -4) = esi;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_00530CCF: ;
    esi = MEM32(ebp + -4);
    if (TEST_NZ(esi, esi)) { sub_00530CF5(); return; } /* jne: not equal / not zero */

loc_00530CD6: ;
    eax = ebp + -8;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_00530CDE: ;
    esi = MEM32(ebp + -8);
    if (TEST_NZ(esi, esi)) goto loc_00530CAE; /* jne: not equal / not zero */

loc_00530CE5: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00530CE7: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00530CEA: ;
    ecx = eax;

loc_00530CEC: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00530CEA; /* jne: not equal / not zero */

loc_00530CF3: ;
    goto loc_00530CA2;

}

/**
 * sub_00530D7D
 * Original: 0x00530D7D - 0x00530DE7 (106 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530D7D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00530D7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(eax + 0x90);
    eax = eax + 0x88;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00530DDE; /* jne: not equal / not zero */

loc_00530D95: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -8) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_00530DD9; /* je: equal / zero */

loc_00530D9F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00530DA1: ;
    edi = MEM32(esi + 4);
    eax = edi;
    PUSH32(esp, 0); sub_0052ABA5(); /* call 0x0052ABA5 */

loc_00530DAB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00530DC8; /* je: equal / zero */

loc_00530DAF: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0052E4E3(); /* call 0x0052E4E3 */

loc_00530DB6: ;
    MEM32(ebp + -4) = esi;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_00530DC1: ;
    esi = MEM32(ebp + -4);
    if (TEST_NZ(esi, esi)) { sub_00530DE7(); return; } /* jne: not equal / not zero */

loc_00530DC8: ;
    eax = ebp + -8;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_00530DD0: ;
    esi = MEM32(ebp + -8);
    if (TEST_NZ(esi, esi)) goto loc_00530DA1; /* jne: not equal / not zero */

loc_00530DD7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00530DD9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00530DDC: ;
    ecx = eax;

loc_00530DDE: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00530DDC; /* jne: not equal / not zero */

loc_00530DE5: ;
    goto loc_00530D95;

}

/**
 * sub_00530E12
 * Original: 0x00530E12 - 0x00530E70 (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530E12(void)
{
    int _flags = 0; /* fallback flag var */

loc_00530E12: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00530D7D(); /* call 0x00530D7D */

loc_00530E1E: ;
    if (CMP_EQ(MEM32(ebx + 0xC), 0)) goto loc_00530E61; /* je: equal / zero */

loc_00530E24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00530E26: ;
    ecx = MEM32(ebx + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_00530E67; /* jne: not equal / not zero */

loc_00530E2D: ;
    edi = MEM32(ecx + 4);
    esi = ecx;
    PUSH32(esp, 0); sub_005326AC(); /* call 0x005326AC */

loc_00530E37: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = eax + 0x88;
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_00530E46: ;
    if (TEST_Z(eax, eax)) goto loc_00530E59; /* je: equal / zero */

loc_00530E4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0); sub_00530E70(); /* call 0x00530E70 */

loc_00530E59: ;
    if (CMP_NE(MEM32(ebx + 0xC), 0)) goto loc_00530E26; /* jne: not equal / not zero */

loc_00530E5F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00530E61: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00530E65: ;
    ecx = eax;

loc_00530E67: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00530E65; /* jne: not equal / not zero */

loc_00530E6E: ;
    goto loc_00530E2D;

}

/**
 * sub_00530E70
 * Original: 0x00530E70 - 0x005317DB (2411 bytes, 793 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530E70: ;
    eax = 0x47FED8;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_00530E7A: ;
    esp = esp - 0xBC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_005317CA; /* je: equal / zero */

loc_00530E8E: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_005317CA; /* je: equal / zero */

loc_00530E97: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0052AC8E(); /* call 0x0052AC8E */

loc_00530E9E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00530ECB; /* je: equal / zero */

loc_00530EA2: ;
    esi = ebx + 4;
    MEM32(ebp + 0xC) = 3;

loc_00530EAC: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00530EBE; /* je: equal / zero */

loc_00530EB5: ;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00530EBE: ;
    esi = esi + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_00530EAC; /* jne: not equal / not zero */

loc_00530EC6: ;
    goto loc_005317B4;

loc_00530ECB: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052AC53(); /* call 0x0052AC53 */

loc_00530ED2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00530EFB; /* je: equal / zero */

loc_00530ED6: ;
    esi = ebx + 4;
    MEM32(ebp + -56) = 3;

loc_00530EE0: ;
    eax = MEM32(esi);
    if (CMP_EQ(MEM32(eax + 0x10), 0)) goto loc_00530EF3; /* je: equal / zero */

loc_00530EE8: ;
    PUSH32(esp, MEM32(eax + 0x10));
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00530EF3: ;
    esi = esi + 4;
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    if ((MEM32(ebp + -56) != 0)) goto loc_00530EE0; /* jne: not equal / not zero */

loc_00530EFB: ;
    eax = MEM32(ebx + 0x34);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx + 0x38);
    MEM32(ebp + -32) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_0052ABA5(); /* call 0x0052ABA5 */

loc_00530F0E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005317CA; /* je: equal / zero */

loc_00530F16: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052EF6F(); /* call 0x0052EF6F */

loc_00530F1D: ;
    esi = MEM32(ebx + 4);
    MEM8(ebp + -21) = LO8(eax);
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -28) = eax;
    eax = ebp + -160;
    ecx = esi;
    MEM32(ebp + -72) = esi;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_00530F39: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -180;
    ecx = esi;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_00530F4A: ;
    esi = ebp + -200;
    edi = eax;
    PUSH32(esp, 0); sub_0052A1F6(); /* call 0x0052A1F6 */

loc_00530F57: ;
    eax = MEM32(ebp + -28);
    MEM8(ebp + -4) = 1;
    MEM32(ebp + -180) = 0x648C74;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_00530F6D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531731; /* jne: not equal / not zero */

loc_00530F7A: ;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_0053130C; /* je: equal / zero */

loc_00530F84: ;
    if (CMP_NE(MEM8(ebx + 0x10), LO8(eax))) goto loc_0053130C; /* jne: not equal / not zero */

loc_00530F8D: ;
    SET_LO8(eax, MEM8(ebp + -21));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005310C6; /* je: equal / zero */

loc_00530F9B: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    eax = 0; /* xor self */
    edi = ebp + -96;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + -28);
    eax = eax + 0x20;
    MEM32(ebp + -44) = eax;

loc_00530FB1: ;
    eax = ebp + -80;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_00530FBB: ;
    ecx = MEM32(ebp + -36);
    SET_LO8(eax, MEM8(eax + ecx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + -80) = 0x648C78;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005310AB; /* je: equal / zero */

loc_00530FD1: ;
    eax = MEM32(ebp + -44);
    edi = MEM32(eax);
    SET_LO8(ecx, 0); /* xor self */
    eax = 0; /* xor self */

loc_00530FDA: ;
    if (CMP_NE(MEM32(ebp + eax * 4 + -96), edi)) goto loc_00530FE2; /* jne: not equal / not zero */

loc_00530FE0: ;
    SET_LO8(ecx, 1);

loc_00530FE2: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_00530FDA; /* jle: less or equal (signed <=) */

loc_00530FE8: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + -36);
    MEM32(ebp + eax * 4 + -96) = edi;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_005310AB; /* jne: not equal / not zero */

loc_00530FF7: ;
    if (TEST_Z(edi, edi)) goto loc_005310AB; /* je: equal / zero */

loc_00530FFF: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_005310AB; /* je: equal / zero */

loc_00531008: ;
    if (CMP_NE(MEM32(edi + 0x34), 0)) goto loc_005310A7; /* jne: not equal / not zero */

loc_00531012: ;
    eax = MEM32(ebp + -28);
    (void)0; /* cmp eax, MEM32(edi + 0x38) - flags set for next jcc */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -52) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(ebp + -52) = esp;
    eax = esp;
    if (CMP_NE(eax, MEM32(edi + 0x38))) goto loc_0053106F; /* jne: not equal / not zero */

loc_0053102A: ;
    MEM8(edi + 0x10) = 0;
    PUSH32(esp, 0); sub_0052A8A3(); /* call 0x0052A8A3 */

loc_00531033: ;
    eax = ebp + -68;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_0053103D: ;
    edx = eax;
    eax = esi;
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0053104A: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_0052A924(); /* call 0x0052A924 */

loc_00531052: ;
    MEM8(ebp + -4) = 1;
    edi = MEM32(edi + 0x38);
    MEM32(ebp + -68) = 0x648C78;

loc_00531060: ;
    if (TEST_Z(edi, edi)) goto loc_005310AB; /* je: equal / zero */

loc_00531064: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_0053106D: ;
    goto loc_005310AB;

loc_0053106F: ;
    MEM8(edi + 0x10) = 1;
    PUSH32(esp, 0); sub_0052A8B6(); /* call 0x0052A8B6 */

loc_00531078: ;
    eax = ebp + -60;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_00531082: ;
    edx = eax;
    eax = esi;
    MEM8(ebp + -4) = 3;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0053108F: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_0052A924(); /* call 0x0052A924 */

loc_00531097: ;
    MEM8(ebp + -4) = 1;
    edi = MEM32(edi + 0x3C);
    MEM32(ebp + -60) = 0x648C78;
    goto loc_00531060;

loc_005310A7: ;
    MEM8(ebp + -13) = 0;

loc_005310AB: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    MEM32(ebp + -44) = MEM32(ebp + -44) + 4;
    if (CMP_LE(MEM32(ebp + -36), 3)) goto loc_00530FB1; /* jle: less or equal (signed <=) */

loc_005310BC: ;
    if (CMP_NE(MEM8(ebp + -13), 0)) goto loc_0053130C; /* jne: not equal / not zero */

loc_005310C6: ;
    eax = MEM32(ebp + -20);
    if (CMP_NE(MEM32(eax + 8), 0x100)) goto loc_0053130C; /* jne: not equal / not zero */

loc_005310D6: ;
    edi = eax;
    esi = 0; /* xor self */
    edi = edi + 0x20;
    MEM8(ebp + -13) = 0;
    MEM32(ebp + -52) = edi;

loc_005310E4: ;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_00531111; /* jne: not equal / not zero */

loc_005310E8: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_005310F1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531111; /* jne: not equal / not zero */

loc_005310F5: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A4EF(); /* call 0x0052A4EF */

loc_005310FE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00531111; /* je: equal / zero */

loc_00531102: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0053110D: ;
    MEM8(ebp + -13) = 1;

loc_00531111: ;
    esi++;
    edi = edi + 4;
    if (CMP_LE(esi, 3)) goto loc_005310E4; /* jle: less or equal (signed <=) */

loc_0053111A: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_00531157; /* je: equal / zero */

loc_00531120: ;
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_0053112C: ;
    PUSH32(esp, 4);
    esi = esi + 0x20;
    POP32(esp, ebx);

loc_00531132: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00531146; /* je: equal / zero */

loc_00531138: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00531146; /* je: equal / zero */

loc_0053113D: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_00531146: ;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00531132; /* jne: not equal / not zero */

loc_0053114C: ;
    ebx = MEM32(ebp + -72);
    PUSH32(esp, 0); sub_0052A73C(); /* call 0x0052A73C */

loc_00531154: ;
    ebx = MEM32(ebp + 0xC);

loc_00531157: ;
    eax = ebp + -80;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_00531161: ;
    MEM8(ebp + -4) = 4;
    eax = MEM32(ebp + -20);
    eax = eax + 0x10;
    MEM32(ebp + -56) = eax;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_00531180; /* je: equal / zero */

loc_00531175: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00531175; /* jne: not equal / not zero */

loc_0053117E: ;
    goto loc_00531182;

loc_00531180: ;
    ecx = 0; /* xor self */

loc_00531182: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -36) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00531284; /* je: equal / zero */

loc_0053118D: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax + 4);
    esp = esp - 0x14;
    eax = esp;
    edi = eax + 4;
    esi = ebp + -156;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(eax) = 0x648C74;
    eax = ebp + -140;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -64) = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_005311BC: ;
    PUSH32(esp, eax);
    ebx = ebp + -100;
    PUSH32(esp, 0); sub_0052A2F2(); /* call 0x0052A2F2 */

loc_005311C5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM8(ebp + -4) = 5;
    eax = esp;
    ecx = ebp + -80;
    MEM32(ebp + -140) = 0x648C74;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0); sub_00529FEC(); /* call 0x00529FEC */

loc_005311E2: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_005311EA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531267; /* jne: not equal / not zero */

loc_005311EE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -100;
    edi = esp;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_005311FE: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_00531209: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00531267; /* je: equal / zero */

loc_0053120D: ;
    esi = MEM32(ebp + -36);
    ebx = MEM32(ebp + -56);
    PUSH32(esp, 0); sub_00532383(); /* call 0x00532383 */

loc_00531218: ;
    PUSH32(esp, MEM32(ebp + -28));
    ecx = MEM32(ebp + -44);
    MEM32(ebp + -36) = eax;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_00531226: ;
    esp = esp - 0x14;
    eax = esp;
    MEM32(eax) = 0x648C74;
    edi = eax + 4;
    esi = ebp + -96;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + -44);
    ebx = ebp + -120;
    eax = esi;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0); sub_0052A70F(); /* call 0x0052A70F */

loc_0053124B: ;
    eax = MEM32(ebp + -72);
    (void)0; /* cmp MEM8(eax + 0x14), 0 - flags set for next jcc */
    MEM32(ebp + -120) = 0x648C74;
    if (CMP_EQ(MEM8(eax + 0x14), 0)) goto loc_0053126F; /* je: equal / zero */

loc_0053125B: ;
    (void)0; /* cmp MEM8(esi + 0x14), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM8(esi + 0x14), 0)) ? 1 : 0); /* sete */
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_0053126F;

loc_00531267: ;
    eax = ebp + -36;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0053126F: ;
    MEM8(ebp + -4) = 4;
    (void)0; /* cmp MEM32(ebp + -36), 0 - flags set for next jcc */
    MEM32(ebp + -100) = 0x648C74;
    if (CMP_NE(MEM32(ebp + -36), 0)) goto loc_0053118D; /* jne: not equal / not zero */

loc_00531284: ;
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_0053128F: ;
    edi = MEM32(ebp + -52);
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */

loc_00531296: ;
    eax = MEM32(edi);
    if (CMP_NE(eax, MEM32(ebp + 0xC))) goto loc_005312C4; /* jne: not equal / not zero */

loc_0053129D: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_005312A6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005312C4; /* jne: not equal / not zero */

loc_005312AA: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A4EF(); /* call 0x0052A4EF */

loc_005312B3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005312C4; /* je: equal / zero */

loc_005312B7: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_005312C2: ;
    SET_LO8(ebx, 1);

loc_005312C4: ;
    esi++;
    edi = edi + 4;
    if (CMP_LE(esi, 3)) goto loc_00531296; /* jle: less or equal (signed <=) */

loc_005312CD: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00531305; /* je: equal / zero */

loc_005312D1: ;
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_005312DD: ;
    PUSH32(esp, 4);
    esi = esi + 0x20;
    POP32(esp, ebx);

loc_005312E3: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_005312F7; /* je: equal / zero */

loc_005312E9: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005312F7; /* je: equal / zero */

loc_005312EE: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_005312F7: ;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_005312E3; /* jne: not equal / not zero */

loc_005312FD: ;
    ebx = MEM32(ebp + -72);
    PUSH32(esp, 0); sub_0052A73C(); /* call 0x0052A73C */

loc_00531305: ;
    ebx = MEM32(ebp + 0xC);
    MEM8(ebp + -4) = 1;

loc_0053130C: ;
    if (CMP_EQ(MEM32(ebp + -32), 0)) goto loc_00531731; /* je: equal / zero */

loc_00531316: ;
    eax = ebp + -80;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A8A3(); /* call 0x0052A8A3 */

loc_00531320: ;
    (void)0; /* cmp MEM8(ebp + -21), 0 - flags set for next jcc */
    MEM8(ebp + -4) = 6;
    if (CMP_EQ(MEM8(ebp + -21), 0)) goto loc_00531343; /* je: equal / zero */

loc_0053132A: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, 1)) goto loc_0053133A; /* je: equal / zero */

loc_00531335: ;
    if (CMP_NE(eax, 6)) goto loc_00531343; /* jne: not equal / not zero */

loc_0053133A: ;
    eax = MEM32(ebp + -32);
    MEM8(ebp + -13) = 1;
    goto loc_0053134F;

loc_00531343: ;
    MEM8(ebp + -13) = 0;
    goto loc_00531478;

loc_0053134C: ;
    eax = MEM32(ebp + -36);

loc_0053134F: ;
    eax = MEM32(eax + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -36) = eax;
    if (TEST_Z(eax, eax)) goto loc_0053141D; /* je: equal / zero */

loc_0053135D: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    eax = eax + 0x20;
    MEM32(ebp + -56) = eax;

loc_0053136A: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -120;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_00531375: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0052A06C(); /* call 0x0052A06C */

loc_0053137D: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + -120) = 0x648C74;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00531402; /* je: equal / zero */

loc_00531388: ;
    eax = MEM32(ebp + -56);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_00531402; /* je: equal / zero */

loc_00531391: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00531402; /* je: equal / zero */

loc_00531396: ;
    edi = MEM32(ebp + -36);
    edi = edi + 0x20;
    MEM32(ebp + -20) = 4;

loc_005313A3: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_005313BC; /* je: equal / zero */

loc_005313A9: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005313BC; /* je: equal / zero */

loc_005313AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_005313B4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005313BC; /* je: equal / zero */

loc_005313B8: ;
    MEM8(ebp + -13) = 0;

loc_005313BC: ;
    edi = edi + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    if ((MEM32(ebp + -20) != 0)) goto loc_005313A3; /* jne: not equal / not zero */

loc_005313C4: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0053145F; /* jne: not equal / not zero */

loc_005313D2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00531402; /* je: equal / zero */

loc_005313D9: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_005313F4; /* je: equal / zero */

loc_005313E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_005313EC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005313F4; /* je: equal / zero */

loc_005313F0: ;
    MEM8(ebp + -13) = 0;

loc_005313F4: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_005313FC: ;
    if (CMP_NE(MEM32(ebp + -20), 0)) goto loc_005313D9; /* jne: not equal / not zero */

loc_00531402: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) + 1;
    MEM32(ebp + -56) = MEM32(ebp + -56) + 4;
    if (CMP_LE(MEM32(ebp + -44), 3)) goto loc_0053136A; /* jle: less or equal (signed <=) */

loc_00531413: ;
    if (CMP_NE(MEM8(ebp + -13), 0)) goto loc_0053134C; /* jne: not equal / not zero */

loc_0053141D: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_00531478; /* je: equal / zero */

loc_00531423: ;
    edi = MEM32(ebp + -28);
    esi = 0; /* xor self */
    edi = edi + 0x20;
    ebx = edi;

loc_0053142D: ;
    if (CMP_EQ(MEM8(ebp + esi + -76), 0)) goto loc_0053146F; /* je: equal / zero */

loc_00531434: ;
    edx = MEM32(ebx);
    if (TEST_Z(edx, edx)) goto loc_0053146B; /* je: equal / zero */

loc_0053143A: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0053146B; /* je: equal / zero */

loc_0053143F: ;
    eax = 0; /* xor self */
    ecx = edi;

loc_00531443: ;
    if (CMP_NE(MEM8(ebp + eax + -76), 0)) goto loc_00531452; /* jne: not equal / not zero */

loc_0053144A: ;
    if (CMP_NE(edx, MEM32(ecx))) goto loc_00531452; /* jne: not equal / not zero */

loc_0053144E: ;
    MEM8(ebp + -13) = 0;

loc_00531452: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_LE(eax, 3)) goto loc_00531443; /* jle: less or equal (signed <=) */

loc_0053145B: ;
    goto loc_0053146F;

loc_0053145D: ;
    ecx = eax;

loc_0053145F: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0053145D; /* jne: not equal / not zero */

loc_00531466: ;
    goto loc_005313D2;

loc_0053146B: ;
    MEM8(ebp + -13) = 0;

loc_0053146F: ;
    esi++;
    ebx = ebx + 4;
    if (CMP_LE(esi, 3)) goto loc_0053142D; /* jle: less or equal (signed <=) */

loc_00531478: ;
    eax = MEM32(ebp + -76);
    MEM32(ebp + -40) = 0x648C78;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -28);
    MEM8(ebp + -4) = 7;
    MEM32(ebp + -56) = eax;
    eax = ebp + -40;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_00531497: ;
    if (TEST_Z(eax, eax)) goto loc_005315AE; /* je: equal / zero */

loc_0053149F: ;
    ebx = 0x648C78;

loc_005314A4: ;
    eax = MEM32(ebp + -56);
    ecx = MEM32(eax + 0x18);
    eax = eax + 0x10;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -52) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_005314E3; /* jne: not equal / not zero */

loc_005314B4: ;
    (void)0; /* cmp MEM8(ebp + -13), 0 - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0053155F; /* je: equal / zero */

loc_005314C1: ;
    esi = MEM32(ebp + -20);
    if (TEST_Z(esi, esi)) goto loc_0053155F; /* je: equal / zero */

loc_005314CC: ;
    edi = MEM32(esi + 4);
    eax = MEM32(edi + 4);
    if (CMP_NE(eax, MEM32(ebp + 0xC))) goto loc_005314EC; /* jne: not equal / not zero */

loc_005314D7: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_005314DF: ;
    goto loc_005314C1;

loc_005314E1: ;
    ecx = eax;

loc_005314E3: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_005314E1; /* jne: not equal / not zero */

loc_005314EA: ;
    goto loc_005314B4;

loc_005314EC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -36);
    eax = esp;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, edi);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_00531501: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005314D7; /* je: equal / zero */

loc_00531505: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = ebp + -40;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0); sub_00529FEC(); /* call 0x00529FEC */

loc_00531514: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0053151A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0053155B; /* jne: not equal / not zero */

loc_0053151E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0053152F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_00531538: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0053155B; /* je: equal / zero */

loc_0053153C: ;
    ebx = MEM32(ebp + -52);
    PUSH32(esp, 0); sub_00532383(); /* call 0x00532383 */

loc_00531544: ;
    PUSH32(esp, MEM32(ebp + -32));
    ecx = edi;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_00531551: ;
    ebx = 0x648C78;
    goto loc_005314C1;

loc_0053155B: ;
    MEM8(ebp + -13) = 0;

loc_0053155F: ;
    eax = MEM32(ebp + -56);
    eax = MEM32(eax + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -56) = eax;
    if (TEST_Z(eax, eax)) goto loc_00531586; /* je: equal / zero */

loc_0053156C: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_00531571: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0053157B; /* je: equal / zero */

loc_00531576: ;
    MEM8(ebp + ecx + -36) = 0;

loc_0053157B: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_00531571; /* jle: less or equal (signed <=) */

loc_00531584: ;
    goto loc_0053159E;

loc_00531586: ;
    PUSH32(esp, 0);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM32(ebp + -48) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_00531594: ;
    esi = ebp + -44;
    edi = ebp + -36;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + -48) = ebx;

loc_0053159E: ;
    eax = ebp + -40;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_005315A6: ;
    if (TEST_NZ(eax, eax)) goto loc_005314A4; /* jne: not equal / not zero */

loc_005315AE: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_00531600; /* je: equal / zero */

loc_005315B4: ;
    edi = MEM32(ebp + -28);
    ebx = 0; /* xor self */
    edi = edi + 0x20;

loc_005315BC: ;
    if (CMP_EQ(MEM8(ebp + ebx + -76), 0)) goto loc_005315F2; /* je: equal / zero */

loc_005315C3: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_005315F2; /* je: equal / zero */

loc_005315C9: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_005315F2; /* je: equal / zero */

loc_005315CE: ;
    eax = MEM32(ebp + -28);
    if (CMP_NE(eax, MEM32(esi + 0x38))) goto loc_005315E0; /* jne: not equal / not zero */

loc_005315D6: ;
    PUSH32(esp, MEM32(ebp + -32));
    eax = esi;
    PUSH32(esp, 0); sub_0052A9CF(); /* call 0x0052A9CF */

loc_005315E0: ;
    eax = MEM32(ebp + -28);
    if (CMP_NE(eax, MEM32(esi + 0x3C))) goto loc_005315F2; /* jne: not equal / not zero */

loc_005315E8: ;
    PUSH32(esp, MEM32(ebp + -32));
    eax = esi;
    PUSH32(esp, 0); sub_0052AAA1(); /* call 0x0052AAA1 */

loc_005315F2: ;
    ebx++;
    edi = edi + 4;
    if (CMP_LE(ebx, 3)) goto loc_005315BC; /* jle: less or equal (signed <=) */

loc_005315FB: ;
    goto loc_0053171F;

loc_00531600: ;
    eax = MEM32(ebp + -32);
    eax = eax + 0x10;
    MEM32(ebp + -52) = eax;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0053161B; /* je: equal / zero */

loc_00531610: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00531610; /* jne: not equal / not zero */

loc_00531619: ;
    goto loc_0053161D;

loc_0053161B: ;
    ecx = 0; /* xor self */

loc_0053161D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0053171F; /* je: equal / zero */

loc_00531628: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 4);
    esp = esp - 0x14;
    eax = esp;
    edi = eax + 4;
    esi = ebp + -156;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(eax) = 0x648C74;
    eax = ebp + -120;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -64) = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_00531654: ;
    PUSH32(esp, eax);
    ebx = ebp + -100;
    PUSH32(esp, 0); sub_0052A2F2(); /* call 0x0052A2F2 */

loc_0053165D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM8(ebp + -4) = 8;
    eax = esp;
    ecx = ebp + -80;
    MEM32(ebp + -120) = 0x648C74;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0); sub_00529FEC(); /* call 0x00529FEC */

loc_00531677: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0053167F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531702; /* jne: not equal / not zero */

loc_00531683: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -100;
    edi = esp;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_00531693: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_0053169E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00531702; /* je: equal / zero */

loc_005316A2: ;
    esi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -52);
    PUSH32(esp, 0); sub_00532383(); /* call 0x00532383 */

loc_005316AD: ;
    PUSH32(esp, MEM32(ebp + -28));
    ecx = MEM32(ebp + -44);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_005316BB: ;
    esp = esp - 0x14;
    eax = esp;
    MEM32(eax) = 0x648C74;
    edi = eax + 4;
    esi = ebp + -96;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + -44);
    ebx = ebp + -140;
    eax = esi;
    MEM32(ebp + -64) = esp;
    PUSH32(esp, 0); sub_0052A70F(); /* call 0x0052A70F */

loc_005316E3: ;
    eax = MEM32(ebp + -72);
    (void)0; /* cmp MEM8(eax + 0x14), 0 - flags set for next jcc */
    MEM32(ebp + -140) = 0x648C74;
    if (CMP_EQ(MEM8(eax + 0x14), 0)) goto loc_0053170A; /* je: equal / zero */

loc_005316F6: ;
    (void)0; /* cmp MEM8(esi + 0x14), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM8(esi + 0x14), 0)) ? 1 : 0); /* sete */
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_0053170A;

loc_00531702: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0053170A: ;
    MEM8(ebp + -4) = 7;
    (void)0; /* cmp MEM32(ebp + -20), 0 - flags set for next jcc */
    MEM32(ebp + -100) = 0x648C74;
    if (CMP_NE(MEM32(ebp + -20), 0)) goto loc_00531628; /* jne: not equal / not zero */

loc_0053171F: ;
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_0053172A: ;
    ebx = MEM32(ebp + 0xC);
    MEM8(ebp + -4) = 1;

loc_00531731: ;
    (void)0; /* cmp MEM32(ebp + -32), 0 - flags set for next jcc */
    MEM8(ebp + -21) = 0;
    if (CMP_EQ(MEM32(ebp + -32), 0)) goto loc_005317A9; /* je: equal / zero */

loc_0053173B: ;
    edi = MEM32(ebp + -32);
    esi = 0; /* xor self */
    edi = edi + 0x20;

loc_00531743: ;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_00531763; /* jne: not equal / not zero */

loc_00531747: ;
    ecx = MEM32(ebp + -32);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_00531750: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531763; /* jne: not equal / not zero */

loc_00531754: ;
    ecx = MEM32(ebp + -32);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0053175F: ;
    MEM8(ebp + -21) = 1;

loc_00531763: ;
    esi++;
    edi = edi + 4;
    if (CMP_LE(esi, 3)) goto loc_00531743; /* jle: less or equal (signed <=) */

loc_0053176C: ;
    if (CMP_EQ(MEM8(ebp + -21), 0)) goto loc_005317A9; /* je: equal / zero */

loc_00531772: ;
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_0053177E: ;
    PUSH32(esp, 4);
    esi = esi + 0x20;
    POP32(esp, ebx);

loc_00531784: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00531798; /* je: equal / zero */

loc_0053178A: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00531798; /* je: equal / zero */

loc_0053178F: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_00531798: ;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00531784; /* jne: not equal / not zero */

loc_0053179E: ;
    ebx = MEM32(ebp + -72);
    PUSH32(esp, 0); sub_0052A73C(); /* call 0x0052A73C */

loc_005317A6: ;
    ebx = MEM32(ebp + 0xC);

loc_005317A9: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0052AC8E(); /* call 0x0052AC8E */

loc_005317B0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005317CA; /* je: equal / zero */

loc_005317B4: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x88;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_005317C2: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_005317CA: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005317DB
 * Original: 0x005317DB - 0x005318CA (239 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005317DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005317DB: ;
    eax = 0x4800A6;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_005317E5: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ebp + -48) = 0x648C88;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = 0x648C20;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    eax = ebp + -48;
    PUSH32(esp, eax);
    edi = 0x535DAC;
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0); sub_00531C78(); /* call 0x00531C78 */

loc_0053181B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    edi = 0x535D9C;
    PUSH32(esp, 0); sub_00531B66(); /* call 0x00531B66 */

loc_00531829: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x90);
    if (CMP_NE(ecx, ebx)) goto loc_005318BE; /* jne: not equal / not zero */

loc_0053183A: ;
    ecx = 0; /* xor self */

loc_0053183C: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00531891; /* je: equal / zero */

loc_00531843: ;
    PUSH32(esp, esi);

loc_00531844: ;
    eax = MEM32(ebp + -16);
    esi = MEM32(eax + 4);
    PUSH32(esp, esi);
    edi = ebp + -48;
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_00531853: ;
    eax = MEM32(esi + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_00531863; /* je: equal / zero */

loc_0053185A: ;
    PUSH32(esp, eax);
    edi = ebp + -32;
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00531863: ;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, ebx)) goto loc_00531873; /* je: equal / zero */

loc_0053186A: ;
    PUSH32(esp, eax);
    edi = ebp + -32;
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00531873: ;
    esi = MEM32(esi + 0x3C);
    if (CMP_EQ(esi, ebx)) goto loc_00531883; /* je: equal / zero */

loc_0053187A: ;
    PUSH32(esp, esi);
    edi = ebp + -32;
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00531883: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0053188B: ;
    if (CMP_NE(MEM32(ebp + -16), ebx)) goto loc_00531844; /* jne: not equal / not zero */

loc_00531890: ;
    POP32(esp, esi);

loc_00531891: ;
    if (CMP_NE(MEM32(ebp + -20), ebx)) goto loc_0053189B; /* jne: not equal / not zero */

loc_00531896: ;
    if (CMP_EQ(MEM32(ebp + -36), ebx)) { sub_005318CA(); return; } /* je: equal / zero */

loc_0053189B: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0053190D(); /* call 0x0053190D */

loc_005318AB: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -48;
    PUSH32(esp, 0); sub_00530E12(); /* call 0x00530E12 */

loc_005318BA: ;
    goto loc_00531891;

loc_005318BC: ;
    ecx = eax;

loc_005318BE: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_NE(eax, ebx)) goto loc_005318BC; /* jne: not equal / not zero */

loc_005318C5: ;
    goto loc_0053183C;

}

/**
 * sub_0053190D
 * Original: 0x0053190D - 0x00531AA6 (409 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053190D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053190D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(ecx, ecx)) goto loc_00531930; /* jne: not equal / not zero */

loc_0053191F: ;
    (void)0; /* cmp MEM32(ebx + 0xC), 0 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(MEM32(ebx + 0xC), 0)) goto loc_00531A95; /* je: equal / zero */

loc_0053192B: ;
    PUSH32(esp, edi);
    goto loc_0053193C;

loc_0053192E: ;
    ecx = eax;

loc_00531930: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0053192E; /* jne: not equal / not zero */

loc_00531937: ;
    goto loc_0053191F;

loc_00531939: ;
    ebx = MEM32(ebp + 0xC);

loc_0053193C: ;
    edi = MEM32(esi + 4);
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_00532912(); /* call 0x00532912 */

loc_00531947: ;
    if (CMP_EQ(edi, MEM32(0x5351AC))) goto loc_00531A7E; /* je: equal / zero */

loc_00531953: ;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00531967; /* je: equal / zero */

loc_0053195A: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(eax + 0x34);
    if (TEST_NZ(eax, eax)) goto loc_0053195A; /* jne: not equal / not zero */

loc_00531964: ;
    edi = MEM32(ebp + -8);

loc_00531967: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); sub_0052B4B8(); /* call 0x0052B4B8 */

loc_00531970: ;
    goto loc_00531975;

loc_00531972: ;
    edi = MEM32(ebp + -8);

loc_00531975: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0053197D: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); sub_0052B4B8(); /* call 0x0052B4B8 */

loc_00531986: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A5D2(); /* call 0x0052A5D2 */

loc_0053198C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    eax = edi + 0x20;
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -16) = eax;

loc_0053199A: ;
    eax = MEM32(ebp + -16);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) goto loc_005319B0; /* jne: not equal / not zero */

loc_005319A3: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, 2)) goto loc_005319B0; /* je: equal / zero */

loc_005319AB: ;
    if (CMP_NE(eax, 3)) goto loc_00531A2C; /* jne: not equal / not zero */

loc_005319B0: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = edi;
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_005319BA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00531A28; /* jne: not equal / not zero */

loc_005319BE: ;
    if (TEST_Z(esi, esi)) goto loc_00531A2C; /* je: equal / zero */

loc_005319C2: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00531A2C; /* je: equal / zero */

loc_005319C7: ;
    ebx = esi + 4;
    MEM32(ebp + -20) = 3;

loc_005319D1: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_005319E6; /* je: equal / zero */

loc_005319DA: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_005319E3: ;
    edi = MEM32(ebp + -8);

loc_005319E6: ;
    ebx = ebx + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    if ((MEM32(ebp + -20) != 0)) goto loc_005319D1; /* jne: not equal / not zero */

loc_005319EE: ;
    eax = MEM32(ebp + -12);
    ecx = edi;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_005319F8: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052AC53(); /* call 0x0052AC53 */

loc_005319FF: ;
    PUSH32(esp, 0); sub_0052AC8E(); /* call 0x0052AC8E */

loc_00531A04: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00531A2C; /* je: equal / zero */

loc_00531A08: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00531A10: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x88;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00531A1E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00531A26: ;
    goto loc_00531A2C;

loc_00531A28: ;
    MEM8(ebp + -1) = 1;

loc_00531A2C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 4;
    if (CMP_LE(MEM32(ebp + -12), 3)) goto loc_0053199A; /* jle: less or equal (signed <=) */

loc_00531A3D: ;
    esi = MEM32(edi + 0x30);
    eax = edi;
    PUSH32(esp, 0); sub_0052A45B(); /* call 0x0052A45B */

loc_00531A47: ;
    if (CMP_NE(MEM8(ebp + -1), 0)) goto loc_00531A73; /* jne: not equal / not zero */

loc_00531A4D: ;
    eax = edi;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_00531A54: ;
    if (TEST_Z(eax, eax)) goto loc_00531A6B; /* je: equal / zero */

loc_00531A58: ;
    eax = edi;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_00531A5F: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531EE1(); /* call 0x00531EE1 */

loc_00531A68: ;
    edi = MEM32(ebp + -8);

loc_00531A6B: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00531A73: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00531972; /* jne: not equal / not zero */

loc_00531A7E: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_00531A9D; /* jne: not equal / not zero */

loc_00531A88: ;
    (void)0; /* cmp MEM32(edx + 0xC), 0 - flags set for next jcc */
    esi = ecx;
    if (CMP_NE(MEM32(edx + 0xC), 0)) goto loc_00531939; /* jne: not equal / not zero */

loc_00531A94: ;
    POP32(esp, edi);

loc_00531A95: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00531A9B: ;
    ecx = eax;

loc_00531A9D: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00531A9B; /* jne: not equal / not zero */

loc_00531AA4: ;
    goto loc_00531A88;

}

/**
 * sub_00531AC2
 * Original: 0x00531AC2 - 0x00531ADD (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531AC2(void)
{

loc_00531AC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C38;
    PUSH32(esp, 0); sub_00532BA0(); /* call 0x00532BA0 */

loc_00531AD3: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531ADD
 * Original: 0x00531ADD - 0x00531B21 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531ADD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531ADD: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531B21(); return; } /* jne: not equal / not zero */

loc_00531AE4: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531AF7: ;
    if (TEST_Z(eax, eax)) goto loc_00531B19; /* je: equal / zero */

loc_00531AFB: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648C4C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531B1B;

loc_00531B19: ;
    eax = 0; /* xor self */

loc_00531B1B: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531B2D(); return; /* tail jmp 0x00531B2D */

}

/**
 * sub_00531B30
 * Original: 0x00531B30 - 0x00531B4B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531B30(void)
{

loc_00531B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    ebx = ecx;
    eax = ebx;
    PUSH32(esp, 0); sub_00532364(); /* call 0x00532364 */

loc_00531B3F: ;
    esi = eax;
    PUSH32(esp, 0); sub_00532135(); /* call 0x00532135 */

loc_00531B46: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531B4B
 * Original: 0x00531B4B - 0x00531B66 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531B4B(void)
{

loc_00531B4B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648CA0;
    PUSH32(esp, 0); sub_00532249(); /* call 0x00532249 */

loc_00531B5C: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531B66
 * Original: 0x00531B66 - 0x00531BAA (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531B66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531B66: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531BAA(); return; } /* jne: not equal / not zero */

loc_00531B6D: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531B80: ;
    if (TEST_Z(eax, eax)) goto loc_00531BA2; /* je: equal / zero */

loc_00531B84: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648CAC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531BA4;

loc_00531BA2: ;
    eax = 0; /* xor self */

loc_00531BA4: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531BB6(); return; /* tail jmp 0x00531BB6 */

}

/**
 * sub_00531BB9
 * Original: 0x00531BB9 - 0x00531BD4 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531BB9(void)
{

loc_00531BB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    ebx = ecx;
    eax = ebx;
    PUSH32(esp, 0); sub_00532364(); /* call 0x00532364 */

loc_00531BC8: ;
    esi = eax;
    PUSH32(esp, 0); sub_00532272(); /* call 0x00532272 */

loc_00531BCF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531BD4
 * Original: 0x00531BD4 - 0x00531BEF (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531BD4(void)
{

loc_00531BD4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C98;
    PUSH32(esp, 0); sub_00532D53(); /* call 0x00532D53 */

loc_00531BE5: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531BEF
 * Original: 0x00531BEF - 0x00531C33 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531BEF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531BEF: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531C33(); return; } /* jne: not equal / not zero */

loc_00531BF6: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531C09: ;
    if (TEST_Z(eax, eax)) goto loc_00531C2B; /* je: equal / zero */

loc_00531C0D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648C50;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531C2D;

loc_00531C2B: ;
    eax = 0; /* xor self */

loc_00531C2D: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531C3F(); return; /* tail jmp 0x00531C3F */

}

/**
 * sub_00531C5D
 * Original: 0x00531C5D - 0x00531C78 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531C5D(void)
{

loc_00531C5D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C80;
    PUSH32(esp, 0); sub_005324E1(); /* call 0x005324E1 */

loc_00531C6E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531C78
 * Original: 0x00531C78 - 0x00531CBC (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531C78(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531C78: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531CBC(); return; } /* jne: not equal / not zero */

loc_00531C7F: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531C92: ;
    if (TEST_Z(eax, eax)) goto loc_00531CB4; /* je: equal / zero */

loc_00531C96: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648CB4;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531CB6;

loc_00531CB4: ;
    eax = 0; /* xor self */

loc_00531CB6: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531CC8(); return; /* tail jmp 0x00531CC8 */

}

/**
 * sub_00531CCB
 * Original: 0x00531CCB - 0x00531CE6 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531CCB(void)
{

loc_00531CCB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    ebx = ecx;
    eax = ebx;
    PUSH32(esp, 0); sub_00532364(); /* call 0x00532364 */

loc_00531CDA: ;
    esi = eax;
    PUSH32(esp, 0); sub_0053250A(); /* call 0x0053250A */

loc_00531CE1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531CE6
 * Original: 0x00531CE6 - 0x00531CF1 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531CE6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531CE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x648C90;
    g_seh_ebp = ebp; sub_00531CF9(); return; /* tail jmp 0x00531CF9 */

}

/**
 * sub_00531D01
 * Original: 0x00531D01 - 0x00531D1F (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531D01(void)
{
    uint32_t ebp;

loc_00531D01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + 8;
    esi = ecx;
    PUSH32(esp, 0); sub_00532624(); /* call 0x00532624 */

loc_00531D12: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005325FC(); /* call 0x005325FC */

loc_00531D1A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531D1F
 * Original: 0x00531D1F - 0x00531D63 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531D1F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00531D1F: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531D2B: ;
    if (TEST_Z(eax, eax)) goto loc_00531D4F; /* je: equal / zero */

loc_00531D2F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = 0x648C40;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00531D51; /* je: equal / zero */

loc_00531D4A: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_00531D51;

loc_00531D4F: ;
    eax = 0; /* xor self */

loc_00531D51: ;
    (void)0; /* cmp MEM32(esi + 4), 0 - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_NE(MEM32(esi + 4), 0)) goto loc_00531D5D; /* jne: not equal / not zero */

loc_00531D5A: ;
    MEM32(esi + 4) = eax;

loc_00531D5D: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531D63
 * Original: 0x00531D63 - 0x00531D7E (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531D63(void)
{

loc_00531D63: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C88;
    PUSH32(esp, 0); sub_00532F06(); /* call 0x00532F06 */

loc_00531D74: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531D7E
 * Original: 0x00531D7E - 0x00531DC2 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531D7E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531D7E: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531DC2(); return; } /* jne: not equal / not zero */

loc_00531D85: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531D98: ;
    if (TEST_Z(eax, eax)) goto loc_00531DBA; /* je: equal / zero */

loc_00531D9C: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648C68;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531DBC;

loc_00531DBA: ;
    eax = 0; /* xor self */

loc_00531DBC: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531DCE(); return; /* tail jmp 0x00531DCE */

}

/**
 * sub_00531DEC
 * Original: 0x00531DEC - 0x00531E0D (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531DEC(void)
{
    uint32_t ebp;

loc_00531DEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_00531E00: ;
    esi = eax;
    PUSH32(esp, 0); sub_00532831(); /* call 0x00532831 */

loc_00531E07: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531E0D
 * Original: 0x00531E0D - 0x00531E58 (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531E0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00531E0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx + -16;
    ecx = MEM32(ebx + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(ecx, ecx)) goto loc_00531E3A; /* jne: not equal / not zero */

loc_00531E1D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ecx;
    MEM32(ebp + -4) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_00531E52; /* je: equal / zero */

loc_00531E26: ;
    eax = MEM32(esi + 8);
    if (CMP_NE(eax, MEM32(ebp + 8))) goto loc_00531E43; /* jne: not equal / not zero */

loc_00531E2E: ;
    PUSH32(esp, 0); sub_00532831(); /* call 0x00532831 */

loc_00531E33: ;
    MEM32(ebp + -4) = eax;
    goto loc_00531E4B;

loc_00531E38: ;
    ecx = eax;

loc_00531E3A: ;
    eax = MEM32(ecx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00531E38; /* jne: not equal / not zero */

loc_00531E41: ;
    goto loc_00531E1D;

loc_00531E43: ;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005330B6(); /* call 0x005330B6 */

loc_00531E4B: ;
    esi = MEM32(ebp + -4);
    if (TEST_NZ(esi, esi)) goto loc_00531E26; /* jne: not equal / not zero */

loc_00531E52: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531E58
 * Original: 0x00531E58 - 0x00531E80 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531E58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00531E58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005327E9(); /* call 0x005327E9 */

loc_00531E6E: ;
    if (TEST_NZ(eax, eax)) { sub_00531E80(); return; } /* jne: not equal / not zero */

loc_00531E72: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00532897(); /* call 0x00532897 */

loc_00531E7E: ;
    g_seh_ebp = ebp; sub_00531E83(); return; /* tail jmp 0x00531E83 */

}

/**
 * sub_00531E8C
 * Original: 0x00531E8C - 0x00531EA7 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531E8C(void)
{

loc_00531E8C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C44;
    PUSH32(esp, 0); sub_00532808(); /* call 0x00532808 */

loc_00531E9D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531EC6
 * Original: 0x00531EC6 - 0x00531EE1 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531EC6(void)
{

loc_00531EC6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi) = 0x648C20;
    PUSH32(esp, 0); sub_005331A3(); /* call 0x005331A3 */

loc_00531ED7: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531EE1
 * Original: 0x00531EE1 - 0x00531F25 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531EE1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531EE1: ;
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) { sub_00531F25(); return; } /* jne: not equal / not zero */

loc_00531EE8: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x24870000);
    esi++;
    PUSH32(esp, 0x18);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00531EFB: ;
    if (TEST_Z(eax, eax)) goto loc_00531F1D; /* je: equal / zero */

loc_00531EFF: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax) = 0x648C28;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00531F1F;

loc_00531F1D: ;
    eax = 0; /* xor self */

loc_00531F1F: ;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00531F31(); return; /* tail jmp 0x00531F31 */

}

/**
 * sub_00532135
 * Original: 0x00532135 - 0x00532141 (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532135(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532135: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_00532141(); return; } /* jne: not equal / not zero */

loc_0053213D: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0053219B
 * Original: 0x0053219B - 0x0053221D (130 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053219B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053219B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_005321A9; /* jne: not equal / not zero */

loc_005321A8: ;
    __debugbreak(); /* int3 */

loc_005321A9: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(eax, ebx)) goto loc_005321E8; /* jbe: below or equal (unsigned <=) */

loc_005321B4: ;
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_005321F1; /* jne: not equal / not zero */

loc_005321BB: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005321C7: ;
    if (TEST_Z(eax, eax)) goto loc_005321D5; /* je: equal / zero */

loc_005321CB: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532227(); /* call 0x00532227 */

loc_005321D3: ;
    goto loc_005321D7;

loc_005321D5: ;
    eax = 0; /* xor self */

loc_005321D7: ;
    MEM32(esi + 0xC) = eax;

loc_005321DA: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_005321DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_005321E6: ;
    g_seh_ebp = ebp; sub_0053221F(); return; /* tail jmp 0x0053221F */

loc_005321E8: ;
    if (_flags /* jae: above or equal (unsigned >=) */) { sub_0053221D(); return; }

loc_005321EA: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_005321FC; /* je: equal / zero */

loc_005321F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_0053219B(); /* call 0x0053219B */

loc_005321FA: ;
    goto loc_005321DD;

loc_005321FC: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00532208: ;
    if (TEST_Z(eax, eax)) goto loc_00532216; /* je: equal / zero */

loc_0053220C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532227(); /* call 0x00532227 */

loc_00532214: ;
    goto loc_00532218;

loc_00532216: ;
    eax = 0; /* xor self */

loc_00532218: ;
    MEM32(esi + 0x10) = eax;
    goto loc_005321DA;

}

/**
 * sub_00532227
 * Original: 0x00532227 - 0x00532249 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532227(void)
{

loc_00532227: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648C4C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532249
 * Original: 0x00532249 - 0x00532272 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532249(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532249: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_0053226E; /* je: equal / zero */

loc_00532252: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_00532249(); /* call 0x00532249 */

loc_0053225E: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00532249(); /* call 0x00532249 */

loc_00532266: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0053226E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532272
 * Original: 0x00532272 - 0x0053227E (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532272(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532272: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_0053227E(); return; } /* jne: not equal / not zero */

loc_0053227A: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005322D8
 * Original: 0x005322D8 - 0x0053235A (130 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005322D8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005322D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_005322E6; /* jne: not equal / not zero */

loc_005322E5: ;
    __debugbreak(); /* int3 */

loc_005322E6: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(eax, ebx)) goto loc_00532325; /* jbe: below or equal (unsigned <=) */

loc_005322F1: ;
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0053232E; /* jne: not equal / not zero */

loc_005322F8: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00532304: ;
    if (TEST_Z(eax, eax)) goto loc_00532312; /* je: equal / zero */

loc_00532308: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532475(); /* call 0x00532475 */

loc_00532310: ;
    goto loc_00532314;

loc_00532312: ;
    eax = 0; /* xor self */

loc_00532314: ;
    MEM32(esi + 0xC) = eax;

loc_00532317: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_0053231A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_00532323: ;
    g_seh_ebp = ebp; sub_0053235C(); return; /* tail jmp 0x0053235C */

loc_00532325: ;
    if (_flags /* jae: above or equal (unsigned >=) */) { sub_0053235A(); return; }

loc_00532327: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00532339; /* je: equal / zero */

loc_0053232E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_005322D8(); /* call 0x005322D8 */

loc_00532337: ;
    goto loc_0053231A;

loc_00532339: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00532345: ;
    if (TEST_Z(eax, eax)) goto loc_00532353; /* je: equal / zero */

loc_00532349: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532475(); /* call 0x00532475 */

loc_00532351: ;
    goto loc_00532355;

loc_00532353: ;
    eax = 0; /* xor self */

loc_00532355: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00532317;

}

/**
 * sub_00532364
 * Original: 0x00532364 - 0x00532369 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532364(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532364: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0053237C(); return; /* tail jmp 0x0053237C */

}

/**
 * sub_00532383
 * Original: 0x00532383 - 0x0053238F (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532383(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532383: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_0053238F(); return; } /* jne: not equal / not zero */

loc_0053238B: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005323E9
 * Original: 0x005323E9 - 0x0053246B (130 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005323E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005323E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_005323F7; /* jne: not equal / not zero */

loc_005323F6: ;
    __debugbreak(); /* int3 */

loc_005323F7: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(eax, ebx)) goto loc_00532436; /* jbe: below or equal (unsigned <=) */

loc_00532402: ;
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0053243F; /* jne: not equal / not zero */

loc_00532409: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00532415: ;
    if (TEST_Z(eax, eax)) goto loc_00532423; /* je: equal / zero */

loc_00532419: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532497(); /* call 0x00532497 */

loc_00532421: ;
    goto loc_00532425;

loc_00532423: ;
    eax = 0; /* xor self */

loc_00532425: ;
    MEM32(esi + 0xC) = eax;

loc_00532428: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_0053242B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_00532434: ;
    g_seh_ebp = ebp; sub_0053246D(); return; /* tail jmp 0x0053246D */

loc_00532436: ;
    if (_flags /* jae: above or equal (unsigned >=) */) { sub_0053246B(); return; }

loc_00532438: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0053244A; /* je: equal / zero */

loc_0053243F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_005323E9(); /* call 0x005323E9 */

loc_00532448: ;
    goto loc_0053242B;

loc_0053244A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00532456: ;
    if (TEST_Z(eax, eax)) goto loc_00532464; /* je: equal / zero */

loc_0053245A: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532497(); /* call 0x00532497 */

loc_00532462: ;
    goto loc_00532466;

loc_00532464: ;
    eax = 0; /* xor self */

loc_00532466: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00532428;

}

/**
 * sub_00532475
 * Original: 0x00532475 - 0x00532497 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532475(void)
{

loc_00532475: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648CAC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532497
 * Original: 0x00532497 - 0x005324B9 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532497(void)
{

loc_00532497: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648C50;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005324B9
 * Original: 0x005324B9 - 0x005324E1 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005324B9(void)
{
    int _flags = 0; /* fallback flag var */

loc_005324B9: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) goto loc_005324D4; /* je: equal / zero */

loc_005324C2: ;
    ecx = edx;
    edx = MEM32(ecx + 0xC);
    if (TEST_NZ(edx, edx)) goto loc_005324C2; /* jne: not equal / not zero */

loc_005324CB: ;
    goto loc_005324DE;

loc_005324CD: ;
    if (CMP_NE(MEM32(edx + 0x10), ecx)) goto loc_005324DB; /* jne: not equal / not zero */

loc_005324D2: ;
    ecx = edx;

loc_005324D4: ;
    edx = MEM32(ecx + 8);
    if (TEST_NZ(edx, edx)) goto loc_005324CD; /* jne: not equal / not zero */

loc_005324DB: ;
    ecx = MEM32(ecx + 8);

loc_005324DE: ;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005324E1
 * Original: 0x005324E1 - 0x0053250A (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005324E1(void)
{
    int _flags = 0; /* fallback flag var */

loc_005324E1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00532506; /* je: equal / zero */

loc_005324EA: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_005324E1(); /* call 0x005324E1 */

loc_005324F6: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_005324E1(); /* call 0x005324E1 */

loc_005324FE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00532506: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053250A
 * Original: 0x0053250A - 0x00532516 (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053250A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053250A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_00532516(); return; } /* jne: not equal / not zero */

loc_00532512: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00532570
 * Original: 0x00532570 - 0x005325F2 (130 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_0053257E; /* jne: not equal / not zero */

loc_0053257D: ;
    __debugbreak(); /* int3 */

loc_0053257E: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(eax, ebx)) goto loc_005325BD; /* jbe: below or equal (unsigned <=) */

loc_00532589: ;
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_005325C6; /* jne: not equal / not zero */

loc_00532590: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053259C: ;
    if (TEST_Z(eax, eax)) goto loc_005325AA; /* je: equal / zero */

loc_005325A0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0053263E(); /* call 0x0053263E */

loc_005325A8: ;
    goto loc_005325AC;

loc_005325AA: ;
    eax = 0; /* xor self */

loc_005325AC: ;
    MEM32(esi + 0xC) = eax;

loc_005325AF: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_005325B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_005325BB: ;
    g_seh_ebp = ebp; sub_005325F4(); return; /* tail jmp 0x005325F4 */

loc_005325BD: ;
    if (_flags /* jae: above or equal (unsigned >=) */) { sub_005325F2(); return; }

loc_005325BF: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_005325D1; /* je: equal / zero */

loc_005325C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_00532570(); /* call 0x00532570 */

loc_005325CF: ;
    goto loc_005325B2;

loc_005325D1: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005325DD: ;
    if (TEST_Z(eax, eax)) goto loc_005325EB; /* je: equal / zero */

loc_005325E1: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0053263E(); /* call 0x0053263E */

loc_005325E9: ;
    goto loc_005325ED;

loc_005325EB: ;
    eax = 0; /* xor self */

loc_005325ED: ;
    MEM32(esi + 0x10) = eax;
    goto loc_005325AF;

}

/**
 * sub_005325FC
 * Original: 0x005325FC - 0x00532624 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005325FC(void)
{
    int _flags = 0; /* fallback flag var */

loc_005325FC: ;
    eax = MEM32(esi + 4);
    if (CMP_NE(ecx, eax)) goto loc_00532609; /* jne: not equal / not zero */

loc_00532603: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 4) = eax;

loc_00532609: ;
    eax = MEM32(esi + 8);
    if (CMP_NE(ecx, eax)) goto loc_00532616; /* jne: not equal / not zero */

loc_00532610: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;

loc_00532616: ;
    if (TEST_Z(ecx, ecx)) goto loc_00532620; /* je: equal / zero */

loc_0053261A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00532620: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00532624
 * Original: 0x00532624 - 0x00532629 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532624(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532624: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00532635(); return; /* tail jmp 0x00532635 */

}

/**
 * sub_0053263E
 * Original: 0x0053263E - 0x00532660 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053263E(void)
{

loc_0053263E: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648CB4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532660
 * Original: 0x00532660 - 0x005326A8 (72 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    if (TEST_Z(edi, edi)) goto loc_0053269F; /* je: equal / zero */

loc_0053266E: ;
    eax = eax + 4;
    MEM32(ebp + -4) = eax;

loc_00532674: ;
    ebx = MEM32(edi + 4);
    esi = MEM32(ebp + 8);
    edx = ebx;
    PUSH32(esp, 0); sub_0052AFAF(); /* call 0x0052AFAF */

loc_00532681: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0053268A; /* je: equal / zero */

loc_00532685: ;
    edi = MEM32(edi + 0xC);
    goto loc_0053269B;

loc_0053268A: ;
    edx = MEM32(ebp + 8);
    esi = ebx;
    PUSH32(esp, 0); sub_0052AFAF(); /* call 0x0052AFAF */

loc_00532694: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005326A8(); return; } /* je: equal / zero */

loc_00532698: ;
    edi = MEM32(edi + 0x10);

loc_0053269B: ;
    if (TEST_NZ(edi, edi)) goto loc_00532674; /* jne: not equal / not zero */

loc_0053269F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005326AC
 * Original: 0x005326AC - 0x005326B8 (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005326AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005326AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_005326B8(); return; } /* jne: not equal / not zero */

loc_005326B4: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00532712
 * Original: 0x00532712 - 0x005327B0 (158 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532712(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532712: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = ecx;
    if (TEST_NZ(edi, edi)) goto loc_00532722; /* jne: not equal / not zero */

loc_00532721: ;
    __debugbreak(); /* int3 */

loc_00532722: ;
    edx = MEM32(edi + 4);
    esi = MEM32(ebp + 8);
    eax = ebx + 4;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_0052AFAF(); /* call 0x0052AFAF */

loc_00532733: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0053276B; /* je: equal / zero */

loc_00532737: ;
    eax = MEM32(edi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00532781; /* jne: not equal / not zero */

loc_0053273E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053274A: ;
    if (TEST_Z(eax, eax)) goto loc_00532758; /* je: equal / zero */

loc_0053274E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00532A04(); /* call 0x00532A04 */

loc_00532756: ;
    goto loc_0053275A;

loc_00532758: ;
    eax = 0; /* xor self */

loc_0053275A: ;
    MEM32(edi + 0xC) = eax;

loc_0053275D: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1;

loc_00532760: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_00532769: ;
    g_seh_ebp = ebp; sub_005327B2(); return; /* tail jmp 0x005327B2 */

loc_0053276B: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0052AFAF(); /* call 0x0052AFAF */

loc_00532776: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005327B0(); return; } /* je: equal / zero */

loc_0053277A: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0053278E; /* je: equal / zero */

loc_00532781: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_00532712(); /* call 0x00532712 */

loc_0053278C: ;
    goto loc_00532760;

loc_0053278E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053279A: ;
    if (TEST_Z(eax, eax)) goto loc_005327A9; /* je: equal / zero */

loc_0053279E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00532A04(); /* call 0x00532A04 */

loc_005327A7: ;
    goto loc_005327AB;

loc_005327A9: ;
    eax = 0; /* xor self */

loc_005327AB: ;
    MEM32(edi + 0x10) = eax;
    goto loc_0053275D;

}

/**
 * sub_005327BB
 * Original: 0x005327BB - 0x005327CF (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005327BB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005327BB: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    if (TEST_Z(edx, edx)) { sub_005327CF(); return; } /* je: equal / zero */

loc_005327C4: ;
    ecx = edx;
    edx = MEM32(ecx + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_005327C4; /* jne: not equal / not zero */

loc_005327CD: ;
    g_seh_ebp = ebp; sub_005327E6(); return; /* tail jmp 0x005327E6 */

}

/**
 * sub_005327E9
 * Original: 0x005327E9 - 0x005327EE (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005327E9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005327E9: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00532801(); return; /* tail jmp 0x00532801 */

}

/**
 * sub_00532808
 * Original: 0x00532808 - 0x00532831 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532808(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532808: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_0053282D; /* je: equal / zero */

loc_00532811: ;
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    PUSH32(esp, 0); sub_00532808(); /* call 0x00532808 */

loc_0053281D: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_00532808(); /* call 0x00532808 */

loc_00532825: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0053282D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532831
 * Original: 0x00532831 - 0x0053283D (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532831(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532831: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_0053283D(); return; } /* jne: not equal / not zero */

loc_00532839: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00532897
 * Original: 0x00532897 - 0x005328CD (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532897(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532897: ;
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) { sub_005328CD(); return; } /* jne: not equal / not zero */

loc_0053289E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005328B1: ;
    if (TEST_Z(eax, eax)) goto loc_005328C6; /* je: equal / zero */

loc_005328B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_005331FE(); /* call 0x005331FE */

loc_005328C4: ;
    goto loc_005328C8;

loc_005328C6: ;
    eax = 0; /* xor self */

loc_005328C8: ;
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_005328DD(); return; /* tail jmp 0x005328DD */

}

/**
 * sub_005328E0
 * Original: 0x005328E0 - 0x005328F4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005328E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005328E0: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    if (TEST_Z(edx, edx)) { sub_005328F4(); return; } /* je: equal / zero */

loc_005328E9: ;
    ecx = edx;
    edx = MEM32(ecx + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_005328E9; /* jne: not equal / not zero */

loc_005328F2: ;
    g_seh_ebp = ebp; sub_0053290F(); return; /* tail jmp 0x0053290F */

}

/**
 * sub_00532912
 * Original: 0x00532912 - 0x0053291E (12 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532912(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00532912: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(esi, esi)) { sub_0053291E(); return; } /* jne: not equal / not zero */

loc_0053291A: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00532978
 * Original: 0x00532978 - 0x005329FA (130 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532978(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532978: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_00532986; /* jne: not equal / not zero */

loc_00532985: ;
    __debugbreak(); /* int3 */

loc_00532986: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    if (CMP_BE(eax, ebx)) goto loc_005329C5; /* jbe: below or equal (unsigned <=) */

loc_00532991: ;
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_005329CE; /* jne: not equal / not zero */

loc_00532998: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005329A4: ;
    if (TEST_Z(eax, eax)) goto loc_005329B2; /* je: equal / zero */

loc_005329A8: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532A26(); /* call 0x00532A26 */

loc_005329B0: ;
    goto loc_005329B4;

loc_005329B2: ;
    eax = 0; /* xor self */

loc_005329B4: ;
    MEM32(esi + 0xC) = eax;

loc_005329B7: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_005329BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532AAE(); /* call 0x00532AAE */

loc_005329C3: ;
    g_seh_ebp = ebp; sub_005329FC(); return; /* tail jmp 0x005329FC */

loc_005329C5: ;
    if (_flags /* jae: above or equal (unsigned >=) */) { sub_005329FA(); return; }

loc_005329C7: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_005329D9; /* je: equal / zero */

loc_005329CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_00532978(); /* call 0x00532978 */

loc_005329D7: ;
    goto loc_005329BA;

loc_005329D9: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005329E5: ;
    if (TEST_Z(eax, eax)) goto loc_005329F3; /* je: equal / zero */

loc_005329E9: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00532A26(); /* call 0x00532A26 */

loc_005329F1: ;
    goto loc_005329F5;

loc_005329F3: ;
    eax = 0; /* xor self */

loc_005329F5: ;
    MEM32(esi + 0x10) = eax;
    goto loc_005329B7;

}

/**
 * sub_00532A04
 * Original: 0x00532A04 - 0x00532A26 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532A04(void)
{

loc_00532A04: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648C68;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532A26
 * Original: 0x00532A26 - 0x00532A48 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532A26(void)
{

loc_00532A26: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x648C28;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532A48
 * Original: 0x00532A48 - 0x00532A69 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532A48(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532A48: ;
    eax = MEM32(ecx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = 0x648C40;
    if (TEST_Z(eax, eax)) goto loc_00532A5B; /* je: equal / zero */

loc_00532A55: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_00532A5B: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00532A68; /* je: equal / zero */

loc_00532A62: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_00532A68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00532AAE
 * Original: 0x00532AAE - 0x00532AC9 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532AAE(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532AAE: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00533263(); /* call 0x00533263 */

loc_00532AB7: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00533284(); /* call 0x00533284 */

loc_00532AC0: ;
    eax = MEM32(esp + 4);
    eax = eax + 8;
    g_seh_ebp = ebp; sub_00532AD0(); return; /* tail jmp 0x00532AD0 */

}

/**
 * sub_00532ADB
 * Original: 0x00532ADB - 0x00532AEB (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532ADB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532ADB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532AEB(); return; } /* je: equal / zero */

loc_00532AE6: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_00532AED(); return; /* tail jmp 0x00532AED */

}

/**
 * sub_00532BA0
 * Original: 0x00532BA0 - 0x00532BC9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532BA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00532BC5; /* je: equal / zero */

loc_00532BA9: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_00532BA0(); /* call 0x00532BA0 */

loc_00532BB5: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00532BA0(); /* call 0x00532BA0 */

loc_00532BBD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00532BC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532BC9
 * Original: 0x00532BC9 - 0x00532BD9 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532BC9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532BC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532BD9(); return; } /* je: equal / zero */

loc_00532BD4: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_00532BDB(); return; /* tail jmp 0x00532BDB */

}

/**
 * sub_00532C8E
 * Original: 0x00532C8E - 0x00532C9E (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532C8E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532C8E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532C9E(); return; } /* je: equal / zero */

loc_00532C99: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_00532CA0(); return; /* tail jmp 0x00532CA0 */

}

/**
 * sub_00532D53
 * Original: 0x00532D53 - 0x00532D7C (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532D53(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532D53: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00532D78; /* je: equal / zero */

loc_00532D5C: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_00532D53(); /* call 0x00532D53 */

loc_00532D68: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00532D53(); /* call 0x00532D53 */

loc_00532D70: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00532D78: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532D7C
 * Original: 0x00532D7C - 0x00532D8C (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532D7C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532D7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532D8C(); return; } /* je: equal / zero */

loc_00532D87: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_00532D8E(); return; /* tail jmp 0x00532D8E */

}

/**
 * sub_00532E41
 * Original: 0x00532E41 - 0x00532E51 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532E41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532E41: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532E51(); return; } /* je: equal / zero */

loc_00532E4C: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_00532E53(); return; /* tail jmp 0x00532E53 */

}

/**
 * sub_00532F06
 * Original: 0x00532F06 - 0x00532F2F (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532F06(void)
{
    int _flags = 0; /* fallback flag var */

loc_00532F06: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00532F2B; /* je: equal / zero */

loc_00532F0F: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_00532F06(); /* call 0x00532F06 */

loc_00532F1B: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00532F06(); /* call 0x00532F06 */

loc_00532F23: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00532F2B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532F2F
 * Original: 0x00532F2F - 0x00532F4A (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532F2F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532F2F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00533372(); /* call 0x00533372 */

loc_00532F38: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00533393(); /* call 0x00533393 */

loc_00532F41: ;
    eax = MEM32(esp + 4);
    eax = eax + 8;
    g_seh_ebp = ebp; sub_00532F51(); return; /* tail jmp 0x00532F51 */

}

/**
 * sub_00532F5C
 * Original: 0x00532F5C - 0x00532F6C (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532F5C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532F5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_00532F6C(); return; } /* je: equal / zero */

loc_00532F67: ;
    edx = MEM32(edi + 0x18);
    g_seh_ebp = ebp; sub_00532F6E(); return; /* tail jmp 0x00532F6E */

}

/**
 * sub_00533021
 * Original: 0x00533021 - 0x005330AB (138 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533021(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533021: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_00533031; /* jne: not equal / not zero */

loc_00533030: ;
    __debugbreak(); /* int3 */

loc_00533031: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(ebp + 8);
    if (CMP_LE(eax, ebx)) goto loc_00533071; /* jle: less or equal (signed <=) */

loc_0053303B: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0053307A; /* jne: not equal / not zero */

loc_00533042: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053304E: ;
    if (TEST_Z(eax, eax)) goto loc_0053305E; /* je: equal / zero */

loc_00533052: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_005331FE(); /* call 0x005331FE */

loc_0053305C: ;
    goto loc_00533060;

loc_0053305E: ;
    eax = 0; /* xor self */

loc_00533060: ;
    MEM32(esi + 0x10) = eax;

loc_00533063: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_00533066: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00532F2F(); /* call 0x00532F2F */

loc_0053306F: ;
    g_seh_ebp = ebp; sub_005330AD(); return; /* tail jmp 0x005330AD */

loc_00533071: ;
    if (((int32_t)MEM32(edi + 0xC) >= 0)) { sub_005330AB(); return; } /* jge: greater or equal (signed >=) */

loc_00533073: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00533088; /* je: equal / zero */

loc_0053307A: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00533021(); /* call 0x00533021 */

loc_00533086: ;
    goto loc_00533066;

loc_00533088: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00533094: ;
    if (TEST_Z(eax, eax)) goto loc_005330A4; /* je: equal / zero */

loc_00533098: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_005331FE(); /* call 0x005331FE */

loc_005330A2: ;
    goto loc_005330A6;

loc_005330A4: ;
    eax = 0; /* xor self */

loc_005330A6: ;
    MEM32(esi + 0x14) = eax;
    goto loc_00533063;

}

/**
 * sub_005330B6
 * Original: 0x005330B6 - 0x005330DE (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005330B6(void)
{
    int _flags = 0; /* fallback flag var */

loc_005330B6: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    if (TEST_Z(edx, edx)) goto loc_005330D1; /* je: equal / zero */

loc_005330BF: ;
    ecx = edx;
    edx = MEM32(ecx + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_005330BF; /* jne: not equal / not zero */

loc_005330C8: ;
    goto loc_005330DB;

loc_005330CA: ;
    if (CMP_NE(MEM32(edx + 0x14), ecx)) goto loc_005330D8; /* jne: not equal / not zero */

loc_005330CF: ;
    ecx = edx;

loc_005330D1: ;
    edx = MEM32(ecx + 0xC);
    if (TEST_NZ(edx, edx)) goto loc_005330CA; /* jne: not equal / not zero */

loc_005330D8: ;
    ecx = MEM32(ecx + 0xC);

loc_005330DB: ;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005330DE
 * Original: 0x005330DE - 0x005330EE (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005330DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005330DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(edi, edi)) { sub_005330EE(); return; } /* je: equal / zero */

loc_005330E9: ;
    edx = MEM32(edi + 0x14);
    g_seh_ebp = ebp; sub_005330F0(); return; /* tail jmp 0x005330F0 */

}

/**
 * sub_005331A3
 * Original: 0x005331A3 - 0x005331CC (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005331A3(void)
{
    int _flags = 0; /* fallback flag var */

loc_005331A3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_005331C8; /* je: equal / zero */

loc_005331AC: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0); sub_005331A3(); /* call 0x005331A3 */

loc_005331B8: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_005331A3(); /* call 0x005331A3 */

loc_005331C0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_005331C8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005331CC
 * Original: 0x005331CC - 0x005331E0 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005331CC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005331CC: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) { sub_005331E0(); return; } /* je: equal / zero */

loc_005331D5: ;
    ecx = edx;
    edx = MEM32(ecx + 0xC);
    if (TEST_NZ(edx, edx)) goto loc_005331D5; /* jne: not equal / not zero */

loc_005331DE: ;
    g_seh_ebp = ebp; sub_005331FB(); return; /* tail jmp 0x005331FB */

}

/**
 * sub_005331FE
 * Original: 0x005331FE - 0x0053322B (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005331FE(void)
{

loc_005331FE: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x648CA8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053322B
 * Original: 0x0053322B - 0x00533238 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053322B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053322B: ;
    ecx = MEM32(eax + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00533238(); return; } /* je: equal / zero */

loc_00533233: ;
    esi = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_0053323A(); return; /* tail jmp 0x0053323A */

}

/**
 * sub_00533263
 * Original: 0x00533263 - 0x00533268 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533263(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533263: ;
    PUSH32(esp, esi);
    esi = eax;
    g_seh_ebp = ebp; sub_0053327E(); return; /* tail jmp 0x0053327E */

}

/**
 * sub_00533284
 * Original: 0x00533284 - 0x00533298 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533284(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533284: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) { sub_00533298(); return; } /* je: equal / zero */

loc_00533293: ;
    edx = MEM32(eax + 0x14);
    g_seh_ebp = ebp; sub_0053329A(); return; /* tail jmp 0x0053329A */

}

/**
 * sub_0053333A
 * Original: 0x0053333A - 0x00533347 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053333A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053333A: ;
    ecx = MEM32(eax + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00533347(); return; } /* je: equal / zero */

loc_00533342: ;
    esi = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_00533349(); return; /* tail jmp 0x00533349 */

}

/**
 * sub_00533372
 * Original: 0x00533372 - 0x00533377 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533372(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533372: ;
    PUSH32(esp, esi);
    esi = eax;
    g_seh_ebp = ebp; sub_0053338D(); return; /* tail jmp 0x0053338D */

}

/**
 * sub_00533393
 * Original: 0x00533393 - 0x005333A7 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533393(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533393: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) { sub_005333A7(); return; } /* je: equal / zero */

loc_005333A2: ;
    edx = MEM32(eax + 0x18);
    g_seh_ebp = ebp; sub_005333A9(); return; /* tail jmp 0x005333A9 */

}

/**
 * sub_00533449
 * Original: 0x00533449 - 0x00533490 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533449(void)
{
    int _flags = 0; /* fallback flag var */

loc_00533449: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x10) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0053345D; /* je: equal / zero */

loc_0053345A: ;
    MEM32(ecx + 8) = esi;

loc_0053345D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0053347A; /* je: equal / zero */

loc_0053346A: ;
    if (CMP_NE(MEM32(eax + 0xC), esi)) goto loc_00533472; /* jne: not equal / not zero */

loc_0053346F: ;
    MEM32(eax + 0xC) = edi;

loc_00533472: ;
    if (CMP_NE(MEM32(eax + 0x10), esi)) goto loc_0053347A; /* jne: not equal / not zero */

loc_00533477: ;
    MEM32(eax + 0x10) = edi;

loc_0053347A: ;
    eax = esi;
    PUSH32(esp, 0); sub_0053322B(); /* call 0x0053322B */

loc_00533481: ;
    MEM32(esi + 0x14) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0053322B(); /* call 0x0053322B */

loc_0053348B: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00533490
 * Original: 0x00533490 - 0x005334D7 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00533490: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_005334A4; /* je: equal / zero */

loc_005334A1: ;
    MEM32(ecx + 8) = esi;

loc_005334A4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_005334C1; /* je: equal / zero */

loc_005334B1: ;
    if (CMP_NE(MEM32(eax + 0xC), esi)) goto loc_005334B9; /* jne: not equal / not zero */

loc_005334B6: ;
    MEM32(eax + 0xC) = edi;

loc_005334B9: ;
    if (CMP_NE(MEM32(eax + 0x10), esi)) goto loc_005334C1; /* jne: not equal / not zero */

loc_005334BE: ;
    MEM32(eax + 0x10) = edi;

loc_005334C1: ;
    eax = esi;
    PUSH32(esp, 0); sub_0053322B(); /* call 0x0053322B */

loc_005334C8: ;
    MEM32(esi + 0x14) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0053322B(); /* call 0x0053322B */

loc_005334D2: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005334D7
 * Original: 0x005334D7 - 0x0053351E (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005334D7(void)
{
    int _flags = 0; /* fallback flag var */

loc_005334D7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    ecx = MEM32(edi + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x14) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_005334EB; /* je: equal / zero */

loc_005334E8: ;
    MEM32(ecx + 0xC) = esi;

loc_005334EB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00533508; /* je: equal / zero */

loc_005334F8: ;
    if (CMP_NE(MEM32(eax + 0x10), esi)) goto loc_00533500; /* jne: not equal / not zero */

loc_005334FD: ;
    MEM32(eax + 0x10) = edi;

loc_00533500: ;
    if (CMP_NE(MEM32(eax + 0x14), esi)) goto loc_00533508; /* jne: not equal / not zero */

loc_00533505: ;
    MEM32(eax + 0x14) = edi;

loc_00533508: ;
    eax = esi;
    PUSH32(esp, 0); sub_0053333A(); /* call 0x0053333A */

loc_0053350F: ;
    MEM32(esi + 0x18) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0053333A(); /* call 0x0053333A */

loc_00533519: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053351E
 * Original: 0x0053351E - 0x00533565 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053351E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053351E: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x10) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00533532; /* je: equal / zero */

loc_0053352F: ;
    MEM32(ecx + 0xC) = esi;

loc_00533532: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_0053354F; /* je: equal / zero */

loc_0053353F: ;
    if (CMP_NE(MEM32(eax + 0x10), esi)) goto loc_00533547; /* jne: not equal / not zero */

loc_00533544: ;
    MEM32(eax + 0x10) = edi;

loc_00533547: ;
    if (CMP_NE(MEM32(eax + 0x14), esi)) goto loc_0053354F; /* jne: not equal / not zero */

loc_0053354C: ;
    MEM32(eax + 0x14) = edi;

loc_0053354F: ;
    eax = esi;
    PUSH32(esp, 0); sub_0053333A(); /* call 0x0053333A */

loc_00533556: ;
    MEM32(esi + 0x18) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0053333A(); /* call 0x0053333A */

loc_00533560: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00533565
 * Original: 0x00533565 - 0x005335BA (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533565(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533565: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(ebp + 0xC), eax)) { sub_005335BA(); return; } /* jne: not equal / not zero */

loc_00533570: ;
    edx = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(edx), 0xFF0000)) goto loc_0053357E; /* jne: not equal / not zero */

loc_0053357B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0053357E: ;
    edx = MEM32(ebp + 0x18);
    edx = MEM32(edx);
    esi = MEM32(ebp + 0x20);
    edx = edx | MEM32(esi);
    esi = MEM32(ecx);
    edx = edx | eax;
    eax = MEM32(ebp + 8);
    edx = edx << 0x18;
    edx = edx | 0x200000;
    MEM32(esi + eax * 4 + 0x208) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ecx);
    edx = edx << 8;
    edx = edx | MEM32(esi);
    edx = edx << 4;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533606(); return; /* tail jmp 0x00533606 */

}

/**
 * sub_0053360B
 * Original: 0x0053360B - 0x00533674 (105 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053360B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053360B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), esi)) { sub_00533674(); return; } /* jne: not equal / not zero */

loc_0053361B: ;
    eax = 0xFF0000;
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533629; /* jne: not equal / not zero */

loc_00533624: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    goto loc_0053362B;

loc_00533629: ;
    edi = 0; /* xor self */

loc_0053362B: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_00533633; /* jne: not equal / not zero */

loc_00533630: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);

loc_00533633: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 4);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx << 0x10;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx << 8;
    edx = edx | MEM32(esi);
    edx = edx << 4;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_005336DA(); return; /* tail jmp 0x005336DA */

}

/**
 * sub_005336E1
 * Original: 0x005336E1 - 0x00533750 (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005336E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005336E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00533750(); return; } /* jne: not equal / not zero */

loc_005336EA: ;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533700; /* jne: not equal / not zero */

loc_005336FC: ;
    edi = esi;
    goto loc_00533702;

loc_00533700: ;
    edi = 0; /* xor self */

loc_00533702: ;
    if (CMP_EQ(MEM32(edx + 4), eax)) goto loc_00533709; /* je: equal / zero */

loc_00533707: ;
    esi = 0; /* xor self */

loc_00533709: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 4);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx << 0x10;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx | 2;
    edx = edx << 8;
    edx = edx | MEM32(esi);
    POP32(esp, edi);
    edx = edx << 4;
    POP32(esp, esi);
    MEM32(ecx + eax * 4 + 0x294) = edx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00533760(); return; /* tail jmp 0x00533760 */

}

/**
 * sub_00533764
 * Original: 0x00533764 - 0x005337D3 (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533764(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533764: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), esi)) { sub_005337D3(); return; } /* jne: not equal / not zero */

loc_00533774: ;
    eax = 0xFF0000;
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533782; /* jne: not equal / not zero */

loc_0053377D: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    goto loc_00533784;

loc_00533782: ;
    edi = 0; /* xor self */

loc_00533784: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_0053378C; /* jne: not equal / not zero */

loc_00533789: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);

loc_0053378C: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 0x10;
    ebx = ebx | MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 4);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx << 8;
    ebx = ebx | 0x200020;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533839(); return; /* tail jmp 0x00533839 */

}

/**
 * sub_00533840
 * Original: 0x00533840 - 0x005338AF (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), esi)) { sub_005338AF(); return; } /* jne: not equal / not zero */

loc_00533850: ;
    eax = 0xFF0000;
    if (CMP_NE(MEM32(edx), eax)) goto loc_0053385E; /* jne: not equal / not zero */

loc_00533859: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    goto loc_00533860;

loc_0053385E: ;
    edi = 0; /* xor self */

loc_00533860: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_00533868; /* jne: not equal / not zero */

loc_00533865: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);

loc_00533868: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 0x10;
    ebx = ebx | MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 4);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx << 8;
    ebx = ebx | 0x200040;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533915(); return; /* tail jmp 0x00533915 */

}

/**
 * sub_0053391C
 * Original: 0x0053391C - 0x005339AA (142 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053391C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053391C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), esi)) { sub_005339AA(); return; } /* jne: not equal / not zero */

loc_0053392D: ;
    edx = MEM32(ebp + 0x1C);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    MEM32(ebp + 0x1C) = 0x10;
    if (CMP_EQ(MEM32(edx), eax)) goto loc_00533943; /* je: equal / zero */

loc_00533940: ;
    MEM32(ebp + 0x1C) = esi;

loc_00533943: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_0053394D; /* jne: not equal / not zero */

loc_00533948: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    goto loc_0053394F;

loc_0053394D: ;
    edi = 0; /* xor self */

loc_0053394F: ;
    if (CMP_NE(MEM32(edx + 8), eax)) goto loc_00533957; /* jne: not equal / not zero */

loc_00533954: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);

loc_00533957: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | MEM32(ebp + 0x1C);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    ebx = ebx | MEM32(edx + 4);
    ebx = ebx | edi;
    ebx = ebx << 0x10;
    ebx = ebx | MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 8);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx | 0x2000;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533A2C(); return; /* tail jmp 0x00533A2C */

}

/**
 * sub_00533A33
 * Original: 0x00533A33 - 0x00533AF9 (198 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533A33(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533A33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0x20)) goto loc_00533A4B; /* je: equal / zero */

loc_00533A44: ;
    if (TEST_Z(eax, eax)) goto loc_00533A4B; /* je: equal / zero */

loc_00533A48: ;
    MEM32(ecx) = MEM32(ecx) & 0;

loc_00533A4B: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) { sub_00533AF9(); return; } /* jne: not equal / not zero */

loc_00533A59: ;
    edx = MEM32(ebp + 0x1C);
    esi = MEM32(edx);
    eax = 0xFF0000;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    if (CMP_NE(esi, eax)) goto loc_00533A6C; /* jne: not equal / not zero */

loc_00533A6A: ;
    ebx = edi;

loc_00533A6C: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_00533A76; /* jne: not equal / not zero */

loc_00533A71: ;
    MEM32(ebp + 0x1C) = edi;
    goto loc_00533A7A;

loc_00533A76: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;

loc_00533A7A: ;
    if (CMP_NE(MEM32(edx + 8), eax)) goto loc_00533A84; /* jne: not equal / not zero */

loc_00533A7F: ;
    MEM32(ebp + 0x20) = edi;
    goto loc_00533A88;

loc_00533A84: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0;

loc_00533A88: ;
    if (CMP_NE(esi, eax)) goto loc_00533A91; /* jne: not equal / not zero */

loc_00533A8C: ;
    MEM32(ebp + 0xC) = edi;
    goto loc_00533A95;

loc_00533A91: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;

loc_00533A95: ;
    edx = MEM32(ebp + 0x18);
    esi = MEM32(edx);
    eax = MEM32(ecx);
    edi = esi;
    edi = edi | eax;
    edi = edi | ebx;
    edi = edi << 8;
    edi = edi | MEM32(edx + 4);
    eax = eax >> 5;
    edi = edi | MEM32(ecx + 4);
    edi = edi | MEM32(ebp + 0x1C);
    edi = edi << 8;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(ecx + 8);
    ecx = MEM32(ebp + -4);
    edi = edi | MEM32(ebp + 0x20);
    edx = MEM32(ecx);
    edi = edi << 8;
    edi = edi | MEM32(eax * 4 + 0x534838);
    eax = MEM32(ebp + 8);
    edi = edi | esi;
    edi = edi | MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x14);
    MEM32(edx + eax * 4 + 0x208) = edi;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533BA1(); return; /* tail jmp 0x00533BA1 */

}

/**
 * sub_00533BA8
 * Original: 0x00533BA8 - 0x00533C1D (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533BA8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533BA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), esi)) { sub_00533C1D(); return; } /* jne: not equal / not zero */

loc_00533BB8: ;
    eax = 0xFF0000;
    if (CMP_NE(MEM32(edx + 8), eax)) goto loc_00533BC7; /* jne: not equal / not zero */

loc_00533BC2: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    goto loc_00533BC9;

loc_00533BC7: ;
    edi = 0; /* xor self */

loc_00533BC9: ;
    if (CMP_NE(MEM32(edx + 4), eax)) goto loc_00533BD1; /* jne: not equal / not zero */

loc_00533BCE: ;
    PUSH32(esp, 0x10);
    POP32(esp, esi);

loc_00533BD1: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx + 8);
    ebx = ebx | edi;
    ebx = ebx << 0x10;
    ebx = ebx | MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 4);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx << 8;
    ebx = ebx | 0x200020;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    edx = edx | 4;
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(ecx + eax * 4 + 0x294) = edx;
    g_seh_ebp = ebp; sub_00533C89(); return; /* tail jmp 0x00533C89 */

}

/**
 * sub_00533C90
 * Original: 0x00533C90 - 0x00533D39 (169 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) { sub_00533D39(); return; } /* jne: not equal / not zero */

loc_00533CA5: ;
    edx = MEM32(ebp + 0x1C);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533CB8; /* jne: not equal / not zero */

loc_00533CB4: ;
    edi = esi;
    goto loc_00533CBA;

loc_00533CB8: ;
    edi = 0; /* xor self */

loc_00533CBA: ;
    (void)0; /* cmp MEM32(edx + 4), eax - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(MEM32(edx + 4), eax)) goto loc_00533CC5; /* je: equal / zero */

loc_00533CC2: ;
    MEM32(ebp + 0x1C) = ebx;

loc_00533CC5: ;
    (void)0; /* cmp MEM32(edx + 8), eax - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(MEM32(edx + 8), eax)) goto loc_00533CD0; /* je: equal / zero */

loc_00533CCD: ;
    MEM32(ebp + 0xC) = ebx;

loc_00533CD0: ;
    if (CMP_EQ(MEM32(edx + 0xC), eax)) goto loc_00533CD7; /* je: equal / zero */

loc_00533CD5: ;
    esi = 0; /* xor self */

loc_00533CD7: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    ebx = ebx | MEM32(edx + 4);
    ebx = ebx | MEM32(ebp + 0x1C);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 8);
    ebx = ebx | MEM32(edx + 8);
    ebx = ebx | MEM32(ebp + 0xC);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 0xC);
    eax = MEM32(ecx);
    ebx = ebx | MEM32(edx + 0xC);
    edx = MEM32(ebp + 8);
    ebx = ebx | esi;
    MEM32(eax + edx * 4 + 0x208) = ebx;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    esi = esi << 4;
    esi = esi | MEM32(eax + 8);
    esi = esi << 4;
    esi = esi | MEM32(eax);
    esi = esi << 4;
    esi = esi | MEM32(eax + 4);
    eax = MEM32(ecx);
    MEM32(eax + edx * 4 + 0x294) = esi;
    g_seh_ebp = ebp; sub_00533DDA(); return; /* tail jmp 0x00533DDA */

}

/**
 * sub_00533DE1
 * Original: 0x00533DE1 - 0x00533E8D (172 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533DE1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533DE1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) { sub_00533E8D(); return; } /* jne: not equal / not zero */

loc_00533DF6: ;
    edx = MEM32(ebp + 0x1C);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533E09; /* jne: not equal / not zero */

loc_00533E05: ;
    edi = esi;
    goto loc_00533E0B;

loc_00533E09: ;
    edi = 0; /* xor self */

loc_00533E0B: ;
    (void)0; /* cmp MEM32(edx + 4), eax - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(MEM32(edx + 4), eax)) goto loc_00533E16; /* je: equal / zero */

loc_00533E13: ;
    MEM32(ebp + 0x1C) = ebx;

loc_00533E16: ;
    (void)0; /* cmp MEM32(edx + 8), eax - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(MEM32(edx + 8), eax)) goto loc_00533E21; /* je: equal / zero */

loc_00533E1E: ;
    MEM32(ebp + 0xC) = ebx;

loc_00533E21: ;
    if (CMP_EQ(MEM32(edx + 0xC), eax)) goto loc_00533E28; /* je: equal / zero */

loc_00533E26: ;
    esi = 0; /* xor self */

loc_00533E28: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(eax);
    edx = MEM32(ebp + 0x20);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    ebx = ebx | MEM32(edx + 4);
    ebx = ebx | MEM32(ebp + 0x1C);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 8);
    ebx = ebx | MEM32(edx + 8);
    ebx = ebx | MEM32(ebp + 0xC);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 0xC);
    eax = MEM32(ecx);
    ebx = ebx | MEM32(edx + 0xC);
    edx = MEM32(ebp + 8);
    ebx = ebx | esi;
    MEM32(eax + edx * 4 + 0x208) = ebx;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    esi = esi | 4;
    esi = esi << 4;
    esi = esi | MEM32(eax + 8);
    esi = esi << 4;
    esi = esi | MEM32(eax);
    esi = esi << 4;
    esi = esi | MEM32(eax + 4);
    eax = MEM32(ecx);
    MEM32(eax + edx * 4 + 0x294) = esi;
    g_seh_ebp = ebp; sub_00533F31(); return; /* tail jmp 0x00533F31 */

}

/**
 * sub_00533F38
 * Original: 0x00533F38 - 0x00533FDE (166 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533F38(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00533F38: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) { sub_00533FDE(); return; } /* jne: not equal / not zero */

loc_00533F4D: ;
    edx = MEM32(ebp + 0x1C);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx), eax)) goto loc_00533F60; /* jne: not equal / not zero */

loc_00533F5C: ;
    edi = esi;
    goto loc_00533F62;

loc_00533F60: ;
    edi = 0; /* xor self */

loc_00533F62: ;
    (void)0; /* cmp MEM32(edx + 4), eax - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(MEM32(edx + 4), eax)) goto loc_00533F6D; /* je: equal / zero */

loc_00533F6A: ;
    MEM32(ebp + 0x1C) = ebx;

loc_00533F6D: ;
    (void)0; /* cmp MEM32(edx + 8), eax - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(MEM32(edx + 8), eax)) goto loc_00533F78; /* je: equal / zero */

loc_00533F75: ;
    MEM32(ebp + 0xC) = ebx;

loc_00533F78: ;
    if (CMP_EQ(MEM32(edx + 0xC), eax)) goto loc_00533F7F; /* je: equal / zero */

loc_00533F7D: ;
    esi = 0; /* xor self */

loc_00533F7F: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x20);
    ebx = MEM32(eax);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    ebx = ebx | MEM32(edx + 4);
    ebx = ebx | MEM32(ebp + 0x1C);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 8);
    ebx = ebx | MEM32(edx + 8);
    ebx = ebx | MEM32(ebp + 0xC);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 0xC);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(edx);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx);
    esi = esi | 2;
    esi = esi << 8;
    esi = esi | MEM32(edx);
    esi = esi << 4;
    esi = esi | MEM32(edx + 4);
    MEM32(ecx + eax * 4 + 0x294) = esi;
    g_seh_ebp = ebp; sub_00534081(); return; /* tail jmp 0x00534081 */

}

/**
 * sub_00534088
 * Original: 0x00534088 - 0x0053412E (166 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534088(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00534088: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) { sub_0053412E(); return; } /* jne: not equal / not zero */

loc_0053409D: ;
    edx = MEM32(ebp + 0x1C);
    eax = 0xFF0000;
    (void)0; /* cmp MEM32(edx), eax - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx), eax)) goto loc_005340B0; /* jne: not equal / not zero */

loc_005340AC: ;
    edi = esi;
    goto loc_005340B2;

loc_005340B0: ;
    edi = 0; /* xor self */

loc_005340B2: ;
    (void)0; /* cmp MEM32(edx + 4), eax - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (CMP_EQ(MEM32(edx + 4), eax)) goto loc_005340BD; /* je: equal / zero */

loc_005340BA: ;
    MEM32(ebp + 0x1C) = ebx;

loc_005340BD: ;
    (void)0; /* cmp MEM32(edx + 8), eax - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(MEM32(edx + 8), eax)) goto loc_005340C8; /* je: equal / zero */

loc_005340C5: ;
    MEM32(ebp + 0xC) = ebx;

loc_005340C8: ;
    if (CMP_EQ(MEM32(edx + 0xC), eax)) goto loc_005340CF; /* je: equal / zero */

loc_005340CD: ;
    esi = 0; /* xor self */

loc_005340CF: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x20);
    ebx = MEM32(eax);
    ebx = ebx | MEM32(edx);
    ebx = ebx | edi;
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 4);
    ebx = ebx | MEM32(edx + 4);
    ebx = ebx | MEM32(ebp + 0x1C);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 8);
    ebx = ebx | MEM32(edx + 8);
    ebx = ebx | MEM32(ebp + 0xC);
    ebx = ebx << 8;
    ebx = ebx | MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    ebx = ebx | MEM32(edx + 0xC);
    edx = MEM32(ecx);
    ebx = ebx | esi;
    MEM32(edx + eax * 4 + 0x208) = ebx;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(edx);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx);
    esi = esi | 3;
    esi = esi << 8;
    esi = esi | MEM32(edx);
    esi = esi << 4;
    esi = esi | MEM32(edx + 4);
    MEM32(ecx + eax * 4 + 0x294) = esi;
    g_seh_ebp = ebp; sub_005341D5(); return; /* tail jmp 0x005341D5 */

}

/**
 * sub_005341DC
 * Original: 0x005341DC - 0x005341FD (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005341DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005341DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    esi = 0xFF0000;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi), esi - flags set for next jcc */
    PUSH32(esp, 0x10);
    MEM32(ebp + -12) = ecx;
    POP32(esp, eax);
    if (CMP_NE(MEM32(edi), esi)) { sub_005341FD(); return; } /* jne: not equal / not zero */

loc_005341F9: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_005341FF(); return; /* tail jmp 0x005341FF */

}

/**
 * sub_005342C0
 * Original: 0x005342C0 - 0x005346CE (1038 bytes, 452 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005342C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005342C0: ;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx + -1583247087) = MEM32(ecx + -1583247087) + edx + _cf; /* adc */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    SET_LO8(edx, LO8(edx) + MEM8(edx + 0xAA2) + _cf); /* adc */
    SET_LO8(edx, LO8(edx) + MEM8(edx) + _cf); /* adc */
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    MEM32(edx) = MEM32(edx) + ecx + _cf; /* adc */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    SET_HI8(eax, HI8(eax) + MEM8(edx + 0x120A) + _cf); /* adc */
    MEM8(eax) = MEM8(eax) + LO8(edx);
    MEM8(eax) = MEM8(eax) + LO8(eax) + _cf; /* adc */
    MEM32(ecx) = MEM32(ecx) + edx + _cf; /* adc */
    MEM32(ecx + 0x61) = MEM32(ecx + 0x61) + esp + _cf; /* adc */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    /* TODO: bound esp, qword ptr [edx + 0x52] */
    PUSH32(esp, edx);
    MEM32(ecx) = MEM32(ecx) + esp + _cf; /* adc */
    MEM8(edx) = MEM8(edx) + LO8(edx);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    MEM32(ecx) = MEM32(ecx) + edx + _cf; /* adc */
    MEM32(ecx) = MEM32(ecx) & esp;
    MEM32(edx) = MEM32(edx) & edx;
    SET_HI8(eax, HI8(eax) + MEM8(edx) + _cf); /* adc */
    SET_HI8(eax, HI8(eax) & MEM8(edx));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    eax = eax + MEM32(eax + 0x9080706);
    SET_LO8(ecx, LO8(ecx) | MEM8(ebx));
    MEM8(ecx) = MEM8(ecx) + HI8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) >= (uint32_t)LO8(eax))) goto loc_005343EE; /* jae: above or equal (unsigned >=) */

loc_0053437A: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(eax);
    if (0) goto loc_005343A2; /* jb: below (unsigned <) */

loc_00534382: ;
    if (1) (void)0; /* goto loc_005343EC - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00534384: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_005343FC - dead code, label not in function */

loc_00534389: ;
    MEM8(ebx + 0x6D) = MEM8(ebx + 0x6D) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jb: below (unsigned <) */) goto loc_005343B2;

loc_00534392: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_005343FC - dead code, label not in function */

loc_00534394: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(edx) = MEM8(edx) & HI8(edx);
    eax = eax ^ 0x63796320;
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_005343A2;

loc_005343A2: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) ^ edi;
    eax = eax - 0x6C637963;
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */

loc_005343B2: ;
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(eax);
    if (0) (void)0; /* goto loc_005343D7 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_005343B7: ;
    if ((MEM8(esi + 0x6F) != 0)) (void)0; /* goto loc_0053442C - dead code, label not in function */ /* jne: not equal / not zero */

loc_005343B9: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x73767820);
    if (_flags /* ja: above (unsigned >) */) goto loc_005343E2;

loc_005343C2: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_005343E5 - dead code, label not in function */

loc_005343C5: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_0053443D - dead code, label not in function */

loc_005343C7: ;
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_0053443C;

loc_005343C9: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(edi + 0x72) = MEM8(edi + 0x72) + HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x6E) * (int32_t)0x6F742067);
    MEM8(eax + 0x20) = MEM8(eax + 0x20) & LO8(ebx);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_00534454 - dead code, label not in function */

loc_005343E0: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_00534457 - dead code, label not in function */

loc_005343E2: ;
    if (_flags /* je: equal / zero */) goto loc_00534404;

loc_005343E4: ;
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_0053444B - dead code, label not in function */

loc_005343E6: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x20737265);

loc_005343EE: ;
    /* TODO: arpl word ptr [ecx + 0x75], sp */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00534458 - dead code, label not in function */

loc_005343F3: ;
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00534415 - dead code, label not in function */

loc_005343F5: ;
    /* TODO: popal  */
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_0053441E - dead code, label not in function */

loc_005343FE: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_0053446F - dead code, label not in function */

loc_00534400: ;
    MEM8(ecx + 0x6B) = MEM8(ecx + 0x6B) & HI8(edx);

loc_00534404: ;
    MEM8(eax + 0x20) = MEM8(eax + 0x20) & LO8(ebx);
    /* TODO: arpl word ptr [ecx + 0x63], di */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_0053442F - dead code, label not in function */

loc_0053440F: ;
    if (_flags /* je: equal / zero */) goto loc_00534480;

loc_00534411: ;
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) & HI8(eax);
    /* TODO: arpl word ptr gs:[ebp + 0x74], si */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) + HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x2E306120);
    if (_flags /* js: sign (negative) */) goto loc_00534456;

loc_00534436: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_005344A0 - dead code, label not in function */

loc_00534438: ;
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);

loc_0053443C: ;
    if (1) (void)0; /* goto loc_005344B2 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_0053443E: ;
    if (0) (void)0; /* goto loc_005344B5 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_00534440: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(ecx + 0x66) = MEM8(ecx + 0x66) & HI8(eax);
    if ((MEM8(ecx + 0x66) == 0)) goto loc_005344AF; /* je: equal / zero */

loc_0053444A: ;
    if (0) goto loc_0053446C; /* jb: below (unsigned <) */

loc_0053444C: ;
    if (1) goto loc_005344C0; /* ja: above (unsigned >) */

loc_0053444E: ;
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x6E) * (int32_t)0x6F742067);

loc_00534456: ;
    MEM8(ecx + 0x74) = MEM8(ecx + 0x74) & HI8(ecx);
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) + HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);

loc_0053446C: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x2E306120);
    if (_flags /* js: sign (negative) */) goto loc_0053449A;

loc_0053447A: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_005344E4 - dead code, label not in function */

loc_0053447C: ;
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);

loc_00534480: ;
    if (1) (void)0; /* goto loc_005344F6 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00534482: ;
    if (0) (void)0; /* goto loc_005344F9 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_00534484: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(ecx + 0x66) = MEM8(ecx + 0x66) & HI8(eax);
    if ((MEM8(ecx + 0x66) == 0)) goto loc_005344F3; /* je: equal / zero */

loc_0053448E: ;
    if (0) goto loc_005344B0; /* jb: below (unsigned <) */

loc_00534490: ;
    if (1) (void)0; /* goto loc_00534504 - dead code, label not in function */ /* ja: above (unsigned >) */

loc_00534492: ;
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x6E) * (int32_t)0x6F742067);

loc_0053449A: ;
    MEM8(ecx + 0x74) = MEM8(ecx + 0x74) & HI8(ecx);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) + HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */

loc_005344AF: ;
    /* TODO: insb byte ptr es:[edi], dx */

loc_005344B0: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x6D6D6920);
    esp = (uint32_t)((int32_t)MEM32(ecx + 0x74) * (int32_t)0x20796C65);

loc_005344C0: ;
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_00534529 - dead code, label not in function */

loc_005344C4: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_005344E6;

loc_005344C6: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0053453B;

loc_005344C8: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x62206120);
    if (_flags /* jns: not sign (positive) */) goto loc_00534541;

loc_005344D1: ;
    /* TODO: popal  */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00534547;

loc_005344D4: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: bound edi, qword ptr [ecx + 0x70] */
    /* TODO: popal  */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00534551 - dead code, label not in function */

loc_005344DE: ;
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) & HI8(edx);
    if ((MEM8(eax + 0x6C) != 0)) (void)0; /* goto loc_00534556 - dead code, label not in function */ /* jne: not equal / not zero */

loc_005344E3: ;
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);

loc_005344E6: ;
    /* TODO: popal  */
    /* TODO: outsd dx, dword ptr fs:[esi] */
    if (_flags /* ja: above (unsigned >) */) (void)0; /* goto loc_00534518 - dead code, label not in function */

loc_005344EB: ;
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00534561 - dead code, label not in function */

loc_005344ED: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);

loc_005344F3: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x72206120);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x74207265);
    PUSH32(esp, 0x6E692065);
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00534583;

loc_0053450F: ;
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00534586 - dead code, label not in function */

loc_00534511: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(ecx + 0x66) = MEM8(ecx + 0x66) & HI8(eax);
    if ((MEM8(ecx + 0x66) == 0)) (void)0; /* goto loc_00534580 - dead code, label not in function */ /* je: equal / zero */

loc_0053451B: ;
    if (0) (void)0; /* goto loc_0053453D - dead code, label not in function */ /* jb: below (unsigned <) */

loc_0053451D: ;
    esi = (uint32_t)((int32_t)MEM32(eax + 0x73) * (int32_t)0x6C6C6174);
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) + HI8(edx);
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) goto loc_00534594;

loc_00534530: ;
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) & HI8(edx);
    if ((MEM8(eax + 0x6C) != 0)) (void)0; /* goto loc_005345AE - dead code, label not in function */ /* jne: not equal / not zero */

loc_0053453B: ;
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);
    /* TODO: popal  */
    /* TODO: outsd dx, dword ptr fs:[esi] */

loc_00534541: ;
    if (_flags /* ja: above (unsigned >) */) (void)0; /* goto loc_00534570 - dead code, label not in function */

loc_00534543: ;
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_005345B9 - dead code, label not in function */

loc_00534545: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */

loc_00534547: ;
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x72206120);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x74207265);
    PUSH32(esp, 0x6E692065);
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_005345DB;

loc_00534567: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_005345DE;

loc_00534569: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(ecx + 0x66) = MEM8(ecx + 0x66) & HI8(eax);
    if ((MEM8(ecx + 0x66) == 0)) goto loc_005345D8; /* je: equal / zero */

loc_00534573: ;
    if (0) (void)0; /* goto loc_00534595 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_00534575: ;
    esi = (uint32_t)((int32_t)MEM32(eax + 0x73) * (int32_t)0x6C6C6174);
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) + HI8(edx);
    /* TODO: popal  */

loc_00534583: ;
    /* TODO: outsd dx, dword ptr fs:[esi] */
    if (_flags /* ja: above (unsigned >) */) goto loc_005345B4;

loc_00534587: ;
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_005345FD - dead code, label not in function */

loc_00534589: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(esi + 0x72) = MEM8(esi + 0x72) & HI8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);

loc_00534594: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x72206120);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x74207265);
    if (_flags /* ja: above (unsigned >) */) goto loc_00534615;

loc_005345A6: ;
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    if (1) goto loc_0053461F; /* jae: above or equal (unsigned >=) */

loc_005345AB: ;
    if (0) (void)0; /* goto loc_00534622 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_005345AD: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_005345D4;

loc_005345B4: ;
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) goto loc_0053461D;

loc_005345B8: ;
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_005345DA - dead code, label not in function */

loc_005345BA: ;
    esi = (uint32_t)((int32_t)MEM32(eax + 0x73) * (int32_t)0x6C6C6174);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) >= (uint32_t)LO8(eax))) goto loc_0053463E; /* jae: above or equal (unsigned >=) */

loc_005345CA: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) goto loc_00534634;

loc_005345D0: ;
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */

loc_005345D4: ;
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_005345D8: ;
    /* TODO: bound edi, qword ptr [ecx + 0x70] */

loc_005345DB: ;
    /* TODO: popal  */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00534651;

loc_005345DE: ;
    MEM8(eax) = MEM8(eax) & HI8(ecx);
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: outsd dx, dword ptr [esi] */
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    MEM32(eax) = MEM32(eax) - eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) < (uint32_t)LO8(eax))) (void)0; /* goto loc_00534653 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_005345EE: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x69207265);
    /* TODO: outsb dx, byte ptr [esi] */
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x617A696C);
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_0053466A - dead code, label not in function */

loc_00534601: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    MEM8(eax) = MEM8(eax) & HI8(ecx);
    SET_LO16(esi, (uint32_t)((int32_t)MEM16(edx + 0x73) * (int32_t)0x2074));
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_00534684 - dead code, label not in function */

loc_0053460D: ;
    /* TODO: outsd dx, dword ptr [esi] */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    if (1) goto loc_00534687; /* jae: above or equal (unsigned >=) */

loc_00534613: ;
    if (0) (void)0; /* goto loc_0053468A - dead code, label not in function */ /* jb: below (unsigned <) */

loc_00534615: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_0053463C;

loc_0053461C: ;
    /* TODO: outsd dx, dword ptr [esi] */

loc_0053461D: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: insb byte ptr es:[edi], dx */

loc_0053461F: ;
    if (_flags /* jns: not sign (positive) */) goto loc_0053464A;

loc_00534621: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(edi) = MEM8(edi) + HI8(ebx);
    /* TODO: aas  */
    /* TODO: aas  */
    MEM8(edi + 0x54) = MEM8(edi + 0x54) + HI8(ecx);
    eax = eax ^ MEM32(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    PUSH32(esp, esp);
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    /* TODO: outsd dx, dword ptr [esi] */
    PUSH32(esp, esp);
    MEM32(eax) = MEM32(eax) ^ eax;

loc_00534634: ;
    /* TODO: outsd dx, dword ptr [esi] */
    PUSH32(esp, esp);
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    edx++;
    MEM32(eax) = MEM32(eax) ^ eax;

loc_0053463C: ;
    /* TODO: outsd dx, dword ptr [esi] */
    edx++;

loc_0053463E: ;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    PUSH32(esp, eax);
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_005346B7 - dead code, label not in function */

loc_00534644: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    esi++;

loc_0053464A: ;
    /* TODO: outsd dx, dword ptr [esi] */
    MEM8(LO16(ebx) + LO16(esi)) = MEM8(LO16(ebx) + LO16(esi)) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */

loc_00534651: ;
    esp++;
    MEM32(eax) = MEM32(eax) ^ eax;
    /* TODO: outsd dx, dword ptr [esi] */
    esp++;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi));
    MEM8(edi + 0x31) = MEM8(edi + 0x31) + HI8(ecx);
    /* TODO: aas  */
    MEM8(edi + 0x50) = MEM8(edi + 0x50) + HI8(ecx);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00534665;

loc_00534665: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_00534687: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, 0 /* seg:cs */);
    PUSH32(esp, 0 /* seg:cs */);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    /* TODO: str word ptr [edi] */
    /* TODO: sldt word ptr [esi] */
    eax = eax + 0;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    MEM8(eax) = MEM8(eax) + LO8(eax);

}

/**
 * sub_00535DC0
 * Original: 0x00535DC0 - 0x00535E09 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535DC0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x1C;
    ebx = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x10) = 0;
    edx = edi;
    esi = 0x10;

loc_00535DE0: ;
    MEM32(edx) = 2;
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_00535DE0; /* jne: not equal / not zero */

loc_00535DEC: ;
    esi = ebx;
    esi = esi & 0xE;
    edx = 0; /* xor self */
    if (CMP_NE(esi, 4)) { sub_00535E09(); return; } /* jne: not equal / not zero */

loc_00535DF8: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    MEM32(edi) = 0x42;
    edx = 0x10;
    g_seh_ebp = ebp; sub_00535E3C(); return; /* tail jmp 0x00535E3C */

}

/**
 * sub_00535F00
 * Original: 0x00535F00 - 0x00535F72 (114 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535F00: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (TEST_Z(ebx, ebx)) goto loc_00535F16; /* je: equal / zero */

loc_00535F10: ;
    MEM32(ebx) = MEM32(ebx) + 0x80000;

loc_00535F16: ;
    esi = eax + eax * 2;
    esi = esi << 2;
    eax = MEM32(esi + 0x547160);
    if (TEST_Z(eax, eax)) goto loc_00535F4C; /* je: equal / zero */

loc_00535F26: ;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x547160);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_00535F4B; /* jne: not equal / not zero */

loc_00535F46: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_00535F4B: ;
    POP32(esp, edi);

loc_00535F4C: ;
    (void)0; /* cmp ebp, MEM32(esi + 0x547158) - flags set for next jcc */
    eax = MEM32(0x5499F0);
    MEM32(esi + 0x547158) = ebp;
    MEM32(esi + 0x547160) = ebx;
    if (CMP_NE(ebp, MEM32(esi + 0x547158))) { sub_00535F72(); return; } /* jne: not equal / not zero */

loc_00535F65: ;
    eax = eax | 0x40;
    POP32(esp, esi);
    MEM32(0x5499F0) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535F80
 * Original: 0x00535F80 - 0x00535FC0 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535F80: ;
    esp = esp - 8;
    edx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax + 0x114;
    ecx = ecx << 4;
    PUSH32(esp, esi);
    ecx = ecx + edx + 0x10A8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx >> 0x12;
    eax = eax + 4;
    if (CMP_NE(edx, 1)) { sub_00535FC0(); return; } /* jne: not equal / not zero */

loc_00535FB3: ;
    edi = MEM32(eax);
    edi = edi << 4;
    edi = edi + 0x549C98;
    g_seh_ebp = ebp; sub_0053600D(); return; /* tail jmp 0x0053600D */

}

/**
 * sub_00536030
 * Original: 0x00536030 - 0x00536090 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536030: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00536038: ;
    (void)0; /* cmp ecx, 0x20 - flags set for next jcc */
    ebx = ecx;
    if (CMP_B(ecx, 0x20)) goto loc_00536044; /* jb: below (unsigned <) */

loc_0053603F: ;
    ebx = 0x20;

loc_00536044: ;
    esi = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx << 0x12;
    ecx = ecx + 0xB00;
    MEM32(eax) = ecx;
    edx = ebx * 4;
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    edi = eax + 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esi = esi + edx;
    ecx = ecx - ebx;
    MEM32(esp + 0x14) = esi;
    eax = eax + edx + 4;
    MEM32(esp + 0x18) = ecx;
    if ((ecx != 0)) goto loc_00536038; /* jne: not equal / not zero */

loc_00536089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00536090
 * Original: 0x00536090 - 0x00536112 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    ebp = esi;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    edi--;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_005360B1; /* jne: not equal / not zero */

loc_005360A6: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    PUSH32(esp, 0); sub_00535F80(); /* call 0x00535F80 */

loc_005360B1: ;
    ebx = MEM32(edi + 0xC);
    eax = MEM32(esi);
    edx = MEM32(esi + 4);
    ecx = eax + ebx * 4 + 8;
    edx = edx + 0x200;
    if (CMP_B(ecx, edx)) goto loc_005360EA; /* jb: below (unsigned <) */

loc_005360C7: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = ebx * 4 + 0x20C;
    if (CMP_BE(edx, ecx)) goto loc_005360DE; /* jbe: below or equal (unsigned <=) */

loc_005360DC: ;
    ecx = edx;

loc_005360DE: ;
    if (CMP_BE(edx, eax)) goto loc_005360E4; /* jbe: below or equal (unsigned <=) */

loc_005360E2: ;
    eax = edx;

loc_005360E4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005360EA: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0x41E9C;
    MEM32(eax + 4) = ecx;
    esi = edi + 0x114;
    ecx = ebx;
    edi = eax + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    edx = eax + ebx * 4 + 8;
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536120
 * Original: 0x00536120 - 0x005361B0 (144 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536120: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(edx + 2));
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    SET_LO8(eax, MEM8(ebp + 8));
    ebx = ebx << 2;
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_00536152; /* jne: not equal / not zero */

loc_0053613B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = eax << 4;
    ecx = ebx;
    esi = edx + 4;
    edi = eax + ebp + 0x10A8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_00536152: ;
    eax = MEM32(ebp);
    esi = MEM32(ebp + 4);
    ecx = eax + ebx * 4 + 0x4C;
    esi = esi + 0x200;
    if (CMP_B(ecx, esi)) goto loc_0053618D; /* jb: below (unsigned <) */

loc_00536166: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = ebx * 4 + 0x250;
    if (CMP_BE(edx, ecx)) goto loc_0053617D; /* jbe: below or equal (unsigned <=) */

loc_0053617B: ;
    ecx = edx;

loc_0053617D: ;
    if (CMP_BE(edx, eax)) goto loc_00536183; /* jbe: below or equal (unsigned <=) */

loc_00536181: ;
    eax = edx;

loc_00536183: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00536189: ;
    edx = MEM32(esp + 0x10);

loc_0053618D: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0x41E9C;
    PUSH32(esp, ebx);
    edx = edx + 4;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, edx);
    eax = eax + 8;
    PUSH32(esp, 0); sub_00536030(); /* call 0x00536030 */

loc_005361A7: ;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005361B0
 * Original: 0x005361B0 - 0x005361D8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005361B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005361B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(esi, esi)) { sub_005361D8(); return; } /* je: equal / zero */

loc_005361BA: ;
    PUSH32(esp, edi);
    eax = 0x547218;
    ecx = 0x40;
    edi = 0x54722C;
    eax = eax | 1;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00536210(); /* call 0x00536210 */

loc_005361D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00536210
 * Original: 0x00536210 - 0x005362C4 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536210: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    if (TEST_Z(eax, eax)) goto loc_00536298; /* je: equal / zero */

loc_0053621B: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    edx = edx | 0x70;
    PUSH32(esp, edi);
    edi = eax + -1;
    MEM32(0x5499F0) = edx;
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = eax;
    edx = MEM32(edi + 4);
    edx = edx ^ ecx;
    if (TEST_Z(LO8(edx), 0x13)) goto loc_00536297; /* je: equal / zero */

loc_0053624D: ;
    edx = MEM32(0x5499F0);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = edx | 0x1000;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    if (CMP_B(eax, ecx)) goto loc_00536277; /* jb: below (unsigned <) */

loc_00536268: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00536277: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0053627C: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    eax = eax + 0xC;
    MEM32(esi) = eax;

loc_00536297: ;
    POP32(esp, edi);

loc_00536298: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005362AE; /* jb: below (unsigned <) */

loc_0053629F: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005362AE: ;
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(esi + 0x79C) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005362D0
 * Original: 0x005362D0 - 0x005362E6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005362D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005362D0: ;
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    ecx = MEM32(ebx + 8);
    if (TEST_Z(LO8(eax), 0x10)) { sub_005362E6(); return; } /* je: equal / zero */

loc_005362DE: ;
    ecx = ecx | 0x200;
    g_seh_ebp = ebp; sub_005362EC(); return; /* tail jmp 0x005362EC */

}

/**
 * sub_00536400
 * Original: 0x00536400 - 0x0053640A (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536400(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00536410(); return; /* tail jmp 0x00536410 */

}

/**
 * sub_005365A0
 * Original: 0x005365A0 - 0x00536697 (247 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005365A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005365A0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    esi = esi + 4;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0xDEADBEEFu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0053668E; /* je: equal / zero */

loc_005365CB: ;
    PUSH32(esp, ebx);
    /* nop */

loc_005365D0: ;
    edx = ecx;
    edx = edx & 0xE0000000u;
    if (CMP_NE(edx, 0x80000000u)) goto loc_0053667B; /* jne: not equal / not zero */

loc_005365E4: ;
    edx = ecx;
    edx = edx >> 0x19;
    edx = edx & 0xF;
    ecx = ecx & 0xFF;
    edi++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(ecx, edi)) goto loc_00536613; /* je: equal / zero */

loc_005365FB: ;
    if (TEST_Z(ebp, ebp)) goto loc_0053660C; /* je: equal / zero */

loc_005365FF: ;
    MEM32(ebp) = 0x41EA4;
    MEM32(ebp + 4) = ecx;
    ebp = ebp + 8;

loc_0053660C: ;
    eax = eax + 2;
    MEM32(esp + 0x20) = eax;

loc_00536613: ;
    MEM32(esp + 0x14) = ecx;

loc_00536617: ;
    (void)0; /* cmp edx, 8 - flags set for next jcc */
    ebx = edx;
    if (CMP_B(edx, 8)) goto loc_00536623; /* jb: below (unsigned <) */

loc_0053661E: ;
    ebx = 8;

loc_00536623: ;
    if (TEST_Z(ebp, ebp)) goto loc_0053665C; /* je: equal / zero */

loc_00536627: ;
    eax = ebx;
    eax = eax << 0x14;
    eax = eax + 0xB80;
    MEM32(ebp) = eax;
    edx = ebx;
    edx = edx << 4;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    ebp = ebp + 4;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x1C);
    ebp = ebp + edx;
    edx = MEM32(esp + 0x10);

loc_0053665C: ;
    ecx = ebx;
    ecx = ecx << 4;
    esi = esi + ecx;
    eax = eax + ebx * 4 + 1;
    edx = edx - ebx;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = edx;
    if ((edx != 0)) goto loc_00536617; /* jne: not equal / not zero */

loc_00536677: ;
    edi = MEM32(esp + 0x14);

loc_0053667B: ;
    ecx = MEM32(esi);
    esi = esi + 4;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_005365D0; /* jne: not equal / not zero */

loc_0053668D: ;
    POP32(esp, ebx);

loc_0053668E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005366A0
 * Original: 0x005366A0 - 0x0053670C (108 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005366A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005366A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ebp, ebp)) goto loc_005366BC; /* je: equal / zero */

loc_005366AC: ;
    eax = ZX16(MEM16(ebp));
    ecx = ZX16(MEM16(ebp + 2));
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;

loc_005366BC: ;
    esi = 0; /* xor self */
    if (TEST_Z(ebp, ebp)) goto loc_005366D2; /* je: equal / zero */

loc_005366C2: ;
    eax = MEM32(esp + 0x18);
    eax = eax << 4;
    edx = eax + 0x7F;
    edx = edx >> 7;
    esi = eax + edx * 4;

loc_005366D2: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_005366E6; /* je: equal / zero */

loc_005366DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005365A0(); /* call 0x005365A0 */

loc_005366E3: ;
    eax = eax << 2;

loc_005366E6: ;
    ebx = eax + esi;
    PUSH32(esp, 0x24800000);
    eax = ebx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_005366FA: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_0053670C(); return; } /* jne: not equal / not zero */

loc_00536700: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005367F0
 * Original: 0x005367F0 - 0x00536805 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005367F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005367F0: ;
    ecx = MEM32(eax + -1);
    eax--;
    ecx--;
    MEM32(eax) = ecx;
    if ((ecx != 0)) goto loc_00536804; /* jne: not equal / not zero */

loc_005367F9: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00536804: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00536810
 * Original: 0x00536810 - 0x0053692D (285 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536810(void)
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

loc_00536810: ;
    eax = MEM32(esi + 0x794);
    if (TEST_Z(MEM8(eax + 4), 2)) goto loc_0053692C; /* je: equal / zero */

loc_00536820: ;
    eax = MEM32(0x549B6C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00536835; /* jne: not equal / not zero */

loc_0053682E: ;
    ebp = 0x545EF8;
    goto loc_0053684C;

loc_00536835: ;
    if (TEST_Z(MEM8(esi + 8), 2)) goto loc_00536847; /* je: equal / zero */

loc_0053683B: ;
    edi = 0x2C;
    ebp = 0x545E48;
    goto loc_00536851;

loc_00536847: ;
    ebp = 0x545D88;

loc_0053684C: ;
    edi = 0x30;

loc_00536851: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edx = eax + edi * 4 + 0x78;
    ecx = ecx + 0x200;
    if (CMP_B(edx, ecx)) goto loc_0053688D; /* jb: below (unsigned <) */

loc_0053686A: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = edi * 4 + 0x27C;
    if (CMP_BE(edx, ecx)) goto loc_00536881; /* jbe: below or equal (unsigned <=) */

loc_0053687F: ;
    ecx = edx;

loc_00536881: ;
    if (CMP_BE(edx, eax)) goto loc_00536887; /* jbe: below or equal (unsigned <=) */

loc_00536885: ;
    eax = edx;

loc_00536887: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053688D: ;
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x200B80;
    if (CMP_NE(MEM32(0x549C34), 2)) goto loc_005368B4; /* jne: not equal / not zero */

loc_005368A6: ;
    fp_push(MEMF(esi + 0x948)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_005368BA;

loc_005368B4: ;
    fp_push(MEMF(0x648D14)); /* fld float */

loc_005368BA: ;
    edx = MEM32(esi + 0x95C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x960);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x948);
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 8);
    if (((int32_t)(HI8(ecx) & HI8(ecx)) >= 0)) goto loc_005368F5; /* jns: not sign (positive) */

loc_005368E5: ;
    if (CMP_EQ(MEM32(0x549C58), ebx)) goto loc_005368F5; /* je: equal / zero */

loc_005368ED: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D10)); /* fld float */

loc_005368F5: ;
    fp_push(MEMF(esi + 0xEF8)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ebp);
    eax = eax + 0x34;
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0xEFC)); /* fld float */
    MEM32(eax + -16) = ebx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(eax + -12) = ebx;
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + -8) = 0x41E9C;
    MEM32(eax + -4) = ebx;
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00536030(); /* call 0x00536030 */

loc_00536927: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);

loc_0053692C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00536930
 * Original: 0x00536930 - 0x00536A75 (325 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x794);
    ecx = MEM32(eax + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0053697A; /* je: equal / zero */

loc_00536954: ;
    SET_LO8(eax, MEM8(ebx + 3));
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    edi = ebx + -1;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00536988; /* je: equal / zero */

loc_0053695E: ;
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_00536090(); /* call 0x00536090 */

loc_00536967: ;
    eax = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00536210(); /* call 0x00536210 */

loc_00536972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0053697A: ;
    edi = 0x547040;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_00535DC0(); /* call 0x00535DC0 */

loc_00536988: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(edi + 0x10);
    ecx = ecx | 0x70;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    if (CMP_EQ(ebp, eax)) goto loc_005369AA; /* je: equal / zero */

loc_0053699E: ;
    eax = ecx;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;

loc_005369AA: ;
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(edx, MEM32(edi + 4))) goto loc_005369BD; /* je: equal / zero */

loc_005369B3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1600;

loc_005369BD: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x798) = ebx;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x79C) = ebx;
    if (CMP_B(eax, ecx)) goto loc_005369E9; /* jb: below (unsigned <) */

loc_005369DA: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005369E9: ;
    edx = MEM32(edi + 4);
    ecx = ecx | 0xFFFFFFFFu;
    if (TEST_NZ(HI8(edx), 4)) goto loc_00536A00; /* jne: not equal / not zero */

loc_005369F4: ;
    MEM32(eax) = 0x4194C;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;

loc_00536A00: ;
    edx = MEM32(edi + 4);
    if (TEST_NZ(HI8(edx), 8)) goto loc_00536A14; /* jne: not equal / not zero */

loc_00536A08: ;
    MEM32(eax) = 0x41950;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;

loc_00536A14: ;
    edx = MEM32(edi + 4);
    if (TEST_NZ(HI8(edx), 0x10)) goto loc_00536A28; /* jne: not equal / not zero */

loc_00536A1C: ;
    MEM32(eax) = 0x4195C;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;

loc_00536A28: ;
    ecx = MEM32(edi + 4);
    if (TEST_NZ(HI8(ecx), 0x20)) goto loc_00536A3C; /* jne: not equal / not zero */

loc_00536A30: ;
    MEM32(eax) = 0x41960;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;

loc_00536A3C: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(LO8(ecx), 2)) { sub_00536A75(); return; } /* je: equal / zero */

loc_00536A44: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00536A49: ;
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x81E94;
    MEM32(eax + 0xC) = 6;
    MEM32(eax + 0x10) = ebx;
    eax = eax + 0x14;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00536A6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536AA0
 * Original: 0x00536AA0 - 0x00536AF4 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536AA0: ;
    PUSH32(esp, ebx);
    eax = MEM32(0x547540);
    eax = eax + 0x1C;
    if (CMP_AE(eax, MEM32(0x547544))) { sub_00536AF4(); return; } /* jae: above or equal (unsigned >=) */

loc_00536AB1: ;
    MEM32(0x547540) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = ecx << 4;
    ecx = ecx + 0x549C98;
    ebx = MEM32(edx);
    MEM32(eax + -16) = ebx;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + -12) = ebx;
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + -8) = ebx;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00536B00
 * Original: 0x00536B00 - 0x00536B3E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536B00: ;
    eax = MEM32(0x547540);
    eax = eax + 0x1C;
    if (CMP_AE(eax, MEM32(0x547544))) { sub_00536B3E(); return; } /* jae: above or equal (unsigned >=) */

loc_00536B10: ;
    MEM32(0x547540) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = MEM32(edx);
    MEM32(eax + -16) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + -8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00536B50
 * Original: 0x00536B50 - 0x00536BE4 (148 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_00536B50: ;
    eax = MEM32(0x547540);
    eax = eax + 0x4C;
    if (CMP_AE(eax, MEM32(0x547544))) { sub_00536BE4(); return; } /* jae: above or equal (unsigned >=) */

loc_00536B64: ;
    MEM32(0x547540) = eax;
    /* SSE: movq mm0, qword ptr [edx] */
    /* SSE: movq mm1, qword ptr [edx + 8] */
    /* SSE: movq mm2, qword ptr [edx + 0x10] */
    /* SSE: movq mm3, qword ptr [edx + 0x18] */
    /* SSE: movq mm4, qword ptr [edx + 0x20] */
    /* SSE: movq mm5, qword ptr [edx + 0x28] */
    /* SSE: movq mm6, qword ptr [edx + 0x30] */
    /* SSE: movq mm7, qword ptr [edx + 0x38] */
    MEM32(eax + -76) = 0x41EA4;
    MEM32(eax + -72) = ecx;
    ecx = ecx << 4;
    ecx = ecx + 0x549C98;
    MEM32(eax + -68) = 0x400B80;
    /* SSE: movq qword ptr [eax - 0x40], mm0 */
    /* SSE: movq qword ptr [ecx], mm0 */
    /* SSE: movq qword ptr [eax - 0x38], mm1 */
    /* SSE: movq qword ptr [ecx + 8], mm1 */
    /* SSE: movq qword ptr [eax - 0x30], mm2 */
    /* SSE: movq qword ptr [ecx + 0x10], mm2 */
    /* SSE: movq qword ptr [eax - 0x28], mm3 */
    /* SSE: movq qword ptr [ecx + 0x18], mm3 */
    /* SSE: movq qword ptr [eax - 0x20], mm4 */
    /* SSE: movq qword ptr [ecx + 0x20], mm4 */
    /* SSE: movq qword ptr [eax - 0x18], mm5 */
    /* SSE: movq qword ptr [ecx + 0x28], mm5 */
    /* SSE: movq qword ptr [eax - 0x10], mm6 */
    /* SSE: movq qword ptr [ecx + 0x30], mm6 */
    /* SSE: movq qword ptr [eax - 8], mm7 */
    /* SSE: movq qword ptr [ecx + 0x38], mm7 */
    /* emms - empty MMX state */
    esp += 4; return; /* ret */

}

/**
 * sub_00536C00
 * Original: 0x00536C00 - 0x00536CC0 (192 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_00536C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x547540);
    esi = edx;
    eax = MEM32(esp + 0xC);
    if (CMP_AE(edi, MEM32(0x547544))) { sub_00536CC0(); return; } /* jae: above or equal (unsigned >=) */

loc_00536C1A: ;
    MEM32(edi) = 0x41EA4;
    MEM32(edi + 4) = ecx;
    edi = edi + 8;
    if (CMP_AE(eax, 0x10)) goto loc_00536C4A; /* jae: above or equal (unsigned >=) */

loc_00536C2B: ;
    edi = edi + 4;
    ecx = eax;
    eax = eax << 0x12;
    eax = eax | 0xB80;
    MEM32(edi + -4) = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00536C3D: ;
    MEM32(0x547540) = edi;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00536C4A: ;
    /* TODO: prefetchnta byte ptr [esi + 0x40] */
    /* TODO: prefetchnta byte ptr [esi + 0x60] */
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* SSE: movq mm2, qword ptr [esi + 0x10] */
    /* SSE: movq mm3, qword ptr [esi + 0x18] */
    /* SSE: movq mm4, qword ptr [esi + 0x20] */
    /* SSE: movq mm5, qword ptr [esi + 0x28] */
    /* SSE: movq mm6, qword ptr [esi + 0x30] */
    /* SSE: movq mm7, qword ptr [esi + 0x38] */
    MEM32(edi) = 0x400B80;
    /* SSE: movq qword ptr [edi + 4], mm0 */
    /* SSE: movq qword ptr [edi + 0xc], mm1 */
    /* SSE: movq qword ptr [edi + 0x14], mm2 */
    /* SSE: movq qword ptr [edi + 0x1c], mm3 */
    /* SSE: movq qword ptr [edi + 0x24], mm4 */
    /* SSE: movq qword ptr [edi + 0x2c], mm5 */
    /* SSE: movq qword ptr [edi + 0x34], mm6 */
    /* SSE: movq qword ptr [edi + 0x3c], mm7 */
    edi = edi + 0x44;
    eax = eax - 0x10;
    if ((eax == 0)) goto loc_00536C3D; /* je: equal / zero */

loc_00536C9F: ;
    esi = esi + 0x40;
    if (CMP_B(eax, 0x10)) goto loc_00536C2B; /* jb: below (unsigned <) */

loc_00536CA7: ;
    if (CMP_B(edi, MEM32(0x547544))) goto loc_00536C4A; /* jb: below (unsigned <) */

loc_00536CAF: ;
    PUSH32(esp, eax);
    MEM32(0x547540) = edi;
    PUSH32(esp, 0); sub_0053C440(); /* call 0x0053C440 */

loc_00536CBB: ;
    edi = eax;
    POP32(esp, eax);
    goto loc_00536C4A;

}

/**
 * sub_00536CE0
 * Original: 0x00536CE0 - 0x00536CF9 (25 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536CE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    if (TEST_NZ(MEM8(esi + 3), 0x10)) { sub_00536CF9(); return; } /* jne: not equal / not zero */

loc_00536CED: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00536D90
 * Original: 0x00536D90 - 0x00536DB7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(esi, esi)) { sub_00536DB7(); return; } /* je: equal / zero */

loc_00536D97: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0x547218;
    PUSH32(esp, edx);
    eax = eax | 1;
    ecx = 0x40;
    edi = 0x54722C;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00536DB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00536DD0
 * Original: 0x00536DD0 - 0x00536E52 (130 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536DD0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x40;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_00536E52(); return; } /* jne: not equal / not zero */

loc_00536DE5: ;
    eax = MEM32(0x5499F0);
    eax = eax & 0xBFFFFFFFu;
    eax = eax | 0x70;
    MEM32(0x5499F0) = eax;
    eax = MEM32(ebx + 0xB04);
    ebp = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00536E3E; /* jbe: below or equal (unsigned <=) */

loc_00536E03: ;
    esi = ebx + 0xB08;
    /* nop */

loc_00536E10: ;
    edi = MEM32(esi);
    ecx = MEM32(ebx + 0x2C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_00536E30; /* jne: not equal / not zero */

loc_00536E2B: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_00536E30: ;
    eax = MEM32(ebx + 0xB04);
    ebp++;
    esi = esi + 0xC;
    if (CMP_B(ebp, eax)) goto loc_00536E10; /* jb: below (unsigned <) */

loc_00536E3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xB04) = 0;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00536F90
 * Original: 0x00536F90 - 0x00536FCC (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536F90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00536FAD; /* jb: below (unsigned <) */

loc_00536F9E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00536FAD: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x80320;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = eax + 0xC;
    MEM32(esi) = eax;
    MEM32(0x549C54) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536FD0
 * Original: 0x00536FD0 - 0x0053700F (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00536FD0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00536FED; /* jb: below (unsigned <) */

loc_00536FDE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00536FED: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E6C;
    edx = ecx + -512;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(0x549C68) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537010
 * Original: 0x00537010 - 0x00537067 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537010(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537010: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053702E; /* jb: below (unsigned <) */

loc_0053701F: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053702E: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX8(MEM8(esp + 0xE));
    edi = ecx;
    edi = edi & 0xFF;
    edi = edi << 0x10;
    edx = edx | edi;
    edi = ecx;
    edi = edi & 0xFF00FF00u;
    MEM32(eax) = 0x402A8;
    edx = edx | edi;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEM32(0x549C20) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537070
 * Original: 0x00537070 - 0x005370AD (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537070: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053708D; /* jb: below (unsigned <) */

loc_0053707E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053708D: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = 0x40308;
    if (TEST_NZ(ecx, ecx)) { sub_005370AD(); return; } /* jne: not equal / not zero */

loc_0053709B: ;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(0x549C44) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005370F0
 * Original: 0x005370F0 - 0x00537135 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005370F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005370F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053710D; /* jb: below (unsigned <) */

loc_005370FE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053710D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A0;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    edx = MEM32(0x549C44);
    MEM32(0x549C40) = ecx;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00537070(); return; /* tail jmp 0x00537070 */

}

/**
 * sub_00537140
 * Original: 0x00537140 - 0x00537183 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537140: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053715D; /* jb: below (unsigned <) */

loc_0053714E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053715D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A4;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x200;
    MEM32(0x549C30) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537190
 * Original: 0x00537190 - 0x005371C6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537190: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005371AD; /* jb: below (unsigned <) */

loc_0053719E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005371AD: ;
    edx = MEM32(esp + 8);
    if (TEST_Z(edx, edx)) { sub_005371C6(); return; } /* je: equal / zero */

loc_005371B5: ;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) { sub_005371C6(); return; } /* je: equal / zero */

loc_005371BF: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_005371C8(); return; /* tail jmp 0x005371C8 */

}

/**
 * sub_00537230
 * Original: 0x00537230 - 0x005372BC (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537230: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(0x549C38) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537258; /* jb: below (unsigned <) */

loc_00537249: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537258: ;
    edx = MEM32(0x549C80);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_00537269; /* je: equal / zero */

loc_00537264: ;
    ecx = 2;

loc_00537269: ;
    edx = MEM32(0x549C7C);
    if (TEST_Z(edx, edx)) goto loc_0053728C; /* je: equal / zero */

loc_00537273: ;
    edx = MEM32(0x549C38);
    if (TEST_Z(edx, edx)) goto loc_00537289; /* je: equal / zero */

loc_0053727D: ;
    if (CMP_NE(MEM32(0x549C3C), 0x1E00)) goto loc_0053728C; /* jne: not equal / not zero */

loc_00537289: ;
    ecx = ecx | 1;

loc_0053728C: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    if (TEST_Z(edi, edi)) { sub_005372BC(); return; } /* je: equal / zero */

loc_00537299: ;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) { sub_005372BC(); return; } /* je: equal / zero */

loc_005372A3: ;
    MEM32(eax + 8) = 0x4032C;
    ecx = 1;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005372E0
 * Original: 0x005372E0 - 0x00537359 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005372E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005372E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(0x549C3C) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537308; /* jb: below (unsigned <) */

loc_005372F9: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537308: ;
    edx = MEM32(0x549C80);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_00537319; /* je: equal / zero */

loc_00537314: ;
    ecx = 2;

loc_00537319: ;
    edx = MEM32(0x549C7C);
    if (TEST_Z(edx, edx)) goto loc_0053733C; /* je: equal / zero */

loc_00537323: ;
    edx = MEM32(0x549C38);
    if (TEST_Z(edx, edx)) goto loc_00537339; /* je: equal / zero */

loc_0053732D: ;
    if (CMP_NE(MEM32(0x549C3C), 0x1E00)) goto loc_0053733C; /* jne: not equal / not zero */

loc_00537339: ;
    ecx = ecx | 1;

loc_0053733C: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x40370;
    MEM32(eax + 0xC) = edi;
    eax = eax + 0x10;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537360
 * Original: 0x00537360 - 0x005373B4 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537360: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x784);
    if (TEST_NZ(eax, eax)) { sub_005373B4(); return; } /* jne: not equal / not zero */

loc_00537371: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537387; /* jb: below (unsigned <) */

loc_00537378: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537387: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x400A60;
    eax = eax + 4;
    edx = 0x10;
    /* nop */

loc_005373A0: ;
    MEM32(eax) = ecx;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_005373A0; /* jne: not equal / not zero */

loc_005373A8: ;
    MEM32(esi) = eax;
    MEM32(0x549C48) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005373D0
 * Original: 0x005373D0 - 0x0053743F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005373D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_005373D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM32(esp + 0xC) = ebx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00537400: ;
    edi = eax;
    if (CMP_BE(edi, 0x1FF)) goto loc_0053740F; /* jbe: below or equal (unsigned <=) */

loc_0053740A: ;
    edi = 0x1FF;

loc_0053740F: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537425; /* jb: below (unsigned <) */

loc_00537416: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537425: ;
    MEM32(eax) = 0x40380;
    MEM32(eax + 4) = edi;
    eax = eax + 8;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    MEM32(0x549C6C) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00537440
 * Original: 0x00537440 - 0x005374C1 (129 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537440: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    eax = MEM32(edi + 0x1A04);
    ecx = ZX8(MEM8(eax + 0xD));
    SET_LO8(edx, MEM8(ecx + 0x545CD0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    esi = 0; /* xor self */
    if (CMP_NE(LO8(edx), 0x20)) goto loc_00537469; /* jne: not equal / not zero */

loc_00537467: ;
    esi = ebx;

loc_00537469: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx & 1;
    if (CMP_EQ(esi, ecx)) goto loc_005374B5; /* je: equal / zero */

loc_00537475: ;
    ecx = MEM32(edi + 4);
    eax = eax ^ 1;
    MEM32(edi + 8) = eax;
    eax = MEM32(edi);
    if (CMP_B(eax, ecx)) goto loc_00537493; /* jb: below (unsigned <) */

loc_00537484: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537493: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    esi = esi << 5;
    MEM32(eax + 8) = 0x40100;
    esi = esi | 8;
    MEM32(eax + 0xC) = esi;
    eax = eax + 0x10;
    MEM32(edi) = eax;

loc_005374B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x549C74) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005374D0
 * Original: 0x005374D0 - 0x00537504 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005374D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005374D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM32(0x549C78) = eax;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005374F6; /* jb: below (unsigned <) */

loc_005374E7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005374F6: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_005374FE: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537510
 * Original: 0x00537510 - 0x0053757C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537510(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537510: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM32(0x549C7C) = eax;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537536; /* jb: below (unsigned <) */

loc_00537527: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537536: ;
    edx = MEM32(0x549C80);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_00537547; /* je: equal / zero */

loc_00537542: ;
    ecx = 2;

loc_00537547: ;
    edx = MEM32(0x549C7C);
    if (TEST_Z(edx, edx)) goto loc_0053756A; /* je: equal / zero */

loc_00537551: ;
    edx = MEM32(0x549C38);
    if (TEST_Z(edx, edx)) goto loc_00537567; /* je: equal / zero */

loc_0053755B: ;
    if (CMP_NE(MEM32(0x549C3C), 0x1E00)) goto loc_0053756A; /* jne: not equal / not zero */

loc_00537567: ;
    ecx = ecx | 1;

loc_0053756A: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537580
 * Original: 0x00537580 - 0x005375EC (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM32(0x549C80) = eax;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005375A6; /* jb: below (unsigned <) */

loc_00537597: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005375A6: ;
    edx = MEM32(0x549C80);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_005375B7; /* je: equal / zero */

loc_005375B2: ;
    ecx = 2;

loc_005375B7: ;
    edx = MEM32(0x549C7C);
    if (TEST_Z(edx, edx)) goto loc_005375DA; /* je: equal / zero */

loc_005375C1: ;
    edx = MEM32(0x549C38);
    if (TEST_Z(edx, edx)) goto loc_005375D7; /* je: equal / zero */

loc_005375CB: ;
    if (CMP_NE(MEM32(0x549C3C), 0x1E00)) goto loc_005375DA; /* jne: not equal / not zero */

loc_005375D7: ;
    ecx = ecx | 1;

loc_005375DA: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005375F0
 * Original: 0x005375F0 - 0x00537601 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005375F0(void)
{

loc_005375F0: ;
    eax = MEM32(esp + 4);
    MEM32(0x549C84) = eax;
    PUSH32(esp, 0); sub_005380E0(); /* call 0x005380E0 */

loc_005375FE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537610
 * Original: 0x00537610 - 0x00537621 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537610(void)
{

loc_00537610: ;
    eax = MEM32(esp + 4);
    MEM32(0x549C88) = eax;
    PUSH32(esp, 0); sub_005380E0(); /* call 0x005380E0 */

loc_0053761E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537630
 * Original: 0x00537630 - 0x00537641 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537630(void)
{

loc_00537630: ;
    eax = MEM32(esp + 4);
    MEM32(0x549C8C) = eax;
    PUSH32(esp, 0); sub_005380E0(); /* call 0x005380E0 */

loc_0053763E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537650
 * Original: 0x00537650 - 0x005376F8 (168 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537650(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00537650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    esi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_00537673; /* jge: greater or equal (signed >=) */

loc_0053766D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537673: ;
    fp_top() = -fp_top(); /* fchs */
    ecx = 0x40384;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0xC);
    edx = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00537693: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x549B2C) = ebx;
    ebx = ecx;
    MEM32(esp + 0x14) = ecx;
    edx = ebx;
    ecx = 0x40388;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_005376AF: ;
    edx = esi;
    ecx = 0x40330;
    MEM32(0x549B30) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_005376C1: ;
    edx = esi;
    ecx = 0x40334;
    MEM32(0x549B34) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_005376D3: ;
    edx = esi;
    ecx = 0x40338;
    MEM32(0x549B38) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_005376E5: ;
    MEM32(0x549C4C) = edi;
    POP32(esp, edi);
    MEM32(0x549B3C) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00537700
 * Original: 0x00537700 - 0x0053772A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537700: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x5499E8);
    MEM32(0x549C60) = ecx;
    edx = MEM32(eax + 0x1A04);
    if (CMP_NE(edx, MEM32(eax + 0x1A14))) { sub_0053772A(); return; } /* jne: not equal / not zero */

loc_0053771D: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_005381C0(); return; /* tail jmp 0x005381C0 */

}

/**
 * sub_00537730
 * Original: 0x00537730 - 0x0053775A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537730: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x5499E8);
    MEM32(0x549C64) = ecx;
    edx = MEM32(eax + 0x1A04);
    if (CMP_EQ(edx, MEM32(eax + 0x1A14))) { sub_0053775A(); return; } /* je: equal / zero */

loc_0053774D: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_005381C0(); return; /* tail jmp 0x005381C0 */

}

/**
 * sub_00537760
 * Original: 0x00537760 - 0x0053779F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    MEM32(0x549C58) = eax;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00537776: ;
    edi = esi;
    PUSH32(esp, 0); sub_00538090(); /* call 0x00538090 */

loc_0053777D: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537793; /* jb: below (unsigned <) */

loc_00537784: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537793: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00537798: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005377A0
 * Original: 0x005377A0 - 0x005377B9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005377A0(void)
{

loc_005377A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    MEM32(0x549C5C) = eax;
    PUSH32(esp, 0); sub_00538090(); /* call 0x00538090 */

loc_005377B5: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005377C0
 * Original: 0x005377C0 - 0x005377D9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005377C0(void)
{

loc_005377C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    MEM32(0x549C70) = eax;
    PUSH32(esp, 0); sub_00538090(); /* call 0x00538090 */

loc_005377D5: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005377E0
 * Original: 0x005377E0 - 0x0053781D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005377E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005377E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005377FD; /* jb: below (unsigned <) */

loc_005377EE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005377FD: ;
    ecx = MEM32(esp + 8);
    if (TEST_NZ(ecx, ecx)) { sub_0053781D(); return; } /* jne: not equal / not zero */

loc_00537805: ;
    MEM32(eax) = 0x417BC;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(0x549C50) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537840
 * Original: 0x00537840 - 0x0053788E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537840: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053785D; /* jb: below (unsigned <) */

loc_0053784E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053785D: ;
    ecx = MEM32(0x549C2C);
    edx = MEM32(0x549C28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(esp + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_00537873; /* jne: not equal / not zero */

loc_00537871: ;
    edx = ecx;

loc_00537873: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = eax + 0xC;
    MEM32(esi) = eax;
    MEM32(0x549C24) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537890
 * Original: 0x00537890 - 0x005378A8 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537890(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537890: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x549C24);
    MEM32(0x549C28) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00537840(); return; /* tail jmp 0x00537840 */

}

/**
 * sub_005378B0
 * Original: 0x005378B0 - 0x00537903 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005378B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005378B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005378CD; /* jb: below (unsigned <) */

loc_005378BE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005378CD: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x417C4;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_005378EE; /* je: equal / zero */

loc_005378E4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x9000;

loc_005378EE: ;
    edx = MEM32(0x549C24);
    MEM32(0x549C2C) = ecx;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00537840(); return; /* tail jmp 0x00537840 */

}

/**
 * sub_00537910
 * Original: 0x00537910 - 0x0053795D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537910: ;
    edx = MEM32(0x5499F0);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = edx | 0x200;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    if (CMP_B(eax, ecx)) goto loc_00537941; /* jb: below (unsigned <) */

loc_00537932: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537941: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x40328;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(0x549C1C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537960
 * Original: 0x00537960 - 0x00537982 (34 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537960(void)
{

loc_00537960: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5499E8);
    MEM32(ecx + 0x790) = eax;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x4000;
    MEM32(0x549C18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537990
 * Original: 0x00537990 - 0x005379AC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537990: ;
    eax = MEM32(0x547540);
    eax = eax + 8;
    if (CMP_AE(eax, MEM32(0x547544))) { sub_005379AC(); return; } /* jae: above or equal (unsigned >=) */

loc_005379A0: ;
    MEM32(0x547540) = eax;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_005379C0
 * Original: 0x005379C0 - 0x00537AC5 (261 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005379C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005379C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = esi;
    eax = eax << 7;
    MEM32(eax + 0x5473A0) = ebp;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_B(eax, ecx)) goto loc_00537A01; /* jb: below (unsigned <) */

loc_005379EE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005379FD: ;
    edx = MEM32(esp + 0x14);

loc_00537A01: ;
    ebp = ebp & 0xFFFF0000u;
    ecx = ebp;
    ebp = 1;
    if ((ebp == 0)) goto loc_00537A5F; /* je: equal / zero */

loc_00537A10: ;
    edi = esi * 4 + 0x41964;
    MEM32(eax) = edi;
    MEM32(eax + 4) = 0xFF000000u;
    eax = eax + 8;
    (void)0; /* cmp ecx, 0x30000 - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_A(ecx, 0x30000)) goto loc_00537A5A; /* ja: above (unsigned >) */

loc_00537A2F: ;
    if (CMP_EQ(ecx, 0x30000)) goto loc_00537A4D; /* je: equal / zero */

loc_00537A31: ;
    if (CMP_EQ(ecx, 0x10000)) goto loc_00537A40; /* je: equal / zero */

loc_00537A39: ;
    edi = 0x2400;
    goto loc_00537A5F;

loc_00537A40: ;
    MEM32(esp + 0x14) = ebp;
    edi = 0x8511;
    edx = ebp;
    goto loc_00537A5F;

loc_00537A4D: ;
    MEM32(esp + 0x14) = ebp;
    edi = 0x8512;
    edx = ebp;
    goto loc_00537A5F;

loc_00537A5A: ;
    edi = 0x2401;

loc_00537A5F: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    SET_LO8(ecx, LO8(ecx) + 9);
    MEM8(esi + 0x74F44D) = LO8(ecx);
    ecx = esi + 0xC03C;
    ecx = ecx << 4;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    eax = eax + 0x10;
    MEM32(ebx) = eax;
    eax = MEM32(ebx + 0x950);
    if (TEST_NZ(eax, eax)) goto loc_00537A9D; /* jne: not equal / not zero */

loc_00537A8F: ;
    if (TEST_Z(edx, edx)) goto loc_00537A9D; /* je: equal / zero */

loc_00537A93: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x200;

loc_00537A9D: ;
    ecx = esi;
    ebp = ebp << LO8(ecx);
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    ebp = ~ebp;
    ebp = ebp & eax;
    eax = MEM32(0x5499F0);
    ebp = ebp | edx;
    MEM32(ebx + 0x950) = ebp;
    eax = eax | 0x47F;
    POP32(esp, ebp);
    MEM32(0x5499F0) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537AD0
 * Original: 0x00537AD0 - 0x00537B3B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x784);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi;
    if (TEST_NZ(eax, eax)) goto loc_00537AEF; /* jne: not equal / not zero */

loc_00537AEC: ;
    ebx = edi + 1;

loc_00537AEF: ;
    if (TEST_Z(LO8(ebx), 3)) goto loc_00537B24; /* je: equal / zero */

loc_00537AF4: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00537B0A; /* jb: below (unsigned <) */

loc_00537AFB: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537B0A: ;
    ecx = MEM32(esp + 0x14);
    ebx = ebx << 4;
    ebx = ebx + ecx;
    edx = ebx * 4 + 0x41AD0;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ebp;
    eax = eax + 8;
    MEM32(esi) = eax;

loc_00537B24: ;
    eax = MEM32(esp + 0x14);
    edi = edi << 5;
    edi = edi + eax;
    MEM32(edi * 4 + 0x547330) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00537B40
 * Original: 0x00537B40 - 0x00537B83 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    ecx = MEM32(edi + 4);
    esi = eax;
    eax = MEM32(edi);
    if (CMP_B(eax, ecx)) goto loc_00537B62; /* jb: below (unsigned <) */

loc_00537B53: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537B62: ;
    edx = esi;
    edx = edx << 6;
    edx = edx + 0x41B24;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(edi) = eax;
    esi = esi << 7;
    POP32(esp, edi);
    MEM32(esi + 0x5473A4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00537B90
 * Original: 0x00537B90 - 0x00537BCF (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    ecx = MEM32(edi + 4);
    esi = eax;
    eax = MEM32(edi);
    if (CMP_B(eax, ecx)) goto loc_00537BB2; /* jb: below (unsigned <) */

loc_00537BA3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00537BB2: ;
    edx = esi * 4 + 0x40AE0;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(edi) = eax;
    esi = esi << 7;
    POP32(esp, edi);
    MEM32(esi + 0x5473A8) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00537BD0
 * Original: 0x00537BD0 - 0x00537BFF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00537BD0: ;
    (void)0; /* cmp edx, 0xC - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    if (CMP_GE(edx, 0xC)) { sub_00537BFF(); return; } /* jge: greater or equal (signed >=) */

loc_00537BD9: ;
    ecx = eax;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(0x5499F0);
    eax = eax << 5;
    ecx = ecx | esi;
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(eax * 4 + 0x547330) = ebx;
    MEM32(0x5499F0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00537C90
 * Original: 0x00537C90 - 0x00537CF8 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537C90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x784);
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 4;
    esi = ecx;
    esi = esi << 7;
    esi = esi + 0x547388;
    ecx = 0x181B68;

loc_00537CB4: ;
    MEM32(eax) = ecx;
    edi = esi;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ebp;
    edi = MEM32(edi + 0x14);
    ecx = ecx + 0x40;
    eax = eax + 0x1C;
    edx = edx + 0x1C;
    esi = esi + 0x80;
    (void)0; /* cmp ecx, 0x181BE8 - flags set for next jcc */
    MEM32(ebx + 0x14) = edi;
    if (CMP_BE(ecx, 0x181BE8)) goto loc_00537CB4; /* jbe: below or equal (unsigned <=) */

loc_00537CF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00537D00
 * Original: 0x00537D00 - 0x00537E23 (291 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537D00(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00537D00: ;
    eax = MEM32(0x5499E8);
    fp_push((double)SMEM32(eax + 0xEE0)); /* fild */
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xEE0);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(esi & esi, 0)) goto loc_00537D20; /* jge: greater or equal (signed >=) */

loc_00537D1A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537D20: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(eax + 0xEE4);
    (void)0; /* test esi, esi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(eax + 0xEE4)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_00537D42; /* jge: greater or equal (signed >=) */

loc_00537D3C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537D42: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(eax + 8);
    esi = 0; /* xor self */
    (void)0; /* test edi, 0x8000 - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (TEST_Z(edi, 0x8000)) goto loc_00537D73; /* je: equal / zero */

loc_00537D5B: ;
    if (CMP_EQ(MEM32(0x549C58), esi)) goto loc_00537D73; /* je: equal / zero */

loc_00537D63: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */

loc_00537D73: ;
    edi = MEM32(eax + 0xEE8);
    fp_push((double)SMEM32(eax + 0xEE8)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_00537D89; /* jge: greater or equal (signed >=) */

loc_00537D83: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537D89: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(eax + 0xEEC);
    (void)0; /* test edi, edi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(eax + 0xEEC)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_00537DAF; /* jge: greater or equal (signed >=) */

loc_00537DA9: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537DAF: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0xEF4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0xEF0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(edx + 0xC) = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 8);
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    /* fstp st(0) */
    MEM32(ecx + 0xC) = esi;
    /* fstp st(0) */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
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
 * sub_00537E30
 * Original: 0x00537E30 - 0x00537F34 (260 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537E30(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00537E30: ;
    esp = esp - 0x24;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x794);
    if (TEST_Z(MEM8(eax + 4), 0x12)) { sub_00537F34(); return; } /* je: equal / zero */

loc_00537E46: ;
    ecx = esp + 0x18;
    edx = esp + 8;
    PUSH32(esp, 0); sub_00537D00(); /* call 0x00537D00 */

loc_00537E53: ;
    eax = MEM32(esi + 8);
    if (TEST_NZ(HI8(eax), 2)) goto loc_00537EA3; /* jne: not equal / not zero */

loc_00537E5B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(edi) = 0x100A20;
    MEM32(edi + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(edi + 0x14) = 0x100AF0;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x20) = ecx;
    MEM32(edi + 0x24) = edx;
    edi = edi + 0x28;

loc_00537EA3: ;
    SET_LO8(ecx, MEM8(esi + 0x1C18));
    eax = 2;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00537F14; /* jne: not equal / not zero */

loc_00537EB2: ;
    if (CMP_NE(MEM32(0x549C34), eax)) goto loc_00537EFE; /* jne: not equal / not zero */

loc_00537EBA: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    eax = MEM32(esi + 0x948);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0x1C14) = eax;
    eax = edi + 0xC;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = 0x80394;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00537EFE: ;
    ecx = MEM32(esi + 0x948);
    MEM32(esi + 0x1C10) = 0;
    MEM32(esi + 0x1C14) = ecx;

loc_00537F14: ;
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    eax = edi + 0xC;
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = 0x80394;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00538030
 * Original: 0x00538030 - 0x0053808D (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538030: ;
    eax = MEM32(0x549C78);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x100001;
    if (TEST_Z(eax, eax)) goto loc_00538043; /* je: equal / zero */

loc_0053803E: ;
    ecx = 0x10100001;

loc_00538043: ;
    if (CMP_NE(MEM32(0x549C34), 2)) goto loc_00538052; /* jne: not equal / not zero */

loc_0053804C: ;
    ecx = ecx | 0x10000;

loc_00538052: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1A08);
    if (TEST_Z(eax, eax)) goto loc_0053807E; /* je: equal / zero */

loc_00538060: ;
    eax = ZX8(MEM8(eax + 0xD));
    if (CMP_EQ(eax, 0x2D)) goto loc_00538078; /* je: equal / zero */

loc_00538069: ;
    if (CMP_EQ(eax, 0x2B)) goto loc_00538078; /* je: equal / zero */

loc_0053806E: ;
    if (CMP_EQ(eax, 0x31)) goto loc_00538078; /* je: equal / zero */

loc_00538073: ;
    if (CMP_NE(eax, 0x2F)) goto loc_0053807E; /* jne: not equal / not zero */

loc_00538078: ;
    ecx = ecx | 0x1000;

loc_0053807E: ;
    MEM32(edx) = 0x40290;
    MEM32(edx + 4) = ecx;
    eax = edx + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538090
 * Original: 0x00538090 - 0x005380DB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538090: ;
    ecx = MEM32(0x549C70);
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x549C5C);
    esi = esi << 0x10;
    esi = esi | ecx;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_005380B5; /* jns: not sign (positive) */

loc_005380A9: ;
    eax = MEM32(0x549C58);
    if (TEST_Z(eax, eax)) goto loc_005380B5; /* je: equal / zero */

loc_005380B2: ;
    esi = esi | 1;

loc_005380B5: ;
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_005380CB; /* jb: below (unsigned <) */

loc_005380BC: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005380CB: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    MEM32(edi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005380E0
 * Original: 0x005380E0 - 0x005381B8 (216 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005380E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005380E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    edx = MEM32(esi + 0x2428);
    edx = edx & 0xFFFFFFF7u;
    MEM32(esi + 0x2428) = edx;
    ecx = MEM32(0x549C8C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0053810B; /* je: equal / zero */

loc_00538102: ;
    eax = eax | 8;
    MEM32(esi + 0x2428) = eax;

loc_0053810B: ;
    edx = MEM32(esi + 0x242C);
    edx = edx & 0xE7EFFFFFu;
    MEM32(esi + 0x242C) = edx;
    ecx = MEM32(0x549C84);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx;
    if (TEST_Z(ecx, ecx)) goto loc_00538134; /* je: equal / zero */

loc_00538129: ;
    eax = eax | 0x100000;
    MEM32(esi + 0x242C) = eax;

loc_00538134: ;
    eax = MEM32(0x549C88);
    if (TEST_Z(eax, eax)) goto loc_00538147; /* je: equal / zero */

loc_0053813D: ;
    MEM32(esi + 0x242C) = MEM32(esi + 0x242C) | 0x8000000;

loc_00538147: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053815D; /* jb: below (unsigned <) */

loc_0053814E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053815D: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x2428);
    MEM32(eax + 8) = 0x81D8C;
    MEM32(eax + 0xC) = 0x400094;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x40100;
    edx = 9;
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x242C);
    MEM32(eax + 0x1C) = 0x81D8C;
    MEM32(eax + 0x20) = 0x400B80;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0x40100;
    MEM32(eax + 0x2C) = edx;
    eax = eax + 0x30;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005381C0
 * Original: 0x005381C0 - 0x00538400 (576 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005381C0(void)
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

loc_005381C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x1A04);
    (void)0; /* cmp ebx, MEM32(esi + 0x1A14) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ebx, MEM32(esi + 0x1A14))) goto loc_00538324; /* jne: not equal / not zero */

loc_005381DB: ;
    ecx = MEM32(esi + 0x970);
    eax = MEM32(esi + 0x96C);
    ebp = MEM32(0x549C60);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x1A18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00538214; /* jne: not equal / not zero */

loc_00538202: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_0053821A;

loc_00538214: ;
    eax = eax & 0xFFF;
    eax++;

loc_0053821A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0053822C; /* jge: greater or equal (signed >=) */

loc_00538226: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053822C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053823F: ;
    ecx = MEM32(esi + 0x1A18);
    edi = eax;
    eax = MEM32(ecx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0053825E; /* jne: not equal / not zero */

loc_0053824E: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_00538267;

loc_0053825E: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;

loc_00538267: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00538279; /* jge: greater or equal (signed >=) */

loc_00538273: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00538279: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053828C: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_005382B7; /* jne: not equal / not zero */

loc_005382A5: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    goto loc_005382C0;

loc_005382B7: ;
    ecx = ecx & 0xFFF;
    ecx++;
    ebx = ecx;

loc_005382C0: ;
    if (CMP_B(edi, ebx)) goto loc_005382E4; /* jb: below (unsigned <) */

loc_005382C4: ;
    edi = MEM32(edx + 0x10);
    if (TEST_NZ(edi, edi)) goto loc_005382DD; /* jne: not equal / not zero */

loc_005382CB: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edi = 1;
    edi = edi << LO8(ecx);
    goto loc_005382E4;

loc_005382DD: ;
    edi = edi & 0xFFF;
    edi++;

loc_005382E4: ;
    ecx = MEM32(edx + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_005382FC; /* jne: not equal / not zero */

loc_005382EB: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0xF));
    ebx = 1;
    ecx = ecx & 0xF;
    ebx = ebx << LO8(ecx);
    goto loc_00538308;

loc_005382FC: ;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xFFF;
    ecx++;
    ebx = ecx;

loc_00538308: ;
    if (CMP_B(eax, ebx)) goto loc_0053837A; /* jb: below (unsigned <) */

loc_0053830C: ;
    eax = MEM32(edx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00538371; /* jne: not equal / not zero */

loc_00538313: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_0053837A;

loc_00538324: ;
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(0x648D14)); /* fld float */
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(0x549C64);
    MEM32(esp + 0x10) = 0x3F800000;
    if (TEST_NZ(eax, eax)) goto loc_00538351; /* jne: not equal / not zero */

loc_0053833F: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    goto loc_0053835A;

loc_00538351: ;
    edx = eax;
    edx = edx & 0xFFF;
    edx++;

loc_0053835A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(eax, eax)) goto loc_00538371; /* jne: not equal / not zero */

loc_00538360: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_0053837A;

loc_00538371: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;

loc_0053837A: ;
    ebx = MEM32(esi + 0x1A0C);
    ecx = eax;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFF7FFFu;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_005383CB; /* je: equal / zero */

loc_00538391: ;
    if (TEST_NZ(HI8(ebx), 2)) goto loc_005383CB; /* jne: not equal / not zero */

loc_00538396: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax | 0x8000;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi++;
    edi = edi >> 1;
    (void)0; /* cmp ebp, 2 - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi + 8) = eax;
    if (CMP_NE(ebp, 2)) goto loc_005383C5; /* jne: not equal / not zero */

loc_005383B4: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx++;
    ecx = ecx >> 1;
    ebx = ebx | 0x2000;
    goto loc_005383CB;

loc_005383C5: ;
    ebx = ebx | 0x1000;

loc_005383CB: ;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 0x960) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esi + 0x95C) = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    MEM32(esi + 0x954) = edi;
    MEM32(esi + 0x958) = ecx;
    /* test ah,5 / jp: branch for greater, equal, or unordered.  Keep the
     * emulated FPU value in this translation unit so the split continuation
     * does not start with a fresh synthetic FPU stack. */
    if (_fpu_cmp != -1) {
        MEMF(esp + 0x10) = (float)fp_top();
        fp_popp();
        g_seh_ebp = ebp;
        sub_00538404();
        return;
    }

loc_005383F4: ;
    ecx = MEM32(esp + 0x10);
    /* fstp st(0) */
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00538404(); return; /* tail jmp 0x00538404 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005384E0
 * Original: 0x005384E0 - 0x005385B2 (210 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005384E0(void)
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

loc_005384E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    edx = MEM32(0x5499E8);
    eax = MEM32(edx + 0xEE8);
    fp_push((double)SMEM32(edx + 0xEE8)); /* fild */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(eax & eax, 0)) goto loc_00538506; /* jge: greater or equal (signed >=) */

loc_00538500: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00538506: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edx + 0xEEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push((double)SMEM32(edx + 0xEEC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0053852C; /* jge: greater or equal (signed >=) */

loc_00538526: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053852C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 0xEF4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 0x948)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(eax, 2)) {
        g_seh_ebp = ebp;
        sub_005385B2();
        return;
    } /* jne: not equal / not zero */

loc_00538572: ;
    fp_push(MEMF(edx + 0x944)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_005385BC(); return; /* tail jmp 0x005385BC */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00538620
 * Original: 0x00538620 - 0x0053863B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538620: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053862F: ;
    if (TEST_NZ(eax, eax)) { sub_0053863B(); return; } /* jne: not equal / not zero */

loc_00538633: ;
    eax = 0x8007000Eu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00538670
 * Original: 0x00538670 - 0x00538687 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538670: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00538686; /* jne: not equal / not zero */

loc_00538674: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00538686; /* je: equal / zero */

loc_0053867B: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00538686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00538690
 * Original: 0x00538690 - 0x00538712 (130 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538690: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    ecx = MEM32(ebx + 0x784);
    MEM32(esp + 4) = ecx;
    MEM32(ebx + 0x784) = eax;
    if (TEST_NZ(eax, eax)) { sub_00538712(); return; } /* jne: not equal / not zero */

loc_005386AC: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(ebx + 0x788);
    ecx = ecx | 0x4800;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    if (TEST_Z(eax, eax)) goto loc_005386D4; /* je: equal / zero */

loc_005386C8: ;
    eax = ecx;
    eax = eax | 0x2000;
    MEM32(0x5499F0) = eax;

loc_005386D4: ;
    edx = MEM32(0x549C48);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_005386E0: ;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_005386F6; /* jb: below (unsigned <) */

loc_005386E7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005386F6: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00537C90(); /* call 0x00537C90 */

loc_005386FD: ;
    MEM32(eax) = 0x41E78;
    MEM32(eax + 4) = 0x210000;
    eax = eax + 8;
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005388A0
 * Original: 0x005388A0 - 0x00538B65 (709 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005388A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_005388A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x5499E8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edx + 0x784);
    ecx = MEM32(ecx + 8);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    MEM32(ebp + 8) = ecx;
    if (TEST_Z(eax, eax)) goto loc_00538B5E; /* je: equal / zero */

loc_005388CC: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, esi);

loc_005388D1: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax); /* movups */
    /* minps xmm0, MEMF(0x74F470) (packed 4xfloat) */
    /* maxps xmm0, MEMF(0x84B4D0) (packed 4xfloat) */
    /* mulps: xmm0 *= MEMF(0x74F480) (packed 4xfloat) */
    eax = (int32_t)xmm0; /* cvtss2si */
    eax = eax << 0x10;
    /* shufps xmm0, xmm0, 0x39 */
    ebx = (int32_t)xmm0; /* cvtss2si */
    ebx = ebx << 8;
    eax = eax | ebx;
    /* shufps xmm0, xmm0, 0x39 */
    ebx = (int32_t)xmm0; /* cvtss2si */
    eax = eax | ebx;
    /* shufps xmm0, xmm0, 0x39 */
    ebx = (int32_t)xmm0; /* cvtss2si */
    ebx = ebx << 0x18;
    eax = eax | ebx;
    MEM32(ebp + -12) = eax;
    esi = MEM32(ebp + -12);
    MEM32(edx + edi * 4 + 0x8E4) = esi;
    eax = MEM32(edx);
    if (CMP_B(eax, MEM32(edx + 4))) goto loc_0053893D; /* jb: below (unsigned <) */

loc_0053892B: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053893A: ;
    edx = MEM32(ebp + -16);

loc_0053893D: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xE4);
    ecx = ecx ^ MEM32(edi * 4 + 0x74F490);
    if (TEST_NZ(LO8(ecx), 0xF)) goto loc_00538964; /* jne: not equal / not zero */

loc_00538952: ;
    MEM32(0x549A20) = esi;
    MEM32(eax) = 0x40A60;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538964: ;
    if (TEST_NZ(LO8(ecx), 0xF0)) goto loc_0053897B; /* jne: not equal / not zero */

loc_00538969: ;
    MEM32(0x549A24) = esi;
    MEM32(eax) = 0x40A64;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0053897B: ;
    if (TEST_NZ(HI8(ecx), 0xF)) goto loc_00538992; /* jne: not equal / not zero */

loc_00538980: ;
    MEM32(0x549A28) = esi;
    MEM32(eax) = 0x40A68;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538992: ;
    if (TEST_NZ(HI8(ecx), 0xF0)) goto loc_005389A9; /* jne: not equal / not zero */

loc_00538997: ;
    MEM32(0x549A2C) = esi;
    MEM32(eax) = 0x40A6C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_005389A9: ;
    if (TEST_NZ(ecx, 0xF0000)) goto loc_005389C3; /* jne: not equal / not zero */

loc_005389B1: ;
    MEM32(0x549A30) = esi;
    MEM32(eax) = 0x40A70;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_005389C3: ;
    if (TEST_NZ(ecx, 0xF00000)) goto loc_005389DD; /* jne: not equal / not zero */

loc_005389CB: ;
    MEM32(0x549A34) = esi;
    MEM32(eax) = 0x40A74;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_005389DD: ;
    if (TEST_NZ(ecx, 0xF000000)) goto loc_005389F7; /* jne: not equal / not zero */

loc_005389E5: ;
    MEM32(0x549A38) = esi;
    MEM32(eax) = 0x40A78;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_005389F7: ;
    if (TEST_NZ(ecx, 0xF0000000u)) goto loc_00538A11; /* jne: not equal / not zero */

loc_005389FF: ;
    MEM32(0x549A3C) = esi;
    MEM32(eax) = 0x40A7C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A11: ;
    ecx = MEM32(edi * 4 + 0x74F490);
    ebx = MEM32(ebp + -4);
    ecx = ecx ^ MEM32(ebx + 0xE8);
    if (TEST_NZ(LO8(ecx), 0xF)) goto loc_00538A38; /* jne: not equal / not zero */

loc_00538A26: ;
    MEM32(0x549A40) = esi;
    MEM32(eax) = 0x40A80;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A38: ;
    if (TEST_NZ(LO8(ecx), 0xF0)) goto loc_00538A4F; /* jne: not equal / not zero */

loc_00538A3D: ;
    MEM32(0x549A44) = esi;
    MEM32(eax) = 0x40A84;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A4F: ;
    if (TEST_NZ(HI8(ecx), 0xF)) goto loc_00538A66; /* jne: not equal / not zero */

loc_00538A54: ;
    MEM32(0x549A48) = esi;
    MEM32(eax) = 0x40A88;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A66: ;
    if (TEST_NZ(HI8(ecx), 0xF0)) goto loc_00538A7D; /* jne: not equal / not zero */

loc_00538A6B: ;
    MEM32(0x549A4C) = esi;
    MEM32(eax) = 0x40A8C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A7D: ;
    if (TEST_NZ(ecx, 0xF0000)) goto loc_00538A97; /* jne: not equal / not zero */

loc_00538A85: ;
    MEM32(0x549A50) = esi;
    MEM32(eax) = 0x40A90;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538A97: ;
    if (TEST_NZ(ecx, 0xF00000)) goto loc_00538AB1; /* jne: not equal / not zero */

loc_00538A9F: ;
    MEM32(0x549A54) = esi;
    MEM32(eax) = 0x40A94;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538AB1: ;
    if (TEST_NZ(ecx, 0xF000000)) goto loc_00538ACB; /* jne: not equal / not zero */

loc_00538AB9: ;
    MEM32(0x549A58) = esi;
    MEM32(eax) = 0x40A98;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538ACB: ;
    if (TEST_NZ(ecx, 0xF0000000u)) goto loc_00538AE5; /* jne: not equal / not zero */

loc_00538AD3: ;
    MEM32(0x549A5C) = esi;
    MEM32(eax) = 0x40A9C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538AE5: ;
    ecx = MEM32(edi * 4 + 0x74F490);
    ecx = ecx ^ MEM32(ebx + 0xEC);
    if (TEST_NZ(LO8(ecx), 0xF)) goto loc_00538B09; /* jne: not equal / not zero */

loc_00538AF7: ;
    MEM32(0x549AA4) = esi;
    MEM32(eax) = 0x41E20;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538B09: ;
    if (TEST_NZ(LO8(ecx), 0xF0)) goto loc_00538B20; /* jne: not equal / not zero */

loc_00538B0E: ;
    MEM32(0x549AA8) = esi;
    MEM32(eax) = 0x41E24;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00538B20: ;
    if (TEST_NZ(edi, edi)) goto loc_00538B43; /* jne: not equal / not zero */

loc_00538B24: ;
    esi = MEM32(ebp + 8);
    MEM32(eax) = 0xC181C;
    ebx = MEM32(esi);
    ecx = eax + 4;
    MEM32(ecx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(ecx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(ecx + 8) = esi;
    eax = eax + 0x10;

loc_00538B43: ;
    ecx = MEM32(ebp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    ecx = ecx + 0x10;
    edi++;
    eax--;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + -8) = eax;
    if ((eax != 0)) goto loc_005388D1; /* jne: not equal / not zero */

loc_00538B5C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00538B5E: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538B70
 * Original: 0x00538B70 - 0x00538BBB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00538B70: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) { sub_00538BBB(); return; } /* jne: not equal / not zero */

loc_00538B77: ;
    ecx = MEM32(esi + 0xC);
    eax = ZX8(MEM8(esi + 0xD));
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    if (CMP_EQ(eax, 0xC)) goto loc_00538BB7; /* je: equal / zero */

loc_00538B90: ;
    if (CMP_LE(eax, 0xD)) goto loc_00538BA2; /* jle: less or equal (signed <=) */

loc_00538B95: ;
    if (CMP_G(eax, 0xF)) goto loc_00538BA2; /* jg: greater (signed >) */

loc_00538B9A: ;
    eax = edx * 4;
    esp += 4; return; /* ret */

loc_00538BA2: ;
    eax = ZX8(MEM8(esi + 0xD));
    eax = ZX8(MEM8(eax + 0x545CD0));
    eax = eax & 0x3C;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax >> 3;
    esp += 4; return; /* ret */

loc_00538BB7: ;
    eax = edx + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00538BD0
 * Original: 0x00538BD0 - 0x00538C33 (99 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538BD0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00538BD0: ;
    ecx = ZX8(MEM8(edx + 0xD));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x545CD0));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    PUSH32(esp, edi);
    eax = eax & 0x3C;
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    if (CMP_EQ(ecx, 0xC)) goto loc_00538BF7; /* je: equal / zero */

loc_00538BED: ;
    if (CMP_LE(ecx, 0xD)) goto loc_00538BF9; /* jle: less or equal (signed <=) */

loc_00538BF2: ;
    if (CMP_G(ecx, 0xF)) goto loc_00538BF9; /* jg: greater (signed >) */

loc_00538BF7: ;
    SET_LO8(eax, 1);

loc_00538BF9: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 2;
    if (TEST_NZ(esi, esi)) { sub_00538C33(); return; } /* jne: not equal / not zero */

loc_00538C04: ;
    edx = MEM32(edx + 0xC);
    ecx = edx;
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    if (CMP_BE(eax, ecx)) goto loc_00538C15; /* jbe: below or equal (unsigned <=) */

loc_00538C13: ;
    ecx = eax;

loc_00538C15: ;
    edx = edx >> 0x18;
    edx = edx & 0xF;
    if (CMP_A(eax, edx)) goto loc_00538C21; /* ja: above (unsigned >) */

loc_00538C1F: ;
    eax = edx;

loc_00538C21: ;
    ecx = ecx + eax;
    eax = 1;
    eax = eax << LO8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    eax = eax >> 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00538C50
 * Original: 0x00538C50 - 0x00538C74 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538C50: ;
    eax = MEM32(0x5499E8);
    edx = MEM32(eax + 0x1A18);
    ecx = MEM32(edx + 0x10);
    if (TEST_NZ(ecx, ecx)) { sub_00538C74(); return; } /* jne: not equal / not zero */

loc_00538C62: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    g_seh_ebp = ebp; sub_00538C7D(); return; /* tail jmp 0x00538C7D */

}

/**
 * sub_00538D50
 * Original: 0x00538D50 - 0x00538D7D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538D50(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538D50: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_00538D64: ;
    eax = MEM32(edi + 0x1DE4);
    ebp = edi + 0x1C28;
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    eax = ebp + ecx * 4;
    g_seh_ebp = ebp; sub_00538D80(); return; /* tail jmp 0x00538D80 */

}

/**
 * sub_00538E00
 * Original: 0x00538E00 - 0x00538F14 (276 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538E00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(ebx, edi)) goto loc_00538E23; /* jne: not equal / not zero */

loc_00538E17: ;
    eax = MEM32(ebp + 0x1A04);
    MEM32(esp + 0x20) = eax;
    ebx = eax;

loc_00538E23: ;
    eax = MEM32(ebx);
    if (TEST_NZ(eax, 0x780000)) goto loc_00538E45; /* jne: not equal / not zero */

loc_00538E2C: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00538E45; /* jne: not equal / not zero */

loc_00538E38: ;
    eax = MEM32(ebx + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_00538E45; /* je: equal / zero */

loc_00538E3F: ;
    MEM32(eax) = MEM32(eax) + 0x80000;

loc_00538E45: ;
    MEM32(ebx) = MEM32(ebx) + 0x80000;
    eax = MEM32(ebp + 0x1A04);
    if (CMP_EQ(eax, edi)) goto loc_00538E6F; /* je: equal / zero */

loc_00538E55: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, edi)) goto loc_00538E5E; /* je: equal / zero */

loc_00538E5C: ;
    eax = ecx;

loc_00538E5E: ;
    ecx = MEM32(ebp + 0x2C);
    MEM32(eax + 8) = ecx;
    esi = MEM32(ebp + 0x1A04);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_00538E6F: ;
    eax = MEM32(ebp + 0x1A08);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x1A04) = ebx;
    if (CMP_EQ(eax, edi)) goto loc_00538E99; /* je: equal / zero */

loc_00538E7F: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, edi)) goto loc_00538E88; /* je: equal / zero */

loc_00538E86: ;
    eax = ecx;

loc_00538E88: ;
    edx = MEM32(ebp + 0x2C);
    MEM32(eax + 8) = edx;
    esi = MEM32(ebp + 0x1A08);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_00538E99: ;
    esi = MEM32(esp + 0x24);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + 0x1A08) = esi;
    if (CMP_EQ(esi, edi)) goto loc_00538EE7; /* je: equal / zero */

loc_00538EA7: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0x780000)) goto loc_00538EC9; /* jne: not equal / not zero */

loc_00538EB0: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00538EC9; /* jne: not equal / not zero */

loc_00538EBC: ;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_00538EC9; /* je: equal / zero */

loc_00538EC3: ;
    MEM32(eax) = MEM32(eax) + 0x80000;

loc_00538EC9: ;
    MEM32(esi) = MEM32(esi) + 0x80000;
    eax = ebp + 0x948;
    ecx = esi;
    PUSH32(esp, 0); sub_0053FAC0(); /* call 0x0053FAC0 */

loc_00538EDC: ;
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_00538EE1: ;
    MEM32(ebp + 0x94C) = eax;

loc_00538EE7: ;
    eax = MEM32(ebp);
    if (CMP_B(eax, MEM32(ebp + 4))) goto loc_00538EFE; /* jb: below (unsigned <) */

loc_00538EEF: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00538EFE: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    edx = eax;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(esi, edi)) { g_seh_ebp = ebp; sub_00538F14(); return; } /* je: equal / zero */

loc_00538F0B: ;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00538F18(); return; /* tail jmp 0x00538F18 */

}

/**
 * sub_005390C0
 * Original: 0x005390C0 - 0x00539194 (212 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005390C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005390C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    (void)0; /* test eax, 0x780000 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    if (TEST_NZ(eax, 0x780000)) goto loc_005390F0; /* jne: not equal / not zero */

loc_005390D7: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_005390F0; /* jne: not equal / not zero */

loc_005390E3: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_005390F0; /* je: equal / zero */

loc_005390EA: ;
    MEM32(eax) = MEM32(eax) + 0x80000;

loc_005390F0: ;
    MEM32(ebp) = MEM32(ebp) + 0x80000;
    eax = MEM32(edi + 0x1A04);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_00539106; /* je: equal / zero */

loc_00539104: ;
    eax = ecx;

loc_00539106: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = ecx;
    esi = MEM32(edi + 0x1A04);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_00539117: ;
    eax = MEM32(edi + 0x1A08);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x1A04) = ebp;
    if (CMP_EQ(eax, esi)) goto loc_00539145; /* je: equal / zero */

loc_00539129: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, esi)) goto loc_00539132; /* je: equal / zero */

loc_00539130: ;
    eax = ecx;

loc_00539132: ;
    edx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = edx;
    esi = MEM32(edi + 0x1A08);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_00539143: ;
    esi = 0; /* xor self */

loc_00539145: ;
    eax = MEM32(edi);
    (void)0; /* cmp eax, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 0x1A08) = ebx;
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_00539161; /* jb: below (unsigned <) */

loc_00539152: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00539161: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    ecx = MEM32(ebp + 4);
    MEM32(eax) = 0x40210;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x40210;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ebx, esi)) { sub_00539194(); return; } /* jne: not equal / not zero */

loc_0053917B: ;
    MEM32(eax + 0x10) = 0x4030C;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = 0x4032C;
    MEM32(eax + 0x1C) = esi;
    eax = eax + 0x20;
    g_seh_ebp = ebp; sub_005391FD(); return; /* tail jmp 0x005391FD */

}

/**
 * sub_00539230
 * Original: 0x00539230 - 0x00539283 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539230: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    ebp = ZX8(MEM8(esi + 0xD));
    SET_LO8(ebx, MEM8(ebp + 0x545CD0));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, edi);
    eax = eax >> 3;
    eax = eax & 7;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_00539258: ;
    esi = MEM32(esp + 0x54);
    edi = eax;
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_00539263: ;
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(LO8(ebx), 1)) { sub_00539283(); return; } /* jne: not equal / not zero */

loc_0053926A: ;
    if (CMP_EQ(ebp, 0xC)) { sub_00539283(); return; } /* je: equal / zero */

loc_0053926F: ;
    if (CMP_LE(ebp, 0xD)) goto loc_00539279; /* jle: less or equal (signed <=) */

loc_00539274: ;
    if (CMP_LE(ebp, 0xF)) { sub_00539283(); return; } /* jle: less or equal (signed <=) */

loc_00539279: ;
    MEM32(esp + 0x14) = 0;
    g_seh_ebp = ebp; sub_0053928B(); return; /* tail jmp 0x0053928B */

}

/**
 * sub_00539580
 * Original: 0x00539580 - 0x005395B6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00539580: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x1A04);
    if (TEST_Z(ecx, ecx)) goto loc_005395B3; /* je: equal / zero */

loc_0053958F: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_005395B1; /* jne: not equal / not zero */

loc_00539598: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_005395B1; /* jne: not equal / not zero */

loc_005395A4: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_005395B1; /* je: equal / zero */

loc_005395AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_005395B1: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_005395B3: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005395C0
 * Original: 0x005395C0 - 0x005395D2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005395C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005395C0: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x1A08);
    if (TEST_NZ(ecx, ecx)) { sub_005395D2(); return; } /* jne: not equal / not zero */

loc_005395CF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00539600
 * Original: 0x00539600 - 0x0053970E (270 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539600(void)
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

loc_00539600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx << 6;
    PUSH32(esp, edi);
    edi = ecx + ebx + 0xC60;
    ecx = 0x10;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    ecx = MEM32(eax * 4 + 0x546190);
    esi = esi | ecx;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(0x5499F0) = esi;
    if (CMP_NE(eax, 1)) goto loc_0053970A; /* jne: not equal / not zero */

loc_0053963C: ;
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    esi = 0x3F800000;
    fp_push(MEMF(edx + 0x28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00539690; /* jnp: not parity */

loc_00539650: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00539690; /* jnp: not parity */

loc_00539662: ;
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [edx + 0x3c] */
    MEMF(ebx + 0x93C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0x940) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_005396A0;

loc_00539690: ;
    MEM32(ebx + 0x93C) = 0;
    MEM32(ebx + 0x940) = esi;

loc_005396A0: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = eax & 0xFFFFFFFDu;
    MEM32(ebx + 8) = eax;
    ecx = eax;
    MEMF(ebx + 0x944) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005396FE; /* jp: parity */

loc_005396CF: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005396FE; /* jp: parity */

loc_005396E1: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005396FE; /* jp: parity */

loc_005396F3: ;
    if (CMP_NE(MEM32(edx + 0x3C), esi)) goto loc_005396FE; /* jne: not equal / not zero */

loc_005396F8: ;
    ecx = ecx | 2;
    MEM32(ebx + 8) = ecx;

loc_005396FE: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00539703: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0053970A: ;
    POP32(esp, edi);
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
 * sub_00539710
 * Original: 0x00539710 - 0x00539926 (534 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539710(void)
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

loc_00539710: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    if (TEST_Z(ecx, ecx)) goto loc_005398F2; /* je: equal / zero */

loc_00539726: ;
    eax = MEM32(esi + 0x1A14);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1A04);
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ebp, eax)) goto loc_0053973E; /* jne: not equal / not zero */

loc_00539738: ;
    ebp = MEM32(esi + 0x1A18);

loc_0053973E: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    MEM32(esp + 0xC) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ebx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00539779; /* jne: not equal / not zero */

loc_00539763: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x20);
    goto loc_00539782;

loc_00539779: ;
    edi = eax;
    edi = edi & 0xFFF;
    edi++;

loc_00539782: ;
    ecx = MEM32(ecx + 8);
    edx = edx + ecx;
    if (CMP_B(edx, edi)) goto loc_005397AA; /* jb: below (unsigned <) */

loc_0053978B: ;
    if (TEST_NZ(eax, eax)) goto loc_005397A1; /* jne: not equal / not zero */

loc_0053978F: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    goto loc_005397AA;

loc_005397A1: ;
    edx = eax;
    edx = edx & 0xFFF;
    edx++;

loc_005397AA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(eax, eax)) goto loc_005397C1; /* jne: not equal / not zero */

loc_005397B0: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    edx = 1;
    ecx = ecx & 0xF;
    edx = edx << LO8(ecx);
    goto loc_005397CD;

loc_005397C1: ;
    edx = eax;
    edx = edx >> 0xC;
    edx = edx & 0xFFF;
    edx++;

loc_005397CD: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 0xC);
    ecx = ecx + ebx;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_AE(ecx, edx)) goto loc_005397DF; /* jae: above or equal (unsigned >=) */

loc_005397DB: ;
    eax = ecx;
    goto loc_005397FD;

loc_005397DF: ;
    if (TEST_NZ(eax, eax)) goto loc_005397F4; /* jne: not equal / not zero */

loc_005397E3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_005397FD;

loc_005397F4: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;

loc_005397FD: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_00539811; /* jge: greater or equal (signed >=) */

loc_0053980B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539811: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esi + 0x954);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053982C: ;
    if (CMP_BE(eax, edx)) goto loc_00539853; /* jbe: below or equal (unsigned <=) */

loc_00539830: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00539842; /* jge: greater or equal (signed >=) */

loc_0053983C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539842: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539851: ;
    edi = eax;

loc_00539853: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00539865; /* jge: greater or equal (signed >=) */

loc_0053985F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539865: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esi + 0x958);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539880: ;
    if (CMP_BE(eax, edx)) goto loc_005398A7; /* jbe: below or equal (unsigned <=) */

loc_00539884: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00539896; /* jge: greater or equal (signed >=) */

loc_00539890: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539896: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_005398A5: ;
    ecx = eax;

loc_005398A7: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    edi = edi - eax;
    MEM32(esi + 0xEE0) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = ecx - edx;
    MEM32(esi + 0xEE8) = edi;
    MEM32(esi + 0xEE4) = edx;
    MEM32(esi + 0xEEC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0xEF0) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xEF4) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0x100;
    POP32(esp, edi);
    MEM32(0x5499F0) = eax;
    POP32(esp, ebp);

loc_005398F2: ;
    conker_trace_point(0x53D7F001);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_005398FD: ;
    conker_trace_point(0x53D7F002);
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00539902: ;
    conker_trace_point(0x53D7F003);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00539918; /* jb: below (unsigned <) */

loc_00539909: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00539918: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0053991D: ;
    conker_trace_point(0x53D7F004);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00539930
 * Original: 0x00539930 - 0x0053995F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539930(void)
{

loc_00539930: ;
    ecx = MEM32(0x5499E8);
    ecx = ecx + 0xEE0;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00539960
 * Original: 0x00539960 - 0x005399FF (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539960: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + esi * 4 + 0xF88);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_005399A4; /* je: equal / zero */

loc_00539986: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_005399A4; /* jne: not equal / not zero */

loc_0053999F: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_005399A4: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(ebx + esi * 4 + 0xF88) = ebp;
    if (TEST_NZ(ebp, ebp)) {
        g_seh_ebp = ebp;
        sub_005399FF();
        return;
    } /* jne: not equal / not zero */

loc_005399AF: ;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_005399C5; /* jb: below (unsigned <) */

loc_005399B6: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005399C5: ;
    edx = esi;
    edx = edx << 6;
    edx = edx + 0x41B0C;
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(ebx) = eax;
    eax = MEM32(0x5499F0);
    POP32(esp, edi);
    MEM32(ebx + esi * 4 + 0xC) = 0x80000000u;
    POP32(esp, esi);
    eax = eax | 0x4800;
    POP32(esp, ebp);
    MEM32(0x5499F0) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539B10
 * Original: 0x00539B10 - 0x00539B35 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00539B10: ;
    eax = MEM32(0x547540);
    eax = eax + 0xC;
    if (CMP_AE(eax, MEM32(0x547544))) { sub_00539B35(); return; } /* jae: above or equal (unsigned >=) */

loc_00539B20: ;
    MEM32(0x547540) = eax;
    MEM32(eax + -12) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539B40
 * Original: 0x00539B40 - 0x00539B61 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539B40: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) { sub_00539B61(); return; } /* je: equal / zero */

loc_00539B51: ;
    MEM32(ebx) = MEM32(ebx) + 0x80000;
    eax = MEM32(ebx + 4);
    MEM32(0x54A898) = eax;
    g_seh_ebp = ebp; sub_00539B6B(); return; /* tail jmp 0x00539B6B */

}

/**
 * sub_00539BA0
 * Original: 0x00539BA0 - 0x00539BD9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539BA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00539BA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 8;
    eax = MEM32(ebx + edi * 4 + 0x7D4);
    if (TEST_NZ(eax, eax)) { sub_00539BD9(); return; } /* jne: not equal / not zero */

loc_00539BBB: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00539BCA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + edi * 4 + 0x7D4) = eax;
    if (TEST_NZ(eax, eax)) { sub_00539BD9(); return; } /* jne: not equal / not zero */

loc_00539BD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00539C00
 * Original: 0x00539C00 - 0x00539C13 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00539C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00539BA0(); /* call 0x00539BA0 */

loc_00539C06: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_00539C13(); return; } /* jne: not equal / not zero */

loc_00539C0C: ;
    eax = 0x8007000Eu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539C60
 * Original: 0x00539C60 - 0x00539C93 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00539C60: ;
    eax = MEM32(0x5499E8);
    edx = MEM32(eax + 0x1DE8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    if (TEST_Z(MEM32(eax + 0x1DDC), 0x1200000)) { sub_00539C93(); return; } /* je: equal / zero */

loc_00539C7E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1DF8);
    edx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    edx++;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539CA0
 * Original: 0x00539CA0 - 0x00539D28 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539CA0: ;
    esp = esp - 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    ebx = ecx;
    if (TEST_Z(eax, eax)) { sub_00539D28(); return; } /* je: equal / zero */

loc_00539CB2: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) { sub_00539D28(); return; } /* je: equal / zero */

loc_00539CB9: ;
    esi = MEM32(eax + 8);
    edx = MEM32(eax);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    if (TEST_S(edx, edx)) goto loc_00539CD7; /* js: sign (negative) */

loc_00539CD3: ;
    eax = 0; /* xor self */
    esi = 0; /* xor self */

loc_00539CD7: ;
    PUSH32(esp, ebp);
    ebp = ebx + ebx * 2;
    edi = edi + ebp * 8 + 0x1AC0;
    ebp = edi;
    edi = MEM32(esp + 0x18);
    MEM32(ebp) = edx;
    PUSH32(esp, eax);
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = edi;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, edx);
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x5499E8);
    ecx = ecx & 0xFFFFFFF;
    eax = eax + 0x1C28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0054085F(); /* call 0x0054085F */

loc_00539D20: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00539D70
 * Original: 0x00539D70 - 0x00539E67 (247 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D70(void)
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

loc_00539D70: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx + 0x95C);
    ecx = MEM32(ebx + 0x960);
    PUSH32(esp, ebp);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebx);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(ecx, eax)) goto loc_00539DAB; /* jb: below (unsigned <) */

loc_00539D9A: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00539DA9: ;
    ecx = eax;

loc_00539DAB: ;
    esi = MEM32(esp + 0x20);
    if (TEST_NZ(esi, esi)) { sub_00539E67(); return; } /* jne: not equal / not zero */

loc_00539DB7: ;
    eax = MEM32(ebx + 0xEE0);
    fp_push((double)SMEM32(ebx + 0xEE0)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00539DCD; /* jge: greater or equal (signed >=) */

loc_00539DC7: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539DCD: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539DE0: ;
    edx = MEM32(ebx + 0xEE4);
    fp_push((double)SMEM32(ebx + 0xEE4)); /* fild */
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = eax;
    if (CMP_GE(edx & edx, 0)) goto loc_00539DF8; /* jge: greater or equal (signed >=) */

loc_00539DF2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539DF8: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539E0B: ;
    fp_push((double)SMEM32(ebx + 0xEE8)); /* fild */
    esi = eax;
    eax = MEM32(ebx + 0xEE8);
    if (CMP_GE(eax & eax, 0)) goto loc_00539E23; /* jge: greater or equal (signed >=) */

loc_00539E1D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539E23: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539E36: ;
    fp_push((double)SMEM32(ebx + 0xEEC)); /* fild */
    edx = eax;
    eax = MEM32(ebx + 0xEEC);
    if (CMP_GE(eax & eax, 0)) goto loc_00539E4E; /* jge: greater or equal (signed >=) */

loc_00539E48: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00539E4E: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539E61: ;
    ebp = MEM32(esp + 0x28);
    g_seh_ebp = ebp; sub_00539EE2(); return; /* tail jmp 0x00539EE2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053A060
 * Original: 0x0053A060 - 0x0053A0A1 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A060(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053A060: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_0053A082: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x7FFFFFF);
    PUSH32(esp, 0);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B0), _icall_esp); /* indirect call */
    }

loc_0053A09A: ;
    if (TEST_NZ(eax, eax)) { sub_0053A0A1(); return; } /* jne: not equal / not zero */

loc_0053A09E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053A0E0
 * Original: 0x0053A0E0 - 0x0053A117 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A0E0: ;
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561154), _icall_esp); /* indirect call */
    }

loc_0053A0F0: ;
    if (TEST_Z(eax, eax)) goto loc_0053A103; /* je: equal / zero */

loc_0053A0F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610BC), _icall_esp); /* indirect call */
    }

loc_0053A0FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56115C), _icall_esp); /* indirect call */
    }

loc_0053A103: ;
    eax = MEM32(ebp + 0x938);
    if (TEST_NZ(eax, eax)) { sub_0053A117(); return; } /* jne: not equal / not zero */

loc_0053A10D: ;
    eax = 0x80004005u;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0053A240
 * Original: 0x0053A240 - 0x0053A27A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A240(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053A240: ;
    ecx = MEM32(0x54A8AC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x5499E8);
    if (TEST_Z(ecx, ecx)) goto loc_0053A257; /* je: equal / zero */

loc_0053A24F: ;
    if (CMP_EQ(MEM32(0x54A8A4), esi)) goto loc_0053A279; /* je: equal / zero */

loc_0053A257: ;
    eax = MEM32(eax + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561158), _icall_esp); /* indirect call */
    }

loc_0053A269: ;
    MEM32(0x54A8AC) = 1;
    MEM32(0x54A8A4) = esi;

loc_0053A279: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053A280
 * Original: 0x0053A280 - 0x0053A2CD (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A280(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0053A280: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = MEM32(0x5499E8);
    MEMF(esi + 0xEF8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0xEFC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0053A2AC: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053A2C2; /* jb: below (unsigned <) */

loc_0053A2B3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053A2C2: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0053A2C7: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053A2D0
 * Original: 0x0053A2D0 - 0x0053A329 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A2D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0053A2F4; /* jb: below (unsigned <) */

loc_0053A2E5: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053A2F4: ;
    if (TEST_NZ(MEM8(ebx + 8), 0x10)) goto loc_0053A309; /* jne: not equal / not zero */

loc_0053A2FA: ;
    edi = ebx + 0x197C;
    ecx = 0x20;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0053A309: ;
    MEM32(eax) = 0x801480;
    edi = eax + 4;
    esi = ebp;
    ecx = 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + 0x84;
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053A330
 * Original: 0x0053A330 - 0x0053A361 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053A330: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx & 0xFF000000u;
    (void)0; /* cmp ecx, 0x89000000u - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    if (CMP_NE(ecx, 0x89000000u)) { sub_0053A361(); return; } /* jne: not equal / not zero */

loc_0053A34B: ;
    ecx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFF;
    eax = MEM32(eax * 4 + 0x5499F8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053A570
 * Original: 0x0053A570 - 0x0053A590 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053A570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx & 0x1F;
    ecx = ecx >> 2;
    if (CMP_G(edx, ecx)) { sub_0053A590(); return; } /* jg: greater (signed >) */

loc_0053A58C: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_0053A5F6(); return; /* tail jmp 0x0053A5F6 */

}

/**
 * sub_0053A600
 * Original: 0x0053A600 - 0x0053A68E (142 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053A600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    PUSH32(esp, 0); sub_005433B0(); /* call 0x005433B0 */

loc_0053A617: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053A62D; /* jb: below (unsigned <) */

loc_0053A61E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053A62D: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0xBCC);
    ebx = ebx + ecx;
    ecx = MEM32(esi + 0xBD0);
    eax = eax + 8;
    edx = edx | 0x800;
    ecx = ecx + edi;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0xC54);
    eax = esi + 0xBD4;
    MEM32(ebp + -12) = ecx;
    MEM32(eax + edx * 8 + -4) = ecx;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_A(ecx, 0x10)) { sub_0053A68E(); return; } /* ja: above (unsigned >) */

loc_0053A684: ;
    eax = 0x10;
    MEM32(ebp + 0x14) = eax;
    g_seh_ebp = ebp; sub_0053A6A1(); return; /* tail jmp 0x0053A6A1 */

}

/**
 * sub_0053A7B0
 * Original: 0x0053A7B0 - 0x0053A82C (124 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0053A7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_005433B0(); /* call 0x005433B0 */

loc_0053A7C7: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053A7DD; /* jb: below (unsigned <) */

loc_0053A7CE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053A7DD: ;
    edx = MEM32(ebp + 8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0xBCC);
    edi = MEM32(esi + 8);
    ecx = ecx + edx;
    edx = MEM32(esi + 0xC54);
    eax = eax + 8;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    edi = edi | 0x800;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    eax = esi + 0xBD4;
    MEM32(esi + 8) = edi;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = edx;
    if (CMP_A(ecx, 0x10)) { sub_0053A82C(); return; } /* ja: above (unsigned >) */

loc_0053A822: ;
    eax = 0x10;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0053A840(); return; /* tail jmp 0x0053A840 */

}

/**
 * sub_0053A930
 * Original: 0x0053A930 - 0x0053A9F5 (197 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edi = eax;
    ebx = ecx;
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053A946: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    esi = edi + -1;
    esi = esi >> 8;
    esi++;
    edx = eax + esi * 4 + 0x14;
    ecx = ecx + 0x200;
    if (CMP_B(edx, ecx)) goto loc_0053A989; /* jb: below (unsigned <) */

loc_0053A966: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = esi * 4 + 0x218;
    if (CMP_BE(edx, ecx)) goto loc_0053A97D; /* jbe: below or equal (unsigned <=) */

loc_0053A97B: ;
    ecx = edx;

loc_0053A97D: ;
    if (CMP_BE(edx, eax)) goto loc_0053A983; /* jbe: below or equal (unsigned <=) */

loc_0053A981: ;
    eax = edx;

loc_0053A983: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053A989: ;
    edx = MEM32(esp + 0x14);
    esi = esi << 0x12;
    MEM32(eax) = 0x417FC;
    esi = esi + 0x40001810;
    (void)0; /* cmp edi, 0x100 - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    if (CMP_BE(edi, 0x100)) goto loc_0053A9D1; /* jbe: below or equal (unsigned <=) */

loc_0053A9AA: ;
    ecx = edi + -257;
    ecx = ecx >> 8;
    ecx++;

loc_0053A9B4: ;
    edx = ebx;
    edx = edx | 0xFF000000u;
    MEM32(eax + 0xC) = edx;
    eax = eax + 4;
    ebx = ebx + 0x100;
    edi = edi - 0x100;
    ecx--;
    if ((ecx != 0)) goto loc_0053A9B4; /* jne: not equal / not zero */

loc_0053A9D1: ;
    edi--;
    edi = edi << 0x18;
    edi = edi | ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = 0x417FC;
    POP32(esp, edi);
    MEM32(eax + 0x14) = 0;
    eax = eax + 0x18;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AA00
 * Original: 0x0053AA00 - 0x0053ACD1 (721 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_0053AA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053AA1B: ;
    ebx = MEM32(esi + 8);
    ecx = MEM32(0x5499E8);
    ebx = ebx | 0x800;
    MEM32(esi + 8) = ebx;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = ecx + 0x200;
    edx = eax + 0x824;
    if (CMP_B(edx, ecx)) goto loc_0053AA6B; /* jb: below (unsigned <) */

loc_0053AA42: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0xA28)) goto loc_0053AA59; /* jae: above or equal (unsigned >=) */

loc_0053AA54: ;
    ecx = 0xA28;

loc_0053AA59: ;
    if (CMP_AE(eax, 0xA28)) goto loc_0053AA65; /* jae: above or equal (unsigned >=) */

loc_0053AA60: ;
    eax = 0xA28;

loc_0053AA65: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053AA6B: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(eax) = 0x417FC;
    ebx = eax + 8;
    MEM32(eax + 4) = ecx;
    eax = ebx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax >> 2;
    eax = eax & 7;
    ecx = eax + eax + 0x3E;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + 8) = ebx;
    if (CMP_B(edx, ecx)) goto loc_0053AC57; /* jb: below (unsigned <) */

loc_0053AA97: ;
    if (TEST_Z(eax, eax)) goto loc_0053AAD8; /* je: equal / zero */

loc_0053AA9B: ;
    eax--;
    ecx = eax;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001800;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    edi = edi + 4;
    ecx = MEM32(ebp + 0xC);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x10);
    ecx = eax * 4;
    esi = esi + ecx;
    eax = (uint32_t)(-(int32_t)eax);
    ebx = ebx + ecx + 4;
    edx = edx + eax * 2;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = edx;

loc_0053AAD8: ;
    eax = 0x804021;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 9;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3FE);
    edx = eax;
    edx = edx - ecx;
    if (CMP_B(edx, 0x3E)) goto loc_0053AB05; /* jb: below (unsigned <) */

loc_0053AAFC: ;
    edx = edx >> 1;
    edx++;
    edx = edx & 0xFFFFFFF0u;
    edx--;
    goto loc_0053AB0A;

loc_0053AB05: ;
    edx = 0x1FF;

loc_0053AB0A: ;
    MEM32(ebp + -4) = edx;
    /* nop */

loc_0053AB10: ;
    eax = edx;
    eax = eax << 0x12;
    eax = eax + 0x40001800;
    MEM32(ebx) = eax;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx - 0xF;
    ecx = ecx >> 4;
    /* TODO: prefetchnta byte ptr [esi + 0x3c] */
    /* TODO: prefetchnta byte ptr [esi + 0x5c] */
    eax = MEM32(esi);
    /* SSE: movq mm1, qword ptr [esi + 4] */
    /* SSE: movq mm2, qword ptr [esi + 0xc] */
    /* SSE: movq mm3, qword ptr [esi + 0x14] */
    /* SSE: movq mm4, qword ptr [esi + 0x1c] */
    /* SSE: movq mm5, qword ptr [esi + 0x24] */
    /* SSE: movq mm6, qword ptr [esi + 0x2c] */
    /* SSE: movq mm7, qword ptr [esi + 0x34] */
    /* nop */
    /* nop */
    MEM32(edi + 4) = eax;
    /* TODO: movntq qword ptr [edi + 8], mm1 */
    /* TODO: movntq qword ptr [edi + 0x10], mm2 */
    /* TODO: movntq qword ptr [edi + 0x18], mm3 */
    /* TODO: movntq qword ptr [edi + 0x20], mm4 */
    /* TODO: movntq qword ptr [edi + 0x28], mm5 */
    /* TODO: movntq qword ptr [edi + 0x30], mm6 */
    /* TODO: movntq qword ptr [edi + 0x38], mm7 */
    esi = esi + 0x3C;
    edi = edi + 0x40;
    goto loc_0053AB80;

    /* nop */

loc_0053AB80: ;
    /* TODO: prefetchnta byte ptr [esi + 0x40] */
    /* TODO: prefetchnta byte ptr [esi + 0x60] */
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* SSE: movq mm2, qword ptr [esi + 0x10] */
    /* SSE: movq mm3, qword ptr [esi + 0x18] */
    /* SSE: movq mm4, qword ptr [esi + 0x20] */
    /* SSE: movq mm5, qword ptr [esi + 0x28] */
    /* SSE: movq mm6, qword ptr [esi + 0x30] */
    /* SSE: movq mm7, qword ptr [esi + 0x38] */
    /* nop */
    /* nop */
    /* TODO: movntq qword ptr [edi], mm0 */
    /* TODO: movntq qword ptr [edi + 8], mm1 */
    /* TODO: movntq qword ptr [edi + 0x10], mm2 */
    /* TODO: movntq qword ptr [edi + 0x18], mm3 */
    /* TODO: movntq qword ptr [edi + 0x20], mm4 */
    /* TODO: movntq qword ptr [edi + 0x28], mm5 */
    /* TODO: movntq qword ptr [edi + 0x30], mm6 */
    /* TODO: movntq qword ptr [edi + 0x38], mm7 */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ecx--;
    if ((ecx != 0)) goto loc_0053AB80; /* jne: not equal / not zero */

loc_0053ABD1: ;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    eax = edx * 4;
    edx = (uint32_t)(-(int32_t)edx);
    edx = ecx + edx * 2;
    ecx = MEM32(ebp + -8);
    esi = esi + eax;
    eax = eax + ebx + 4;
    MEM32(ecx) = eax;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    edx = edx + 0x200;
    ecx = eax + 0x810;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + 0x10) = esi;
    if (CMP_B(ecx, edx)) goto loc_0053AC38; /* jb: below (unsigned <) */

loc_0053AC0F: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0xA14)) goto loc_0053AC26; /* jae: above or equal (unsigned >=) */

loc_0053AC21: ;
    ecx = 0xA14;

loc_0053AC26: ;
    if (CMP_AE(eax, 0xA14)) goto loc_0053AC32; /* jae: above or equal (unsigned >=) */

loc_0053AC2D: ;
    eax = 0xA14;

loc_0053AC32: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053AC38: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp eax, 0x3FE - flags set for next jcc */
    edx = 0x1FF;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_AE(eax, 0x3FE)) goto loc_0053AB10; /* jae: above or equal (unsigned >=) */

loc_0053AC53: ;
    /* emms - empty MMX state */
    edx = eax;

loc_0053AC57: ;
    eax = edx;
    eax = eax >> 1;
    ecx = eax;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001800;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    edi = edi + 4;
    ecx = MEM32(ebp + 0xC);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x10);
    eax = eax << 2;
    ecx = ecx + eax;
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    ebx = ebx + eax + 4;
    POP32(esp, edi);
    if (TEST_Z(LO8(edx), 1)) goto loc_0053AC9A; /* je: equal / zero */

loc_0053AC8B: ;
    eax = ZX16(MEM16(ecx));
    MEM32(ebx) = 0x41808;
    MEM32(ebx + 4) = eax;
    ebx = ebx + 8;

loc_0053AC9A: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebx) = 0x417FC;
    MEM32(ebx + 4) = 0;
    eax = MEM32(ecx + 8);
    ebx = ebx + 8;
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0053ACCB; /* je: equal / zero */

loc_0053ACC4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053ACCB: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053ACE0
 * Original: 0x0053ACE0 - 0x0053AD36 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053ACE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053ACE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0053AD02; /* jb: below (unsigned <) */

loc_0053ACF3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053AD02: ;
    edx = MEM32(esp + 0xC);
    ecx = edx * 4 + 0x41940;
    edx = ZX8(MEM8(esp + 0x12));
    MEM32(eax) = ecx;
    ecx = esi;
    ecx = ecx & 0xFF;
    ecx = ecx << 0x10;
    esi = esi & 0xFF00FF00u;
    edx = edx | ecx;
    edx = edx | esi;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053AD40
 * Original: 0x0053AD40 - 0x0053AD8B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AD40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053AD40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053AD5D; /* jb: below (unsigned <) */

loc_0053AD4E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053AD5D: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0053AD8A; /* je: equal / zero */

loc_0053AD83: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053AD8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053AD90
 * Original: 0x0053AD90 - 0x0053AE21 (145 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053AD90: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    /* nop */

loc_0053ADA0: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 8);
    eax = ecx;
    eax = eax & 0xFFFFFFF;
    eax++;
    (void)0; /* test ecx, 0x20000000 - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(edx) = eax;
    if (TEST_Z(ecx, 0x20000000)) goto loc_0053ADFB; /* je: equal / zero */

loc_0053ADBB: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0053ADFB; /* je: equal / zero */

loc_0053ADCC: ;
    /* nop */

loc_0053ADD0: ;
    edi = MEM32(eax + 4);
    ebp = MEM32(esp + 0x10);
    edi = edi + ebp;
    ecx = edx;
    ebp = ecx;
    eax = eax + 8;
    ecx = ecx >> 2;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    eax = eax + edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = MEM32(eax);
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_0053ADD0; /* jne: not equal / not zero */

loc_0053ADF7: ;
    ecx = MEM32(esp + 0x14);

loc_0053ADFB: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_0053AE11; /* jns: not sign (positive) */

loc_0053AE09: ;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(ebx) = ecx;

loc_0053AE11: ;
    ebx = eax;
    eax++;
    if (CMP_A(eax, 1)) goto loc_0053ADA0; /* ja: above (unsigned >) */

loc_0053AE19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0053AE30
 * Original: 0x0053AE30 - 0x0053B13D (781 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AE30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053AE30: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053AE46: ;
    edx = MEM32(esp + 0x44);
    if (((int32_t)(MEM32(edx) - 0) < 0)) goto loc_0053B0DB; /* js: sign (negative) */

loc_0053AE53: ;
    ebx = MEM32(edx + 0xC);
    edi = MEM32(edx + 4);
    ebx = ebx - 4;
    eax = edi + ebx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x48);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(eax, eax)) goto loc_0053AE8B; /* je: equal / zero */

loc_0053AE73: ;
    ebp = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    ecx = ecx + ebp;
    MEM32(esp + 0x10) = 0x20000000;
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;

loc_0053AE8B: ;
    SET_LO8(eax, MEM8(esi + 8));
    ecx = MEM32(esi + 4);
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    eax = MEM32(esi);
    if (TEST_NZ(LO8(eax), 4)) goto loc_0053B076; /* jne: not equal / not zero */

loc_0053AE9B: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(eax, ecx)) goto loc_0053AEBA; /* jb: below (unsigned <) */

loc_0053AEA3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053AEB2: ;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = eax;

loc_0053AEBA: ;
    ecx = MEM32(esi + 0x30);
    ecx = MEM32(ecx);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx - MEM32(edx + 8);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x1C);
    ecx = ecx - edx;
    edx = MEM32(esp + 0x28);
    if (CMP_B(edx, ecx)) goto loc_0053AF35; /* jb: below (unsigned <) */

loc_0053AEE3: ;
    ecx = MEM32(esp + 0x14);
    edx = edi;
    edx = edx & 0xFFFFFFF;
    eax = eax + 4;
    edx++;
    MEM32(eax + -4) = edx;
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0xFFFFFFF;
    eax = eax | ebp;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x2C;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0); sub_0053AD90(); /* call 0x0053AD90 */

loc_0053AF26: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esp + 0x44);
    MEM32(eax + 0x14) = edx;
    goto loc_0053B02F;

loc_0053AF35: ;
    ecx = edi;
    ecx = ecx & 0xFFFFFFF;
    MEM32(eax) = 0x40100;
    MEM32(eax + 4) = 0;
    ecx++;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0xC;
    eax = MEM32(esi + 0x4C);
    eax = eax & 0x3F;
    edx = eax + eax * 4;
    ebx = esi + edx * 4 + 0x264;
    (void)0; /* test MEM32(ebx), 0x40000000 - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(MEM32(ebx), 0x40000000)) goto loc_0053AF8D; /* jne: not equal / not zero */

loc_0053AF6D: ;
    ecx = ecx & 0xFFFFFFF;
    ecx = ecx | 0xC0000000u;
    ebp = ebp | ecx;
    MEM32(esp + 0x10) = ebp;
    ebp = eax;
    ebp = ebp << 5;
    ebp = ebp | 0xD;
    eax++;
    MEM32(esi + 0x4C) = eax;
    goto loc_0053AFAA;

loc_0053AF8D: ;
    ebx = ecx;
    ecx = ecx + 0x14;
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0xFFFFFFF;
    ebp = ebp | ecx;
    MEM32(esp + 0x10) = ebp;
    ebp = ebx;
    ebp = ebp << 5;
    ebp = ebp | 0xC;

loc_0053AFAA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    eax = edi + ecx;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edx;
    MEM32(ebx + 0x10) = edi;
    eax = MEM32(esi + 0x50);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = esi + 0x50;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(eax & eax, 0)) goto loc_0053B003; /* jbe: below or equal (unsigned <=) */

loc_0053AFD9: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, MEM32(esi + 0x54))) goto loc_0053B003; /* je: equal / zero */

loc_0053AFE5: ;
    edx = MEM32(esi + 0x58);
    edx = edx + 4;
    MEM32(esp + 0x28) = edx;
    eax = 0;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (TEST_Z(eax, eax)) goto loc_0053B01E; /* je: equal / zero */

loc_0053B003: ;
    MEM32(esp + 0x28) = edi;
    eax = 1;
    ecx = MEM32(esp + 0x28);
    /* TODO: xadd dword ptr [ecx], eax */
    eax++;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) + 1;
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = ebp;

loc_0053B01E: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(esp + 0x44);
    MEM32(edx + 0x14) = ecx;
    MEM32(esi + 0x58) = ebx;
    ebx = MEM32(esp + 0x24);

loc_0053B02F: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x54A8B8);
    edx = edx + ebx;
    MEM32(esi) = eax;
    eax = edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x3C) = edx;
    if (CMP_BE(eax, ecx)) goto loc_0053B050; /* jbe: below or equal (unsigned <=) */

loc_0053B049: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053B050: ;
    edx = MEM32(esp + 0x44);

loc_0053B054: ;
    eax = MEM32(esi + 0x2C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0053B133; /* je: equal / zero */

loc_0053B066: ;
    ecx = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

loc_0053B076: ;
    if (CMP_B(eax, ecx)) goto loc_0053B08D; /* jb: below (unsigned <) */

loc_0053B07A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053B089: ;
    edx = MEM32(esp + 0x44);

loc_0053B08D: ;
    ecx = eax + 0xC;
    MEM32(eax) = 0x40100;
    ebx = ecx;
    ebx = ebx << 5;
    ebx = ebx | 0xE;
    MEM32(eax + 4) = ebx;
    ebx = edi;
    ebx = ebx & 0xFFFFFFF;
    ebx++;
    MEM32(eax + 8) = ebx;
    eax = ecx + 0x14;
    ebx = eax;
    ebx = ebx & 0xFFFFFFF;
    ebx = ebx | ebp;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = edi;
    MEM32(esi) = eax;
    goto loc_0053B054;

loc_0053B0DB: ;
    edi = MEM32(edx + 0xC);
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edi = edi - 4;
    edi = edi >> 2;
    ebx = eax + edi * 4;
    ecx = ecx + 0x200;
    if (CMP_B(ebx, ecx)) goto loc_0053B123; /* jb: below (unsigned <) */

loc_0053B0FC: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = edi * 4 + 0x204;
    if (CMP_BE(edx, ecx)) goto loc_0053B113; /* jbe: below or equal (unsigned <=) */

loc_0053B111: ;
    ecx = edx;

loc_0053B113: ;
    if (CMP_BE(edx, eax)) goto loc_0053B119; /* jbe: below or equal (unsigned <=) */

loc_0053B117: ;
    eax = edx;

loc_0053B119: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053B11F: ;
    edx = MEM32(esp + 0x44);

loc_0053B123: ;
    edx = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053A570(); /* call 0x0053A570 */

loc_0053B12E: ;
    eax = eax + edi * 4;
    MEM32(esi) = eax;

loc_0053B133: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053B140
 * Original: 0x0053B140 - 0x0053B1B9 (121 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B140(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B140: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053B14F: ;
    ecx = MEM32(0x5499E8);
    if (TEST_Z(ecx, ecx)) goto loc_0053B177; /* je: equal / zero */

loc_0053B159: ;
    (void)0; /* test MEM32(edi), 0x780000 - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (TEST_Z(MEM32(edi), 0x780000)) goto loc_0053B16B; /* je: equal / zero */

loc_0053B164: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    goto loc_0053B171;

loc_0053B16B: ;
    if (TEST_Z(eax, eax)) goto loc_0053B177; /* je: equal / zero */

loc_0053B16F: ;
    PUSH32(esp, 0x10);

loc_0053B171: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053B177: ;
    MEM32(esi + 0x768) = 0;
    MEM32(esi + 0x764) = edi;
    MEM32(edi) = MEM32(edi) + 0x80000;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esi + 0x770) = ecx;
    MEM32(esi + 0x76C) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 4);
    eax = ecx + edx + -516;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) | 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B1C0
 * Original: 0x0053B1C0 - 0x0053B243 (131 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B1C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053B1D1: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B260(); /* call 0x0053B260 */

loc_0053B1DB: ;
    eax = MEM32(esi + 0x764);
    edi = MEM32(eax + 4);
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x768);
    ecx = ecx - edi;
    ecx = ecx + edx + 4;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x770);
    eax = MEM32(esi + 0x76C);
    edi = MEM32(esi + 0x764);
    MEM32(esi) = edx;
    edx = MEM32(esi + 8);
    edx = edx & 0xFFFFFF7Bu;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edx;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053B230; /* jne: not equal / not zero */

loc_0053B22B: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053B230: ;
    eax = MEM32(esi + 0x768);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_0053B243(); return; } /* je: equal / zero */

loc_0053B23C: ;
    eax = 0x88760829u;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B260
 * Original: 0x0053B260 - 0x0053B320 (192 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B260: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx + 0x764);
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ecx - MEM32(eax + 4);
    eax = 0x480;
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 3);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(esi & esi, 0)) { sub_0053B320(); return; } /* jle: less or equal (signed <=) */

loc_0053B292: ;
    eax = MEM32(ebx + 8);
    if (TEST_S(LO8(eax), LO8(eax))) { sub_0053B320(); return; } /* js: sign (negative) */

loc_0053B29D: ;
    edx = MEM32(ebx);
    eax = eax | 0x80;
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebx + 4);
    ecx = edx + esi * 4 + 4;
    eax = eax + 0x200;
    if (CMP_B(ecx, eax)) goto loc_0053B2DC; /* jb: below (unsigned <) */

loc_0053B2B7: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = esi * 4 + 0x208;
    if (CMP_BE(edx, ecx)) goto loc_0053B2CE; /* jbe: below or equal (unsigned <=) */

loc_0053B2CC: ;
    ecx = edx;

loc_0053B2CE: ;
    if (CMP_BE(edx, eax)) goto loc_0053B2D4; /* jbe: below or equal (unsigned <=) */

loc_0053B2D2: ;
    eax = edx;

loc_0053B2D4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053B2DA: ;
    edx = eax;

loc_0053B2DC: ;
    ecx = esi;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40000100;
    MEM32(edx) = ecx;
    esi = esi << 2;
    PUSH32(esp, ebp);
    ecx = esi;
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx + 4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = esi + edx + 4;
    edx = MEM32(ebx + 0x764);
    MEM32(ebx) = eax;
    ecx = MEM32(edx + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax - ecx;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B330
 * Original: 0x0053B330 - 0x0053B445 (277 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B330: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x54A8B0);
    eax = eax + edi;
    if (TEST_Z(ecx, ecx)) goto loc_0053B36B; /* je: equal / zero */

loc_0053B343: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    ebx = MEM32(ecx + 0x14);
    eax = eax + edx;
    edx = edx + 0x90;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ecx + 0x10) = edx;
    if (CMP_A(edx, ebx)) goto loc_0053B440; /* ja: above (unsigned >) */

loc_0053B35F: ;
    MEM32(eax) = 0x88;
    MEM32(eax + 4) = edi;
    eax = eax + 8;

loc_0053B36B: ;
    if (TEST_Z(eax, eax)) goto loc_0053B440; /* je: equal / zero */

loc_0053B373: ;
    MEM32(eax) = 0x401720;
    MEM32(eax + 0x44) = 0x401760;
    ecx = eax + 0x48;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x1B;
    edi = 4;
    PUSH32(esp, ebp);

loc_0053B390: ;
    edx = MEM32(eax + -8);
    ebp = MEM32(eax + -4);
    edx = edx + edx * 2;
    ebx = MEM32(esi + edx * 4);
    ebp = ebp + MEM32(ebx + 4);
    ebx = MEM32(esi + edx * 4 + 8);
    edx = esi + edx * 4;
    ebp = ebp + ebx;
    MEM32(ecx + -68) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(eax);
    edx = edx << 8;
    edx = edx + ebp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 0xC);
    edx = edx + edx * 2;
    ebx = MEM32(esi + edx * 4);
    ebp = ebp + MEM32(ebx + 4);
    ebx = MEM32(esi + edx * 4 + 8);
    edx = esi + edx * 4;
    ebp = ebp + ebx;
    MEM32(ecx + -64) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(eax + 0x10);
    edx = edx << 8;
    edx = edx + ebp;
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x18);
    ebp = MEM32(eax + 0x1C);
    edx = edx + edx * 2;
    ebx = MEM32(esi + edx * 4);
    ebp = ebp + MEM32(ebx + 4);
    ebx = MEM32(esi + edx * 4 + 8);
    edx = esi + edx * 4;
    ebp = ebp + ebx;
    MEM32(ecx + -60) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(eax + 0x20);
    edx = edx << 8;
    edx = edx + ebp;
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x28);
    ebp = MEM32(eax + 0x2C);
    edx = edx + edx * 2;
    ebx = MEM32(esi + edx * 4);
    ebp = ebp + MEM32(ebx + 4);
    ebx = MEM32(esi + edx * 4 + 8);
    edx = esi + edx * 4;
    ebp = ebp + ebx;
    MEM32(ecx + -56) = ebp;
    edx = MEM32(edx + 4);
    ebx = MEM32(eax + 0x30);
    edx = edx << 8;
    edx = edx + ebx;
    MEM32(ecx + 0xC) = edx;
    ecx = ecx + 0x10;
    eax = eax + 0x40;
    edi--;
    if ((edi != 0)) goto loc_0053B390; /* jne: not equal / not zero */

loc_0053B43F: ;
    POP32(esp, ebp);

loc_0053B440: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B450
 * Original: 0x0053B450 - 0x0053B504 (180 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B450: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x54A8B0);
    eax = eax + ebp;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0053B49D; /* je: equal / zero */

loc_0053B46B: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    ebx = MEM32(esi + 0x10);
    eax = eax + edx;
    edx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    edx = edx * 4 + 3;
    edx = edx << 2;
    ebx = edx + 8;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + ebx;
    ebx = MEM32(ecx + 0x10);
    if (CMP_A(ebx, MEM32(ecx + 0x14))) goto loc_0053B4FD; /* ja: above (unsigned >) */

loc_0053B495: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ebp;
    eax = eax + 8;

loc_0053B49D: ;
    if (TEST_Z(eax, eax)) goto loc_0053B4FD; /* je: equal / zero */

loc_0053B4A1: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    ebx = edi + 0x206C;
    ebx = ebx << 6;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0053B4FD; /* je: equal / zero */

loc_0053B4BF: ;
    esi = ZX8(MEM8(esi + 0x13));
    edx = ecx;
    ecx = ecx & 0xFFF;
    edx = edx >> 0xC;
    ecx++;
    edx = edx & 0xFFF;
    edx++;
    esi++;
    edi = edi << 6;
    esi = esi << 6;
    ebx = edi + 0x41B10;
    esi = esi << 0x10;
    edi = edi + 0x41B1C;
    ecx = ecx << 0x10;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = esi;
    ecx = ecx | edx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = ecx;

loc_0053B4FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B510
 * Original: 0x0053B510 - 0x0053B5BC (172 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    edx = MEM32(ecx + 4);
    ebx = ebx << 2;
    edi = edi + 8;
    esi = ebx + 0xF;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x54A8B0);
    esi = esi >> 4;
    edx = edx + edi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(eax, eax)) goto loc_0053B562; /* je: equal / zero */

loc_0053B53D: ;
    ebp = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    edx = esi + ebx;
    edx = edx << 2;
    ecx = ecx + ebp;
    esi = edx + 8;
    ebp = ebp + esi;
    esi = ebp;
    MEM32(eax + 0x10) = ebp;
    if (CMP_A(esi, MEM32(eax + 0x14))) goto loc_0053B5B4; /* ja: above (unsigned >) */

loc_0053B55A: ;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edi;
    edx = ecx + 8;

loc_0053B562: ;
    if (TEST_Z(edx, edx)) goto loc_0053B5B4; /* je: equal / zero */

loc_0053B566: ;
    (void)0; /* cmp ebx, 0x10 - flags set for next jcc */
    eax = ebx;
    if (CMP_B(ebx, 0x10)) goto loc_0053B572; /* jb: below (unsigned <) */

loc_0053B56D: ;
    eax = 0x10;

loc_0053B572: ;
    esi = MEM32(esp + 0x18);
    ecx = eax;
    ecx = ecx << 0x12;
    ecx = ecx + 0xB80;
    MEM32(edx) = ecx;
    ebx = ebx - eax;
    eax = eax << 2;
    ecx = eax;
    ebp = ecx;
    ecx = ecx >> 2;
    edi = edx + 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    edx = edx + eax + 4;
    eax = MEM32(esp + 0x10);
    eax--;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0053B566; /* jne: not equal / not zero */

loc_0053B5B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B5C0
 * Original: 0x0053B5C0 - 0x0053B619 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B5C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B5C0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(0x54A8B0);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_0053B5F2; /* je: equal / zero */

loc_0053B5CF: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    eax = eax + edx;
    edx = edx + 0x10;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(ecx + 0x10) = edx;
    POP32(esp, edi);
    if (CMP_A(edx, edi)) goto loc_0053B616; /* ja: above (unsigned >) */

loc_0053B5E6: ;
    MEM32(eax) = 8;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0053B5F2: ;
    if (TEST_Z(eax, eax)) goto loc_0053B616; /* je: equal / zero */

loc_0053B5F6: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx * 4 + 0x5B1108);
    ecx = MEM32(esp + 8);
    edx = edx & 0xFFFBFFFFu;
    edx = edx + 0x40000;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;

loc_0053B616: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053B620
 * Original: 0x0053B620 - 0x0053B67A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B620: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x54A8B0);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_0053B652; /* je: equal / zero */

loc_0053B62F: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x14);
    eax = eax + edx;
    edx = edx + 0xC;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    MEM32(ecx + 0x10) = edx;
    POP32(esp, ebp);
    if (CMP_A(edx, ebp)) { sub_0053B67A(); return; } /* ja: above (unsigned >) */

loc_0053B646: ;
    MEM32(eax) = 4;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0053B652: ;
    if (TEST_Z(eax, eax)) { sub_0053B67A(); return; } /* je: equal / zero */

loc_0053B656: ;
    if (CMP_NE(esi, ebx)) goto loc_0053B662; /* jne: not equal / not zero */

loc_0053B65A: ;
    MEM32(eax) = 0x40100;
    goto loc_0053B671;

loc_0053B662: ;
    edx = MEM32(edi + 4);
    edx = edx & 0xFFFFFFF;
    edx = edx + ebx + 1;
    MEM32(eax) = edx;

loc_0053B671: ;
    if (TEST_NZ(ecx, ecx)) { sub_0053B67A(); return; } /* jne: not equal / not zero */

loc_0053B675: ;
    g_seh_ebp = ebp; sub_0053C630(); return; /* tail jmp 0x0053C630 */

}

/**
 * sub_0053B680
 * Original: 0x0053B680 - 0x0053B6C6 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B680(void)
{

loc_0053B680: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0053B6AC: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0053B6BF: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B6D0
 * Original: 0x0053B6D0 - 0x0053B71B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B6D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x54A8B4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x54A8B4;
    if (TEST_Z(esi, esi)) goto loc_0053B715; /* je: equal / zero */

loc_0053B6E6: ;
    if (CMP_NE(MEM32(esi + 4), ebp)) goto loc_0053B70D; /* jne: not equal / not zero */

loc_0053B6EB: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    if (TEST_Z(MEM8(esi + 0x1C), 1)) goto loc_0053B6FE; /* je: equal / zero */

loc_0053B6F5: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_0053B6FE: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B709: ;
    esi = MEM32(edi);
    goto loc_0053B711;

loc_0053B70D: ;
    edi = esi;
    esi = MEM32(esi);

loc_0053B711: ;
    if (TEST_NZ(esi, esi)) goto loc_0053B6E6; /* jne: not equal / not zero */

loc_0053B715: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B720
 * Original: 0x0053B720 - 0x0053B7CA (170 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B720: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0x70000;
    if (CMP_NE(esi, 0x50000)) goto loc_0053B737; /* jne: not equal / not zero */

loc_0053B733: ;
    if (((int32_t)(eax & eax) >= 0)) goto loc_0053B73E; /* jns: not sign (positive) */

loc_0053B737: ;
    eax = edi;
    PUSH32(esp, 0); sub_0053C570(); /* call 0x0053C570 */

loc_0053B73E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B6D0(); /* call 0x0053B6D0 */

loc_0053B744: ;
    if (CMP_NE(esi, 0x50000)) goto loc_0053B771; /* jne: not equal / not zero */

loc_0053B74C: ;
    if (((int32_t)(MEM32(edi) - 0) >= 0)) goto loc_0053B7BD; /* jns: not sign (positive) */

loc_0053B751: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    eax = eax | 0x80000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B764: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B76F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053B771: ;
    if (CMP_NE(esi, 0x20000)) goto loc_0053B799; /* jne: not equal / not zero */

loc_0053B779: ;
    if (((int32_t)(MEM32(edi) - 0) < 0)) goto loc_0053B7BD; /* js: sign (negative) */

loc_0053B77E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B78C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B797: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053B799: ;
    if (CMP_EQ(esi, 0x10000)) goto loc_0053B7BD; /* je: equal / zero */

loc_0053B7A1: ;
    if (CMP_EQ(esi, 0x60000)) goto loc_0053B7BD; /* je: equal / zero */

loc_0053B7A9: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    edx = edx | 0x80000000u;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B7BD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053B7C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B7D0
 * Original: 0x0053B7D0 - 0x0053B820 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B7D0: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x780000;
    (void)0; /* cmp ecx, 0x80000 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ecx, 0x80000)) { sub_0053B820(); return; } /* jne: not equal / not zero */

loc_0053B7E3: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053B80E; /* jne: not equal / not zero */

loc_0053B7EF: ;
    edi = MEM32(esi + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0053B80E; /* je: equal / zero */

loc_0053B7F6: ;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053B80E; /* jne: not equal / not zero */

loc_0053B809: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053B80E: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0xFFFF)) { sub_0053B820(); return; } /* jne: not equal / not zero */

loc_0053B817: ;
    edi = esi;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053B81E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B830
 * Original: 0x0053B830 - 0x0053B867 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0053B857; /* jne: not equal / not zero */

loc_0053B83E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053B857; /* jne: not equal / not zero */

loc_0053B84A: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053B857; /* je: equal / zero */

loc_0053B851: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0053B857: ;
    edx = MEM32(esi);
    edx++;
    eax = edx;
    MEM32(esi) = edx;
    eax = eax & 0xFFFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B870
 * Original: 0x0053B870 - 0x0053B8B1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B870: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) { sub_0053B8B1(); return; } /* jne: not equal / not zero */

loc_0053B884: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053B89D; /* jne: not equal / not zero */

loc_0053B890: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053B89D; /* je: equal / zero */

loc_0053B897: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053B89D: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) { sub_0053B8B1(); return; } /* jne: not equal / not zero */

loc_0053B8A6: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053B8AB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B8C0
 * Original: 0x0053B8C0 - 0x0053B8F0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B8C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B8C0: ;
    eax = MEM32(ecx);
    eax = eax & 0x70000;
    if (CMP_A(eax, 0x30000)) { sub_0053B8F0(); return; } /* ja: above (unsigned >) */

loc_0053B8CE: ;
    if (CMP_EQ(eax, 0x30000)) goto loc_0053B8EA; /* je: equal / zero */

loc_0053B8D0: ;
    if (TEST_Z(eax, eax)) goto loc_0053B8E4; /* je: equal / zero */

loc_0053B8D4: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x10000 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0x10000)) ? 1 : 0); /* setne */
    ecx = ecx + 7;
    eax = ecx;
    esp += 4; return; /* ret */

loc_0053B8E4: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0053B8EA: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_0053B940
 * Original: 0x0053B940 - 0x0053B9BB (123 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B940(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B940: ;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0x70000;
    (void)0; /* cmp edx, 0x50000 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    if (CMP_NE(edx, 0x50000)) goto loc_0053B975; /* jne: not equal / not zero */

loc_0053B959: ;
    edx = MEM32(ecx + 0x14);
    if (TEST_Z(edx, edx)) goto loc_0053B975; /* je: equal / zero */

loc_0053B960: ;
    if (TEST_NZ(eax, 0x780000)) goto loc_0053B9B4; /* jne: not equal / not zero */

loc_0053B967: ;
    if (TEST_Z(edx, edx)) goto loc_0053B973; /* je: equal / zero */

loc_0053B96B: ;
    if (TEST_NZ(MEM32(edx), 0x780000)) goto loc_0053B9B4; /* jne: not equal / not zero */

loc_0053B973: ;
    ecx = edx;

loc_0053B975: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0x780000)) goto loc_0053B9B4; /* jne: not equal / not zero */

loc_0053B97E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053B999; /* jne: not equal / not zero */

loc_0053B98A: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053B999; /* je: equal / zero */

loc_0053B991: ;
    if (TEST_NZ(MEM32(eax), 0x780000)) goto loc_0053B9B4; /* jne: not equal / not zero */

loc_0053B999: ;
    edx = MEM32(ecx + 8);
    if (TEST_Z(edx, edx)) { sub_0053B9BB(); return; } /* je: equal / zero */

loc_0053B9A0: ;
    eax = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(edi + 0x2C);
    edi = eax;
    eax = eax - esi;
    edi = edi - edx;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(edi, eax)) { sub_0053B9BB(); return; } /* jae: above or equal (unsigned >=) */

loc_0053B9B4: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
