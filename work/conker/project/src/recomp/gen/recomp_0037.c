/**
 * Burnout 3 - Recompiled code chunk 37
 * Functions: 250 (0x00330500 - 0x00343870)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00330500
 * Original: 0x00330500 - 0x00330593 (147 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330500: ;
    eax = 0x4000;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0033050A: ;
    eax = MEM32(esp + 0x4004);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0033058B; /* jle: less or equal (signed <=) */

loc_00330518: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00330520: ;
    ecx = MEM32(ebx + ebp * 8);
    if (TEST_Z(ecx, ecx)) goto loc_0033057D; /* je: equal / zero */

loc_00330527: ;
    eax = ecx;
    esi = eax + 1;
    /* nop */

loc_00330530: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00330530; /* jne: not equal / not zero */

loc_00330537: ;
    PUSH32(esp, 0x2000);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4E4);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_00330551: ;
    ecx = MEM32(0x84A6A0);
    edi = MEM32(0x84A69C);
    esi = ebx + ebp * 8 + 4;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0033056D: ;
    esp = esp + 0xC;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0033057D; /* jne: not equal / not zero */

loc_00330575: ;
    edx = MEM32(0x74A500);
    MEM32(esi) = edx;

loc_0033057D: ;
    eax = MEM32(esp + 0x4010);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00330520; /* jl: less (signed <) */

loc_00330589: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0033058B: ;
    POP32(esp, ebp);
    esp = esp + 0x4000;
    esp += 4; return; /* ret */

}

/**
 * sub_003305A0
 * Original: 0x003305A0 - 0x003305C1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003305A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003305A0: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    PUSH32(esp, ecx);
    if (CMP_NE(edx, 1)) { sub_003305C1(); return; } /* jne: not equal / not zero */

loc_003305B1: ;
    eax = MEM32(eax * 4 + 0x74A66C);
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_003305BD: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003305E0
 * Original: 0x003305E0 - 0x00330605 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003305E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003305E0: ;
    eax = 0; /* xor self */
    ecx = edx + 0x58;
    PUSH32(esp, esi);

loc_003305E6: ;
    if (CMP_EQ(MEM32(ecx), 8)) goto loc_003305F7; /* je: equal / zero */

loc_003305EB: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, 8)) goto loc_003305E6; /* jl: less (signed <) */

loc_003305F4: ;
    eax = eax | 0xFFFFFFFFu;

loc_003305F7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = MEM32(eax + edx + 0x5C);
    PUSH32(esp, 0); sub_00331A30(); /* call 0x00331A30 */

loc_00330603: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330610
 * Original: 0x00330610 - 0x00330651 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330610: ;
    eax = MEM32(0x6BD92C);
    edx = MEM32(eax + 4);
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00330636; /* je: equal / zero */

loc_00330623: ;
    if (CMP_NE(MEM32(eax + 0x50), esi)) goto loc_0033062F; /* jne: not equal / not zero */

loc_00330628: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_00330638; /* je: equal / zero */

loc_0033062D: ;
    ecx = eax;

loc_0033062F: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00330623; /* jne: not equal / not zero */

loc_00330636: ;
    eax = ecx;

loc_00330638: ;
    if (TEST_Z(eax, eax)) goto loc_00330650; /* je: equal / zero */

loc_0033063C: ;
    ecx = MEM32(eax + edi * 4 + 0x58);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    eax = MEM32(eax + edi * 4 + 0x64);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;

loc_00330650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330660
 * Original: 0x00330660 - 0x003306C5 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330660: ;
    eax = MEM32(0x6BD92C);
    edx = MEM32(eax + 4);
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0033068B; /* je: equal / zero */

loc_00330678: ;
    if (CMP_NE(MEM32(eax + 0x50), edi)) goto loc_00330684; /* jne: not equal / not zero */

loc_0033067D: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_0033068D; /* je: equal / zero */

loc_00330682: ;
    ecx = eax;

loc_00330684: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00330678; /* jne: not equal / not zero */

loc_0033068B: ;
    eax = ecx;

loc_0033068D: ;
    if (TEST_Z(eax, eax)) goto loc_003306C3; /* je: equal / zero */

loc_00330691: ;
    ecx = MEM32(esp + 8);
    if (CMP_NE(MEM32(ecx + 0x70), 0x75)) goto loc_003306B0; /* jne: not equal / not zero */

loc_0033069B: ;
    edx = MEM32(eax + esi * 8 + 0xF8);
    MEM32(ebp) = edx;
    eax = MEM32(eax + esi * 8 + 0xFC);
    MEM32(ebx) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003306B0: ;
    ecx = MEM32(eax + esi * 8 + 0x108);
    MEM32(ebp) = ecx;
    edx = MEM32(eax + esi * 8 + 0x10C);
    MEM32(ebx) = edx;

loc_003306C3: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003306D0
 * Original: 0x003306D0 - 0x003308F2 (546 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003306D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003306D0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = MEM32(edi + 0x568);
    if (TEST_Z(ebx, ebx)) goto loc_003308EC; /* je: equal / zero */

loc_003306E7: ;
    eax = ebx;
    ecx = ZX8(MEM8(eax + 0x97));
    SET_LO8(edx, MEM8(eax + 0x2C2));
    PUSH32(esp, ebp);
    ecx = ecx & 0xFFFFFF7Fu;
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(LO8(edx), 1)) goto loc_0033072C; /* jb: below (unsigned <) */

loc_00330709: ;
    eax = ZX8(MEM8(ebx + 0x2C1));
    if (TEST_NZ(eax, eax)) goto loc_00330725; /* jne: not equal / not zero */

loc_00330714: ;
    edx = MEM32(ebx + 0x3F4);
    if (CMP_NE(MEM32(edx + 8), 1)) goto loc_00330725; /* jne: not equal / not zero */

loc_00330720: ;
    eax = 7;

loc_00330725: ;
    ebp = MEM32(eax * 4 + 0x75EAF4);

loc_0033072C: ;
    SET_LO8(eax, MEM8(ebx + 0x38D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00330738; /* je: equal / zero */

loc_00330736: ;
    ebp = 0; /* xor self */

loc_00330738: ;
    esi = MEM32(ebx + 0x444);
    if (TEST_Z(esi, esi)) goto loc_003307F2; /* je: equal / zero */

loc_00330746: ;
    SET_LO8(eax, MEM8(ebx + 0x51C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00330757; /* je: equal / zero */

loc_00330750: ;
    ebp = 0; /* xor self */
    goto loc_003307F2;

loc_00330757: ;
    eax = MEM32(esi + 0x280);
    SET_LO8(edx, MEM8(eax + 3));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0033076E; /* je: equal / zero */

loc_00330764: ;
    ebp = 0x71;
    goto loc_003307F2;

loc_0033076E: ;
    SET_LO8(eax, MEM8(ebx + 0x2BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033077F; /* je: equal / zero */

loc_00330778: ;
    ebp = 0x69;
    goto loc_003307F2;

loc_0033077F: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_00330786: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003308AA; /* jne: not equal / not zero */

loc_0033078E: ;
    eax = MEM32(esi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_003307BF; /* je: equal / zero */

loc_00330798: ;
    ecx = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(ecx), 1)) goto loc_003308AA; /* je: equal / zero */

loc_003307AA: ;
    if (TEST_Z(eax, eax)) goto loc_003307BF; /* je: equal / zero */

loc_003307AE: ;
    edx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_003308AA; /* je: equal / zero */

loc_003307BF: ;
    eax = esi;
    PUSH32(esp, 0); sub_0032F560(); /* call 0x0032F560 */

loc_003307C6: ;
    ebx = MEM32(edi + 0x568);
    ebp = eax;
    if (CMP_NE(MEM32(ebx + 0xBC), 2)) goto loc_003307EE; /* jne: not equal / not zero */

loc_003307D7: ;
    SET_LO8(eax, MEM8(ebx + 0x5F8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003307EE; /* je: equal / zero */

loc_003307E1: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_003307E8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003307EE; /* je: equal / zero */

loc_003307EC: ;
    ebp = 0; /* xor self */

loc_003307EE: ;
    ecx = MEM32(esp + 0x10);

loc_003307F2: ;
    if (CMP_EQ(ebp, ecx)) goto loc_003308AA; /* je: equal / zero */

loc_003307FA: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    esi = ebp;
    PUSH32(esp, 0); sub_00330610(); /* call 0x00330610 */

loc_0033080D: ;
    esi = ZX8(MEM8(ebx + 0xB1));
    eax = MEM32(esp + 0x30);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = esp + 0x30;
    edi = ebp;
    PUSH32(esp, 0); sub_00330660(); /* call 0x00330660 */

loc_00330829: ;
    esp = esp + 0x10;
    esi = 0; /* xor self */
    edi = edi;

loc_00330830: ;
    eax = MEM32(esp + esi * 4 + 0x14);
    if (CMP_LE(eax, 0x1000)) goto loc_00330871; /* jle: less or equal (signed <=) */

loc_0033083B: ;
    ecx = MEM32(esp + 0x28);
    edx = ZX16(MEM16(ecx + 0x60));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = eax & 0xFFFFEFFFu;
    PUSH32(esp, eax);
    MEM32(esp + esi * 4 + 0x18) = eax;
    eax = MEM32(0x84A5F8);
    eax = ZX8(MEM8(edx + eax + 0x253));
    PUSH32(esp, 0x4A);
    eax = eax | 0x2000;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0033086E: ;
    esp = esp + 0xC;

loc_00330871: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_00330830; /* jl: less (signed <) */

loc_00330877: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    edx = MEM32(esp + 0x28);
    eax = ZX16(MEM16(edx + 0x60));
    ecx = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0033088D; /* je: equal / zero */

loc_00330885: ;
    ebp = ebp | 0x80;
    ecx = ebp;

loc_0033088D: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + 0x568);
    edi = MEM32(esp + 0x28);
    MEM8(eax + 0x97) = LO8(ecx);

loc_003308AA: ;
    (void)0; /* cmp MEM16(edi + 0x3AE), 0 - flags set for next jcc */
    POP32(esp, esi);
    MEM8(esp + 0x24) = 0;
    POP32(esp, ebp);
    if (CMP_NE(MEM16(edi + 0x3AE), 0)) goto loc_003308C0; /* jne: not equal / not zero */

loc_003308BB: ;
    MEM8(esp + 0x20) = 1;

loc_003308C0: ;
    eax = MEM32(edi + 0x568);
    SET_LO8(edx, MEM8(eax + 0x51C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003308DE; /* je: equal / zero */

loc_003308D6: ;
    ecx = eax;
    ecx = MEM32(ecx + 0x528);

loc_003308DE: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032F650(); /* call 0x0032F650 */

loc_003308E9: ;
    esp = esp + 8;

loc_003308EC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00330900
 * Original: 0x00330900 - 0x0033091A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330900: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00330919; /* jne: not equal / not zero */

loc_00330907: ;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, 1);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 0;
    MEM8(eax + 6) = LO8(ecx);

loc_00330919: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330920
 * Original: 0x00330920 - 0x003309A5 (133 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330920(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00330920: ;
    if (CMP_NE(MEM8(ecx + 4), 1)) goto loc_003309A2; /* jne: not equal / not zero */

loc_00330926: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_00330934; /* je: equal / zero */

loc_0033092F: ;
    if (CMP_NE(eax, 2)) goto loc_0033099B; /* jne: not equal / not zero */

loc_00330934: ;
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 / MEMF(ecx + 0x10); /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00330961; /* jbe: below or equal (unsigned <=) */

loc_0033095C: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0033096C;

loc_00330961: ;
    /* comiss xmm0, MEMF(ecx + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x18))) goto loc_0033096C; /* jbe: below or equal (unsigned <=) */

loc_00330967: ;
    xmm0 = MEMF(ecx + 0x18); /* movss */

loc_0033096C: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    MEMF(ecx + 0xC) = xmm1; /* movss */
    MEM8(ecx + 4) = LO8(edx);
    if (1 /* jp after test - parity */) goto loc_00330994; /* jp: parity */

loc_00330982: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 5) = 1;
    MEM8(ecx + 6) = 1;
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_00330994: ;
    MEM8(ecx + 5) = LO8(edx);
    MEM8(ecx + 6) = 1;

loc_0033099B: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x20) = LO8(eax);

loc_003309A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003309B0
 * Original: 0x003309B0 - 0x003309DD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003309B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003309B0: ;
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 / MEMF(ecx + 0x10); /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_003309DD(); return; } /* jbe: below or equal (unsigned <=) */

loc_003309D8: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_003309E8(); return; /* tail jmp 0x003309E8 */

}

/**
 * sub_00330A20
 * Original: 0x00330A20 - 0x00330AB0 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330A20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00330A20: ;
    SET_LO8(eax, MEM8(ecx + 7));
    SET_LO8(edx, 0); /* xor self */
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_00330A2C; /* je: equal / zero */

loc_00330A29: ;
    MEM8(ecx + 6) = LO8(edx);

loc_00330A2C: ;
    (void)0; /* cmp MEM8(ecx + 4), LO8(edx) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(MEM8(ecx + 4), LO8(edx))) goto loc_00330A77; /* je: equal / zero */

loc_00330A3A: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00330A77; /* jp: parity */

loc_00330A48: ;
    if (CMP_EQ(MEM32(ecx + 8), 2)) goto loc_00330A5E; /* je: equal / zero */

loc_00330A4E: ;
    xmm0 = MEMF(ecx + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_00330A5E: ;
    /* comiss xmm1, MEMF(ecx + 0xC) - sets EFLAGS */
    if ((xmm1 < MEMF(ecx + 0xC))) goto loc_00330AA0; /* jb: below (unsigned <) */

loc_00330A64: ;
    eax = MEM32(ecx + 0x18);
    MEMF(ecx + 0xC) = xmm1; /* movss */
    MEM32(ecx + 0x14) = eax;
    MEM8(ecx + 4) = LO8(edx);
    MEM8(ecx + 5) = LO8(edx);
    goto loc_00330A9D;

loc_00330A77: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00330AA0; /* jnp: not parity */

loc_00330A85: ;
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00330AA0; /* jb: below (unsigned <) */

loc_00330A95: ;
    MEMF(ecx + 0x14) = xmm1; /* movss */
    MEM8(ecx + 5) = LO8(ebx);

loc_00330A9D: ;
    MEM8(ecx + 6) = LO8(ebx);

loc_00330AA0: ;
    SET_LO8(eax, MEM8(ecx + 6));
    MEM8(ecx + 7) = LO8(eax);
    MEM32(0x8758D0) = MEM32(0x8758D0) ^ ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330BF0
 * Original: 0x00330BF0 - 0x00330C7E (142 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330BF0: ;
    eax = MEM32(0x84A6A8);
    if (TEST_NZ(eax, eax)) goto loc_00330C7D; /* jne: not equal / not zero */

loc_00330BFD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00330C0B; /* jne: not equal / not zero */

loc_00330C06: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00330C0B: ;
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
    if (TEST_Z(esi, esi)) goto loc_00330C55; /* je: equal / zero */

loc_00330C33: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_00330C55; /* jb: below (unsigned <) */

loc_00330C3C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00330C46: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00330C4E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00330C76; /* jne: not equal / not zero */

loc_00330C55: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00330C67: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00330C6F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00330C76; /* jne: not equal / not zero */

loc_00330C76: ;
    POP32(esp, edi);
    MEM32(0x84A6A8) = eax;
    POP32(esp, esi);

loc_00330C7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330C80
 * Original: 0x00330C80 - 0x00330EB1 (561 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330C80: ;
    esp = esp - 8;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = edi + -1;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_A(eax, 0xA)) { sub_00330EB1(); return; } /* ja: above (unsigned >) */

loc_00330CA4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x330EB8); /* switch: 11 entries, 11 targets */
    if (_jt == 0x00330CABu) goto loc_00330CAB;
    if (_jt == 0x00330D25u) goto loc_00330D25;
    if (_jt == 0x00330D40u) goto loc_00330D40;
    if (_jt == 0x00330D5Bu) goto loc_00330D5B;
    if (_jt == 0x00330DA7u) goto loc_00330DA7;
    if (_jt == 0x00330DC5u) goto loc_00330DC5;
    if (_jt == 0x00330DE3u) goto loc_00330DE3;
    if (_jt == 0x00330E01u) goto loc_00330E01;
    if (_jt == 0x00330E63u) goto loc_00330E63;
    if (_jt == 0x00330E7Du) goto loc_00330E7D;
    if (_jt == 0x00330E97u) goto loc_00330E97;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00330CAB: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330CB2: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00330CC2; /* je: equal / zero */

loc_00330CB9: ;
    PUSH32(esp, 0); sub_00330F40(); /* call 0x00330F40 */

loc_00330CBE: ;
    esi = eax;
    goto loc_00330CC4;

loc_00330CC2: ;
    esi = 0; /* xor self */

loc_00330CC4: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00330D13; /* je: equal / zero */

loc_00330CC8: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00330CCD: ;
    edx = 0x63A55C;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00330CD7: ;
    if (TEST_Z(eax, eax)) goto loc_00330D13; /* je: equal / zero */

loc_00330CDB: ;
    eax = MEM32(0x84A6A4);
    xmm1 = MEMF(eax + 0xA4); /* movss */

loc_00330CE8: ;
    /* ucomiss xmm1, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00330D13; /* jnp: not parity */

loc_00330CF5: ;
    xmm0 = MEMF(esp + 8); /* movss */

loc_00330CFB: ;
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 0x18) = xmm0; /* movss */

loc_00330D13: ;
    if (TEST_Z(esi, esi)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330D1B: ;
    MEM32(esi + 0x1C) = edi;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00330D25: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330D2C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330D37: ;
    PUSH32(esp, 0); sub_00331130(); /* call 0x00331130 */

loc_00330D3C: ;
    esi = eax;
    goto loc_00330D13;

loc_00330D40: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330D47: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330D52: ;
    PUSH32(esp, 0); sub_00331210(); /* call 0x00331210 */

loc_00330D57: ;
    esi = eax;
    goto loc_00330D13;

loc_00330D5B: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330D62: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00330D72; /* je: equal / zero */

loc_00330D69: ;
    PUSH32(esp, 0); sub_00331370(); /* call 0x00331370 */

loc_00330D6E: ;
    esi = eax;
    goto loc_00330D74;

loc_00330D72: ;
    esi = 0; /* xor self */

loc_00330D74: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00330D13; /* je: equal / zero */

loc_00330D78: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00330D7D: ;
    edx = 0x63A54C;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00330D87: ;
    if (TEST_Z(eax, eax)) goto loc_00330D13; /* je: equal / zero */

loc_00330D8B: ;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0xA8); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */
    goto loc_00330CE8;

loc_00330DA7: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330DAE: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330DB9: ;
    PUSH32(esp, 0); sub_00331490(); /* call 0x00331490 */

loc_00330DBE: ;
    esi = eax;
    goto loc_00330D13;

loc_00330DC5: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330DCC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330DD7: ;
    PUSH32(esp, 0); sub_00331500(); /* call 0x00331500 */

loc_00330DDC: ;
    esi = eax;
    goto loc_00330D13;

loc_00330DE3: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330DEA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330DF5: ;
    PUSH32(esp, 0); sub_00330EF0(); /* call 0x00330EF0 */

loc_00330DFA: ;
    esi = eax;
    goto loc_00330D13;

loc_00330E01: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330E08: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00330E18; /* je: equal / zero */

loc_00330E0F: ;
    PUSH32(esp, 0); sub_00331570(); /* call 0x00331570 */

loc_00330E14: ;
    esi = eax;
    goto loc_00330E1A;

loc_00330E18: ;
    esi = 0; /* xor self */

loc_00330E1A: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00330D13; /* je: equal / zero */

loc_00330E22: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00330E27: ;
    edx = 0x63A534;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00330E31: ;
    if (TEST_Z(eax, eax)) goto loc_00330D13; /* je: equal / zero */

loc_00330E39: ;
    edx = MEM32(0x84A6A4);
    xmm0 = MEMF(edx + 0xA0); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00330D13; /* jnp: not parity */

loc_00330E58: ;
    xmm1 = MEMF(esp + 4); /* movss */
    goto loc_00330CFB;

loc_00330E63: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330E6A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330E71: ;
    PUSH32(esp, 0); sub_003312B0(); /* call 0x003312B0 */

loc_00330E76: ;
    esi = eax;
    goto loc_00330D13;

loc_00330E7D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330E84: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330E8B: ;
    PUSH32(esp, 0); sub_00330EF0(); /* call 0x00330EF0 */

loc_00330E90: ;
    esi = eax;
    goto loc_00330D13;

loc_00330E97: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00330E9E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00330EB1(); return; } /* je: equal / zero */

loc_00330EA5: ;
    PUSH32(esp, 0); sub_003316B0(); /* call 0x003316B0 */

loc_00330EAA: ;
    esi = eax;
    goto loc_00330D13;

}

/**
 * sub_00330EF0
 * Original: 0x00330EF0 - 0x00330F37 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330EF0(void)
{
    float xmm0;

loc_00330EF0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00330F40
 * Original: 0x00330F40 - 0x00330FA9 (105 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330F40(void)
{
    float xmm0;

loc_00330F40: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    PUSH32(esp, esi);
    edx = 1;
    MEM8(eax + 5) = LO8(edx);
    esi = MEM32(0x84A6A4);
    esi = MEM32(esi + 8);
    MEM32(eax + 0x10) = esi;
    MEMF(eax + 0x14) = xmm0; /* movss */
    esi = MEM32(0x84A6A4);
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A514;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x60); /* movss */
    ecx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330FB0
 * Original: 0x00330FB0 - 0x00330FFE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330FB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x63A514;
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00330FD2; /* je: equal / zero */

loc_00330FC5: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00330FCF: ;
    esp = esp + 4;

loc_00330FD2: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi + 0x24) = 0;
    MEM32(esi) = 0x63A524;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_00330FF7; /* je: equal / zero */

loc_00330FE6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00330FF4: ;
    esp = esp + 4;

loc_00330FF7: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331000
 * Original: 0x00331000 - 0x003310F4 (244 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331000: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0); sub_00330A20(); /* call 0x00330A20 */

loc_0033100E: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_003310C5; /* jne: not equal / not zero */

loc_00331016: ;
    if (CMP_NE(MEM8(ebp + 4), 1)) goto loc_003310C5; /* jne: not equal / not zero */

loc_00331020: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0x3B0));
    if (CMP_GE(edi & edi, 0)) goto loc_00331034; /* jge: greater or equal (signed >=) */

loc_00331032: ;
    edi = 0; /* xor self */

loc_00331034: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00331042; /* jne: not equal / not zero */

loc_0033103D: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00331042: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0033108A; /* je: equal / zero */

loc_00331068: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0033108A; /* jb: below (unsigned <) */

loc_00331071: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0033107B: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00331083: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003310AB; /* jne: not equal / not zero */

loc_0033108A: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0033109C: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003310A4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003310BD; /* je: equal / zero */

loc_003310AB: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    esi = edi;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_00331720(); /* call 0x00331720 */

loc_003310BB: ;
    goto loc_003310BF;

loc_003310BD: ;
    eax = 0; /* xor self */

loc_003310BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    POP32(esp, ebx);

loc_003310C5: ;
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003310F0; /* je: equal / zero */

loc_003310CC: ;
    if (CMP_NE(MEM8(eax), 1)) { sub_003310F4(); return; } /* jne: not equal / not zero */

loc_003310D1: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003310DF: ;
    esp = esp + 4;
    ecx = ebp;
    MEM32(ebp + 0x24) = 0;
    PUSH32(esp, 0); sub_003309B0(); /* call 0x003309B0 */

loc_003310F0: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331130
 * Original: 0x00331130 - 0x00331190 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331130(void)
{
    float xmm0;

loc_00331130: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A504;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x58); /* movss */
    ecx = MEM32(ecx + 0x54);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003311E0
 * Original: 0x003311E0 - 0x0033120C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003311E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003311E0: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00330A20(); /* call 0x00330A20 */

loc_003311EB: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00331209; /* jne: not equal / not zero */

loc_003311EF: ;
    SET_LO8(eax, MEM8(ecx + 4));
    edx = MEM32(esp + 4);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 1)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    ecx = ecx & 0xFF;
    MEM8(edx + 0x180) = LO8(ecx);

loc_00331209: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331210
 * Original: 0x00331210 - 0x00331273 (99 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331210(void)
{
    float xmm0;

loc_00331210: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4B4;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x1C); /* movss */
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331280
 * Original: 0x00331280 - 0x003312A7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00331280: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63A524;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_003312A1; /* je: equal / zero */

loc_00331290: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0033129E: ;
    esp = esp + 4;

loc_003312A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003312B0
 * Original: 0x003312B0 - 0x0033131A (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003312B0(void)
{
    float xmm0;

loc_003312B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4F4;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 8) = 2;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x44); /* movss */
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331320
 * Original: 0x00331320 - 0x0033136E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00331320: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x63A4F4;
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00331342; /* je: equal / zero */

loc_00331335: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0033133F: ;
    esp = esp + 4;

loc_00331342: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi + 0x24) = 0;
    MEM32(esi) = 0x63A524;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_00331367; /* je: equal / zero */

loc_00331356: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00331364: ;
    esp = esp + 4;

loc_00331367: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331370
 * Original: 0x00331370 - 0x003313CD (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331370(void)
{
    float xmm0;

loc_00331370: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4E4;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x14); /* movss */
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003313D0
 * Original: 0x003313D0 - 0x00331481 (177 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003313D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003313D0: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00330A20(); /* call 0x00330A20 */

loc_003313DB: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0033147E; /* jne: not equal / not zero */

loc_003313E3: ;
    (void)0; /* cmp MEM8(ecx + 4), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ecx + 6));
    if (CMP_NE(MEM8(ecx + 4), 1)) goto loc_0033143A; /* jne: not equal / not zero */

loc_003313EC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033147E; /* je: equal / zero */

loc_003313F4: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB67);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00331418: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB69);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00331436: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0033143A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033147E; /* je: equal / zero */

loc_0033143E: ;
    SET_LO8(eax, MEM8(ecx + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033147E; /* jne: not equal / not zero */

loc_00331445: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB68);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00331469: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = 0xB69;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_0033147D: ;
    POP32(esp, ebx);

loc_0033147E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331490
 * Original: 0x00331490 - 0x003314F4 (100 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331490(void)
{
    float xmm0;

loc_00331490: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4D4;
    MEM32(eax + 8) = 2;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x2C); /* movss */
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331500
 * Original: 0x00331500 - 0x00331564 (100 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331500(void)
{
    float xmm0;

loc_00331500: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4D4;
    MEM32(eax + 8) = 2;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331570
 * Original: 0x00331570 - 0x003315CD (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331570(void)
{
    float xmm0;

loc_00331570: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4C4;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x38); /* movss */
    ecx = MEM32(ecx + 0x38);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003315D0
 * Original: 0x003315D0 - 0x0033164F (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003315D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003315D0: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00330A20(); /* call 0x00330A20 */

loc_003315DC: ;
    SET_LO8(ebx, 1);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0033164B; /* jne: not equal / not zero */

loc_003315E2: ;
    (void)0; /* cmp MEM8(ecx + 4), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, MEM8(ecx + 6));
    if (CMP_NE(MEM8(ecx + 4), LO8(ebx))) { sub_0033164F(); return; } /* jne: not equal / not zero */

loc_003315EA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033164B; /* je: equal / zero */

loc_003315EE: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8E8);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00331612: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8D8);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00331630: ;
    eax = esi;
    PUSH32(esp, 0); sub_003012D0(); /* call 0x003012D0 */

loc_00331637: ;
    esi = MEM32(esi + 0x564);
    if (TEST_Z(esi, esi)) goto loc_0033164A; /* je: equal / zero */

loc_00331641: ;
    edx = MEM32(esi + 4);
    MEM8(edx + 0x8C1) = LO8(ebx);

loc_0033164A: ;
    POP32(esp, esi);

loc_0033164B: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003316B0
 * Original: 0x003316B0 - 0x0033170D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003316B0(void)
{
    float xmm0;

loc_003316B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax) = 0x63A524;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 1;
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    edx = MEM32(0x84A6A4);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x63A4B4;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    ecx = MEM32(ecx + 0x48);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331710
 * Original: 0x00331710 - 0x0033171E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331710(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331710: ;
    eax = MEM32(0x7FA21C);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00330A20(); return; /* tail jmp 0x00330A20 */

}

/**
 * sub_00331720
 * Original: 0x00331720 - 0x0033176A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331720(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00331720: ;
    SET_LO16(edx, MEM16(edi + 0x3AE));
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(edx));
    ecx = esi;
    ecx = ecx - ebx;
    POP32(esp, ebx);
    if ((ecx == 0)) { sub_0033176A(); return; } /* je: equal / zero */

loc_00331732: ;
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_0033176A(); return; } /* je: equal / zero */

loc_00331737: ;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ecx & ecx, 0)) ? 1 : 0); /* setge */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(eax) = 0;
    edx = edx + edx + -1;
    MEM32(eax + 4) = edx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0033174E; /* jge: greater or equal (signed >=) */

loc_0033174C: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0033174E: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0xC) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00331770
 * Original: 0x00331770 - 0x003317D0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00331770: ;
    edx = MEM32(eax + 0x18);
    SET_LO16(ecx, MEM16(edx + 0x3AE));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_003317CA; /* je: equal / zero */

loc_0033177F: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    ecx = ZX16(LO16(ecx));
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_GE(ecx, esi)) goto loc_003317CA; /* jge: greater or equal (signed >=) */

loc_0033178B: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_003317CD; /* jne: not equal / not zero */

loc_00331790: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003317CD; /* je: equal / zero */

loc_00331797: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0x10) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_003317CD; /* jb: below (unsigned <) */

loc_003317AF: ;
    SET_LO16(ecx, ZX8(MEM8(eax + 4)));
    MEM16(edx + 0x3AE) = MEM16(edx + 0x3AE) + LO16(ecx);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x14);
    ecx--;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = edx;
    if ((ecx != 0)) goto loc_003317CD; /* jne: not equal / not zero */

loc_003317CA: ;
    MEM8(eax) = 1;

loc_003317CD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003317D0
 * Original: 0x003317D0 - 0x003317F2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003317D0(void)
{

loc_003317D0: ;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    ecx = eax + 0xC;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00331800
 * Original: 0x00331800 - 0x003318A0 (160 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    edi = edi;

loc_00331810: ;
    eax = MEM32(esi * 4 + 0x74B1B8);
    ebp = esi * 4 + 0x800580;
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    ecx = 0x63A7CC;
    PUSH32(esp, 0); sub_0005EEE0(); /* call 0x0005EEE0 */

loc_0033182B: ;
    eax = MEM32(0x74B2E8);
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_00331850; /* jne: not equal / not zero */

loc_00331837: ;
    eax = MEM32(eax * 4 + 0x74B1B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A7C0);
    PUSH32(esp, 0x17);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0033184D: ;
    esp = esp + 0xC;

loc_00331850: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 1));
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0033188C; /* jbe: below or equal (unsigned <=) */

loc_0033185C: ;
    edi = 0; /* xor self */
    edi = edi;

loc_00331860: ;
    ecx = MEM32(edi + eax + 0x1C);
    esi = edi + eax + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_0033186E: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002CB480(); /* call 0x002CB480 */

loc_00331876: ;
    eax = MEM32(ebp);
    edx = ZX8(MEM8(eax + 1));
    ebx++;
    edi = edi + 0xE4;
    if (CMP_L(ebx, edx)) goto loc_00331860; /* jl: less (signed <) */

loc_00331888: ;
    esi = MEM32(esp + 0x10);

loc_0033188C: ;
    esi++;
    (void)0; /* cmp esi, 0x4C - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 0x4C)) goto loc_00331810; /* jl: less (signed <) */

loc_0033189A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003318A0
 * Original: 0x003318A0 - 0x003318C7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003318A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003318A0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx + 0x14;
    eax = MEM32(ecx + 0x68);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003318BA; /* je: equal / zero */

loc_003318B2: ;
    eax--;
    if ((eax != 0)) goto loc_003318C4; /* jne: not equal / not zero */

loc_003318B5: ;
    eax = ecx + 0x1C;
    goto loc_003318C0;

loc_003318BA: ;
    eax = edx + 0x29C;

loc_003318C0: ;
    if (TEST_NZ(eax, eax)) { sub_003318C7(); return; } /* jne: not equal / not zero */

loc_003318C4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003318E0
 * Original: 0x003318E0 - 0x00331949 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003318E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003318E0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx;
    eax = MEM32(ecx + 0x7C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003318F9; /* je: equal / zero */

loc_003318F1: ;
    eax--;
    if ((eax != 0)) goto loc_00331948; /* jne: not equal / not zero */

loc_003318F4: ;
    edx = ecx + 0x30;
    goto loc_003318FF;

loc_003318F9: ;
    edx = edx + 0x29C;

loc_003318FF: ;
    if (TEST_Z(edx, edx)) goto loc_00331948; /* je: equal / zero */

loc_00331903: ;
    xmm0 = MEMF(ecx + 0xC4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331931; /* jnp: not parity */

loc_00331918: ;
    ecx = MEM32(esp + 4);
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(esi) = eax;
    eax = MEM32(edx + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(edx + 0x1C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

loc_00331931: ;
    ecx = MEM32(edx + 0xC);
    MEM32(esi) = ecx;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    edx = MEM32(edx + 0x1C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;

loc_00331948: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331950
 * Original: 0x00331950 - 0x003319EF (159 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331950(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00331950: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx;
    eax = MEM32(ecx + 0x7C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033196D; /* je: equal / zero */

loc_00331961: ;
    eax--;
    if ((eax != 0)) goto loc_003319EE; /* jne: not equal / not zero */

loc_00331968: ;
    edx = ecx + 0x30;
    goto loc_00331973;

loc_0033196D: ;
    edx = edx + 0x29C;

loc_00331973: ;
    if (TEST_Z(edx, edx)) goto loc_003319EE; /* je: equal / zero */

loc_00331977: ;
    xmm0 = MEMF(ecx + 0xC4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003319B6; /* jnp: not parity */

loc_0033198C: ;
    xmm0 = xmm0 - MEMF(ecx + 0xC0); /* subss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(esi) = eax;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(edx) = ecx;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

loc_003319B6: ;
    eax = MEM32(edx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003319D6; /* je: equal / zero */

loc_003319BD: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(esp + 8);
    MEM32(esi) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

loc_003319D6: ;
    eax = MEM32(edx + 8);
    MEM32(esi) = eax;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(edx) = ecx;
    MEM32(eax) = 1;

loc_003319EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003319F0
 * Original: 0x003319F0 - 0x00331A2C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003319F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003319F0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx;
    eax = MEM32(ecx + 0x7C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00331A09; /* je: equal / zero */

loc_00331A01: ;
    eax--;
    if ((eax != 0)) { sub_00331A2C(); return; } /* jne: not equal / not zero */

loc_00331A04: ;
    eax = ecx + 0x30;
    goto loc_00331A0F;

loc_00331A09: ;
    eax = edx + 0x29C;

loc_00331A0F: ;
    if (TEST_Z(eax, eax)) { sub_00331A2C(); return; } /* je: equal / zero */

loc_00331A13: ;
    edx = MEM32(eax + 8);
    if (CMP_EQ(edx, MEM32(eax + 0xC))) { sub_00331A2C(); return; } /* je: equal / zero */

loc_00331A1B: ;
    SET_LO8(edx, MEM8(ecx + 0x80));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00331A2C(); return; } /* jne: not equal / not zero */

loc_00331A25: ;
    MEM8(eax + 1) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00331A30
 * Original: 0x00331A30 - 0x00331A75 (69 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00331A30: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00331A73; /* jle: less or equal (signed <=) */

loc_00331A3C: ;
    ecx = esi + 0x30;
    /* nop */

loc_00331A40: ;
    if (CMP_NE(MEM8(ecx + 0x50), LO8(eax))) goto loc_00331A71; /* jne: not equal / not zero */

loc_00331A45: ;
    edx = MEM32(ecx + 0x4C);
    edx = edx - 0;
    if ((edx == 0)) goto loc_00331A54; /* je: equal / zero */

loc_00331A4D: ;
    edx--;
    if ((edx != 0)) goto loc_00331A61; /* jne: not equal / not zero */

loc_00331A50: ;
    edx = ecx;
    goto loc_00331A5A;

loc_00331A54: ;
    edx = esi + 0x29C;

loc_00331A5A: ;
    if (TEST_Z(edx, edx)) goto loc_00331A61; /* je: equal / zero */

loc_00331A5E: ;
    MEM8(edx + 1) = LO8(eax);

loc_00331A61: ;
    edx = MEM32(esi + 0x10);
    edi++;
    ecx = ecx + 0xD8;
    if (CMP_L(edi, edx)) goto loc_00331A40; /* jl: less (signed <) */

loc_00331A6F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00331A71: ;
    SET_LO8(eax, 0); /* xor self */

loc_00331A73: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00331A80
 * Original: 0x00331A80 - 0x00331BC8 (328 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331A80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00331A80: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx;
    eax = MEM32(ecx + 0x7C);
    eax = eax - 0;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_00331AA5; /* je: equal / zero */

loc_00331A99: ;
    eax--;
    if ((eax != 0)) goto loc_00331BBE; /* jne: not equal / not zero */

loc_00331AA0: ;
    esi = ecx + 0x30;
    goto loc_00331AAB;

loc_00331AA5: ;
    esi = edx + 0x29C;

loc_00331AAB: ;
    if (TEST_Z(esi, esi)) goto loc_00331BBE; /* je: equal / zero */

loc_00331AB3: ;
    SET_LO8(eax, MEM8(esi + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00331AFC; /* jne: not equal / not zero */

loc_00331ABD: ;
    xmm0 = MEMF(ecx + 0x84); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331BBE; /* jp: parity */

loc_00331AD2: ;
    xmm0 = MEMF(ecx + 0x98); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331BBE; /* jp: parity */

loc_00331AE7: ;
    xmm0 = MEMF(ecx + 0xA8); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331BBE; /* jp: parity */

loc_00331AFC: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00331BC8(); return; } /* je: equal / zero */

loc_00331B08: ;
    xmm0 = MEMF(ecx + 0xBC); /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331B5B; /* jnp: not parity */

loc_00331B21: ;
    xmm0 = MEMF(ecx + 0xB8); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(ecx + 0xBC) - sets EFLAGS */
    MEMF(ecx + 0xB8) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ecx + 0xBC))) goto loc_00331B46; /* jbe: below or equal (unsigned <=) */

loc_00331B3E: ;
    xmm0 = MEMF(ecx + 0xBC); /* movss */

loc_00331B46: ;
    /* ucomiss xmm0, MEMF(ecx + 0xBC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0xB8) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00331BBE; /* jp: parity */

loc_00331B5B: ;
    xmm0 = MEMF(ecx + 0xC4); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00331BC8(); return; } /* jnp: not parity */

loc_00331B6C: ;
    xmm0 = MEMF(ecx + 0xC0); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(ecx + 0xC4) - sets EFLAGS */
    MEMF(ecx + 0xC0) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ecx + 0xC4))) goto loc_00331B91; /* jbe: below or equal (unsigned <=) */

loc_00331B89: ;
    xmm0 = MEMF(ecx + 0xC4); /* movss */

loc_00331B91: ;
    /* ucomiss xmm0, MEMF(ecx + 0xC4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0xC0) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00331BC3; /* jp: parity */

loc_00331BA6: ;
    xmm0 = MEMF(ecx + 0x98); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331BBE; /* jp: parity */

loc_00331BB7: ;
    eax = edi;
    PUSH32(esp, 0); sub_003319F0(); /* call 0x003319F0 */

loc_00331BBE: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00331BC3: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00331BF0
 * Original: 0x00331BF0 - 0x00331D2E (318 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331BF0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    esi = eax + edx + 0x14;
    if (TEST_Z(esi, esi)) { sub_00331D2E(); return; } /* je: equal / zero */

loc_00331C0F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_00331C1B: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00331D2E(); return; } /* je: equal / zero */

loc_00331C26: ;
    if (TEST_Z(ebp, ebp)) goto loc_00331C58; /* je: equal / zero */

loc_00331C2A: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_Z(eax, eax)) goto loc_00331C58; /* je: equal / zero */

loc_00331C3A: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_00331C42: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00331C58; /* je: equal / zero */

loc_00331C46: ;
    eax = MEM32(esi + 0x7C);
    ecx = MEM32(esi + 0x74);
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x70) = ecx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00331C58: ;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00331C6A; /* je: equal / zero */

loc_00331C62: ;
    eax--;
    if ((eax != 0)) goto loc_00331C74; /* jne: not equal / not zero */

loc_00331C65: ;
    ebx = esi + 0x1C;
    goto loc_00331C74;

loc_00331C6A: ;
    ebx = MEM32(esp + 0x14);
    ebx = ebx + 0x29C;

loc_00331C74: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00331CB6; /* je: equal / zero */

loc_00331C7B: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00331CAF; /* je: equal / zero */

loc_00331C82: ;
    ecx = MEM32(esp + 0x18);
    eax = eax - ecx;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00331C9C; /* je: equal / zero */

loc_00331C8F: ;
    eax = MEM32(ebp + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + LO16(ecx);

loc_00331C9C: ;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x78) = edx;
    MEM8(esi + 0x80) = 1;

loc_00331CA9: ;
    eax = MEM32(esi + 0x74);
    MEM32(esi + 0x70) = eax;

loc_00331CAF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00331CB6: ;
    eax = MEM32(esi + 0x8C);
    if (TEST_NZ(eax, eax)) goto loc_00331CCB; /* jne: not equal / not zero */

loc_00331CC0: ;
    edx = MEM32(esp + 0x14);
    eax = edi;
    PUSH32(esp, 0); sub_003327D0(); /* call 0x003327D0 */

loc_00331CCB: ;
    if (TEST_Z(ebp, ebp)) goto loc_00331D00; /* je: equal / zero */

loc_00331CCF: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00331D00; /* je: equal / zero */

loc_00331CD9: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00331CEE; /* je: equal / zero */

loc_00331CE2: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x18);
    eax = eax - ecx;
    MEM32(ebx + 8) = eax;

loc_00331CEE: ;
    eax = MEM32(ebp + 0x568);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + LO16(edx);

loc_00331D00: ;
    xmm0 = MEMF(esi + 0xB0); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331CAF; /* jp: parity */

loc_00331D15: ;
    eax = MEM32(ebx + 8);
    if (TEST_NZ(eax, eax)) goto loc_00331CA9; /* jne: not equal / not zero */

loc_00331D1C: ;
    edx = MEM32(esp + 0x14);
    eax = edi;
    PUSH32(esp, 0); sub_003319F0(); /* call 0x003319F0 */

loc_00331D27: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00331D40
 * Original: 0x00331D40 - 0x00331D66 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331D40: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) { sub_00331D66(); return; } /* jne: not equal / not zero */

loc_00331D53: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) { sub_00331D66(); return; } /* je: equal / zero */

loc_00331D61: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00331D68(); return; /* tail jmp 0x00331D68 */

}

/**
 * sub_00331D90
 * Original: 0x00331D90 - 0x00331FFD (621 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331D90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_00331FFA; /* jle: less or equal (signed <=) */

loc_00331DA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x7C;
    /* nop */

loc_00331DB0: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(0x7FA21C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00332940(); /* call 0x00332940 */

loc_00331DCD: ;
    eax = MEM32(edi);
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00331DDF; /* je: equal / zero */

loc_00331DD3: ;
    eax--;
    if ((eax != 0)) goto loc_00331FDE; /* jne: not equal / not zero */

loc_00331DDA: ;
    ecx = edi + -76;
    goto loc_00331DE5;

loc_00331DDF: ;
    ecx = ebp + 0x29C;

loc_00331DE5: ;
    if (CMP_EQ(ecx, ebx)) goto loc_00331FDE; /* je: equal / zero */

loc_00331DED: ;
    MEM8(edi + 0x18) = LO8(ebx);
    if (CMP_NE(MEM32(edi), ebx)) goto loc_00331DFE; /* jne: not equal / not zero */

loc_00331DF4: ;
    edx = MEM32(esp + 0x14);
    if (CMP_NE(edx, MEM32(esp + 0x18))) goto loc_00331E64; /* jne: not equal / not zero */

loc_00331DFE: ;
    xmm1 = MEMF(edi + 0x10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(edi + 0x18) = LO8(ebx);
    if (1 /* jnp after test - parity */) goto loc_00331E15; /* jnp: not parity */

loc_00331E12: ;
    MEM8(ecx + 3) = LO8(ebx);

loc_00331E15: ;
    if (CMP_NE(MEM8(ecx + 2), LO8(ebx))) goto loc_00331E28; /* jne: not equal / not zero */

loc_00331E1A: ;
    xmm1 = MEMF(edi + 0x1C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331E2B; /* jnp: not parity */

loc_00331E28: ;
    MEM8(ecx + 2) = LO8(ebx);

loc_00331E2B: ;
    (void)0; /* cmp MEM8(ecx + 1), LO8(ebx) - flags set for next jcc */
    MEM8(ecx + 4) = LO8(ebx);
    if (CMP_EQ(MEM8(ecx + 1), LO8(ebx))) goto loc_00331E67; /* je: equal / zero */

loc_00331E33: ;
    if (CMP_EQ(MEM8(edi + 6), LO8(ebx))) goto loc_00331E41; /* je: equal / zero */

loc_00331E38: ;
    if (CMP_NE(MEM8(ebp + 0x2E4), 1)) goto loc_00331E67; /* jne: not equal / not zero */

loc_00331E41: ;
    xmm1 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331E67; /* jp: parity */

loc_00331E4F: ;
    eax = MEM32(edi + 0x20);
    MEM32(edi + 0x1C) = eax;
    MEM8(ecx + 1) = LO8(ebx);
    MEM8(ecx + 2) = 1;
    MEM8(ebp + 0x2E4) = LO8(ebx);
    goto loc_00331E67;

loc_00331E64: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00331E67: ;
    xmm1 = MEMF(edi + 0x40); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331E83; /* jp: parity */

loc_00331E75: ;
    xmm1 = MEMF(edi + 0x3C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331EBD; /* jnp: not parity */

loc_00331E83: ;
    if (CMP_NE(MEM8(esp + 0x28), 1)) goto loc_00331E98; /* jne: not equal / not zero */

loc_00331E8A: ;
    xmm1 = MEMF(edi + 0x1C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331EBD; /* jnp: not parity */

loc_00331E98: ;
    xmm1 = MEMF(edi + 0x3C); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x3C) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00331EB6; /* jbe: below or equal (unsigned <=) */

loc_00331EB3: ;
    xmm1 = xmm0; /* movaps */

loc_00331EB6: ;
    MEMF(edi + 0x3C) = xmm1; /* movss */
    goto loc_00331EC5;

loc_00331EBD: ;
    xmm2 = MEMF(0x7FA21C); /* movss */

loc_00331EC5: ;
    xmm1 = MEMF(edi + 0x1C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331F1A; /* jnp: not parity */

loc_00331ED3: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x1C) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00331EE4; /* jbe: below or equal (unsigned <=) */

loc_00331EE1: ;
    xmm1 = xmm0; /* movaps */

loc_00331EE4: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(edi + 0x1C) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_00331FDE; /* jp: parity */

loc_00331EF6: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    edx = edx + eax;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ecx + 8) = edx;
    if (CMP_LE(edx, eax)) eax = edx; /* cmovle */
    MEM32(ecx + 0x18) = 1;
    MEM32(ecx + 8) = eax;
    MEMF(edi + 0x44) = xmm0; /* movss */
    goto loc_00331FDE;

loc_00331F1A: ;
    edx = MEM32(ecx + 0x14);
    if (CMP_EQ(edx, ebx)) goto loc_00331F65; /* je: equal / zero */

loc_00331F21: ;
    xmm1 = MEMF(edi + 0x10); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331F65; /* jnp: not parity */

loc_00331F2F: ;
    if (CMP_EQ(MEM32(ecx + 0x10), edx)) goto loc_00331F65; /* je: equal / zero */

loc_00331F34: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x10) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_00331F45; /* jb: below (unsigned <) */

loc_00331F42: ;
    xmm1 = xmm0; /* movaps */

loc_00331F45: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x10) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_00331F65; /* jb: below (unsigned <) */

loc_00331F4F: ;
    eax = MEM32(ecx + 0x10);
    if (CMP_GE(eax, MEM32(ecx + 0x14))) goto loc_00331F65; /* jge: greater or equal (signed >=) */

loc_00331F57: ;
    eax++;
    MEM32(ecx + 0x10) = eax;
    edx = MEM32(edi + 0x14);
    MEM32(edi + 0x10) = edx;
    MEM8(ecx + 3) = 1;

loc_00331F65: ;
    xmm1 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331F78; /* jp: parity */

loc_00331F73: ;
    if (CMP_EQ(MEM32(edi + 0x24), ebx)) goto loc_00331FBD; /* je: equal / zero */

loc_00331F78: ;
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 8) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00331F8E; /* jbe: below or equal (unsigned <=) */

loc_00331F8B: ;
    xmm1 = xmm0; /* movaps */

loc_00331F8E: ;
    edx = MEM32(edi + 0x24);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEMF(edi + 8) = xmm1; /* movss */
    if (CMP_EQ(edx, ebx)) goto loc_00331FBD; /* je: equal / zero */

loc_00331F9A: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00331FBD; /* jp: parity */

loc_00331FA3: ;
    eax = edx + -1;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x24) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00331FBD; /* je: equal / zero */

loc_00331FAD: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(edi + 0xC);
    MEM32(edi + 0x2C) = eax;
    MEM32(edi + 8) = edx;
    MEM8(ecx + 4) = 1;

loc_00331FBD: ;
    xmm1 = MEMF(edi + 0x2C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00331FDE; /* jnp: not parity */

loc_00331FCB: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x2C) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00331FDE; /* jbe: below or equal (unsigned <=) */

loc_00331FD9: ;
    MEMF(edi + 0x2C) = xmm0; /* movss */

loc_00331FDE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x10);
    eax++;
    edi = edi + 0xD8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_00331DB0; /* jl: less (signed <) */

loc_00331FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00331FFA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00332000
 * Original: 0x00332000 - 0x0033269A (1690 bytes, 465 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332000: ;
    SET_LO8(eax, MEM8(esp + 8));
    esp = esp - 0x1C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033201A; /* je: equal / zero */

loc_0033200B: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00332010: ;
    edx = 0x5D4CBC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_0033201A: ;
    eax = MEM32(0x84B790);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0033202C: ;
    edx = eax;
    esp = esp + 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(edx, edx)) goto loc_00332044; /* je: equal / zero */

loc_00332039: ;
    ecx = 0xBA;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00332044: ;
    ecx = MEM32(esp + 0x28);
    ebx = MEM32(ecx * 4 + 0x800580);
    SET_LO8(eax, MEM8(ebx + 1));
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0033267C; /* jbe: below or equal (unsigned <=) */

loc_0033206C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x6BD92C);

loc_00332074: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ebp = eax + edx + 0x14;
    SET_LO8(eax, MEM8(esi + 0x33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003320A1; /* jne: not equal / not zero */

loc_00332087: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003320A1; /* jne: not equal / not zero */

loc_0033208E: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE4);
    if (CMP_EQ(MEM32(ecx + ebx + 0xC), 7)) goto loc_00332669; /* je: equal / zero */

loc_003320A1: ;
    eax = MEM32(esp + 0x30);
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_L(eax, 0xC)) goto loc_003320F6; /* jl: less (signed <) */

loc_003320AF: ;
    if (CMP_G(eax, 0x12)) goto loc_003320F6; /* jg: greater (signed >) */

loc_003320B4: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xE4);
    ecx = MEM32(edx + ebx + 0xC);
    if (CMP_L(ecx, 0x17)) goto loc_003320DF; /* jl: less (signed <) */

loc_003320C5: ;
    if (CMP_G(ecx, 0x1D)) goto loc_003320DF; /* jg: greater (signed >) */

loc_003320CA: ;
    eax = 0; /* xor self */
    /* nop */

loc_003320D0: ;
    if (CMP_EQ(MEM32(eax * 8 + 0x74B554), ecx)) goto loc_003320E8; /* je: equal / zero */

loc_003320D9: ;
    eax++;
    if (CMP_B(eax, 7)) goto loc_003320D0; /* jb: below (unsigned <) */

loc_003320DF: ;
    eax = 0; /* xor self */
    MEM8(esp + 0x13) = 1;
    goto loc_0033210A;

loc_003320E8: ;
    eax = MEM32(eax * 8 + 0x74B550);
    MEM8(esp + 0x13) = 1;
    goto loc_0033210A;

loc_003320F6: ;
    if (CMP_L(eax, 0x4C)) goto loc_003320FF; /* jl: less (signed <) */

loc_003320FB: ;
    eax = 0; /* xor self */
    goto loc_0033210A;

loc_003320FF: ;
    eax = MEM32(esp + 0x30);
    eax = MEM32(eax * 8 + 0x74B2F0);

loc_0033210A: ;
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(esi + 4);
    esi = eax;
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00332133; /* je: equal / zero */

loc_0033211D: ;
    /* nop */

loc_00332120: ;
    if (CMP_NE(MEM32(eax + 0x50), esi)) goto loc_0033212C; /* jne: not equal / not zero */

loc_00332125: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_00332135; /* je: equal / zero */

loc_0033212A: ;
    ecx = eax;

loc_0033212C: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00332120; /* jne: not equal / not zero */

loc_00332133: ;
    eax = ecx;

loc_00332135: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xE4);
    MEM32(ebp + 0x18) = eax;
    ecx = MEM32(edi + ebx + 0xC);
    eax = MEM32(esp + 0x30);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    edi = edi + ebx + 8;
    MEM32(ebp) = ecx;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(eax, 0x2D)) goto loc_0033218C; /* jne: not equal / not zero */

loc_0033215D: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003321F5; /* je: equal / zero */

loc_00332169: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0033216E: ;
    edx = 0x63A7A4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332178: ;
    if (TEST_Z(eax, eax)) goto loc_003321F5; /* je: equal / zero */

loc_0033217C: ;
    edx = MEM32(0x84A6A4);
    xmm0 = MEMF(edx + 0x98); /* movss */
    goto loc_003321E9;

loc_0033218C: ;
    if (CMP_NE(eax, 0xB)) goto loc_003321BB; /* jne: not equal / not zero */

loc_00332191: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003321F5; /* je: equal / zero */

loc_00332199: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0033219E: ;
    edx = 0x63A788;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003321A8: ;
    if (TEST_Z(eax, eax)) goto loc_003321F5; /* je: equal / zero */

loc_003321AC: ;
    eax = MEM32(0x84A6A4);
    xmm0 = MEMF(eax + 0x94); /* movss */
    goto loc_003321E9;

loc_003321BB: ;
    if (CMP_NE(eax, 9)) goto loc_003321F5; /* jne: not equal / not zero */

loc_003321C0: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003321F5; /* je: equal / zero */

loc_003321C8: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003321CD: ;
    edx = 0x63A76C;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003321D7: ;
    if (TEST_Z(eax, eax)) goto loc_003321F5; /* je: equal / zero */

loc_003321DB: ;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x9C); /* movss */

loc_003321E9: ;
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003321F5: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    SET_LO8(eax, MEM8(esp + 0x34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x84); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00332273; /* je: equal / zero */

loc_00332219: ;
    eax = MEM32(esp + 0x30);
    if (CMP_NE(eax, 1)) goto loc_00332242; /* jne: not equal / not zero */

loc_00332222: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00332227: ;
    edx = 0x63A758;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332231: ;
    if (TEST_Z(eax, eax)) goto loc_00332273; /* je: equal / zero */

loc_00332235: ;
    edx = MEM32(0x84A6A4);
    xmm0 = MEMF(edx + 0x78); /* movss */
    goto loc_00332267;

loc_00332242: ;
    if (CMP_NE(eax, 2)) goto loc_00332273; /* jne: not equal / not zero */

loc_00332247: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0033224C: ;
    edx = 0x63A744;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332256: ;
    if (TEST_Z(eax, eax)) goto loc_00332273; /* je: equal / zero */

loc_0033225A: ;
    eax = MEM32(0x84A6A4);
    xmm0 = MEMF(eax + 0x80); /* movss */

loc_00332267: ;
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00332273: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    MEMF(ebp + 0x7C) = xmm0; /* movss */
    ecx = MEM32(edi + 0x78);
    MEM32(ebp + 0x74) = ecx;
    edx = MEM32(edi + 8);
    MEM32(ebp + 0x68) = edx;
    SET_LO8(edx, MEM8(edi + 0xE));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x64) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x10));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x65) = LO8(ecx);
    edx = ZX8(MEM8(edi + 0x88));
    MEM32(ebp + 0x90) = edx;
    eax = MEM32(edi + 0x8C);
    MEM32(ebp + 0x98) = eax;
    ecx = MEM32(edi + 0x90);
    MEM32(ebp + 0xA0) = ecx;
    SET_LO8(eax, MEM8(edi + 0x11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x6D) = LO8(edx);
    SET_LO8(ebx, MEM8(edi + 0x12));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x6E) = LO8(eax);
    ecx = edi + 0x5C;
    eax = MEM32(ecx);
    edx = ebp + 4;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    SET_LO8(edx, MEM8(edi + 0xD));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0xB9) = LO8(edx);
    SET_LO8(ecx, MEM8(edi + 0x9C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0xB8) = LO8(eax);
    ecx = MEM32(edi + 0x94);
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xBC) = ecx;
    edx = MEM32(edi + 0x98);
    MEM32(ebp + 0xC0) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00332341; /* jne: not equal / not zero */

loc_0033233C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00332341: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_00332389; /* je: equal / zero */

loc_00332367: ;
    if (CMP_B(MEM32(esi + 0x80), 0x4C)) goto loc_00332389; /* jb: below (unsigned <) */

loc_00332370: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0033237A: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00332382: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003323FD; /* jne: not equal / not zero */

loc_00332389: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0033239B: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003323A3: ;
    ebx = MEM32(esp + 0x38);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00332401; /* jne: not equal / not zero */

loc_003323AE: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_003323B1: ;
    (void)0; /* cmp ebx, 0x48 - flags set for next jcc */
    MEM32(ebp + 0xB4) = eax;
    if (CMP_EQ(ebx, 0x48)) goto loc_003323C5; /* je: equal / zero */

loc_003323BC: ;
    if (CMP_NE(ebx, 0xB)) goto loc_0033247D; /* jne: not equal / not zero */

loc_003323C5: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033247D; /* je: equal / zero */

loc_003323D1: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003323D6: ;
    edx = 0x63A714;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003323E0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_0033247D; /* je: equal / zero */

loc_003323EB: ;
    eax = MEM32(0x84A6A4);
    xmm1 = MEMF(eax + 0xBC); /* movss */
    goto loc_00332485;

loc_003323FD: ;
    ebx = MEM32(esp + 0x30);

loc_00332401: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm2 = MEMF(edi + 0x3C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x40); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x10) = xmm2; /* movss */
    ecx = MEM32(edi + 0x44);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(edi + 0x48);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(edi + 0x4C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(edi + 0x50);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(edi + 0x54);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(eax + 0x28) = edx;
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    goto loc_003323B1;

loc_0033247D: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_00332485: ;
    xmm2 = MEMF(edi + 0x74); /* movss */
    MEMF(ebp + 0xAC) = xmm0; /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebp + 0xB0) = xmm2; /* movss */
    xmm0 = MEMF(edi + 0x70); /* movss */
    MEMF(ebp + 0xA4) = xmm0; /* movss */
    MEMF(ebp + 0xA8) = xmm0; /* movss */
    SET_LO8(eax, MEM8(edi + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x66) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0xC));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x6C) = LO8(edx);
    eax = edi + 0xD0;
    edx = MEM32(eax);
    ecx = ebp + 0xC4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(ebp + 0x68);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003325AF; /* je: equal / zero */

loc_003324FD: ;
    eax--;
    if ((eax != 0)) goto loc_00332641; /* jne: not equal / not zero */

loc_00332504: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ZX8(MEM8(edi + 0x80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033258C; /* je: equal / zero */

loc_00332513: ;
    eax = MEM32(esp + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_0033256C; /* jne: not equal / not zero */

loc_0033251B: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033258C; /* je: equal / zero */

loc_00332523: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00332528: ;
    edx = 0x63A6CC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332532: ;
    if (TEST_NZ(eax, eax)) goto loc_00332549; /* jne: not equal / not zero */

loc_00332536: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0033253B: ;
    edx = 0x63A6B4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332545: ;
    if (TEST_Z(eax, eax)) goto loc_0033258C; /* je: equal / zero */

loc_00332549: ;
    SET_LO8(eax, 1);

loc_0033254B: ;
    ecx = ZX8(MEM8(edi + 0x6C));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebp + 0x68);
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    ecx = ecx + edx;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00332590; /* je: equal / zero */

loc_00332560: ;
    eax--;
    if ((eax != 0)) goto loc_00332641; /* jne: not equal / not zero */

loc_00332567: ;
    eax = ebp + 0x1C;
    goto loc_00332599;

loc_0033256C: ;
    if (CMP_NE(eax, 1)) goto loc_0033258C; /* jne: not equal / not zero */

loc_00332571: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033258C; /* je: equal / zero */

loc_00332579: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0033257E: ;
    edx = 0x63A6B4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00332588: ;
    if (TEST_NZ(eax, eax)) goto loc_00332549; /* jne: not equal / not zero */

loc_0033258C: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0033254B;

loc_00332590: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + 0x29C;

loc_00332599: ;
    if (TEST_Z(eax, eax)) goto loc_00332641; /* je: equal / zero */

loc_003325A1: ;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = esi;
    goto loc_00332636;

loc_003325AF: ;
    eax = MEM32(esp + 0x28);
    esi = ZX8(MEM8(eax + 0x2B5));
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033260C; /* je: equal / zero */

loc_003325C2: ;
    if (CMP_NE(ebx, 4)) goto loc_003325E8; /* jne: not equal / not zero */

loc_003325C7: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003325CC: ;
    edx = 0x63A700;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003325D6: ;
    if (TEST_Z(eax, eax)) goto loc_0033260C; /* je: equal / zero */

loc_003325DA: ;
    ecx = MEM32(0x84A6A4);
    esi = MEM32(ecx + 0x8C);
    goto loc_0033260C;

loc_003325E8: ;
    if (CMP_NE(ebx, 8)) goto loc_0033260C; /* jne: not equal / not zero */

loc_003325ED: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003325F2: ;
    edx = 0x63A6E4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003325FC: ;
    if (TEST_Z(eax, eax)) goto loc_0033260C; /* je: equal / zero */

loc_00332600: ;
    edx = MEM32(0x84A6A4);
    esi = esi + MEM32(edx + 0x88);

loc_0033260C: ;
    eax = MEM32(ebp + 0x68);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033261C; /* je: equal / zero */

loc_00332614: ;
    eax--;
    if ((eax != 0)) goto loc_00332641; /* jne: not equal / not zero */

loc_00332617: ;
    eax = ebp + 0x1C;
    goto loc_00332625;

loc_0033261C: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + 0x29C;

loc_00332625: ;
    if (TEST_Z(eax, eax)) goto loc_00332641; /* je: equal / zero */

loc_00332629: ;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0x14) = 0;

loc_00332636: ;
    ecx = 1;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;

loc_00332641: ;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    esi = edi + 0x14;
    edi = ebp + 0x3C;
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x6BD92C);
    edi = MEM32(esp + 0x20);
    eax++;
    MEM32(esp + 0x24) = eax;

loc_00332669: ;
    eax = ZX8(MEM8(ebx + 1));
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (CMP_L(edi, eax)) goto loc_00332074; /* jl: less (signed <) */

loc_0033267A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0033267C: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = ecx;
    MEM32(edx + 0x10) = eax;
    (void)0; /* cmp MEM8(ebx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM8(ebx), 0)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(edx + 4) = LO8(ecx);
    eax = edx;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003326A0
 * Original: 0x003326A0 - 0x00332733 (147 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003326A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003326A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_003326EE; /* jle: less or equal (signed <=) */

loc_003326AE: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */

loc_003326B1: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx + ecx + 0xC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebx + ecx + 0x14;
    if (TEST_Z(eax, eax)) goto loc_003326D3; /* je: equal / zero */

loc_003326C2: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003326D0: ;
    esp = esp + 4;

loc_003326D3: ;
    MEM32(edi + 0xB4) = 0;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    ebp++;
    ebx = ebx + 0xD8;
    if (CMP_L(ebp, ecx)) goto loc_003326B1; /* jl: less (signed <) */

loc_003326ED: ;
    POP32(esp, ebx);

loc_003326EE: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003326F6: ;
    if (TEST_NZ(eax, eax)) goto loc_00332729; /* jne: not equal / not zero */

loc_003326FA: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00332729; /* je: equal / zero */

loc_00332700: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00332720: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00332729: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00332740
 * Original: 0x00332740 - 0x00332762 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00332740: ;
    if (CMP_L(ecx, 0x17)) goto loc_0033275F; /* jl: less (signed <) */

loc_00332745: ;
    if (CMP_G(ecx, 0x1D)) goto loc_0033275F; /* jg: greater (signed >) */

loc_0033274A: ;
    eax = 0; /* xor self */
    /* nop */

loc_00332750: ;
    if (CMP_EQ(MEM32(eax * 8 + 0x74B554), ecx)) { sub_00332762(); return; } /* je: equal / zero */

loc_00332759: ;
    eax++;
    if (CMP_B(eax, 7)) goto loc_00332750; /* jb: below (unsigned <) */

loc_0033275F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00332770
 * Original: 0x00332770 - 0x00332797 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00332770: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx + 0x14;
    eax = MEM32(ecx + 0x68);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033278A; /* je: equal / zero */

loc_00332782: ;
    eax--;
    if ((eax != 0)) goto loc_00332794; /* jne: not equal / not zero */

loc_00332785: ;
    eax = ecx + 0x1C;
    goto loc_00332790;

loc_0033278A: ;
    eax = edx + 0x29C;

loc_00332790: ;
    if (TEST_NZ(eax, eax)) { sub_00332797(); return; } /* jne: not equal / not zero */

loc_00332794: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003327A0
 * Original: 0x003327A0 - 0x003327C2 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003327A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003327A0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    xmm0 = MEMF(eax + ecx + 0x98); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003327C2(); return; } /* jnp: not parity */

loc_003327BC: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003327D0
 * Original: 0x003327D0 - 0x0033280C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003327D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003327D0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = eax + edx;
    eax = MEM32(ecx + 0x7C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003327E9; /* je: equal / zero */

loc_003327E1: ;
    eax--;
    if ((eax != 0)) goto loc_0033280B; /* jne: not equal / not zero */

loc_003327E4: ;
    edx = ecx + 0x30;
    goto loc_003327EF;

loc_003327E9: ;
    edx = edx + 0x29C;

loc_003327EF: ;
    if (TEST_Z(edx, edx)) goto loc_0033280B; /* je: equal / zero */

loc_003327F3: ;
    eax = MEM32(ecx + 0xA4);
    if (TEST_Z(eax, eax)) goto loc_0033280B; /* je: equal / zero */

loc_003327FD: ;
    edx = MEM32(edx + 8);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_LE(edx, eax)) eax = edx; /* cmovle */
    MEM32(ecx + 0xA0) = eax;

loc_0033280B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00332810
 * Original: 0x00332810 - 0x00332857 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00332810: ;
    if (TEST_Z(edx, edx)) goto loc_00332856; /* je: equal / zero */

loc_00332814: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = MEM32(eax + edx + 0x7C);
    eax = eax + edx;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0033282D; /* je: equal / zero */

loc_00332825: ;
    ecx--;
    if ((ecx != 0)) goto loc_00332856; /* jne: not equal / not zero */

loc_00332828: ;
    ecx = eax + 0x30;
    goto loc_00332833;

loc_0033282D: ;
    ecx = edx + 0x29C;

loc_00332833: ;
    if (TEST_Z(ecx, ecx)) goto loc_00332856; /* je: equal / zero */

loc_00332837: ;
    edx = MEM32(eax + 0xA4);
    if (TEST_Z(edx, edx)) goto loc_00332856; /* je: equal / zero */

loc_00332841: ;
    edx = MEM32(eax + 0xA0);
    if (TEST_Z(edx, edx)) goto loc_00332856; /* je: equal / zero */

loc_0033284B: ;
    eax = ZX8(MEM8(ecx + 4));
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;

loc_00332856: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00332860
 * Original: 0x00332860 - 0x00332893 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332860: ;
    eax = eax + 0xFFFFFFC5u;
    if (CMP_A(eax, 6)) { sub_00332893(); return; } /* ja: above (unsigned >) */

loc_00332868: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x33289C); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0033286Fu) goto loc_0033286F;
    if (_jt == 0x00332875u) goto loc_00332875;
    if (_jt == 0x0033287Bu) goto loc_0033287B;
    if (_jt == 0x00332881u) goto loc_00332881;
    if (_jt == 0x00332887u) goto loc_00332887;
    if (_jt == 0x0033288Du) goto loc_0033288D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033286F: ;
    eax = 0x17;
    esp += 4; return; /* ret */

loc_00332875: ;
    eax = 0x18;
    esp += 4; return; /* ret */

loc_0033287B: ;
    eax = 0x19;
    esp += 4; return; /* ret */

loc_00332881: ;
    eax = 0x1A;
    esp += 4; return; /* ret */

loc_00332887: ;
    eax = 0x1B;
    esp += 4; return; /* ret */

loc_0033288D: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003328C0
 * Original: 0x003328C0 - 0x003328E0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003328C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003328C0: ;
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003328E0(); return; } /* je: equal / zero */

loc_003328C7: ;
    ecx = MEM32(eax);
    xmm0 = MEMF(0x648EEC); /* movss */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 1;
    MEMF(eax + 0x10) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00332940
 * Original: 0x00332940 - 0x00332979 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332940: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_00332A70(); /* call 0x00332A70 */

loc_00332956: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0xC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC); /* addss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm0 < MEMF(esi + 8))) { sub_00332979(); return; } /* jb: below (unsigned <) */

loc_00332975: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0033297B(); return; /* tail jmp 0x0033297B */

}

/**
 * sub_00332A70
 * Original: 0x00332A70 - 0x00332A95 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332A70: ;
    xmm1 = MEMF(ecx + 0x20); /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm2 = MEMF(ecx + 0x1C); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00332A95(); return; } /* jp: parity */

loc_00332A90: ;
    xmm4 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_00332ABC(); return; /* tail jmp 0x00332ABC */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00332B70
 * Original: 0x00332B70 - 0x00332B7A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00332B70: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, 1)) { sub_00332B7A(); return; } /* jne: not equal / not zero */

loc_00332B77: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00332B90
 * Original: 0x00332B90 - 0x00332BA3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00332B90: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, ecx)) { sub_00332BA3(); return; } /* je: equal / zero */

loc_00332B96: ;
    if (CMP_EQ(eax, 2)) { sub_00332BA3(); return; } /* je: equal / zero */

loc_00332B9B: ;
    if (CMP_EQ(ecx, 2)) { sub_00332BA3(); return; } /* je: equal / zero */

loc_00332BA0: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00332BB0
 * Original: 0x00332BB0 - 0x00332FA4 (1012 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332BB0(void)
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

loc_00332BB0: ;
    esp = esp - 0x1C;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    esi = esi + ecx;
    edi = edi + ecx;
    ecx = MEM32(0x84B330);
    eax = eax + ecx + 0x38;
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(eax + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    ebx = eax + ecx + 0x8E00;
    ecx = edi + 0x78;
    ebp = esi + 0x78;
    edx = esp + 0x20;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = edx;
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
    xmm0 = MEMF(0x74B614); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    edx = MEM32(esp + 0x30);
    if ((xmm0 < xmm6)) goto loc_00332C4E; /* jb: below (unsigned <) */

loc_00332C46: ;
    if (TEST_Z(edx, edx)) goto loc_00332F9C; /* je: equal / zero */

loc_00332C4E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm7 = MEMF(0x648D78); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00332C84; /* jp: parity */

loc_00332C6D: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00332C84; /* jp: parity */

loc_00332C7C: ;
    xmm3 = xmm6; /* movaps */
    xmm5 = xmm4; /* movaps */
    goto loc_00332CDC;

loc_00332C84: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00332C93: ;
    edx = esp + 0x28;
    xmm3 = xmm0; /* movaps */
    esp = esp + 8;
    xmm3 = xmm3 * xmm7; /* mulss */
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x30);

loc_00332CDC: ;
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x8C); /* subss */
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x84); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x30)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(0x648E54) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E54))) goto loc_00332D93; /* jbe: below or equal (unsigned <=) */

loc_00332D38: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00332D47: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm0; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm1 < MEMF(0x648E6C))) goto loc_00332D72; /* jb: below (unsigned <) */

loc_00332D5E: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    goto loc_00332D99;

loc_00332D72: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_00332D87; /* jb: below (unsigned <) */

loc_00332D7F: ;
    xmm3 = xmm3 - MEMF(0x648F60); /* subss */

loc_00332D87: ;
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    goto loc_00332D99;

loc_00332D93: ;
    MEMF(esp + 0x30) = xmm6; /* movss */

loc_00332D99: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00332DCA; /* jbe: below or equal (unsigned <=) */

loc_00332DBF: ;
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x30); /* subss */
    goto loc_00332DD0;

loc_00332DCA: ;
    xmm3 = MEMF(esp + 0x30); /* movss */

loc_00332DD0: ;
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_00332DD8; /* jbe: below or equal (unsigned <=) */

loc_00332DD5: ;
    xmm3 = xmm4; /* movaps */

loc_00332DD8: ;
    eax = MEM32(edi + 0x568);
    esi = MEM32(eax + 0xA0);
    if (CMP_NE(esi, 0x52)) goto loc_00332DF3; /* jne: not equal / not zero */

loc_00332DE9: ;
    xmm5 = xmm5 * MEMF(0x648F94); /* mulss */
    goto loc_00332E1E;

loc_00332DF3: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00332E1E; /* je: equal / zero */

loc_00332DFD: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(0x84A600);
    SET_LO16(eax, MEM16(eax + ecx * 2 + -2));
    if (CMP_EQ(LO16(eax), 0x12C)) goto loc_00332E16; /* je: equal / zero */

loc_00332E10: ;
    if (CMP_NE(LO16(eax), 0xE2)) goto loc_00332E1E; /* jne: not equal / not zero */

loc_00332E16: ;
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */

loc_00332E1E: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm5 = xmm5 - MEMF(ebx); /* subss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    xmm5 = xmm5 / xmm0; /* divss */
    xmm2 = xmm5; /* movaps */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_00332E3C; /* jbe: below or equal (unsigned <=) */

loc_00332E37: ;
    xmm2 = xmm6; /* movaps */
    goto loc_00332E44;

loc_00332E3C: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_00332E44; /* jbe: below or equal (unsigned <=) */

loc_00332E41: ;
    xmm2 = xmm4; /* movaps */

loc_00332E44: ;
    xmm0 = MEMF(ebx + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    xmm1 = MEMF(ebx + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(ebx + 0x10); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 8); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x10); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    if ((xmm1 < xmm0)) goto loc_00332E87; /* jb: below (unsigned <) */

loc_00332E76: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00332E93;

loc_00332E87: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */

loc_00332E93: ;
    ecx = MEM32(esp + 0x1C);
    xmm2 = MEMF(ecx + 0x3C); /* movss */
    xmm1 = MEMF(ebx + 0x1C); /* movss */
    xmm1 = xmm1 - MEMF(ebx + 0x18); /* subss */
    xmm2 = xmm2 - MEMF(ebx + 0x18); /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_00332EC1; /* jbe: below or equal (unsigned <=) */

loc_00332EBC: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00332EC9;

loc_00332EC1: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_00332EC9; /* jbe: below or equal (unsigned <=) */

loc_00332EC6: ;
    xmm2 = xmm4; /* movaps */

loc_00332EC9: ;
    (void)0; /* cmp edx, 0x10 - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    if (CMP_GE(edx, 0x10)) goto loc_00332F18; /* jge: greater or equal (signed >=) */

loc_00332ED5: ;
    edi = MEM32(0x84B330);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    xmm0 = MEMF(eax + edi + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 0x20); /* mulss */
    eax = eax + edi + 0x38;
    (void)0; /* test MEM32(eax + 0x98), 0x400000 - flags set for next jcc */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = xmm1; /* movaps */
    if (TEST_Z(MEM32(eax + 0x98), 0x400000)) goto loc_00332F18; /* je: equal / zero */

loc_00332F0C: ;
    xmm0 = MEMF(ebx + 0x40); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = xmm0; /* movaps */

loc_00332F18: ;
    eax = MEM32(ecx + 0x7AC);
    if (TEST_Z(eax, eax)) goto loc_00332F35; /* je: equal / zero */

loc_00332F22: ;
    if (CMP_NE(MEM32(eax + 4), 0xA)) goto loc_00332F35; /* jne: not equal / not zero */

loc_00332F28: ;
    if (CMP_NE(MEM32(eax + 0xC), edx)) goto loc_00332F35; /* jne: not equal / not zero */

loc_00332F2D: ;
    xmm3 = xmm3 * MEMF(0x648CF0); /* mulss */

loc_00332F35: ;
    if (CMP_NE(esi, 0x52)) goto loc_00332F99; /* jne: not equal / not zero */

loc_00332F3A: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x30) = ecx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00332F99; /* jbe: below or equal (unsigned <=) */

loc_00332F82: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm4; /* movaps */

loc_00332F99: ;
    xmm0 = xmm3; /* movaps */

loc_00332F9C: ;
    POP32(esp, edi);
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
 * sub_00332FB0
 * Original: 0x00332FB0 - 0x00332FDF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FB0(void)
{

loc_00332FB0: ;
    esp = esp - 0x10;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_000AC710(); /* call 0x000AC710 */

loc_00332FDB: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00332FE0
 * Original: 0x00332FE0 - 0x00333011 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332FE0: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00333011(); return; } /* je: equal / zero */

loc_00332FEA: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx + -1744;
    if (CMP_NE(MEM32(ecx + 0x64), 0x35)) { sub_00333011(); return; } /* jne: not equal / not zero */

loc_00333006: ;
    ecx = MEM32(ecx + 0x570);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00333030
 * Original: 0x00333030 - 0x0033304D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333030: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(eax + 0x64));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), 0xFF)) { sub_0033304D(); return; } /* jne: not equal / not zero */

loc_00333045: ;
    ebp = 0; /* xor self */
    MEM32(esp + 0xC) = ebp;
    g_seh_ebp = ebp; sub_00333064(); return; /* tail jmp 0x00333064 */

}

/**
 * sub_00333200
 * Original: 0x00333200 - 0x00333273 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333200: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = edi;
    MEM32(esp + 4) = 1;
    PUSH32(esp, 0); sub_00395C20(); /* call 0x00395C20 */

loc_00333213: ;
    eax = MEM32(edi + 0x68);
    eax = eax + 0xFFFFFF21u;
    (void)0; /* cmp eax, 0xBA - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_A(eax, 0xBA)) goto loc_00333269; /* ja: above (unsigned >) */

loc_00333228: ;
    eax = ZX8(MEM8(eax + 0x333284));
    { uint32_t _jt = MEM32(eax * 4 + 0x33327C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00333236u) goto loc_00333236;
    if (_jt == 0x00333269u) goto loc_00333269;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00333236: ;
    ecx = ebx + 0x564;
    esi = 0; /* xor self */
    MEM32(esp + 8) = ecx;

loc_00333242: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00556FA0(); /* call 0x00556FA0 */

loc_00333258: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) { sub_00333273(); return; } /* je: equal / zero */

loc_00333263: ;
    esi++;
    if (CMP_L(esi, 2)) goto loc_00333242; /* jl: less (signed <) */

loc_00333269: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00333340
 * Original: 0x00333340 - 0x003333BF (127 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333340: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00332FE0(); /* call 0x00332FE0 */

loc_00333357: ;
    eax = MEM32(eax);
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 0x40)) goto loc_00333387; /* ja: above (unsigned >) */

loc_00333361: ;
    eax = ZX8(MEM8(eax + 0x3333D0));
    { uint32_t _jt = MEM32(eax * 4 + 0x3333C4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0033336Fu) goto loc_0033336F;
    if (_jt == 0x00333379u) goto loc_00333379;
    if (_jt == 0x00333387u) goto loc_00333387;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033336F: ;
    xmm3 = MEMF(0x648EC8); /* movss */
    goto loc_0033338D;

loc_00333379: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_00333387: ;
    xmm3 = MEMF(esp + 4); /* movss */

loc_0033338D: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx + 0x2C;
    PUSH32(esp, ecx);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033339E: ;
    esp = esp + 8;
    /* ucomiss xmm3, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, esi);
    if (1 /* jnp after test - parity */) { sub_003333BF(); return; } /* jnp: not parity */

loc_003333AF: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003333BF(); return; } /* jbe: below or equal (unsigned <=) */

loc_003333BB: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00333420
 * Original: 0x00333420 - 0x003334AB (139 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333420: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D34); /* movss */
    eax = esi;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00332FE0(); /* call 0x00332FE0 */

loc_00333435: ;
    eax = MEM32(eax);
    eax = eax + 0xFFFFFFF8u;
    if (CMP_A(eax, 0x4D)) goto loc_00333478; /* ja: above (unsigned >) */

loc_0033343F: ;
    eax = ZX8(MEM8(eax + 0x3334D4));
    { uint32_t _jt = MEM32(eax * 4 + 0x3334C0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0033344Du) goto loc_0033344D;
    if (_jt == 0x00333457u) goto loc_00333457;
    if (_jt == 0x00333461u) goto loc_00333461;
    if (_jt == 0x0033346Bu) goto loc_0033346B;
    if (_jt == 0x00333478u) goto loc_00333478;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033344D: ;
    xmm0 = MEMF(0x5A005C); /* movss */
    goto loc_00333473;

loc_00333457: ;
    xmm0 = MEMF(0x648EC8); /* movss */
    goto loc_00333473;

loc_00333461: ;
    xmm0 = MEMF(0x64925C); /* movss */
    goto loc_00333473;

loc_0033346B: ;
    xmm0 = MEMF(0x648EBC); /* movss */

loc_00333473: ;
    MEMF(esp) = xmm0; /* movss */

loc_00333478: ;
    ecx = edi + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00333485: ;
    xmm1 = MEMF(esp + 8); /* movss */
    esp = esp + 8;
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003334AB(); return; } /* jnp: not parity */

loc_0033349B: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) { sub_003334AB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003334A7: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00333530
 * Original: 0x00333530 - 0x0033357A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333530(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;

loc_00333530: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * MEMF(0x648CE0); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 / xmm4; /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 + MEMF(esp + 4); /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * MEMF(0x648D18); /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) { sub_0033357A(); return; } /* jb: below (unsigned <) */

loc_00333577: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003335F0
 * Original: 0x003335F0 - 0x0033365C (108 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003335F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003335F0: ;
    if (TEST_Z(eax, eax)) { sub_0033365C(); return; } /* je: equal / zero */

loc_003335F4: ;
    eax = MEM32(eax + 0x68);
    eax = eax + 0xFFFFFF23u;
    if (CMP_A(eax, 0xBC)) { sub_0033365C(); return; } /* ja: above (unsigned >) */

loc_00333603: ;
    eax = ZX8(MEM8(eax + 0x3336C8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3336B0)); return; /* indirect tail jmp */

    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648EE8); /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_00333810
 * Original: 0x00333810 - 0x00333827 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333810: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_Z(edx, edx)) { sub_00333827(); return; } /* je: equal / zero */

loc_00333823: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00333831(); return; /* tail jmp 0x00333831 */

}

/**
 * sub_00333880
 * Original: 0x00333880 - 0x00333943 (195 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333880: ;
    esp = esp - 0x18;
    ecx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    edx = MEM32(esi + edi + 0x568);
    esi = esi + edi;
    edi = eax + ecx + 0x38;
    ebx = edi + 0x2C;
    edx = edx + 0x228;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003338C2: ;
    eax = MEM32(esi + 0x568);
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x228); /* subss */
    xmm2 = MEMF(eax + 0x22C); /* movss */
    xmm2 = xmm2 - MEMF(edi + 0x30); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(edi + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x230); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00333943(); return; } /* jp: parity */

loc_00333936: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00333943(); return; } /* jp: parity */

loc_0033393F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00333975(); return; /* tail jmp 0x00333975 */

}

/**
 * sub_00333A80
 * Original: 0x00333A80 - 0x00334D39 (4793 bytes, 1143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333A80(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333A80: ;
    esp = esp - 0x80;
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x84B330);
    edx = edx + ecx + 0x38;
    MEM32(esp + 0x38) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x18) = edi;
    edi = MEM32(0x84A5F8);
    eax = eax + edi;
    ecx = edx + ecx + 0x8E00;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebp = eax;
    eax = ZX16(MEM16(ebp + 0x60));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    ecx = 1;
    MEM8(esp + 0xF) = 0;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(eax, edx)) goto loc_00333B09; /* jl: less (signed <) */

loc_00333B04: ;
    eax = 0x14;

loc_00333B09: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00334D2B; /* je: equal / zero */

loc_00333B21: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + edi;
    MEM32(esp + 0x44) = esi;
    if ((esi != 0)) goto loc_00333B3E; /* jne: not equal / not zero */

loc_00333B2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_00333B3E: ;
    eax = MEM32(ebp + 0x564);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xA0);
    esi = ebx;
    esi = esi & 0xFFFFFF7Fu;
    (void)0; /* cmp esi, 9 - flags set for next jcc */
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x5C) = ecx;
    MEM8(0x801B70) = 1;
    if (CMP_EQ(esi, 9)) goto loc_00333B87; /* je: equal / zero */

loc_00333B78: ;
    if (CMP_EQ(esi, 0x51)) goto loc_00333B87; /* je: equal / zero */

loc_00333B7D: ;
    if (CMP_EQ(ebx, 0x38)) goto loc_00333B87; /* je: equal / zero */

loc_00333B82: ;
    if (CMP_NE(ebx, 0x15)) goto loc_00333B8F; /* jne: not equal / not zero */

loc_00333B87: ;
    MEM32(esp + 0x5C) = 0;

loc_00333B8F: ;
    if (TEST_Z(ebx, ebx)) goto loc_00333BC7; /* je: equal / zero */

loc_00333B93: ;
    if (CMP_EQ(ebx, 0x71)) goto loc_00333BC7; /* je: equal / zero */

loc_00333B98: ;
    if (CMP_EQ(ebx, 0x59)) goto loc_00333BC7; /* je: equal / zero */

loc_00333B9D: ;
    ecx = MEM32(ebp + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00333BC7; /* je: equal / zero */

loc_00333BA7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp;
    ebx = esp + 0x78;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_00333BB8: ;
    edi = MEM32(0x84A5F8);
    ebx = MEM32(esp + 0x50);
    esp = esp + 0xC;
    goto loc_00333BE0;

loc_00333BC7: ;
    eax = eax + 0x228;
    edx = MEM32(eax);
    MEM32(esp + 0x6C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x74) = edx;

loc_00333BE0: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00333BEA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00333C11; /* je: equal / zero */

loc_00333BF1: ;
    ecx = MEM32(ebp + 0x568);
    ecx = ecx + 0x228;
    edx = MEM32(ecx);
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x70) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x74) = ecx;

loc_00333C11: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(eax + 0x25C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x258); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00333C65; /* je: equal / zero */

loc_00333C3D: ;
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = MEM32(edx + edi + -1644);
    (void)0; /* cmp eax, 0x35 - flags set for next jcc */
    edi = edx + edi + -1744;
    MEM32(esp + 0x30) = edi;
    if (CMP_EQ(eax, 0x35)) goto loc_00333C65; /* je: equal / zero */

loc_00333C5D: ;
    MEM32(esp + 0x30) = 0;

loc_00333C65: ;
    edi = MEM32(ebp + 0x568);
    eax = MEM32(edi + 0x444);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00333C76: ;
    ecx = eax;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00333F1C; /* je: equal / zero */

loc_00333C84: ;
    edx = eax;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_00333C8B: ;
    if (CMP_NE(eax, 7)) goto loc_00333D21; /* jne: not equal / not zero */

loc_00333C94: ;
    ebx = MEM32(edx + 0x570);
    esi = esp + 0x24;
    edi = esp + 0x20;
    eax = esp + 0x6C;
    MEM32(esp + 0x2C) = 3;
    PUSH32(esp, 0); sub_00395220(); /* call 0x00395220 */

loc_00333CB3: ;
    eax = MEM32(ebx + 0xF1C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00333D0C; /* je: equal / zero */

loc_00333CBE: ;
    eax--;
    if ((eax == 0)) goto loc_00333CF7; /* je: equal / zero */

loc_00333CC1: ;
    eax--;
    if ((eax != 0)) goto loc_00333DDC; /* jne: not equal / not zero */

loc_00333CC8: ;
    SET_LO8(edx, MEM8(ebx + 0x128C));
    xmm0 = MEMF(0x648F38); /* movss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM32(esp + 0x1C) = 3;
    MEMF(esp + 0x38) = xmm0; /* movss */
    eax = eax + 5;
    MEM32(esp + 0x14) = eax;
    goto loc_00333DDC;

loc_00333CF7: ;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x14) = 3;
    goto loc_00333DDC;

loc_00333D0C: ;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = 3;
    goto loc_00333DDC;

loc_00333D21: ;
    if (CMP_NE(eax, 1)) goto loc_00333D3F; /* jne: not equal / not zero */

loc_00333D26: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x2C) = 4;
    goto loc_00333DCB;

loc_00333D3F: ;
    ecx = MEM32(esp + 0x40);
    SET_LO16(ecx, MEM16(ecx + 2));
    if (CMP_EQ(LO16(ecx), 9)) goto loc_00333D9D; /* je: equal / zero */

loc_00333D4D: ;
    if (CMP_EQ(LO16(ecx), 0x1A)) goto loc_00333D9D; /* je: equal / zero */

loc_00333D53: ;
    if (CMP_EQ(LO16(ecx), 0x21)) goto loc_00333D9D; /* je: equal / zero */

loc_00333D59: ;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    xmm0 = MEMF(0x6490B0); /* movss */
    edi = esp + 0x20;
    esi = esp + 0x24;
    MEM32(esp + 0x14) = 3;
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_NE(eax, 6)) goto loc_00333D8B; /* jne: not equal / not zero */

loc_00333D7C: ;
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x2C) = eax;
    goto loc_00333DD3;

loc_00333D8B: ;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x2C) = 5;
    goto loc_00333DD3;

loc_00333D9D: ;
    xmm0 = MEMF(0x648E3C); /* movss */
    eax = 3;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = 2;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x98) = 0;

loc_00333DCB: ;
    edi = esp + 0x20;
    esi = esp + 0x24;

loc_00333DD3: ;
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_00395220(); /* call 0x00395220 */

loc_00333DDC: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00333E00; /* je: equal / zero */

loc_00333DEA: ;
    xmm0 = MEMF(eax + 0xE38); /* movss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_00333E00: ;
    eax = (uint32_t)(int32_t)SMEM8(0x74D814);
    ecx = ZX16(MEM16(ebp + 0x60));
    if (CMP_NE(ecx, eax)) goto loc_00333E85; /* jne: not equal / not zero */

loc_00333E0F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x84;
    eax = esp + 0x6C;
    ecx = edx;
    /* fld st(0) */
    MEMF(esp + 0x88) = xmm0; /* movss */
    /* FPU: fsin  */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x58) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x84) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00333E85: ;
    ebx = MEM32(esp + 0x44);

loc_00333E89: ;
    if (CMP_NE(ebx, 3)) goto loc_00333E99; /* jne: not equal / not zero */

loc_00333E8E: ;
    MEM32(esp + 0x98) = 0;

loc_00333E99: ;
    edx = MEM32(esp + 0x98);
    esi = MEM32(esp + 0x48);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    ecx = esp + 0x78;
    eax = esi;
    PUSH32(esp, edx);
    edx = ebp;
    PUSH32(esp, 0); sub_00370BD0(); /* call 0x00370BD0 */

loc_00333EB7: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00333EC2: ;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x64) = xmm0; /* movss */
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003335F0(); /* call 0x003335F0 */

loc_00333ED7: ;
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033415A; /* jbe: below or equal (unsigned <=) */

loc_00333EE6: ;
    xmm1 = MEMF(0x648E68); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00333EF6; /* ja: above (unsigned >) */

loc_00333EF3: ;
    xmm0 = xmm1; /* movaps */

loc_00333EF6: ;
    xmm2 = MEMF(0x648D54); /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0033412F; /* jbe: below or equal (unsigned <=) */

loc_00333F0F: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    goto loc_00334133;

loc_00333F1C: ;
    if (CMP_EQ(esi, 0x24)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F25: ;
    if (CMP_EQ(esi, 0x52)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F2E: ;
    if (CMP_EQ(esi, 0x74)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F37: ;
    if (CMP_EQ(ebx, 0x41)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F40: ;
    if (CMP_EQ(ebx, 0x52)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F49: ;
    if (CMP_EQ(ebx, 0x74)) goto loc_00333FE9; /* je: equal / zero */

loc_00333F52: ;
    if (CMP_NE(esi, 0x23)) goto loc_00333F64; /* jne: not equal / not zero */

loc_00333F57: ;
    MEM32(esp + 0x14) = 1;
    goto loc_00333E89;

loc_00333F64: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301050(); /* call 0x00301050 */

loc_00333F6B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00333F92; /* je: equal / zero */

loc_00333F6F: ;
    eax = 1;
    if (CMP_NE(ecx, eax)) goto loc_00333F89; /* jne: not equal / not zero */

loc_00333F78: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = 2;
    goto loc_00333E89;

loc_00333F89: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00333E89;

loc_00333F92: ;
    if (CMP_EQ(ebx, 0x15)) goto loc_00334100; /* je: equal / zero */

loc_00333F9B: ;
    if (CMP_EQ(ebx, 0x1B)) goto loc_00334100; /* je: equal / zero */

loc_00333FA4: ;
    if (CMP_EQ(ebx, 0x6F)) goto loc_00334100; /* je: equal / zero */

loc_00333FAD: ;
    if (CMP_EQ(ebx, 3)) goto loc_00334100; /* je: equal / zero */

loc_00333FB6: ;
    if (CMP_NE(ebx, 0x5C)) goto loc_00333FCD; /* jne: not equal / not zero */

loc_00333FBB: ;
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    goto loc_00333E99;

loc_00333FCD: ;
    if (CMP_NE(ebx, 0x38)) goto loc_00333FDF; /* jne: not equal / not zero */

loc_00333FD2: ;
    MEM32(esp + 0x14) = 2;
    goto loc_00333E99;

loc_00333FDF: ;
    if (CMP_L(ebx, 0x5D)) goto loc_00333FF6; /* jl: less (signed <) */

loc_00333FE4: ;
    if (CMP_G(ebx, 0x64)) goto loc_00333FF6; /* jg: greater (signed >) */

loc_00333FE9: ;
    MEM32(esp + 0x14) = 0;
    goto loc_00333E89;

loc_00333FF6: ;
    if (CMP_EQ(ebx, 0x53)) goto loc_003340C1; /* je: equal / zero */

loc_00333FFF: ;
    if (CMP_EQ(ebx, 0x16)) goto loc_003340C1; /* je: equal / zero */

loc_00334008: ;
    if (CMP_EQ(ebx, 0x59)) goto loc_00334080; /* je: equal / zero */

loc_0033400D: ;
    if (CMP_EQ(ecx, 8)) goto loc_00334080; /* je: equal / zero */

loc_00334012: ;
    if (CMP_NE(ebx, 0x57)) goto loc_00334029; /* jne: not equal / not zero */

loc_00334017: ;
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    goto loc_00333E99;

loc_00334029: ;
    if (CMP_EQ(ebx, 0x70)) goto loc_0033406B; /* je: equal / zero */

loc_0033402E: ;
    if (CMP_EQ(ebx, 0x6A)) goto loc_0033406B; /* je: equal / zero */

loc_00334033: ;
    if (CMP_EQ(ebx, 0x6E)) goto loc_0033406B; /* je: equal / zero */

loc_00334038: ;
    if (CMP_EQ(ebx, 0x73)) goto loc_0033406B; /* je: equal / zero */

loc_0033403D: ;
    if (CMP_NE(ebx, 0x58)) goto loc_0033404F; /* jne: not equal / not zero */

loc_00334042: ;
    MEM32(esp + 0x14) = 2;
    goto loc_00333E8E;

loc_0033404F: ;
    if (CMP_NE(ebx, 0x71)) goto loc_00333E85; /* jne: not equal / not zero */

loc_00334058: ;
    xmm0 = MEMF(0x648E6C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    goto loc_00333E99;

loc_0033406B: ;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp + 0x14) = 2;
    goto loc_00333E89;

loc_00334080: ;
    if (CMP_NE(ecx, 0x13)) goto loc_003340AE; /* jne: not equal / not zero */

loc_00334085: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    eax = 0; /* xor self */
    /* comiss xmm0, MEMF(edi + 0x56C) - sets EFLAGS */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x94) = eax;
    if ((xmm0 >= MEMF(edi + 0x56C))) goto loc_003340AE; /* jae: above or equal (unsigned >=) */

loc_003340A3: ;
    MEM32(esp + 0x94) = 1;

loc_003340AE: ;
    xmm0 = MEMF(0x648E3C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    goto loc_00333E89;

loc_003340C1: ;
    (void)0; /* cmp ecx, 7 - flags set for next jcc */
    MEM32(esp + 0x60) = 1;
    MEM32(esp + 0x98) = 0;
    if (CMP_NE(ecx, 7)) goto loc_00333E85; /* jne: not equal / not zero */

loc_003340DD: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x14) = 4;
    MEMF(esp + 0x38) = xmm0; /* movss */
    goto loc_00333E89;

loc_00334100: ;
    (void)0; /* cmp ebx, 0x1B - flags set for next jcc */
    MEM32(esp + 0x1C) = 1;
    if (CMP_EQ(ebx, 0x1B)) goto loc_0033411A; /* je: equal / zero */

loc_0033410D: ;
    if (CMP_EQ(ebx, 0x6F)) goto loc_0033411A; /* je: equal / zero */

loc_00334112: ;
    MEM32(esp + 0x1C) = 2;

loc_0033411A: ;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x14) = 2;
    goto loc_00333E89;

loc_0033412F: ;
    xmm0 = xmm0 / xmm1; /* divss */

loc_00334133: ;
    xmm1 = MEMF(esi + 0x78); /* movss */
    xmm3 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x84); /* subss */
    xmm3 = xmm3 - MEMF(esi + 0x8C); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    goto loc_0033415D;

loc_0033415A: ;
    xmm3 = xmm1; /* movaps */

loc_0033415D: ;
    (void)0; /* cmp ebx, 3 - flags set for next jcc */
    edi = MEM32(esp + 0x40);
    xmm2 = MEMF(esp + 0x78); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    xmm2 = xmm2 - MEMF(edi + 0x2C); /* subss */
    esi = edi + 0x2C;
    xmm1 = xmm1 + xmm3; /* addss */
    xmm1 = xmm1 - MEMF(edi + 0x34); /* subss */
    if (CMP_NE(ebx, 3)) goto loc_0033419A; /* jne: not equal / not zero */

loc_0033418A: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = eax;

loc_0033419A: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0x34); /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(edi + 0x34) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x6C); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x74); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E58D0(); /* call 0x003E58D0 */

loc_003341CD: ;
    if (TEST_NZ(eax, eax)) goto loc_003341EA; /* jne: not equal / not zero */

loc_003341D1: ;
    ecx = MEM32(esp + 0x78);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x7C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x80);
    MEM32(eax + 8) = ecx;

loc_003341EA: ;
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x58)); /* sqrtss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm3 = MEMF(esp + 0x54); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    if ((xmm0 <= xmm3)) goto loc_0033423B; /* jbe: below or equal (unsigned <=) */

loc_00334233: ;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    goto loc_003342AC;

loc_0033423B: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_0033424D; /* ja: above (unsigned >) */

loc_00334248: ;
    if (CMP_NE(ebx, 3)) goto loc_00334275; /* jne: not equal / not zero */

loc_0033424D: ;
    eax = MEM32(esp + 0xA0);
    if (TEST_Z(eax, eax)) goto loc_00334275; /* je: equal / zero */

loc_00334258: ;
    eax = MEM32(esp + 0x9C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xA0) = 0;
    if (TEST_NZ(eax, eax)) goto loc_0033427C; /* jne: not equal / not zero */

loc_0033426E: ;
    eax = 0x32;
    goto loc_0033427C;

loc_00334275: ;
    eax = MEM32(esp + 0x9C);

loc_0033427C: ;
    xmm4 = xmm1; /* movaps */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm3; /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x34) = xmm4; /* movss */
    xmm1 = xmm4; /* movaps */

loc_003342AC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_003342BE: ;
    ebx = MEM32(esp + 0x30);
    edx = ZX16(LO16(eax));
    esp = esp + 4;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648F48); /* mulss */
    if (TEST_NZ(ebx, ebx)) goto loc_003342E2; /* jne: not equal / not zero */

loc_003342D8: ;
    xmm0 = MEMF(ebp + 0x114); /* movss */
    goto loc_003342E8;

loc_003342E2: ;
    xmm0 = MEMF(esp + 0x20); /* movss */

loc_003342E8: ;
    xmm1 = MEMF(0x648F60); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_003342FE; /* jbe: below or equal (unsigned <=) */

loc_003342F5: ;
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_003342F5; /* ja: above (unsigned >) */

loc_003342FE: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0033430F; /* jbe: below or equal (unsigned <=) */

loc_00334306: ;
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_00334306; /* ja: above (unsigned >) */

loc_0033430F: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x58) = xmm2; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00334329; /* jbe: below or equal (unsigned <=) */

loc_0033431A: ;
    /* nop */

loc_00334320: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00334320; /* ja: above (unsigned >) */

loc_00334329: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00334339; /* jbe: below or equal (unsigned <=) */

loc_0033432E: ;
    edi = edi;

loc_00334330: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00334330; /* ja: above (unsigned >) */

loc_00334339: ;
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033434B; /* jbe: below or equal (unsigned <=) */

loc_00334342: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00334342; /* ja: above (unsigned >) */

loc_0033434B: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00334359; /* jbe: below or equal (unsigned <=) */

loc_00334350: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00334350; /* ja: above (unsigned >) */

loc_00334359: ;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_00334372; /* jbe: below or equal (unsigned <=) */

loc_00334368: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_00334372: ;
    /* comiss xmm0, MEMF(0x6490B0) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6490B0))) goto loc_00334388; /* ja: above (unsigned >) */

loc_0033437B: ;
    xmm1 = MEMF(0x6497D4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00334390; /* jbe: below or equal (unsigned <=) */

loc_00334388: ;
    MEM32(esp + 0x64) = 1;

loc_00334390: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0xA0); /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x7C); /* addss */
    xmm0 = xmm0 - MEMF(edi + 0x30); /* subss */
    xmm0 = xmm0 + MEMF(edi + 0x30); /* addss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0x63AAD0);
    eax = esi;
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_003343CA: ;
    esp = esp + 4;
    if (CMP_NE(ebx, 4)) goto loc_00334423; /* jne: not equal / not zero */

loc_003343D2: ;
    ecx = MEM32(esp + 0x54);
    xmm2 = MEMF(0x648F8C); /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC1200000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00333530(); /* call 0x00333530 */

loc_003343F4: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0033440D; /* jne: not equal / not zero */

loc_003343FB: ;
    PUSH32(esp, ecx);
    xmm1 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_00334404: ;
    ecx = ZX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    goto loc_0033443A;

loc_0033440D: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    goto loc_00334448;

loc_00334423: ;
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_00334433: ;
    eax = ZX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */

loc_0033443A: ;
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_00334448: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_00333810(); /* call 0x00333810 */

loc_0033445A: ;
    xmm2 = MEMF(0x648E6C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x28); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if ((xmm1 <= xmm2)) goto loc_00334493; /* jbe: below or equal (unsigned <=) */

loc_00334479: ;
    /* nop */

loc_00334480: ;
    xmm1 = xmm1 - MEMF(0x648F60); /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if ((xmm1 > xmm2)) goto loc_00334480; /* ja: above (unsigned >) */

loc_00334493: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003344AD; /* jbe: below or equal (unsigned <=) */

loc_00334498: ;
    goto loc_003344A0;

    /* nop */

loc_003344A0: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_003344A0; /* ja: above (unsigned >) */

loc_003344AD: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648F60); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003344C9; /* jbe: below or equal (unsigned <=) */

loc_003344BE: ;
    edi = edi;

loc_003344C0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003344C0; /* ja: above (unsigned >) */

loc_003344C9: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003344D9; /* jbe: below or equal (unsigned <=) */

loc_003344CE: ;
    edi = edi;

loc_003344D0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_003344D0; /* ja: above (unsigned >) */

loc_003344D9: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_003344F3; /* jbe: below or equal (unsigned <=) */

loc_003344E4: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_003344E4; /* ja: above (unsigned >) */

loc_003344ED: ;
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_003344F3: ;
    xmm2 = MEMF(0x648CDC); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(0x6492BC); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if ((xmm2 > xmm1)) goto loc_0033452F; /* ja: above (unsigned >) */

loc_00334522: ;
    xmm2 = MEMF(0x648E3C); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_00334535; /* jbe: below or equal (unsigned <=) */

loc_0033452F: ;
    MEMF(esp + 0x18) = xmm2; /* movss */

loc_00334535: ;
    xmm1 = MEMF(0x649388); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0033454F; /* ja: above (unsigned >) */

loc_00334542: ;
    xmm1 = MEMF(0x648E5C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00334555; /* jbe: below or equal (unsigned <=) */

loc_0033454F: ;
    MEMF(esp + 0x48) = xmm1; /* movss */

loc_00334555: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = xmm3; /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0033458E; /* ja: above (unsigned >) */

loc_00334588: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */

loc_0033458E: ;
    (void)0; /* cmp MEM32(esp + 0x44), 3 - flags set for next jcc */
    xmm0 = xmm0 - MEMF(0x6493A8); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    if (CMP_NE(MEM32(esp + 0x44), 3)) goto loc_003345B7; /* jne: not equal / not zero */

loc_003345A3: ;
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */

loc_003345B7: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003345CE; /* jbe: below or equal (unsigned <=) */

loc_003345C7: ;
    esi = 1;
    goto loc_003345D0;

loc_003345CE: ;
    esi = 0; /* xor self */

loc_003345D0: ;
    edi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_00333340(); /* call 0x00333340 */

loc_003345DC: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033460E; /* je: equal / zero */

loc_003345E6: ;
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm4; /* movaps */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm4; /* movaps */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    esi = 0; /* xor self */
    goto loc_00334620;

loc_0033460E: ;
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_00334620: ;
    eax = MEM32(esp + 0x2C);
    if (CMP_A(eax, 5)) goto loc_0033473F; /* ja: above (unsigned >) */

loc_0033462D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x334D3C); /* switch: 13 entries, 12 targets */
    if (_jt == 0x00334634u) goto loc_00334634;
    if (_jt == 0x003346B2u) goto loc_003346B2;
    if (_jt == 0x0033481Fu) goto loc_0033481F;
    if (_jt == 0x003348C0u) goto loc_003348C0;
    if (_jt == 0x003349D0u) goto loc_003349D0;
    if (_jt == 0x00334B83u) goto loc_00334B83;
    if (_jt == 0x00334BA0u) goto loc_00334BA0;
    if (_jt == 0x00334BC0u) goto loc_00334BC0;
    if (_jt == 0x00334BF8u) goto loc_00334BF8;
    if (_jt == 0x00334C18u) goto loc_00334C18;
    if (_jt == 0x00334C32u) goto loc_00334C32;
    if (_jt == 0x00334C4Cu) goto loc_00334C4C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00334634: ;
    eax = MEM32(esp + 0x5C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0033465F; /* je: equal / zero */

loc_00334640: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM8(esp + 0x13) = 1;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    goto loc_00334743;

loc_0033465F: ;
    edx = MEM32(ebp + 0x568);
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM8(edx + 0xC0) = LO8(ecx);
    ecx = MEM32(ebp + 0x568);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEM8(ecx + 0xC1) = LO8(eax);
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x258) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(esp + 0x13) = 0;
    MEMF(eax + 0x25C) = xmm2; /* movss */
    goto loc_00334743;

loc_003346B2: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(eax + 0x258); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    MEMF(eax + 0x258) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x25C) = xmm2; /* movss */
    eax = MEM32(ebp + 0x568);
    eax = eax + 0x258;
    MEM8(esp + 0x13) = 0;
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_003346F1: ;
    eax = MEM32(ebp + 0x568);
    eax = eax + 0x25C;
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_00334701: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x258);
    MEM32(eax + 0x260) = edx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x25C);
    MEM32(eax + 0x264) = ecx;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0xC0) = 0;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0xC1) = 0;

loc_0033473F: ;
    ebx = MEM32(esp + 0x3C);

loc_00334743: ;
    eax = MEM32(esp + 0x94);
    if (TEST_NZ(eax, eax)) goto loc_00334756; /* jne: not equal / not zero */

loc_0033474E: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00334767; /* je: equal / zero */

loc_00334756: ;
    if (TEST_Z(esi, esi)) goto loc_00334769; /* je: equal / zero */

loc_0033475A: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00334769; /* jbe: below or equal (unsigned <=) */

loc_00334767: ;
    esi = 0; /* xor self */

loc_00334769: ;
    SET_LO8(eax, MEM8(0x84B313));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00334812; /* jne: not equal / not zero */

loc_00334776: ;
    SET_LO8(eax, MEM8(0x84B318));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00334812; /* jne: not equal / not zero */

loc_00334783: ;
    if (TEST_Z(esi, esi)) goto loc_00334812; /* je: equal / zero */

loc_0033478B: ;
    if (CMP_EQ(MEM32(edi + 0x7B4), 0xFFFFFFFFu)) goto loc_003347A5; /* je: equal / zero */

loc_00334794: ;
    xmm0 = MEMF(edi + 0x7C0); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648D10))) goto loc_00334812; /* ja: above (unsigned >) */

loc_003347A5: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00333420(); /* call 0x00333420 */

loc_003347AC: ;
    esi = ZX8(LO8(eax));
    if (TEST_Z(esi, esi)) goto loc_0033480F; /* je: equal / zero */

loc_003347B3: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00333030(); /* call 0x00333030 */

loc_003347BD: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033480F; /* je: equal / zero */

loc_003347C4: ;
    eax = MEM32(esp + 0x60);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003347E3; /* je: equal / zero */

loc_003347CE: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00332FB0(); /* call 0x00332FB0 */

loc_003347D5: ;
    esi = eax;
    if (CMP_NE(esi, edi)) goto loc_003347E7; /* jne: not equal / not zero */

loc_003347DB: ;
    eax = MEM32(esp + 0x40);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) + 0x32;

loc_003347E3: ;
    if (CMP_EQ(esi, edi)) goto loc_0033480F; /* je: equal / zero */

loc_003347E7: ;
    if (CMP_NE(MEM32(esp + 0x2C), 2)) goto loc_00334807; /* jne: not equal / not zero */

loc_003347EE: ;
    eax = MEM32(esp + 0x30);
    if (CMP_EQ(eax, edi)) goto loc_00334807; /* je: equal / zero */

loc_003347F6: ;
    edi = eax;
    ebx = ebp;
    PUSH32(esp, 0); sub_00333200(); /* call 0x00333200 */

loc_003347FF: ;
    ebx = MEM32(esp + 0x3C);
    esi = eax;
    edi = 0; /* xor self */

loc_00334807: ;
    if (CMP_NE(esi, edi)) goto loc_00334AD1; /* jne: not equal / not zero */

loc_0033480F: ;
    xmm4 = 0.0f; /* xorps self = zero */

loc_00334812: ;
    esi = MEM32(esp + 0x40);
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    goto loc_00334B46;

loc_0033481F: ;
    eax = MEM32(esp + 0x50);
    xmm2 = MEMF(eax + 0x34); /* movss */
    ebx = MEM32(esp + 0x3C);
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + 0x12C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x34); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(ebx + 0x130) = xmm0; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x13) = 0;
    if ((xmm1 <= xmm0)) goto loc_00334867; /* jbe: below or equal (unsigned <=) */

loc_00334862: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00334872;

loc_00334867: ;
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_00334872; /* jbe: below or equal (unsigned <=) */

loc_0033486D: ;
    xmm0 = MEMF(eax + 0x38); /* movss */

loc_00334872: ;
    MEMF(ebx + 0x130) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm0, MEMF(ebx + 0x12C) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 0x12C))) goto loc_003348B3; /* ja: above (unsigned >) */

loc_0033488B: ;
    xmm0 = MEMF(ebx + 0x12C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_003348AB; /* jbe: below or equal (unsigned <=) */

loc_00334899: ;
    xmm0 = MEMF(eax + 0x38); /* movss */
    MEMF(ebx + 0x12C) = xmm0; /* movss */
    goto loc_00334743;

loc_003348AB: ;
    xmm0 = MEMF(ebx + 0x12C); /* movss */

loc_003348B3: ;
    MEMF(ebx + 0x12C) = xmm0; /* movss */
    goto loc_00334743;

loc_003348C0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM8(esp + 0x13) = 0;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x64908C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003348EB; /* jbe: below or equal (unsigned <=) */

loc_003348DB: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_00334900;

loc_003348EB: ;
    xmm2 = MEMF(0x64A248); /* movss */
    /* comiss xmm2, MEMF(esp + 0x48) - sets EFLAGS */
    if ((xmm2 <= MEMF(esp + 0x48))) goto loc_00334906; /* jbe: below or equal (unsigned <=) */

loc_003348FA: ;
    MEMF(esp + 0x18) = xmm4; /* movss */

loc_00334900: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_00334906: ;
    eax = MEM32(esp + 0x50);
    xmm2 = MEMF(eax + 0x34); /* movss */
    ebx = MEM32(esp + 0x3C);
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + 0x138) = xmm2; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx + 0x13C) = xmm1; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0033495C; /* ja: above (unsigned >) */

loc_00334944: ;
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_00334954; /* jbe: below or equal (unsigned <=) */

loc_0033494D: ;
    xmm0 = MEMF(eax + 0x38); /* movss */
    goto loc_0033495C;

loc_00334954: ;
    xmm0 = MEMF(ebx + 0x138); /* movss */

loc_0033495C: ;
    MEMF(ebx + 0x138) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm0, MEMF(ebx + 0x13C) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 0x13C))) goto loc_00334992; /* ja: above (unsigned >) */

loc_00334975: ;
    xmm0 = MEMF(ebx + 0x13C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_0033498A; /* jbe: below or equal (unsigned <=) */

loc_00334983: ;
    xmm0 = MEMF(eax + 0x38); /* movss */
    goto loc_00334992;

loc_0033498A: ;
    xmm0 = MEMF(ebx + 0x13C); /* movss */

loc_00334992: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEMF(ebx + 0x13C) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00334ACA; /* jbe: below or equal (unsigned <=) */

loc_003349B0: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00334ACA; /* jbe: below or equal (unsigned <=) */

loc_003349C6: ;
    esi = 1;
    goto loc_00334743;

loc_003349D0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM8(esp + 0x13) = 0;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x64908C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003349FB; /* jbe: below or equal (unsigned <=) */

loc_003349EB: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_00334A10;

loc_003349FB: ;
    xmm2 = MEMF(0x64A248); /* movss */
    /* comiss xmm2, MEMF(esp + 0x48) - sets EFLAGS */
    if ((xmm2 <= MEMF(esp + 0x48))) goto loc_00334A16; /* jbe: below or equal (unsigned <=) */

loc_00334A0A: ;
    MEMF(esp + 0x18) = xmm4; /* movss */

loc_00334A10: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_00334A16: ;
    eax = MEM32(esp + 0x50);
    xmm2 = MEMF(eax + 0x34); /* movss */
    ebx = MEM32(esp + 0x3C);
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + 0x138) = xmm2; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx + 0x13C) = xmm1; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00334A6C; /* ja: above (unsigned >) */

loc_00334A54: ;
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_00334A64; /* jbe: below or equal (unsigned <=) */

loc_00334A5D: ;
    xmm0 = MEMF(eax + 0x38); /* movss */
    goto loc_00334A6C;

loc_00334A64: ;
    xmm0 = MEMF(ebx + 0x138); /* movss */

loc_00334A6C: ;
    MEMF(ebx + 0x138) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    /* comiss xmm0, MEMF(ebx + 0x13C) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 0x13C))) goto loc_00334AA2; /* ja: above (unsigned >) */

loc_00334A85: ;
    xmm0 = MEMF(ebx + 0x13C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x38))) goto loc_00334A9A; /* jbe: below or equal (unsigned <=) */

loc_00334A93: ;
    xmm0 = MEMF(eax + 0x38); /* movss */
    goto loc_00334AA2;

loc_00334A9A: ;
    xmm0 = MEMF(ebx + 0x13C); /* movss */

loc_00334AA2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(ebx + 0x13C) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00334ACA; /* je: equal / zero */

loc_00334AAE: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00334ACA; /* jbe: below or equal (unsigned <=) */

loc_00334AC0: ;
    esi = 1;
    goto loc_00334743;

loc_00334ACA: ;
    esi = 0; /* xor self */
    goto loc_00334743;

loc_00334AD1: ;
    eax = MEM32(esp + 0x1C);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = MEM32(esp + 0x40);
    if (CMP_EQ(eax, edi)) goto loc_00334B3C; /* je: equal / zero */

loc_00334ADD: ;
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) goto loc_00334B3C; /* jb: below (unsigned <) */

loc_00334AEB: ;
    eax--;
    xmm4 = 0.0f; /* xorps self = zero */
    if ((eax == 0)) goto loc_00334B1C; /* je: equal / zero */

loc_00334AF1: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00334B13; /* je: equal / zero */

loc_00334AF6: ;
    if (CMP_GE(MEM8(esi + 4), 2)) goto loc_00334B13; /* jge: greater or equal (signed >=) */

loc_00334AFC: ;
    eax = (int32_t)MEMF(esi + 0x3C); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    SET_LO8(eax, (CMP_L(edx, 4)) ? 1 : 0); /* setl */
    goto loc_00334B46;

loc_00334B13: ;
    ecx = 1;
    eax = ecx;
    goto loc_00334B4B;

loc_00334B1C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 4);
    xmm0 = MEMF(edx * 4 + 0x74B588); /* movss */
    /* comiss xmm0, MEMF(esi + 0x18) - sets EFLAGS */
    ecx = 1;
    if ((xmm0 < MEMF(esi + 0x18))) goto loc_00334B38; /* jb: below (unsigned <) */

loc_00334B34: ;
    eax = ecx;
    goto loc_00334B4B;

loc_00334B38: ;
    eax = 0; /* xor self */
    goto loc_00334B4B;

loc_00334B3C: ;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x94);

loc_00334B46: ;
    ecx = 1;

loc_00334B4B: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    xmm0 = MEMF(esp + 0x58); /* movss */
    edx = MEM32(ebp + 0x568);
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */
    MEMF(edx + 0x4D0) = xmm0; /* movss */
    if (CMP_EQ(eax, edi)) goto loc_00334C73; /* je: equal / zero */

loc_00334B6F: ;
    eax = MEM32(esp + 0x14);
    if (CMP_A(eax, 6)) goto loc_00334C3E; /* ja: above (unsigned >) */

loc_00334B7C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x334D54); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00334B83u) goto loc_00334B83;
    if (_jt == 0x00334BA0u) goto loc_00334BA0;
    if (_jt == 0x00334BC0u) goto loc_00334BC0;
    if (_jt == 0x00334BF8u) goto loc_00334BF8;
    if (_jt == 0x00334C18u) goto loc_00334C18;
    if (_jt == 0x00334C32u) goto loc_00334C32;
    if (_jt == 0x00334C4Cu) goto loc_00334C4C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00334B83: ;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0x14C) = ecx;
    MEM32(ebx + 0x150) = ecx;
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334BA0: ;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0x14C) = ecx;
    MEM32(ebx + 0x150) = ecx;
    MEM32(ebx + 0x28) = ecx;
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334BC0: ;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0x14C) = edi;
    MEM32(ebx + 0x150) = edi;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x2C) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 4);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x74B600); /* subss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334BF8: ;
    eax = MEM32(esp + 0x44);
    MEM32(ebx + 0x24) = ecx;
    PUSH32(esp, 0); sub_00301090(); /* call 0x00301090 */

loc_00334C04: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00334C3E; /* je: equal / zero */

loc_00334C08: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00334C3E; /* je: equal / zero */

loc_00334C18: ;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0x24) = edi;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x2C) = ecx;
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334C32: ;
    MEM32(ebx + 0x24) = edi;

loc_00334C35: ;
    eax = MEM32(ebx + 0x28);
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x28) = ecx;

loc_00334C3E: ;
    edx = MEM32(esp + 0x44);
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334C4C: ;
    MEM32(ebx + 0x24) = edi;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edx + 0x28D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00334C35; /* je: equal / zero */

loc_00334C5F: ;
    edx = MEM32(esp + 0x44);
    MEM32(ebx + 0x2C) = ecx;
    MEM32(ebx + 0x28) = edi;
    MEMF(esi + 0x74) = xmm4; /* movss */
    MEM32(esi + 0x78) = edx;
    goto loc_00334CBE;

loc_00334C73: ;
    if (CMP_NE(MEM32(esp + 0x14), edi)) goto loc_00334CBE; /* jne: not equal / not zero */

loc_00334C79: ;
    if (CMP_NE(MEM32(esp + 0x44), 0x52)) goto loc_00334CB5; /* jne: not equal / not zero */

loc_00334C80: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(eax + 0x284); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00334CA5; /* jbe: below or equal (unsigned <=) */

loc_00334C93: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x6490B0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00334CB5; /* ja: above (unsigned >) */

loc_00334CA5: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00334CBE; /* jbe: below or equal (unsigned <=) */

loc_00334CB5: ;
    MEM32(ebx + 0x24) = edi;
    MEM32(ebx + 0x28) = ecx;
    MEM32(ebx + 0x2C) = ecx;

loc_00334CBE: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEM32(ebx + 0x54) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00334D05; /* je: equal / zero */

loc_00334CD0: ;
    ecx = MEM32(esp + 0x64);
    eax = MEM32(ecx + 4);
    xmm1 = MEMF(eax + 0xAC); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    POP32(esp, edi);
    xmm0 = xmm0 + xmm1; /* addss */
    POP32(esp, esi);
    MEMF(eax + 0xAC) = xmm0; /* movss */
    eax = MEM32(esp + 0x58);
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_00334D05: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = xmm0 - MEMF(eax + 0xCC); /* subss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0xCC); /* addss */
    MEMF(eax + 0xCC) = xmm0; /* movss */

loc_00334D2B: ;
    eax = MEM32(esp + 0x60);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00334D70
 * Original: 0x00334D70 - 0x00334EBD (333 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334D70: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x649AAC); /* movss */
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x24));
    (void)0; /* cmp LO16(ebx), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm7 = xmm0; /* movaps */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_00334EB8; /* je: equal / zero */

loc_00334D9E: ;
    edx = MEM32(0x84B330);
    ecx = MEM32(edx + 0x145B8);
    edx = MEM32(edx + 0x145B4);
    xmm0 = MEMF(esp + 0x28); /* movss */
    eax = SX16(LO16(ebx));
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    edx = edx + ecx * 2;
    MEM32(esp + 0x14) = edx;
    edx = ZX16(MEM16(eax + 2));
    edx = edx - ecx;
    PUSH32(esp, ebp);
    xmm3 = xmm0; /* movaps */
    ebp = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_00334EB3; /* jle: less or equal (signed <=) */

loc_00334DE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00334DF2;

loc_00334DEC: ;
    xmm3 = MEMF(esp + 0x34); /* movss */

loc_00334DF2: ;
    eax = MEM32(esp + 0x20);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(eax + ebp * 2));
    eax = MEM32(0x84B0E0);
    edi = edi & 0x7FFF;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    esi = esi + eax;
    SET_LO8(eax, MEM8(esi + 0x33));
    if (CMP_EQ(LO8(eax), 0x3A)) goto loc_00334E25; /* je: equal / zero */

loc_00334E15: ;
    if (CMP_EQ(LO8(eax), 0x39)) goto loc_00334E25; /* je: equal / zero */

loc_00334E19: ;
    if (CMP_EQ(MEM16(esi + 0x12), 0xFFFF)) goto loc_00334E9F; /* je: equal / zero */

loc_00334E25: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00334E30: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    xmm6 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00334E3E: ;
    esp = esp + 0x10;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00334E9B; /* jbe: below or equal (unsigned <=) */

loc_00334E46: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00334E8F; /* jbe: below or equal (unsigned <=) */

loc_00334E51: ;
    if (TEST_S(LO16(ebx), LO16(ebx))) goto loc_00334E85; /* jl: less (signed <) */

loc_00334E56: ;
    eax = MEM32(0x84B264);
    if (CMP_GE(LO16(ebx), MEM16(eax + 4))) goto loc_00334E85; /* jge: greater or equal (signed >=) */

loc_00334E61: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    eax = SX16(LO16(ebx));
    eax = MEM32(ecx + eax * 4);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_00334E79: ;
    SET_LO16(ebx, MEM16(esp + 0x40));
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00334E8F; /* jne: not equal / not zero */

loc_00334E85: ;
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEM32(esp + 0x18) = edi;

loc_00334E8F: ;
    /* comiss xmm7, xmm6 - sets EFLAGS */
    if ((xmm7 <= xmm6)) goto loc_00334E9B; /* jbe: below or equal (unsigned <=) */

loc_00334E94: ;
    xmm7 = xmm6; /* movaps */
    MEM32(esp + 0x1C) = edi;

loc_00334E9B: ;
    edx = MEM32(esp + 0x14);

loc_00334E9F: ;
    ebp++;
    if (CMP_L(ebp, edx)) goto loc_00334DEC; /* jl: less (signed <) */

loc_00334EA8: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00334EB7; /* jne: not equal / not zero */

loc_00334EB3: ;
    eax = MEM32(esp + 0x14);

loc_00334EB7: ;
    POP32(esp, ebp);

loc_00334EB8: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00334EC0
 * Original: 0x00334EC0 - 0x00334ED7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334EC0: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_00334ED7(); return; } /* je: equal / zero */

loc_00334ED3: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00334EE1(); return; /* tail jmp 0x00334EE1 */

}

/**
 * sub_00335030
 * Original: 0x00335030 - 0x00335051 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335030(void)
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

loc_00335030: ;
    eax = MEM32(esp + 8);
    esp = esp - 8;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00335051(); return; } /* je: equal / zero */

loc_00335043: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    g_seh_ebp = ebp; sub_0033505B(); return; /* tail jmp 0x0033505B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00335130
 * Original: 0x00335130 - 0x0033545B (811 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335130(void)
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

loc_00335130: ;
    esp = esp - 0x30;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi + 0x7B4) = 0xFFFFFFFFu;
    MEMF(esi + 0x7C0) = xmm5; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0xA0);
    eax = eax + 0xFFFFFFAEu;
    (void)0; /* cmp eax, 0x1E - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_A(eax, 0x1E)) goto loc_0033519D; /* ja: above (unsigned >) */

loc_0033516D: ;
    ecx = ZX8(MEM8(eax + 0x335470));
    { uint32_t _jt = MEM32(ecx * 4 + 0x33545C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0033517Bu) goto loc_0033517B;
    if (_jt == 0x00335185u) goto loc_00335185;
    if (_jt == 0x0033518Fu) goto loc_0033518F;
    if (_jt == 0x0033519Du) goto loc_0033519D;
    if (_jt == 0x00335456u) goto loc_00335456;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033517B: ;
    xmm0 = MEMF(0x64908C); /* movss */
    goto loc_00335197;

loc_00335185: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    goto loc_00335197;

loc_0033518F: ;
    xmm0 = MEMF(0x648CE0); /* movss */

loc_00335197: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_0033519D: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00335456; /* je: equal / zero */

loc_003351A8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_003351B2: ;
    xmm3 = MEMF(ebx + 0x78); /* movss */
    xmm4 = MEMF(ebx + 0x80); /* movss */
    edi = eax;
    xmm3 = xmm3 - MEMF(edi + 0x18); /* subss */
    xmm4 = xmm4 - MEMF(edi + 0x20); /* subss */
    ebp = ebx + 0x78;
    edx = edi + 0x18;
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    if (1 /* jp after test - parity */) goto loc_003351F3; /* jp: parity */

loc_003351E6: ;
    /* ucomiss xmm4, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00335454; /* jnp: not parity */

loc_003351F3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00335202: ;
    PUSH32(esp, edx);
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648D78); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00335214: ;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    esp = esp + 0x10;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    edx = MEM32(0x84B330);
    xmm0 = MEMF(edi + 0x1C); /* movss */
    SET_LO8(eax, MEM8(edx + 0xD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(ebx + 0x7C); /* subss */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00335454; /* jle: less or equal (signed <=) */

loc_00335270: ;
    edi = MEM32(0x84A5F8);
    xmm3 = MEMF(0x648F60); /* movss */
    edi = edi + 0x78;

loc_00335281: ;
    eax = MEM32(edi + 0x1C0);
    ecx = MEM32(ebx + 0x238);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_00335433; /* jne: not equal / not zero */

loc_00335297: ;
    eax = edi + -120;
    if (CMP_EQ(eax, ebx)) goto loc_00335433; /* je: equal / zero */

loc_003352A2: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 - MEMF(edi + 8); /* subss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_003352E6; /* jp: parity */

loc_003352D9: ;
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00335433; /* jnp: not parity */

loc_003352E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003352ED: ;
    esp = esp + 8;
    xmm6 = xmm0; /* movaps */
    /* comiss xmm6, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm6 > MEMF(esp + 0x28))) goto loc_00335433; /* ja: above (unsigned >) */

loc_003352FE: ;
    xmm0 = MEMF(0x649288); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_0033531F; /* jbe: below or equal (unsigned <=) */

loc_0033530B: ;
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm4 = xmm4 * MEMF(0x648D20); /* mulss */
    MEMF(esp + 0x20) = xmm4; /* movss */

loc_0033531F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0033532E: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0033534B; /* jbe: below or equal (unsigned <=) */

loc_00335342: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00335342; /* ja: above (unsigned >) */

loc_0033534B: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00335359; /* jbe: below or equal (unsigned <=) */

loc_00335350: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_00335350; /* ja: above (unsigned >) */

loc_00335359: ;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_00335371; /* jbe: below or equal (unsigned <=) */

loc_0033536B: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_00335382;

loc_00335371: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0033538B; /* jbe: below or equal (unsigned <=) */

loc_0033537E: ;
    xmm0 = xmm0 + xmm3; /* addss */

loc_00335382: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm1; /* movss */

loc_0033538B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00335433; /* ja: above (unsigned >) */

loc_003353A7: ;
    MEMF(esp + 0x2C) = xmm6; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(edi + 0x4F0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1F0);
    MEM32(esp + 0x38) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00335433; /* ja: above (unsigned >) */

loc_003353EC: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 / xmm4; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, MEMF(esi + 0x7C0) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C0))) goto loc_00335433; /* jbe: below or equal (unsigned <=) */

loc_0033540B: ;
    edx = MEM32(esp + 0x1C);
    MEMF(esi + 0x7C0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEM32(esi + 0x7B4) = edx;
    MEMF(esi + 0x7B8) = xmm1; /* movss */
    MEMF(esi + 0x7BC) = xmm0; /* movss */

loc_00335433: ;
    ecx = MEM32(0x84B330);
    eax = MEM32(esp + 0x1C);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    eax++;
    edi = edi + 0x6D0;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, edx)) goto loc_00335281; /* jl: less (signed <) */

loc_00335454: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00335456: ;
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00335490
 * Original: 0x00335490 - 0x0033569F (527 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335490: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = esi;
    MEM16(ebp + 0x7D8) = LO16(edi);
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_003354AE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00335698; /* je: equal / zero */

loc_003354B6: ;
    if (CMP_LE(LO8(eax), 1)) goto loc_003354C2; /* jle: less or equal (signed <=) */

loc_003354BA: ;
    if (CMP_LE(LO8(eax), 3)) goto loc_00335698; /* jle: less or equal (signed <=) */

loc_003354C2: ;
    eax = ZX16(MEM16(esi + 0x410));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003354E2; /* je: equal / zero */

loc_003354CE: ;
    ecx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    if (CMP_EQ(MEM8(eax + ecx + 0x33), 0x31)) goto loc_00335698; /* je: equal / zero */

loc_003354E2: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(edx + 0x4CC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00335698; /* jnp: not parity */

loc_00335501: ;
    (void)0; /* cmp MEM16(ebp + 0x7C6), LO16(edi) - flags set for next jcc */
    eax = esi + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(MEM16(ebp + 0x7C6), LO16(edi))) goto loc_00335698; /* jbe: below or equal (unsigned <=) */

loc_00335529: ;
    ecx = MEM32(0x84A5F8);
    xmm5 = MEMF(0x649768); /* movss */
    xmm6 = MEMF(0x649844); /* movss */
    xmm7 = MEMF(0x649840); /* movss */
    ecx = ecx + 0x78;
    edx = ebp + 0x7DA;
    eax = ebp + 0x7C8;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebx);

loc_00335563: ;
    ecx = MEM32(esp + 0x10);
    edi = ZX16(MEM16(ecx));
    eax = MEM32(0x84B0E0);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    edi = edi + eax;
    eax = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    edi = edi;

loc_00335580: ;
    edx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(edx + ebx), 1)) goto loc_00335644; /* jne: not equal / not zero */

loc_00335590: ;
    ecx = ZX16(MEM16(esi + 0x60));
    if (CMP_EQ(ecx, ebx)) goto loc_00335644; /* je: equal / zero */

loc_0033559C: ;
    SET_LO8(edx, MEM8(eax + 0xBD));
    if (CMP_EQ(LO8(edx), MEM8(esi + 0x135))) goto loc_00335644; /* je: equal / zero */

loc_003355AE: ;
    edx = MEM32(eax + 0x1C0);
    ecx = MEM32(esi + 0x238);
    edx = MEM32(edx);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_00335644; /* jne: not equal / not zero */

loc_003355C4: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_002AFC50(); /* call 0x002AFC50 */

loc_003355D3: ;
    esp = esp + 8;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_0033563C; /* ja: above (unsigned >) */

loc_003355DB: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_0033563C; /* ja: above (unsigned >) */

loc_003355E0: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003355EF: ;
    esp = esp + 8;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0033563C; /* jbe: below or equal (unsigned <=) */

loc_003355F7: ;
    SET_LO16(edx, MEM16(ebp + 0x7D8));
    ecx = ZX16(LO16(edx));
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00335624; /* jle: less or equal (signed <=) */

loc_00335607: ;
    esi = MEM32(esp + 0x14);
    esi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = esi;

loc_00335612: ;
    if (CMP_EQ(MEM32(esp + 0x20), ebx)) goto loc_00335624; /* je: equal / zero */

loc_00335618: ;
    esi = ZX16(MEM16(ebp + 0x7D8));
    eax++;
    if (CMP_L(eax, esi)) goto loc_00335612; /* jl: less (signed <) */

loc_00335624: ;
    if (CMP_NE(eax, ecx)) goto loc_0033563C; /* jne: not equal / not zero */

loc_00335628: ;
    if (CMP_AE(LO16(edx), 4)) goto loc_0033563C; /* jae: above or equal (unsigned >=) */

loc_0033562E: ;
    MEM8(ecx + ebp + 0x7DA) = LO8(ebx);
    MEM16(ebp + 0x7D8) = MEM16(ebp + 0x7D8) + 1;

loc_0033563C: ;
    esi = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);

loc_00335644: ;
    ebx++;
    eax = eax + 0x6D0;
    (void)0; /* cmp ebx, 0x10 - flags set for next jcc */
    MEM32(esp + 0x44) = eax;
    if (CMP_L(ebx, 0x10)) goto loc_00335580; /* jl: less (signed <) */

loc_00335657: ;
    ecx = MEM32(edi);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(edi + 4);
    ecx = ZX16(MEM16(ebp + 0x7C6));
    MEM32(esp + 0x28) = edx;
    eax = MEM32(edi + 8);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x18);
    eax++;
    ebx = ebx + 2;
    edi++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(eax, ecx)) goto loc_00335563; /* jl: less (signed <) */

loc_00335697: ;
    POP32(esp, ebx);

loc_00335698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003356A0
 * Original: 0x003356A0 - 0x00335826 (390 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003356A0(void)
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

loc_003356A0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x64);
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_003356B4: ;
    ebp = eax;
    eax = MEM32(esp + 0x38);
    if (TEST_Z(eax, eax)) { sub_00335826(); return; } /* je: equal / zero */

loc_003356C2: ;
    if (TEST_Z(ebp, ebp)) { sub_00335826(); return; } /* je: equal / zero */

loc_003356CA: ;
    esi = MEM32(esp + 0x34);
    edi = ZX16(MEM16(esi + 0x60));
    ecx = ebx;
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_003356D9: ;
    if (TEST_Z(eax, eax)) { sub_00335826(); return; } /* je: equal / zero */

loc_003356E1: ;
    eax = MEM32(esp + 0x38);
    if (CMP_NE(eax, 2)) goto loc_003357B9; /* jne: not equal / not zero */

loc_003356EE: ;
    eax = esp + 0x24;
    esi = esi + 0x78;
    edi = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    edx = edi;
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_00335702: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    esp = esp + 4;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0033576F; /* jbe: below or equal (unsigned <=) */

loc_00335761: ;
    esi = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = 1;
    goto loc_003357BE;

loc_0033576F: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0);
    eax = edi;
    ecx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_003357A4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033581A; /* je: equal / zero */

loc_003357AB: ;
    esi = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = 1;
    goto loc_003357BE;

loc_003357B9: ;
    if (CMP_NE(eax, 1)) goto loc_0033581A; /* jne: not equal / not zero */

loc_003357BE: ;
    ecx = esi + 0x78;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x568);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx + 0x444);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(MEM32(eax + 8), 2)) goto loc_003357F7; /* jne: not equal / not zero */

loc_003357ED: ;
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    goto loc_003357FF;

loc_003357F7: ;
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */

loc_003357FF: ;
    PUSH32(esp, 0);
    eax = ebp + 0x18;
    ecx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_00335813: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00335826(); return; } /* jne: not equal / not zero */

loc_0033581A: ;
    eax = MEM32(esp + 0x38);
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
 * sub_00335830
 * Original: 0x00335830 - 0x00335C96 (1126 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335830(void)
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

loc_00335830: ;
    esp = esp - 0x20;
    xmm3 = MEMF(0x648E6C); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebp + 0x64);
    xmm5 = xmm3; /* movaps */
    esi = ebp;
    MEMF(esp + 0x30) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00335856: ;
    esi = eax;
    if (CMP_EQ(MEM8(ebp + 0x64), 0xFF)) goto loc_00335C8F; /* je: equal / zero */

loc_00335862: ;
    edx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x18); /* subss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x20); /* subss */
    edi = edi + edx;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_003358AD; /* jp: parity */

loc_0033589F: ;
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003358AD; /* jp: parity */

loc_003358A8: ;
    xmm7 = xmm6; /* movaps */
    goto loc_003358CA;

loc_003358AD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003358BC: ;
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;

loc_003358CA: ;
    /* comiss xmm6, MEMF(ebp + 0xC8) - sets EFLAGS */
    MEMF(esp + 0xC) = xmm7; /* movss */
    if ((xmm6 < MEMF(ebp + 0xC8))) goto loc_00335925; /* jb: below (unsigned <) */

loc_003358D9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003358DE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM8(ebp + 4);
    if (CMP_GE(edx, MEM32(eax * 4 + 0x74B59C))) goto loc_00335925; /* jge: greater or equal (signed >=) */

loc_003358F3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003358F8: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 4);
    xmm0 = xmm0 * MEMF(ecx * 4 + 0x74B5B0); /* mulss */
    xmm1 = MEMF(ebp + 0xC8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00335915; /* jbe: below or equal (unsigned <=) */

loc_00335912: ;
    xmm0 = xmm1; /* movaps */

loc_00335915: ;
    xmm3 = MEMF(0x648E6C); /* movss */
    MEMF(ebp + 0xC8) = xmm0; /* movss */

loc_00335925: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm2 = MEMF(0x648F64); /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033599F; /* je: equal / zero */

loc_0033593D: ;
    edx = MEM32(edi + 0x568);
    xmm4 = MEMF(edi + 0x114); /* movss */
    xmm4 = xmm4 - MEMF(edx + 0x4D8); /* subss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00335969; /* jbe: below or equal (unsigned <=) */

loc_0033595F: ;
    /* nop */

loc_00335960: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00335960; /* ja: above (unsigned >) */

loc_00335969: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_00335979; /* jbe: below or equal (unsigned <=) */

loc_0033596E: ;
    edi = edi;

loc_00335970: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_00335970; /* ja: above (unsigned >) */

loc_00335979: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0x30) = xmm5; /* movss */
    if ((xmm0 <= xmm3)) goto loc_0033598D; /* jbe: below or equal (unsigned <=) */

loc_00335987: ;
    xmm0 = xmm0 - xmm1; /* subss */
    goto loc_00335996;

loc_0033598D: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0033599F; /* jbe: below or equal (unsigned <=) */

loc_00335992: ;
    xmm0 = xmm0 + xmm1; /* addss */

loc_00335996: ;
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0x30) = xmm5; /* movss */

loc_0033599F: ;
    if (CMP_EQ(MEM32(ebp + 0x7B4), 0xFFFFFFFFu)) goto loc_003359D9; /* je: equal / zero */

loc_003359A8: ;
    xmm0 = MEMF(ebp + 0x7C0); /* movss */
    /* comiss xmm0, MEMF(0x64909C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64909C))) goto loc_003359D9; /* jbe: below or equal (unsigned <=) */

loc_003359B9: ;
    fp_push(MEMF(ebp + 0x7B8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003359D9; /* jbe: below or equal (unsigned <=) */

loc_003359D1: ;
    xmm5 = MEMF(ebp + 0x7B8); /* movss */

loc_003359D9: ;
    /* comiss xmm6, xmm5 - sets EFLAGS */
    if ((xmm6 <= xmm5)) goto loc_003359E7; /* jbe: below or equal (unsigned <=) */

loc_003359DE: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    goto loc_003359EA;

loc_003359E7: ;
    xmm0 = xmm5; /* movaps */

loc_003359EA: ;
    xmm4 = MEMF(0x648E3C); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00335A36; /* jbe: below or equal (unsigned <=) */

loc_003359F7: ;
    eax = MEM32(ebp + 0x98);
    if (TEST_Z(HI8(eax), 2)) goto loc_00335A0C; /* je: equal / zero */

loc_00335A02: ;
    xmm5 = xmm5 + MEMF(0x648CDC); /* addss */
    goto loc_00335A19;

loc_00335A0C: ;
    if (TEST_Z(HI8(eax), 1)) goto loc_00335A19; /* je: equal / zero */

loc_00335A11: ;
    xmm5 = xmm5 - MEMF(0x648CDC); /* subss */

loc_00335A19: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 <= xmm6)) goto loc_00335A2A; /* jbe: below or equal (unsigned <=) */

loc_00335A1E: ;
    eax = eax & 0xFFFFFEFFu;
    eax = eax | 0x200;
    goto loc_00335A41;

loc_00335A2A: ;
    eax = eax & 0xFFFFFDFFu;
    eax = eax | 0x100;
    goto loc_00335A41;

loc_00335A36: ;
    eax = MEM32(ebp + 0x98);
    eax = eax & 0xFFFFFCFFu;

loc_00335A41: ;
    (void)0; /* test HI8(eax), 3 - flags set for next jcc */
    MEM32(ebp + 0x98) = eax;
    if (TEST_Z(HI8(eax), 3)) goto loc_00335BC3; /* je: equal / zero */

loc_00335A50: ;
    xmm1 = MEMF(ebx + 0xDC); /* movss */
    /* comiss xmm1, MEMF(0x648CE4) - sets EFLAGS */
    xmm0 = MEMF(0x648EA4); /* movss */
    if ((xmm1 > MEMF(0x648CE4))) goto loc_00335A97; /* ja: above (unsigned >) */

loc_00335A69: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00335A9F; /* je: equal / zero */

loc_00335A6D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00335A72: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM8(ebp + 4);
    if (CMP_GE(edx, MEM32(eax * 4 + 0x74B5C4))) goto loc_00335A9F; /* jge: greater or equal (signed >=) */

loc_00335A87: ;
    ecx = MEM32(ebx + 0x56C);
    MEM32(ecx + 0xC4) = 1;

loc_00335A97: ;
    xmm0 = MEMF(0x648EB8); /* movss */

loc_00335A9F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648F78); /* addss */
    MEMF(esp) = xmm1; /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x98);
    ecx = ecx >> 8;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx = ebx;
    PUSH32(esp, 0); sub_00335030(); /* call 0x00335030 */

loc_00335AD2: ;
    eax = MEM32(ebx + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x498));
    esp = esp + 0x10;
    if (CMP_EQ(LO16(ecx), 0xFFFFFFFFu)) goto loc_00335AED; /* je: equal / zero */

loc_00335AE8: ;
    edx = SX16(LO16(ecx));
    goto loc_00335AFD;

loc_00335AED: ;
    SET_LO16(eax, MEM16(eax + 0x4AA));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00335B21; /* je: equal / zero */

loc_00335AFA: ;
    edx = SX16(LO16(eax));

loc_00335AFD: ;
    eax = MEM32(0x84B264);
    ecx = MEM32(eax);
    esi = MEM32(ecx + edx * 4);
    if (TEST_Z(esi, esi)) goto loc_00335B21; /* je: equal / zero */

loc_00335B0B: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00335B1A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00335B40; /* je: equal / zero */

loc_00335B21: ;
    eax = ZX16(MEM16(ebx + 0x60));
    xmm3 = MEMF(0x648F08); /* movss */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_0035BA10(); /* call 0x0035BA10 */

loc_00335B39: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00335B79; /* je: equal / zero */

loc_00335B40: ;
    eax = MEM32(ebp + 0x98);
    if (TEST_Z(HI8(eax), 2)) goto loc_00335B62; /* je: equal / zero */

loc_00335B4B: ;
    eax = eax & 0xFFFFFDFFu;
    POP32(esp, edi);
    eax = eax | 0x100;
    POP32(esp, esi);
    MEM32(ebp + 0x98) = eax;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00335B62: ;
    eax = eax & 0xFFFFFEFFu;
    POP32(esp, edi);
    eax = eax | 0x200;
    POP32(esp, esi);
    MEM32(ebp + 0x98) = eax;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00335B79: ;
    PUSH32(esp, 0x1000);
    ecx = ebx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00335B85: ;
    ecx = MEM32(ebx + 0x568);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x498));
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0036F7F0(); /* call 0x0036F7F0 */

loc_00335BA2: ;
    xmm0 = MEMF(0x648E70); /* movss */
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x14C) = xmm0; /* movss */
    MEM8(ebp + 0xEC) = 0;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00335BC3: ;
    xmm0 = MEMF(ebx + 0x114); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    xmm7 = xmm7 - xmm3; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0xC8) = xmm4; /* movss */
    eax = 1;
    if ((xmm0 <= xmm1)) goto loc_00335BF9; /* jbe: below or equal (unsigned <=) */

loc_00335BED: ;
    /* nop */

loc_00335BF0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00335BF0; /* ja: above (unsigned >) */

loc_00335BF9: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_00335C09; /* jbe: below or equal (unsigned <=) */

loc_00335BFE: ;
    edi = edi;

loc_00335C00: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_00335C00; /* ja: above (unsigned >) */

loc_00335C09: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_00335C1A; /* jbe: below or equal (unsigned <=) */

loc_00335C14: ;
    xmm0 = xmm0 - xmm1; /* subss */
    goto loc_00335C23;

loc_00335C1A: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00335C29; /* jbe: below or equal (unsigned <=) */

loc_00335C1F: ;
    xmm0 = xmm0 + xmm1; /* addss */

loc_00335C23: ;
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_00335C29: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00335C41; /* jbe: below or equal (unsigned <=) */

loc_00335C3D: ;
    eax = 0; /* xor self */
    goto loc_00335C66;

loc_00335C41: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* comiss xmm0, MEMF(0x649DC0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649DC0))) goto loc_00335C66; /* jbe: below or equal (unsigned <=) */

loc_00335C4F: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(edx + 8), 4)) goto loc_00335C66; /* jne: not equal / not zero */

loc_00335C61: ;
    eax = 2;

loc_00335C66: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_003356A0(); /* call 0x003356A0 */

loc_00335C6F: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ecx + 0x530);
    esp = esp + 8;
    if (CMP_EQ(edx, eax)) goto loc_00335C8F; /* je: equal / zero */

loc_00335C82: ;
    edx = MEM32(ebx + 0x56C);
    MEM32(edx + 0x68) = 1;

loc_00335C8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00335CA0
 * Original: 0x00335CA0 - 0x00335D10 (112 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335CA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00335CA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00335CA7: ;
    eax = MEM32(esi + 0x98);
    esp = esp + 8;
    if (TEST_NZ(eax, 0x8000000)) goto loc_00335CDB; /* jne: not equal / not zero */

loc_00335CB7: ;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00335D0D; /* ja: above (unsigned >) */

loc_00335CC9: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00335D0D; /* ja: above (unsigned >) */

loc_00335CDB: ;
    xmm0 = MEMF(esi + 0xE4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    ecx = (int32_t)MEMF(esi + 0xE4); /* cvttss2si */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_EQ(eax, ecx)) { sub_00335D10(); return; } /* je: equal / zero */

loc_00335CFB: ;
    PUSH32(esp, 0);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_00335D06: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00335D10(); return; } /* je: equal / zero */

loc_00335D0D: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00335D20
 * Original: 0x00335D20 - 0x00335F9C (636 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335D20: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 0x60));
    esi = eax;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00335D36: ;
    ebx = MEM32(0x84A6B8);
    edi = eax;
    SET_LO16(eax, MEM16(esi + 0xB4));
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(ebx, 0x14)) ? 1 : 0); /* setl */
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x13) = LO8(ecx);
    MEM8(esp + 0x30) = 0;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00335DEC; /* je: equal / zero */

loc_00335D62: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00335DEC; /* je: equal / zero */

loc_00335D6A: ;
    ecx = MEM32(0x84B0E0);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edi = MEM32(esp + 0x34);
    eax = eax + ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    eax = MEM32(eax + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_00335CA0(); /* call 0x00335CA0 */

loc_00335DD8: ;
    edi = MEM32(esp + 0x20);
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00335DEC; /* jne: not equal / not zero */

loc_00335DE3: ;
    MEM16(esi + 0xB4) = 0xFFFF;

loc_00335DEC: ;
    if (CMP_NE(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_00335F6B; /* jne: not equal / not zero */

loc_00335DFA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00335F6B; /* je: equal / zero */

loc_00335E06: ;
    edx = MEM32(esi + 0x7AC);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(edx, edx)) goto loc_00335F04; /* je: equal / zero */

loc_00335E19: ;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_00335E22: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00335E37; /* je: equal / zero */

loc_00335E28: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00335E35; /* je: equal / zero */

loc_00335E30: ;
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) goto loc_00335E37; /* jne: not equal / not zero */

loc_00335E35: ;
    ebx = 0; /* xor self */

loc_00335E37: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00335E83; /* jle: less or equal (signed <=) */

loc_00335E3D: ;
    /* nop */

loc_00335E40: ;
    if (CMP_NE(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_00335E81; /* jne: not equal / not zero */

loc_00335E4A: ;
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00342590(); /* call 0x00342590 */

loc_00335E72: ;
    esp = esp + 0x20;
    edi++;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM16(esi + 0xB4) = LO16(eax);
    if (CMP_L(edi, ebx)) goto loc_00335E40; /* jl: less (signed <) */

loc_00335E81: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */

loc_00335E83: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00335EBD; /* jne: not equal / not zero */

loc_00335E85: ;
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x568);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x498);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00342590(); /* call 0x00342590 */

loc_00335EB3: ;
    esp = esp + 0x20;
    MEM16(esi + 0xB4) = LO16(eax);

loc_00335EBD: ;
    edi = MEM32(esp + 0x14);

loc_00335EC1: ;
    if (CMP_NE(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_00335F47; /* jne: not equal / not zero */

loc_00335ECB: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00335F6B; /* je: equal / zero */

loc_00335ED7: ;
    eax = MEM32(esi + 0x98);
    eax = eax & 0xFFFF7FFFu;
    eax = eax | 0x10000;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x98) = eax;
    if (TEST_Z(edi, edi)) goto loc_00335F6B; /* je: equal / zero */

loc_00335EF1: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x14));
    if (TEST_Z(LO8(eax), 4)) goto loc_00335F3E; /* je: equal / zero */

loc_00335EFB: ;
    eax = eax | 8;
    MEM16(edi + 0x14) = LO16(eax);
    goto loc_00335F6B;

loc_00335F04: ;
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x498);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00342590(); /* call 0x00342590 */

loc_00335F32: ;
    esp = esp + 0x20;
    MEM16(esi + 0xB4) = LO16(eax);
    goto loc_00335EC1;

loc_00335F3E: ;
    eax = eax | 4;
    MEM16(edi + 0x14) = LO16(eax);
    goto loc_00335F6B;

loc_00335F47: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(edi + 0x14) = MEM8(edi + 0x14) & 0xFB;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 0x98);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00335F60; /* jne: not equal / not zero */

loc_00335F59: ;
    eax = eax | 0x8000000;
    goto loc_00335F65;

loc_00335F60: ;
    eax = eax & 0xF7FFFFFFu;

loc_00335F65: ;
    MEM32(esi + 0x98) = eax;

loc_00335F6B: ;
    SET_LO16(esi, MEM16(esi + 0xB4));
    if (CMP_EQ(LO16(esi), 0xFFFFFFFFu)) { sub_00335F9C(); return; } /* je: equal / zero */

loc_00335F78: ;
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00335F85: ;
    ecx = esi;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_00335F8F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00335FB0
 * Original: 0x00335FB0 - 0x00335FED (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335FB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x64);
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00335FC2: ;
    SET_LO16(edx, MEM16(eax + 0x14));
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm4; /* movaps */
    if (TEST_Z(LO8(edx), 1)) { sub_00335FED(); return; } /* je: equal / zero */

loc_00335FD1: ;
    eax = MEM32(esi + 0x98);
    eax = eax & 0xFFFEFFFFu;
    eax = eax | 0x8000;
    POP32(esp, edi);
    MEM32(esi + 0x98) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003360F0
 * Original: 0x003360F0 - 0x003362DC (492 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003360F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003360F0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    SET_LO8(ebx, MEM8(ebp + 0x64));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = SX8(LO8(ebx));
    esi = ebp;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00336108: ;
    esi = 0; /* xor self */
    if (CMP_EQ(LO8(ebx), 0xFF)) goto loc_003362D4; /* je: equal / zero */

loc_00336113: ;
    ebx = MEM32(esp + 0x30);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x18); /* subss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x20); /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_00336157; /* jp: parity */

loc_00336146: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00336157; /* jp: parity */

loc_0033614F: ;
    MEMF(esp + 0x34) = xmm2; /* movss */
    goto loc_00336177;

loc_00336157: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00336166: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_00336177: ;
    eax = MEM32(ebp + 0x98);
    if (TEST_NZ(HI8(eax), 3)) goto loc_003361AD; /* jne: not equal / not zero */

loc_00336182: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00336187: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00336193; /* jns: not sign (positive) */

loc_0033618E: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00336193: ;
    eax = MEM32(ebp + 0x98);
    if ((eax == 0)) goto loc_003361A2; /* je: equal / zero */

loc_0033619B: ;
    eax = eax | 0x100;
    goto loc_003361A7;

loc_003361A2: ;
    eax = eax | 0x200;

loc_003361A7: ;
    MEM32(ebp + 0x98) = eax;

loc_003361AD: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(0x648F08); /* movss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x42960000);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x98);
    ecx = ecx >> 8;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx = ebx;
    PUSH32(esp, 0); sub_00335030(); /* call 0x00335030 */

loc_003361DC: ;
    eax = MEM32(ebx + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x498));
    esp = esp + 0x10;
    if (CMP_NE(LO16(ecx), 0xFFFFFFFFu)) goto loc_003361FF; /* jne: not equal / not zero */

loc_003361F2: ;
    SET_LO16(ecx, MEM16(eax + 0x4AA));
    if (CMP_EQ(LO16(ecx), 0xFFFFFFFFu)) goto loc_0033620D; /* je: equal / zero */

loc_003361FF: ;
    edx = SX16(LO16(ecx));
    ecx = MEM32(0x84B264);
    ecx = MEM32(ecx);
    esi = MEM32(ecx + edx * 4);

loc_0033620D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(0x649B78); /* movss */
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00336237; /* je: equal / zero */

loc_00336221: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00336230: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00336256; /* je: equal / zero */

loc_00336237: ;
    eax = ZX16(MEM16(ebx + 0x60));
    xmm3 = MEMF(0x648F08); /* movss */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_0035BA10(); /* call 0x0035BA10 */

loc_0033624F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00336291; /* je: equal / zero */

loc_00336256: ;
    eax = MEM32(ebp + 0x98);
    if (TEST_Z(HI8(eax), 2)) goto loc_00336279; /* je: equal / zero */

loc_00336261: ;
    POP32(esp, edi);
    eax = eax & 0xFFFFFDFFu;
    eax = eax | 0x100;
    POP32(esp, esi);
    MEM32(ebp + 0x98) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00336279: ;
    POP32(esp, edi);
    eax = eax & 0xFFFFFEFFu;
    eax = eax | 0x200;
    POP32(esp, esi);
    MEM32(ebp + 0x98) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00336291: ;
    PUSH32(esp, 0x1000);
    ecx = ebx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033629D: ;
    ecx = MEM32(ebx + 0x568);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x498));
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0036F7F0(); /* call 0x0036F7F0 */

loc_003362BA: ;
    xmm0 = MEMF(0x648E70); /* movss */
    esp = esp + 0x10;
    MEMF(ebp + 0x14C) = xmm0; /* movss */
    MEM8(ebp + 0xEC) = 0;

loc_003362D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003362E0
 * Original: 0x003362E0 - 0x0033638B (171 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003362E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003362E0: ;
    esp = esp - 0x20;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x64);
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ebx = ebx + eax;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0033630B: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_00370BD0(); /* call 0x00370BD0 */

loc_0033631E: ;
    eax = esi;
    edi = eax + 0x194;
    PUSH32(esp, eax);
    ebx = esp + 0x24;
    esi = esp + 0x20;
    eax = ebp;
    PUSH32(esp, 0); sub_00334EC0(); /* call 0x00334EC0 */

loc_00336336: ;
    eax = MEM32(esp + 0x40);
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(0x59D944); /* movss */
    xmm0 = MEMF(eax + 0x194); /* movss */
    eax = eax + 0x194;
    esp = esp + 8;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm3; /* movaps */
    if ((xmm2 > xmm3)) goto loc_00336369; /* ja: above (unsigned >) */

loc_00336366: ;
    xmm1 = xmm2; /* movaps */

loc_00336369: ;
    xmm0 = xmm0 + MEMF(0x648EB8); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033638B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00336376: ;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_00336383; /* jbe: below or equal (unsigned <=) */

loc_0033637B: ;
    MEMF(esp + 0x10) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_00336391(); return; /* tail jmp 0x00336391 */

loc_00336383: ;
    MEMF(esp + 0x10) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00336391(); return; /* tail jmp 0x00336391 */

}

/**
 * sub_00336A80
 * Original: 0x00336A80 - 0x00336A93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336A80: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00336A93(); return; } /* je: equal / zero */

loc_00336A89: ;
    xmm0 = MEMF(0x64983C); /* movss */
    g_seh_ebp = ebp; sub_00336AD5(); return; /* tail jmp 0x00336AD5 */

}

/**
 * sub_00336C20
 * Original: 0x00336C20 - 0x00336C31 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336C20: ;
    SET_LO8(eax, MEM8(0x80189B));
    esp = esp - 0x14;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(LO8(eax), 0xFF)) { sub_00336C31(); return; } /* jne: not equal / not zero */

loc_00336C2D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00336C3F(); return; /* tail jmp 0x00336C3F */

}

/**
 * sub_00336D70
 * Original: 0x00336D70 - 0x00336D9E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336D70: ;
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x64);
    esi = ebx;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00336D81: ;
    if (TEST_Z(eax, eax)) { sub_00336D9E(); return; } /* je: equal / zero */

loc_00336D85: ;
    eax = eax + 0x18;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    g_seh_ebp = ebp; sub_00336DC0(); return; /* tail jmp 0x00336DC0 */

}

/**
 * sub_00336FC0
 * Original: 0x00336FC0 - 0x00337173 (435 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336FC0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = eax;
    MEM32(esi) = ebx;
    MEM8(esi + 6) = 2;
    MEM8(esi + 0x1E) = 0;
    MEM8(esi + 7) = 0;
    MEM16(esi + 0x2D86) = 0xFFFF;
    MEM32(esi + 0x2D80) = ebp;
    MEMF(esi + 0x2D8C) = xmm0; /* movss */
    MEM32(esi + 0x2D88) = ebp;
    MEM32(esi + 0x2D94) = ebp;
    MEM8(esi + 0x2D84) = 1;
    edx = MEM32(0x84B330);
    SET_LO8(eax, MEM8(edx + 0xD));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(0x74B708) = 1;
    MEM8(0x74B709) = 1;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00337081; /* jle: less or equal (signed <=) */

loc_0033701F: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x238;
    /* nop */

loc_00337030: ;
    edi = ZX16(MEM16(eax + -472));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x8CC);
    edx = edi + edx + 0x38;
    edi = MEM32(eax);
    if (CMP_NE(MEM32(edi), ebx)) goto loc_0033706D; /* jne: not equal / not zero */

loc_00337047: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x1E);
    MEM8(edi + esi + 0x20) = LO8(ecx);
    MEM8(esi + 0x1E) = MEM8(esi + 0x1E) + 1;
    MEM32(edx + 0x19C) = 0xFFFFFFFFu;
    edx = MEM32(eax + 0x330);
    if (CMP_NE(MEM32(edx + 0xBC), ebp)) goto loc_0033706D; /* jne: not equal / not zero */

loc_0033706A: ;
    MEM8(esi + 0x1F) = MEM8(esi + 0x1F) + 1;

loc_0033706D: ;
    edx = MEM32(0x84B330);
    edi = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, edi)) goto loc_00337030; /* jl: less (signed <) */

loc_00337081: ;
    edi = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = 0; /* xor self */
    if (CMP_LE(edi, ebp)) goto loc_003370C3; /* jle: less or equal (signed <=) */

loc_0033708E: ;
    edx = MEM32(0x84B0E0);
    ecx = 0; /* xor self */

loc_00337096: ;
    if (CMP_NE(MEM8(ecx + edx + 0x33), 0x2D)) goto loc_003370B3; /* jne: not equal / not zero */

loc_0033709D: ;
    ebp = ZX8(MEM8(ecx + edx + 0x35));
    if (CMP_NE(ebp, ebx)) goto loc_003370B3; /* jne: not equal / not zero */

loc_003370A6: ;
    MEM16(esi + 0x2D86) = LO16(eax);
    edx = MEM32(0x84B0E0);

loc_003370B3: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, edi)) goto loc_00337096; /* jl: less (signed <) */

loc_003370BB: ;
    edx = MEM32(0x84B330);
    ebp = 0; /* xor self */

loc_003370C3: ;
    eax = 0x8006B4;

loc_003370C8: ;
    MEM32(eax + -4) = ebp;
    ecx = ecx | 0xFFFFFFFFu;
    edi = eax;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = ecx;
    MEM32(edi + 0x20) = ecx;
    MEM32(edi + 0x24) = ecx;
    MEM32(edi + 0x28) = ecx;
    MEM32(edi + 0x2C) = ecx;
    MEM32(edi + 0x30) = ecx;
    MEM32(edi + 0x34) = ecx;
    MEM32(edi + 0x38) = ecx;
    MEM32(edi + 0x3C) = ecx;
    MEM32(edi + 0x40) = ecx;
    MEM32(edi + 0x44) = ecx;
    MEM32(edi + 0x48) = ecx;
    MEM32(edi + 0x4C) = ecx;
    MEM32(edi + 0x50) = ecx;
    MEM32(edi + 0x54) = ecx;
    MEM32(edi + 0x58) = ecx;
    MEM32(edi + 0x5C) = ecx;
    MEM32(edi + 0x60) = ecx;
    MEM32(edi + 0x64) = ecx;
    MEM32(edi + 0x68) = ecx;
    MEM32(edi + 0x6C) = ecx;
    MEM32(edi + 0x70) = ecx;
    MEM32(edi + 0x74) = ecx;
    eax = eax + 0x84;
    (void)0; /* cmp eax, 0x800EF4 - flags set for next jcc */
    MEM32(edi + 0x78) = ecx;
    MEM32(edi + 0x7C) = ecx;
    if (CMP_L(eax, 0x800EF4)) goto loc_003370C8; /* jl: less (signed <) */

loc_0033713B: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    eax = eax << 2;
    ebx = MEM32(eax + 0x74B640);
    eax = MEM32(eax + 0x74B654);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = eax;
    ebp = edx;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = edi - eax;
    ebp = ebp - edx - _cf; /* sbb */
    edx = 1;
    edi = edi + edx;
    ecx = 0;
    ebp = ebp + ecx + _cf; /* adc */
    if (CMP_NE(edi, edx)) { sub_00337173(); return; } /* jne: not equal / not zero */

loc_0033716B: ;
    if (CMP_NE(ebp, ecx)) { sub_00337173(); return; } /* jne: not equal / not zero */

loc_0033716F: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_0033718B(); return; /* tail jmp 0x0033718B */

}

/**
 * sub_003371F0
 * Original: 0x003371F0 - 0x00337332 (322 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003371F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003371F0: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x2D84));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(edi + 0x2D8C); /* addss */
    MEMF(edi + 0x2D8C) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00337220; /* jne: not equal / not zero */

loc_00337217: ;
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CE4))) goto loc_00337232; /* jb: below (unsigned <) */

loc_00337220: ;
    esi = edi;
    PUSH32(esp, 0); sub_00339ED0(); /* call 0x00339ED0 */

loc_00337227: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x2D8C) = xmm0; /* movss */

loc_00337232: ;
    eax = MEM32(edi + 0x2D80);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi + 0x30;
    if (CMP_LE(eax & eax, 0)) goto loc_00337259; /* jle: less or equal (signed <=) */

loc_00337241: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00337500(); /* call 0x00337500 */

loc_00337248: ;
    eax = MEM32(edi + 0x2D80);
    esi++;
    ebx = ebx + 0x488;
    if (CMP_L(esi, eax)) goto loc_00337241; /* jl: less (signed <) */

loc_00337259: ;
    SET_LO8(eax, MEM8(edi + 0x1E));
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0033732A; /* jle: less or equal (signed <=) */

loc_00337266: ;
    PUSH32(esp, ebp);
    goto loc_00337270;

    /* nop */

loc_00337270: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + esi + 0x20);
    ebx = MEM32(0x84A5F8);
    ecx = MEM32(0x84B330);
    ebp = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    edx = ZX16(MEM16(ebp + ebx + 0x410));
    ebp = ebp + ebx;
    ebx = eax + ecx + 0x38;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x498));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0x49C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_003372BF: ;
    MEM16(ebp + 0x410) = LO16(eax);
    eax = MEM32(ebp + 0x568);
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0033731C; /* je: equal / zero */

loc_003372D3: ;
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_0033731C; /* jne: not equal / not zero */

loc_003372DC: ;
    SET_LO8(eax, MEM8(ebx + 0xB));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033731C; /* jne: not equal / not zero */

loc_003372E3: ;
    if (CMP_BE(MEM16(ebp + 0x3AE), 0)) goto loc_0033731C; /* jbe: below or equal (unsigned <=) */

loc_003372ED: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0033AC60(); /* call 0x0033AC60 */

loc_003372F5: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x444);
    eax = MEM32(eax + 8);
    eax--;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_0033730E; /* je: equal / zero */

loc_00337308: ;
    eax = eax - 4;
    if ((eax == 0)) { sub_00337332(); return; } /* je: equal / zero */

loc_0033730D: ;
    eax--;

loc_0033730E: ;
    PUSH32(esp, 0); sub_0033B4A0(); /* call 0x0033B4A0 */

loc_00337313: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_0033B8F0(); /* call 0x0033B8F0 */

loc_0033731C: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1E);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00337270; /* jl: less (signed <) */

loc_00337329: ;
    POP32(esp, ebp);

loc_0033732A: ;
    MEM8(edi + 0x1C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00337340
 * Original: 0x00337340 - 0x00337446 (262 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337340: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00337428; /* jle: less or equal (signed <=) */

loc_00337366: ;
    eax = 0xFFFFFFE0u;
    eax = eax - ebx;
    PUSH32(esp, edi);
    edi = ebx + 0x20;
    MEM32(esp + 0x18) = eax;

loc_00337375: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    edx = MEM32(0x84B330);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    if (CMP_NE(MEM8(ecx + edx + 0x43), 0)) goto loc_003373D1; /* jne: not equal / not zero */

loc_0033738D: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + 0x78;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = esi;
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
    ebp++;

loc_003373D1: ;
    eax = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x1E);
    edi++;
    eax = eax + edi;
    if (CMP_L(eax, ecx)) goto loc_00337375; /* jl: less (signed <) */

loc_003373E0: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ebp, ebp)) goto loc_00337428; /* je: equal / zero */

loc_003373E5: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00337428: ;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0033743A: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    MEM32(ebx + 0x18) = eax;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00337450
 * Original: 0x00337450 - 0x003374F6 (166 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337450: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0x10;
    esi = 0x6D00;
    /* nop */

loc_00337460: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + edi), 0x2D)) goto loc_00337495; /* jne: not equal / not zero */

loc_0033746B: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(esi + ecx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0033747D: ;
    if (TEST_Z(eax, eax)) goto loc_00337495; /* je: equal / zero */

loc_00337481: ;
    edx = MEM32(0x84A5F8);
    eax = MEM32(esi + edx + 0x238);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(ebx))) goto loc_00337495; /* jne: not equal / not zero */

loc_00337494: ;
    ebp++;

loc_00337495: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_00337460; /* jl: less (signed <) */

loc_003374A4: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x1E);
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_003374E5; /* jle: less or equal (signed <=) */

loc_003374AE: ;
    edx = MEM32(0x84B330);
    goto loc_003374C0;

    /* nop */
    /* nop */

loc_003374C0: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + ecx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    eax = eax + edx + 0x38;
    SET_LO16(eax, MEM16(eax + 2));
    if (CMP_EQ(LO16(eax), 0x2A)) goto loc_003374DF; /* je: equal / zero */

loc_003374D9: ;
    if (CMP_NE(LO16(eax), 0x2B)) goto loc_003374E0; /* jne: not equal / not zero */

loc_003374DF: ;
    ebp++;

loc_003374E0: ;
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_003374C0; /* jl: less (signed <) */

loc_003374E5: ;
    ecx = MEM32(ebx + 0x2D90);
    POP32(esp, edi);
    eax = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_L(ebp, ecx)) ? 1 : 0); /* setl */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00337500
 * Original: 0x00337500 - 0x003375CC (204 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337500: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(edi + 0x444); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    eax = eax + 0xFFFFFFF6u;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    MEMF(edi + 0x444) = xmm0; /* movss */
    MEM8(edi + 0x448) = 0;
    if (CMP_A(eax, 6)) goto loc_003375BA; /* ja: above (unsigned >) */

loc_00337531: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3375CC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00337538u) goto loc_00337538;
    if (_jt == 0x0033754Fu) goto loc_0033754F;
    if (_jt == 0x00337568u) goto loc_00337568;
    if (_jt == 0x00337580u) goto loc_00337580;
    if (_jt == 0x00337597u) goto loc_00337597;
    if (_jt == 0x003375B3u) goto loc_003375B3;
    if (_jt == 0x003375BAu) goto loc_003375BA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00337538: ;
    PUSH32(esp, 0); sub_003377F0(); /* call 0x003377F0 */

loc_0033753D: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0033754F: ;
    eax = edi;
    PUSH32(esp, 0); sub_00337FC0(); /* call 0x00337FC0 */

loc_00337556: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00337568: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00338080(); /* call 0x00338080 */

loc_0033756E: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00337580: ;
    PUSH32(esp, 0); sub_00338470(); /* call 0x00338470 */

loc_00337585: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00337597: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(edi + 0xA0) = 1;
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003375B3: ;
    eax = edi;
    PUSH32(esp, 0); sub_00338130(); /* call 0x00338130 */

loc_003375BA: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0x444) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003375F0
 * Original: 0x003375F0 - 0x00337612 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003375F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003375F0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_003375F9: ;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0033760C; /* jle: less or equal (signed <=) */

loc_003375FF: ;
    edx = MEM32(esp);

loc_00337602: ;
    if (CMP_EQ(MEM32(edx + ecx * 4), esi)) { sub_00337612(); return; } /* je: equal / zero */

loc_00337607: ;
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_00337602; /* jl: less (signed <) */

loc_0033760C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337620
 * Original: 0x00337620 - 0x003376A7 (135 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00337620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x568);
    ebx = ebx | 0xFFFFFFFFu;
    if (TEST_Z(eax, eax)) goto loc_00337638; /* je: equal / zero */

loc_00337631: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x498);

loc_00337638: ;
    eax = MEM32(esi + 4);
    eax = eax - 0xA;
    if ((eax == 0)) goto loc_00337666; /* je: equal / zero */

loc_00337640: ;
    eax--;
    if ((eax != 0)) goto loc_00337682; /* jne: not equal / not zero */

loc_00337643: ;
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00337682; /* je: equal / zero */

loc_0033764B: ;
    ecx = MEM32(0x84B330);
    edx = MEM32(ecx + 0x8DF8);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    if (CMP_NE(ebx, eax)) goto loc_00337682; /* jne: not equal / not zero */

loc_0033765F: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337666: ;
    ecx = ZX16(MEM16(ecx + 0x60));
    if (CMP_NE(MEM32(esi + 0xC), ecx)) goto loc_00337682; /* jne: not equal / not zero */

loc_0033766F: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_0033767D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0033765F; /* jne: not equal / not zero */

loc_00337682: ;
    edx = MEM32(esi + 0x45C);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003376A0; /* jle: less or equal (signed <=) */

loc_0033768E: ;
    ecx = esi + 0x460;

loc_00337694: ;
    if (CMP_EQ(MEM32(ecx), ebx)) goto loc_0033765F; /* je: equal / zero */

loc_00337698: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00337694; /* jl: less (signed <) */

loc_003376A0: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003376B0
 * Original: 0x003376B0 - 0x003376D2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003376B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003376B0: ;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx + 0x45C) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_003376D1; /* jle: less or equal (signed <=) */

loc_003376BC: ;
    ecx = ecx + 0x460;
    PUSH32(esp, edi);

loc_003376C3: ;
    edi = MEM32(esi + eax * 4);
    MEM32(ecx) = edi;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_003376C3; /* jl: less (signed <) */

loc_003376D0: ;
    POP32(esp, edi);

loc_003376D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003376E0
 * Original: 0x003376E0 - 0x00337716 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003376E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003376E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_003376EB: ;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0033770F; /* jle: less or equal (signed <=) */

loc_003376F1: ;
    esi = MEM32(esp + 4);

loc_003376F5: ;
    if (CMP_NE(MEM32(esi + edx * 4), edi)) goto loc_0033770A; /* jne: not equal / not zero */

loc_003376FA: ;
    ecx = MEM32(ebx + 0x7AC);
    if (TEST_Z(ecx, ecx)) goto loc_0033770A; /* je: equal / zero */

loc_00337704: ;
    if (CMP_EQ(MEM32(ecx + 4), 0xB)) { sub_00337716(); return; } /* je: equal / zero */

loc_0033770A: ;
    edx++;
    if (CMP_L(edx, eax)) goto loc_003376F5; /* jl: less (signed <) */

loc_0033770F: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337720
 * Original: 0x00337720 - 0x003377E0 (192 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337720: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) { sub_003377E0(); return; } /* je: equal / zero */

loc_00337735: ;
    eax = MEM32(ebx + 0x4B0);
    if (TEST_Z(eax, eax)) { sub_003377E0(); return; } /* je: equal / zero */

loc_00337743: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) { sub_003377E0(); return; } /* je: equal / zero */

loc_0033774E: ;
    edi = MEM32(eax + 8);
    if (TEST_Z(edi, edi)) { sub_003377E0(); return; } /* je: equal / zero */

loc_00337759: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = 0x5E991C;
    PUSH32(esp, 0); sub_003ED460(); /* call 0x003ED460 */

loc_00337766: ;
    esi = eax;
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63AAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0033777A: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) { sub_003377E0(); return; } /* je: equal / zero */

loc_00337781: ;
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_0033778A; /* je: equal / zero */

loc_00337787: ;
    eax = MEM32(esi + 0x34);

loc_0033778A: ;
    ecx = MEM32(ebx + 0x3C8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = esp + 0x1C;
    ecx = edi;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_003377A1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003377E0(); return; } /* je: equal / zero */

loc_003377A8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_003377D6; /* jne: not equal / not zero */

loc_003377C8: ;
    PUSH32(esp, ebp);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_003377D3: ;
    esp = esp + 0xC;

loc_003377D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003377F0
 * Original: 0x003377F0 - 0x0033782B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003377F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003377F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + ebp;
    ebp = edi + 0x44C;
    PUSH32(esp, ebp);
    eax = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00337720(); /* call 0x00337720 */

loc_0033781B: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033782B(); return; } /* je: equal / zero */

loc_00337822: ;
    MEM8(edi + 0x448) = 1;
    g_seh_ebp = ebp; sub_0033783B(); return; /* tail jmp 0x0033783B */

}

/**
 * sub_00337910
 * Original: 0x00337910 - 0x00337BC8 (696 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337910: ;
    esp = esp - 0x40;
    eax = MEM32(ebx + 0x10);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ebx + 0x10;
    MEM8(esp + 7) = 0;
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00337B98; /* je: equal / zero */

loc_0033792C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = edi;

loc_00337930: ;
    edx = MEM32(0x84B330);
    ecx = MEM32(edx + 0x145B8);
    edx = MEM32(edx + 0x145B4);
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(eax + 2));
    eax = eax - ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = edx + ecx * 2;
    if (CMP_LE(eax & eax, 0)) goto loc_00337B7B; /* jle: less or equal (signed <=) */

loc_00337959: ;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = eax;

loc_00337961: ;
    edx = 0; /* xor self */
    MEM32(esp + 0x10) = edx;
    goto loc_00337970;

    /* nop */

loc_00337970: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(0x84B0E0);
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(eax));
    ebp = ebp & 0x7FFF;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    SET_LO8(ecx, MEM8(eax + edi + 0x33));
    eax = eax + edi;
    if (CMP_B(LO8(ecx), 0x2D)) goto loc_003379A7; /* jb: below (unsigned <) */

loc_00337995: ;
    if (CMP_BE(LO8(ecx), 0x2E)) goto loc_00337B4B; /* jbe: below or equal (unsigned <=) */

loc_0033799E: ;
    if (CMP_EQ(LO8(ecx), 0x31)) goto loc_00337B4B; /* je: equal / zero */

loc_003379A7: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x38) = ecx;
    eax = MEM32(eax + 8);
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEM32(esp + 0x3C) = eax;
    if (TEST_NZ(edx, edx)) goto loc_003379CF; /* jne: not equal / not zero */

loc_003379C5: ;
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    goto loc_003379D7;

loc_003379CF: ;
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */

loc_003379D7: ;
    ecx = esp + 0x34;
    edx = esp + 0x40;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x40;
    MEM32(esp + 0x2C) = eax;
    edx = MEM32(esp + 0x2C);
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
    xmm1 = MEMF(0x6493E4); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00337B4B; /* ja: above (unsigned >) */

loc_00337A5C: ;
    /* comiss xmm0, MEMF(0x649DB4) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649DB4))) goto loc_00337B4B; /* ja: above (unsigned >) */

loc_00337A69: ;
    eax = MEM32(esp + 0x54);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x50);
    ecx = esp + 0x34;
    if (TEST_Z(eax, eax)) goto loc_00337A7D; /* je: equal / zero */

loc_00337A79: ;
    PUSH32(esp, 0);
    goto loc_00337A82;

loc_00337A7D: ;
    PUSH32(esp, 0x42700000);

loc_00337A82: ;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_00337A87: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00337B4B; /* jne: not equal / not zero */

loc_00337A92: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x30)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(ebx + 0x440);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00337ADE; /* jle: less or equal (signed <=) */

loc_00337AB6: ;
    eax = ebx + 0x1EC;
    /* nop */

loc_00337AC0: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x1C))) goto loc_00337AD9; /* ja: above (unsigned >) */

loc_00337ACB: ;
    esi = MEM32(ebx + 0x440);
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, esi)) goto loc_00337AC0; /* jl: less (signed <) */

loc_00337AD9: ;
    if (CMP_GE(ecx, 0x1E)) goto loc_00337B4B; /* jge: greater or equal (signed >=) */

loc_00337ADE: ;
    if (CMP_GE(edx, 0x1E)) goto loc_00337AEA; /* jge: greater or equal (signed >=) */

loc_00337AE3: ;
    edx++;
    MEM32(ebx + 0x440) = edx;

loc_00337AEA: ;
    eax = MEM32(ebx + 0x440);
    eax = eax - ecx;
    eax--;
    edx = ecx + ecx * 4;
    eax = eax + eax * 4;
    esi = ebx + edx * 4;
    eax = eax << 2;
    PUSH32(esp, eax);
    edi = esi + 0x1E8;
    ecx = esi + 0x1FC;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00337B13: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi + 0x1EC) = xmm0; /* movss */
    MEM32(edi) = ebp;
    if (TEST_NZ(eax, eax)) goto loc_00337B44; /* jne: not equal / not zero */

loc_00337B2E: ;
    MEM8(esi + 0x1F8) = 0;
    MEM32(esp + 0x10) = 2;
    MEM8(esp + 0xF) = 1;
    goto loc_00337B4B;

loc_00337B44: ;
    MEM8(esi + 0x1F8) = 1;

loc_00337B4B: ;
    edx = MEM32(esp + 0x10);
    edx++;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(edx, 2)) goto loc_00337970; /* jl: less (signed <) */

loc_00337B5D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x20);
    ecx = ecx + 2;
    eax--;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00337961; /* jne: not equal / not zero */

loc_00337B77: ;
    esi = MEM32(esp + 0x24);

loc_00337B7B: ;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00337930; /* jne: not equal / not zero */

loc_00337B8E: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00337BC1; /* jne: not equal / not zero */

loc_00337B98: ;
    ecx = MEM32(ebx + 0x440);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00337BC1; /* jle: less or equal (signed <=) */

loc_00337BA4: ;
    ecx = ebx + 0x1F8;
    /* nop */

loc_00337BB0: ;
    MEM8(ecx) = 0;
    edx = MEM32(ebx + 0x440);
    eax++;
    ecx = ecx + 0x14;
    if (CMP_L(eax, edx)) goto loc_00337BB0; /* jl: less (signed <) */

loc_00337BC1: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00337BD0
 * Original: 0x00337BD0 - 0x00337C48 (120 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337BD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_00337BD0: ;
    edx = MEM32(ecx);
    ecx = MEM32(0x84B0E0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    xmm3 = MEMF(0x648D14); /* movss */
    esp = esp - 8;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00337BF2: ;
    eax = MEM32(esi + 0x64);
    esp = esp + 8;
    if (CMP_NE(eax, 0x2D)) goto loc_00337C05; /* jne: not equal / not zero */

loc_00337BFD: ;
    xmm3 = MEMF(0x648CE4); /* movss */

loc_00337C05: ;
    /* comiss xmm0, MEMF(0x6493E0) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6493E0))) goto loc_00337C41; /* ja: above (unsigned >) */

loc_00337C0E: ;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00337C38; /* jb: below (unsigned <) */

loc_00337C31: ;
    xmm0 = xmm3; /* movaps */
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00337C38: ;
    /* comiss xmm0, MEMF(0x648EC0) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648EC0))) { sub_00337C48(); return; } /* jb: below (unsigned <) */

loc_00337C41: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00337C70
 * Original: 0x00337C70 - 0x00337E5A (490 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337C70: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = MEM32(ebp + 0x440);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00337CB7; /* jle: less or equal (signed <=) */

loc_00337C90: ;
    eax = ebp + 0x1F4;
    goto loc_00337CA0;

    /* nop */
    /* nop */

loc_00337CA0: ;
    MEMF(eax + -4) = xmm4; /* movss */
    MEMF(eax) = xmm4; /* movss */
    edx = MEM32(ebp + 0x440);
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, edx)) goto loc_00337CA0; /* jl: less (signed <) */

loc_00337CB7: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648EA4); /* movss */
    xmm6 = MEMF(0x649404); /* movss */
    ebx = ebx + 0x64;
    MEM32(esp + 0x3C) = 0x80;
    /* nop */

loc_00337CE0: ;
    eax = MEM32(ebx);
    if (CMP_EQ(eax, 1)) goto loc_00337CF0; /* je: equal / zero */

loc_00337CE7: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00337E3B; /* jne: not equal / not zero */

loc_00337CF0: ;
    ecx = MEM32(ebx + 0x1D4);
    edx = MEM32(ebp);
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, MEM32(edx))) goto loc_00337E3B; /* jne: not equal / not zero */

loc_00337D03: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00337D20; /* jne: not equal / not zero */

loc_00337D08: ;
    eax = MEM32(ebx + 0x50C);
    if (TEST_Z(eax, eax)) goto loc_00337E3B; /* je: equal / zero */

loc_00337D16: ;
    if (CMP_NE(MEM32(eax + 0x30), 3)) goto loc_00337E3B; /* jne: not equal / not zero */

loc_00337D20: ;
    eax = MEM32(ebp + 0x440);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00337E3B; /* jle: less or equal (signed <=) */

loc_00337D30: ;
    eax = esp + 0x2C;
    edx = ebx + 0x14;
    ecx = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    esi = ebp + 0x1F0;
    goto loc_00337D50;

    /* nop */

loc_00337D50: ;
    edx = MEM32(esi + -8);
    ecx = MEM32(0x84B0E0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + ecx;
    xmm3 = xmm7; /* movaps */
    MEM32(esp + 0x18) = edx;
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
    if (CMP_NE(MEM32(ebx), 0x2D)) goto loc_00337DC2; /* jne: not equal / not zero */

loc_00337DBA: ;
    xmm3 = MEMF(0x648CE4); /* movss */

loc_00337DC2: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0, MEMF(0x6493E0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493E0))) goto loc_00337DD6; /* jbe: below or equal (unsigned <=) */

loc_00337DD1: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00337E1D;

loc_00337DD6: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 < xmm0)) goto loc_00337DF8; /* jb: below (unsigned <) */

loc_00337DF3: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00337E1D;

loc_00337DF8: ;
    /* comiss xmm0, MEMF(0x648EC0) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648EC0))) goto loc_00337E06; /* jb: below (unsigned <) */

loc_00337E01: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00337E1D;

loc_00337E06: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */

loc_00337E1D: ;
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi) = xmm1; /* movss */
    eax = MEM32(ebp + 0x440);
    edi++;
    esi = esi + 0x14;
    if (CMP_L(edi, eax)) goto loc_00337D50; /* jl: less (signed <) */

loc_00337E3B: ;
    eax = MEM32(esp + 0x3C);
    ebx = ebx + 0x6D0;
    eax--;
    MEM32(esp + 0x3C) = eax;
    if ((eax != 0)) goto loc_00337CE0; /* jne: not equal / not zero */

loc_00337E50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337E60
 * Original: 0x00337E60 - 0x00337F6E (270 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337E60: ;
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0x440);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    edi = ebp + 0x1E8;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00337F67; /* jle: less or equal (signed <=) */

loc_00337E89: ;
    xmm6 = MEMF(0x648D10); /* movss */

loc_00337E91: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00337EC8; /* je: equal / zero */

loc_00337E99: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00337EC8; /* je: equal / zero */

loc_00337EA1: ;
    edx = MEM32(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = MEM32(0x84B0E0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    xmm0 = MEMF(edx + ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + ecx + 4); /* subss */
    /* comiss xmm0, MEMF(0x5A0060) - sets EFLAGS */
    if ((xmm0 > MEMF(0x5A0060))) goto loc_00337F51; /* ja: above (unsigned >) */

loc_00337EC8: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    eax = MEM32(ecx + 8);
    if (CMP_EQ(eax, 2)) goto loc_00337EE1; /* je: equal / zero */

loc_00337EDC: ;
    if (CMP_NE(eax, 3)) goto loc_00337EE8; /* jne: not equal / not zero */

loc_00337EE1: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00337F51; /* jne: not equal / not zero */

loc_00337EE8: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00337BD0(); /* call 0x00337BD0 */

loc_00337EEF: ;
    xmm1 = MEMF(edi + 8); /* movss */
    xmm5 = MEMF(0x648CE4); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    xmm5 = xmm5 / xmm1; /* divss */
    if ((xmm0 > MEMF(edi + 4))) goto loc_00337F24; /* ja: above (unsigned >) */

loc_00337F18: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_00337F2C; /* jbe: below or equal (unsigned <=) */

loc_00337F24: ;
    xmm5 = xmm5 * MEMF(0x648D80); /* mulss */

loc_00337F2C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00337F31: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 > xmm7)) goto loc_00337F4A; /* ja: above (unsigned >) */

loc_00337F42: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_00337F51; /* jne: not equal / not zero */

loc_00337F4A: ;
    xmm7 = xmm0; /* movaps */
    MEM32(esp + 0x14) = edi;

loc_00337F51: ;
    eax = MEM32(ebp + 0x440);
    ebx++;
    edi = edi + 0x14;
    if (CMP_L(ebx, eax)) goto loc_00337E91; /* jl: less (signed <) */

loc_00337F63: ;
    eax = MEM32(esp + 0x14);

loc_00337F67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00337F70
 * Original: 0x00337F70 - 0x00337F9D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337F70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00337F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x1E8;
    ecx = MEM32(ecx + 0x440);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00337F90; /* jle: less or equal (signed <=) */

loc_00337F84: ;
    if (CMP_EQ(MEM32(edi), edx)) { sub_00337F9D(); return; } /* je: equal / zero */

loc_00337F88: ;
    eax++;
    edi = edi + 0x14;
    if (CMP_L(eax, ecx)) goto loc_00337F84; /* jl: less (signed <) */

loc_00337F90: ;
    xmm0 = MEMF(0x648D34); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337FC0
 * Original: 0x00337FC0 - 0x00338076 (182 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337FC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0033800A; /* je: equal / zero */

loc_00337FCF: ;
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    esi = MEM32(eax);
    ecx = ebx + 0x44C;
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x440);
    if (TEST_NZ(eax, eax)) goto loc_00338004; /* jne: not equal / not zero */

loc_00337FFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00337910(); /* call 0x00337910 */

loc_00338004: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00337C70(); /* call 0x00337C70 */

loc_0033800A: ;
    edi = MEM32(ebx);
    SET_LO8(eax, MEM8(edi + 0x1E));
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0033806A; /* jle: less or equal (signed <=) */

loc_00338017: ;
    ecx = edi;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x1E);
    MEM32(esp + 0x10) = edx;

loc_00338021: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + esi + 0x20);
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(ebx + 0x8C);
    eax = eax + edx;
    if (CMP_LE(ecx, 1)) goto loc_00338061; /* jle: less or equal (signed <=) */

loc_0033803F: ;
    eax = MEM32(eax + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    eax = MEM32(ebx + 0x8C);
    ecx = ebx + 0x10;
    eax--;

loc_00338056: ;
    if (CMP_NE(edx, MEM32(ecx))) goto loc_0033805B; /* jne: not equal / not zero */

loc_0033805A: ;
    ebp++;

loc_0033805B: ;
    ecx = ecx + 4;
    eax--;
    if ((eax != 0)) goto loc_00338056; /* jne: not equal / not zero */

loc_00338061: ;
    eax = MEM32(esp + 0x10);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00338021; /* jl: less (signed <) */

loc_0033806A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xA0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338080
 * Original: 0x00338080 - 0x0033812A (170 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338080: ;
    edx = MEM32(0x84B0E0);
    xmm3 = MEMF(0x649400); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + edx;
    edx = MEM32(ecx);
    eax = ebp + 0x44C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = 0;
    MEM32(eax + 8) = ecx;
    edi = edi + 0x78;
    esi = ebp + 0xA4;
    ebx = 0x10;

loc_003380D0: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033810D; /* je: equal / zero */

loc_003380D7: ;
    edx = ZX8(MEM8(esi));
    eax = MEM32(0x84B330);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    if (CMP_NE(MEM16(edx + eax + 0x3A), 0x1E)) goto loc_00338106; /* jne: not equal / not zero */

loc_003380ED: ;
    eax = ebp + 0x44C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003380FA: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00338106; /* jbe: below or equal (unsigned <=) */

loc_00338102: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;

loc_00338106: ;
    MEM32(esi + 0x10) = 0;

loc_0033810D: ;
    esi = esi + 0x14;
    edi = edi + 0x6D0;
    ebx--;
    if ((ebx != 0)) goto loc_003380D0; /* jne: not equal / not zero */

loc_00338119: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xA0) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338130
 * Original: 0x00338130 - 0x0033846D (829 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338130: ;
    esp = esp - 0xC;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0xC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ebx = ecx + edx;
    MEM32(edi + 8) = 0xFFFFFFE2u;
    ecx = MEM32(ebx + 0x568);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_00338467; /* je: equal / zero */

loc_00338164: ;
    edx = MEM32(ecx + 0xBC);
    if (TEST_NZ(edx, edx)) goto loc_00338467; /* jne: not equal / not zero */

loc_00338172: ;
    ecx = MEM32(ebx + 0x238);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    edx = MEM32(esi);
    if (CMP_EQ(ecx, edx)) goto loc_00338466; /* je: equal / zero */

loc_00338187: ;
    PUSH32(esp, ebp);
    ebp = 2;
    if (CMP_EQ(ecx, ebp)) goto loc_00338465; /* je: equal / zero */

loc_00338195: ;
    if (CMP_EQ(edx, ebp)) goto loc_00338465; /* je: equal / zero */

loc_0033819D: ;
    edx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ecx = eax + edx;
    SET_LO8(eax, MEM8(ecx + 0x43));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00338465; /* jne: not equal / not zero */

loc_003381B7: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    edx = ZX16(MEM16(ecx + 0x150));
    eax = eax << 4;
    xmm3 = MEMF(eax + 0x74B668); /* movss */
    xmm2 = MEMF(eax + 0x74B674); /* movss */
    xmm4 = MEMF(eax + 0x74B670); /* movss */
    xmm1 = MEMF(eax + 0x74B66C); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_003381F2; /* jb: below (unsigned <) */

loc_003381ED: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00338214;

loc_003381F2: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_003381FC; /* jb: below (unsigned <) */

loc_003381F7: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00338214;

loc_003381FC: ;
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */

loc_00338214: ;
    xmm3 = MEMF(eax + 0x74B6B8); /* movss */
    xmm2 = MEMF(eax + 0x74B6C4); /* movss */
    xmm4 = MEMF(eax + 0x74B6C0); /* movss */
    xmm1 = MEMF(eax + 0x74B6BC); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(ecx + 0x830); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_00338249; /* jb: below (unsigned <) */

loc_00338244: ;
    xmm0 = xmm4; /* movaps */
    goto loc_0033826B;

loc_00338249: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00338253; /* jb: below (unsigned <) */

loc_0033824E: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0033826B;

loc_00338253: ;
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */

loc_0033826B: ;
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003382B6; /* jbe: below or equal (unsigned <=) */

loc_00338278: ;
    MEM32(edi + 8) = 0;
    (void)0; /* cmp MEM32(esi + 0x2D80), ebp - flags set for next jcc */
    eax = ebp;
    if (CMP_LE(MEM32(esi + 0x2D80), ebp)) goto loc_003382A6; /* jle: less or equal (signed <=) */

loc_00338289: ;
    ecx = esi + 0x948;
    /* nop */

loc_00338290: ;
    edx = MEM32(ecx);
    MEM32(edi + 8) = MEM32(edi + 8) + edx;
    edx = MEM32(edi);
    eax++;
    ecx = ecx + 0x488;
    if (CMP_L(eax, MEM32(edx + 0x2D80))) goto loc_00338290; /* jl: less (signed <) */

loc_003382A6: ;
    xmm1 = (float)(int32_t)MEM32(edi + 8); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM32(edi + 8) = eax;

loc_003382B6: ;
    eax = MEM32(edi + 8);
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    if (CMP_LE(eax, 0xA)) goto loc_003382DB; /* jle: less or equal (signed <=) */

loc_003382C6: ;
    if (CMP_GE(MEM32(edi + 0x9C), ebp)) goto loc_003382DB; /* jge: greater or equal (signed >=) */

loc_003382CE: ;
    xmm1 = MEMF(edi + 0x444); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003382F7; /* ja: above (unsigned >) */

loc_003382DB: ;
    if (CMP_LE(eax, 5)) goto loc_003382FE; /* jle: less or equal (signed <=) */

loc_003382E0: ;
    eax = MEM32(edi + 0x9C);
    if (TEST_NZ(eax, eax)) goto loc_003382FE; /* jne: not equal / not zero */

loc_003382EA: ;
    xmm1 = MEMF(edi + 0x444); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003382FE; /* jbe: below or equal (unsigned <=) */

loc_003382F7: ;
    MEM8(esi + 0x2D84) = 1;

loc_003382FE: ;
    ecx = MEM32(ebx + 0x568);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x498));
    PUSH32(esp, 0x33);
    eax = ebx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_00338319: ;
    esp = esp + 0xC;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0033832D; /* je: equal / zero */

loc_00338326: ;
    MEM16(edi + 0x1E4) = LO16(eax);

loc_0033832D: ;
    eax = MEM32(edi + 8);
    if (TEST_S(eax, eax)) goto loc_0033844C; /* jl: less (signed <) */

loc_00338338: ;
    ebx = MEM32(edi);
    ebp = (uint32_t)(int32_t)SMEM8(ebx + 0x1E);
    edx = edx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */

loc_00338345: ;
    if (CMP_GE(ecx, ebp)) goto loc_00338382; /* jge: greater or equal (signed >=) */

loc_00338349: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + ecx + 0x20);
    esi = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + esi;
    esi = MEM32(eax + 0x568);
    if (CMP_EQ(MEM16(esi + 0x4AA), 0xFFFFFFFFu)) goto loc_0033837A; /* je: equal / zero */

loc_0033836C: ;
    esi = ZX16(MEM16(eax + 0x410));
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0033837A; /* je: equal / zero */

loc_00338378: ;
    edx = esi;

loc_0033837A: ;
    ecx++;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00338345; /* je: equal / zero */

loc_00338380: ;
    goto loc_0033838B;

loc_00338382: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00338448; /* je: equal / zero */

loc_0033838B: ;
    if (CMP_EQ(edx, 0xFFFF)) goto loc_00338448; /* je: equal / zero */

loc_00338397: ;
    eax = MEM32(eax + 0x238);
    ebp = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 2;
    esi = ecx;
    PUSH32(esp, 0); sub_0034B9B0(); /* call 0x0034B9B0 */

loc_003383B1: ;
    edx = eax;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(eax + 0x410));
    eax = ZX16(LO16(ecx));
    esi = esi | 0xFFFFFFFFu;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(eax, esi)) goto loc_003383E0; /* je: equal / zero */

loc_003383CC: ;
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_003383E0; /* je: equal / zero */

loc_003383D3: ;
    if (CMP_EQ(MEM16(esp + 0x14), LO16(esi))) goto loc_003383E0; /* je: equal / zero */

loc_003383DA: ;
    if (CMP_NE(MEM8(eax + edx), 0)) goto loc_00338445; /* jne: not equal / not zero */

loc_003383E0: ;
    ebp = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    xmm3 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0x14) = esi;
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00338448; /* jle: less or equal (signed <=) */

loc_003383F9: ;
    ebx = 0; /* xor self */
    goto loc_00338401;

loc_003383FD: ;
    edx = MEM32(esp + 0x18);

loc_00338401: ;
    if (CMP_EQ(MEM8(edx + esi), 0)) goto loc_00338434; /* je: equal / zero */

loc_00338407: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x84B0E0);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    edx = ebx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033841E: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_0033842D; /* ja: above (unsigned >) */

loc_00338426: ;
    if (CMP_NE(MEM32(esp + 0x14), 0xFFFFFFFFu)) goto loc_00338434; /* jne: not equal / not zero */

loc_0033842D: ;
    MEM32(esp + 0x14) = esi;
    xmm3 = xmm0; /* movaps */

loc_00338434: ;
    esi++;
    ebx = ebx + 0x38;
    if (CMP_L(esi, ebp)) goto loc_003383FD; /* jl: less (signed <) */

loc_0033843C: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00338448; /* je: equal / zero */

loc_00338445: ;
    MEM32(edi + 0x10) = eax;

loc_00338448: ;
    ebx = MEM32(esp + 0x10);

loc_0033844C: ;
    ebx = ebx + 0x78;
    eax = MEM32(ebx);
    edi = edi + 0x44C;
    MEM32(edi) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edi + 8) = edx;

loc_00338465: ;
    POP32(esp, ebp);

loc_00338466: ;
    POP32(esp, esi);

loc_00338467: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00338470
 * Original: 0x00338470 - 0x00338503 (147 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338470: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + ebp;
    ebx = esi + 0x78;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = edi + 0x44C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0x33);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = 0;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_003384B4: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003384C4; /* je: equal / zero */

loc_003384BD: ;
    MEM16(edi + 0x1E4) = LO16(eax);

loc_003384C4: ;
    ecx = MEM32(edi);
    MEM32(edi + 0xA0) = 0;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00338503(); return; } /* je: equal / zero */

loc_003384DA: ;
    esi = MEM32(ecx);
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = MEM32(edx + ebp + -1176);
    edx = MEM32(eax);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, esi)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    MEM32(edi + 0xA0) = eax;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003385B0
 * Original: 0x003385B0 - 0x0033863C (140 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003385B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003385B0: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_NE(eax, 0xA)) { sub_0033863C(); return; } /* jne: not equal / not zero */

loc_003385BF: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xD));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00338635; /* jle: less or equal (signed <=) */

loc_003385CE: ;
    xmm3 = MEMF(0x6493FC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    esi = esi + 0x78;

loc_003385E0: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(ecx + 0x60));
    if (CMP_EQ(edx, edi)) goto loc_00338619; /* je: equal / zero */

loc_003385EC: ;
    ecx = ZX16(MEM16(esi + -24));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    edx = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x9C);
    if (CMP_NE(edx, MEM32(ebx + 0xC))) goto loc_00338619; /* jne: not equal / not zero */

loc_00338603: ;
    eax = ebx + 0x44C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00338610: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00338619; /* jbe: below or equal (unsigned <=) */

loc_00338618: ;
    ebp++;

loc_00338619: ;
    eax = MEM32(0x84B330);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    edi++;
    esi = esi + 0x6D0;
    if (CMP_L(edi, ecx)) goto loc_003385E0; /* jl: less (signed <) */

loc_0033862D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00338635: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338650
 * Original: 0x00338650 - 0x0033888F (575 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebx = edx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    edx = edx + 0xFFFFFFF6u;
    eax = eax + edi;
    if (CMP_A(edx, 6)) { sub_0033888F(); return; } /* ja: above (unsigned >) */

loc_00338677: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x33889C)); return; /* indirect tail jmp */

    (void)0; /* test MEM8(ebx + 0x458), 8 - flags set for next jcc */
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(MEM8(ebx + 0x458), 8)) goto loc_003386D9; /* je: equal / zero */

loc_0033868A: ;
    if (CMP_NE(esi, eax)) goto loc_00338778; /* jne: not equal / not zero */

loc_00338692: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003385B0(); /* call 0x003385B0 */

loc_00338698: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003386B0; /* jb: below (unsigned <) */

loc_003386A4: ;
    xmm0 = MEMF(0x64909C); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003386B0: ;
    /* comiss xmm0, MEMF(0x6490F4) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x6490F4))) { sub_0033888F(); return; } /* jae: above or equal (unsigned >=) */

loc_003386BD: ;
    xmm0 = xmm0 * MEMF(0x6491FC); /* mulss */
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64909C); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003386D9: ;
    if (CMP_NE(esi, eax)) { sub_0033888F(); return; } /* jne: not equal / not zero */

loc_003386E1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003385B0(); /* call 0x003385B0 */

loc_003386E7: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_003387A9; /* jae: above or equal (unsigned >=) */

loc_003386F7: ;
    /* comiss xmm0, MEMF(0x648D18) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D18))) goto loc_0033870C; /* jb: below (unsigned <) */

loc_00338700: ;
    xmm0 = MEMF(0x648E2C); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033870C: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D14); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00338743; /* je: equal / zero */

loc_0033873A: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x498);
    goto loc_00338756;

loc_00338743: ;
    PUSH32(esp, 0x33);
    eax = eax + 0x78;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_00338750: ;
    esp = esp + 0xC;
    esi = SX16(LO16(eax));

loc_00338756: ;
    edx = MEM32(ebx + 0x8C);
    eax = 1;
    if (CMP_LE(edx, eax)) goto loc_00338778; /* jle: less or equal (signed <=) */

loc_00338765: ;
    ecx = ebx + 0x10;

loc_00338768: ;
    if (CMP_EQ(MEM32(ecx), esi)) { sub_0033888F(); return; } /* je: equal / zero */

loc_00338770: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00338768; /* jl: less (signed <) */

loc_00338778: ;
    xmm0 = MEMF(0x648F24); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00338784: ;
    edi = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = eax + 0x78;
    ecx = ecx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00338799: ;
    xmm1 = MEMF(0x5A0060); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003387B5; /* jb: below (unsigned <) */

loc_003387A9: ;
    xmm0 = MEMF(0x648D80); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003387B5: ;
    /* comiss xmm0, MEMF(0x6493C8) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x6493C8))) { sub_0033888F(); return; } /* jae: above or equal (unsigned >=) */

loc_003387C2: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    xmm0 = MEMF(0x648EA8); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003387FD: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    eax = eax + 0x78;
    ebx = ebx + edi;
    PUSH32(esp, eax);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00338812: ;
    xmm1 = MEMF(0x5A0060); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0033882E; /* jb: below (unsigned <) */

loc_00338822: ;
    xmm0 = MEMF(0x649228); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033882E: ;
    /* comiss xmm0, MEMF(0x6493C8) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x6493C8))) { sub_0033888F(); return; } /* jae: above or equal (unsigned >=) */

loc_00338837: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 * MEMF(0x64999C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649228); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    eax = MEM32(ebx + 0xC);
    if (CMP_NE(LO8(eax), 3)) goto loc_0033887F; /* jne: not equal / not zero */

loc_00338863: ;
    if (CMP_NE(eax, esi)) goto loc_00338873; /* jne: not equal / not zero */

loc_00338867: ;
    xmm0 = MEMF(0x648E64); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00338873: ;
    xmm0 = MEMF(0x648D34); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033887F: ;
    if (CMP_EQ(eax, esi)) goto loc_00338867; /* je: equal / zero */

loc_00338883: ;
    xmm0 = MEMF(0x648D18); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003388C0
 * Original: 0x003388C0 - 0x00338918 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003388C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003388C0: ;
    ecx = MEM32(edx + 4);
    ecx = ecx + 0xFFFFFFF6u;
    if (CMP_A(ecx, 3)) goto loc_0033890B; /* ja: above (unsigned >) */

loc_003388CB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x338918); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003388D2u) goto loc_003388D2;
    if (_jt == 0x003388E3u) goto loc_003388E3;
    if (_jt == 0x003388F3u) goto loc_003388F3;
    if (_jt == 0x00338902u) goto loc_00338902;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003388D2: ;
    if (TEST_Z(eax, eax)) goto loc_003388DB; /* je: equal / zero */

loc_003388D6: ;
    ecx = edx + 0x10;
    MEM32(eax) = ecx;

loc_003388DB: ;
    eax = MEM32(edx + 0x8C);
    eax--;
    esp += 4; return; /* ret */

loc_003388E3: ;
    if (TEST_Z(eax, eax)) goto loc_003388ED; /* je: equal / zero */

loc_003388E7: ;
    MEM32(eax) = 0x74B70C;

loc_003388ED: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003388F3: ;
    if (TEST_Z(eax, eax)) goto loc_003388FC; /* je: equal / zero */

loc_003388F7: ;
    edx = edx + 0x10;
    MEM32(eax) = edx;

loc_003388FC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00338902: ;
    if (CMP_NE(MEM32(edx + 0xA0), 3)) goto loc_003388E3; /* jne: not equal / not zero */

loc_0033890B: ;
    if (TEST_Z(eax, eax)) goto loc_00338915; /* je: equal / zero */

loc_0033890F: ;
    MEM32(eax) = 0;

loc_00338915: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00338930
 * Original: 0x00338930 - 0x00338AC0 (400 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    eax = MEM32(ebp + 0x440);
    if (TEST_Z(eax, eax)) { sub_00338AC0(); return; } /* je: equal / zero */

loc_00338946: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x84A6B0); /* addss */
    xmm1 = MEMF(0x648D3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x84A6B0) = xmm0; /* movss */
    if ((xmm1 > xmm0)) { sub_00338AC0(); return; } /* ja: above (unsigned >) */

loc_0033896F: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(eax + 0xB4));
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_00338AC0(); return; } /* je: equal / zero */

loc_00338984: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_00337F70(); /* call 0x00337F70 */

loc_0033898F: ;
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00338AB9; /* jnp: not parity */

loc_003389A0: ;
    edx = MEM32(ebp + 0x440);
    xmm1 = MEMF(0x648E98); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    eax = ebp + 0x1E8;
    if (CMP_L(edx, 4)) goto loc_00338A5C; /* jl: less (signed <) */

loc_003389C0: ;
    ecx = MEM32(ebx + 0x568);
    ecx = MEM32(ecx + 0x444);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = edx + -4;
    esi = esi >> 2;
    esi++;
    edi = esi * 4;
    edi = edi;

loc_003389E0: ;
    if (CMP_EQ(ecx, 2)) goto loc_003389EA; /* je: equal / zero */

loc_003389E5: ;
    if (CMP_NE(ecx, 3)) goto loc_003389F0; /* jne: not equal / not zero */

loc_003389EA: ;
    if (CMP_NE(MEM8(eax + 0x10), 0)) goto loc_003389FB; /* jne: not equal / not zero */

loc_003389F0: ;
    /* comiss xmm1, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 8))) goto loc_003389FB; /* jbe: below or equal (unsigned <=) */

loc_003389F6: ;
    xmm1 = MEMF(eax + 8); /* movss */

loc_003389FB: ;
    eax = eax + 0x14;
    if (CMP_EQ(ecx, 2)) goto loc_00338A08; /* je: equal / zero */

loc_00338A03: ;
    if (CMP_NE(ecx, 3)) goto loc_00338A0E; /* jne: not equal / not zero */

loc_00338A08: ;
    if (CMP_NE(MEM8(eax + 0x10), 0)) goto loc_00338A19; /* jne: not equal / not zero */

loc_00338A0E: ;
    /* comiss xmm1, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 8))) goto loc_00338A19; /* jbe: below or equal (unsigned <=) */

loc_00338A14: ;
    xmm1 = MEMF(eax + 8); /* movss */

loc_00338A19: ;
    eax = eax + 0x14;
    if (CMP_EQ(ecx, 2)) goto loc_00338A26; /* je: equal / zero */

loc_00338A21: ;
    if (CMP_NE(ecx, 3)) goto loc_00338A2C; /* jne: not equal / not zero */

loc_00338A26: ;
    if (CMP_NE(MEM8(eax + 0x10), 0)) goto loc_00338A37; /* jne: not equal / not zero */

loc_00338A2C: ;
    /* comiss xmm1, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 8))) goto loc_00338A37; /* jbe: below or equal (unsigned <=) */

loc_00338A32: ;
    xmm1 = MEMF(eax + 8); /* movss */

loc_00338A37: ;
    eax = eax + 0x14;
    if (CMP_EQ(ecx, 2)) goto loc_00338A44; /* je: equal / zero */

loc_00338A3F: ;
    if (CMP_NE(ecx, 3)) goto loc_00338A4A; /* jne: not equal / not zero */

loc_00338A44: ;
    if (CMP_NE(MEM8(eax + 0x10), 0)) goto loc_00338A55; /* jne: not equal / not zero */

loc_00338A4A: ;
    /* comiss xmm1, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 8))) goto loc_00338A55; /* jbe: below or equal (unsigned <=) */

loc_00338A50: ;
    xmm1 = MEMF(eax + 8); /* movss */

loc_00338A55: ;
    eax = eax + 0x14;
    esi--;
    if ((esi != 0)) goto loc_003389E0; /* jne: not equal / not zero */

loc_00338A5B: ;
    POP32(esp, esi);

loc_00338A5C: ;
    if (CMP_GE(edi, edx)) goto loc_00338A94; /* jge: greater or equal (signed >=) */

loc_00338A60: ;
    ecx = MEM32(ebx + 0x568);
    ecx = MEM32(ecx + 0x444);
    ecx = MEM32(ecx + 8);
    eax = eax + 8;
    edx = edx - edi;

loc_00338A74: ;
    if (CMP_EQ(ecx, 2)) goto loc_00338A7E; /* je: equal / zero */

loc_00338A79: ;
    if (CMP_NE(ecx, 3)) goto loc_00338A85; /* jne: not equal / not zero */

loc_00338A7E: ;
    SET_LO8(ebx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00338A8E; /* jne: not equal / not zero */

loc_00338A85: ;
    /* comiss xmm1, MEMF(eax) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax))) goto loc_00338A8E; /* jbe: below or equal (unsigned <=) */

loc_00338A8A: ;
    xmm1 = MEMF(eax); /* movss */

loc_00338A8E: ;
    eax = eax + 0x14;
    edx--;
    if ((edx != 0)) goto loc_00338A74; /* jne: not equal / not zero */

loc_00338A94: ;
    xmm2 = (float)(int32_t)MEM32(ebp + 0x9C); /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm0 <= xmm1)) { sub_00338AC0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00338AAE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x84A6B0) = xmm0; /* movss */

loc_00338AB9: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00338AD0
 * Original: 0x00338AD0 - 0x00338D6B (667 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338AD0(void)
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

loc_00338AD0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    (void)0; /* cmp MEM32(edi + 4), 0xA - flags set for next jcc */
    MEM32(esp + 0x28) = 0;
    if (CMP_NE(MEM32(edi + 4), 0xA)) goto loc_00338B00; /* jne: not equal / not zero */

loc_00338AEB: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    MEM32(esp + 0x28) = eax;

loc_00338B00: ;
    eax = MEM32(edi + 0x440);
    if (TEST_Z(eax, eax)) { sub_00338D6B(); return; } /* je: equal / zero */

loc_00338B0E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_00338930(); /* call 0x00338930 */

loc_00338B1C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00338B29; /* je: equal / zero */

loc_00338B20: ;
    MEM16(esi + 0xB4) = 0xFFFF;

loc_00338B29: ;
    (void)0; /* cmp MEM16(esi + 0xB4), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_00338B97; /* jne: not equal / not zero */

loc_00338B34: ;
    PUSH32(esp, esi);
    edi = esp + 0x18;
    ebx = esp + 0x14;
    esi = esp + 0x1C;
    eax = ebp;
    PUSH32(esp, 0); sub_00334EC0(); /* call 0x00334EC0 */

loc_00338B48: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0036BFB0(); /* call 0x0036BFB0 */

loc_00338B52: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x34);
    esp = esp + 8;
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_00337E60(); /* call 0x00337E60 */

loc_00338B73: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00338D3C; /* je: equal / zero */

loc_00338B7F: ;
    SET_LO16(ecx, MEM16(eax));
    eax = esi;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM8(eax + 0xEC) = 0;
    goto loc_00338D3C;

loc_00338B97: ;
    SET_LO8(eax, MEM8(esi + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00338D3C; /* je: equal / zero */

loc_00338BA5: ;
    edx = MEM32(ebp + 0x568);
    xmm3 = MEMF(ebp + 0x114); /* movss */
    xmm3 = xmm3 - MEMF(edx + 0x4D8); /* subss */
    eax = edi + 0x44C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x30) = eax;
    ebx = ebp + 0x78;
    eax = esp + 0x1C;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x34) = eax;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00338C20; /* jp: parity */

loc_00338C11: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00338C52; /* jnp: not parity */

loc_00338C20: ;
    xmm0 = MEMF(edi + 0x454); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x80); /* subss */
    ecx = MEM32(esp + 0x14);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00338C4F: ;
    esp = esp + 8;

loc_00338C52: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    MEMF(edx + 0x4D0) = xmm0; /* movss */
    if (CMP_NE(MEM8(esi + 0x64), 0xFF)) goto loc_00338D3C; /* jne: not equal / not zero */

loc_00338C72: ;
    eax = MEM32(ebp + 0x568);
    xmm1 = MEMF(eax + 0x4D0); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_00338CAC; /* jb: below (unsigned <) */

loc_00338C9C: ;
    xmm3 = xmm3 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    goto loc_00338CC7;

loc_00338CAC: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_00338CC7; /* jb: below (unsigned <) */

loc_00338CB9: ;
    xmm1 = xmm1 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */

loc_00338CC7: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00338D3C; /* jbe: below or equal (unsigned <=) */

loc_00338CDD: ;
    edi = MEM32(esi + 0x98);
    ecx = esp + 0x1C;
    edi = edi | 0x4000;
    PUSH32(esp, ecx);
    MEM32(esi + 0x98) = edi;
    eax = 1;
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_00338CFE: ;
    esp = esp + 4;
    /* comiss xmm0, MEMF(0x6493F8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493F8))) goto loc_00338D21; /* jbe: below or equal (unsigned <=) */

loc_00338D0A: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(edx + 0x444);
    if (CMP_NE(MEM32(ecx + 8), 4)) goto loc_00338D21; /* jne: not equal / not zero */

loc_00338D1C: ;
    eax = 2;

loc_00338D21: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0x530), eax)) goto loc_00338D3C; /* je: equal / zero */

loc_00338D2F: ;
    eax = MEM32(ebp + 0x56C);
    MEM32(eax + 0x68) = 1;

loc_00338D3C: ;
    SET_LO16(esi, MEM16(esi + 0xB4));
    (void)0; /* cmp LO16(esi), 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO16(esi), 0xFFFFFFFFu)) goto loc_00338D60; /* je: equal / zero */

loc_00338D4A: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00338D53: ;
    ecx = esi;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_00338D5D: ;
    esp = esp + 8;

loc_00338D60: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00338D80
 * Original: 0x00338D80 - 0x00338E2A (170 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338D80: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX16(MEM16(edx + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    PUSH32(esp, edi);
    edi = MEM32(0x84B330);
    edi = eax + edi + 0x38;
    eax = MEM32(esi + 4);
    eax = eax + 0xFFFFFFF6u;
    if (CMP_A(eax, 5)) { sub_00338E2A(); return; } /* ja: above (unsigned >) */

loc_00338DA7: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x338E30)); return; /* indirect tail jmp */

    eax = MEM32(esi + 0xC);
    esi = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, 0);
    eax = eax + esi;
    PUSH32(esp, 0); sub_00370BD0(); /* call 0x00370BD0 */

loc_00338DC6: ;
    esp = esp + 4;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    eax = MEM32(esi + eax * 4 + 0x10);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_00338E2A(); return; } /* je: equal / zero */

loc_00338E0A: ;
    edx = MEM32(0x84B0E0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00338E50
 * Original: 0x00338E50 - 0x003390DC (652 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338E50: ;
    edx = MEM32(0x84B330);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = ZX16(MEM16(ebx + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ebp = eax + edx + 0x38;
    eax = MEM32(esi + 4);
    eax = eax + 0xFFFFFFF6u;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    if (CMP_A(eax, 6)) goto loc_003390D0; /* ja: above (unsigned >) */

loc_00338E86: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x339734)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx + 0xC);
    esi = ebp;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_00338E9B: ;
    edx = MEM32(ebx + 0x568);
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(edx + 0x4CC) = xmm0; /* movss */
    edi = ZX16(MEM16(ebx + 0x60));
    esi = eax;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_00338EC3: ;
    if (TEST_NZ(eax, eax)) goto loc_00338F08; /* jne: not equal / not zero */

loc_00338EC7: ;
    if (TEST_Z(esi, esi)) goto loc_00338ED1; /* je: equal / zero */

loc_00338ECB: ;
    if (TEST_NZ(MEM8(esi + 0x14), 2)) goto loc_00338F08; /* jne: not equal / not zero */

loc_00338ED1: ;
    ecx = MEM32(esp + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(MEM32(eax + 0x90), edx)) goto loc_00338EEB; /* je: equal / zero */

loc_00338EE4: ;
    MEM8(ebp + 0xEC) = 0;

loc_00338EEB: ;
    eax = MEM32(eax + 0x90);
    if (CMP_G(eax, 0xFFFFFFFFu)) goto loc_00338EF9; /* jg: greater (signed >) */

loc_00338EF6: ;
    eax = eax | 0xFFFFFFFFu;

loc_00338EF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ecx) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_00338F08: ;
    edi = edi | 0xFFFFFFFFu;
    if (TEST_Z(esi, esi)) goto loc_00338F50; /* je: equal / zero */

loc_00338F0F: ;
    if (TEST_Z(MEM8(esi + 0x14), 2)) goto loc_00338F50; /* je: equal / zero */

loc_00338F15: ;
    SET_LO16(eax, MEM16(ebp + 0xB4));
    if (CMP_EQ(LO16(eax), LO16(edi))) goto loc_00338F50; /* je: equal / zero */

loc_00338F21: ;
    edx = MEM32(0x84B0E0);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00338F39: ;
    xmm1 = MEMF(0x6493F8); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00338F50; /* jbe: below or equal (unsigned <=) */

loc_00338F49: ;
    MEM16(ebp + 0xB4) = LO16(edi);

loc_00338F50: ;
    SET_LO8(eax, MEM8(ebp + 0xEC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00338F67; /* jne: not equal / not zero */

loc_00338F5A: ;
    if (CMP_NE(MEM16(ebp + 0xB4), LO16(edi))) goto loc_00339021; /* jne: not equal / not zero */

loc_00338F67: ;
    xmm0 = MEMF(ebp + 0xC4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm0, MEMF(0x648D20) - sets EFLAGS */
    MEMF(ebp + 0xC4) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648D20))) goto loc_00338FCE; /* ja: above (unsigned >) */

loc_00338F88: ;
    if (CMP_EQ(MEM16(ebp + 0xB4), LO16(edi))) goto loc_00338FCE; /* je: equal / zero */

loc_00338F91: ;
    PUSH32(esp, 0); sub_0046FD20(); /* call 0x0046FD20 */

loc_00338F96: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2710;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_GE(edx, 0x32)) goto loc_00339021; /* jge: greater or equal (signed >=) */

loc_00338FA3: ;
    PUSH32(esp, 0); sub_0046FD20(); /* call 0x0046FD20 */

loc_00338FA8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ebx + 0x568);
    MEMF(edx + 0x4D0) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_00338FCE: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO16(eax, MEM16(ebp + 0xB4));
    MEM8(ebp + 0xEC) = 0;
    MEM16(ebp + 0xB6) = LO16(eax);
    if (TEST_Z(esi, esi)) goto loc_00338FFB; /* je: equal / zero */

loc_00338FE7: ;
    if (TEST_Z(MEM8(esi + 0x14), 2)) goto loc_00338FFB; /* je: equal / zero */

loc_00338FED: ;
    ecx = MEM32(esp + 0x24);
    esi = esi + 0x18;
    PUSH32(esp, esi);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    goto loc_00339005;

loc_00338FFB: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    edx = edx + 0x10;
    PUSH32(esp, edx);

loc_00339005: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0036AB20(); /* call 0x0036AB20 */

loc_0033900C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    MEM16(ebp + 0xB4) = LO16(eax);
    MEMF(ebp + 0xC4) = xmm0; /* movss */

loc_00339021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    MEM16(edi) = LO16(ecx);
    MEM8(ebp + 0xEC) = 0;

loc_00339041: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    SET_LO8(eax, MEM8(ebp + 0xEC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00339066; /* jne: not equal / not zero */

loc_00339060: ;
    if (CMP_NE(MEM16(edi), 0xFFFFFFFFu)) goto loc_0033908F; /* jne: not equal / not zero */

loc_00339066: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0033906B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x8C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x8C))); }
    eax = edx;
    eax = eax & 0x80000001u;
    MEM32(ebp + 0x19C) = edx;
    if (((int32_t)eax >= 0)) goto loc_00339086; /* jns: not sign (positive) */

loc_00339081: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00339086: ;
    if ((eax == 0)) goto loc_0033908F; /* je: equal / zero */

loc_00339088: ;
    edx--;
    MEM32(ebp + 0x19C) = edx;

loc_0033908F: ;
    ecx = MEM32(ebx + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x498);
    eax = MEM32(ebp + 0x19C);
    if (CMP_NE(edx, MEM32(esi + eax * 4 + 0xC))) { sub_003390DC(); return; } /* jne: not equal / not zero */

loc_003390A8: ;
    MEM8(ebp + 0xEC) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003390B4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(ebp + 0x1A0) = xmm0; /* movss */

loc_003390D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00339750
 * Original: 0x00339750 - 0x00339902 (434 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ZX16(MEM16(ebx + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    edx = MEM32(0x84B330);
    eax = eax + edx + 0x38;
    edx = MEM32(0x84A5F8);
    MEM32(esp + 0x10) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + edx;
    eax = MEM32(edi + 4);
    eax = eax + 0xFFFFFFF6u;
    if (CMP_A(eax, 6)) goto loc_003397D9; /* ja: above (unsigned >) */

loc_0033978D: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x339914)); return; /* indirect tail jmp */

    if (CMP_EQ(ecx, MEM32(edi + 0xC))) goto loc_003397D9; /* je: equal / zero */

loc_00339799: ;
    if (TEST_NZ(MEM8(edi + 0x458), 8)) goto loc_003398FA; /* jne: not equal / not zero */

loc_003397A6: ;
    eax = MEM32(edi + 0xA0);
    (void)0; /* test eax, eax - flags set for next jcc */
    goto loc_003398D7;

    if (TEST_Z(MEM8(edi + 0x458), 4)) goto loc_003397D9; /* je: equal / zero */

loc_003397BC: ;
    ecx = MEM32(ebx + 0x568);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x4AA);
    PUSH32(esp, ebx);
    edx = edi;
    PUSH32(esp, 0); sub_003375F0(); /* call 0x003375F0 */

loc_003397D1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003398FA; /* je: equal / zero */

loc_003397D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    edx = MEM32(esp + 0x10);
    if (CMP_NE(MEM16(edx + 2), 0x1E)) goto loc_003397FB; /* jne: not equal / not zero */

loc_003397F6: ;
    ebp = 1;

loc_003397FB: ;
    if (CMP_NE(MEM32(esi + 0x64), 0x2D)) goto loc_0033980C; /* jne: not equal / not zero */

loc_00339801: ;
    eax = esi;
    PUSH32(esp, 0); sub_003BCB40(); /* call 0x003BCB40 */

loc_00339808: ;
    if (TEST_NZ(eax, eax)) goto loc_003397D9; /* jne: not equal / not zero */

loc_0033980C: ;
    if (TEST_Z(MEM8(edi + 0x458), 8)) goto loc_00339823; /* je: equal / zero */

loc_00339815: ;
    if (CMP_LE(ebp, 2)) goto loc_003398FA; /* jle: less or equal (signed <=) */

loc_0033981E: ;
    goto loc_003398DD;

loc_00339823: ;
    if (TEST_Z(ebp, ebp)) goto loc_003398FA; /* je: equal / zero */

loc_0033982B: ;
    if (CMP_GE(ebp, 2)) goto loc_003397D9; /* jge: greater or equal (signed >=) */

loc_00339830: ;
    goto loc_003398DD;

    ecx = MEM32(edi + 0xC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    SET_LO8(edx, MEM8(ebx + 0x250));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00339858; /* je: equal / zero */

loc_0033984C: ;
    edx = ZX8(LO8(edx));
    edx--;
    if (CMP_EQ(edx, ecx)) goto loc_003398FA; /* je: equal / zero */

loc_00339858: ;
    edi = MEM32(edi + 0xA0);
    if (CMP_NE(edi, 2)) goto loc_0033989E; /* jne: not equal / not zero */

loc_00339863: ;
    eax = eax + 0x78;
    PUSH32(esp, eax);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00339870: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493F8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6493F8))) goto loc_003398FA; /* ja: above (unsigned >) */

loc_0033987C: ;
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00339886: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493BC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493BC))) goto loc_003397D9; /* jbe: below or equal (unsigned <=) */

loc_00339896: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033989E: ;
    SET_LO8(edx, MEM8(eax + 0x251));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003398C5; /* je: equal / zero */

loc_003398A8: ;
    if (CMP_NE(edi, 1)) goto loc_003398C5; /* jne: not equal / not zero */

loc_003398AD: ;
    eax = ZX8(MEM8(esi + 0x250));
    eax--;
    if (CMP_EQ(eax, ecx)) goto loc_003397D9; /* je: equal / zero */

loc_003398BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003398C5: ;
    edx = ZX8(MEM8(esi + 0x250));
    edx--;
    if (CMP_EQ(edx, ecx)) goto loc_003397D9; /* je: equal / zero */

loc_003398D5: ;
    (void)0; /* test edi, edi - flags set for next jcc */

loc_003398D7: ;
    if (CMP_LE(edi & edi, 0)) goto loc_003397D9; /* jle: less or equal (signed <=) */

loc_003398DD: ;
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003398EA: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493F8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493F8))) goto loc_003397D9; /* jbe: below or equal (unsigned <=) */

loc_003398FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339930
 * Original: 0x00339930 - 0x00339B7C (588 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339930: ;
    esp = esp - 0xC;
    edx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    eax = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x20);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ebp = MEM32(edi + 4);
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CE0); /* movss */
    eax = eax + edx + 0x38;
    edx = MEM32(ecx + ebx + 0x568);
    ecx = ecx + ebx;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 0x444);
    edx = MEM32(eax + 8);
    eax = ZX16(MEM16(ecx + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    (void)0; /* cmp ebp, MEM32(eax + 0x8006B0) - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    xmm3 = xmm4; /* movaps */
    if (CMP_NE(ebp, MEM32(eax + 0x8006B0))) goto loc_00339A0D; /* jne: not equal / not zero */

loc_0033999E: ;
    if (CMP_EQ(ebp, 0xF)) goto loc_00339A0D; /* je: equal / zero */

loc_003399A3: ;
    SET_LO8(ebx, 1);
    edx = edi + 0x10;
    esi = eax + 0x8006B8;
    MEM32(esp + 0x14) = 8;

loc_003399B6: ;
    eax = MEM32(edx + -4);
    if (CMP_EQ(eax, MEM32(esi + -4))) goto loc_003399C0; /* je: equal / zero */

loc_003399BE: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003399C0: ;
    eax = MEM32(edx);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_003399C8; /* je: equal / zero */

loc_003399C6: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003399C8: ;
    eax = MEM32(edx + 4);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_003399D2; /* je: equal / zero */

loc_003399D0: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003399D2: ;
    eax = MEM32(edx + 8);
    if (CMP_EQ(eax, MEM32(esi + 8))) goto loc_003399DC; /* je: equal / zero */

loc_003399DA: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003399DC: ;
    eax = MEM32(esp + 0x14);
    edx = edx + 0x10;
    esi = esi + 0x10;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_003399B6; /* jne: not equal / not zero */

loc_003399ED: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00339A09; /* je: equal / zero */

loc_003399F1: ;
    edx = MEM32(esp + 0x18);
    if (TEST_Z(MEM32(edx + 0x98), 0x20000000)) goto loc_00339A1C; /* je: equal / zero */

loc_00339A01: ;
    xmm3 = MEMF(0x58BCCC); /* movss */

loc_00339A09: ;
    edx = MEM32(esp + 0x10);

loc_00339A0D: ;
    ebp = ebp + 0xFFFFFFF6u;
    if (CMP_A(ebp, 6)) goto loc_00339A5B; /* ja: above (unsigned >) */

loc_00339A15: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x339B7C); /* switch: 9 entries, 8 targets */
    if (_jt == 0x00339A34u) goto loc_00339A34;
    if (_jt == 0x00339A43u) goto loc_00339A43;
    if (_jt == 0x00339A5Bu) goto loc_00339A5B;
    if (_jt == 0x00339A89u) goto loc_00339A89;
    if (_jt == 0x00339A9Fu) goto loc_00339A9F;
    if (_jt == 0x00339AAEu) goto loc_00339AAE;
    if (_jt == 0x00339B1Au) goto loc_00339B1A;
    if (_jt == 0x00339B69u) goto loc_00339B69;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00339A1C: ;
    (void)0; /* cmp ebp, 0x10 - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (CMP_NE(ebp, 0x10)) goto loc_00339A2A; /* jne: not equal / not zero */

loc_00339A25: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00339A0D;

loc_00339A2A: ;
    xmm3 = MEMF(0x648CE4); /* movss */
    goto loc_00339A0D;

loc_00339A34: ;
    if (CMP_NE(edx, 4)) goto loc_00339A5B; /* jne: not equal / not zero */

loc_00339A39: ;
    xmm3 = xmm3 + MEMF(0x648D14); /* addss */
    goto loc_00339A5F;

loc_00339A43: ;
    eax = edx;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00339A52; /* je: equal / zero */

loc_00339A4A: ;
    eax--;
    if ((eax == 0)) goto loc_00339A76; /* je: equal / zero */

loc_00339A4D: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00339A5B; /* jne: not equal / not zero */

loc_00339A52: ;
    if (TEST_NZ(MEM8(edi + 0x458), 1)) goto loc_00339A5F; /* jne: not equal / not zero */

loc_00339A5B: ;
    xmm3 = xmm3 + xmm0; /* addss */

loc_00339A5F: ;
    if (CMP_A(ebp, 6)) goto loc_00339B69; /* ja: above (unsigned >) */

loc_00339A68: ;
    edx = ZX8(MEM8(ebp + 0x339BA0));
    { uint32_t _jt = MEM32(edx * 4 + 0x339B98); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00339B1Au) goto loc_00339B1A;
    if (_jt == 0x00339B69u) goto loc_00339B69;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00339A76: ;
    if (TEST_Z(MEM8(edi + 0x458), 1)) goto loc_00339A5B; /* je: equal / zero */

loc_00339A7F: ;
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    goto loc_00339A5F;

loc_00339A89: ;
    eax = edx;
    eax = eax - 4;
    if ((eax == 0)) goto loc_00339A39; /* je: equal / zero */

loc_00339A90: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00339A5B; /* jne: not equal / not zero */

loc_00339A95: ;
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    goto loc_00339A5F;

loc_00339A9F: ;
    if (CMP_NE(edx, 6)) goto loc_00339A5B; /* jne: not equal / not zero */

loc_00339AA4: ;
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    goto loc_00339A5F;

loc_00339AAE: ;
    if (CMP_NE(edx, 5)) goto loc_00339A5B; /* jne: not equal / not zero */

loc_00339AB3: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + esi;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00339A5B; /* je: equal / zero */

loc_00339ACE: ;
    SET_LO16(eax, MEM16(eax + 0x498));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00339AE8; /* jne: not equal / not zero */

loc_00339ADB: ;
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    goto loc_00339A5F;

loc_00339AE8: ;
    edx = MEM32(0x84B264);
    edx = MEM32(edx);
    eax = SX16(LO16(eax));
    eax = MEM32(edx + eax * 4);
    SET_LO16(eax, MEM16(eax));
    if (CMP_EQ(LO16(eax), 5)) goto loc_00339A39; /* je: equal / zero */

loc_00339B03: ;
    if (CMP_EQ(LO16(eax), 4)) goto loc_00339A39; /* je: equal / zero */

loc_00339B0D: ;
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    goto loc_00339A5F;

loc_00339B1A: ;
    edi = edi + 0x44C;
    ecx = ecx + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00339B2A: ;
    esp = esp + 8;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 < xmm0)) goto loc_00339B3C; /* jb: below (unsigned <) */

loc_00339B32: ;
    xmm0 = MEMF(0x648D18); /* movss */
    goto loc_00339B62;

loc_00339B3C: ;
    /* comiss xmm0, MEMF(0x59D948) - sets EFLAGS */
    if ((xmm0 < MEMF(0x59D948))) goto loc_00339B4A; /* jb: below (unsigned <) */

loc_00339B45: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00339B62;

loc_00339B4A: ;
    xmm0 = xmm0 * MEMF(0x648EE8); /* mulss */
    xmm0 = xmm0 * MEMF(0x6493F4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */

loc_00339B62: ;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */

loc_00339B69: ;
    /* comiss xmm4, xmm3 - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    xmm0 = xmm4; /* movaps */
    if ((xmm4 > xmm3)) goto loc_00339B78; /* ja: above (unsigned >) */

loc_00339B75: ;
    xmm0 = xmm3; /* movaps */

loc_00339B78: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00339BB0
 * Original: 0x00339BB0 - 0x00339E3B (651 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339BB0: ;
    esp = esp - 0x24;
    eax--;
    if (CMP_LE(eax & eax, 0)) goto loc_00339E37; /* jle: less or equal (signed <=) */

loc_00339BBC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00339BD0: ;
    eax = 0; /* xor self */
    if (CMP_L(edx, 4)) goto loc_00339D98; /* jl: less (signed <) */

loc_00339BDB: ;
    eax = MEM32(esp + 0x38);
    ecx = edx + -4;
    ecx = ecx >> 2;
    eax = eax + 0x14;
    ecx++;
    MEM32(esp + 0x14) = ecx;
    ecx = ecx << 2;
    MEM32(esp + 0x1C) = ecx;

loc_00339BF4: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(eax + -12) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + -12))) goto loc_00339C50; /* jbe: below or equal (unsigned <=) */

loc_00339BFF: ;
    ecx = eax + -20;
    ebx = ecx;
    edx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebp;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(ecx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(ecx + 0xC) = ebp;
    MEM32(ecx + 0x10) = ebx;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 0x10) = edx;

loc_00339C50: ;
    xmm0 = MEMF(eax + 0x1C); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_00339CB4; /* jbe: below or equal (unsigned <=) */

loc_00339C5B: ;
    ecx = eax;
    edx = MEM32(ecx);
    esi = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(esp + 0x28) = edi;
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = ecx;
    ecx = eax + 0x14;
    edi = ecx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebx + 0x10) = edi;
    MEM32(ecx + 0x10) = edx;

loc_00339CB4: ;
    xmm0 = MEMF(eax + 0x30); /* movss */
    /* comiss xmm0, MEMF(eax + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x1C))) goto loc_00339D19; /* jbe: below or equal (unsigned <=) */

loc_00339CBF: ;
    ecx = eax + 0x14;
    edx = ecx;
    esi = MEM32(edx);
    edi = MEM32(edx + 4);
    ebx = MEM32(edx + 8);
    MEM32(esp + 0x28) = ebx;
    ebx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edx;
    edx = eax + 0x28;
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(ecx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(ecx + 0xC) = ebp;
    MEM32(ecx + 0x10) = ebx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = esi;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 0x10) = ecx;

loc_00339D19: ;
    xmm0 = MEMF(eax + 0x44); /* movss */
    /* comiss xmm0, MEMF(eax + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x30))) goto loc_00339D7E; /* jbe: below or equal (unsigned <=) */

loc_00339D24: ;
    ecx = eax + 0x28;
    edx = ecx;
    esi = MEM32(edx);
    edi = MEM32(edx + 4);
    ebx = MEM32(edx + 8);
    MEM32(esp + 0x28) = ebx;
    ebx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edx;
    edx = eax + 0x3C;
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(ecx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(ecx + 0xC) = ebp;
    MEM32(ecx + 0x10) = ebx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = esi;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 0x10) = ecx;

loc_00339D7E: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x50;
    ecx--;
    MEM32(esp + 0x14) = ecx;
    if ((ecx != 0)) goto loc_00339BF4; /* jne: not equal / not zero */

loc_00339D90: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);

loc_00339D98: ;
    if (CMP_GE(eax, edx)) goto loc_00339E1F; /* jge: greater or equal (signed >=) */

loc_00339DA0: ;
    esi = MEM32(esp + 0x38);
    ecx = eax + eax * 4 + 5;
    edx = edx - eax;
    ecx = esi + ecx * 4;
    MEM32(esp + 0x14) = edx;

loc_00339DB1: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* comiss xmm0, MEMF(ecx + -12) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + -12))) goto loc_00339E0D; /* jbe: below or equal (unsigned <=) */

loc_00339DBC: ;
    eax = ecx + -20;
    ebx = eax;
    edx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebp;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = ebx;
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x10) = edx;

loc_00339E0D: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx + 0x14;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00339DB1; /* jne: not equal / not zero */

loc_00339E1B: ;
    edx = MEM32(esp + 0x10);

loc_00339E1F: ;
    eax = MEM32(esp + 0x18);
    edx--;
    eax--;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00339BD0; /* jne: not equal / not zero */

loc_00339E33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00339E37: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00339E40
 * Original: 0x00339E40 - 0x00339EC3 (131 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00339E40: ;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x2D80) = 0;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x14E54);
    if (TEST_Z(eax, eax)) goto loc_00339EC1; /* je: equal / zero */

loc_00339E5B: ;
    edx = MEM32(edx + 0x14E4C);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM16(edx + edi * 2);
    eax = eax + edx * 4;
    MEM32(ecx + 0x2D88) = 0;
    edx = MEM32(eax);
    (void)0; /* cmp edx, 0x4002 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(edx, 0x4002)) goto loc_00339EC1; /* je: equal / zero */

loc_00339E80: ;
    if (CMP_NE(edx, 0x4000)) goto loc_00339EB3; /* jne: not equal / not zero */

loc_00339E88: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    (void)0; /* cmp edx, 0x4004 - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_EQ(edx, 0x4004)) goto loc_00339EB3; /* je: equal / zero */

loc_00339E99: ;
    /* nop */

loc_00339EA0: ;
    eax = esp;
    PUSH32(esp, 0); sub_0033A6E0(); /* call 0x0033A6E0 */

loc_00339EA8: ;
    eax = MEM32(esp);
    if (CMP_NE(MEM32(eax), 0x4004)) goto loc_00339EA0; /* jne: not equal / not zero */

loc_00339EB3: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    if (CMP_NE(edx, 0x4002)) goto loc_00339E80; /* jne: not equal / not zero */

loc_00339EC1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00339ED0
 * Original: 0x00339ED0 - 0x00339FBB (235 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00339ED0: ;
    esp = esp - 0x10;
    ecx = MEM32(esi + 0x2D80);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(ecx, eax)) goto loc_00339F61; /* jle: less or equal (signed <=) */

loc_00339EEA: ;
    edi = esi + 0x30;
    /* nop */

loc_00339EF0: ;
    eax = edi;
    PUSH32(esp, 0); sub_00337500(); /* call 0x00337500 */

loc_00339EF7: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00339F27; /* jle: less or equal (signed <=) */

loc_00339F00: ;
    ebp = edi + 0xA4;

loc_00339F06: ;
    SET_LO8(eax, LO8(ebx));
    ecx = edi;
    PUSH32(esp, 0); sub_00339930(); /* call 0x00339930 */

loc_00339F0F: ;
    MEMF(ebp + 4) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + ebx + 0x20));
    MEM8(ebp) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1E);
    ebx++;
    ebp = ebp + 0x14;
    if (CMP_L(ebx, ecx)) goto loc_00339F06; /* jl: less (signed <) */

loc_00339F27: ;
    eax = MEM32(edi + 8);
    ebp = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(eax & eax, 0)) ? 1 : 0); /* setle */
    MEM32(edi + 0x9C) = 0;
    ecx = MEM32(esi + 0x2D80);
    edi = edi + 0x488;
    edx--;
    eax = eax & edx;
    ebp = ebp + eax;
    eax = MEM32(esp + 0xC);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_00339EF0; /* jl: less (signed <) */

loc_00339F61: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) { sub_00339FBB(); return; } /* jle: less or equal (signed <=) */

loc_00339F68: ;
    ecx = 0xFFFFFFE0u;
    ecx = ecx - esi;
    eax = esi + 0x20;
    ebp = 0; /* xor self */
    goto loc_00339F80;

    /* nop */
    /* nop */

loc_00339F80: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    edi = MEM32(0x84B330);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    MEM8(edx + edi + 0x139) = 0;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    edi = MEM32(0x84B330);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    MEM32(edx + edi + 0x7E4) = ebp;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x1E);
    eax++;
    edx = ecx + eax;
    if (CMP_L(edx, edi)) goto loc_00339F80; /* jl: less (signed <) */

loc_00339FB9: ;
    g_seh_ebp = ebp; sub_00339FBD(); return; /* tail jmp 0x00339FBD */

}

/**
 * sub_0033A450
 * Original: 0x0033A450 - 0x0033A533 (227 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A450: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x84B330);
    edx = MEM32(eax + 0x14E4C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    PUSH32(esp, edi);
    ecx = ecx + MEM32(0x84A5F8);
    if (TEST_Z(edx, edx)) goto loc_0033A530; /* je: equal / zero */

loc_0033A475: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x14E50);
    edx = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    eax = MEM32(eax + 0x14E54);
    edi = eax + edx * 4;
    eax = MEM32(edi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, 0x4002)) goto loc_0033A52F; /* je: equal / zero */

loc_0033A499: ;
    ecx = MEM32(ecx + 0x568);
    edx = MEM32(ecx + 0x444);
    ecx = MEM32(edx + 8);

loc_0033A4A8: ;
    if (CMP_EQ(eax, ecx)) goto loc_0033A4CF; /* je: equal / zero */

loc_0033A4AC: ;
    if (CMP_EQ(eax, 0x4004)) goto loc_0033A4BF; /* je: equal / zero */

loc_0033A4B3: ;
    eax = MEM32(edi + esi * 4 + 4);
    esi++;
    if (CMP_NE(eax, 0x4004)) goto loc_0033A4B3; /* jne: not equal / not zero */

loc_0033A4BF: ;
    eax = MEM32(edi + esi * 4 + 4);
    esi++;
    if (CMP_NE(eax, 0x4002)) goto loc_0033A4A8; /* jne: not equal / not zero */

loc_0033A4CB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033A4CF: ;
    esi++;
    eax = MEM32(edi + esi * 4);
    ecx = edi + esi * 4;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, 0x4004)) goto loc_0033A4F3; /* je: equal / zero */

loc_0033A4E0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0033A4E6; /* jne: not equal / not zero */

loc_0033A4E5: ;
    ebp++;

loc_0033A4E6: ;
    eax = MEM32(ecx + 4);
    ecx = ecx + 4;
    if (CMP_NE(eax, 0x4004)) goto loc_0033A4E0; /* jne: not equal / not zero */

loc_0033A4F3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0033A4F8: ;
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_L(ecx, ebp)) goto loc_0033A50B; /* jl: less (signed <) */

loc_0033A508: ;
    ecx = ebp + -1;

loc_0033A50B: ;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(ecx, ecx)) goto loc_0033A527; /* je: equal / zero */

loc_0033A512: ;
    eax = MEM32(edi + esi * 4);
    if (CMP_EQ(eax, 0x4004)) goto loc_0033A527; /* je: equal / zero */

loc_0033A51C: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0033A522; /* jne: not equal / not zero */

loc_0033A521: ;
    edx++;

loc_0033A522: ;
    esi++;
    if (CMP_NE(edx, ecx)) goto loc_0033A512; /* jne: not equal / not zero */

loc_0033A527: ;
    edi = edi + esi * 4;
    PUSH32(esp, 0); sub_00342C20(); /* call 0x00342C20 */

loc_0033A52F: ;
    POP32(esp, esi);

loc_0033A530: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A540
 * Original: 0x0033A540 - 0x0033A55D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A540: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x2D80);
    if (CMP_L(eax, 0xA)) { sub_0033A55D(); return; } /* jl: less (signed <) */

loc_0033A555: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A6E0
 * Original: 0x0033A6E0 - 0x0033A6EF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A6E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033A6E0: ;
    edx = MEM32(ecx + 0x2D80);
    if (CMP_L(edx, 0xA)) { sub_0033A6EF(); return; } /* jl: less (signed <) */

loc_0033A6EB: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0033A890
 * Original: 0x0033A890 - 0x0033A90D (125 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A890(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033A890: ;
    edx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x8006B8;
    edx = edx + 0x7E4;

loc_0033A8A3: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0033A8E5; /* je: equal / zero */

loc_0033A8A9: ;
    eax = MEM32(eax + 4);
    MEM32(esi + -8) = eax;
    eax = 0x10;
    ecx = esi;

loc_0033A8B6: ;
    ebx = MEM32(edx);
    ebx = MEM32(eax + ebx + -4);
    MEM32(ecx + -4) = ebx;
    ebx = MEM32(edx);
    ebx = MEM32(eax + ebx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx);
    ebx = MEM32(eax + ebx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx);
    ebx = MEM32(eax + ebx + 8);
    MEM32(ecx + 8) = ebx;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    if (CMP_L(eax, 0x90)) goto loc_0033A8B6; /* jl: less (signed <) */

loc_0033A8E5: ;
    esi = esi + 0x84;
    edx = edx + 0x8CC;
    if (CMP_L(esi, 0x800EF8)) goto loc_0033A8A3; /* jl: less (signed <) */

loc_0033A8F9: ;
    POP32(esp, esi);
    MEM32(edi + 0x2D80) = 2;
    MEM8(edi + 0x2D84) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A910
 * Original: 0x0033A910 - 0x0033AC00 (752 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A910: ;
    esp = esp - 0x38;
    xmm3 = MEMF(0x64947C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    eax = MEM32(edi + 0x568);
    eax = MEM32(eax + 0x444);
    esi = esi | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    eax = eax + 0x21C;
    /* nop */

loc_0033A940: ;
    SET_LO8(edx, MEM8(eax + -28));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0033A954; /* je: equal / zero */

loc_0033A947: ;
    edx = MEM32(eax);
    SET_LO8(ebx, MEM8(edx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0033AAD1; /* jne: not equal / not zero */

loc_0033A954: ;
    ecx++;
    eax = eax + 0x20;
    if (CMP_L(ecx, 4)) goto loc_0033A940; /* jl: less (signed <) */

loc_0033A95D: ;
    ebx = MEM32(0x84A5F8);
    eax = 0x10;
    MEM32(esp + 0x14) = eax;
    ebx = ebx + 0x6F38;
    PUSH32(esp, ebp);
    goto loc_0033A980;

    /* nop */
    /* nop */

loc_0033A980: ;
    ecx = MEM32(0x84A5FC);
    edx = ZX8(MEM8(ecx + eax));
    ebp = MEM32(esp + 0x50);
    if (CMP_NE(edx, ebp)) goto loc_0033AAE3; /* jne: not equal / not zero */

loc_0033A996: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    if (CMP_EQ(eax, 2)) goto loc_0033A9AD; /* je: equal / zero */

loc_0033A99F: ;
    ecx = MEM32(edi + 0x238);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_0033AAE3; /* jne: not equal / not zero */

loc_0033A9AD: ;
    if (CMP_BE(MEM16(ebx + 0x176), 1)) goto loc_0033AAE3; /* jbe: below or equal (unsigned <=) */

loc_0033A9BB: ;
    edx = edi + 0x78;
    eax = ebx + -448;
    ecx = esp + 0x30;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x30;
    MEM32(esp + 0x24) = edx;
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
    MEMF(esp + 0x28) = xmm1; /* movss */
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(esp + 0x28); /* movss */
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0033AA40; /* je: equal / zero */

loc_0033AA37: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0033AAE3; /* jbe: below or equal (unsigned <=) */

loc_0033AA40: ;
    (void)0; /* cmp ebp, 0x36 - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(ebp, 0x36)) goto loc_0033AAC4; /* jne: not equal / not zero */

loc_0033AA4A: ;
    if (CMP_NE(MEM8(ebx + -408), 7)) goto loc_0033AAE3; /* jne: not equal / not zero */

loc_0033AA57: ;
    ebp = MEM32(ebx + 0x338);
    if (CMP_NE(MEM32(ebp + 8), 2)) goto loc_0033AAE3; /* jne: not equal / not zero */

loc_0033AA67: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x444);
    SET_LO8(eax, MEM8(ecx + 0x10));
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    esi = esp + 0x3C;
    eax = esp + 0x2C;
    edi = edx;
    PUSH32(esp, 0); sub_0032DAE0(); /* call 0x0032DAE0 */

loc_0033AA8F: ;
    ecx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0033AADB; /* jle: less or equal (signed <=) */

loc_0033AA99: ;
    /* nop */

loc_0033AAA0: ;
    edx = MEM32(esp + eax * 4 + 0x3C);
    if (CMP_EQ(MEM8(edx + ebp + 0xA00), 0)) goto loc_0033AAB3; /* je: equal / zero */

loc_0033AAAE: ;
    MEM8(esp + 0x13) = 1;

loc_0033AAB3: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0033AAA0; /* jl: less (signed <) */

loc_0033AAB8: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033AADB; /* je: equal / zero */

loc_0033AAC0: ;
    edi = MEM32(esp + 0x4C);

loc_0033AAC4: ;
    eax = MEM32(esp + 0x18);
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 0x14) = eax;
    goto loc_0033AADF;

loc_0033AAD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0033AADB: ;
    edi = MEM32(esp + 0x4C);

loc_0033AADF: ;
    esi = MEM32(esp + 0x14);

loc_0033AAE3: ;
    eax = MEM32(esp + 0x18);
    eax++;
    ebx = ebx + 0x6D0;
    (void)0; /* cmp eax, 0x80 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, 0x80)) goto loc_0033A980; /* jl: less (signed <) */

loc_0033AAFD: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_0033AC00(); return; } /* je: equal / zero */

loc_0033AB06: ;
    ecx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    SET_LO16(eax, MEM16(ecx + esi + 0x410));
    ecx = ecx + esi;
    edx = ZX16(LO16(eax));
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0033AB37; /* je: equal / zero */

loc_0033AB28: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0033AB37; /* je: equal / zero */

loc_0033AB2D: ;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_0033ABF1; /* jne: not equal / not zero */

loc_0033AB37: ;
    xmm7 = MEMF(0x6493D4); /* movss */
    eax = 0; /* xor self */
    MEM32(0x84B338) = eax;
    MEM32(0x84B33C) = eax;
    eax = MEM32(0x84B330);
    edx = MEM32(eax + 0x145B4);
    eax = MEM32(eax + 0x145B8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x84B264);
    edx = (uint32_t)(int32_t)SMEM16(edx + 4);
    edi = ZX16(MEM16(eax + edx * 2));
    ebx = ebx | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    ebp = ecx + 0x78;
    MEM32(esp + 0x1C) = ebx;
    MEMF(esp + 0x14) = xmm7; /* movss */
    if (CMP_LE(edi & edi, 0)) goto loc_0033ABE6; /* jle: less or equal (signed <=) */

loc_0033AB84: ;
    ecx = MEM32(esp + 0x2C);
    eax = ZX16(MEM16(ecx + esi * 2));
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0033ABD8; /* js: sign (negative) */

loc_0033AB90: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0033ABD8; /* je: equal / zero */

loc_0033AB97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003744E0(); /* call 0x003744E0 */

loc_0033ABB2: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x14;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0033ABC3; /* jbe: below or equal (unsigned <=) */

loc_0033ABBE: ;
    xmm7 = xmm0; /* movaps */
    ebx = eax;

loc_0033ABC3: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033ABD8; /* jbe: below or equal (unsigned <=) */

loc_0033ABCE: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;

loc_0033ABD8: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_0033AB84; /* jl: less (signed <) */

loc_0033ABDD: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0033ABEA; /* jne: not equal / not zero */

loc_0033ABE6: ;
    ebx = MEM32(esp + 0x1C);

loc_0033ABEA: ;
    MEM16(ecx + 0x410) = LO16(ebx);

loc_0033ABF1: ;
    eax = ZX16(MEM16(ecx + 0x410));
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0033AC10
 * Original: 0x0033AC10 - 0x0033AC4E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033AC10: ;
    if (CMP_NE(MEM16(ecx + 2), 0x1F)) { sub_0033AC4E(); return; } /* jne: not equal / not zero */

loc_0033AC17: ;
    edx = MEM32(eax + 0x568);
    eax = MEM32(edx + 0x444);
    if (CMP_NE(MEM32(eax + 8), 5)) { sub_0033AC4E(); return; } /* jne: not equal / not zero */

loc_0033AC29: ;
    SET_LO8(eax, MEM8(ecx + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_0033AC4E(); return; } /* je: equal / zero */

loc_0033AC30: ;
    edx = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + eax + 0x135));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0033AC4E(); return; } /* je: equal / zero */

loc_0033AC4B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033AC60
 * Original: 0x0033AC60 - 0x0033B163 (1283 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033AC60: ;
    esp = esp - 0x28;
    ecx = MEM32(esp + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x20);
    ecx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    edx = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    PUSH32(esp, edi);
    esi = esi + MEM32(0x84A5F8);
    PUSH32(esp, eax);
    edi = edx + ecx + 0x38;
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0033AC95: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 4;
    (void)0; /* cmp MEM16(edx + 0x498), 0xFFFFFFFFu - flags set for next jcc */
    ebx = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(MEM16(edx + 0x498), 0xFFFFFFFFu)) goto loc_0033B15A; /* je: equal / zero */

loc_0033ACB2: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033ACDD; /* je: equal / zero */

loc_0033ACBC: ;
    xmm0 = MEMF(edi + 0xDC); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    MEMF(edi + 0xDC) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0033ACDD: ;
    SET_LO16(eax, MEM16(edi + 2));
    if (CMP_EQ(LO16(eax), 6)) goto loc_0033B15A; /* je: equal / zero */

loc_0033ACEB: ;
    if (CMP_EQ(LO16(eax), 7)) goto loc_0033B15A; /* je: equal / zero */

loc_0033ACF5: ;
    if (CMP_EQ(LO16(eax), 0x27)) goto loc_0033B15A; /* je: equal / zero */

loc_0033ACFF: ;
    if (CMP_EQ(LO16(eax), 0x28)) goto loc_0033B15A; /* je: equal / zero */

loc_0033AD09: ;
    eax = MEM32(edi + 0x98);
    if (TEST_Z(HI8(eax), 4)) goto loc_0033B15A; /* je: equal / zero */

loc_0033AD18: ;
    xmm0 = MEMF(edi + 0xDC); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0xDC) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0033B15A; /* ja: above (unsigned >) */

loc_0033AD3C: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edi + 0xDC) = xmm0; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_0033AD83; /* je: equal / zero */

loc_0033AD50: ;
    eax = ZX16(MEM16(ebx + 0x3AE));
    ecx = ZX16(MEM16(ebx + 0x3B0));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(0x648EA8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_0033AD83; /* jb: below (unsigned <) */

loc_0033AD77: ;
    MEM32(esp + 0x10) = 0;
    ebx = MEM32(esp + 0x10);

loc_0033AD83: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(ecx + 0x4CC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = edi + 0xF0;
    if (1 /* jnp after test - parity */) goto loc_0033B159; /* jnp: not parity */

loc_0033ADA5: ;
    ecx = ecx + 0x4AC;
    eax = MEM32(ecx);
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xFE);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x4B8));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0x4AC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0033ADE6: ;
    MEM16(edi + 0xFE) = LO16(eax);
    edx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    if (CMP_EQ(MEM16(edx + 0x498), 0xFFFFFFFFu)) goto loc_0033B159; /* je: equal / zero */

loc_0033AE04: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033B159; /* jne: not equal / not zero */

loc_0033AE12: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033B159; /* jne: not equal / not zero */

loc_0033AE20: ;
    PUSH32(esp, 0x36);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033A910(); /* call 0x0033A910 */

loc_0033AE28: ;
    esp = esp + 8;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0033AE3C; /* jne: not equal / not zero */

loc_0033AE34: ;
    MEM32(esp + 0x18) = 0xFFFF;

loc_0033AE3C: ;
    ecx = MEM32(esp + 0x3C);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x410));
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(ebp + 0xE));
    PUSH32(esp, ebp);
    eax = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033AE5B: ;
    ecx = MEM32(edi + 0x98);
    ecx = ecx & 0xFFFFFF7Fu;
    esp = esp + 0x10;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(edi + 0x98) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0033AF9C; /* je: equal / zero */

loc_0033AE7E: ;
    if (CMP_EQ(MEM16(ebx + 0x410), 0xFFFF)) goto loc_0033B159; /* je: equal / zero */

loc_0033AE8D: ;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0033AC10(); /* call 0x0033AC10 */

loc_0033AE96: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033AF70; /* jne: not equal / not zero */

loc_0033AE9E: ;
    xmm1 = MEMF(0x6491E4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033AF92; /* jbe: below or equal (unsigned <=) */

loc_0033AEAF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00369D80(); /* call 0x00369D80 */

loc_0033AEB6: ;
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_EQ(LO8(eax), 3)) goto loc_0033AECE; /* je: equal / zero */

loc_0033AEBE: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_0033AED4;

loc_0033AECE: ;
    MEMF(esp + 0x24) = xmm1; /* movss */

loc_0033AED4: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x410));
    PUSH32(esp, eax);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    eax = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx + 0x410));
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033AEFF: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x4C);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x410));
    SET_LO16(ecx, MEM16(ebp + 0xE));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x27));
    PUSH32(esp, ebp);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033AF27: ;
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    esp = esp + 0x20;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0033AF8C; /* ja: above (unsigned >) */

loc_0033AF4B: ;
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(ebx, 0xFFFF)) goto loc_0033AF6C; /* je: equal / zero */

loc_0033AF57: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00369CC0(); /* call 0x00369CC0 */

loc_0033AF5E: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0033AF8C; /* ja: above (unsigned >) */

loc_0033AF6C: ;
    ebx = MEM32(esp + 0x14);

loc_0033AF70: ;
    SET_LO16(eax, MEM16(ebx + 0x60));
    MEM16(edi + 0xA2) = LO16(eax);
    eax = edi;
    PUSH32(esp, 0); sub_0033FA40(); /* call 0x0033FA40 */

loc_0033AF82: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0033AF8C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */

loc_0033AF92: ;
    MEM32(edi + 0x98) = MEM32(edi + 0x98) | 0x80;

loc_0033AF9C: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0x444);
    (void)0; /* cmp MEM32(edx + 8), 5 - flags set for next jcc */
    xmm1 = MEMF(0x59D948); /* movss */
    if (CMP_NE(MEM32(edx + 8), 5)) goto loc_0033AFBE; /* jne: not equal / not zero */

loc_0033AFB6: ;
    xmm1 = MEMF(0x59D944); /* movss */

loc_0033AFBE: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033B139; /* jne: not equal / not zero */

loc_0033AFC9: ;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0033AC10(); /* call 0x0033AC10 */

loc_0033AFD2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033B139; /* jne: not equal / not zero */

loc_0033AFDA: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033B159; /* jbe: below or equal (unsigned <=) */

loc_0033AFE3: ;
    SET_LO16(ebx, MEM16(edi + 2));
    xmm0 = MEMF(0x6493C0); /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM16(edi + 2) = 0xFFFF;
    PUSH32(esp, 0); sub_0036A010(); /* call 0x0036A010 */

loc_0033B006: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(edi + 2) = LO16(ebx);
    if (TEST_Z(eax, eax)) goto loc_0033B0D9; /* je: equal / zero */

loc_0033B015: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ebx = edx + eax;
    edx = esp + 0x20;
    eax = esp + 0x2C;
    ecx = ebx;
    PUSH32(esp, 0); sub_0036A550(); /* call 0x0036A550 */

loc_0033B036: ;
    if (CMP_EQ(MEM16(esp + 0x20), 0xFFFFFFFFu)) goto loc_0033B0D9; /* je: equal / zero */

loc_0033B042: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00369D80(); /* call 0x00369D80 */

loc_0033B049: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 0x410));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_0033B076; /* je: equal / zero */

loc_0033B059: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033B071: ;
    esp = esp + 0x10;
    goto loc_0033B079;

loc_0033B076: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0033B079: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(ebp + 0xE));
    edx = esp + 0x38;
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033B09A: ;
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    xmm0 = xmm0 + MEMF(0x59D944); /* addss */
    esp = esp + 0x10;
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x1C))) goto loc_0033B0D9; /* ja: above (unsigned >) */

loc_0033B0B2: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    SET_LO8(ecx, MEM8(esp + 0x28));
    MEM16(edi + 0xA2) = LO16(eax);
    eax = edi;
    MEM8(edi + 0x9E) = LO8(ecx);
    PUSH32(esp, 0); sub_0033FA40(); /* call 0x0033FA40 */

loc_0033B0CF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0033B0D9: ;
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(ebx, 0xFFFF)) goto loc_0033B159; /* je: equal / zero */

loc_0033B0E5: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x444);
    (void)0; /* cmp MEM32(eax + 8), 5 - flags set for next jcc */
    xmm0 = MEMF(0x6491DC); /* movss */
    if (CMP_EQ(MEM32(eax + 8), 5)) goto loc_0033B107; /* je: equal / zero */

loc_0033B0FF: ;
    xmm0 = MEMF(0x59D944); /* movss */

loc_0033B107: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00369CC0(); /* call 0x00369CC0 */

loc_0033B114: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    esp = esp + 8;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033B159; /* jbe: below or equal (unsigned <=) */

loc_0033B12B: ;
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(edi + 0xBA) = LO16(ecx);
    goto loc_0033B14B;

loc_0033B139: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0033B159; /* je: equal / zero */

loc_0033B144: ;
    MEM16(edi + 0xBA) = LO16(eax);

loc_0033B14B: ;
    eax = edi;
    MEM8(edi + 0x9E) = 0;
    PUSH32(esp, 0); sub_0033F660(); /* call 0x0033F660 */

loc_0033B159: ;
    POP32(esp, ebp);

loc_0033B15A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B170
 * Original: 0x0033B170 - 0x0033B1FF (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B170: ;
    edx = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(ecx + 0x64));
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x618);
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(edi, edi)) goto loc_0033B1C6; /* jne: not equal / not zero */

loc_0033B185: ;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0033B1FE; /* je: equal / zero */

loc_0033B18A: ;
    eax = eax + 0x78;
    PUSH32(esp, eax);
    eax = SX8(LO8(ecx));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033B1A7: ;
    xmm1 = MEMF(0x6493E0); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033B1FE; /* jbe: below or equal (unsigned <=) */

loc_0033B1B7: ;
    eax = MEM32(esi + 0x1C);
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B1FE; /* je: equal / zero */

loc_0033B1C1: ;
    g_seh_ebp = ebp; sub_00330900(); return; /* tail jmp 0x00330900 */

loc_0033B1C6: ;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0033B1F4; /* je: equal / zero */

loc_0033B1CB: ;
    eax = eax + 0x78;
    PUSH32(esp, eax);
    eax = SX8(LO8(ecx));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033B1E8: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493E8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493E8))) goto loc_0033B1FE; /* jbe: below or equal (unsigned <=) */

loc_0033B1F4: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_0033B1FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033B200
 * Original: 0x0033B200 - 0x0033B255 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033B200: ;
    SET_LO16(ecx, MEM16(eax + 0x3B0));
    SET_LO16(ecx, LO16(ecx) >> 1);
    if (CMP_A(MEM16(eax + 0x3AE), LO16(ecx))) goto loc_0033B254; /* ja: above (unsigned >) */

loc_0033B213: ;
    SET_LO8(ecx, MEM8(edx + 0x64));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0033B22D; /* je: equal / zero */

loc_0033B21B: ;
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0x60));
    ecx = SX8(LO8(ecx));
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_0033B228: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0033B254; /* jne: not equal / not zero */

loc_0033B22D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B254; /* je: equal / zero */

loc_0033B23B: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0033B254; /* jne: not equal / not zero */

loc_0033B242: ;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, 1);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = 0;
    MEM8(eax + 6) = LO8(ecx);

loc_0033B254: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033B260
 * Original: 0x0033B260 - 0x0033B27C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B260(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033B260: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033B27C(); return; } /* je: equal / zero */

loc_0033B26D: ;
    if (CMP_NE(MEM8(esi + 0x64), 0xFF)) goto loc_0033B27A; /* jne: not equal / not zero */

loc_0033B273: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_0033B27A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B300
 * Original: 0x0033B300 - 0x0033B31D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B300(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033B300: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033B31D(); return; } /* je: equal / zero */

loc_0033B30D: ;
    if (CMP_NE(MEM16(esi + 2), 0x1F)) goto loc_0033B31B; /* jne: not equal / not zero */

loc_0033B314: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_0033B31B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B3A0
 * Original: 0x0033B3A0 - 0x0033B3DF (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B3A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = 0; /* xor self */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    eax = eax + 0x21C;

loc_0033B3C4: ;
    SET_LO8(edx, MEM8(eax + -28));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0033B3D4; /* je: equal / zero */

loc_0033B3CB: ;
    edx = MEM32(eax);
    SET_LO8(ebx, MEM8(edx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0033B3DF(); return; } /* jne: not equal / not zero */

loc_0033B3D4: ;
    ecx++;
    eax = eax + 0x20;
    if (CMP_L(ecx, 4)) goto loc_0033B3C4; /* jl: less (signed <) */

loc_0033B3DD: ;
    g_seh_ebp = ebp; sub_0033B3E8(); return; /* tail jmp 0x0033B3E8 */

}

/**
 * sub_0033B4A0
 * Original: 0x0033B4A0 - 0x0033B64E (430 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B4A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + edi + 0x20);
    edx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    PUSH32(esp, eax);
    esi = esi + ebp;
    ebx = ecx + edx + 0x38;
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0033B4D5: ;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    xmm5 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    xmm4 = xmm5; /* movaps */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B50B; /* je: equal / zero */

loc_0033B4E9: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1D);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebp = eax + ebp + 0x78;
    ecx = esi + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0033B501: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    xmm4 = xmm0; /* movaps */

loc_0033B50B: ;
    if (TEST_Z(eax, eax)) goto loc_0033B57F; /* je: equal / zero */

loc_0033B50F: ;
    SET_LO8(ecx, MEM8(esi + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B57F; /* je: equal / zero */

loc_0033B519: ;
    ecx = MEM32(eax + 0x570);
    ecx = MEM32(ecx + 0x1F0);
    if (TEST_Z(ecx, ecx)) goto loc_0033B52F; /* je: equal / zero */

loc_0033B529: ;
    ecx = ZX16(MEM16(ecx + 0x60));
    goto loc_0033B532;

loc_0033B52F: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0033B532: ;
    edx = ZX16(MEM16(esi + 0x60));
    if (CMP_NE(ecx, edx)) goto loc_0033B57F; /* jne: not equal / not zero */

loc_0033B53A: ;
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(ecx + edi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0036A160(); /* call 0x0036A160 */

loc_0033B54B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0033B562; /* je: equal / zero */

loc_0033B552: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(ebx + 0xC8) = xmm0; /* movss */

loc_0033B562: ;
    eax = MEM32(ebx + 0x98);
    if (TEST_Z(LO8(eax), 4)) goto loc_0033B57F; /* je: equal / zero */

loc_0033B56C: ;
    SET_LO8(ecx, MEM8(ebx + 0x100));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0033B57F; /* jne: not equal / not zero */

loc_0033B576: ;
    eax = eax | 2;
    MEM32(ebx + 0x98) = eax;

loc_0033B57F: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    eax--;
    if (CMP_A(eax, 0xC)) goto loc_0033B647; /* ja: above (unsigned >) */

loc_0033B58D: ;
    eax = ZX8(MEM8(eax + 0x33B664));
    { uint32_t _jt = MEM32(eax * 4 + 0x33B650); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0033B59Bu) goto loc_0033B59B;
    if (_jt == 0x0033B5C3u) goto loc_0033B5C3;
    if (_jt == 0x0033B5DFu) goto loc_0033B5DF;
    if (_jt == 0x0033B60Bu) goto loc_0033B60B;
    if (_jt == 0x0033B647u) goto loc_0033B647;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033B59B: ;
    xmm0 = MEMF(0x59D944); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B647; /* jbe: below or equal (unsigned <=) */

loc_0033B5AC: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ebx + 0xC8) = xmm0; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B5C3: ;
    xmm0 = MEMF(0x59D944); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B647; /* jbe: below or equal (unsigned <=) */

loc_0033B5D0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ebx + 0xC8) = xmm5; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B5DF: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B647; /* jbe: below or equal (unsigned <=) */

loc_0033B5EC: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1D);
    eax = esi;
    PUSH32(esp, 0); sub_0036A320(); /* call 0x0036A320 */

loc_0033B5F7: ;
    if (TEST_NZ(eax, eax)) goto loc_0033B647; /* jne: not equal / not zero */

loc_0033B5FB: ;
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x9C) = LO8(ecx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B60B: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B647; /* jbe: below or equal (unsigned <=) */

loc_0033B618: ;
    if (CMP_NE(MEM16(ebx + 2), 0xA)) goto loc_0033B647; /* jne: not equal / not zero */

loc_0033B61F: ;
    ecx = MEM32(ebx + 0x98);
    eax = 1;
    ecx = ecx | eax;
    MEM16(ebx + 2) = 0xE;
    MEM8(ebx + 0xEC) = LO8(eax);
    MEM32(ebx + 0x98) = ecx;
    SET_LO8(edx, MEM8(edi + 0x1D));
    MEM8(ebx + 0xEE) = LO8(edx);

loc_0033B647: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B680
 * Original: 0x0033B680 - 0x0033B8C9 (585 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B680: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + ebx + 0x20);
    edx = MEM32(0x84B330);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    PUSH32(esp, edi);
    esi = esi + MEM32(0x84A5F8);
    PUSH32(esp, eax);
    edi = ecx + edx + 0x38;
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0033B6B3: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    ebp = 0; /* xor self */
    /* comiss xmm0, MEMF(0x5A005C) - sets EFLAGS */
    MEM32(esp + 0xC) = eax;
    xmm4 = xmm5; /* movaps */
    if ((xmm0 <= MEMF(0x5A005C))) goto loc_0033B6E3; /* jbe: below or equal (unsigned <=) */

loc_0033B6D3: ;
    ecx = MEM32(esi + 0x56C);
    MEM32(ecx + 0x190) = 1;

loc_0033B6E3: ;
    SET_LO8(ecx, MEM8(ebx + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B711; /* je: equal / zero */

loc_0033B6EA: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x1D);
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ebp = edx + eax + 0x78;
    ecx = esi + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0033B707: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    xmm4 = xmm0; /* movaps */

loc_0033B711: ;
    if (TEST_Z(eax, eax)) goto loc_0033B773; /* je: equal / zero */

loc_0033B715: ;
    SET_LO8(ecx, MEM8(esi + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033B773; /* je: equal / zero */

loc_0033B71F: ;
    ecx = MEM32(eax + 0x570);
    ecx = MEM32(ecx + 0x1F0);
    if (TEST_Z(ecx, ecx)) goto loc_0033B735; /* je: equal / zero */

loc_0033B72F: ;
    ecx = ZX16(MEM16(ecx + 0x60));
    goto loc_0033B738;

loc_0033B735: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0033B738: ;
    edx = ZX16(MEM16(esi + 0x60));
    if (CMP_NE(ecx, edx)) goto loc_0033B773; /* jne: not equal / not zero */

loc_0033B740: ;
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(ecx + ebx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0036A160(); /* call 0x0036A160 */

loc_0033B751: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0033B773; /* je: equal / zero */

loc_0033B75C: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM8(edi + 0xEB) = 2;
    MEMF(edi + 0xC8) = xmm0; /* movss */

loc_0033B773: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    ecx = ecx + 0xFFFFFFF9u;
    if (CMP_A(ecx, 7)) goto loc_0033B8C2; /* ja: above (unsigned >) */

loc_0033B783: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x33B8CC); /* switch: 8 entries, 6 targets */
    if (_jt == 0x0033B78Au) goto loc_0033B78A;
    if (_jt == 0x0033B7E6u) goto loc_0033B7E6;
    if (_jt == 0x0033B80Eu) goto loc_0033B80E;
    if (_jt == 0x0033B82Eu) goto loc_0033B82E;
    if (_jt == 0x0033B87Bu) goto loc_0033B87B;
    if (_jt == 0x0033B8C2u) goto loc_0033B8C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033B78A: ;
    if (TEST_Z(eax, eax)) goto loc_0033B8C2; /* je: equal / zero */

loc_0033B792: ;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0x12F)) goto loc_0033B7A7; /* je: equal / zero */

loc_0033B79C: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0033B8C2; /* jne: not equal / not zero */

loc_0033B7A7: ;
    SET_LO16(eax, MEM16(edi + 2));
    if (CMP_EQ(LO16(eax), 0x10)) goto loc_0033B7C1; /* je: equal / zero */

loc_0033B7B1: ;
    if (CMP_EQ(LO16(eax), 0x14)) goto loc_0033B7C1; /* je: equal / zero */

loc_0033B7B7: ;
    if (CMP_NE(LO16(eax), 0x11)) goto loc_0033B8C2; /* jne: not equal / not zero */

loc_0033B7C1: ;
    MEM16(edi + 2) = 0x10;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0034A860(); /* call 0x0034A860 */

loc_0033B7DA: ;
    MEM8(edi + 0xEB) = 0;
    goto loc_0033B8B1;

loc_0033B7E6: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B8C2; /* jbe: below or equal (unsigned <=) */

loc_0033B7F7: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(edi + 0xC8) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B80E: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B8C2; /* jbe: below or equal (unsigned <=) */

loc_0033B81F: ;
    MEMF(edi + 0xC8) = xmm5; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B82E: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B8C2; /* jbe: below or equal (unsigned <=) */

loc_0033B83F: ;
    SET_LO16(eax, MEM16(edi + 2));
    if (CMP_EQ(LO16(eax), 0x10)) goto loc_0033B84F; /* je: equal / zero */

loc_0033B849: ;
    if (CMP_NE(LO16(eax), 0x12)) goto loc_0033B8C2; /* jne: not equal / not zero */

loc_0033B84F: ;
    eax = MEM32(edi + 0x98);
    eax = eax | 1;
    MEM16(edi + 2) = 0x11;
    MEM8(edi + 0xEC) = 1;
    MEM32(edi + 0x98) = eax;
    SET_LO8(eax, MEM8(ebx + 0x1D));
    MEM8(edi + 0xEE) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033B87B: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0033B8C2; /* jbe: below or equal (unsigned <=) */

loc_0033B888: ;
    SET_LO16(eax, MEM16(edi + 2));
    if (CMP_EQ(LO16(eax), 0x11)) goto loc_0033B898; /* je: equal / zero */

loc_0033B892: ;
    if (CMP_NE(LO16(eax), 0x12)) goto loc_0033B8C2; /* jne: not equal / not zero */

loc_0033B898: ;
    MEM16(edi + 2) = 0x10;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    PUSH32(esp, 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034A860(); /* call 0x0034A860 */

loc_0033B8B1: ;
    esp = esp + 0x10;
    MEM16(edi + 0xBE) = LO16(eax);
    MEM8(edi + 0xEC) = 0;

loc_0033B8C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B8F0
 * Original: 0x0033B8F0 - 0x0033C739 (3657 bytes, 881 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0033B8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x20);
    ecx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = eax;
    edx = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8CC);
    ebx = edx + ecx + 0x38;
    edi = edi + esi;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0033B934: ;
    edx = ZX16(MEM16(edi + 0x172));
    MEM32(esp + 0x24) = edx;
    xmm4 = MEMF(ebx + 0x184); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    esi = eax;
    eax = edi + 0x78;
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x10) = esi;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    /* FPU: fcos  */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(ebx + 0x17C); /* mulss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = MEMF(edi + 0x80); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEM32(esp + 0x20) = eax;
    xmm4 = xmm4 + xmm1; /* addss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(ebx + 0x188) = xmm4; /* movss */
    ecx = MEM32(eax);
    MEM32(ebx + 0x17C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x180) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x184) = eax;
    if (TEST_Z(esi, esi)) goto loc_0033B9FE; /* je: equal / zero */

loc_0033B9E0: ;
    ecx = ZX8(MEM8(edi + 0x135));
    edx = ZX16(MEM16(esi + 0x60));
    ecx--;
    if (CMP_NE(ecx, edx)) goto loc_0033B9FE; /* jne: not equal / not zero */

loc_0033B9F0: ;
    SET_LO16(eax, MEM16(edi + 0x410));
    MEM16(esi + 0x410) = LO16(eax);

loc_0033B9FE: ;
    ecx = MEM32(edi + 0x568);
    MEM8(ecx + 0x2E3) = 0;
    edx = MEM32(edi + 0x568);
    MEM8(edx + 0xD5) = 1;
    if (CMP_NE(MEM8(ebx + 0x101), 9)) goto loc_0033BC37; /* jne: not equal / not zero */

loc_0033BA25: ;
    SET_LO8(eax, MEM8(edi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033BA67; /* je: equal / zero */

loc_0033BA2F: ;
    eax = MEM32(ebx + 0x7A8);
    esi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0034B300(); /* call 0x0034B300 */

loc_0033BA3D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = MEM32(0x84B0E0);
    esi = MEM32(esp + 0x10);
    eax = eax + ecx;
    edx = MEM32(eax);
    ecx = ebx + 0xF0;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    goto loc_0033BC37;

loc_0033BA67: ;
    ecx = MEM32(edi + 0x238);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO16(eax, MEM16(ebx + 0xE8));
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    edx = edx + 0xA8;
    if (CMP_L(LO16(eax), 0x10)) goto loc_0033BAA4; /* jl: less (signed <) */

loc_0033BA89: ;
    if (CMP_GE(LO16(eax), 0x80)) goto loc_0033BAA4; /* jge: greater or equal (signed >=) */

loc_0033BA8F: ;
    ecx = MEM32(0x84A5F8);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_EQ(MEM32(eax + ecx + 0x68), edx)) goto loc_0033BB01; /* je: equal / zero */

loc_0033BAA4: ;
    esi = MEM32(0x84A5FC);
    MEM16(ebx + 0xE8) = 0xFFFF;
    eax = 0x10;

loc_0033BAB8: ;
    if (CMP_EQ(MEM8(esi + eax), 0)) goto loc_0033BAF5; /* je: equal / zero */

loc_0033BABE: ;
    edi = MEM32(0x84A5F8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edi;
    if (CMP_NE(MEM32(ecx + 0x68), edx)) goto loc_0033BAF1; /* jne: not equal / not zero */

loc_0033BAD3: ;
    MEM16(ebx + 0xE8) = LO16(eax);
    if (TEST_NZ(MEM8(ecx + 0x468), 8)) goto loc_0033BAEC; /* jne: not equal / not zero */

loc_0033BAE3: ;
    MEM16(ebx + 0xE8) = 0xFFFF;

loc_0033BAEC: ;
    eax = 0x80;

loc_0033BAF1: ;
    edi = MEM32(esp + 0x14);

loc_0033BAF5: ;
    eax++;
    if (CMP_L(eax, 0x80)) goto loc_0033BAB8; /* jl: less (signed <) */

loc_0033BAFD: ;
    esi = MEM32(esp + 0x10);

loc_0033BB01: ;
    SET_LO16(eax, MEM16(ebx + 0xE8));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0033BB85; /* je: equal / zero */

loc_0033BB0E: ;
    edx = SX16(LO16(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = edx + eax + 0x78;
    eax = MEM32(ecx);
    esi = ebx + 0xF0;
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx + 0xFC));
    PUSH32(esp, 0x33);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0033BB4A: ;
    esp = esp + 0xC;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM16(ebx + 0xFC) = LO16(eax);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0033BB78; /* je: equal / zero */

loc_0033BB5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0033BB6C: ;
    esp = esp + 0x18;
    MEM16(ebx + 0xFE) = LO16(eax);
    goto loc_0033BB81;

loc_0033BB78: ;
    MEM16(ebx + 0xE8) = 0xFFFF;

loc_0033BB81: ;
    esi = MEM32(esp + 0x10);

loc_0033BB85: ;
    if (CMP_NE(MEM16(ebx + 0xE8), 0xFFFFFFFFu)) goto loc_0033BBDD; /* jne: not equal / not zero */

loc_0033BB8F: ;
    eax = MEM32(ebx + 0x7A8);
    esi = MEM32(eax);
    PUSH32(esp, 0); sub_0034B300(); /* call 0x0034B300 */

loc_0033BB9C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + MEM32(0x84B0E0);
    esi = MEM32(eax);
    ecx = ebx + 0xF0;
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx + 0xFC));
    PUSH32(esp, 0x33);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0033BBCF: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    MEM16(ebx + 0xFC) = LO16(eax);

loc_0033BBDD: ;
    ecx = MEM32(esp + 0x20);
    eax = ebx + 0xF0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033BBEE: ;
    xmm1 = MEMF(0x6493BC); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033BC05; /* jbe: below or equal (unsigned <=) */

loc_0033BBFE: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 2;

loc_0033BC05: ;
    xmm1 = MEMF(0x6493E0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm3 = 0.0f; /* xorps self = zero */
    if ((xmm1 <= xmm0)) goto loc_0033BC37; /* jbe: below or equal (unsigned <=) */

loc_0033BC15: ;
    edx = MEM32(edi + 0x568);
    MEM8(edx + 0x2E3) = 0x40;
    eax = MEM32(edi + 0x568);
    MEM8(eax + 0xD5) = 0;
    MEMF(ebx + 0x128) = xmm3; /* movss */

loc_0033BC37: ;
    xmm0 = MEMF(0x648E64); /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0033BC4F; /* jbe: below or equal (unsigned <=) */

loc_0033BC4C: ;
    xmm0 = xmm1; /* movaps */

loc_0033BC4F: ;
    xmm1 = MEMF(ebx + 0xE4); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebx + 0xE4) = xmm1; /* movss */

loc_0033BC63: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 2));
    MEM32(esp + 0x34) = eax;
    eax = SX16(LO16(eax));
    if (CMP_A(eax, 0x1D)) goto loc_0033C66C; /* ja: above (unsigned >) */

loc_0033BC79: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x33C74C); /* switch: 30 entries, 24 targets */
    if (_jt == 0x0033BC80u) goto loc_0033BC80;
    if (_jt == 0x0033BCBCu) goto loc_0033BCBC;
    if (_jt == 0x0033BD3Cu) goto loc_0033BD3C;
    if (_jt == 0x0033BD63u) goto loc_0033BD63;
    if (_jt == 0x0033BE04u) goto loc_0033BE04;
    if (_jt == 0x0033BE1Cu) goto loc_0033BE1C;
    if (_jt == 0x0033BE8Fu) goto loc_0033BE8F;
    if (_jt == 0x0033BF99u) goto loc_0033BF99;
    if (_jt == 0x0033C006u) goto loc_0033C006;
    if (_jt == 0x0033C033u) goto loc_0033C033;
    if (_jt == 0x0033C1FDu) goto loc_0033C1FD;
    if (_jt == 0x0033C225u) goto loc_0033C225;
    if (_jt == 0x0033C25Au) goto loc_0033C25A;
    if (_jt == 0x0033C329u) goto loc_0033C329;
    if (_jt == 0x0033C383u) goto loc_0033C383;
    if (_jt == 0x0033C3A4u) goto loc_0033C3A4;
    if (_jt == 0x0033C3B9u) goto loc_0033C3B9;
    if (_jt == 0x0033C449u) goto loc_0033C449;
    if (_jt == 0x0033C56Du) goto loc_0033C56D;
    if (_jt == 0x0033C5C4u) goto loc_0033C5C4;
    if (_jt == 0x0033C5E0u) goto loc_0033C5E0;
    if (_jt == 0x0033C5F9u) goto loc_0033C5F9;
    if (_jt == 0x0033C619u) goto loc_0033C619;
    if (_jt == 0x0033C66Cu) goto loc_0033C66C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033BC80: ;
    if (TEST_Z(esi, esi)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BC88: ;
    eax = MEM32(ebx + 0x98);
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* js: sign (negative) */

loc_0033BC96: ;
    MEM16(ebx + 2) = 7;
    SET_LO16(ecx, MEM16(esi + 0x60));
    eax = eax & 0xFFFFFFFDu;
    MEM16(ebx + 0xA2) = LO16(ecx);
    MEM8(ebx + 0x9E) = 0;
    MEM32(ebx + 0x98) = eax;
    goto loc_0033C1FD;

loc_0033BCBC: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BCCA: ;
    /* comiss xmm3, MEMF(ebx + 0xC8) - sets EFLAGS */
    if ((xmm3 < MEMF(ebx + 0xC8))) goto loc_0033C1FD; /* jb: below (unsigned <) */

loc_0033BCD7: ;
    if (TEST_Z(esi, esi)) goto loc_0033BD0E; /* je: equal / zero */

loc_0033BCDB: ;
    eax = MEM32(ebx + 0x98);
    eax = eax & 0xFFFFFFE7u;
    MEM32(ebx + 0x98) = eax;
    eax = eax & 0xFFFFFFFDu;
    MEM16(ebx + 2) = 0xB;
    MEM8(ebx + 0xEC) = 1;
    MEM16(ebx + 0x102) = 0xFFFF;
    MEM32(ebx + 0x98) = eax;
    goto loc_0033C1FD;

loc_0033BD0E: ;
    SET_LO8(edx, MEM8(ebx + 0x9E));
    eax = MEM32(ebx + 0x98);
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    MEM8(ebx + 0xEC) = 0;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx + 9;
    eax = eax & 0xFFFFFFFDu;
    MEM16(ebx + 2) = LO16(edx);
    MEM32(ebx + 0x98) = eax;
    goto loc_0033C1FD;

loc_0033BD3C: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BD4A: ;
    MEM16(ebx + 2) = 0xA;
    MEM8(ebx + 0x174) = 0;
    MEM8(ebx + 0xEC) = 0;
    goto loc_0033C1FD;

loc_0033BD63: ;
    if (TEST_Z(MEM8(ebx + 0x16C), 1)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BD70: ;
    xmm2 = MEMF(esi + 0x114); /* movss */
    xmm0 = MEMF(ebx + 0x168); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm1 < MEMF(0x648E6C))) goto loc_0033BD9A; /* jb: below (unsigned <) */

loc_0033BD90: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0033BDAF;

loc_0033BD9A: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0033BDAF; /* jb: below (unsigned <) */

loc_0033BDA7: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0033BDAF: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 0x18) = 1;
    if ((xmm1 > xmm0)) goto loc_0033BDD0; /* ja: above (unsigned >) */

loc_0033BDC8: ;
    MEM32(esp + 0x18) = 0;

loc_0033BDD0: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0033C1FD; /* jnp: not parity */

loc_0033BDEA: ;
    eax = MEM32(ebx + 0x98);
    eax = eax & 0xFFFFFFBFu;
    MEM16(ebx + 2) = 0xC;
    MEM32(ebx + 0x98) = eax;
    goto loc_0033C1FD;

loc_0033BE04: ;
    if (TEST_NZ(MEM8(ebx + 0x16C), 1)) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033BE11: ;
    MEM16(ebx + 2) = 0xA;
    goto loc_0033C1FD;

loc_0033BE1C: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033BE4E; /* je: equal / zero */

loc_0033BE26: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC0);
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0036F760(); /* call 0x0036F760 */

loc_0033BE35: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    esp = esp + 4;
    MEM16(ebx + 0xC0) = LO16(eax);
    MEM8(ebx + 0xEC) = 0;

loc_0033BE4E: ;
    if (TEST_Z(MEM8(ebx + 0x98), 1)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BE5B: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xEE);
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(ecx + edx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033BE7D: ;
    MEM16(ebx + 2) = 0xB;
    MEM8(ebx + 0xEC) = 1;
    goto loc_0033C1FD;

loc_0033BE8F: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C607; /* je: equal / zero */

loc_0033BE9D: ;
    if (TEST_Z(esi, esi)) goto loc_0033C607; /* je: equal / zero */

loc_0033BEA5: ;
    (void)0; /* cmp MEM16(ebx + 0x102), 0xFFFFFFFFu - flags set for next jcc */
    ecx = ebx + 0xF0;
    esi = MEM32(ecx);
    eax = ebx + 0x8C;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(MEM16(ebx + 0x102), 0xFFFFFFFFu)) goto loc_0033BEE5; /* je: equal / zero */

loc_0033BECD: ;
    edx = ebx + 0x108;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    goto loc_0033BF2A;

loc_0033BEE5: ;
    SET_LO8(eax, MEM8(ebx + 0x174));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033BF2A; /* jne: not equal / not zero */

loc_0033BEEF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xFE);
    edx = MEM32(0x84B0E0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    SET_LO8(ecx, MEM8(ecx + edx + 0x33));
    if (CMP_EQ(LO8(ecx), 0x37)) goto loc_0033BF2A; /* je: equal / zero */

loc_0033BF0A: ;
    if (CMP_EQ(LO8(ecx), 0x3B)) goto loc_0033BF2A; /* je: equal / zero */

loc_0033BF0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x451C4000);
    PUSH32(esp, eax);
    esi = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0036B850(); /* call 0x0036B850 */

loc_0033BF20: ;
    esp = esp + 0xC;
    MEM8(ebx + 0x174) = 1;

loc_0033BF2A: ;
    SET_LO16(eax, MEM16(edi + 0x410));
    esi = MEM32(esp + 0x10);
    MEM16(esi + 0x410) = LO16(eax);
    edx = MEM32(ebx + 0x98);
    SET_LO8(ecx, MEM8(ebx + 0xEC));
    edx = edx & 0xFFFFFFFBu;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(ebx + 0x98) = edx;
    eax = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033BF81; /* je: equal / zero */

loc_0033BF57: ;
    SET_LO8(ecx, MEM8(ebx + 0x101));
    if (CMP_NE(LO8(ecx), 8)) goto loc_0033BF6A; /* jne: not equal / not zero */

loc_0033BF62: ;
    MEM16(ebx + 2) = 0xE;
    goto loc_0033BF81;

loc_0033BF6A: ;
    eax = eax | 4;
    (void)0; /* cmp LO8(ecx), 6 - flags set for next jcc */
    MEM32(ebx + 0x98) = eax;
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0033BF81; /* je: equal / zero */

loc_0033BF78: ;
    eax = eax | 2;
    MEM32(ebx + 0x98) = eax;

loc_0033BF81: ;
    if (TEST_Z(MEM8(ebx + 0x16C), 2)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BF8E: ;
    MEM16(ebx + 2) = 0xD;
    goto loc_0033C1FD;

loc_0033BF99: ;
    SET_LO8(eax, MEM8(ebx + 0xEB));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0033BFAB; /* jle: less or equal (signed <=) */

loc_0033BFA3: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebx + 0xEB) = LO8(eax);

loc_0033BFAB: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033BFB9: ;
    if (TEST_Z(esi, esi)) goto loc_0033C021; /* je: equal / zero */

loc_0033BFBD: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x12F)) goto loc_0033BFCE; /* je: equal / zero */

loc_0033BFC7: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0033C021; /* jne: not equal / not zero */

loc_0033BFCE: ;
    MEM16(ebx + 2) = 0x10;
    ecx = MEM32(ebx + 0xF8);
    edx = MEM32(ebx + 0xF4);
    eax = MEM32(ebx + 0xF0);
    PUSH32(esp, 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034A860(); /* call 0x0034A860 */

loc_0033BFF0: ;
    esp = esp + 0x10;
    MEM16(ebx + 0xBE) = LO16(eax);
    MEM8(ebx + 0xEC) = 0;
    goto loc_0033C1FD;

loc_0033C006: ;
    SET_LO8(eax, MEM8(ebx + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033C021; /* je: equal / zero */

loc_0033C00D: ;
    if (TEST_Z(esi, esi)) goto loc_0033C021; /* je: equal / zero */

loc_0033C011: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00369E10(); /* call 0x00369E10 */

loc_0033C019: ;
    if (TEST_NZ(eax, eax)) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033C021: ;
    MEM16(ebx + 2) = 0x11;
    MEM8(ebx + 0xEC) = 1;
    goto loc_0033C1FD;

loc_0033C033: ;
    SET_LO8(eax, MEM8(ebx + 0x101));
    if (CMP_EQ(LO8(eax), 6)) goto loc_0033C045; /* je: equal / zero */

loc_0033C03D: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_0033C045; /* je: equal / zero */

loc_0033C041: ;
    MEM8(ebx + 0x64) = 0xFF;

loc_0033C045: ;
    SET_LO8(eax, MEM8(ebx + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033C021; /* je: equal / zero */

loc_0033C04C: ;
    if (TEST_Z(esi, esi)) goto loc_0033C021; /* je: equal / zero */

loc_0033C050: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00369E10(); /* call 0x00369E10 */

loc_0033C058: ;
    if (TEST_NZ(eax, eax)) goto loc_0033C021; /* jne: not equal / not zero */

loc_0033C05C: ;
    if (CMP_NE(MEM8(ebx + 0xEC), 2)) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033C069: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x64);
    edx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + edx;
    PUSH32(esp, 0); sub_0035B0D0(); /* call 0x0035B0D0 */

loc_0033C080: ;
    edi = eax;
    PUSH32(esp, 0x3F490FDB);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x54;
    MEMF(esp + 0x20) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0033C098: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = edx + 0x78;
    PUSH32(esp, edx);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_0033C0AE: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_0033C0BE: ;
    esp = esp + 0x14;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0033C0D3; /* jbe: below or equal (unsigned <=) */

loc_0033C0C6: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0033C0CD: ;
    ebx = MEM32(esp + 0x24);
    goto loc_0033C0E1;

loc_0033C0D3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_0033C0E1: ;
    xmm0 = MEMF(0x59D948); /* movss */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_0033C0F6: ;
    eax = esp + 0x40;
    ecx = esp + 0x4C;
    esp = esp + 8;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_0033C110: ;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(0x6493C8); /* addss */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0035B460(); /* call 0x0035B460 */

loc_0033C159: ;
    esp = esp + 4;
    /* comiss xmm0, MEMF(esp + 0x48) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x48))) goto loc_0033C182; /* jbe: below or equal (unsigned <=) */

loc_0033C163: ;
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0033C182; /* jbe: below or equal (unsigned <=) */

loc_0033C17C: ;
    MEMF(esp + 0x48) = xmm1; /* movss */

loc_0033C182: ;
    eax = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_0033C190: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0033C1CE; /* jne: not equal / not zero */

loc_0033C197: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0033C1A9: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B0); /* addss */
    xmm1 = MEMF(0x648F60); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((xmm1 >= xmm0)) goto loc_0033C110; /* jae: above or equal (unsigned >=) */

loc_0033C1CE: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x14);
    ecx = ebx + 0x8C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM16(ebx + 2) = 0x17;
    MEM8(ebx + 0xEC) = 0;

loc_0033C1F9: ;
    esi = MEM32(esp + 0x10);

loc_0033C1FD: ;
    SET_LO16(eax, MEM16(ebx + 2));
    ecx = MEM32(esp + 0x34);
    (void)0; /* cmp LO16(ecx), LO16(eax) - flags set for next jcc */
    xmm3 = 0.0f; /* xorps self = zero */
    if (CMP_EQ(LO16(ecx), LO16(eax))) { sub_0033C739(); return; } /* je: equal / zero */

loc_0033C211: ;
    MEMF(ebx + 0xE4) = xmm3; /* movss */
    MEM8(ebx + 0x8C8) = 0;
    goto loc_0033BC63;

loc_0033C225: ;
    SET_LO8(eax, MEM8(ebx + 0x101));
    if (CMP_EQ(LO8(eax), 6)) goto loc_0033C237; /* je: equal / zero */

loc_0033C22F: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_0033C237; /* je: equal / zero */

loc_0033C233: ;
    MEM8(ebx + 0x64) = 0xFF;

loc_0033C237: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033C241: ;
    if (CMP_EQ(MEM8(ebx + 0x64), 0xFF)) goto loc_0033C021; /* je: equal / zero */

loc_0033C24B: ;
    MEM8(ebx + 0xEC) = 0;
    MEM16(ebx + 2) = 0x18;
    goto loc_0033C1FD;

loc_0033C25A: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0xEB) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C293; /* je: equal / zero */

loc_0033C26B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC0);
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0036F760(); /* call 0x0036F760 */

loc_0033C27A: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    esp = esp + 4;
    MEM16(ebx + 0xC0) = LO16(eax);
    MEM8(ebx + 0xEC) = 0;

loc_0033C293: ;
    if (CMP_NE(MEM8(ebx + 0x101), 9)) goto loc_0033C2A6; /* jne: not equal / not zero */

loc_0033C29C: ;
    MEM16(ebx + 2) = 0x13;
    MEM8(ebx + 0x64) = 0xFF;

loc_0033C2A6: ;
    if (TEST_Z(esi, esi)) goto loc_0033C2E9; /* je: equal / zero */

loc_0033C2AA: ;
    SET_LO16(ecx, MEM16(edi + 0x410));
    MEM16(esi + 0x410) = LO16(ecx);
    SET_LO8(edx, MEM8(ebx + 0x64));
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_0033C2E9; /* je: equal / zero */

loc_0033C2C0: ;
    eax = esi;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_0033C2C7: ;
    if (CMP_NE(eax, 7)) goto loc_0033C2E9; /* jne: not equal / not zero */

loc_0033C2CC: ;
    eax = SX8(LO8(edx));
    MEM8(ebx + 0xEC) = 0;
    PUSH32(esp, 0); sub_00369E10(); /* call 0x00369E10 */

loc_0033C2DB: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax = eax + 0x18;
    MEM16(ebx + 2) = LO16(eax);

loc_0033C2E9: ;
    if (TEST_Z(MEM8(ebx + 0x98), 1)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033C2F6: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0xEE);
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    SET_LO8(ecx, MEM8(edx + eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033C317: ;
    MEM16(ebx + 2) = 0xF;
    MEM8(ebx + 0xEC) = 1;
    goto loc_0033C1FD;

loc_0033C329: ;
    ecx = MEM32(ebx + 0x98);
    ecx = ecx & 0xFFFFFFFBu;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebx + 0x98) = ecx;
    if (TEST_Z(esi, esi)) goto loc_0033C34A; /* je: equal / zero */

loc_0033C33C: ;
    SET_LO16(ecx, MEM16(edi + 0x410));
    MEM16(esi + 0x410) = LO16(ecx);

loc_0033C34A: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C377; /* je: equal / zero */

loc_0033C354: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(ebx + 0xEB) = 1;
    if (TEST_Z(esi, esi)) goto loc_0033C370; /* je: equal / zero */

loc_0033C35F: ;
    edx = MEM32(esi + 0x570);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x7A5);
    if (TEST_Z(eax, eax)) goto loc_0033C377; /* je: equal / zero */

loc_0033C370: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 4;

loc_0033C377: ;
    MEM8(ebx + 0x12C) = 1;
    goto loc_0033C1FD;

loc_0033C383: ;
    eax = ebx + 0xF0;
    edx = MEM32(eax);
    ecx = ebx + 0x8C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    goto loc_0033C1FD;

loc_0033C3A4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0xC8) = xmm0; /* movss */
    goto loc_0033C1FD;

loc_0033C3B9: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033C3F1; /* jne: not equal / not zero */

loc_0033C3C3: ;
    ecx = ebx + 0xF0;
    eax = MEM32(ecx);
    edx = ebx + 0x8C;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM16(ebx + 2) = 0;
    MEM32(edx + 8) = ecx;

loc_0033C3E5: ;
    MEM8(ebx + 0xEC) = 0;
    goto loc_0033C1FD;

loc_0033C3F1: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = edx + eax + -1744;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax + 0x570);
    eax = MEM32(eax + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_0033C420; /* je: equal / zero */

loc_0033C41A: ;
    eax = ZX16(MEM16(eax + 0x60));
    goto loc_0033C423;

loc_0033C420: ;
    eax = eax | 0xFFFFFFFFu;

loc_0033C423: ;
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    if (TEST_Z(MEM8(eax + ecx + 0xD0), 4)) goto loc_0033C1F9; /* je: equal / zero */

loc_0033C43D: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 2;
    goto loc_0033C1F9;

loc_0033C449: ;
    edx = ebx + 0xF0;
    ecx = edx;
    esi = MEM32(ecx);
    eax = ebx + 0x8C;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033C482; /* jne: not equal / not zero */

loc_0033C471: ;
    ecx = 0x5A02CC;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_003E20A0(); /* call 0x003E20A0 */

loc_0033C47E: ;
    if (TEST_Z(eax, eax)) goto loc_0033C4ED; /* je: equal / zero */

loc_0033C482: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x101);
    eax--;
    if ((eax == 0)) goto loc_0033C4DB; /* je: equal / zero */

loc_0033C48C: ;
    eax--;
    if ((eax == 0)) goto loc_0033C49A; /* je: equal / zero */

loc_0033C48F: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0033C4ED; /* jne: not equal / not zero */

loc_0033C494: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x39);
    goto loc_0033C4DF;

loc_0033C49A: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0036A730(); /* call 0x0036A730 */

loc_0033C4AE: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0033C4ED; /* je: equal / zero */

loc_0033C4B6: ;
    MEM16(ebx + 0xA2) = LO16(eax);
    eax = MEM32(ebx + 0x98);
    eax = eax & 0xFFFFFFFDu;
    MEM16(ebx + 2) = 0x19;
    MEM8(ebx + 0x9E) = 0;
    MEM32(ebx + 0x98) = eax;
    goto loc_0033C4ED;

loc_0033C4DB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x3A);

loc_0033C4DF: ;
    edi = MEM32(esp + 0x1C);
    esi = ebx;
    PUSH32(esp, 0); sub_0036A930(); /* call 0x0036A930 */

loc_0033C4EA: ;
    esp = esp + 8;

loc_0033C4ED: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x101);
    eax = eax - 3;
    if ((eax == 0)) goto loc_0033C542; /* je: equal / zero */

loc_0033C4F9: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0033C54F; /* jne: not equal / not zero */

loc_0033C4FE: ;
    eax = MEM32(edi + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x498));
    if (CMP_NE(LO16(ecx), MEM16(eax + 0x4B8))) goto loc_0033C54F; /* jne: not equal / not zero */

loc_0033C514: ;
    SET_LO16(edx, MEM16(ebx + 0xB4));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM8(ebx + 0xEC) = 0;
    MEM16(ebx + 2) = 0x1C;
    MEM16(ebx + 0xB6) = LO16(edx);
    PUSH32(esp, 0); sub_0036A9C0(); /* call 0x0036A9C0 */

loc_0033C536: ;
    esp = esp + 8;
    MEM16(ebx + 0xB4) = LO16(eax);
    goto loc_0033C54F;

loc_0033C542: ;
    MEM16(ebx + 2) = 1;
    MEM8(ebx + 0xEC) = 1;

loc_0033C54F: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(esp + 0x10);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033C561: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 2;
    goto loc_0033C1FD;

loc_0033C56D: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C59F; /* je: equal / zero */

loc_0033C577: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC0);
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0036F760(); /* call 0x0036F760 */

loc_0033C586: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    esp = esp + 4;
    MEM16(ebx + 0xC0) = LO16(eax);
    MEM8(ebx + 0xEC) = 0;

loc_0033C59F: ;
    if (CMP_EQ(MEM8(ebx + 0x64), 0xFF)) goto loc_0033C1FD; /* je: equal / zero */

loc_0033C5A9: ;
    MEM8(ebx + 0xEC) = 0;
    MEM16(ebx + 2) = 0x1D;
    MEM16(ebx + 0xB6) = 0xFFFF;
    goto loc_0033C1FD;

loc_0033C5C4: ;
    if (CMP_NE(MEM8(ebx + 0x64), 0xFF)) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033C5CE: ;
    MEM8(ebx + 0xEC) = 1;
    MEM16(ebx + 2) = 1;
    goto loc_0033C1FD;

loc_0033C5E0: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0033C1FD; /* jbe: below or equal (unsigned <=) */

loc_0033C5EE: ;
    MEM16(ebx + 2) = 0x1A;
    goto loc_0033C1FD;

loc_0033C5F9: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* jne: not equal / not zero */

loc_0033C607: ;
    MEM16(ebx + 2) = 0;
    MEM8(ebx + 0xEC) = 0;
    goto loc_0033C1FD;

loc_0033C619: ;
    if (CMP_NE(MEM8(ebx + 0x64), 0xFF)) goto loc_0033C3E5; /* jne: not equal / not zero */

loc_0033C623: ;
    SET_LO8(eax, MEM8(ebx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033C1FD; /* je: equal / zero */

loc_0033C631: ;
    SET_LO16(ecx, MEM16(ebx + 0xB4));
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(ebx + 0xC8) = xmm0; /* movss */
    MEM8(ebx + 0xEC) = 0;
    MEM16(ebx + 0xB6) = LO16(ecx);
    PUSH32(esp, 0); sub_0036A9C0(); /* call 0x0036A9C0 */

loc_0033C65D: ;
    esp = esp + 8;
    MEM16(ebx + 0xB4) = LO16(eax);
    goto loc_0033C1FD;

loc_0033C66C: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0033C679: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0033C687: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0033C6A3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0033C6B5; /* jge: greater or equal (signed >=) */

loc_0033C6AF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0033C6B5: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(edx * 4 + 0x74B858);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(eax, eax)) goto loc_0033C6D5; /* je: equal / zero */

loc_0033C6CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0033C6D2: ;
    esp = esp + 8;

loc_0033C6D5: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0033C6E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0033C6F0: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0033C70C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0033C71E; /* jge: greater or equal (signed >=) */

loc_0033C718: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0033C71E: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x801EA8) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0033C1FD;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0033C7D0
 * Original: 0x0033C7D0 - 0x0033C7F9 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C7D0(void)
{

loc_0033C7D0: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x238);
    eax = MEM32(edx);
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2D98);
    eax = eax + ecx + 0x8F54;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C800
 * Original: 0x0033C800 - 0x0033C835 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C800(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033C800: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(edx + 8), 4)) { sub_0033C835(); return; } /* jne: not equal / not zero */

loc_0033C812: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00342180(); /* call 0x00342180 */

loc_0033C81D: ;
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0033C835(); return; } /* je: equal / zero */

loc_0033C825: ;
    MEM16(esi + 0xB4) = LO16(eax);
    MEM16(esi + 2) = 0x25;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C840
 * Original: 0x0033C840 - 0x0033C91E (222 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 9);
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esi + 9) = 0xFF;
    ecx = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0033C89F; /* je: equal / zero */

loc_0033C86E: ;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0033C873: ;
    if (TEST_NZ(eax, eax)) goto loc_0033C89F; /* jne: not equal / not zero */

loc_0033C877: ;
    ecx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    eax = edi + ecx;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_0033C89F; /* je: equal / zero */

loc_0033C88D: ;
    edx = MEM32(eax + 0x238);
    eax = MEM32(ebp + 0x238);
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_0033C917; /* jne: not equal / not zero */

loc_0033C89F: ;
    if (TEST_Z(MEM32(esi + 0x98), 0x10000000)) { sub_0033C91E(); return; } /* je: equal / zero */

loc_0033C8AB: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x288));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0033C91E(); return; } /* je: equal / zero */

loc_0033C8BB: ;
    SET_LO8(eax, MEM8(eax + 0x289));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_0033C91E(); return; } /* je: equal / zero */

loc_0033C8C5: ;
    edx = MEM32(0x84B330);
    if (CMP_GE(LO8(eax), MEM8(edx + 0xD))) { sub_0033C91E(); return; } /* jge: greater or equal (signed >=) */

loc_0033C8D0: ;
    if (CMP_EQ(LO8(eax), MEM8(esi + 0x64))) { sub_0033C91E(); return; } /* je: equal / zero */

loc_0033C8D5: ;
    ecx = MEM32(0x84A5F8);
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    esi = ebp + 0x78;
    edx = eax + ecx + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_0033C8F3: ;
    esp = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0033C8FD: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_0033C90C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_0033C914: ;
    esp = esp + 0x14;

loc_0033C917: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C930
 * Original: 0x0033C930 - 0x0033C972 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C930: ;
    SET_LO8(ecx, MEM8(ecx + 0x135));
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0033C971; /* je: equal / zero */

loc_0033C93C: ;
    eax = MEM32(0x84A5F8);
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = MEM32(edx + eax + -1640);
    eax = eax + 0xFFFFFF22u;
    if (CMP_A(eax, 0x51)) goto loc_0033C96F; /* ja: above (unsigned >) */

loc_0033C95B: ;
    ecx = ZX8(MEM8(eax + 0x33C980));
    { uint32_t _jt = MEM32(ecx * 4 + 0x33C974); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0033C969u) goto loc_0033C969;
    if (_jt == 0x0033C96Cu) goto loc_0033C96C;
    if (_jt == 0x0033C96Fu) goto loc_0033C96F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033C969: ;
    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

loc_0033C96C: ;
    SET_LO8(eax, 3);
    esp += 4; return; /* ret */

loc_0033C96F: ;
    SET_LO8(eax, 1);

loc_0033C971: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C9E0
 * Original: 0x0033C9E0 - 0x0033CAF3 (275 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C9E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0033C9E0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ebx + 0x7AC);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_0033CA1E; /* je: equal / zero */

loc_0033C9EC: ;
    eax = MEM32(edi + 0x568);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    eax = esp + 4;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_0033CA02: ;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0033CA1E; /* jle: less or equal (signed <=) */

loc_0033CA08: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_0033CA10: ;
    if (CMP_EQ(MEM32(edx + ecx * 4), esi)) { sub_0033CAF3(); return; } /* je: equal / zero */

loc_0033CA19: ;
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0033CA10; /* jl: less (signed <) */

loc_0033CA1E: ;
    xmm0 = MEMF(ebx + 0xE4); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_EQ(ecx, edx)) { sub_0033CAF3(); return; } /* je: equal / zero */

loc_0033CA52: ;
    xmm0 = MEMF(ebx + 0x7B0); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) { sub_0033CAF3(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033CA67: ;
    eax = edi + 0x78;
    edx = MEM32(eax);
    esi = ebx + 0xCC;
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ebx + 0xD8) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x568);
    xmm0 = MEMF(eax + 0x4CC); /* movss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE4))) goto loc_0033CADA; /* jbe: below or equal (unsigned <=) */

loc_0033CAA3: ;
    eax = eax + 0x4AC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033CAAF: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493BC) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6493BC))) { sub_0033CAF3(); return; } /* ja: above (unsigned >) */

loc_0033CABB: ;
    ecx = MEM32(edi + 0x568);
    PUSH32(esp, 0x42700000);
    ecx = ecx + 0x4AC;
    eax = esi;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_0033CAD3: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033CAF3(); return; } /* jne: not equal / not zero */

loc_0033CADA: ;
    if (CMP_NE(MEM16(ebx + 2), 0x21)) goto loc_0033CAE8; /* jne: not equal / not zero */

loc_0033CAE1: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 2;

loc_0033CAE8: ;
    POP32(esp, esi);
    MEM16(ebx + 2) = 0x22;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CB00
 * Original: 0x0033CB00 - 0x0033CBCF (207 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB00(void)
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

loc_0033CB00: ;
    xmm0 = MEMF(eax + 0x7B0); /* movss */
    esp = esp - 0xC;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648D14))) goto loc_0033CBC9; /* ja: above (unsigned >) */

loc_0033CB18: ;
    SET_LO8(eax, MEM8(eax + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_0033CBCF(); return; } /* je: equal / zero */

loc_0033CB23: ;
    ecx = MEM32(0x84A5F8);
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0033CBCF(); return; } /* je: equal / zero */

loc_0033CB42: ;
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x1C); /* subss */
    xmm1 = MEMF(edx + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0033CB96; /* jp: parity */

loc_0033CB86: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0033CB96; /* jp: parity */

loc_0033CB8F: ;
    MEMF(esp) = xmm2; /* movss */
    goto loc_0033CBB4;

loc_0033CB96: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0033CBA4: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */

loc_0033CBB4: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648F38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0033CBCF(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033CBC9: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0033CBE0
 * Original: 0x0033CBE0 - 0x0033CC26 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CBE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033CBE0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = edi + 0xCC;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C840(); /* call 0x0033C840 */

loc_0033CBF4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033CC26(); return; } /* je: equal / zero */

loc_0033CBFB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(edi + 2) = 0x23;
    MEMF(edi + 0xC4) = xmm0; /* movss */
    MEM16(edi + 0xB4) = 0xFFFF;
    MEM32(edi + 0xD8) = 0xFFFFFFFFu;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0033CCC0
 * Original: 0x0033CCC0 - 0x0033CD73 (179 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CCC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CCC0: ;
    eax = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0x80 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    if (CMP_GE(eax, 0x80)) goto loc_0033CD68; /* jge: greater or equal (signed >=) */

loc_0033CCDE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    PUSH32(esp, edi);
    edi = eax;

loc_0033CCE7: ;
    if (CMP_EQ(esi, ebx)) goto loc_0033CD53; /* je: equal / zero */

loc_0033CCEB: ;
    eax = MEM32(esi + 0x64);
    if (CMP_NE(eax, 0x2D)) goto loc_0033CD1F; /* jne: not equal / not zero */

loc_0033CCF3: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0033CCFE: ;
    if (TEST_Z(eax, eax)) goto loc_0033CD53; /* je: equal / zero */

loc_0033CD02: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0033CD0D: ;
    eax = MEM32(eax + 0x238);
    ecx = MEM32(ebx + 0x238);
    edx = MEM32(eax);
    (void)0; /* cmp edx, MEM32(ecx) - flags set for next jcc */
    goto loc_0033CD50;

loc_0033CD1F: ;
    if (CMP_NE(eax, 1)) goto loc_0033CD53; /* jne: not equal / not zero */

loc_0033CD24: ;
    eax = MEM32(esi + 0x238);
    ecx = MEM32(ebx + 0x238);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_0033CD53; /* jne: not equal / not zero */

loc_0033CD36: ;
    eax = MEM32(0x84B330);
    SET_LO16(eax, MEM16(edi + eax + 0x3A));
    if (CMP_EQ(LO16(eax), 0x2A)) goto loc_0033CD52; /* je: equal / zero */

loc_0033CD46: ;
    if (CMP_EQ(LO16(eax), 0x2B)) goto loc_0033CD52; /* je: equal / zero */

loc_0033CD4C: ;
    (void)0; /* cmp LO16(eax), 0x2C - flags set for next jcc */

loc_0033CD50: ;
    if (CMP_NE(LO16(eax), 0x2C)) goto loc_0033CD53; /* jne: not equal / not zero */

loc_0033CD52: ;
    ebp++;

loc_0033CD53: ;
    edi = edi + 0x8CC;
    esi = esi + 0x6D0;
    if (CMP_L(edi, 0x46600)) goto loc_0033CCE7; /* jl: less (signed <) */

loc_0033CD67: ;
    POP32(esp, edi);

loc_0033CD68: ;
    eax = 0; /* xor self */
    (void)0; /* cmp ebp, 3 - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_L(ebp, 3)) ? 1 : 0); /* setl */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CD80
 * Original: 0x0033CD80 - 0x0033CF54 (468 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033CDAB; /* je: equal / zero */

loc_0033CD94: ;
    ecx = MEM32(0x84A5FC);
    eax = ZX8(LO8(eax));
    if (CMP_EQ(MEM8(eax + ecx + -1), 0x2D)) goto loc_0033CE23; /* je: equal / zero */

loc_0033CDA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033CDAB: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = 0; /* xor self */
    eax = eax + 0x21C;
    edi = edi;

loc_0033CDC0: ;
    SET_LO8(edx, MEM8(eax + -28));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0033CDD0; /* je: equal / zero */

loc_0033CDC7: ;
    edx = MEM32(eax);
    SET_LO8(ebx, MEM8(edx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0033CDA4; /* jne: not equal / not zero */

loc_0033CDD0: ;
    ecx++;
    eax = eax + 0x20;
    if (CMP_L(ecx, 4)) goto loc_0033CDC0; /* jl: less (signed <) */

loc_0033CDD9: ;
    eax = MEM32(edi + 0x238);
    eax = MEM32(eax);
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2D98);
    ebx = eax + ecx + 0x8F54;
    PUSH32(esp, 0); sub_00337450(); /* call 0x00337450 */

loc_0033CDF9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033CDA4; /* je: equal / zero */

loc_0033CDFD: ;
    esi = 6;
    PUSH32(esp, 0); sub_0036B6B0(); /* call 0x0036B6B0 */

loc_0033CE07: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0036B730(); /* call 0x0036B730 */

loc_0033CE11: ;
    esp = esp + 8;
    if (CMP_GE(eax, esi)) goto loc_0033CDA4; /* jge: greater or equal (signed >=) */

loc_0033CE18: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0033CCC0(); /* call 0x0033CCC0 */

loc_0033CE1F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033CDA4; /* je: equal / zero */

loc_0033CE23: ;
    ecx = MEM32(ebp + 0x7AC);
    if (TEST_Z(ecx, ecx)) goto loc_0033CE62; /* je: equal / zero */

loc_0033CE2D: ;
    if (CMP_NE(MEM32(ecx + 4), 0xB)) goto loc_0033CE62; /* jne: not equal / not zero */

loc_0033CE33: ;
    esi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0033CE62; /* jle: less or equal (signed <=) */

loc_0033CE3D: ;
    edx = MEM32(edi + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x498);
    /* nop */

loc_0033CE50: ;
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(edx, MEM32(ebx + eax * 4))) { sub_0033CF54(); return; } /* je: equal / zero */

loc_0033CE5D: ;
    eax++;
    if (CMP_L(eax, esi)) goto loc_0033CE50; /* jl: less (signed <) */

loc_0033CE62: ;
    xmm0 = MEMF(ebp + 0xE4); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_EQ(ecx, edx)) goto loc_0033CDA4; /* je: equal / zero */

loc_0033CE96: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0033CE9B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM8(ebp + 4);
    if (CMP_G(edx, MEM32(eax * 4 + 0x74B738))) goto loc_0033CDA4; /* jg: greater (signed >) */

loc_0033CEB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003423A0(); /* call 0x003423A0 */

loc_0033CEBC: ;
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0033CDA4; /* je: equal / zero */

loc_0033CEC8: ;
    MEM16(ebp + 0xB8) = LO16(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = MEM32(0x84B0E0);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033CEE4: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493B4) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6493B4))) goto loc_0033CDA4; /* ja: above (unsigned >) */

loc_0033CEF4: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0033A910(); /* call 0x0033A910 */

loc_0033CEFC: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0033CDA4; /* je: equal / zero */

loc_0033CF0A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xB8);
    eax = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + eax;
    PUSH32(esp, edx);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033CF29: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x649DB0) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649DB0))) goto loc_0033CDA4; /* ja: above (unsigned >) */

loc_0033CF39: ;
    POP32(esp, edi);
    MEM16(ebp + 0xBA) = LO16(esi);
    POP32(esp, esi);
    MEM16(ebp + 2) = 0x2A;
    MEM8(ebp + 0xEC) = 0;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CF90
 * Original: 0x0033CF90 - 0x0033CFF9 (105 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CF90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_0033CF90: ;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00341480(); /* call 0x00341480 */

loc_0033CF99: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0033CFF6; /* je: equal / zero */

loc_0033CFA0: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(ecx + 0x4CC); /* movss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE4))) { sub_0033CFF9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033CFB7: ;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 * MEMF(0x648CF0); /* mulss */
    PUSH32(esp, eax);
    ecx = ecx + 0x4AC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033CFD1: ;
    xmm1 = xmm3; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_0033CFF9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033CFE0: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x6493F0); /* movss */
    MEMF(ecx + 0x4CC) = xmm0; /* movss */

loc_0033CFF6: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033D010
 * Original: 0x0033D010 - 0x0033D0A7 (151 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D010(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_0033D010: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0033D029; /* jne: not equal / not zero */

loc_0033D014: ;
    xmm3 = MEMF(0x64A230); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00342B50(); /* call 0x00342B50 */

loc_0033D022: ;
    esp = esp + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_0033D0A4; /* jle: less or equal (signed <=) */

loc_0033D029: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    /* comiss xmm0, MEMF(esi + 0xE0) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0xE0))) goto loc_0033D090; /* jb: below (unsigned <) */

loc_0033D03A: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44FA0000);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esi + 0xE0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0036A730(); /* call 0x0036A730 */

loc_0033D05F: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0033D0A4; /* je: equal / zero */

loc_0033D067: ;
    ecx = MEM32(esi + 0x98);
    ecx = ecx & 0xFFFDFFFDu;
    MEM16(esi + 0xA2) = LO16(eax);
    MEM16(esi + 2) = 0x20;
    MEM32(esi + 0x98) = ecx;
    MEM8(esi + 0x9E) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0033D090: ;
    xmm1 = MEMF(esi + 0xE0); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0xE0) = xmm1; /* movss */

loc_0033D0A4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033D0B0
 * Original: 0x0033D0B0 - 0x0033D132 (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D0B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D0B0: ;
    eax = MEM32(0x84B330);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0033D12C; /* jle: less or equal (signed <=) */

loc_0033D0C2: ;
    ecx = MEM32(ecx + 0x238);
    esi = MEM32(0x84A5F8);
    ebp = MEM32(ecx);
    esi = esi + 0x238;
    ecx = eax + 0xCC;
    /* nop */

loc_0033D0E0: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax), ebp)) goto loc_0033D11B; /* jne: not equal / not zero */

loc_0033D0E6: ;
    if (CMP_NE(MEM16(ecx + -146), 0x26)) goto loc_0033D11B; /* jne: not equal / not zero */

loc_0033D0F0: ;
    xmm0 = MEMF(ecx + -8); /* movss */
    /* ucomiss xmm0, MEMF(ebx) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0033D11B; /* jp: parity */

loc_0033D0FE: ;
    xmm0 = MEMF(ecx + -4); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0033D11B; /* jp: parity */

loc_0033D10D: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0033D132(); return; } /* jnp: not parity */

loc_0033D11B: ;
    edx++;
    ecx = ecx + 0x8CC;
    esi = esi + 0x6D0;
    if (CMP_L(edx, edi)) goto loc_0033D0E0; /* jl: less (signed <) */

loc_0033D12C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D140
 * Original: 0x0033D140 - 0x0033D25D (285 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D140: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x444);
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033D25D(); return; } /* jne: not equal / not zero */

loc_0033D161: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(ebp + 0xAC) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0xAC))) { sub_0033D25D(); return; } /* jb: below (unsigned <) */

loc_0033D171: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033D178: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebp + 0xAC) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033D25D(); return; } /* jne: not equal / not zero */

loc_0033D190: ;
    esi = edi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003416E0(); /* call 0x003416E0 */

loc_0033D199: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) { sub_0033D25D(); return; } /* je: equal / zero */

loc_0033D1A6: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0033D0B0(); /* call 0x0033D0B0 */

loc_0033D1AD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033D25D(); return; } /* jne: not equal / not zero */

loc_0033D1B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0033D1BC: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) { sub_0033D25D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033D1DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0033D1F3: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0033D1FD: ;
    edx = ZX16(MEM16(edi + 0x60));
    ecx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x410));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033D217: ;
    xmm1 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x28;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033D25D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033D225: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm1 > MEMF(esp + 0x10))) goto loc_0033D237; /* ja: above (unsigned >) */

loc_0033D232: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033D25D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033D237: ;
    MEM16(ebp + 2) = 0x26;
    ecx = MEM32(ebx);
    ebp = ebp + 0x8C;
    MEM32(ebp) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(ebp + 4) = edx;
    eax = MEM32(ebx + 8);
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D270
 * Original: 0x0033D270 - 0x0033D36E (254 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D270: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    SET_LO8(ebx, MEM8(ebp + 0x135));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0033D365; /* je: equal / zero */

loc_0033D288: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033D28F: ;
    if (CMP_NE(LO8(eax), 3)) { sub_0033D36E(); return; } /* jne: not equal / not zero */

loc_0033D297: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(ebp + 0x568);
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edi = eax + ecx + -1744;
    edx = edx + 0x4AC;
    eax = edi + 0x78;
    ecx = esp + 0x14;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = MEMF(0x6493EC); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_0033D365; /* jbe: below or equal (unsigned <=) */

loc_0033D33C: ;
    ecx = MEM32(edi + 0x570);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x84), _icall_esp); /* indirect call */
    }

loc_0033D34A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033D365; /* je: equal / zero */

loc_0033D34E: ;
    ecx = MEM32(ebp + 0x56C);
    MEM32(ecx + 0x15C) = 1;
    MEM8(esi + 0xEB) = 2;

loc_0033D365: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D4A0
 * Original: 0x0033D4A0 - 0x0033D4BD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D4A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033D4B9; /* jne: not equal / not zero */

loc_0033D4AF: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(MEM8(eax + 0x64), 0xFF)) { sub_0033D4BD(); return; } /* je: equal / zero */

loc_0033D4B9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D580
 * Original: 0x0033D580 - 0x0033D5D2 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D580(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_0033D580: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033D5CB; /* jne: not equal / not zero */

loc_0033D592: ;
    xmm3 = MEMF(0x6493C8); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00342B50(); /* call 0x00342B50 */

loc_0033D5A0: ;
    esp = esp + 4;
    if (CMP_G(eax & eax, 0)) goto loc_0033D5CB; /* jg: greater (signed >) */

loc_0033D5A7: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(eax + 0xE4); /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_NE(ecx, edx)) { sub_0033D5D2(); return; } /* jne: not equal / not zero */

loc_0033D5CB: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D820
 * Original: 0x0033D820 - 0x0033D841 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D820: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x135));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0033D83D; /* jne: not equal / not zero */

loc_0033D833: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(MEM8(ecx + 0x64), 0xFF)) { sub_0033D841(); return; } /* je: equal / zero */

loc_0033D83D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DA10
 * Original: 0x0033DA10 - 0x0033DA65 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DA10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0033DA10: ;
    SET_LO8(eax, MEM8(ecx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033DA65(); return; } /* jne: not equal / not zero */

loc_0033DA1A: ;
    SET_LO16(eax, MEM16(esi + 0x116));
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_0033DA65(); return; } /* je: equal / zero */

loc_0033DA27: ;
    edx = MEM32(0x84B0E0);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + edx;
    if (CMP_NE(MEM8(eax + 0x33), 0x3D)) { sub_0033DA65(); return; } /* jne: not equal / not zero */

loc_0033DA3B: ;
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033DA45: ;
    xmm1 = MEMF(0x6493E8); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033DA65(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033DA55: ;
    MEM16(esi + 2) = 0x2F;
    MEM8(esi + 0xEC) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DA70
 * Original: 0x0033DA70 - 0x0033DAD0 (96 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033DA70: ;
    if (TEST_Z(ecx, ecx)) goto loc_0033DA77; /* je: equal / zero */

loc_0033DA74: ;
    MEM8(ecx) = 0;

loc_0033DA77: ;
    SET_LO8(eax, MEM8(eax + 0x470));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033DAD0(); return; } /* je: equal / zero */

loc_0033DA81: ;
    edx = MEM32(0x84A5FC);
    eax = ZX8(LO8(eax));
    if (CMP_NE(MEM8(eax + edx + -1), 0x35)) { sub_0033DAD0(); return; } /* jne: not equal / not zero */

loc_0033DA91: ;
    edx = MEM32(0x84A600);
    if (CMP_NE(MEM16(edx + eax * 2 + -2), 0x18A)) { sub_0033DAD0(); return; } /* jne: not equal / not zero */

loc_0033DAA0: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + edx + -1744;
    if (TEST_Z(ecx, ecx)) goto loc_0033DABA; /* je: equal / zero */

loc_0033DAB7: ;
    MEM8(ecx) = 1;

loc_0033DABA: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) { sub_0033DAD0(); return; } /* je: equal / zero */

loc_0033DAC4: ;
    if (CMP_NE(MEM32(eax + 0xFD8), 1)) { sub_0033DAD0(); return; } /* jne: not equal / not zero */

loc_0033DACD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DAE0
 * Original: 0x0033DAE0 - 0x0033DB02 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033DAE0: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033DAFF; /* je: equal / zero */

loc_0033DAE7: ;
    edx = MEM32(esi + 0x7AC);
    if (TEST_Z(edx, edx)) { sub_0033DB02(); return; } /* je: equal / zero */

loc_0033DAF1: ;
    ecx = SX8(LO8(eax));
    eax = edi;
    PUSH32(esp, 0); sub_00339750(); /* call 0x00339750 */

loc_0033DAFB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033DB02(); return; } /* jne: not equal / not zero */

loc_0033DAFF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033DB90
 * Original: 0x0033DB90 - 0x0033DC99 (265 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DB90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DB90: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x135));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0033DC96; /* je: equal / zero */

loc_0033DBA4: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 4);
    xmm2 = MEMF(eax * 4 + 0x74B724); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(ebp + 0xDC); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_EQ(ecx, edx)) goto loc_0033DC96; /* je: equal / zero */

loc_0033DBE9: ;
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ecx = ZX16(MEM16(eax + edi + -802));
    edx = ZX16(MEM16(eax + edi + -800));
    eax = eax + edi;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648EA8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0033DC95; /* jb: below (unsigned <) */

loc_0033DC24: ;
    if (CMP_EQ(MEM8(ebp + 0x64), 0xFF)) goto loc_0033DC95; /* je: equal / zero */

loc_0033DC2A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033DC31: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0033DC8E; /* jne: not equal / not zero */

loc_0033DC35: ;
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + edi + -352);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x84), _icall_esp); /* indirect call */
    }

loc_0033DC4D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033DC6A; /* je: equal / zero */

loc_0033DC51: ;
    eax = MEM32(esi + 0x56C);
    MEM32(eax + 0x15C) = 1;
    MEM8(ebp + 0xEB) = 2;
    goto loc_0033DC7A;

loc_0033DC6A: ;
    ecx = MEM32(esi + 0x56C);
    MEM32(ecx + 0x170) = 1;

loc_0033DC7A: ;
    xmm0 = MEMF(0x64908C); /* movss */
    POP32(esp, edi);
    MEMF(ebp + 0xDC) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033DC8E: ;
    MEM32(ebp + 0x98) = MEM32(ebp + 0x98) | 2;

loc_0033DC95: ;
    POP32(esp, edi);

loc_0033DC96: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DCA0
 * Original: 0x0033DCA0 - 0x0033DEC3 (547 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DCA0: ;
    esp = esp - 0x2C;
    ecx = MEM32(0x84B330);
    SET_LO8(edx, MEM8(ecx + 0xD));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0033DEB7; /* jle: less or equal (signed <=) */

loc_0033DCC7: ;
    ebx = MEM32(0x84A5F8);
    xmm7 = MEMF(0x7FDB8C); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648D1C); /* movss */

loc_0033DCE5: ;
    esi = MEM32(esp + 0x40);
    edx = ZX16(MEM16(esi + 0x60));
    if (CMP_EQ(eax, edx)) goto loc_0033DE96; /* je: equal / zero */

loc_0033DCF5: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033DCFC: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0033DE96; /* jne: not equal / not zero */

loc_0033DD04: ;
    edi = esi + 0x78;
    eax = ebx + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033DD11: ;
    xmm1 = MEMF(0x6493BC); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033DE96; /* jbe: below or equal (unsigned <=) */

loc_0033DD25: ;
    ecx = ZX8(MEM8(ebx + 0x135));
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = MEM32(ecx + edx + -352);
    xmm2 = MEMF(eax + 0x790); /* movss */
    xmm1 = MEMF(eax + 0x798); /* movss */
    ecx = ecx + edx + -1744;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / MEMF(0x7FA21C); /* divss */
    if ((xmm6 > xmm3)) goto loc_0033DE96; /* ja: above (unsigned >) */

loc_0033DD7C: ;
    ecx = ecx + 0x78;
    esi = ecx;
    ecx = MEM32(esi);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x28) = edx;
    esi = MEM32(esi + 8);
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x1C) = edx;
    xmm1 = MEMF(eax + 0x790); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x798); /* mulss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, edi);
    edi = esp + 0x20;
    esi = esp + 0x2C;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AFC50(); /* call 0x002AFC50 */

loc_0033DDE8: ;
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(0x64982C); /* movss */
    esp = esp + 8;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_0033DE96; /* ja: above (unsigned >) */

loc_0033DDFF: ;
    /* comiss xmm3, xmm6 - sets EFLAGS */
    if ((xmm3 > xmm6)) goto loc_0033DE96; /* ja: above (unsigned >) */

loc_0033DE08: ;
    eax = MEM32(esp + 0x40);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033DE1A: ;
    xmm1 = MEMF(0x6493EC); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033DE96; /* jbe: below or equal (unsigned <=) */

loc_0033DE2A: ;
    if (TEST_Z(ebp, ebp)) { sub_0033DEC3(); return; } /* je: equal / zero */

loc_0033DE32: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm3 = xmm3 * xmm5; /* mulss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033DE44; /* je: equal / zero */

loc_0033DE3E: ;
    /* comiss xmm3, MEMF(ebp) - sets EFLAGS */
    if ((xmm3 > MEMF(ebp))) goto loc_0033DE96; /* ja: above (unsigned >) */

loc_0033DE44: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = ebp + 8;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = ebp + 0x14;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = ebp + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    MEMF(ebp) = xmm3; /* movss */
    MEM32(ebp + 4) = ebx;
    MEM32(eax + 8) = ecx;
    MEM8(esp + 0x13) = 1;

loc_0033DE96: ;
    edx = MEM32(0x84B330);
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    eax++;
    ebx = ebx + 0x6D0;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0033DCE5; /* jl: less (signed <) */

loc_0033DEB7: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0033DED0
 * Original: 0x0033DED0 - 0x0033DF0B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033DED0: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0033DF0B(); return; } /* jne: not equal / not zero */

loc_0033DEDA: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033DEE2: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033DF0B(); return; } /* je: equal / zero */

loc_0033DEE9: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(esi + 2) = 0x34;
    MEM16(esi + 0xB4) = 0xFFFF;
    MEMF(esi + 0xC4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DF10
 * Original: 0x0033DF10 - 0x0033E33E (1070 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DF10: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    esp = esp - 0x30;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033E33E(); return; } /* jne: not equal / not zero */

loc_0033DF21: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(ecx + 0x4CC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0033E33E(); return; } /* jnp: not parity */

loc_0033DF40: ;
    ecx = ecx + 0x4AC;
    eax = edi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033DF50: ;
    xmm1 = MEMF(0x6493B4); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_0033E33E(); return; } /* ja: above (unsigned >) */

loc_0033DF64: ;
    eax = MEM32(esp + 0x34);
    xmm0 = MEMF(eax + 0xE4); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_EQ(ecx, edx)) { sub_0033E33E(); return; } /* je: equal / zero */

loc_0033DF9C: ;
    eax = MEM32(0x84B330);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    (void)0; /* cmp ebx, 0x80 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebx;
    if (CMP_GE(ebx, 0x80)) goto loc_0033E310; /* jge: greater or equal (signed >=) */

loc_0033DFB8: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    MEM32(esp + 0x2C) = esi;
    goto loc_0033DFD0;

    /* nop */
    /* nop */

loc_0033DFD0: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(ecx + ebx), 0x3D)) goto loc_0033E2F5; /* jne: not equal / not zero */

loc_0033DFE0: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(edx + esi + 0x238);
    ebp = MEM32(edi + 0x238);
    ecx = MEM32(ecx);
    edx = edx + esi;
    if (CMP_NE(ecx, MEM32(ebp))) goto loc_0033E2F5; /* jne: not equal / not zero */

loc_0033E000: ;
    ecx = MEM32(edx + 0x570);
    if (CMP_EQ(MEM8(ecx + 0x8C), 0)) goto loc_0033E2F5; /* je: equal / zero */

loc_0033E013: ;
    if (CMP_EQ(MEM8(ecx + 0x8D), 0)) goto loc_0033E2F5; /* je: equal / zero */

loc_0033E020: ;
    if (CMP_NE(MEM32(ecx + 0x7C), 1)) goto loc_0033E032; /* jne: not equal / not zero */

loc_0033E026: ;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x84);
    goto loc_0033E03C;

loc_0033E032: ;
    ecx = MEM32(ecx + 0x84);
    MEM32(esp + 0x10) = ecx;

loc_0033E03C: ;
    ebx = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(ebx + 0x410));
    esi = ZX16(LO16(ecx));
    MEM32(esp + 0x14) = edx;
    edx = edx | 0xFFFFFFFFu;
    if (CMP_EQ(esi, edx)) goto loc_0033E065; /* je: equal / zero */

loc_0033E055: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0033E065; /* je: equal / zero */

loc_0033E05A: ;
    if (CMP_NE(LO16(ecx), 0xFFFF)) goto loc_0033E12D; /* jne: not equal / not zero */

loc_0033E065: ;
    ecx = MEM32(eax + 0x145B4);
    eax = MEM32(eax + 0x145B8);
    xmm7 = MEMF(0x6493D4); /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x84B264);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ebp = ZX16(MEM16(eax + ecx * 2));
    esi = 0; /* xor self */
    ebx = ebx + 0x78;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    MEM32(0x84B338) = esi;
    MEM32(0x84B33C) = esi;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x1C) = xmm7; /* movss */
    if (CMP_LE(ebp, esi)) goto loc_0033E110; /* jle: less or equal (signed <=) */

loc_0033E0AE: ;
    edi = edi;

loc_0033E0B0: ;
    ecx = MEM32(esp + 0x30);
    eax = ZX16(MEM16(ecx + esi * 2));
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0033E105; /* js: sign (negative) */

loc_0033E0BC: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0033E105; /* je: equal / zero */

loc_0033E0C3: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003744E0(); /* call 0x003744E0 */

loc_0033E0DA: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x14;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0033E0ED; /* jbe: below or equal (unsigned <=) */

loc_0033E0E6: ;
    xmm7 = xmm0; /* movaps */
    MEM32(esp + 0xC) = eax;

loc_0033E0ED: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    edx = edx | 0xFFFFFFFFu;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033E105; /* jbe: below or equal (unsigned <=) */

loc_0033E0FB: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;

loc_0033E105: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_0033E0B0; /* jl: less (signed <) */

loc_0033E10A: ;
    if (CMP_NE(MEM32(esp + 0xC), edx)) goto loc_0033E118; /* jne: not equal / not zero */

loc_0033E110: ;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = eax;

loc_0033E118: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0x410) = LO16(ecx);
    eax = MEM32(0x84B330);

loc_0033E12D: ;
    ebx = MEM32(esp + 0x14);
    SET_LO16(ecx, MEM16(ebx + 0x410));
    esi = ZX16(LO16(ecx));
    if (CMP_EQ(esi, edx)) goto loc_0033E14F; /* je: equal / zero */

loc_0033E13F: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0033E14F; /* je: equal / zero */

loc_0033E144: ;
    if (CMP_NE(LO16(ecx), 0xFFFF)) goto loc_0033E218; /* jne: not equal / not zero */

loc_0033E14F: ;
    ecx = MEM32(eax + 0x145B4);
    eax = MEM32(eax + 0x145B8);
    xmm7 = MEMF(0x6493D4); /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x84B264);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ebp = ZX16(MEM16(eax + ecx * 2));
    esi = 0; /* xor self */
    ebx = ebx + 0x78;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    MEM32(0x84B338) = esi;
    MEM32(0x84B33C) = esi;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x24) = xmm7; /* movss */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0033E200; /* jle: less or equal (signed <=) */

loc_0033E198: ;
    goto loc_0033E1A0;

    /* nop */

loc_0033E1A0: ;
    ecx = MEM32(esp + 0x30);
    eax = ZX16(MEM16(ecx + esi * 2));
    if (TEST_S(HI8(eax), HI8(eax))) goto loc_0033E1F5; /* js: sign (negative) */

loc_0033E1AC: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0033E1F5; /* je: equal / zero */

loc_0033E1B3: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003744E0(); /* call 0x003744E0 */

loc_0033E1CA: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0x14;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0033E1DD; /* jbe: below or equal (unsigned <=) */

loc_0033E1D6: ;
    xmm7 = xmm0; /* movaps */
    MEM32(esp + 0xC) = eax;

loc_0033E1DD: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    edx = edx | 0xFFFFFFFFu;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033E1F5; /* jbe: below or equal (unsigned <=) */

loc_0033E1EB: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;

loc_0033E1F5: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_0033E1A0; /* jl: less (signed <) */

loc_0033E1FA: ;
    if (CMP_NE(MEM32(esp + 0xC), edx)) goto loc_0033E208; /* jne: not equal / not zero */

loc_0033E200: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = eax;

loc_0033E208: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = MEM32(esp + 0x14);
    MEM16(edx + 0x410) = LO16(ecx);

loc_0033E218: ;
    eax = MEM32(edi + 0x568);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x4B8));
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0x4AC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_0033E23E: ;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033E247: ;
    edx = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(edi + 0x568);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x410));
    ecx = ecx + 0x4AC;
    PUSH32(esp, ecx);
    ebp = edi + 0x78;
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033E26E: ;
    ecx = edi;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033E27B: ;
    ecx = ZX16(MEM16(edi + 0x60));
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x410));
    edx = ebx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(ebx + 0x410));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033E29F: ;
    edx = ZX16(MEM16(edi + 0x60));
    eax = MEM32(edi + 0x568);
    eax = eax + 0x4AC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x410));
    eax = eax + 0x78;
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00375810(); /* call 0x00375810 */

loc_0033E2D1: ;
    xmm0 = xmm0 + MEMF(esp + 0x7C); /* addss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    esp = esp + 0x48;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0033E319; /* ja: above (unsigned >) */

loc_0033E2E8: ;
    eax = MEM32(0x84B330);
    esi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);

loc_0033E2F5: ;
    esi = esi + 0x6D0;
    ebx++;
    (void)0; /* cmp esi, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_L(esi, 0x36800)) goto loc_0033DFD0; /* jl: less (signed <) */

loc_0033E310: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0033E319: ;
    eax = MEM32(esp + 0x40);
    MEM16(eax + 2) = 0x35;
    MEM8(eax + 0xEC) = 0;
    SET_LO16(edx, MEM16(ebx + 0x60));
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 0xE8) = LO16(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E350
 * Original: 0x0033E350 - 0x0033E391 (65 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E350(void)
{
    float xmm0;

loc_0033E350: ;
    SET_LO16(ecx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    MEM8(eax + 0xEC) = 0;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E3A0
 * Original: 0x0033E3A0 - 0x0033E406 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E3A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 0x7AC);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0xB) = LO8(eax);
    if (CMP_EQ(edx, eax)) goto loc_0033E3CE; /* je: equal / zero */

loc_0033E3C1: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_0033E3CA: ;
    MEM32(esp + 0xC) = eax;

loc_0033E3CE: ;
    ebx = MEM32(esp + 0x18);
    ecx = esp + 0xB;
    eax = ebx;
    PUSH32(esp, 0); sub_0033DA70(); /* call 0x0033DA70 */

loc_0033E3DD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033E406(); return; } /* je: equal / zero */

loc_0033E3E1: ;
    MEM16(ebp + 2) = 0x31;
    MEM16(ebp + 0xB4) = 0xFFFF;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x470)));
    eax--;
    MEM16(ebp + 0xA2) = LO16(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E580
 * Original: 0x0033E580 - 0x0033E5DC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E580: ;
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x568);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0033DB90(); /* call 0x0033DB90 */

loc_0033E5AA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    /* comiss xmm0, MEMF(edi + 0x1A0) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 0x1A0))) { sub_0033E5DC(); return; } /* jb: below (unsigned <) */

loc_0033E5B9: ;
    eax = MEM32(edi + 0x7AC);
    if (TEST_Z(eax, eax)) { sub_0033E5DC(); return; } /* je: equal / zero */

loc_0033E5C3: ;
    ebp = edi + 0xB4;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00338E50(); /* call 0x00338E50 */

loc_0033E5D1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033E5DC(); return; } /* je: equal / zero */

loc_0033E5D5: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_0033E6C5(); return; /* tail jmp 0x0033E6C5 */

}

/**
 * sub_0033E780
 * Original: 0x0033E780 - 0x0033E7E6 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E780: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x7AC);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0xB) = LO8(eax);
    if (CMP_EQ(edx, eax)) goto loc_0033E7AE; /* je: equal / zero */

loc_0033E7A1: ;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_003388C0(); /* call 0x003388C0 */

loc_0033E7AA: ;
    MEM32(esp + 0x10) = eax;

loc_0033E7AE: ;
    ebp = MEM32(esp + 0x18);
    ecx = esp + 0xB;
    eax = ebp;
    PUSH32(esp, 0); sub_0033DA70(); /* call 0x0033DA70 */

loc_0033E7BD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033E7E6(); return; } /* je: equal / zero */

loc_0033E7C1: ;
    MEM16(ebx + 2) = 0x31;
    MEM16(ebx + 0xB4) = 0xFFFF;
    SET_LO16(eax, ZX8(MEM8(ebp + 0x470)));
    POP32(esp, ebp);
    eax--;
    MEM16(ebx + 0xA2) = LO16(eax);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E8F0
 * Original: 0x0033E8F0 - 0x0033E982 (146 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E8F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033E8FF: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    esi = ebx;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_0033DB90(); /* call 0x0033DB90 */

loc_0033E90F: ;
    SET_LO8(eax, MEM8(ebp + 0x64));
    esp = esp + 4;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033E97D; /* je: equal / zero */

loc_0033E919: ;
    if (CMP_NE(MEM8(esp + 0xF), 3)) goto loc_0033E930; /* jne: not equal / not zero */

loc_0033E920: ;
    PUSH32(esp, ebx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00336D70(); /* call 0x00336D70 */

loc_0033E928: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033E930: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003362E0(); /* call 0x003362E0 */

loc_0033E937: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    esp = esp + 8;
    if (CMP_NE(LO8(eax), 2)) goto loc_0033E97D; /* jne: not equal / not zero */

loc_0033E942: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebp + 0x64);
    esi = ebp;
    PUSH32(esp, 0); sub_00342DD0(); /* call 0x00342DD0 */

loc_0033E94E: ;
    xmm0 = MEMF(0x59D944); /* movss */
    /* comiss xmm0, MEMF(eax + 0xC) - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm0 <= MEMF(eax + 0xC))) goto loc_0033E97D; /* jbe: below or equal (unsigned <=) */

loc_0033E95D: ;
    eax = MEM32(ebp + 0x98);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax | 2;
    MEM32(ebp + 0x98) = eax;
    eax = MEM32(ebx + 0x568);
    MEMF(eax + 0x4CC) = xmm0; /* movss */

loc_0033E97D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E990
 * Original: 0x0033E990 - 0x0033E9CC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xA2);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    PUSH32(esp, esi);
    ebp = ebp + MEM32(0x84A5F8);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x135));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) { sub_0033E9CC(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033E9BA: ;
    edx = ZX8(LO8(eax));
    edx--;
    if (CMP_NE(edx, ecx)) { sub_0033E9CC(); return; } /* jne: not equal / not zero */

loc_0033E9C2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx + 2) = 0x21;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EA80
 * Original: 0x0033EA80 - 0x0033EB38 (184 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033EA80: ;
    ecx = MEM32(0x84A5F8);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = (uint32_t)(int32_t)SMEM16(edi + 0xA2);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = MEM32(esi + ecx + 0x570);
    esi = esi + ecx;
    if (TEST_Z(eax, eax)) goto loc_0033EB32; /* je: equal / zero */

loc_0033EAAD: ;
    xmm0 = MEMF(0x6493F0); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 0x568);
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x9E);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00394F20(); /* call 0x00394F20 */

loc_0033EADD: ;
    esp = esp + 0xC;
    if (CMP_NE(eax, 2)) goto loc_0033EAEC; /* jne: not equal / not zero */

loc_0033EAE5: ;
    MEM32(edi + 0x98) = MEM32(edi + 0x98) | 0x20;

loc_0033EAEC: ;
    eax = MEM32(edi + 0x98);
    if (TEST_Z(eax, 0x20000)) goto loc_0033EB04; /* je: equal / zero */

loc_0033EAF9: ;
    eax = eax | 0x4000000;
    MEM32(edi + 0x98) = eax;

loc_0033EB04: ;
    PUSH32(esp, 0x1000);
    ecx = ebx;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033EB10: ;
    esi = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0033EB1E: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0036F7F0(); /* call 0x0036F7F0 */

loc_0033EB2E: ;
    esp = esp + 0x10;
    POP32(esp, ebx);

loc_0033EB32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB40
 * Original: 0x0033EB40 - 0x0033EB86 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0033EB40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033EB86(); return; } /* je: equal / zero */

loc_0033EB54: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xA2);
    eax = ZX8(LO8(eax));
    eax--;
    if (CMP_NE(eax, ecx)) { sub_0033EB86(); return; } /* jne: not equal / not zero */

loc_0033EB63: ;
    eax = esi;
    PUSH32(esp, 0); sub_0033CBE0(); /* call 0x0033CBE0 */

loc_0033EB6A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033EB78; /* je: equal / zero */

loc_0033EB6E: ;
    MEM32(edi + 0x98) = MEM32(edi + 0x98) | 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033EB78: ;
    PUSH32(esp, ebx);
    ebx = edi;
    edi = esi;
    PUSH32(esp, 0); sub_0033C9E0(); /* call 0x0033C9E0 */

loc_0033EB82: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EBE0
 * Original: 0x0033EBE0 - 0x0033ECD4 (244 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0033EBE0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x64));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033EC7F; /* je: equal / zero */

loc_0033EC03: ;
    edi = ZX16(MEM16(esi + 0x60));
    ecx = SX8(LO8(eax));
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_0033EC0F: ;
    if (TEST_Z(eax, eax)) goto loc_0033EC7F; /* je: equal / zero */

loc_0033EC13: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x84A5F8);
    MEMF(ebx + 0xC4) = xmm0; /* movss */
    ecx = ZX8(MEM8(esi + 0x135));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx;
    ecx = ZX16(MEM16(eax + -802));
    edx = ZX16(MEM16(eax + -800));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648E64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0033ECD0; /* jb: below (unsigned <) */

loc_0033EC5B: ;
    xmm0 = MEMF(ebx + 0x7B0); /* movss */
    /* comiss xmm0, MEMF(0x649228) - sets EFLAGS */
    if ((xmm0 < MEMF(0x649228))) goto loc_0033ECD0; /* jb: below (unsigned <) */

loc_0033EC6C: ;
    eax = MEM32(ebx + 0x98);
    POP32(esp, edi);
    eax = eax | 2;
    POP32(esp, esi);
    MEM32(ebx + 0x98) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033EC7F: ;
    xmm0 = MEMF(ebx + 0xC4); /* movss */
    /* comiss xmm0, MEMF(0x648D18) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D18))) goto loc_0033ECB8; /* jbe: below or equal (unsigned <=) */

loc_0033EC90: ;
    edx = MEM32(ebx + 0x7AC);
    if (TEST_Z(edx, edx)) goto loc_0033ECB1; /* je: equal / zero */

loc_0033EC9A: ;
    eax = MEM32(esi + 0x568);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003376E0(); /* call 0x003376E0 */

loc_0033ECAD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033ECB8; /* jne: not equal / not zero */

loc_0033ECB1: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 2;

loc_0033ECB8: ;
    xmm0 = MEMF(ebx + 0xC4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    MEMF(ebx + 0xC4) = xmm0; /* movss */

loc_0033ECD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033ECE0
 * Original: 0x0033ECE0 - 0x0033ED21 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ECE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033ECE0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0033ED21(); return; } /* jne: not equal / not zero */

loc_0033ECEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033ECF6: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033ED21(); return; } /* je: equal / zero */

loc_0033ECFD: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(eax + 2) = 0x34;
    MEM16(eax + 0xB4) = 0xFFFF;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0033EED0
 * Original: 0x0033EED0 - 0x0033EF15 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033EED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033EF15(); return; } /* jne: not equal / not zero */

loc_0033EEE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033EEE8: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033EF15(); return; } /* je: equal / zero */

loc_0033EEEF: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(eax + 2) = 0x34;
    MEM16(eax + 0xB4) = 0xFFFF;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EF80
 * Original: 0x0033EF80 - 0x0033F09A (282 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EF80: ;
    ecx = MEM32(0x84A6B8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(esi + 0xC4); /* movss */
    ebp = MEM32(esi + 0xD8);
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    (void)0; /* cmp ecx, 0x14 - flags set for next jcc */
    SET_LO8(ebx, (CMP_L(ecx, 0x14)) ? 1 : 0); /* setl */
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esi + 0xC4) = xmm0; /* movss */
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0033EFF0; /* je: equal / zero */

loc_0033EFB7: ;
    eax = MEM32(esp + 0x14);
    edi = ZX16(MEM16(eax + 0x60));
    ecx = ebp;
    PUSH32(esp, 0); sub_003710B0(); /* call 0x003710B0 */

loc_0033EFC6: ;
    if (TEST_Z(eax, eax)) goto loc_0033EFF0; /* je: equal / zero */

loc_0033EFCA: ;
    ecx = MEM32(0x84A5F8);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    edx = ecx + ebp + 0x78;
    ecx = MEM32(edx);
    eax = esi + 0xCC;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0033EFF0: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0033F09A(); return; } /* je: equal / zero */

loc_0033EFF8: ;
    SET_LO16(eax, MEM16(esi + 0xB4));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0033F055; /* je: equal / zero */

loc_0033F005: ;
    edx = MEM32(0x84B0E0);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edi = esi + 0xCC;
    eax = eax + edx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033F020: ;
    xmm1 = MEMF(0x64A71C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033F09A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033F030: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xB4);
    ebx = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    PUSH32(esp, 0x42700000);
    ecx = ecx + ebx;
    eax = edi;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_0033F04E: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033F09A(); return; } /* jne: not equal / not zero */

loc_0033F055: ;
    SET_LO16(ecx, MEM16(esi + 0xB4));
    edi = MEM32(esp + 0x14);
    MEM16(esi + 0xB6) = LO16(ecx);
    edx = MEM32(edi + 0x568);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x498);
    PUSH32(esp, 0x9C4);
    PUSH32(esp, 0x258);
    PUSH32(esp, eax);
    ecx = esi + 0xCC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00341A90(); /* call 0x00341A90 */

loc_0033F08E: ;
    esp = esp + 0x14;
    MEM16(esi + 0xB4) = LO16(eax);
    g_seh_ebp = ebp; sub_0033F09E(); return; /* tail jmp 0x0033F09E */

}

/**
 * sub_0033F0E0
 * Original: 0x0033F0E0 - 0x0033F139 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F0E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033F0E0: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00341480(); /* call 0x00341480 */

loc_0033F0ED: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0033F138; /* jne: not equal / not zero */

loc_0033F0F4: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    MEM8(eax + 0xEC) = 0;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);

loc_0033F138: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033F140
 * Original: 0x0033F140 - 0x0033F244 (260 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F140(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0033F140: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00341480(); /* call 0x00341480 */

loc_0033F14F: ;
    esi = MEM32(esp + 0x14);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0033F170; /* je: equal / zero */

loc_0033F15A: ;
    edx = MEM32(eax);
    ecx = esi + 0xCC;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_0033F170: ;
    SET_LO16(eax, MEM16(esi + 0xB4));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0033F1CC; /* je: equal / zero */

loc_0033F17E: ;
    ecx = SX16(LO16(eax));
    eax = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edi = esi + 0xCC;
    ecx = ecx + eax;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033F198: ;
    xmm1 = MEMF(0x64A71C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0033F20B; /* jbe: below or equal (unsigned <=) */

loc_0033F1A8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xB4);
    eax = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + eax;
    PUSH32(esp, 0x42700000);
    eax = edi;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_0033F1C5: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033F20B; /* jne: not equal / not zero */

loc_0033F1CC: ;
    SET_LO16(edx, MEM16(esi + 0xB4));
    MEM16(esi + 0xB6) = LO16(edx);
    eax = MEM32(ebx + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x12C);
    PUSH32(esp, ecx);
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00341A90(); /* call 0x00341A90 */

loc_0033F201: ;
    esp = esp + 0x14;
    MEM16(esi + 0xB4) = LO16(eax);

loc_0033F20B: ;
    (void)0; /* cmp MEM16(esi + 0xB4), 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_0033F241; /* je: equal / zero */

loc_0033F216: ;
    eax = MEM32(ebx + 0x568);
    xmm0 = MEMF(0x6493F0); /* movss */
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    SET_LO16(ecx, MEM16(esi + 0xB4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_0033F23E: ;
    esp = esp + 8;

loc_0033F241: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F250
 * Original: 0x0033F250 - 0x0033F293 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F250: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033F293(); return; } /* jne: not equal / not zero */

loc_0033F25F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033F267: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033F293(); return; } /* je: equal / zero */

loc_0033F26E: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(eax + 2) = 0x34;
    MEM16(eax + 0xB4) = 0xFFFF;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F330
 * Original: 0x0033F330 - 0x0033F416 (230 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F330(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033F330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* cmp MEM16(esi + 0xB4), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_0033F3A1; /* je: equal / zero */

loc_0033F344: ;
    eax = MEM32(edi + 0x568);
    xmm0 = MEMF(0x6493F0); /* movss */
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    SET_LO16(ecx, MEM16(esi + 0xB4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_0033F36C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xB4);
    edx = MEM32(0x84B0E0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ZX8(MEM8(ecx + edx + 0x34));
    ecx = MEM32(edi + 0x568);
    esp = esp + 8;
    eax = eax << 8;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(ecx + 0x4D0) = xmm0; /* movss */

loc_0033F3A1: ;
    SET_LO8(eax, MEM8(esi + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033F413; /* je: equal / zero */

loc_0033F3AB: ;
    edx = MEM32(esi + 0x98);
    SET_LO8(eax, MEM8(esi + 0x64));
    edx = edx | 0x4000;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    MEM32(esi + 0x98) = edx;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0033F3F7; /* je: equal / zero */

loc_0033F3CA: ;
    edx = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = edx + eax + 0x78;
    PUSH32(esp, ecx);
    edx = edi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0033F3E6: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6493BC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493BC))) goto loc_0033F3F7; /* jbe: below or equal (unsigned <=) */

loc_0033F3F2: ;
    ebx = 2;

loc_0033F3F7: ;
    eax = MEM32(edi + 0x568);
    (void)0; /* cmp MEM32(eax + 0x530), ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(eax + 0x530), ebx)) goto loc_0033F413; /* je: equal / zero */

loc_0033F406: ;
    ecx = MEM32(edi + 0x56C);
    MEM32(ecx + 0x68) = 1;

loc_0033F413: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F420
 * Original: 0x0033F420 - 0x0033F47C (92 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F420: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    SET_LO8(eax, MEM8(ecx + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033F47C(); return; } /* je: equal / zero */

loc_0033F438: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx | 0xFFFFFFFFu;
    MEM8(eax + 0xEC) = 0;
    MEM16(eax + 0xB6) = LO16(edx);
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F530
 * Original: 0x0033F530 - 0x0033F61D (237 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F530: ;
    xmm0 = MEMF(0x6493F0); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    eax = MEM32(esi + 0x98);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (TEST_Z(eax, 0x20000000)) goto loc_0033F5AC; /* je: equal / zero */

loc_0033F561: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO16(ecx, MEM16(esi + 0xB4));
    MEMF(esi + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEM8(esi + 0xEC) = 0;
    MEM16(esi + 0xB6) = LO16(ecx);
    MEM16(esi + 2) = 0x1E;
    MEM16(esi + 0xB4) = LO16(edi);
    MEM16(esi + 0x102) = LO16(edi);
    MEM16(esi + 0x116) = LO16(edi);
    MEMF(esi + 0xAC) = xmm0; /* movss */

loc_0033F5AC: ;
    PUSH32(esp, 0x1000);
    ecx = ebp;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033F5B8: ;
    edx = esi + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_0036F7F0(); /* call 0x0036F7F0 */

loc_0033F5C8: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033F61D(); return; } /* jne: not equal / not zero */

loc_0033F5CF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0xEC) = LO8(eax);
    SET_LO16(eax, MEM16(esi + 0xB4));
    MEMF(esi + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEM16(esi + 0xB4) = LO16(edi);
    MEM16(esi + 0x102) = LO16(edi);
    MEM16(esi + 0x116) = LO16(edi);
    POP32(esp, edi);
    MEM16(esi + 0xB6) = LO16(eax);
    MEM16(esi + 2) = 0x1E;
    MEMF(esi + 0xAC) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F660
 * Original: 0x0033F660 - 0x0033F6A2 (66 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F660(void)
{
    float xmm0;

loc_0033F660: ;
    ecx = MEM32(eax + 0x98);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFF9FFFDu;
    ecx = ecx | 0x80;
    MEM16(eax + 2) = 0x27;
    MEM32(eax + 0x98) = ecx;
    MEMF(eax + 0xE4) = xmm0; /* movss */
    MEMF(eax + 0x7F4) = xmm0; /* movss */
    MEMF(eax + 0x7F0) = xmm0; /* movss */
    MEMF(eax + 0x7EC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0033F6B0
 * Original: 0x0033F6B0 - 0x0033F816 (358 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F6B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00369E50(); /* call 0x00369E50 */

loc_0033F6C1: ;
    ebx = MEM32(esp + 0x18);
    ebp = eax;
    eax = MEM32(ebx + 0x98);
    esp = esp + 4;
    if (TEST_Z(eax, 0x20000)) goto loc_0033F6FF; /* je: equal / zero */

loc_0033F6D7: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033F812; /* je: equal / zero */

loc_0033F6E5: ;
    edx = ZX16(MEM16(ebp + 0x60));
    ecx = ZX8(LO8(eax));
    ecx--;
    if (CMP_NE(ecx, edx)) goto loc_0033F812; /* jne: not equal / not zero */

loc_0033F6F5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033E350(); return; /* tail jmp 0x0033E350 */

loc_0033F6FF: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033F73B; /* jne: not equal / not zero */

loc_0033F709: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033F711: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033F73B; /* je: equal / zero */

loc_0033F718: ;
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx + 2) = 0x34;
    MEM16(ebx + 0xB4) = 0xFFFF;
    MEMF(ebx + 0xC4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033F73B: ;
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0); sub_0033CF90(); /* call 0x0033CF90 */

loc_0033F743: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033F811; /* jne: not equal / not zero */

loc_0033F74B: ;
    edi = esi;
    PUSH32(esp, 0); sub_0033C9E0(); /* call 0x0033C9E0 */

loc_0033F752: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033F811; /* jne: not equal / not zero */

loc_0033F75A: ;
    if (TEST_Z(ebp, ebp)) goto loc_0033F7A0; /* je: equal / zero */

loc_0033F75E: ;
    eax = MEM32(ebx + 0x98);
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_0033F7A0; /* js: sign (negative) */

loc_0033F768: ;
    if (TEST_Z(eax, 0x40000)) goto loc_0033F7A0; /* je: equal / zero */

loc_0033F76F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEM16(ebx + 2) = 0x28;
    SET_LO16(ecx, MEM16(ebp + 0x60));
    POP32(esp, esi);
    eax = eax & 0xFFFFFFFDu;
    POP32(esp, ebp);
    MEM16(ebx + 0xA2) = LO16(ecx);
    MEM8(ebx + 0x9E) = 0;
    MEM32(ebx + 0x98) = eax;
    MEMF(ebx + 0xDC) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033F7A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033D4A0(); /* call 0x0033D4A0 */

loc_0033F7A7: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033F811; /* jne: not equal / not zero */

loc_0033F7AE: ;
    xmm0 = MEMF(ebx + 0xE4); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_0033F811; /* jbe: below or equal (unsigned <=) */

loc_0033F7BF: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0); sub_0033C7D0(); /* call 0x0033C7D0 */

loc_0033F7C8: ;
    edi = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_0033E350(); /* call 0x0033E350 */

loc_0033F7D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033E580(); /* call 0x0033E580 */

loc_0033F7D8: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1E);
    esp = esp + 8;
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0033F7FE; /* jle: less or equal (signed <=) */

loc_0033F7E5: ;
    edx = ZX16(MEM16(esi + 0x60));
    /* nop */

loc_0033F7F0: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + eax + 0x20);
    if (CMP_EQ(edx, esi)) goto loc_0033F7FE; /* je: equal / zero */

loc_0033F7F9: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0033F7F0; /* jl: less (signed <) */

loc_0033F7FE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    eax = edi;
    MEMF(ebx + 0xDC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0033AC60(); /* call 0x0033AC60 */

loc_0033F811: ;
    POP32(esp, edi);

loc_0033F812: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F820
 * Original: 0x0033F820 - 0x0033F8AC (140 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F820: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = ZX16(MEM16(ebx + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x238);
    eax = MEM32(edx);
    ecx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2D98);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = eax + ecx + 0x8F54;
    (void)0; /* test MEM32(ebp + 0x98), 0x40000 - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(MEM32(ebp + 0x98), 0x40000)) { sub_0033F8AC(); return; } /* je: equal / zero */

loc_0033F867: ;
    xmm0 = MEMF(ebp + 0xE4); /* movss */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x6497D0); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    ecx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_NE(edx, ecx)) { sub_0033F8AC(); return; } /* jne: not equal / not zero */

loc_0033F897: ;
    edx = MEM32(ebx + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebp);
    MEMF(edx + 0x4CC) = xmm0; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FA40
 * Original: 0x0033FA40 - 0x0033FA74 (52 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FA40(void)
{
    float xmm0;

loc_0033FA40: ;
    ecx = MEM32(eax + 0x98);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFFDFFFDu;
    MEM16(eax + 2) = 0x28;
    MEM32(eax + 0x98) = ecx;
    MEMF(eax + 0x7F4) = xmm0; /* movss */
    MEMF(eax + 0x7F0) = xmm0; /* movss */
    MEMF(eax + 0x7EC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0033FA80
 * Original: 0x0033FA80 - 0x0033FAFD (125 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033FA80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ebp + 0x135));
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xA2);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(ecx, 0); /* xor self */
    eax = eax + esi;
    if (CMP_BE(LO8(edx), LO8(ecx))) goto loc_0033FAED; /* jbe: below or equal (unsigned <=) */

loc_0033FAAC: ;
    ebp = ebp + 0x78;
    MEM16(edi + 0x102) = 0xFFFF;
    MEM8(edi + 0x114) = LO8(ecx);
    MEM8(edi + 0xEB) = LO8(ecx);
    edx = MEM32(ebp);
    eax = edi + 0x138;
    MEM32(eax) = edx;
    edx = MEM32(ebp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 8);
    MEM32(eax + 8) = edx;
    if (CMP_EQ(MEM8(edi + 0x9E), LO8(ecx))) goto loc_0033FAF3; /* je: equal / zero */

loc_0033FAE3: ;
    MEM16(edi + 2) = 0x2E;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033FAED: ;
    if (CMP_EQ(MEM32(eax + 0x64), 0x35)) { sub_0033FAFD(); return; } /* je: equal / zero */

loc_0033FAF3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0033E350(); return; /* tail jmp 0x0033E350 */

}

/**
 * sub_0033FC20
 * Original: 0x0033FC20 - 0x0033FC76 (86 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FC20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033FC20: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(eax + 0xEC));
    ecx = ecx | 0xFFFFFFFFu;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0033FC3A; /* jne: not equal / not zero */

loc_0033FC31: ;
    if (CMP_NE(MEM16(eax + 0xB4), LO16(ecx))) goto loc_0033FC75; /* jne: not equal / not zero */

loc_0033FC3A: ;
    SET_LO16(edx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0xEC) = 0;
    MEM16(eax + 0xB6) = LO16(edx);
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);

loc_0033FC75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033FC80
 * Original: 0x0033FC80 - 0x0033FCCB (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FC80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033FC80: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(MEM16(edi + 0xB4), 0xFFFFFFFFu)) goto loc_0033FCC9; /* je: equal / zero */

loc_0033FC8F: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x568);
    PUSH32(esp, 0x1000);
    ecx = esi;
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_0033FCB6: ;
    SET_LO16(ecx, MEM16(edi + 0xB4));
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_0033FCC5: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0033FCC9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FCD0
 * Original: 0x0033FCD0 - 0x0033FD13 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033FCD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0033FD13(); return; } /* jne: not equal / not zero */

loc_0033FCDF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_0033FCE7: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0033FD13(); return; } /* je: equal / zero */

loc_0033FCEE: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(eax + 2) = 0x34;
    MEM16(eax + 0xB4) = 0xFFFF;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FE70
 * Original: 0x0033FE70 - 0x0033FED9 (105 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FE70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033FE70: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA2);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ebx = MEM32(esi + edi + 0x64);
    edx = 0; /* xor self */
    if (CMP_NE(ebx, edx)) { sub_0033FED9(); return; } /* jne: not equal / not zero */

loc_0033FE96: ;
    SET_LO16(ecx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    POP32(esp, esi);
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);
    MEM8(eax + 0xEC) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FF10
 * Original: 0x0033FF10 - 0x0033FF77 (103 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FF10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0033FF10: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA2);
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx + 0x78;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0033FF55: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0033FF77(); return; } /* jbe: below or equal (unsigned <=) */

loc_0033FF65: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0xD5) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0033FFB0
 * Original: 0x0033FFB0 - 0x00340003 (83 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0033FFB0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x250));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00340002; /* jne: not equal / not zero */

loc_0033FFBE: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    MEM8(eax + 0xEC) = 0;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);

loc_00340002: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340010
 * Original: 0x00340010 - 0x00340197 (391 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x98);
    SET_LO16(eax, MEM16(esi + 0xB4));
    edx = edx | 0x4000;
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(eax), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = SX16(LO16(eax));
    MEM32(esi + 0x98) = edx;
    if (CMP_EQ(LO16(eax), LO16(ebp))) goto loc_00340062; /* je: equal / zero */

loc_00340040: ;
    ecx = MEM32(esi + 0x7AC);
    if (TEST_Z(ecx, ecx)) goto loc_00340062; /* je: equal / zero */

loc_0034004A: ;
    PUSH32(esp, edi);
    edx = ebx;
    PUSH32(esp, 0); sub_00337F70(); /* call 0x00337F70 */

loc_00340052: ;
    /* comiss xmm0, MEMF(0x6493AC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6493AC))) goto loc_00340062; /* jbe: below or equal (unsigned <=) */

loc_0034005B: ;
    MEM16(esi + 0xB4) = LO16(ebp);

loc_00340062: ;
    if (CMP_NE(MEM16(esi + 0xB4), LO16(ebp))) goto loc_003400BB; /* jne: not equal / not zero */

loc_0034006B: ;
    eax = MEM32(esi + 0x7AC);
    if (TEST_Z(eax, eax)) goto loc_003400A0; /* je: equal / zero */

loc_00340075: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x44480000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00337E60(); /* call 0x00337E60 */

loc_00340089: ;
    if (TEST_Z(eax, eax)) goto loc_00340099; /* je: equal / zero */

loc_0034008D: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0xB4) = LO16(eax);
    goto loc_003400A0;

loc_00340099: ;
    eax = esi;
    PUSH32(esp, 0); sub_0033E350(); /* call 0x0033E350 */

loc_003400A0: ;
    if (CMP_NE(MEM16(esi + 0xB4), LO16(ebp))) goto loc_003400BB; /* jne: not equal / not zero */

loc_003400A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003423A0(); /* call 0x003423A0 */

loc_003400B1: ;
    esp = esp + 8;
    MEM16(esi + 0xB4) = LO16(eax);

loc_003400BB: ;
    SET_LO8(eax, MEM8(esi + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0034013B; /* je: equal / zero */

loc_003400C5: ;
    ecx = MEM32(esi + 0x98);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFFFBFFFu;
    ecx = ecx | 0x100000;
    /* comiss xmm0, MEMF(esi + 0x80) - sets EFLAGS */
    MEM32(esi + 0x98) = ecx;
    if ((xmm0 < MEMF(esi + 0x80))) goto loc_0034013B; /* jb: below (unsigned <) */

loc_003400E9: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x444);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_003400FA: ;
    if (CMP_NE(eax, 0x29)) goto loc_0034013B; /* jne: not equal / not zero */

loc_003400FF: ;
    eax = ZX8(MEM8(edi + 0x250));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + ecx + -352);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_0034011E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0034012B; /* jne: not equal / not zero */

loc_00340122: ;
    MEM16(esi + 0xB4) = LO16(ebp);
    goto loc_0034013B;

loc_0034012B: ;
    eax = MEM32(edi + 0x56C);
    MEM32(eax + 0x178) = 1;

loc_0034013B: ;
    if (CMP_EQ(MEM16(esi + 0xB4), LO16(ebp))) goto loc_00340175; /* je: equal / zero */

loc_00340144: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(ecx + 0x4CC) = xmm0; /* movss */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00340163: ;
    SET_LO16(ecx, MEM16(esi + 0xB4));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_00340172: ;
    esp = esp + 8;

loc_00340175: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xB4);
    if (CMP_NE(ebx, edx)) { sub_00340197(); return; } /* jne: not equal / not zero */

loc_00340180: ;
    if (TEST_Z(MEM32(esi + 0x98), 0x20000000)) { sub_00340197(); return; } /* je: equal / zero */

loc_0034018C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033E350(); return; /* tail jmp 0x0033E350 */

}

/**
 * sub_003401A0
 * Original: 0x003401A0 - 0x00340203 (99 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003401A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003401A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00340202; /* jne: not equal / not zero */

loc_003401AE: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(eax + 0xB4));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM8(eax + 0xEC) = 0;
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);
    MEMF(eax + 0xDC) = xmm0; /* movss */

loc_00340202: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340210
 * Original: 0x00340210 - 0x0034024E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_0033DB90(); /* call 0x0033DB90 */

loc_00340224: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x102);
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) { sub_0034024E(); return; } /* je: equal / zero */

loc_00340232: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00340245; /* je: equal / zero */

loc_0034023C: ;
    eax = ZX8(LO8(eax));
    eax--;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_00340252(); return; /* tail jmp 0x00340252 */

loc_00340245: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_00340252(); return; /* tail jmp 0x00340252 */

}

/**
 * sub_00340390
 * Original: 0x00340390 - 0x003403DA (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00340390: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x4CC) = xmm0; /* movss */
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003403D9; /* je: equal / zero */

loc_003403AF: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = MEM32(edx + eax + -352);
    eax = MEM32(ecx + 0x1F0);
    if (TEST_NZ(eax, eax)) goto loc_003403D9; /* jne: not equal / not zero */

loc_003403CE: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0x98) = MEM32(eax + 0x98) | 2;

loc_003403D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003403E0
 * Original: 0x003403E0 - 0x00340495 (181 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003403E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003403E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xEC));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00340492; /* je: equal / zero */

loc_003403F6: ;
    xmm3 = MEMF(0x648F40); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ebp = 0x10;
    edi = edi + 0x7270;

loc_00340411: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + ebp), 0x35)) goto loc_00340481; /* jne: not equal / not zero */

loc_0034041C: ;
    ecx = MEM32(0x84A600);
    if (CMP_NE(MEM16(ecx + ebp * 2), 0x18A)) goto loc_00340481; /* jne: not equal / not zero */

loc_0034042A: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00340480; /* je: equal / zero */

loc_00340430: ;
    ecx = MEM32(eax + 0xFD8);
    if (TEST_NZ(ecx, ecx)) goto loc_00340480; /* jne: not equal / not zero */

loc_0034043A: ;
    edx = MEM32(esp + 0x14);
    edx = edx + 0x78;
    PUSH32(esp, edx);
    eax = edi + -1272;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0034044E: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00340480; /* jbe: below or equal (unsigned <=) */

loc_00340456: ;
    MEM16(esi + 2) = 0x30;
    MEM8(esi + 0xEC) = 0;
    MEM16(esi + 0xB4) = 0xFFFF;
    SET_LO16(ecx, MEM16(edi + -1296));
    MEM16(esi + 0xA2) = LO16(ecx);
    MEM8(esi + 0x9E) = LO8(ebx);

loc_00340480: ;
    ebx++;

loc_00340481: ;
    ebp++;
    edi = edi + 0x6D0;
    if (CMP_L(ebp, 0x80)) goto loc_00340411; /* jl: less (signed <) */

loc_00340490: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00340492: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003404A0
 * Original: 0x003404A0 - 0x003404DC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003404A0(void)
{
    float xmm0;

loc_003404A0: ;
    xmm0 = MEMF(0x6493F0); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(eax + 0x4CC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_003404C4: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(ecx + 0x116));
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_003404D7: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003404E0
 * Original: 0x003404E0 - 0x003405A7 (199 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003404E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003404E0: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA2);
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + 0x570);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(eax + 0xFD8), 1)) { sub_003405A7(); return; } /* jne: not equal / not zero */

loc_0034050C: ;
    SET_LO8(eax, MEM8(ecx + 0xEC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00340527; /* je: equal / zero */

loc_00340516: ;
    MEM16(ecx + 2) = 0x31;
    MEM16(ecx + 0xB4) = 0xFFFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00340527: ;
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x470));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00340597; /* je: equal / zero */

loc_00340536: ;
    ebx = MEM32(0x84A5FC);
    eax = ZX8(LO8(eax));
    if (CMP_NE(MEM8(eax + ebx + -1), 0x35)) goto loc_00340597; /* jne: not equal / not zero */

loc_00340546: ;
    ebx = MEM32(0x84A600);
    if (CMP_NE(MEM16(ebx + eax * 2 + -2), 0x18A)) goto loc_00340597; /* jne: not equal / not zero */

loc_00340555: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx + -1744;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00340597; /* je: equal / zero */

loc_0034056C: ;
    if (CMP_NE(MEM32(eax + 0xFD8), 1)) goto loc_00340597; /* jne: not equal / not zero */

loc_00340575: ;
    MEM16(ecx + 2) = 0x31;
    MEM16(ecx + 0xB4) = 0xFFFF;
    SET_LO16(edx, ZX8(MEM8(esi + 0x470)));
    POP32(esp, ebx);
    POP32(esp, esi);
    edx--;
    MEM16(ecx + 0xA2) = LO16(edx);
    esp += 4; return; /* ret */

loc_00340597: ;
    POP32(esp, ebx);
    MEM16(ecx + 2) = 0x2F;
    MEM8(ecx + 0xEC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003405C0
 * Original: 0x003405C0 - 0x0034080B (587 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003405C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003405C0: ;
    esp = esp - 0x38;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    xmm7 = MEMF(0x6493BC); /* movss */
    PUSH32(esp, ebp);
    ecx = ecx | 0xFFFFFFFFu;
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = ebp;
    if (CMP_LE(eax & eax, 0)) { sub_0034080B(); return; } /* jle: less or equal (signed <=) */

loc_003405E8: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_003405F5: ;
    eax = MEM32(0x84B0E0);
    SET_LO8(ecx, MEM8(eax + ebx + 0x33));
    eax = eax + ebx;
    (void)0; /* cmp LO8(ecx), 0x3E - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(LO8(ecx), 0x3E)) goto loc_003407E8; /* jne: not equal / not zero */

loc_0034060D: ;
    ecx = MEM32(esp + 0x50);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x9E);
    ecx = ZX8(MEM8(eax + 0x35));
    if (CMP_NE(ecx, edx)) goto loc_003407E8; /* jne: not equal / not zero */

loc_00340624: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    edx = edx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00340632: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xC));
    esp = esp + 8;
    esi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm5 = xmm0; /* movaps */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_003406DC; /* jle: less or equal (signed <=) */

loc_0034064A: ;
    edi = MEM32(0x84A5F8);
    eax = esp + 0x30;
    ecx = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    edi = edi + 0x78;

loc_00340661: ;
    MEM32(esp + 0x20) = edi;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = MEMF(0x6493E4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x28))) goto loc_003406C8; /* jbe: below or equal (unsigned <=) */

loc_003406C4: ;
    xmm5 = xmm5 * xmm6; /* mulss */

loc_003406C8: ;
    eax = MEM32(0x84B330);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    esi++;
    edi = edi + 0x6D0;
    if (CMP_L(esi, edx)) goto loc_00340661; /* jl: less (signed <) */

loc_003406DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    if (CMP_GE(esi, ecx)) goto loc_003407BC; /* jge: greater or equal (signed >=) */

loc_003406E8: ;
    ecx = MEM32(0x84A5F8);
    edi = esi;
    edx = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x8CC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ebp = edx + ecx + 0x568;

loc_00340705: ;
    SET_LO16(ecx, MEM16(edi + eax + 0x3A));
    if (CMP_EQ(LO16(ecx), 0x30)) goto loc_0034071A; /* je: equal / zero */

loc_00340710: ;
    if (CMP_NE(LO16(ecx), 0x31)) goto loc_0034079F; /* jne: not equal / not zero */

loc_0034071A: ;
    edx = MEM32(ebp);
    edx = edx + 0x4AC;
    eax = esp + 0x3C;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x3C;
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
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm0 = MEMF(0x648E98); /* movss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    eax = MEM32(0x84B330);
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_0034079F; /* jbe: below or equal (unsigned <=) */

loc_0034079B: ;
    xmm5 = xmm5 * xmm6; /* mulss */

loc_0034079F: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    esi++;
    edi = edi + 0x8CC;
    ebp = ebp + 0x6D0;
    if (CMP_L(esi, edx)) goto loc_00340705; /* jl: less (signed <) */

loc_003407B8: ;
    ebp = MEM32(esp + 0x14);

loc_003407BC: ;
    /* comiss xmm7, xmm5 - sets EFLAGS */
    if ((xmm7 <= xmm5)) goto loc_003407E8; /* jbe: below or equal (unsigned <=) */

loc_003407C1: ;
    eax = MEM32(0x84B0E0);
    xmm3 = MEMF(0x648EC8); /* movss */
    PUSH32(esp, 3);
    PUSH32(esp, 0xFFFFFFFFu);
    edi = ebx + eax;
    PUSH32(esp, 0); sub_0035BA10(); /* call 0x0035BA10 */

loc_003407DA: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003407E8; /* jne: not equal / not zero */

loc_003407E1: ;
    xmm7 = xmm5; /* movaps */
    MEM32(esp + 0x18) = ebp;

loc_003407E8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    ebp++;
    ebx = ebx + 0x38;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(ebp, eax)) goto loc_003405F5; /* jl: less (signed <) */

loc_003407FF: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00340820
 * Original: 0x00340820 - 0x00340851 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340820: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(esi + 0xB4));
    if (CMP_NE(LO16(edx), 0xFFFFFFFFu)) { sub_00340851(); return; } /* jne: not equal / not zero */

loc_00340837: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003405C0(); /* call 0x003405C0 */

loc_0034083E: ;
    esp = esp + 8;
    MEM16(esi + 0xB4) = LO16(eax);
    MEM8(esi + 0xEC) = 0;
    g_seh_ebp = ebp; sub_003408A7(); return; /* tail jmp 0x003408A7 */

}

/**
 * sub_003408F0
 * Original: 0x003408F0 - 0x00340997 (167 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003408F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003408F0: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA2);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x570);
    eax = MEM32(edx + 0xFD8);
    if (TEST_NZ(eax, eax)) goto loc_00340995; /* jne: not equal / not zero */

loc_00340919: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x33);
    eax = edi + 0x78;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0034092B: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(ecx + 0x498) = LO16(eax);
    SET_LO16(edx, MEM16(esi + 0xB4));
    esp = esp + 0xC;
    MEMF(esi + 0xA8) = xmm0; /* movss */
    MEMF(esi + 0x800) = xmm1; /* movss */
    MEM8(esi + 0xEC) = 0;
    MEM16(esi + 0xB6) = LO16(edx);
    MEMF(esi + 0xC4) = xmm0; /* movss */
    MEM16(esi + 2) = 0x1E;
    MEM16(esi + 0xB4) = 0xFFFF;
    MEM16(esi + 0x102) = 0xFFFF;
    MEM16(esi + 0x116) = 0xFFFF;
    POP32(esp, edi);

loc_00340995: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003409A0
 * Original: 0x003409A0 - 0x003409B6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003409A0(void)
{
    float xmm0;

loc_003409A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x4CC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003409C0
 * Original: 0x003409C0 - 0x00340A1A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003409C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003409C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + 0x135));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x9D);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00340A1A(); return; } /* jne: not equal / not zero */

loc_003409E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_003409F1: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00340A1A(); return; } /* je: equal / zero */

loc_003409F8: ;
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, edi);
    MEM16(esi + 2) = 0x34;
    MEM16(esi + 0xB4) = 0xFFFF;
    MEMF(esi + 0xC4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340A80
 * Original: 0x00340A80 - 0x00340B42 (194 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00340A80: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x9D);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi + eax;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00340AAC: ;
    xmm1 = MEMF(0x6493E0); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00340B42(); return; } /* jbe: below or equal (unsigned <=) */

loc_00340AC0: ;
    edx = MEM32(edi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx + 0x4CC) = xmm0; /* movss */
    eax = MEM32(edi + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_00340AE8; /* je: equal / zero */

loc_00340AE4: ;
    eax = 0; /* xor self */
    goto loc_00340AF2;

loc_00340AE8: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;

loc_00340AF2: ;
    if (CMP_EQ(MEM32(eax + 0x14), 0x20)) goto loc_00340B22; /* je: equal / zero */

loc_00340AF8: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x444);
    edi = 0x20;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_00340B0E: ;
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebx + 0x80) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00340B22: ;
    SET_LO8(eax, MEM8(ebx + 0x9D));
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(ebx + 7) = LO8(eax);
    eax = MEM32(ebx + 0x98);
    POP32(esp, edi);
    eax = eax | 0x800000;
    POP32(esp, esi);
    MEM32(ebx + 0x98) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340BD0
 * Original: 0x00340BD0 - 0x00340C2C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340BD0: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x135));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = (uint32_t)(int32_t)SMEM8(edi + 0x9D);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    ebp = ebp + ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00340C2C(); return; } /* jne: not equal / not zero */

loc_00340BFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_00340C02: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00340C2C(); return; } /* je: equal / zero */

loc_00340C09: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEM16(edi + 2) = 0x34;
    MEM16(edi + 0xB4) = 0xFFFF;
    MEMF(edi + 0xC4) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00340E30
 * Original: 0x00340E30 - 0x00340E8C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340E30: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x135));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x9D);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00340E8C(); return; } /* jne: not equal / not zero */

loc_00340E5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_00340E62: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00340E8C(); return; } /* je: equal / zero */

loc_00340E69: ;
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, edi);
    MEM16(esi + 2) = 0x34;
    MEM16(esi + 0xB4) = 0xFFFF;
    MEMF(esi + 0xC4) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00340F50
 * Original: 0x00340F50 - 0x00340F88 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F50: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x9D);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_00340F88(); return; } /* je: equal / zero */

loc_00340F84: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00340F92(); return; /* tail jmp 0x00340F92 */

}

/**
 * sub_003410C0
 * Original: 0x003410C0 - 0x0034110E (78 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003410C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003410C0: ;
    eax = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0xC4) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0xC4))) goto loc_0034110D; /* jb: below (unsigned <) */

loc_003410D0: ;
    SET_LO16(ecx, MEM16(eax + 0xB4));
    MEM16(eax + 0xB6) = LO16(ecx);
    ecx = 0xFFFFFFFFu;
    MEM8(eax + 0xEC) = 0;
    MEMF(eax + 0xC4) = xmm0; /* movss */
    MEM16(eax + 2) = 0x1E;
    MEM16(eax + 0xB4) = LO16(ecx);
    MEM16(eax + 0x102) = LO16(ecx);
    MEM16(eax + 0x116) = LO16(ecx);

loc_0034110D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00341110
 * Original: 0x00341110 - 0x0034120B (251 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00341110: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0033DCA0(); /* call 0x0033DCA0 */

loc_00341124: ;
    esi = MEM32(esp + 0x44);
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00341185; /* je: equal / zero */

loc_0034112F: ;
    SET_LO16(ecx, MEM16(esi + 0xB4));
    xmm0 = MEMF(0x648D10); /* movss */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi;
    MEMF(esi + 0xC4) = xmm0; /* movss */
    MEM16(esi + 0xB6) = LO16(ecx);
    PUSH32(esp, 0); sub_00341E00(); /* call 0x00341E00 */

loc_0034115A: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    MEM16(esi + 0xB4) = LO16(eax);
    if ((xmm0 <= MEMF(esp + 8))) goto loc_0034119D; /* jbe: below or equal (unsigned <=) */

loc_00341173: ;
    eax = MEM32(edi + 0x56C);
    MEM32(eax + 0xC4) = 1;
    goto loc_0034119D;

loc_00341185: ;
    xmm0 = MEMF(esi + 0xC4); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0xC4) = xmm0; /* movss */

loc_0034119D: ;
    if (CMP_EQ(MEM16(esi + 0xB4), 0xFFFFFFFFu)) goto loc_00341205; /* je: equal / zero */

loc_003411A7: ;
    xmm0 = MEMF(esi + 0xC4); /* movss */
    /* ucomiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003411D4; /* jp: parity */

loc_003411BC: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(ecx + 0x4CC) = xmm0; /* movss */
    goto loc_003411EA;

loc_003411D4: ;
    edx = MEM32(edi + 0x568);
    xmm0 = MEMF(0x59A8D8); /* movss */
    MEMF(edx + 0x4CC) = xmm0; /* movss */

loc_003411EA: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_003411F3: ;
    SET_LO16(ecx, MEM16(esi + 0xB4));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0036FAB0(); /* call 0x0036FAB0 */

loc_00341202: ;
    esp = esp + 8;

loc_00341205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00341210
 * Original: 0x00341210 - 0x00341238 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341210: ;
    ecx = MEM32(0x84A5FC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xE8);
    if (CMP_EQ(MEM8(eax + ecx), 0x3D)) { sub_00341238(); return; } /* je: equal / zero */

loc_00341228: ;
    SET_LO16(edx, MEM16(esi + 0xB4));
    MEM16(esi + 0xB6) = LO16(edx);
    g_seh_ebp = ebp; sub_0034128A(); return; /* tail jmp 0x0034128A */

}

/**
 * sub_003412C0
 * Original: 0x003412C0 - 0x00341321 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003412C0(void)
{
    float xmm0;

loc_003412C0: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xE8);
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = eax + ecx;
    PUSH32(esp, 0x1000);
    ecx = edi;
    esi = eax + 0x78;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_003412EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_003412F9: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0036F7F0(); /* call 0x0036F7F0 */

loc_00341305: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(0x6493F0); /* movss */
    esp = esp + 0x10;
    POP32(esp, edi);
    MEMF(ecx + 0x4CC) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00341330
 * Original: 0x00341330 - 0x00341426 (246 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341330: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x863D04);
    edx = 0; /* xor self */
    if (CMP_NE(eax, 1)) { sub_00341426(); return; } /* jne: not equal / not zero */

loc_00341343: ;
    eax = MEM32(0x84B330);
    MEM32(eax + 0x14E54) = esi;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0x4003)) goto loc_00341375; /* je: equal / zero */

loc_00341357: ;
    ecx = esi;
    /* nop */

loc_00341360: ;
    if (CMP_NE(eax, 0x4002)) goto loc_00341368; /* jne: not equal / not zero */

loc_00341367: ;
    edx++;

loc_00341368: ;
    eax = MEM32(ecx + 4);
    ecx = ecx + 4;
    if (CMP_NE(eax, 0x4003)) goto loc_00341360; /* jne: not equal / not zero */

loc_00341375: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x96);
    ecx = edx + edx;
    PUSH32(esp, 0x63AAE4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0034138A: ;
    edx = MEM32(0x84B330);
    MEM32(edx + 0x14E4C) = eax;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14E4C);
    MEM16(ecx) = 0;
    eax = MEM32(esi);
    esp = esp + 0x10;
    edx = 0; /* xor self */
    if (CMP_EQ(eax, 0x4003)) goto loc_003413F9; /* je: equal / zero */

loc_003413B4: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 2;
    eax = esi;
    edi = edi;

loc_003413C0: ;
    if (CMP_NE(MEM32(ecx), 0x4002)) goto loc_003413E7; /* jne: not equal / not zero */

loc_003413C8: ;
    if (CMP_EQ(MEM32(ecx + 4), 0x4003)) goto loc_003413E7; /* je: equal / zero */

loc_003413D1: ;
    esi = MEM32(0x84B330);
    esi = MEM32(esi + 0x14E4C);
    ecx = edx + 1;
    MEM16(edi + esi) = LO16(ecx);
    edi = edi + 2;

loc_003413E7: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    edx++;
    (void)0; /* cmp esi, 0x4003 - flags set for next jcc */
    ecx = eax;
    if (CMP_NE(esi, 0x4003)) goto loc_003413C0; /* jne: not equal / not zero */

loc_003413F8: ;
    POP32(esp, edi);

loc_003413F9: ;
    ecx = MEM32(0x84B330);
    ecx = ecx + 0x8F54;
    MEM32(0x84B334) = 0;
    PUSH32(esp, 0); sub_00339E40(); /* call 0x00339E40 */

loc_00341414: ;
    ecx = MEM32(0x84B330);
    ecx = ecx + 0xBCEC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00339E40(); return; /* tail jmp 0x00339E40 */

}

/**
 * sub_00341430
 * Original: 0x00341430 - 0x00341471 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341430(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00341430: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x14894);
    if (CMP_GE(eax, 0x1E)) goto loc_00341470; /* jge: greater or equal (signed >=) */

loc_00341441: ;
    ecx = eax + eax * 2;
    ecx = edx + ecx * 8 + 0x145C4;
    eax++;
    MEM32(edx + 0x14894) = eax;
    eax = MEM32(esi);
    edx = ecx;
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 4);
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEM32(ecx + 0x14) = edx;

loc_00341470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00341480
 * Original: 0x00341480 - 0x00341535 (181 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341480(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00341480: ;
    esp = esp - 0x1C;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14894);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x145C4;
    esi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0034152D; /* jle: less or equal (signed <=) */

loc_003414A4: ;
    eax = esp + 0x18;
    ecx = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;

loc_003414B2: ;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm1, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm1 > MEMF(esp + 0x14))) { sub_00341535(); return; } /* ja: above (unsigned >) */

loc_00341515: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x14894);
    esi++;
    edi = edi + 0x18;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (CMP_L(esi, eax)) goto loc_003414B2; /* jl: less (signed <) */

loc_0034152D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00341540
 * Original: 0x00341540 - 0x0034163C (252 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341540: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00341639; /* je: equal / zero */

loc_00341550: ;
    if (TEST_Z(ebx, ebx)) goto loc_00341639; /* je: equal / zero */

loc_00341558: ;
    PUSH32(esp, edi);
    /* nop */

loc_00341560: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x2D)) goto loc_003415B7; /* je: equal / zero */

loc_00341568: ;
    if (CMP_EQ(eax, 1)) goto loc_003415B7; /* je: equal / zero */

loc_0034156D: ;
    edi = MEM32(esi + 0x23C);
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_00341638; /* je: equal / zero */

loc_0034157D: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00341582: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00341638; /* je: equal / zero */

loc_0034158A: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003415A2; /* je: equal / zero */

loc_00341591: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(ecx, MEM32(edi + 4))) goto loc_00341638; /* jne: not equal / not zero */

loc_003415A2: ;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00341638; /* je: equal / zero */

loc_003415AF: ;
    if (TEST_NZ(esi, esi)) goto loc_00341560; /* jne: not equal / not zero */

loc_003415B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003415B7: ;
    (void)0; /* cmp MEM32(ebx + 0x64), 0x3C - flags set for next jcc */
    edi = MEM32(0x84B330);
    if (CMP_NE(MEM32(ebx + 0x64), 0x3C)) goto loc_003415F9; /* jne: not equal / not zero */

loc_003415C3: ;
    eax = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(edi + 0xD);
    if (CMP_GE(eax, edx)) goto loc_003415F9; /* jge: greater or equal (signed >=) */

loc_003415CF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    PUSH32(esp, ecx);
    eax = eax + edi + 0x38;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00342E50(); /* call 0x00342E50 */

loc_003415F0: ;
    edi = MEM32(0x84B330);
    esp = esp + 4;

loc_003415F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7CA0(); /* call 0x002F7CA0 */

loc_00341603: ;
    eax = ZX16(MEM16(ebx + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0xD);
    esp = esp + 8;
    if (CMP_GE(eax, ecx)) goto loc_00341638; /* jge: greater or equal (signed >=) */

loc_00341612: ;
    SET_LO8(edx, MEM8(esi + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    eax = eax + edi + 0x38;
    MEM8(eax + 9) = LO8(edx);
    esi = esi + 0x78;
    ecx = MEM32(esi);
    eax = eax + 0xC;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_00341638: ;
    POP32(esp, edi);

loc_00341639: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00341640
 * Original: 0x00341640 - 0x003416DF (159 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341640(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00341640: ;
    ecx = MEM32(0x84B330);
    edx = MEM32(ecx + 0x14A00);
    esp = esp - 0xC;
    if (CMP_GE(edx, 0x1E)) goto loc_003416DB; /* jge: greater or equal (signed >=) */

loc_00341658: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0x33);
    eax = esp + 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_0034167C: ;
    esp = esp + 0xC;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003416B0; /* jne: not equal / not zero */

loc_00341685: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    PUSH32(esp, 0x33);
    ecx = esp + 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0035A090(); /* call 0x0035A090 */

loc_003416A7: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003416D9; /* je: equal / zero */

loc_003416B0: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x14A00);
    ecx = eax + eax * 2 + 0x5226;
    ecx = edx + ecx * 4;
    eax++;
    MEM32(edx + 0x14A00) = eax;
    edx = MEM32(esp + 0xC);
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;

loc_003416D9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003416DB: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003416E0
 * Original: 0x003416E0 - 0x00341748 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003416E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003416E0: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14A00);
    xmm3 = MEMF(0x6493DC); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax + 0x14898;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00341741; /* jle: less or equal (signed <=) */

loc_00341709: ;
    /* nop */

loc_00341710: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00341717: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0034172E; /* jbe: below or equal (unsigned <=) */

loc_0034171F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00341726: ;
    esp = esp + 8;
    xmm3 = xmm0; /* movaps */
    ebx = esi;

loc_0034172E: ;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14A00);
    edi++;
    esi = esi + 0xC;
    if (CMP_L(edi, ecx)) goto loc_00341710; /* jl: less (signed <) */

loc_00341741: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00341750
 * Original: 0x00341750 - 0x0034187B (299 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341750(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00341750: ;
    esp = esp - 0x24;
    eax = MEM32(0x84B330);
    ecx = MEM32(eax + 0x14E3C);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x14A04;
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm3 = xmm4; /* movaps */
    MEM32(esp + 8) = esi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00341872; /* jle: less or equal (signed <=) */

loc_0034177A: ;
    xmm5 = MEMF(0x648D14); /* movss */
    eax = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;

loc_00341790: ;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_EQ(ebx, 2)) goto loc_003417F6; /* je: equal / zero */

loc_003417E5: ;
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, 2)) goto loc_003417F6; /* je: equal / zero */

loc_003417ED: ;
    if (CMP_EQ(ebx, eax)) goto loc_003417F6; /* je: equal / zero */

loc_003417F1: ;
    xmm0 = xmm4; /* movaps */
    goto loc_0034184F;

loc_003417F6: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esi + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x1C))) goto loc_00341807; /* jbe: below or equal (unsigned <=) */

loc_00341802: ;
    xmm0 = xmm4; /* movaps */
    goto loc_0034184F;

loc_00341807: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00341818; /* jb: below (unsigned <) */

loc_00341811: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    goto loc_0034184F;

loc_00341818: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x10); /* subss */
    xmm1 = xmm1 - MEMF(esi + 0x10); /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */

loc_0034184F: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x14E3C);
    edi++;
    esi = esi + 0x24;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 8) = esi;
    if (CMP_L(edi, eax)) goto loc_00341790; /* jl: less (signed <) */

loc_00341872: ;
    POP32(esp, edi);
    xmm0 = xmm3; /* movaps */
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00341880
 * Original: 0x00341880 - 0x003418CE (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341880(void)
{

loc_00341880: ;
    eax = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C2);
    PUSH32(esp, 0x63AAE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0034189A: ;
    ecx = MEM32(0x84B330);
    MEM32(ecx + 0x145BC) = eax;
    edx = MEM32(0x84B330);
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    edi = MEM32(edx + 0x145BC);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    esp = esp + 0x10;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003418D0
 * Original: 0x003418D0 - 0x0034193F (111 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003418D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003418D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B330);
    eax = MEM32(esi + 0x145BC);
    esi = esi + 0x145BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003418E9: ;
    if (TEST_NZ(eax, eax)) goto loc_0034192D; /* jne: not equal / not zero */

loc_003418ED: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) { sub_0034193F(); return; } /* je: equal / zero */

loc_003418F3: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00341913: ;
    MEM32(esi) = 0;
    eax = MEM32(0x84B330);
    esp = esp + 4;
    MEM32(eax + 0x145BC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034192D: ;
    ecx = MEM32(0x84B330);
    MEM32(ecx + 0x145BC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00341960
 * Original: 0x00341960 - 0x003419A5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00341960: ;
    edx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003419A4; /* jle: less or equal (signed <=) */

loc_0034196D: ;
    ecx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_00341980;

    /* nop */
    edi = edi;

loc_00341980: ;
    esi = MEM32(ecx + 0x145BC);
    if (CMP_BE(MEM8(eax + esi), 0)) goto loc_0034199D; /* jbe: below or equal (unsigned <=) */

loc_0034198C: ;
    ecx = esi;
    SET_LO8(ebx, MEM8(ecx + eax));
    ecx = ecx + eax;
    SET_LO8(ebx, LO8(ebx) - 1);
    MEM8(ecx) = LO8(ebx);
    ecx = MEM32(0x84B330);

loc_0034199D: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_00341980; /* jl: less (signed <) */

loc_003419A2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003419A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003419B0
 * Original: 0x003419B0 - 0x00341A6A (186 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003419B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003419B0: ;
    esp = esp - 0x24;
    xmm0 = MEMF(ecx); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A6B8);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    ebx++;
    eax = esp + 8;
    MEM32(0x84A6B8) = ebx;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    esi = esp + 0x24;
    eax = esp + 0x18;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(0x780AB0) = 0x63AB10;
    MEM32(0x6C0210) = 0x71;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x200000;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_00341A40: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00341A6A(); return; } /* je: equal / zero */

loc_00341A53: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    SET_LO8(eax, 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00341A90
 * Original: 0x00341A90 - 0x00341B17 (135 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341A90: ;
    esp = esp - 0x48;
    xmm6 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x238);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    edx = ZX16(MEM16(edi + 0x410));
    SET_LO8(ecx, (CMP_NE(edx, ebp)) ? 1 : 0); /* setne */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEMF(esp + 0x10) = xmm6; /* movss */
    ecx = ecx + ecx + 2;
    esi = ecx;
    PUSH32(esp, 0); sub_0034B9B0(); /* call 0x0034B9B0 */

loc_00341AD6: ;
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00341AE1: ;
    esi = MEM32(esp + 0x64);
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esp + 0x2C) = LO8(eax);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_00341B17(); return; } /* je: equal / zero */

loc_00341AEE: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B8);
    ecx = ZX16(MEM16(eax + esi * 2));
    edx = MEM32(edx + 0x145B4);
    ebx = ZX16(MEM16(eax + esi * 2 + 2));
    eax = eax + esi * 2;
    edx = edx + ecx * 2;
    MEM32(esp + 0x18) = edx;
    ebx = ebx - ecx;
    g_seh_ebp = ebp; sub_00341B1E(); return; /* tail jmp 0x00341B1E */

}

/**
 * sub_00341E00
 * Original: 0x00341E00 - 0x00341E1F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00341E00: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00341E1F(); return; } /* jne: not equal / not zero */

loc_00341E18: ;
    eax = eax | eax;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00342180
 * Original: 0x00342180 - 0x0034224C (204 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    eax = eax | 0xFFFFFFFFu;
    esp = esp - 0x1C;
    if (CMP_EQ(MEM16(ecx + 0x498), LO16(eax))) goto loc_00342248; /* je: equal / zero */

loc_0034219D: ;
    xmm0 = MEMF(0x648D34); /* movss */
    xmm7 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    edi = MEM32(esp + 0x34);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (TEST_Z(edi, edi)) goto loc_00342200; /* je: equal / zero */

loc_003421CD: ;
    eax = MEM32(edi + edx * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00342204; /* je: equal / zero */

loc_003421D5: ;
    esi = MEM32(0x84B330);
    ecx = MEM32(esi + 0x145B8);
    esi = MEM32(esi + 0x145B4);
    eax = SX16(LO16(eax));
    ebp = ZX16(MEM16(ecx + eax * 2 + 2));
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    esi = esi + ecx * 2;
    MEM32(esp + 0x18) = esi;
    ebp = ebp - ecx;
    g_seh_ebp = ebp; sub_00342253(); return; /* tail jmp 0x00342253 */

loc_00342200: ;
    if (TEST_Z(edx, edx)) { sub_0034224C(); return; } /* je: equal / zero */

loc_00342204: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00342240; /* je: equal / zero */

loc_0034220D: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax + 0x238);
    edi = MEM32(edx);
    eax = ZX16(MEM16(eax + 0x410));
    ebx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ebx = ebx + ebx + 2;
    PUSH32(esp, 0); sub_0034B830(); /* call 0x0034B830 */

loc_00342231: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00342240; /* jne: not equal / not zero */

loc_00342238: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_00342240: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00342248: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003423A0
 * Original: 0x003423A0 - 0x0034245F (191 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003423A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003423A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    eax = eax | 0xFFFFFFFFu;
    esp = esp - 0x10;
    if (CMP_EQ(MEM16(ecx + 0x498), LO16(eax))) goto loc_0034245B; /* je: equal / zero */

loc_003423BD: ;
    xmm7 = MEMF(0x648D34); /* movss */
    xmm6 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    edx = 0; /* xor self */
    esi = MEM32(esp + 0x28);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(esi, esi)) goto loc_00342413; /* je: equal / zero */

loc_003423E5: ;
    eax = MEM32(esi + edx * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00342417; /* je: equal / zero */

loc_003423ED: ;
    edi = MEM32(0x84B330);
    ecx = MEM32(edi + 0x145B8);
    edi = MEM32(edi + 0x145B4);
    eax = SX16(LO16(eax));
    eax = ecx + eax * 2;
    ecx = ZX16(MEM16(eax));
    ebp = edi + ecx * 2;
    edi = ZX16(MEM16(eax + 2));
    edi = edi - ecx;
    g_seh_ebp = ebp; sub_00342466(); return; /* tail jmp 0x00342466 */

loc_00342413: ;
    if (TEST_Z(edx, edx)) { sub_0034245F(); return; } /* je: equal / zero */

loc_00342417: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00342453; /* je: equal / zero */

loc_00342420: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax + 0x238);
    edi = MEM32(edx);
    eax = ZX16(MEM16(eax + 0x410));
    ebx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ebx = ebx + ebx + 2;
    PUSH32(esp, 0); sub_0034B830(); /* call 0x0034B830 */

loc_00342444: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00342453; /* jne: not equal / not zero */

loc_0034244B: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_00342453: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0034245B: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00342590
 * Original: 0x00342590 - 0x00342A03 (1139 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342590: ;
    esp = esp - 0x138;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x148);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x150);
    eax = eax | 0xFFFFFFFFu;
    if (CMP_EQ(edi, eax)) goto loc_003429FA; /* je: equal / zero */

loc_003425B1: ;
    edx = MEM32(esp + 0x144);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    ebp = 0; /* xor self */
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    eax = esi;
    MEM8(esp + 0x16) = 0;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_00370BD0(); /* call 0x00370BD0 */

loc_003425D6: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B8);
    xmm0 = MEMF(esp + 0x160); /* movss */
    ecx = ZX16(MEM16(eax + edi * 2));
    ebx = ZX16(MEM16(eax + edi * 2 + 2));
    edx = MEM32(edx + 0x145B4);
    eax = eax + edi * 2;
    eax = MEM32(esi + 0x568);
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x164); /* movss */
    esp = esp + 4;
    xmm6 = xmm0; /* movaps */
    edx = edx + ecx * 2;
    ebx = ebx - ecx;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    xmm6 = xmm6 * xmm0; /* mulss */
    MEMF(esp + 0x15C) = xmm7; /* movss */
    MEMF(esp + 0x160) = xmm6; /* movss */
    MEM32(esp + 0x44) = edx;
    if (CMP_EQ(eax, ebp)) goto loc_0034264C; /* je: equal / zero */

loc_0034263C: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(esp + 0x13) = (CMP_EQ(eax, edi)) ? 1 : 0; /* sete */
    goto loc_0034267E;

loc_0034264C: ;
    ecx = MEM32(0x84B264);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    eax = esp + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035A150(); /* call 0x0035A150 */

loc_00342662: ;
    xmm6 = MEMF(esp + 0x168); /* movss */
    xmm7 = MEMF(esp + 0x164); /* movss */
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = (TEST_NZ(eax, eax)) ? 1 : 0; /* setne */

loc_0034267E: ;
    if (CMP_LE(ebx, ebp)) goto loc_00342870; /* jle: less or equal (signed <=) */

loc_00342686: ;
    ecx = MEM32(esp + 0x44);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ecx + ebp * 2));
    ecx = MEM32(0x84B0E0);
    edi = edi & 0x7FFF;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    SET_LO8(eax, MEM8(esi + ecx + 0x33));
    esi = esi + ecx;
    (void)0; /* cmp LO8(eax), 0x3E - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(LO8(eax), 0x3E)) goto loc_00342867; /* je: equal / zero */

loc_003426B3: ;
    edx = MEM32(esp + 0x14C);
    edx = edx + 0x78;
    eax = esp + 0x48;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x54) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x48;
    MEM32(esp + 0x1C) = ecx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - MEMF(0x5A005C); /* subss */
    xmm1 = xmm1 * MEMF(0x6493B8); /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm1; /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_00342766; /* ja: above (unsigned >) */

loc_0034274F: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_00342761; /* jbe: below or equal (unsigned <=) */

loc_0034275C: ;
    xmm5 = xmm1; /* movaps */
    goto loc_00342769;

loc_00342761: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00342769; /* jbe: below or equal (unsigned <=) */

loc_00342766: ;
    xmm5 = xmm0; /* movaps */

loc_00342769: ;
    edx = MEM32(esp + 0x150);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xB4);
    if (CMP_NE(edi, eax)) goto loc_00342783; /* jne: not equal / not zero */

loc_0034277B: ;
    xmm5 = xmm5 * MEMF(0x648E2C); /* mulss */

loc_00342783: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0034278E: ;
    esp = esp + 8;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 < xmm7)) goto loc_003427A2; /* jb: below (unsigned <) */

loc_00342796: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 < xmm0)) goto loc_003427A2; /* jb: below (unsigned <) */

loc_0034279B: ;
    MEM8(esp + 0x11) = 1;
    goto loc_003427B7;

loc_003427A2: ;
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEM8(esp + 0x11) = 0;
    xmm5 = xmm5 / xmm0; /* divss */

loc_003427B7: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003427BC: ;
    xmm1 = MEMF(0x648D10); /* movss */
    eax = MEM32(esp + 0x14);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_003427FC; /* jle: less or equal (signed <=) */

loc_003427E0: ;
    SET_LO8(ecx, MEM8(esp + esi * 8 + 0x5C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003427F0; /* jne: not equal / not zero */

loc_003427E8: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003427FC; /* jne: not equal / not zero */

loc_003427F0: ;
    /* comiss xmm0, MEMF(esp + esi * 8 + 0x58) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + esi * 8 + 0x58))) goto loc_003427FC; /* ja: above (unsigned >) */

loc_003427F7: ;
    esi++;
    if (CMP_L(esi, eax)) goto loc_003427E0; /* jl: less (signed <) */

loc_003427FC: ;
    if (CMP_NE(esi, eax)) goto loc_0034280E; /* jne: not equal / not zero */

loc_00342800: ;
    if (CMP_GE(eax, 0x1E)) goto loc_00342850; /* jge: greater or equal (signed >=) */

loc_00342805: ;
    esi = eax;
    eax++;
    MEM32(esp + 0x14) = eax;
    goto loc_00342850;

loc_0034280E: ;
    if (CMP_GE(eax, 0x1E)) goto loc_00342818; /* jge: greater or equal (signed >=) */

loc_00342813: ;
    eax++;
    MEM32(esp + 0x14) = eax;

loc_00342818: ;
    eax = eax - esi;
    edx = eax * 8 + -8;
    PUSH32(esp, edx);
    eax = esp + esi * 8 + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + esi * 8 + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00342831: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm6 = MEMF(esp + 0x16C); /* movss */
    xmm7 = MEMF(esp + 0x168); /* movss */
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;

loc_00342850: ;
    if (CMP_EQ(esi, eax)) goto loc_00342867; /* je: equal / zero */

loc_00342854: ;
    SET_LO8(edx, MEM8(esp + 0x11));
    MEM8(esp + esi * 8 + 0x5C) = LO8(edx);
    MEMF(esp + esi * 8 + 0x58) = xmm0; /* movss */
    MEM16(esp + esi * 8 + 0x5E) = LO16(edi);

loc_00342867: ;
    ebp++;
    if (CMP_L(ebp, ebx)) goto loc_00342686; /* jl: less (signed <) */

loc_00342870: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003429CF; /* jle: less or equal (signed <=) */

loc_0034287E: ;
    edi = edi;

loc_00342880: ;
    SET_LO16(esi, MEM16(esp + edi * 8 + 0x5E));
    ecx = MEM32(0x84B0E0);
    eax = SX16(LO16(esi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = MEM32(eax + ecx + 4);
    eax = eax + ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    MEM32(esp + 0x38) = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00342911; /* je: equal / zero */

loc_003428C4: ;
    eax = MEM32(esp + 0x158);
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00342905; /* jl: less (signed <) */

loc_003428D0: ;
    ecx = MEM32(0x84B264);
    if (CMP_GE(LO16(eax), MEM16(ecx + 4))) goto loc_00342905; /* jge: greater or equal (signed >=) */

loc_003428DC: ;
    edx = SX16(LO16(eax));
    eax = MEM32(ecx);
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ebx = esp + 0x34;
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_0035A3C0(); /* call 0x0035A3C0 */

loc_003428F8: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    goto loc_003429AB;

loc_00342905: ;
    eax = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    goto loc_003429AB;

loc_00342911: ;
    ebp = MEM32(esp + 0x150);
    edx = ZX8(MEM8(ebp + 0x8C8));
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00342970; /* jle: less or equal (signed <=) */

loc_00342925: ;
    eax = ebp + 0x808;
    goto loc_00342930;

    /* nop */

loc_00342930: ;
    if (CMP_EQ(MEM16(eax), LO16(esi))) goto loc_0034293F; /* je: equal / zero */

loc_00342935: ;
    ecx++;
    eax = eax + 2;
    if (CMP_L(ecx, edx)) goto loc_00342930; /* jl: less (signed <) */

loc_0034293D: ;
    goto loc_00342970;

loc_0034293F: ;
    xmm0 = MEMF(ebp + 0xE4); /* movss */
    xmm0 = xmm0 - MEMF(ebp + ecx * 4 + 0x848); /* subss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648D10))) goto loc_00342970; /* ja: above (unsigned >) */

loc_00342959: ;
    esi = MEM32(ebp + 0x804);
    edx = 1;
    edx = edx << LO8(ecx);
    (void)0; /* test esi, edx - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(esi, edx)) ? 1 : 0); /* setne */
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_003429AB; /* jne: not equal / not zero */

loc_00342970: ;
    if (CMP_GE(MEM32(0x84A6B8), 0xA)) goto loc_003429CF; /* jge: greater or equal (signed >=) */

loc_00342979: ;
    PUSH32(esp, 0);
    eax = esp + 0x28;
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_003419B0(); /* call 0x003419B0 */

loc_00342988: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esp + edi * 8 + 0x62));
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    edx = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00342EB0(); /* call 0x00342EB0 */

loc_003429A8: ;
    esp = esp + 0xC;

loc_003429AB: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003429BE; /* jne: not equal / not zero */

loc_003429AF: ;
    eax = MEM32(esp + 0x14);
    edi++;
    if (CMP_L(edi, eax)) goto loc_00342880; /* jl: less (signed <) */

loc_003429BC: ;
    goto loc_003429CF;

loc_003429BE: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + edi * 8 + 0x5E);
    SET_LO8(eax, MEM8(esp + edi * 8 + 0x5C));
    MEM32(esp + 0x20) = edx;
    MEM8(esp + 0x12) = LO8(eax);

loc_003429CF: ;
    eax = MEM32(esp + 0x168);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003429E5; /* je: equal / zero */

loc_003429DC: ;
    (void)0; /* cmp edi, MEM32(esp + 0xC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edi, MEM32(esp + 0xC))) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_003429E5: ;
    eax = MEM32(esp + 0x15C);
    if (TEST_Z(eax, eax)) goto loc_003429F6; /* je: equal / zero */

loc_003429F0: ;
    SET_LO8(edx, MEM8(esp + 0xA));
    MEM8(eax) = LO8(edx);

loc_003429F6: ;
    eax = MEM32(esp + 0x18);

loc_003429FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x138;
    esp += 4; return; /* ret */

}

/**
 * sub_00342A10
 * Original: 0x00342A10 - 0x00342A57 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342A10: ;
    esp = esp - 0x20;
    xmm3 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ebp = 0; /* xor self */
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_00342A57(); return; } /* je: equal / zero */

loc_00342A32: ;
    edx = MEM32(0x84B330);
    eax = MEM32(edx + 0x145B8);
    ecx = ZX16(MEM16(eax + esi * 2));
    ebx = ZX16(MEM16(eax + esi * 2 + 2));
    edx = MEM32(edx + 0x145B4);
    eax = eax + esi * 2;
    ebp = edx + ecx * 2;
    ebx = ebx - ecx;
    g_seh_ebp = ebp; sub_00342A5E(); return; /* tail jmp 0x00342A5E */

}

/**
 * sub_00342B50
 * Original: 0x00342B50 - 0x00342BD9 (137 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342B50: ;
    eax = MEM32(0x84B330);
    SET_LO8(ecx, MEM8(eax + 0xD));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm3 = xmm3 * xmm3; /* mulss */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00342BD4; /* jle: less or equal (signed <=) */

loc_00342B66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    ebx = 0; /* xor self */
    esi = esi + 0x78;
    goto loc_00342B80;

    /* nop */
    /* nop */

loc_00342B80: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + 0x238);
    ecx = MEM32(esi + 0x1C0);
    edx = MEM32(edx);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00342BB7; /* je: equal / zero */

loc_00342B96: ;
    ecx = MEM32(0x84B330);
    SET_LO8(edx, MEM8(ebx + ecx + 0x43));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00342BB7; /* jne: not equal / not zero */

loc_00342BA4: ;
    eax = eax + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00342BAE: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00342BB7; /* jbe: below or equal (unsigned <=) */

loc_00342BB6: ;
    ebp++;

loc_00342BB7: ;
    edx = MEM32(0x84B330);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    edi++;
    ebx = ebx + 0x8CC;
    esi = esi + 0x6D0;
    if (CMP_L(edi, eax)) goto loc_00342B80; /* jl: less (signed <) */

loc_00342BD2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00342BD4: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00342BE0
 * Original: 0x00342BE0 - 0x00342C1D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342BE0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00342BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00342BE6: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = MEM32(eax * 4 + 0x74B938);
    if (TEST_Z(eax, eax)) goto loc_00342C03; /* je: equal / zero */

loc_00342BF8: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00342C00: ;
    esp = esp + 8;

loc_00342C03: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00342C08: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x801EA8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x801EA8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00342C20
 * Original: 0x00342C20 - 0x00342C7F (95 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342C20: ;
    edx = MEM32(0x84B330);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    eax = edi + 4;
    MEM32(ecx + edx + 0x7E0) = eax;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00342C51; /* je: equal / zero */

loc_00342C45: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    esi++;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00342C45; /* jne: not equal / not zero */

loc_00342C51: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00342C56: ;
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_L(eax, esi)) goto loc_00342C69; /* jl: less (signed <) */

loc_00342C66: ;
    eax = esi + -1;

loc_00342C69: ;
    ecx = MEM32(edi + eax * 4 + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_00342C80(); /* call 0x00342C80 */

loc_00342C79: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00342C80
 * Original: 0x00342C80 - 0x00342D64 (228 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342C80: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x84B330);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    eax = eax + ebx;
    ebx = MEM32(0x84B0E0);
    esi = ecx + edx + 0x38;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00342CDB; /* jle: less or equal (signed <=) */

loc_00342CBE: ;
    edx = ebx + 0x10;

loc_00342CC1: ;
    ebp = ZX16(MEM16(edx));
    if (CMP_EQ(ebp, edi)) goto loc_00342CD2; /* je: equal / zero */

loc_00342CC8: ;
    eax++;
    edx = edx + 0x38;
    if (CMP_L(eax, ecx)) goto loc_00342CC1; /* jl: less (signed <) */

loc_00342CD0: ;
    goto loc_00342CDB;

loc_00342CD2: ;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    ecx = eax;
    if (CMP_NE(eax, 0xFFFF)) goto loc_00342CDD; /* jne: not equal / not zero */

loc_00342CDB: ;
    ecx = 0; /* xor self */

loc_00342CDD: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = eax + ebx;
    ebp = MEM32(edx);
    edi = esi + 0xF0;
    ebx = edi;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(ebx + 8) = edx;
    edx = MEM32(0x84B330);
    edx = MEM32(edx + 0x8DF8);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(edx + ecx));
    MEM16(esi + 0xFC) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(esi + 0x100) = LO8(edx);
    edx = MEM32(esp + 0x18);
    MEM8(esi + 0x101) = LO8(edx);
    ebx = MEM32(0x84B0E0);
    if (CMP_NE(MEM16(eax + ebx + 0x12), 0xFFFF)) { sub_00342D64(); return; } /* jne: not equal / not zero */

loc_00342D38: ;
    if (CMP_EQ(edx, 6)) { sub_00342D64(); return; } /* je: equal / zero */

loc_00342D3D: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xFC));
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_00342D58: ;
    esp = esp + 0x18;
    MEM16(esi + 0xFE) = LO16(eax);
    g_seh_ebp = ebp; sub_00342D6B(); return; /* tail jmp 0x00342D6B */

}

/**
 * sub_00342DD0
 * Original: 0x00342DD0 - 0x00342DF7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00342DD0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1A4);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00342DF3; /* jle: less or equal (signed <=) */

loc_00342DDE: ;
    edx = esi + 0x1A8;

loc_00342DE4: ;
    ebx = (uint32_t)(int32_t)SMEM16(edx);
    if (CMP_EQ(ebx, edi)) { sub_00342DF7(); return; } /* je: equal / zero */

loc_00342DEB: ;
    eax++;
    edx = edx + 0x30;
    if (CMP_L(eax, ecx)) goto loc_00342DE4; /* jl: less (signed <) */

loc_00342DF3: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342E10
 * Original: 0x00342E10 - 0x00342E44 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00342E10: ;
    ecx = MEM32(eax + 0x7AC);
    if (TEST_Z(ecx, ecx)) { sub_00342E44(); return; } /* je: equal / zero */

loc_00342E1A: ;
    if (CMP_NE(MEM32(ecx + 4), 0xB)) { sub_00342E44(); return; } /* jne: not equal / not zero */

loc_00342E20: ;
    edx = MEM32(ecx + 0x8C);
    eax = 1;
    if (CMP_LE(edx, eax)) goto loc_00342E3E; /* jle: less or equal (signed <=) */

loc_00342E2F: ;
    ecx = ecx + 0x10;

loc_00342E32: ;
    if (CMP_EQ(esi, MEM32(ecx))) goto loc_00342E41; /* je: equal / zero */

loc_00342E36: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00342E32; /* jl: less (signed <) */

loc_00342E3E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00342E41: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00342E50
 * Original: 0x00342E50 - 0x00342E6A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342E50: ;
    xmm0 = MEMF(eax + 0x7F8); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) { sub_00342E6A(); return; } /* jb: below (unsigned <) */

loc_00342E60: ;
    xmm0 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_00342E90(); return; /* tail jmp 0x00342E90 */

}

/**
 * sub_00342EB0
 * Original: 0x00342EB0 - 0x00342F62 (178 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342EB0: ;
    SET_LO8(eax, MEM8(edx + 0x8C8));
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00342F2B; /* jle: less or equal (signed <=) */

loc_00342EC1: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx + 0x848;
    ebx = edx + 0x808;
    /* nop */

loc_00342EE0: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    (void)0; /* cmp MEM16(ebx), LO16(ecx) - flags set for next jcc */
    xmm0 = MEMF(edx + 0xE4); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    if (CMP_EQ(MEM16(ebx), LO16(ecx))) goto loc_00342F27; /* je: equal / zero */

loc_00342EF6: ;
    xmm3 = MEMF(edi); /* movss */
    /* comiss xmm3, MEMF(edx + 0xE4) - sets EFLAGS */
    if ((xmm3 > MEMF(edx + 0xE4))) goto loc_00342F27; /* ja: above (unsigned >) */

loc_00342F03: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00342F27; /* ja: above (unsigned >) */

loc_00342F08: ;
    if (CMP_NE(LO8(eax), 0x20)) goto loc_00342F13; /* jne: not equal / not zero */

loc_00342F0C: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00342F13; /* jbe: below or equal (unsigned <=) */

loc_00342F11: ;
    ebp = esi;

loc_00342F13: ;
    ecx = ZX8(MEM8(edx + 0x8C8));
    esi++;
    ebx = ebx + 2;
    edi = edi + 4;
    if (CMP_L(esi, ecx)) goto loc_00342EE0; /* jl: less (signed <) */

loc_00342F25: ;
    goto loc_00342F29;

loc_00342F27: ;
    ebp = esi;

loc_00342F29: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00342F2B: ;
    ecx = ZX8(LO8(eax));
    if (CMP_NE(ebp, ecx)) goto loc_00342F3A; /* jne: not equal / not zero */

loc_00342F32: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edx + 0x8C8) = LO8(eax);

loc_00342F3A: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(edx + ebp * 2 + 0x808) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = ebp;
    eax = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00342F62(); return; } /* je: equal / zero */

loc_00342F56: ;
    eax = eax << LO8(ecx);
    ecx = MEM32(edx + 0x804);
    ecx = ecx | eax;
    g_seh_ebp = ebp; sub_00342F6E(); return; /* tail jmp 0x00342F6E */

}

/**
 * sub_00342F90
 * Original: 0x00342F90 - 0x00342FBF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00342F90: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = eax;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x63AFE8;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00342FB9; /* je: equal / zero */

loc_00342FA8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00342FB6: ;
    esp = esp + 4;

loc_00342FB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00342FC0
 * Original: 0x00342FC0 - 0x00343054 (148 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00342FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = MEMF(esi + 0x10); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00343050; /* jnp: not parity */

loc_00342FD5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x238);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_0034304F; /* je: equal / zero */

loc_00342FE7: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    /* comiss xmm0, MEMF(esi + 0x10) - sets EFLAGS */
    MEM32(esi + 0x14) = edi;
    MEMF(esi + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(esi + 0x10))) goto loc_00343005; /* jbe: below or equal (unsigned <=) */

loc_00343000: ;
    xmm0 = MEMF(esi + 0x10); /* movss */

loc_00343005: ;
    /* ucomiss xmm0, MEMF(esi + 0x10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0xC) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0034304F; /* jp: parity */

loc_00343014: ;
    edx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_00343026: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x14;
    eax = edi;
    PUSH32(esp, 0); sub_00343060(); /* call 0x00343060 */

loc_00343034: ;
    edi = MEM32(edi + 0x238);
    if (TEST_Z(edi, edi)) goto loc_00343047; /* je: equal / zero */

loc_0034303E: ;
    edx = MEM32(edi);
    eax = esi;
    PUSH32(esp, 0); sub_00343180(); /* call 0x00343180 */

loc_00343047: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0; /* movss */

loc_0034304F: ;
    POP32(esp, edi);

loc_00343050: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00343060
 * Original: 0x00343060 - 0x003430D4 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343060: ;
    if (TEST_Z(eax, eax)) goto loc_003430D3; /* je: equal / zero */

loc_00343064: ;
    eax = MEM32(eax + 0x238);
    eax = MEM32(eax);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00343098; /* je: equal / zero */

loc_00343071: ;
    eax--;
    if ((eax != 0)) goto loc_003430D3; /* jne: not equal / not zero */

loc_00343074: ;
    eax = ecx;
    eax = eax - 0x36;
    if ((eax == 0)) goto loc_00343091; /* je: equal / zero */

loc_0034307B: ;
    eax--;
    if ((eax == 0)) goto loc_0034308A; /* je: equal / zero */

loc_0034307E: ;
    eax = eax - 0xD;
    if ((eax != 0)) goto loc_003430D3; /* jne: not equal / not zero */

loc_00343083: ;
    ecx = 0x63B000;
    goto loc_003430BA;

loc_0034308A: ;
    ecx = 0x63B034;
    goto loc_003430BA;

loc_00343091: ;
    ecx = 0x63B06C;
    goto loc_003430BA;

loc_00343098: ;
    eax = ecx;
    eax = eax - 0x36;
    if ((eax == 0)) goto loc_003430B5; /* je: equal / zero */

loc_0034309F: ;
    eax--;
    if ((eax == 0)) goto loc_003430AE; /* je: equal / zero */

loc_003430A2: ;
    eax = eax - 0xD;
    if ((eax != 0)) goto loc_003430D3; /* jne: not equal / not zero */

loc_003430A7: ;
    ecx = 0x63B0A4;
    goto loc_003430BA;

loc_003430AE: ;
    ecx = 0x63B0D4;
    goto loc_003430BA;

loc_003430B5: ;
    ecx = 0x63B108;

loc_003430BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_003430C8: ;
    ebx = eax;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_003430CF: ;
    esp = esp + 0xC;
    POP32(esp, ebx);

loc_003430D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003430E0
 * Original: 0x003430E0 - 0x003430F8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003430E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003430E0: ;
    eax = MEM32(ecx + 8);
    if (CMP_EQ(eax, 3)) goto loc_003430F3; /* je: equal / zero */

loc_003430E8: ;
    if (CMP_EQ(eax, 2)) { sub_003430F8(); return; } /* je: equal / zero */

loc_003430ED: ;
    if (CMP_EQ(eax, MEM32(esp + 4))) { sub_003430F8(); return; } /* je: equal / zero */

loc_003430F3: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343100
 * Original: 0x00343100 - 0x0034312D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00343100: ;
    (void)0; /* cmp MEM32(eax + 8), edx - flags set for next jcc */
    xmm0 = MEMF(esp + 4); /* movss */
    if (CMP_EQ(MEM32(eax + 8), edx)) goto loc_00343125; /* je: equal / zero */

loc_0034310B: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 8) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_00343125; /* je: equal / zero */

loc_00343115: ;
    MEM8(ecx + 4) = 0;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM8(edx + 4) = 1;

loc_00343125: ;
    MEMF(eax + 0xC) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343130
 * Original: 0x00343130 - 0x00343158 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343130(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00343130: ;
    (void)0; /* cmp MEM32(eax + 8), edx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_EQ(MEM32(eax + 8), edx)) goto loc_00343152; /* je: equal / zero */

loc_00343138: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 8) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_00343152; /* je: equal / zero */

loc_00343142: ;
    MEM8(ecx + 4) = 0;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM8(edx + 4) = 1;

loc_00343152: ;
    MEMF(eax + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00343160
 * Original: 0x00343160 - 0x0034316D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343160: ;
    eax = MEM32(ecx + 8);
    if (CMP_NE(eax, 3)) { sub_0034316D(); return; } /* jne: not equal / not zero */

loc_00343168: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343180
 * Original: 0x00343180 - 0x003431A0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343180: ;
    if (CMP_EQ(MEM32(eax + 8), edx)) goto loc_0034319F; /* je: equal / zero */

loc_00343185: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 8) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0034319F; /* je: equal / zero */

loc_0034318F: ;
    MEM8(ecx + 4) = 0;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM8(edx + 4) = 1;

loc_0034319F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003431A0
 * Original: 0x003431A0 - 0x00343383 (483 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003431A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003431A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x64);
    eax = eax + 0xFFFFFFCBu;
    if (CMP_A(eax, 0xF)) goto loc_00343381; /* ja: above (unsigned >) */

loc_003431B4: ;
    eax = ZX8(MEM8(eax + 0x343390));
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0x343384); /* switch: 3 entries, 3 targets */
    if (_jt == 0x003431C3u) goto loc_003431C3;
    if (_jt == 0x003431D6u) goto loc_003431D6;
    if (_jt == 0x00343380u) goto loc_00343380;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003431C3: ;
    eax = MEM32(ebp + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00343380; /* je: equal / zero */

loc_003431D1: ;
    ebx = eax + 4;
    goto loc_003431E7;

loc_003431D6: ;
    eax = MEM32(ebp + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00343380; /* je: equal / zero */

loc_003431E4: ;
    ebx = eax + 0x38;

loc_003431E7: ;
    if (TEST_Z(ebx, ebx)) goto loc_00343380; /* je: equal / zero */

loc_003431EF: ;
    ecx = MEM32(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_003431FB; /* je: equal / zero */

loc_003431F5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003431FB: ;
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_003432C5; /* je: equal / zero */

loc_0034320A: ;
    eax--;
    if ((eax != 0)) goto loc_0034337E; /* jne: not equal / not zero */

loc_00343211: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0034321F; /* jne: not equal / not zero */

loc_0034321A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034321F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00343267; /* je: equal / zero */

loc_00343245: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_00343267; /* jb: below (unsigned <) */

loc_0034324E: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00343258: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343260: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0034328C; /* jne: not equal / not zero */

loc_00343267: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00343279: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343281: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0034337A; /* je: equal / zero */

loc_0034328C: ;
    ecx = MEM32(ebp + 0x238);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = 0;
    POP32(esp, esi);
    MEM8(ecx + 4) = 1;
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003432C5: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003432D3; /* jne: not equal / not zero */

loc_003432CE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003432D3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0034331B; /* je: equal / zero */

loc_003432F9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0034331B; /* jb: below (unsigned <) */

loc_00343302: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034330C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343314: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0034333C; /* jne: not equal / not zero */

loc_0034331B: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034332D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343335: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0034337A; /* je: equal / zero */

loc_0034333C: ;
    ecx = MEM32(ebp + 0x238);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = 0;
    MEM8(ecx + 4) = 1;
    POP32(esp, esi);
    MEM32(eax) = 0x63AFD0;
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0034337A: ;
    eax = 0; /* xor self */
    MEM32(ebx) = eax;

loc_0034337E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00343380: ;
    POP32(esp, ebx);

loc_00343381: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00343400
 * Original: 0x00343400 - 0x00343413 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343400: ;
    eax = MEM32(ecx + 8);
    if (CMP_EQ(MEM32(esp + 4), eax)) { sub_00343413(); return; } /* je: equal / zero */

loc_00343409: ;
    if (CMP_EQ(eax, 2)) { sub_00343413(); return; } /* je: equal / zero */

loc_0034340E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00343420
 * Original: 0x00343420 - 0x00343452 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343420(void)
{

loc_00343420: ;
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
    MEM32(eax) = 0x63B140;
    esp += 4; return; /* ret */

}

/**
 * sub_00343460
 * Original: 0x00343460 - 0x00343466 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343460(void)
{

loc_00343460: ;
    eax = 0x3B;
    esp += 4; return; /* ret */

}

/**
 * sub_00343470
 * Original: 0x00343470 - 0x00343476 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343470(void)
{

loc_00343470: ;
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00343480
 * Original: 0x00343480 - 0x00343486 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343480(void)
{

loc_00343480: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00343490
 * Original: 0x00343490 - 0x00343538 (168 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00343490: ;
    eax = MEM32(0x84A6C0);
    if (TEST_NZ(eax, eax)) goto loc_00343537; /* jne: not equal / not zero */

loc_0034349D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003434AB; /* jne: not equal / not zero */

loc_003434A6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003434AB: ;
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
    if (TEST_Z(esi, esi)) goto loc_003434FB; /* je: equal / zero */

loc_003434D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x110)) goto loc_003434FB; /* jb: below (unsigned <) */

loc_003434DF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003434E9: ;
    PUSH32(esp, 0x110);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003434F4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0034351F; /* jne: not equal / not zero */

loc_003434FB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034350D: ;
    PUSH32(esp, 0x110);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343518: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0034352E; /* je: equal / zero */

loc_0034351F: ;
    esi = eax;
    PUSH32(esp, 0); sub_00343540(); /* call 0x00343540 */

loc_00343526: ;
    POP32(esp, edi);
    MEM32(0x84A6C0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034352E: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84A6C0) = eax;
    POP32(esp, esi);

loc_00343537: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343540
 * Original: 0x00343540 - 0x00343574 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343540(void)
{

loc_00343540: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00344440(); /* call 0x00344440 */

loc_00343546: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x35) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM8(esi + 0xC) = LO8(eax);
    ecx = 0x10;
    edi = esi + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00343580
 * Original: 0x00343580 - 0x00343597 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343580(void)
{

loc_00343580: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = 1;
    PUSH32(esp, 0); sub_003435A0(); /* call 0x003435A0 */

loc_00343594: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003435A0
 * Original: 0x003435A0 - 0x00343600 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003435A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003435A0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    esi = esp + 0x24;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_00344600(); /* call 0x00344600 */

loc_003435C7: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    edi = esi;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00344000(); /* call 0x00344000 */

loc_003435D7: ;
    (void)0; /* cmp MEM32(esp + 0x3C), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(MEM32(esp + 0x3C), 0x10)) goto loc_003435FA; /* jb: below (unsigned <) */

loc_003435E1: ;
    eax = MEM32(esp + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    if (TEST_Z(eax, eax)) goto loc_003435FA; /* je: equal / zero */

loc_003435ED: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003435F7: ;
    esp = esp + 4;

loc_003435FA: ;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00343600
 * Original: 0x00343600 - 0x003436A5 (165 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343600: ;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = 0;
    MEM8(esp + 0x14) = 0;
    esi = eax + 1;

loc_00343624: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00343624; /* jne: not equal / not zero */

loc_0034362B: ;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00343638: ;
    edi = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_00344090(); /* call 0x00344090 */

loc_00343643: ;
    esi = eax;
    eax = ebp;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0); sub_003441E0(); /* call 0x003441E0 */

loc_00343650: ;
    if (CMP_EQ(esi, eax)) goto loc_0034367C; /* je: equal / zero */

loc_00343654: ;
    edx = esp + 0x30;
    PUSH32(esp, 0); sub_00344230(); /* call 0x00344230 */

loc_0034365D: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00343CE0(); /* call 0x00343CE0 */

loc_00343669: ;
    edi = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_003441E0(); /* call 0x003441E0 */

loc_00343674: ;
    esi = MEM32(esp + 0x30);
    if (CMP_NE(esi, eax)) goto loc_00343654; /* jne: not equal / not zero */

loc_0034367C: ;
    (void)0; /* cmp MEM32(esp + 0x28), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_B(MEM32(esp + 0x28), 0x10)) goto loc_0034369F; /* jb: below (unsigned <) */

loc_00343686: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0034369F; /* je: equal / zero */

loc_00343692: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0034369C: ;
    esp = esp + 4;

loc_0034369F: ;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003436B0
 * Original: 0x003436B0 - 0x003437AF (255 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003436B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003436B0: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003437AE; /* je: equal / zero */

loc_003436BB: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003437AE; /* je: equal / zero */

loc_003436C8: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003437AE; /* je: equal / zero */

loc_003436D5: ;
    SET_LO8(eax, MEM8(0x864EC1));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003437AD; /* jle: less or equal (signed <=) */

loc_003436E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x864EC8;
    /* nop */

loc_003436F0: ;
    PUSH32(esp, 0); sub_00299CB0(); /* call 0x00299CB0 */

loc_003436F5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00343794; /* je: equal / zero */

loc_003436FD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0034370B; /* jne: not equal / not zero */

loc_00343706: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0034370B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_00343759; /* je: equal / zero */

loc_00343731: ;
    if (CMP_B(MEM32(esi + 0x80), 0x238)) goto loc_00343759; /* jb: below (unsigned <) */

loc_0034373D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00343747: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343752: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0034377D; /* jne: not equal / not zero */

loc_00343759: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0034376B: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00343776: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00343784; /* je: equal / zero */

loc_0034377D: ;
    PUSH32(esp, 0); sub_00343420(); /* call 0x00343420 */

loc_00343782: ;
    goto loc_00343786;

loc_00343784: ;
    eax = 0; /* xor self */

loc_00343786: ;
    ecx = MEM32(edi + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00343794: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebp++;
    edi = edi + 0xA50;
    if (CMP_L(ebp, edx)) goto loc_003436F0; /* jl: less (signed <) */

loc_003437AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003437AD: ;
    POP32(esp, ebp);

loc_003437AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003437B0
 * Original: 0x003437B0 - 0x00343868 (184 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003437B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003437B0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003437C3; /* jne: not equal / not zero */

loc_003437BE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003437C3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00343811; /* je: equal / zero */

loc_003437E9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x238)) goto loc_00343811; /* jb: below (unsigned <) */

loc_003437F5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003437FF: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034380A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00343835; /* jne: not equal / not zero */

loc_00343811: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00343823: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0034382E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00343868(); return; } /* je: equal / zero */

loc_00343835: ;
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
    MEM32(eax) = 0x63B140;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343870
 * Original: 0x00343870 - 0x0034394B (219 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343884: ;
    esp = esp + 4;
    PUSH32(esp, 0xB);
    eax = edi;
    PUSH32(esp, 0); sub_00343B40(); /* call 0x00343B40 */

loc_00343890: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00343895: ;
    edi = MEM32(edi + 4);
    ebx = MEM32(edi);
    esp = esp + 4;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(ebx, edi)) goto loc_00343944; /* je: equal / zero */

loc_003438A9: ;
    PUSH32(esp, ebp);
    /* nop */

loc_003438B0: ;
    if (CMP_B(MEM32(ebx + 0x24), 0x10)) goto loc_003438BB; /* jb: below (unsigned <) */

loc_003438B6: ;
    eax = MEM32(ebx + 0x10);
    goto loc_003438BE;

loc_003438BB: ;
    eax = ebx + 0x10;

loc_003438BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0035F090(); /* call 0x0035F090 */

loc_003438C4: ;
    edx = ZX16(MEM16(0x801900));
    ecx = MEM32(0x801904);
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003438F4; /* jle: less or equal (signed <=) */

loc_003438DA: ;
    eax = SX16(LO16(eax));
    /* nop */

loc_003438E0: ;
    ebp = MEM32(ecx);
    ebp = ebp & 0xFFFF03FFu;
    if (CMP_EQ(ebp, eax)) goto loc_003438F6; /* je: equal / zero */

loc_003438EC: ;
    ecx = MEM32(ecx + 0x34);
    edi++;
    if (CMP_L(edi, edx)) goto loc_003438E0; /* jl: less (signed <) */

loc_003438F4: ;
    ecx = 0; /* xor self */

loc_003438F6: ;
    eax = MEM32(ebx + 0x28);
    edx = MEM32(ecx + 0x14);
    edi = edx + eax * 4;
    eax = MEM32(ebx + 0x2C);
    edi = edi + ecx;
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00343929; /* jle: less or equal (signed <=) */

loc_0034390A: ;
    /* nop */

loc_00343910: ;
    eax = MEM32(ebx + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0034391B: ;
    eax = MEM32(ebx + 0x2C);
    esp = esp + 4;
    edi = edi + 4;
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00343910; /* jl: less (signed <) */

loc_00343929: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00344230(); /* call 0x00344230 */

loc_00343932: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(ebx, MEM32(ecx + 4))) goto loc_003438B0; /* jne: not equal / not zero */

loc_00343943: ;
    POP32(esp, ebp);

loc_00343944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
